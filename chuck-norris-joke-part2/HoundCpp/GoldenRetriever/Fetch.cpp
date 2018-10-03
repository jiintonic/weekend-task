/* file "Fetch.cpp" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#include "Fetch.h"
#include "throwf.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>
#include <limits.h>
#include <vector>
extern "C"
  {
#define class CLASS
#include "string_index.h"
#undef class
  }


#if ((!(defined(USE_STRCASECMP_FROM_POSIX))) && \
     (!(defined(USE_STRCASECMP_FROM_STRICMP))) && \
     (!(defined(DONT_DEFINE_STRCASECMP))))

#if defined(_WIN32) || defined(_WIN64)
#define USE_STRCASECMP_FROM_STRICMP
#else
#define USE_STRCASECMP_FROM_POSIX
#endif

#endif

#ifdef USE_STRCASECMP_FROM_POSIX

#include <strings.h>

#elif defined(USE_STRCASECMP_FROM_STRICMP)

#define strcasecmp stricmp

#endif


static char *copy_and_lower(const char *input);


class SimpleFetchResult : public FetchResult
  {
  private:
    unsigned status_code;
    char *reason_phrase;
    bool own_reason_phrase;
    char *http_version;
    bool own_http_version;
    struct pair
      {
        char *key;
        char *value;
      };
    std::vector<pair> parameters;
    string_index *parameter_index;
    std::vector<unsigned char> content;
    size_t content_position;

  public:
    SimpleFetchResult(void) : status_code(0), reason_phrase(NULL),
            own_reason_phrase(false), http_version(NULL),
            own_http_version(false), content_position(0)
      {
        parameter_index = create_string_index();
        if (parameter_index == NULL)
            throw "Out of memory.";
      }
    ~SimpleFetchResult(void)
      {
        if (own_reason_phrase)
            free(reason_phrase);
        if (own_http_version)
            free(http_version);
        size_t param_count = parameters.size();
        for (size_t param_num = 0; param_num < param_count; ++param_num)
          {
            free(parameters[param_num].key);
            free(parameters[param_num].value);
          }
        assert(parameter_index != NULL);
        destroy_string_index(parameter_index);
      }

    unsigned statusCode(void)  { return status_code; }
    const char *reasonPhrase(void)  { return reason_phrase; }
    const char *httpVersion(void)  { return http_version; }
    size_t parameterCount(void)  { return parameters.size(); }
    const char *parameterKey(size_t paramNum)
      {
        assert(paramNum < parameters.size());
        return parameters[paramNum].key;
      }
    const char *parameterValue(size_t paramNum)
      {
        assert(paramNum < parameters.size());
        return parameters[paramNum].value;
      }
    const char *parameterLookup(const char *key)
      {
        char *lower_key = copy_and_lower(key);
        if (!(exists_in_string_index(parameter_index, lower_key)))
          {
            free(lower_key);
            return NULL;
          }
        size_t index =
                (size_t)(lookup_in_string_index(parameter_index, lower_key));
        free(lower_key);
        assert(index < parameters.size());
        assert(strcasecmp(parameters[index].key, key) == 0);
        return parameters[index].value;
      }
    size_t contentByteCount(void)  { return content.size(); }
    const void *contentBytes(void)  { return &(content[0]); }
    size_t readContent(void *buffer, size_t minBytes, size_t maxBytes)
      {
        if (content_position + minBytes > content.size())
          {
            throw "An attempt was made to read beyond the end of the "
                  "FetchResult content.";
          }
        size_t result =
                ((content_position + maxBytes <= content.size()) ? maxBytes :
                 content.size() - content_position);
        if (result > 0)
          {
            memcpy(buffer, &(content[content_position]), result);
            content_position += result;
          }
        return result;
      }
    bool contentDone(void)  { return content_position == content.size(); }

    void setStatusCode(unsigned new_status_code)
      { status_code = new_status_code; }
    void setReasonPhrase(const char *new_reason_phrase)
      {
        if (own_reason_phrase)
            free(reason_phrase);
        own_reason_phrase = false;
        reason_phrase = (char *)(malloc(strlen(new_reason_phrase) + 1));
        if (reason_phrase == NULL)
            throw "Out of memory.";
        own_reason_phrase = true;
        strcpy(reason_phrase, new_reason_phrase);
      }
    void setHTTPVersion(const char *new_http_version)
      {
        if (own_http_version)
            free(http_version);
        own_http_version = false;
        http_version = (char *)(malloc(strlen(new_http_version) + 1));
        if (http_version == NULL)
            throw "Out of memory.";
        own_http_version = true;
        strcpy(http_version, new_http_version);
      }
    void setParameter(const char *key, const char *value)
      {
        assert(key != NULL);
        assert(value != NULL);

        assert(value != NULL);
        char *new_value = (char *)(malloc(strlen(value) + 1));
        if (new_value == NULL)
            throw "Out of memory.";
        strcpy(new_value, value);

        char *lower_key = copy_and_lower(key);
        if (exists_in_string_index(parameter_index, lower_key))
          {
            size_t index = (size_t)(lookup_in_string_index(parameter_index,
                                                           lower_key));
            free(lower_key);
            assert(index < parameters.size());
            free(parameters[index].value);
            parameters[index].value = new_value;
            return;
          }

        assert(key != NULL);
        char *new_key = (char *)(malloc(strlen(key) + 1));
        if (new_key == NULL)
          {
            free(lower_key);
            free(new_value);
            throw "Out of memory.";
          }
        strcpy(new_key, key);

        size_t index = parameters.size();
        pair new_element;
        new_element.key = new_key;
        new_element.value = new_value;
        parameters.push_back(new_element);
        verdict the_verdict = enter_into_string_index(parameter_index,
                                                      lower_key, (void *)index);
        free(lower_key);
        if (the_verdict != MISSION_ACCOMPLISHED)
            throw "Out of memory.";
      }
    void makeContentSpace(size_t byte_count)
      { content.reserve(byte_count); }
    void addContent(size_t byte_count, const void *bytes)
      {
        const char *typed = (const char *)bytes;
        for (size_t num = 0; num < byte_count; ++num)
            content.push_back(typed[num]);
      }
  };

class SimpleFetchHandler : public FetchHandler
  {
  public:
    SimpleFetchHandler(SimpleFetchResult *init_result) : result(init_result)
      {
      }

    void handleStatusCode(unsigned code)  { result->setStatusCode(code); };
    void handleReasonPhrase(const char *message)
      { result->setReasonPhrase(message); };
    void handleHTTPVersion(const char *version)
      { result->setHTTPVersion(version); };
    void handleParameter(const char *key, const char *value)
      { result->setParameter(key, value); };
    void handleContentByteCount(size_t byteCount)
      { result->makeContentSpace(byteCount); };
    void handleContent(size_t byteCount, const void *bytes)
      { result->addContent(byteCount, bytes); };
    void handleContentEnd(void)  { };

  private:
    SimpleFetchResult *result;
  };


static char base64_encode_six_bits(unsigned int input);
static uint8_t base64_decode_six_bits(char input);
static bool base64_six_bits_are_valid(char input);
static char base64url_encode_six_bits(unsigned int input);
static uint8_t base64url_decode_six_bits(char input);
static bool base64url_six_bits_are_valid(char input);


static char default_user_agent[] = "GoldenRetriever/1.0";
static char http_prefix[] = "http://";
static char https_prefix[] = "https://";
static char script_prefix[] = "script://";


struct ExtraFetchParameterData
  {
    std::vector<std::string> keys;
    std::vector<std::string> values;
  };

static string_index *extra_fetch_parameter_index = NULL;
static std::vector<ExtraFetchParameterData *> extra_fetch_parameters;


double Fetch::default_timeout_seconds = 10;
char Fetch::user_agent_key[] = "User-Agent";


Fetch::Fetch(const char *init_url) : user_agent(default_user_agent),
        exclude_private(false), use_proxy(false), incremental_handler(NULL)
  {
    incremental_state = IS_START;
    incremental_done = false;
    string_buffer_init(&incremental_buffer, 10);
    assert(init_url != NULL);
    url = (char *)(malloc(strlen(init_url) + 1));
    if (url == NULL)
        throw "Out of memory.";
    strcpy(url, init_url);

    writer = NULL;
    reader = NULL;

    timeout_seconds = default_timeout_seconds;

    parameter_index = create_string_index();
    if (parameter_index == NULL)
      {
        free(url);
        throw "Out of memory.";
      }

    have_proxy_user_agent = false;
    proxy_parameter_index = create_string_index();
    if (proxy_parameter_index == NULL)
      {
        destroy_string_index(parameter_index);
        free(url);
        throw "Out of memory.";
      }
  }

Fetch::~Fetch(void)
  {
    assert(incremental_buffer.array != NULL);
    free(incremental_buffer.array);

    assert(url != NULL);
    free(url);

    if (writer != NULL)
        delete writer;
    if (reader != NULL)
        delete reader;

    assert(user_agent != NULL);
    if (user_agent != default_user_agent)
        free(user_agent);

    size_t proxy_param_count = proxy_parameters.size();
    for (size_t param_num = 0; param_num < proxy_param_count; ++param_num)
      {
        free(proxy_parameters[param_num].key);
        free(proxy_parameters[param_num].value);
      }
    assert(proxy_parameter_index != NULL);
    destroy_string_index(proxy_parameter_index);

    size_t param_count = parameters.size();
    for (size_t param_num = 0; param_num < param_count; ++param_num)
      {
        free(parameters[param_num].key);
        free(parameters[param_num].value);
      }
    assert(parameter_index != NULL);
    destroy_string_index(parameter_index);
  }

void Fetch::setUserAgent(const char *new_user_agent)
  {
    assert(user_agent != NULL);
    if (user_agent != default_user_agent)
        free(user_agent);

    assert(new_user_agent != NULL);
    user_agent = (char *)(malloc(strlen(new_user_agent) + 1));
    if (user_agent == NULL)
      {
        user_agent = default_user_agent;
        throw "Out of memory.";
      }
    strcpy(user_agent, new_user_agent);
  }

void Fetch::setParameter(const char *key, const char *value)
  {
    assert(key != NULL);
    assert(value != NULL);

    if (strcasecmp(key, user_agent_key) == 0)
      {
        setUserAgent(value);
        return;
      }

    char *lower_key = copy_and_lower(key);
    assert(value != NULL);
    char *new_value = (char *)(malloc(strlen(value) + 1));
    if (new_value == NULL)
        throw "Out of memory.";
    strcpy(new_value, value);

    if (exists_in_string_index(parameter_index, lower_key))
      {
        size_t index =
                (size_t)(lookup_in_string_index(parameter_index, lower_key));
        free(lower_key);
        assert(index < parameters.size());
        free(parameters[index].value);
        parameters[index].value = new_value;
        return;
      }

    assert(key != NULL);
    char *new_key = (char *)(malloc(strlen(key) + 1));
    if (new_key == NULL)
      {
        free(lower_key);
        free(new_value);
        throw "Out of memory.";
      }
    strcpy(new_key, key);

    size_t index = parameters.size();
    pair new_element;
    new_element.key = new_key;
    new_element.value = new_value;
    parameters.push_back(new_element);
    verdict the_verdict =
            enter_into_string_index(parameter_index, lower_key, (void *)index);
    free(lower_key);
    if (the_verdict != MISSION_ACCOMPLISHED)
        throw "Out of memory.";
  }

void Fetch::setBasicAuthentication(const char *username, const char *password)
  {
#define PREFIX "Basic "

    size_t username_length = strlen(username);
    size_t password_length = strlen(password);
    size_t result_length = ((username_length + password_length + 3) / 3) * 4;

    size_t buffer_length = result_length + sizeof(PREFIX) + 1;
    char *buffer = (char *)(malloc(buffer_length));
    memcpy(buffer, PREFIX, sizeof(PREFIX) - 1);
    char *follow_out = buffer + (sizeof(PREFIX) - 1);
    size_t user_prefix_count = username_length / 3;
    const char *follow_in = username;
    for (size_t user_prefix_num = 0; user_prefix_num < user_prefix_count;
         ++user_prefix_num)
      {
        assert((follow_out + 4) < (buffer + buffer_length));
        base64_encode_three(follow_out, follow_in);
        follow_out += 4;
        follow_in += 3;
      }

    const char *follow_suffix;
    size_t suffix_count;
    char colon_buffer[3];
    switch (username_length % 3)
      {
        case 0:
          {
            colon_buffer[0] = ':';
            if (password[0] == 0)
              {
                assert((follow_out + 4) < (buffer + buffer_length));
                base64_encode_last_one(follow_out, &(colon_buffer[0]));
                follow_out += 4;
                suffix_count = 0;
              }
            else
              {
                colon_buffer[1] = password[0];
                if (password[1] == 0)
                  {
                    assert((follow_out + 4) < (buffer + buffer_length));
                    base64_encode_last_two(follow_out, &(colon_buffer[0]));
                    follow_out += 4;
                    suffix_count = 0;
                  }
                else
                  {
                    colon_buffer[2] = password[1];
                    assert((follow_out + 4) < (buffer + buffer_length));
                    base64_encode_three(follow_out, &(colon_buffer[0]));
                    follow_out += 4;
                    follow_suffix = password + 2;
                    suffix_count = password_length - 2;
                  }
              }
            break;
          }
        case 1:
          {
            colon_buffer[0] = follow_in[0];
            colon_buffer[1] = ':';
            if (password[0] == 0)
              {
                assert((follow_out + 4) < (buffer + buffer_length));
                base64_encode_last_two(follow_out, &(colon_buffer[0]));
                follow_out += 4;
                suffix_count = 0;
              }
            else
              {
                colon_buffer[2] = password[0];
                assert((follow_out + 4) < (buffer + buffer_length));
                base64_encode_three(follow_out, &(colon_buffer[0]));
                follow_out += 4;
                follow_suffix = password + 1;
                suffix_count = password_length - 1;
              }
            break;
          }
        case 2:
          {
            colon_buffer[0] = follow_in[0];
            colon_buffer[1] = follow_in[1];
            colon_buffer[2] = ':';
            assert((follow_out + 4) < (buffer + buffer_length));
            base64_encode_three(follow_out, &(colon_buffer[0]));
            follow_out += 4;
            follow_suffix = password;
            suffix_count = password_length;
            break;
          }
        default:
          {
            assert(false);
            break;
          }
      }

    while (suffix_count >= 3)
      {
        assert((follow_out + 4) < (buffer + buffer_length));
        base64_encode_three(follow_out, follow_suffix);
        follow_out += 4;
        follow_suffix += 3;
        suffix_count -= 3;
      }

    switch (suffix_count)
      {
        case 0:
            assert(follow_out < (buffer + buffer_length));
            *follow_out = 0;
            break;
        case 1:
            assert((follow_out + 4) < (buffer + buffer_length));
            base64_encode_last_one(follow_out, follow_suffix);
            break;
        case 2:
            assert((follow_out + 4) < (buffer + buffer_length));
            base64_encode_last_two(follow_out, follow_suffix);
            break;
        default:
            assert(false);
            break;
      }

    setParameter("Authorization", buffer);
    free(buffer);

#undef PREFIX
  }

void Fetch::setTimeoutSeconds(double new_timeout_seconds)
  {
    timeout_seconds = new_timeout_seconds;
  }

void Fetch::setExcludePrivate(void)
  {
    exclude_private = true;
  }

void Fetch::setProxyServer(const char *new_proxy_server, unsigned port)
  {
    use_proxy = true;
    proxy_server = new_proxy_server;
    proxy_port = port;
  }

void Fetch::setProxyUserAgent(const char *new_user_agent)
  {
    assert(new_user_agent != NULL);

    have_proxy_user_agent = true;
    proxy_user_agent = new_user_agent;
  }

void Fetch::setProxyParameter(const char *key, const char *value)
  {
    assert(key != NULL);
    assert(value != NULL);

    if (strcasecmp(key, user_agent_key) == 0)
      {
        setProxyUserAgent(value);
        return;
      }

    char *lower_key = copy_and_lower(key);
    assert(value != NULL);
    char *new_value = (char *)(malloc(strlen(value) + 1));
    if (new_value == NULL)
        throw "Out of memory.";
    strcpy(new_value, value);

    if (exists_in_string_index(proxy_parameter_index, lower_key))
      {
        size_t index = (size_t)(lookup_in_string_index(proxy_parameter_index,
                                                       lower_key));
        free(lower_key);
        assert(index < proxy_parameters.size());
        free(proxy_parameters[index].value);
        proxy_parameters[index].value = new_value;
        return;
      }

    assert(key != NULL);
    char *new_key = (char *)(malloc(strlen(key) + 1));
    if (new_key == NULL)
      {
        free(lower_key);
        free(new_value);
        throw "Out of memory.";
      }
    strcpy(new_key, key);

    size_t index = proxy_parameters.size();
    pair new_element;
    new_element.key = new_key;
    new_element.value = new_value;
    proxy_parameters.push_back(new_element);
    verdict the_verdict = enter_into_string_index(proxy_parameter_index,
                                                  lower_key, (void *)index);
    free(lower_key);
    if (the_verdict != MISSION_ACCOMPLISHED)
        throw "Out of memory.";
  }

FetchResult *Fetch::get(Method method)
  {
    class Cleanup
      {
      public:
        SimpleFetchResult *result;
        ~Cleanup(void)
          {
            if (result != NULL)
                delete result;
          }
      };
    SimpleFetchResult *result = new SimpleFetchResult();
    Cleanup cleanup;
    cleanup.result = result;
    SimpleFetchHandler handler(result);
    get(&handler, method);
    cleanup.result = NULL;
    return result;
  }

void Fetch::get(FetchHandler *handler, Method method)
  {
    const char *method_name;
    switch (method)
      {
        case OPTIONS:
            method_name = "OPTIONS";
            break;
        case GET:
            method_name = "GET";
            break;
        case HEAD:
            method_name = "HEAD";
            break;
        case POST:
            method_name = "POST";
            break;
        case PUT:
            method_name = "PUT";
            break;
        case DELETE:
            method_name = "DELETE";
            break;
        case TRACE:
            method_name = "TRACE";
            break;
        case CONNECT:
            method_name = "CONNECT";
            break;
        default:
            assert(false);
      }
    doHeader(method_name);
    assert(reader != NULL);
    assert(writer != NULL);
    delete writer;
    writer = NULL;
    handleReply(handler);
  }

FetchResult *Fetch::post(size_t contentByteCount, const void *contentBytes)
  {
    SimpleFetchResult *result = new SimpleFetchResult();
    SimpleFetchHandler handler(result);
    post(contentByteCount, contentBytes, &handler);
    return result;
  }

void Fetch::post(size_t contentByteCount, const void *contentBytes,
                 FetchHandler *handler)
  {
    char buffer[(sizeof(size_t) * 3) + 1];
    sprintf(buffer, "%lu", (unsigned long)contentByteCount);
    setParameter("Content-Length", buffer);
    doHeader("POST");
    assert(reader != NULL);
    assert(writer != NULL);
    writer->write((const char *)contentBytes, contentByteCount);
    delete writer;
    writer = NULL;
    handleReply(handler);
  }

void Fetch::startPost(const char *method, FetchHandler *handler)
  {
    incremental_handler = handler;
    setParameter("Transfer-Encoding", "chunked");
    doHeader(method);
    assert(reader != NULL);
    assert(writer != NULL);
    check_for_increment_results();
  }

void Fetch::continuePost(size_t contentByteCount, const void *contentBytes)
  {
    check_for_increment_results();
    if (contentByteCount == 0)
        return;
    char buffer[(sizeof(size_t) * 3) + 1];
    sprintf(buffer, "%lx\r\n", (unsigned long)contentByteCount);
    writer->write(buffer);
    writer->write((const char *)contentBytes, contentByteCount);
    writer->write("\r\n");
  }

FetchResult *Fetch::finishPost(void)
  {
    SimpleFetchResult *result = new SimpleFetchResult();
    try
      {
        SimpleFetchHandler handler(result);
        finishPost(&handler);
      }
    catch (char *e1)
      {
        delete result;
        throw(e1);
      }
    catch (const char *e1)
      {
        delete result;
        throw(e1);
      }
    return result;
  }

void Fetch::finishPost(FetchHandler *handler)
  {
    assert((incremental_handler == NULL) || (incremental_handler == handler));
    writer->write("0\r\n\r\n");
    delete writer;
    writer = NULL;
    if (incremental_handler == NULL)
      {
        handleReply(handler);
      }
    else
      {
        while (!incremental_done)
          {
            char buffer[2560];
            ssize_t actual = reader->read_bytes(&(buffer[0]), 2560);
            assert(actual <= 2560);
            if (actual <= 0)
                break;
            handle_incremental_bytes(actual, &(buffer[0]));
          }
        incremental_handler->handleContentEnd();
      }
  }

FetchResult *Fetch::get(const char *url, const char *user_agent,
                        double timeout_seconds, Method method)
  {
    Fetch fetch(url);
    if (user_agent != NULL)
        fetch.setUserAgent(user_agent);
    fetch.setTimeoutSeconds(timeout_seconds);
    return fetch.get(method);
  }

void Fetch::get(FetchHandler *handler, const char *url, const char *user_agent,
                double timeout_seconds, Method method)
  {
    Fetch fetch(url);
    if (user_agent != NULL)
        fetch.setUserAgent(user_agent);
    fetch.setTimeoutSeconds(timeout_seconds);
    fetch.get(handler, method);
  }

FetchResult *Fetch::post(size_t contentByteCount, const void *contentBytes,
        const char *url, const char *user_agent, double timeout_seconds)
  {
    Fetch fetch(url);
    if (user_agent != NULL)
        fetch.setUserAgent(user_agent);
    fetch.setTimeoutSeconds(timeout_seconds);
    return fetch.post(contentByteCount, contentBytes);
  }

void Fetch::post(size_t contentByteCount, const void *contentBytes,
        FetchHandler *handler, const char *url, const char *user_agent,
        double timeout_seconds)
  {
    Fetch fetch(url);
    if (user_agent != NULL)
        fetch.setUserAgent(user_agent);
    fetch.setTimeoutSeconds(timeout_seconds);
    fetch.post(contentByteCount, contentBytes, handler);
  }

HTTPRawWriter *Fetch::openRaw(const char *url, const char *method,
                              Fetch **fetch_location)
  {
    Fetch *fetch = new Fetch(url);

    fetch->doPreHeader(method);
    assert(fetch->reader != NULL);
    assert(fetch->writer != NULL);

    size_t host_start;
    size_t host_length;
    unsigned port;
    size_t path_start;
    size_t path_length;
    bool is_ssl;
    bool is_script;
    parseURL(url, &host_start, &host_length, &port, &path_start, &path_length,
             &is_ssl, &is_script);

    fetch->writer->write(method);
    fetch->writer->write(" ");
    if (path_length == 0)
        fetch->writer->write("/");
    else
        fetch->writer->write(&(url[path_start]), path_length);
    fetch->writer->write(" HTTP/1.1\r\n");

    fetch->writer->write("Host: ");
    fetch->writer->write(&(url[host_start]), host_length);
    fetch->writer->write("\r\n");

    if (fetch_location != NULL)
        *fetch_location = fetch;
    return fetch->writer;
  }

void Fetch::parseURL(const char *url, size_t *host_start, size_t *host_length,
        unsigned *port, size_t *path_start, size_t *path_length, bool *is_ssl,
        bool *is_script)
  {
    assert(url != NULL);
    assert(host_start != NULL);
    assert(host_length != NULL);
    assert(port != NULL);
    assert(path_start != NULL);
    assert(path_length != NULL);
    assert(is_ssl != NULL);

    const char *follow;
    if (strncmp(url, http_prefix, strlen(http_prefix)) == 0)
      {
        *is_ssl = false;
        if (is_script != NULL)
            *is_script = false;
        follow = url + strlen(http_prefix);
      }
    else if (strncmp(url, https_prefix, strlen(https_prefix)) == 0)
      {
        *is_ssl = true;
        if (is_script != NULL)
            *is_script = false;
        follow = url + strlen(https_prefix);
      }
    else if ((is_script != NULL) &&
             (strncmp(url, script_prefix, strlen(script_prefix)) == 0))
      {
        *is_script = true;
        follow = url + strlen(script_prefix);
      }
    else
      {
        throw "URL prefix not recognized.";
      }

    if (*follow == '[')
      {
        ++follow;
        *host_start = follow - url;
        while (true)
          {
            if (*follow == 0)
                throw "Bad URL: unclosed literal IPv6 address.";
            if (*follow == ']')
              {
                *host_length = (follow - url) - *host_start;
                ++follow;
                if (*follow == 0)
                    goto host_only;
                if (*follow == ':')
                    goto port_specifier;
                if (*follow == '/')
                    goto do_path_start;
                throw "Bad URL: garbage after literal IPv6 address.";
              }
            if ((*follow != ':') && (*follow != '.') &&
                ((*follow < '0') || (*follow > '9')) &&
                ((*follow < 'a') || (*follow > 'f')) &&
                ((*follow < 'A') || (*follow > 'F')))
              {
                throwf("Bad URL: bad character `%c' in literal IPv6 address.",
                       *follow);
              }
            ++follow;
          }
      }
    *host_start = follow - url;
    while (true)
      {
        if (*follow == 0)
          {
            *host_length = (follow - url) - *host_start;
          host_only:
            if ((is_script == NULL) || (!*is_script))
                *port = (*is_ssl ? 443 : 80);
            *path_start = follow - url;
            *path_length = 0;
            return;
          }
        if (*follow == ':')
          {
            *host_length = (follow - url) - *host_start;
          port_specifier:
            ++follow;
            unsigned local_port = 0;
            while ((*follow != 0) && (*follow != '/'))
              {
                char this_char = *follow;
                unsigned digit;
                if ((this_char >= '0') && (this_char <= '9'))
                    digit = this_char - '0';
                else
                    throw "Bad URL: non-digit in port.";
                if (local_port >= (((1 << 16) - digit) / 10))
                    throw "Overflow in port number.";
                local_port = ((local_port * 10) + digit);
                ++follow;
              }
            *port = local_port;
            break;
          }
        if (*follow == '/')
          {
            *host_length = (follow - url) - *host_start;
          do_path_start:
            if ((is_script == NULL) || (!*is_script))
                *port = (*is_ssl ? 443 : 80);
            break;
          }
        ++follow;
      }

    *path_start = follow - url;
    const char *end = follow;
    while (*end != 0)
        ++end;
    *path_length = end - follow;
    return;
  }

void Fetch::doHeader(const char *method)
  {
    doPreHeader(method);
    assert(reader != NULL);
    assert(writer != NULL);

    size_t host_start;
    size_t host_length;
    unsigned port;
    size_t path_start;
    size_t path_length;
    bool is_ssl;
    bool is_script;
    parseURL(url, &host_start, &host_length, &port, &path_start, &path_length,
             &is_ssl, &is_script);

    writer->write(method);
    writer->write(" ");
    if (use_proxy & !is_ssl)
      {
        writer->write(&(url[host_start]),
                      (path_start - host_start) + path_length);
      }
    else if (path_length == 0)
      {
        writer->write("/");
      }
    else
      {
        writer->write(&(url[path_start]), path_length);
      }
    writer->write(" HTTP/1.1\r\n");

    writer->write("Host: ");
    writer->write(&(url[host_start]), host_length);
    writer->write("\r\n");

    writer->write(user_agent_key);
    writer->write(": ");
    writer->write(user_agent);
    writer->write("\r\n");

    size_t param_count = parameters.size();
    for (size_t param_num = 0; param_num < param_count; ++param_num)
      {
        writer->write(parameters[param_num].key);
        writer->write(": ");
        writer->write(parameters[param_num].value);
        writer->write("\r\n");
      }
    if (extra_fetch_parameter_index != NULL)
      {
        char *host_name = new char[host_length + 1];
        memcpy(host_name, &(url[host_start]), host_length);
        host_name[host_length] = 0;
        ExtraFetchParameterData *extra_parameter_data =
                (ExtraFetchParameterData *)(lookup_in_string_index(
                        extra_fetch_parameter_index, host_name));
        delete[] host_name;
        if (extra_parameter_data != NULL)
          {
            size_t extra_param_count = extra_parameter_data->keys.size();
            assert(extra_param_count == extra_parameter_data->values.size());
            for (size_t param_num = 0; param_num < extra_param_count;
                 ++param_num)
              {
                writer->write(extra_parameter_data->keys[param_num].c_str());
                writer->write(": ");
                writer->write(extra_parameter_data->values[param_num].c_str());
                writer->write("\r\n");
              }
          }
      }

    writer->write("\r\n");
  }

void Fetch::handleReply(FetchHandler *handler)
  {
    assert(reader != NULL);

    handle_first_line(reader->readLine(), handler);
    handleParametersAndBody(handler, reader);
  }

void Fetch::check_for_increment_results(void)
  {
    if (incremental_handler == NULL)
        return;
    while ((!incremental_done) && reader->has_bytes())
      {
        char buffer[2560];
        ssize_t actual = reader->read_bytes(&(buffer[0]), 2560);
        assert(actual <= 2560);
        if (actual <= 0)
            break;
        handle_incremental_bytes(actual, &(buffer[0]));
      }
  }

void Fetch::handle_incremental_bytes(size_t count, char *data)
  {
    assert(incremental_handler != NULL);

    size_t count_left = count;
    char *data_left = data;
    while (count_left > 0)
      {
        switch (incremental_state)
          {
            case IS_START:
            case IS_HEADERS:
              {
                char *follow = data_left;
                size_t remainder = count_left;
                while ((remainder > 0) && (*follow != '\n'))
                  {
                    ++follow;
                    --remainder;
                  }
                if (remainder > 0)
                  {
                    char *line;
                    size_t count;
                    if (incremental_buffer.element_count > 0)
                      {
                        string_buffer_append_array(&incremental_buffer,
                                (count_left - remainder), data_left);
                        string_buffer_append(&incremental_buffer, 0);
                        line = incremental_buffer.array;
                        count = incremental_buffer.element_count;
                      }
                    else
                      {
                        line = data_left;
                        count = follow - data_left;
                        *follow = 0;
                      }
                    if ((count > 0) && (line[count - 1] == '\r'))
                        line[count - 1] = 0;
                    if (line[0] == 0)
                      {
                        incremental_handler->handleHeaderDone();
                        if (chunked)
                          {
                            chunk_count_remaining = 0;
                            incremental_state = IS_CHUNK_COUNT;
                          }
                        else
                          {
                            incremental_state = IS_BODY;
                          }
                      }
                    else if (incremental_state == IS_START)
                      {
                        handle_first_line(line, incremental_handler);
                        incremental_state = IS_HEADERS;
                      }
                    else
                      {
                        handle_header_line(line, incremental_handler);
                      }
                    incremental_buffer.element_count = 0;
                    data_left = follow + 1;
                    count_left = remainder - 1;
                    continue;
                  }
                string_buffer_append_array(&incremental_buffer, count_left,
                                           data_left);
                return;
              }
            case IS_BODY:
              {
                if (!chunked)
                  {
                    incremental_handler->handleContent(count_left, data_left);
                    return;
                  }
                if (chunk_count_remaining > count_left)
                  {
                    chunk_count_remaining -= count_left;
                    incremental_handler->handleContent(count_left, data_left);
                    return;
                  }
                incremental_handler->handleContent(chunk_count_remaining,
                                                   data_left);
                data_left += chunk_count_remaining;
                count_left -= chunk_count_remaining;
                chunk_count_remaining = 0;
                incremental_state = IS_CONTROL_R;
                continue;
              }
            case IS_CONTROL_R:
              {
                if (*data_left == '\r')
                  {
                    ++data_left;
                    --count_left;
                  }
                incremental_state = IS_CONTROL_N;
                continue;
              }
            case IS_CONTROL_N:
              {
                if (*data_left == '\n')
                  {
                    ++data_left;
                    --count_left;
                  }
                incremental_state = IS_CHUNK_COUNT;
                continue;
              }
            case IS_CHUNK_COUNT:
              {
                assert(chunked);
                switch (*data_left)
                  {
                    case '\n':
                        if (chunk_count_remaining == 0)
                            incremental_done = true;
                        incremental_state = IS_BODY;
                        break;
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                        chunk_count_remaining *= 16;
                        chunk_count_remaining += *data_left - '0';
                        break;
                    case 'a':
                    case 'b':
                    case 'c':
                    case 'd':
                    case 'e':
                    case 'f':
                        chunk_count_remaining *= 16;
                        chunk_count_remaining += (*data_left - 'a') + 0xa;
                        break;
                    case 'A':
                    case 'B':
                    case 'C':
                    case 'D':
                    case 'E':
                    case 'F':
                        chunk_count_remaining *= 16;
                        chunk_count_remaining += (*data_left - 'A') + 0xa;
                        break;
                    default:
                        break;
                  }
                ++data_left;
                --count_left;
                continue;
              }
            default:
              {
                assert(false);
              }
          }
      }
  }

void Fetch::handle_first_line(char *first_line, FetchHandler *handler)
  {
    char *follow = first_line;
    while (*follow != ' ')
      {
        if (*follow == 0)
          {
            reader->check_for_errors();
            throwf("Bad first line in response: %s.", first_line);
          }
        ++follow;
      }
    *follow = 0;
    ++follow;
    handler->handleHTTPVersion(first_line);
    unsigned code = 0;
    for (size_t num = 0; num < 3; ++num)
      {
        if ((*follow < '0') || (*follow > '9'))
            throw "Bad first line in response.";
        code = ((code * 10) + (*follow - '0'));
        ++follow;
      }
    handler->handleStatusCode(code);
    have_content_length = (code == 204);
    if (*follow != ' ')
        throw "Bad first line in response.";
    ++follow;
    const char *reason_phrase = follow;
    while (*follow != 0)
        ++follow;
    handler->handleReasonPhrase(reason_phrase);
  }

GoldenRetriever::GoldenRetriever(void) : have_content_length(false),
        content_length(0), chunked(false)
  {
  }

void GoldenRetriever::handle_header_line(char *this_line, HTTPHandler *handler)
  {
    char *follow = this_line;
    while (*follow != ':')
        ++follow;
    *follow = 0;
    ++follow;
    while (*follow == ' ')
        ++follow;
    handler->handleParameter(this_line, follow);

    if (strcasecmp(this_line, "Content-Length") == 0)
      {
        content_length = 0;
        while (*follow != 0)
          {
            if ((*follow < '0') || (*follow > '9'))
                throw "Bad Content-Length field.";
            if (content_length > ((ULONG_MAX - (*follow - '0')) / 10))
                throw "Overflow in Content-Length field.";
            content_length = ((content_length * 10) + (*follow - '0'));
            ++follow;
          }
        have_content_length = true;
      }
    else if (strcasecmp(this_line, "Transfer-Encoding") == 0)
      {
        if (strcasecmp(follow, "chunked") != 0)
            throw "Unsupported Transfer-Encoding field.";
        chunked = true;
      }
  }

void GoldenRetriever::handleParametersAndBody(HTTPHandler *handler,
                                              HTTPRawReader *reader)
  {
    while (true)
      {
        char *this_line = reader->readLine();
        if (this_line[0] == 0)
            break;
        handle_header_line(this_line, handler);
      }

    handler->handleHeaderDone();

    if (chunked)
      {
        while (true)
          {
            unsigned long chunk_byte_count = 0;
            while (true)
              {
                char buffer[1];
                ssize_t num = reader->read_bytes(&(buffer[0]), 1);
                if (num < 1)
                    throw "Unexpected end of chunk header.";
                if (buffer[0] == '\r')
                    break;
                if (buffer[0] == ' ')
                    continue;
                unsigned long digit;
                if ((buffer[0] >= '0') && (buffer[0] <= '9'))
                    digit = buffer[0] - '0';
                else if ((buffer[0] >= 'a') && (buffer[0] <= 'f'))
                    digit = (buffer[0] - 'a') + 0xa;
                else if ((buffer[0] >= 'A') && (buffer[0] <= 'F'))
                    digit = (buffer[0] - 'A') + 0xa;
                else
                    throw "Bad digit in chunk header.";
                if (chunk_byte_count >= (ULONG_MAX - digit) / 16)
                    throw "Overflow in chunk header.";
                chunk_byte_count = (chunk_byte_count * 16) + digit;
              }

            if (chunk_byte_count == 0)
                break;

              {
                char buffer[1];
                ssize_t num = reader->read_bytes(&(buffer[0]), 1);
                if (num < 1)
                    throw "Unexpected end of chunk header.";
                if (buffer[0] != '\n')
                    throw "Bad end-of-line in chunk header.";
              }

            while (chunk_byte_count > 0)
              {
                char buffer[256];
                ssize_t num = reader->read_bytes(&(buffer[0]),
                        ((chunk_byte_count > 256) ? 256 : chunk_byte_count));
                if (num < 1)
                    break;
                handler->handleContent((size_t)num, &(buffer[0]));
                chunk_byte_count -= num;
              }

              {
                char buffer[1];
                ssize_t num = reader->read_bytes(&(buffer[0]), 1);
                if (num < 1)
                    throw "Unexpected end of chunk.";
                if (buffer[0] != '\r')
                    throw "Bad end-of-line in chunk.";
              }

              {
                char buffer[1];
                ssize_t num = reader->read_bytes(&(buffer[0]), 1);
                if (num < 1)
                    throw "Unexpected end of chunk.";
                if (buffer[0] != '\n')
                    throw "Bad end-of-line in chunk.";
              }
          }

        /* @@@ */
        /* @@@ -- Read the trailer. */
        /* @@@ */
      }
    else if (have_content_length)
      {
        while (content_length > 0)
          {
            char buffer[256];
            ssize_t num = reader->read_bytes(&(buffer[0]),
                    ((content_length > 256) ? 256 : content_length));
            if (num < 1)
                break;
            assert((unsigned long)num <= content_length);
            handler->handleContent((size_t)num, &(buffer[0]));
            content_length -= num;
          }
      }
    else
      {
        while (true)
          {
            char buffer[256];
            ssize_t num = reader->read_bytes(&(buffer[0]), 256);
            if (num < 1)
                break;
            handler->handleContent((size_t)num, &(buffer[0]));
          }
      }
    handler->handleContentEnd();
  }

