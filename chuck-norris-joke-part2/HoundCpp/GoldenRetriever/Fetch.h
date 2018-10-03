/* file "Fetch.h" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#ifndef FETCH_H
#define FETCH_H


#include <stddef.h>
#include <assert.h>
#include <stdint.h>
#include <vector>
#include <string>
extern "C"
  {
#include "string_index.h"
#include "buffer_print.h"
  };
#include "GoldenRetriever.h"
#include "FetchEnable.h"


#define SAVE_RESPONSES


class FetchResult
  {
  public:
    virtual ~FetchResult(void)  { };

    virtual unsigned statusCode(void) = 0;
    virtual const char *reasonPhrase(void) = 0;
    virtual const char *httpVersion(void) = 0;
    virtual size_t parameterCount(void) = 0;
    virtual const char *parameterKey(size_t paramNum) = 0;
    virtual const char *parameterValue(size_t paramNum) = 0;
    virtual const char *parameterLookup(const char *key) = 0;
    virtual size_t contentByteCount(void) = 0;
    virtual const void *contentBytes(void) = 0;
    virtual size_t readContent(void *buffer, size_t minBytes, size_t maxBytes)
      = 0;
    virtual bool contentDone(void) = 0;

  protected:
    FetchResult(void)  { };
  };

class FetchHandler : public HTTPHandler
  {
  public:
    virtual void handleStatusCode(unsigned code)  { };
    virtual void handleReasonPhrase(const char *message)  { };

  protected:
    FetchHandler(void)  { };
    ~FetchHandler(void)  { };
  };

class Fetch : private GoldenRetriever
  {
  public:
    Fetch(const char *init_url);
    ~Fetch(void);

    void setUserAgent(const char *new_user_agent);
    void setParameter(const char *key, const char *value);
    void setBasicAuthentication(const char *username, const char *password);
    void setTimeoutSeconds(double new_timeout_seconds);
    void setExcludePrivate(void);
    void setProxyServer(const char *new_proxy_server, unsigned port);
    void setProxyUserAgent(const char *new_user_agent);
    void setProxyParameter(const char *key, const char *value);

    enum Method
      {
        OPTIONS,
        GET,
        HEAD,
        POST,
        PUT,
        DELETE,
        TRACE,
        CONNECT
      };

    FetchResult *get(Method method = GET);
    void get(FetchHandler *handler, Method method = GET);

    FetchResult *post(size_t contentByteCount, const void *contentBytes);
    void post(size_t contentByteCount, const void *contentBytes,
              FetchHandler *handler);

    void startPost(const char *method = "POST", FetchHandler *handler = NULL);
    void continuePost(size_t contentByteCount, const void *contentBytes);
    FetchResult *finishPost(void);
    void finishPost(FetchHandler *handler);

    static FetchResult *get(const char *url, const char *user_agent = NULL,
            double timeout_seconds = default_timeout_seconds,
            Method method = GET);
    static void get(FetchHandler *handler, const char *url,
            const char *user_agent = NULL,
            double timeout_seconds = default_timeout_seconds,
            Method method = GET);

    static FetchResult *post(size_t contentByteCount, const void *contentBytes,
            const char *url, const char *user_agent = NULL,
            double timeout_seconds = default_timeout_seconds);
    static void post(size_t contentByteCount, const void *contentBytes,
            FetchHandler *handler, const char *url,
            const char *user_agent = NULL,
            double timeout_seconds = default_timeout_seconds);

    static HTTPRawWriter *openRaw(const char *url, const char *method,
                                  Fetch **fetch_location = NULL);

    static void parseURL(const char *url, size_t *host_start,
            size_t *host_length, unsigned *port, size_t *path_start,
            size_t *path_length, bool *is_ssl, bool *is_script = NULL);

  private:
    static double default_timeout_seconds;
    static char user_agent_key[];

    struct pair
      {
        char *key;
        char *value;
      };

    char *url;
    char *user_agent;
    HTTPRawWriter *writer;
    HTTPRawReader *reader;
    double timeout_seconds;
    bool exclude_private;
    bool use_proxy;
    std::string proxy_server;
    unsigned proxy_port;
    bool have_proxy_user_agent;
    std::string proxy_user_agent;
    std::vector<pair> proxy_parameters;
    string_index *proxy_parameter_index;
    FetchHandler *incremental_handler;
    enum incremental_state_type
      {
        IS_START,
        IS_HEADERS,
        IS_BODY,
        IS_CONTROL_R,
        IS_CONTROL_N,
        IS_CHUNK_COUNT
      } incremental_state;
    bool incremental_done;
    string_buffer incremental_buffer;
    size_t chunk_count_remaining;
    std::vector<pair> parameters;
    string_index *parameter_index;

    void doHeader(const char *method);
    void doPreHeader(const char *method);
    void doScript(size_t host_start, size_t path_end);
#ifdef SAVE_RESPONSES
    void doSaveResponsesSetup(void);
#endif /* SAVE_RESPONSES */
    void handleReply(FetchHandler *handler);
    void check_for_increment_results(void);
    void handle_incremental_bytes(size_t count, char *data);
    void handle_first_line(char *first_line, FetchHandler *handler);
  };

extern void base64_encode_three(char *output, const char *input);
extern void base64_encode_last_two(char *output, const char *input);
extern void base64_encode_last_one(char *output, const char *input);
extern bool is_valid_base64(const char *encoded_bytes,
                            size_t encoded_byte_count);
extern void base64_decode(const char *encoded_bytes, size_t encoded_byte_count,
                          uint8_t *decoded);
extern void base64url_encode_three(char *output, const char *input);
extern void base64url_encode_last_two(char *output, const char *input);
extern void base64url_encode_last_one(char *output, const char *input);
extern bool is_valid_base64url(const char *encoded_bytes,
                               size_t encoded_byte_count);
extern void base64url_decode(const char *encoded_bytes,
                             size_t encoded_byte_count, uint8_t *decoded);
extern void clean_up_fetch(void);


#endif /* FETCH_H */
