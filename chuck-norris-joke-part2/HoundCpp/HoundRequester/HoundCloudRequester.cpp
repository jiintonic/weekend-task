/* file "HoundCloudRequester.cpp" */

/* Copyright 2014-2018 SoundHound, Incorporated.  All rights reserved. */


#include "HoundCloudRequester.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
#include "RequestInfoJSON.h"
#include "HoundServerJSON.h"
#include "HoundPartialTranscriptJSON.h"
#include "HoundMessageJSON.h"
#include "Fetch.h"
#include "URL.h"
#include "JSONWriter.h"
#include "JSONIncrementalParse.h"
#include "build_info.h"
#include "HoundHMACSHA256.h"
#include "HoundUnixTimeStamp.h"
#include "HoundSharedDoneFlag.h"
#include "OInteger.h"


static void throw_error_result(const char *url, const char *e1,
                               RequestInfoJSON *request_info, bool free_e1);


void HoundCloudRequester::set_up_fetch(Fetch *fetcher,
        ConversationStateJSON *conversation_state,
        RequestInfoJSON *request_info)
  {
    fetcher->setUserAgent("HoundCloudRequesterCpp/1.0");

    if (use_proxy)
      {
        fetcher->setProxyServer(proxy_server.c_str(), proxy_port);
        size_t param_count = proxy_parameters.size();
        for (size_t param_num = 0; param_num < param_count; ++param_num)
          {
            fetcher->setProxyParameter(proxy_parameters[param_num].key,
                                       proxy_parameters[param_num].value);
          }
      }

    request_info->add_reference();
    OInteger time_stamp = OInteger::from_int64_t(hound_unix_time_stamp());
    request_info->setTimeStamp(time_stamp);
    if (conversation_state != NULL)
        request_info->setConversationState(conversation_state);
    std::string request_id_string = request_info->getRequestID();
    const char *request_id = request_id_string.c_str();
    request_info->setUserID(user_id);
    request_info->setClientID(client_id);
    request_info->setPartialTranscriptsDesired(true);
    request_info->setObjectByteCountPrefix(false);
    request_info->setResultVersionAccepted(1.1);
    request_info->setSDK("C++");
      {
        JSONObjectValue *sdk_info = new JSONObjectValue();

        JSONStringValue *sdk_variant = new JSONStringValue("Standard");
        sdk_info->setField("SDKVariant", sdk_variant);
        sdk_variant->remove_reference();

        JSONStringValue *sdk_private_domains =
                new JSONStringValue("");
        sdk_info->setField("SDKPrivateDomains", sdk_private_domains);
        sdk_private_domains->remove_reference();

        JSONStringValue *build_user_value = new JSONStringValue(build_user);
        sdk_info->setField("BuildUser", build_user_value);
        build_user_value->remove_reference();

        JSONStringValue *build_date_value = new JSONStringValue(build_date);
        sdk_info->setField("BuildDate", build_date_value);
        build_date_value->remove_reference();

        JSONStringValue *build_machine_value =
                new JSONStringValue(build_machine);
        sdk_info->setField("BuildMachine", build_machine_value);
        build_machine_value->remove_reference();

        JSONStringValue *build_svn_revision_value =
                new JSONStringValue(build_svn_revision);
        sdk_info->setField("BuildSVNRevision", build_svn_revision_value);
        build_svn_revision_value->remove_reference();

        JSONStringValue *build_svn_branch_value =
                new JSONStringValue(build_svn_branch);
        sdk_info->setField("BuildSVNBranch", build_svn_branch_value);
        build_svn_branch_value->remove_reference();

        JSONStringValue *build_number_value = new JSONStringValue(build_number);
        sdk_info->setField("BuildNumber", build_number_value);
        build_number_value->remove_reference();

        JSONStringValue *build_kind_value = new JSONStringValue(build_kind);
        sdk_info->setField("BuildKind", build_kind_value);
        build_kind_value->remove_reference();

        JSONStringValue *build_variant_value =
                new JSONStringValue(build_variant);
        sdk_info->setField("BuildVariant", build_variant_value);
        build_variant_value->remove_reference();

        request_info->setSDKInfo(sdk_info);
        sdk_info->remove_reference();
      }
    std::stringstream request_info_stream;
    JSONStreamWriter request_info_writer(request_info_stream,
                                         JSONWriter::WHITESPACE_NONE);
    request_info->write_as_json(&request_info_writer);
    fetcher->setParameter("Hound-Request-Info",
                          request_info_stream.str().c_str());

    size_t time_stamp_digit_count = time_stamp.decimal_digit_count();
    char *auth_id_buffer = new char[
            strlen(user_id.c_str()) + strlen(request_id) +
            time_stamp_digit_count + 2];
    size_t auth_id_location =
            sprintf(auth_id_buffer, "%s;%s", user_id.c_str(), request_id);
    fetcher->setParameter("Hound-Request-Authentication", auth_id_buffer);

    time_stamp.write_decimal_digits(auth_id_buffer + auth_id_location);
    uint8_t key_bits[64];
    base64url_decode(client_key.c_str(), 88, key_bits);
    uint8_t hash_result[32];
    hound_hmac_sha_256(&(key_bits[0]), (uint8_t *)(&(auth_id_buffer[0])),
            auth_id_location + time_stamp_digit_count, &(hash_result[0]));
    delete[] auth_id_buffer;

    char *authentication_buffer =
            new char[strlen(client_id.c_str()) + time_stamp_digit_count + 47];
    char *follow_out =
            authentication_buffer +
            sprintf(authentication_buffer, "%s;", client_id.c_str());
    time_stamp.write_decimal_digits(follow_out);
    follow_out += time_stamp_digit_count;
    *follow_out = ';';
    ++follow_out;
    char *follow_in = (char *)(&(hash_result[0]));
    for (size_t num = 0; num < 10; ++num)
      {
        base64url_encode_three(follow_out, follow_in);
        follow_out += 4;
        follow_in += 3;
      }
    base64url_encode_last_two(follow_out, follow_in);
    follow_out += 4;
    *follow_out = 0;
    fetcher->setParameter("Hound-Client-Authentication", authentication_buffer);
    delete[] authentication_buffer;

    if (request_info->hasInputLanguageEnglishName())
      {
        fetcher->setParameter("Hound-Input-Language-English-Name",
                request_info->getInputLanguageEnglishName().c_str());
      }
    if (request_info->hasInputLanguageNativeName())
      {
        fetcher->setParameter("Hound-Input-Language-Native-Name",
                request_info->getInputLanguageNativeName().c_str());
      }
    if (request_info->hasInputLanguageIETFTag())
      {
        fetcher->setParameter("Hound-Input-Language-IETF-Tag",
                request_info->getInputLanguageIETFTag().c_str());
      }

    request_info->remove_reference();

    fetcher->setTimeoutSeconds(timeout_seconds);
  }