extern void base64_encode_three(char *output, const char *input)
  {
    unsigned int bits0 = (unsigned char)(input[0]);
    unsigned int bits1 = (unsigned char)(input[1]);
    unsigned int bits2 = (unsigned char)(input[2]);
    output[0] = base64_encode_six_bits(bits0 >> 2);
    output[1] = base64_encode_six_bits(((bits0 & 0x3) << 4) | (bits1 >> 4));
    output[2] = base64_encode_six_bits(((bits1 & 0xf) << 2) | (bits2 >> 6));
    output[3] = base64_encode_six_bits(bits2 & 0x3f);
  }

extern void base64_encode_last_two(char *output, const char *input)
  {
    unsigned int bits0 = (unsigned char)(input[0]);
    unsigned int bits1 = (unsigned char)(input[1]);
    output[0] = base64_encode_six_bits(bits0 >> 2);
    output[1] = base64_encode_six_bits(((bits0 & 0x3) << 4) | (bits1 >> 4));
    output[2] = base64_encode_six_bits((bits1 & 0xf) << 2);
    output[3] = '=';
    output[4] = 0;
  }

extern void base64_encode_last_one(char *output, const char *input)
  {
    unsigned int bits0 = (unsigned char)(input[0]);
    output[0] = base64_encode_six_bits(bits0 >> 2);
    output[1] = base64_encode_six_bits((bits0 & 0x3) << 4);
    output[2] = '=';
    output[3] = '=';
    output[4] = 0;
  }

