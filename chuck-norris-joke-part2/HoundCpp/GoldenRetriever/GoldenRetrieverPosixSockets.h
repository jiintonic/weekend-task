/* file "GoldenRetrieverPosixSockets.h" */

/* Copyright 2012-2016 SoundHound, Incorporated.  All rights reserved. */


#ifndef GOLDENRETRIEVERPOSIXSOCKETS_H
#define GOLDENRETRIEVERPOSIXSOCKETS_H


#include "GoldenRetriever.h"
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include <sys/types.h>
#include <unistd.h>
#include <poll.h>


class HTTPSocketReader : public HTTPRawReader
  {
  private:
    int socket_num;
    std::vector<char> buffer;
    bool do_close;

  public:
    HTTPSocketReader(int socket_num, bool do_close = true) :
            socket_num(socket_num), do_close(do_close)  { }
    ~HTTPSocketReader(void)
      {
        if (do_close)
            close(socket_num);
      }

    char *readLine(void)
      {
        buffer.clear();
        while (true)
          {
            char local_buffer[1];
            ssize_t num = read(socket_num, &(local_buffer[0]), 1);
            if (num != 1)
                break;
            if (local_buffer[0] == '\r')
                continue;
            if (local_buffer[0] == '\n')
                break;
            buffer.push_back(local_buffer[0]);
          }
        buffer.push_back(0);
        return &(buffer[0]);
      }
    bool has_bytes(void)
      {
        struct pollfd data;
        data.fd = socket_num;
        data.events = POLLIN;
        return (poll(&data, 1, 0) > 0);
      }
    ssize_t read_bytes(char *buffer, size_t byte_count)
      {
        return read(socket_num, buffer, byte_count);
      }
    virtual void check_for_errors(void)
      {
      }
  };

class HTTPSocketWriter : public HTTPRawWriter
  {
  private:
    int socket_num;
    HTTPRawReader *reader;
    bool do_close;

  public:
    HTTPSocketWriter(int socket_num, HTTPRawReader *reader, bool do_close) :
            socket_num(socket_num), reader(reader), do_close(do_close)
      {
        assert(reader != NULL);
      }
    ~HTTPSocketWriter(void)
      {
        if (do_close)
            close(socket_num);
      }

    void write(const char *to_write)
      {
        write(to_write, strlen(to_write));
      }
    void write(const char *to_write, size_t byte_count)
      {
        ssize_t write_result = ::write(socket_num, to_write, byte_count);
        if (write_result != byte_count)
            throw "Socket write error.";
      }
    ssize_t read(char *buffer, size_t byte_count)
      {
        return reader->read_bytes(buffer, byte_count);
      }
  };


#endif /* GOLDENRETRIEVERPOSIXSOCKETS_H */