HoundCloudRequester::HoundCloudRequester(const char *client_id,
        const char *client_key, const char *user_id,
        const char *text_request_url_base, const char *voice_request_url_base) :
                client_id(client_id), client_key(client_key), user_id(user_id),
                text_request_url_base(text_request_url_base),
                voice_request_url_base(voice_request_url_base),
                use_proxy(false), timeout_seconds(30)
  {
  }

HoundCloudRequester::~HoundCloudRequester(void)
  {
    size_t proxy_param_count = proxy_parameters.size();
    for (size_t param_num = 0; param_num < proxy_param_count; ++param_num)
      {
        free(proxy_parameters[param_num].key);
        free(proxy_parameters[param_num].value);
      }
  }

class ResultHandler : public FetchHandler
  {
  private:
    class LocalValueHandler : public HoundMessageJSON::Generator
      {
      private:
        HoundRequester::PartialTranscriptHandler *partial_transcript_handler;
        HoundRequester::PartialResultHandler *partial_result_handler;

        void handle_updated_result(void)
          {
            if (partial_result_handler == NULL)
                return;
            if (!(result.referenced()->hasAllResults()))
                return;
            if (!(result.referenced()->hasResultsAreFinal()))
                return;
            size_t count = result.referenced()->countOfAllResults();
            if (count != result.referenced()->countOfResultsAreFinal())
                return;
            for (size_t num = 0; num < count; ++num)
              {
                if (!(result.referenced()->elementOfResultsAreFinal(num)))
                  {
                    partial_result_handler->handle(result.referenced());
                    return;
                  }
              }
          }

      public:
        LocalValueHandler(
                HoundRequester::PartialTranscriptHandler *
                        partial_transcript_handler,
                HoundRequester::PartialResultHandler *partial_result_handler) :
                        partial_transcript_handler(partial_transcript_handler),
                        partial_result_handler(partial_result_handler)
          {
            set_what("the result from the Hound server");
          }
        ~LocalValueHandler(void)
          {
          }

        RCHandle<HoundServerJSON> result;

        void handle_result(HoundMessageJSON *item)
          {
            HoundMessageJSON::TypeValue contents = item->getValue();
            item->add_reference();
            switch (contents.key)
              {
                case 0:
                  {
                    result = contents.u.choice0;
                    handle_updated_result();
                    break;
                  }
                case 1:
                  {
                    if (partial_transcript_handler != NULL)
                        partial_transcript_handler->handle(contents.u.choice1);
                    break;
                  }
                case 2:
                  {
                    HoundUpdateJSON *update_json = contents.u.choice2;
                    if (!(result.referenced()->hasAllResults()))
                        break;
                    if (!(result.referenced()->hasResultsAreFinal()))
                        break;
                    size_t count = result.referenced()->countOfAllResults();
                    if (count != result.referenced()->countOfResultsAreFinal())
                        break;
                    OInteger index = update_json->getIndex();
                    if (index >= count)
                        break;
                    if (index < 0)
                        break;
                    size_t size_t_index = (size_t)(index.get_uint64_t());
                    std::vector<CommandResultJSON *> all_results =
                            result.referenced()->getAllResults();
                    std::vector<bool> results_are_final =
                            result.referenced()->getResultsAreFinal();
                    all_results[size_t_index] = update_json->getResult();
                    results_are_final[size_t_index] = update_json->getIsFinal();
                    for (size_t num = 0; num < count; ++num)
                        all_results[num]->add_reference();
                    result.referenced()->initAllResults();
                    result.referenced()->initResultsAreFinal();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result.referenced()->appendAllResults(all_results[num]);
                        all_results[num]->remove_reference();
                        result.referenced()->appendResultsAreFinal(
                                results_are_final[num]);
                      }
                    handle_updated_result();
                    break;
                  }
                default:
                  {
                    assert(false);
                    break;
                  }
              }
            item->remove_reference();
          }
      };

    bool is_good;
    std::stringstream error_message;
    LocalValueHandler value_handler;
    JSONIncrementalParser parser;
    HoundSharedDoneFlag *shared_done_flag;

  public:
    ResultHandler(
            HoundRequester::PartialTranscriptHandler *
                    partial_transcript_handler,
            HoundRequester::PartialResultHandler *partial_result_handler) :
                    is_good(true),
                    value_handler(partial_transcript_handler,
                            partial_result_handler), parser(&value_handler)
      {
        shared_done_flag = create_hound_shared_done_flag();
      }
    ~ResultHandler(void)
      {
        delete shared_done_flag;
      }

    void handleStatusCode(unsigned code)
      {
        if (code != 200)
          {
            is_good = false;
            error_message << "The server returned status code ";
            error_message << code;
            error_message << ".  The response body was: ";
          }
      }
    virtual void handleContent(size_t byteCount, const void *bytes)
      {
        if (is_good)
            parser.add_characters((const char *)bytes, byteCount);
        else
            error_message.write((const char *)bytes, byteCount);
      }
    virtual void handleContentEnd(void)
      {
        parser.end_of_input();
        shared_done_flag->mark_done();
      }

    void wait_for_result(void)
      {
        shared_done_flag->wait_until_done();
      }
    HoundServerJSON *get_result(void)
      {
        if (!is_good)
          {
            std::string message_string = error_message.str();
            const char *message_chars = message_string.c_str();
            char *message_copy = (char *)(malloc(strlen(message_chars) + 1));
            strcpy(message_copy, message_chars);
            throw message_copy;
          }
        if (value_handler.result.referenced() == NULL)
            throw "No valid JSON was returned from the server.";
        return value_handler.result.referenced();
      }
    void clear_result(void)
      {
        if (is_good)
            value_handler.result = NULL;
      }
  };