extern bool is_valid_base64(const char *encoded_bytes,
                            size_t encoded_byte_count)
  {
    assert(encoded_bytes != NULL);

    if ((encoded_byte_count % 4) != 0)
        return false;

    const char *follow_encoded = encoded_bytes;
    for (size_t num = 0; num < (encoded_byte_count / 4) - 1; ++num)
      {
        if (!(base64_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[1])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[2])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[3])))
            return false;
        follow_encoded += 4;
      }
    if (encoded_byte_count == 0)
        return true;
    if (follow_encoded[2] == '=')
      {
        if (follow_encoded[3] != '=')
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[1])))
            return false;
        uint8_t bits1 = base64_decode_six_bits(follow_encoded[1]);
        if ((bits1 & 0xf) != 0)
            return false;
      }
    else if (follow_encoded[3] == '=')
      {
        if (!(base64_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[1])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[2])))
            return false;
        uint8_t bits2 = base64_decode_six_bits(follow_encoded[2]);
        assert((bits2 & 0x3) == 0);
      }
    else
      {
        if (!(base64_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[1])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[2])))
            return false;
        if (!(base64_six_bits_are_valid(follow_encoded[3])))
            return false;
      }

    return true;
  }

extern void base64_decode(const char *encoded_bytes, size_t encoded_byte_count,
                          uint8_t *decoded)
  {
    assert(encoded_bytes != NULL);
    assert((encoded_byte_count % 4) == 0);
    assert(decoded != NULL);

    const char *follow_encoded = encoded_bytes;
    uint8_t *follow_decoded = decoded;
    for (size_t num = 0; num < (encoded_byte_count / 4) - 1; ++num)
      {
        uint8_t bits0 = base64_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64_decode_six_bits(follow_encoded[1]);
        uint8_t bits2 = base64_decode_six_bits(follow_encoded[2]);
        uint8_t bits3 = base64_decode_six_bits(follow_encoded[3]);
        follow_encoded += 4;
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        *follow_decoded = ((bits1 & 0xf) << 4) | (bits2 >> 2);
        ++follow_decoded;
        *follow_decoded = ((bits2 & 0x3) << 6) | bits3;
        ++follow_decoded;
      }
    if (encoded_byte_count == 0)
        return;
    if (follow_encoded[2] == '=')
      {
        assert(follow_encoded[3] == '=');
        uint8_t bits0 = base64_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64_decode_six_bits(follow_encoded[1]);
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        assert((bits1 & 0xf) == 0);
      }
    else if (follow_encoded[3] == '=')
      {
        uint8_t bits0 = base64_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64_decode_six_bits(follow_encoded[1]);
        uint8_t bits2 = base64_decode_six_bits(follow_encoded[2]);
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        *follow_decoded = ((bits1 & 0xf) << 4) | (bits2 >> 2);
        ++follow_decoded;
        assert((bits2 & 0x3) == 0);
      }
    else
      {
        uint8_t bits0 = base64_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64_decode_six_bits(follow_encoded[1]);
        uint8_t bits2 = base64_decode_six_bits(follow_encoded[2]);
        uint8_t bits3 = base64_decode_six_bits(follow_encoded[3]);
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        *follow_decoded = ((bits1 & 0xf) << 4) | (bits2 >> 2);
        ++follow_decoded;
        *follow_decoded = ((bits2 & 0x3) << 6) | bits3;
        ++follow_decoded;
      }
  }

