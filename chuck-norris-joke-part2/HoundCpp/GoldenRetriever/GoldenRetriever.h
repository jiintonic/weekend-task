/* file "GoldenRetriever.h" */

/* Copyright 2012-2016 SoundHound, Incorporated.  All rights reserved. */


#ifndef GOLDENRETRIEVER_H
#define GOLDENRETRIEVER_H


#include <stddef.h>

#if ((!defined(USE_SSIZE_T_FROM_POSIX)) && \
     (!defined(USE_SSIZE_T_FROM_INT64_T)) && \
     (!defined(DONT_DEFINE_SIZE_T)))

#if defined(_WIN32) || defined(_WIN64)
#define USE_SSIZE_T_FROM_INT64_T
#else
#define USE_SSIZE_T_FROM_POSIX
#endif

#endif

#if defined(USE_SSIZE_T_FROM_POSIX)

#include <sys/types.h>

#elif defined(USE_SSIZE_T_FROM_INT64_T)

#include <stdint.h>
typedef int64_t ssize_t;

#endif


class HTTPHandler
  {
  public:
    virtual void handleHTTPVersion(const char *version)  { }
    virtual void handleParameter(const char *key, const char *value)  { }
    virtual void handleContentByteCount(size_t byteCount)  { }
    virtual void handleHeaderDone(void)  { }
    virtual void handleContent(size_t byteCount, const void *bytes)  { }
    virtual void handleContentEnd(void)  { }

  protected:
    HTTPHandler(void)  { }
    ~HTTPHandler(void)  { }
  };

class HTTPRawWriter
  {
  protected:
    HTTPRawWriter(void)  { }

  public:
    virtual ~HTTPRawWriter(void)  { }

    virtual void write(const char *to_write) = 0;
    virtual void write(const char *to_write, size_t byte_count) = 0;
    virtual ssize_t read(char *buffer, size_t byte_count) = 0;
    virtual void set_timeout_seconds(double seconds)  { }
  };

class HTTPRawReader
  {
  protected:
    HTTPRawReader(void)  { }

  public:
    virtual ~HTTPRawReader(void)  { }

    virtual char *readLine(void) = 0;
    virtual bool has_bytes(void) = 0;
    virtual ssize_t read_bytes(char *buffer, size_t byte_count) = 0;
    virtual void check_for_errors(void) = 0;
  };

class GoldenRetriever
  {
  protected:
    bool have_content_length;
    unsigned long content_length;
    bool chunked;

    GoldenRetriever(void);
    ~GoldenRetriever(void)  { }

    void handle_header_line(char *this_line, HTTPHandler *handler);
    void handleParametersAndBody(HTTPHandler *handler, HTTPRawReader *reader);
  };


#endif /* GOLDENRETRIEVER_H */