class LocalVoiceRequest : public HoundRequester::VoiceRequest
  {
  private:
    friend class HoundCloudRequester;

    Fetch *fetcher;
    bool is_post;
    bool have_fetch_error;
    std::string fetch_error_message;
    std::string url;
    HoundRequester::PartialTranscriptHandler *partial_transcript_handler;
    ResultHandler *handler;
    RequestInfoJSON *request_info;

    LocalVoiceRequest(Fetch *fetcher, bool is_post, std::string url,
            HoundRequester::PartialTranscriptHandler *
                    partial_transcript_handler, ResultHandler *handler,
            RequestInfoJSON *request_info) : fetcher(fetcher), is_post(is_post),
                    have_fetch_error(false), url(url),
                    partial_transcript_handler(partial_transcript_handler),
                    handler(handler), request_info(request_info)
      { }

  public:
    ~LocalVoiceRequest(void);

    void add_audio(size_t byte_count, const void *data);
    bool more_ok(void)  { return !have_fetch_error; }
    HoundServerJSON *finish(void);
  };

LocalVoiceRequest::~LocalVoiceRequest(void)
  {
    delete fetcher;
    delete handler;
  }

void LocalVoiceRequest::add_audio(size_t byte_count, const void *data)
  {
    assert(is_post);
    if ((!have_fetch_error) && (byte_count > 0))
      {
        try
          {
            fetcher->continuePost(byte_count, data);
          }
        catch (char *e1)
          {
            have_fetch_error = true;
            fetch_error_message = e1;
            free(e1);
          }
        catch (const char *e1)
          {
            have_fetch_error = true;
            fetch_error_message = e1;
          }
      }
  }