extern void base64url_encode_three(char *output, const char *input)
  {
    unsigned int bits0 = (unsigned char)(input[0]);
    unsigned int bits1 = (unsigned char)(input[1]);
    unsigned int bits2 = (unsigned char)(input[2]);
    output[0] = base64url_encode_six_bits(bits0 >> 2);
    output[1] = base64url_encode_six_bits(((bits0 & 0x3) << 4) | (bits1 >> 4));
    output[2] = base64url_encode_six_bits(((bits1 & 0xf) << 2) | (bits2 >> 6));
    output[3] = base64url_encode_six_bits(bits2 & 0x3f);
  }

extern void base64url_encode_last_two(char *output, const char *input)
  {
    unsigned int bits0 = (unsigned char)(input[0]);
    unsigned int bits1 = (unsigned char)(input[1]);
    output[0] = base64url_encode_six_bits(bits0 >> 2);
    output[1] = base64url_encode_six_bits(((bits0 & 0x3) << 4) | (bits1 >> 4));
    output[2] = base64url_encode_six_bits((bits1 & 0xf) << 2);
    output[3] = '=';
    output[4] = 0;
  }

extern void base64url_encode_last_one(char *output, const char *input)
  {
    unsigned int bits0 = (unsigned char)(input[0]);
    output[0] = base64url_encode_six_bits(bits0 >> 2);
    output[1] = base64url_encode_six_bits((bits0 & 0x3) << 4);
    output[2] = '=';
    output[3] = '=';
    output[4] = 0;
  }

extern bool is_valid_base64url(const char *encoded_bytes,
                               size_t encoded_byte_count)
  {
    assert(encoded_bytes != NULL);

    if ((encoded_byte_count % 4) != 0)
        return false;

    const char *follow_encoded = encoded_bytes;
    for (size_t num = 0; num < (encoded_byte_count / 4) - 1; ++num)
      {
        if (!(base64url_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[1])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[2])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[3])))
            return false;
        follow_encoded += 4;
      }
    if (encoded_byte_count == 0)
        return true;
    if (follow_encoded[2] == '=')
      {
        if (follow_encoded[3] != '=')
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[1])))
            return false;
        uint8_t bits1 = base64url_decode_six_bits(follow_encoded[1]);
        if ((bits1 & 0xf) != 0)
            return false;
      }
    else if (follow_encoded[3] == '=')
      {
        if (!(base64url_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[1])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[2])))
            return false;
        uint8_t bits2 = base64url_decode_six_bits(follow_encoded[2]);
        if ((bits2 & 0x3) != 0)
            return false;
      }
    else
      {
        if (!(base64url_six_bits_are_valid(follow_encoded[0])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[1])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[2])))
            return false;
        if (!(base64url_six_bits_are_valid(follow_encoded[3])))
            return false;
      }

    return true;
  }