HoundServerJSON *LocalVoiceRequest::finish(void)
  {
    if (have_fetch_error)
      {
        throw_error_result(url.c_str(), fetch_error_message.c_str(),
                           request_info, false);
      }

    try
      {
        if (is_post)
            fetcher->finishPost(handler);
        handler->wait_for_result();
        HoundServerJSON *result = handler->get_result();
        result->add_reference();
        handler->clear_result();
        result->remove_reference_no_delete();
        return result;
      }
    catch (char *e1)
      {
        throw_error_result(url.c_str(), e1, request_info, true);
      }
    catch (const char *e1)
      {
        throw_error_result(url.c_str(), e1, request_info, false);
      }
  }

HoundServerJSON *HoundCloudRequester::do_text_request(const char *query,
        ConversationStateJSON *conversation_state,
        RequestInfoJSON *request_info,
        PartialResultHandler *partial_result_handler)
  {
    std::string url = text_request_url_base;
    std::string encoded = urlEncode(query);
    url += "?query=";
    url += encoded;
    Fetch fetcher(url.c_str());
    set_up_fetch(&fetcher, conversation_state, request_info);
    HoundServerJSON *result;
    try
      {
        ResultHandler handler(NULL, partial_result_handler);
        fetcher.get(&handler);
        result = handler.get_result();
        result->add_reference();
      }
    catch (char *e1)
      {
        throw_error_result(url.c_str(), e1, request_info, true);
      }
    catch (const char *e1)
      {
        throw_error_result(url.c_str(), e1, request_info, false);
      }
    result->remove_reference_no_delete();
    return result;
  }

HoundRequester::VoiceRequest *HoundCloudRequester::start_voice_request(
        ConversationStateJSON *conversation_state,
        RequestInfoJSON *request_info,
        PartialTranscriptHandler *partial_transcript_handler,
        PartialResultHandler *partial_result_handler)
  {
    Fetch *fetcher = new Fetch(voice_request_url_base.c_str());
    set_up_fetch(fetcher, conversation_state, request_info);
    ResultHandler *handler = new ResultHandler(partial_transcript_handler,
                                               partial_result_handler);
    fetcher->startPost("POST", handler);
    return new LocalVoiceRequest(fetcher, true, voice_request_url_base,
            partial_transcript_handler, handler, request_info);
  }

void HoundCloudRequester::setProxyServer(const char *new_proxy_server,
                                         unsigned port)
  {
    use_proxy = true;
    proxy_server = new_proxy_server;
    proxy_port = port;
  }

void HoundCloudRequester::setProxyParameter(const char *key, const char *value)
  {
    assert(key != NULL);
    assert(value != NULL);

    assert(value != NULL);
    char *new_value = (char *)(malloc(strlen(value) + 1));
    if (new_value == NULL)
        throw "Out of memory.";
    strcpy(new_value, value);

    assert(key != NULL);
    char *new_key = (char *)(malloc(strlen(key) + 1));
    if (new_key == NULL)
      {
        free(new_value);
        throw "Out of memory.";
      }
    strcpy(new_key, key);

    size_t index = proxy_parameters.size();
    pair new_element;
    new_element.key = new_key;
    new_element.value = new_value;
    proxy_parameters.push_back(new_element);
  }

void HoundCloudRequester::setTimeoutSeconds(double new_timeout_seconds)
  {
    timeout_seconds = new_timeout_seconds;
  }

const char *HoundCloudRequester::default_text_request_url_base(void)
  {
    return "https://api.houndify.com/v1/text";
  }

const char *HoundCloudRequester::default_voice_request_url_base(void)
  {
    return "https://api.houndify.com/v1/audio";
  }


static void throw_error_result(const char *url, const char *e1,
                               RequestInfoJSON *request_info, bool free_e1)
  {
    std::string message = "Error trying to fetch from `";
    message += url;
    message += "': ";
    message += e1;
    if (free_e1)
        free((char *)e1);
    fprintf(stderr, "%s\n", message.c_str());
    char *copy = (char *)(malloc(strlen(message.c_str()) + 1));
    strcpy(copy, message.c_str());
    throw copy;
  }