extern void base64url_decode(const char *encoded_bytes,
                             size_t encoded_byte_count, uint8_t *decoded)
  {
    assert(encoded_bytes != NULL);
    assert((encoded_byte_count % 4) == 0);
    assert(decoded != NULL);

    const char *follow_encoded = encoded_bytes;
    uint8_t *follow_decoded = decoded;
    for (size_t num = 0; num < (encoded_byte_count / 4) - 1; ++num)
      {
        uint8_t bits0 = base64url_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64url_decode_six_bits(follow_encoded[1]);
        uint8_t bits2 = base64url_decode_six_bits(follow_encoded[2]);
        uint8_t bits3 = base64url_decode_six_bits(follow_encoded[3]);
        follow_encoded += 4;
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        *follow_decoded = ((bits1 & 0xf) << 4) | (bits2 >> 2);
        ++follow_decoded;
        *follow_decoded = ((bits2 & 0x3) << 6) | bits3;
        ++follow_decoded;
      }
    if (encoded_byte_count == 0)
        return;
    if (follow_encoded[2] == '=')
      {
        assert(follow_encoded[3] == '=');
        uint8_t bits0 = base64url_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64url_decode_six_bits(follow_encoded[1]);
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        assert((bits1 & 0xf) == 0);
      }
    else if (follow_encoded[3] == '=')
      {
        uint8_t bits0 = base64url_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64url_decode_six_bits(follow_encoded[1]);
        uint8_t bits2 = base64url_decode_six_bits(follow_encoded[2]);
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        *follow_decoded = ((bits1 & 0xf) << 4) | (bits2 >> 2);
        ++follow_decoded;
        assert((bits2 & 0x3) == 0);
      }
    else
      {
        uint8_t bits0 = base64url_decode_six_bits(follow_encoded[0]);
        uint8_t bits1 = base64url_decode_six_bits(follow_encoded[1]);
        uint8_t bits2 = base64url_decode_six_bits(follow_encoded[2]);
        uint8_t bits3 = base64url_decode_six_bits(follow_encoded[3]);
        *follow_decoded = (bits0 << 2) | (bits1 >> 4);
        ++follow_decoded;
        *follow_decoded = ((bits1 & 0xf) << 4) | (bits2 >> 2);
        ++follow_decoded;
        *follow_decoded = ((bits2 & 0x3) << 6) | bits3;
        ++follow_decoded;
      }
  }

extern void set_extra_fetch_parameter(const char *host_name,
                                      const char *field_name, const char *value)
  {
    assert(host_name != NULL);
    assert(field_name != NULL);
    assert(value != NULL);

    if (extra_fetch_parameter_index == NULL)
        extra_fetch_parameter_index = create_string_index();
    ExtraFetchParameterData *the_data = (ExtraFetchParameterData *)
            (lookup_in_string_index(extra_fetch_parameter_index, host_name));
    if (the_data == NULL)
      {
        the_data = new ExtraFetchParameterData();
        enter_into_string_index(extra_fetch_parameter_index, host_name,
                                the_data);
        extra_fetch_parameters.push_back(the_data);
      }
    size_t count = the_data->keys.size();
    assert(count == the_data->values.size());
    for (size_t num = 0; num < count; ++num)
      {
        if (strcmp(the_data->keys[num].c_str(), field_name) == 0)
          {
            the_data->values[num] = value;
            return;
          }
      }
    the_data->keys.push_back(field_name);
    the_data->values.push_back(value);
  }

extern void clear_extra_fetch_parameters(const char *host_name)
  {
    if (extra_fetch_parameter_index == NULL)
        return;
    enter_into_string_index(extra_fetch_parameter_index, host_name, NULL);
  }


static char base64_encode_six_bits(unsigned int input)
  {
    assert(input < 64);
    if (input < 26)
        return input + 'A';
    if (input < 52)
        return (input - 26) + 'a';
    if (input < 62)
        return (input - 52) + '0';
    if (input == 62)
        return '+';
    assert(input == 63);
    return '/';
  }

static uint8_t base64_decode_six_bits(char input)
  {
    if ((input >= 'A') && (input <= 'Z'))
        return input - 'A';
    if ((input >= 'a') && (input <= 'z'))
        return (input - 'a') + 26;
    if ((input >= '0') && (input <= '9'))
        return (input - '0') + 52;
    if (input == '+')
        return 62;
    assert(input == '/');
    return 63;
  }

static bool base64_six_bits_are_valid(char input)
  {
    if ((input >= 'A') && (input <= 'Z'))
        return true;
    if ((input >= 'a') && (input <= 'z'))
        return true;
    if ((input >= '0') && (input <= '9'))
        return true;
    if (input == '+')
        return true;
    if (input == '/')
        return true;
    return false;
  }

static char base64url_encode_six_bits(unsigned int input)
  {
    assert(input < 64);
    if (input < 26)
        return input + 'A';
    if (input < 52)
        return (input - 26) + 'a';
    if (input < 62)
        return (input - 52) + '0';
    if (input == 62)
        return '-';
    assert(input == 63);
    return '_';
  }

static uint8_t base64url_decode_six_bits(char input)
  {
    if ((input >= 'A') && (input <= 'Z'))
        return input - 'A';
    if ((input >= 'a') && (input <= 'z'))
        return (input - 'a') + 26;
    if ((input >= '0') && (input <= '9'))
        return (input - '0') + 52;
    if (input == '-')
        return 62;
    assert(input == '_');
    return 63;
  }

static bool base64url_six_bits_are_valid(char input)
  {
    if ((input >= 'A') && (input <= 'Z'))
        return true;
    if ((input >= 'a') && (input <= 'z'))
        return true;
    if ((input >= '0') && (input <= '9'))
        return true;
    if (input == '-')
        return true;
    if (input == '_')
        return true;
    return false;
  }

static char *copy_and_lower(const char *input)
  {
    char *result = (char *)(malloc(strlen(input) + 1));
    if (result == NULL)
        throw "Out of memory.";
    const char *follow_in = input;
    char *follow_out = result;
    while (true)
      {
        if (*follow_in == 0)
          {
            *follow_out = 0;
            return result;
          }
        *follow_out = tolower(*follow_in);
        ++follow_in;
        ++follow_out;
      }
  }


class CleanupFetch
  {
  public:
    CleanupFetch(void)  { }
    ~CleanupFetch(void)
      {
        if (extra_fetch_parameter_index != NULL)
            destroy_string_index(extra_fetch_parameter_index);
        size_t count = extra_fetch_parameters.size();
        for (size_t num = 0; num < count; ++num)
            delete extra_fetch_parameters[num];
      }
  };

CleanupFetch cleanup_fetch;
