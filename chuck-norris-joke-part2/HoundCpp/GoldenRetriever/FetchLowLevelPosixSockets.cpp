/* file "FetchLowLevelPosixSockets.cpp" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#include "Fetch.h"
#include "GoldenRetrieverPosixSockets.h"
#include "throwf.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <time.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string>
#include <vector>
#include <netinet/in.h>
#include "openssl/ssl.h"
#include "openssl/conf.h"
#include "openssl/err.h"
#include "openssl/engine.h"
#include "pthread.h"


static bool initialized = false;
static pthread_key_t thread_cleanup_key;


class CleanupFetch
  {
  public:
    CleanupFetch(void)  { }
    ~CleanupFetch(void)
      {
        if (initialized)
          {
            CONF_modules_free();
            ENGINE_cleanup();
            CONF_modules_unload(1);
            ERR_free_strings();
            EVP_cleanup();
            CRYPTO_cleanup_all_ex_data();
            sk_SSL_COMP_free(SSL_COMP_get_compression_methods());
            initialized = false;
          }
      }
  };
static CleanupFetch cleanup_fetch;


struct RestrictedIPv6Range
  {
    uint8_t first_address[16];
    uint8_t last_address[16];
    const char *range_name; /* the __________ range */
  };

static RestrictedIPv6Range restricted_ipv6_ranges[] =
  {
      {
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        "unspecified address"
      },
      {
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
        "loopback"
      },
      {
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "IPv4 mapped address"
      },
      {
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff},
        "IPv4 translated address"
      },
      {
        {0x00, 0x64, 0xff, 0x9b, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x00, 0x64, 0xff, 0x9b, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff},
        "IPv4/IPv6 translation"
      },
      {
        {0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "discard prefix"
      },
      {
        {0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x20, 0x01, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "Teredo tunneling"
      },
      {
        {0x20, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x20, 0x01, 0x00, 0x2f, 0xff, 0xff, 0xff, 0xff,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "ORCHIDv2"
      },
      {
        {0x20, 0x01, 0x0d, 0xb8, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x20, 0x01, 0x0d, 0xb8, 0xff, 0xff, 0xff, 0xff,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "documentation"
      },
      {
        {0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x20, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "6to4"
      },
      {
        {0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "private network"
      },
      {
        {0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0xfe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "link-local"
      },
      {
        {0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
         0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
        "multicast"
      },
      {
        {0},
        {0},
        NULL
      }
  };


static int open_socket_with_timeout(struct addrinfo *address_info_list,
                                    double timeout_seconds);
static bool in_range(uint8_t *test_address, RestrictedIPv6Range *the_range);
static void thread_cleanup_function(void *data);


static pthread_mutex_t ssl_init_lock = PTHREAD_MUTEX_INITIALIZER;


class SocketWriter : public HTTPRawWriter
  {
  private:
    int socket_num;
    HTTPRawReader *reader;
    bool do_close;

  public:
    SocketWriter(int socket_num, HTTPRawReader *reader, bool do_close) :
            socket_num(socket_num), reader(reader), do_close(do_close)
      {
        assert(reader != NULL);
      }
    ~SocketWriter(void)
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
            throwf("Socket write error: %s [%d].", strerror(errno), errno);
      }
    ssize_t read(char *buffer, size_t byte_count)
      {
        return reader->read_bytes(buffer, byte_count);
      }
  };

void Fetch::doPreHeader(const char *method)
  {
    if (!(fetches_are_enabled()))
      {
        fprintf(stderr,
                "ERROR: An attempt was made to hit an external API (URL %s) "
                "while such hits were disabled because %s.\n", url,
                fetch_disable_reason());
        exit(1);
      }

    size_t host_start;
    size_t host_length;
    unsigned port;
    size_t path_start;
    size_t path_length;
    bool is_ssl;
    bool is_script;
    parseURL(url, &host_start, &host_length, &port, &path_start, &path_length,
             &is_ssl, &is_script);

    if (is_script)
      {
        doScript(host_start, path_start + path_length);
        return;
      }

    if (!(non_script_fetches_are_enabled()))
      {
        fprintf(stderr,
                "ERROR: An attempt was made to hit an external API (URL %s) "
                "directly instead of going through the canned API responses "
                "system.\n", url);
        exit(1);
      }

    if (getenv("GOLDEN_RETRIEVER_SHOW_REAL_URL_HITS") != NULL)
        fprintf(stderr, "Golden Retriever hitting `%s'.\n", url);

    struct addrinfo *address_info_list;
    std::string host_name;
      {
        char save = url[host_start + host_length];
        url[host_start + host_length] = 0;
        struct addrinfo hints;
        memset(&hints, 0, sizeof(struct addrinfo));
        hints.ai_family = AF_UNSPEC;
        hints.ai_socktype = SOCK_STREAM;
        const char *host_name_chars =
                (use_proxy ? proxy_server.c_str() : &(url[host_start]));
        host_name = host_name_chars;
        char port_buffer[(sizeof(port) * 3) + 2];
        sprintf(&(port_buffer[0]), "%u", (use_proxy ? proxy_port : port));
        int return_code = getaddrinfo(host_name_chars, &(port_buffer[0]),
                                      &hints, &address_info_list);
        if (return_code != 0)
          {
            const char *message;
            switch (return_code)
              {
                case EAI_AGAIN:
                    message =
                            "The name could not be resolved at this time.  "
                            "Future attempts may succeed.";
                    break;
                case EAI_BADFLAGS:
                    message = "The flags parameter had an invalid value.";
                    break;
                case EAI_FAIL:
                    message =
                            "A non-recoverable error occurred when attempting "
                            "to resolve the name.";
                    break;
                case EAI_FAMILY:
                    message = "The address family was not recognized.";
                    break;
                case EAI_MEMORY:
                    message =
                            "There was a memory allocation failure when trying "
                            "to allocate storage for the return value.";
                    break;
                case EAI_NONAME:
                    message = "The host name does not resolve.";
                    break;
                case EAI_SERVICE:
                    message =
                            "The service passed was not recognized for the "
                            "specified socket type.";
                    break;
                case EAI_SOCKTYPE:
                    message = "The intended socket type was not recognized.";
                    break;
                case EAI_SYSTEM:
                    message = strerror(errno);
                    break;
                case EAI_OVERFLOW:
                    message = "An argument buffer overflowed.";
                    break;
                default:
                    throwf("Host name `%.*s' not found.", (int)host_length,
                           host_name_chars);
              }
            throwf("Host name `%.*s' not found: %s.", (int)host_length,
                   host_name_chars, message);
          }

        if (exclude_private)
          {
            struct addrinfo *follow = address_info_list;
            while (follow != NULL)
              {
                struct sockaddr *the_address = follow->ai_addr;
                switch (the_address->sa_family)
                  {
                    case AF_INET:
                      {
                        struct sockaddr_in *ipv4_data =
                                (struct sockaddr_in *)the_address;
                        in_addr_t address_number = ipv4_data->sin_addr.s_addr;
                        if (address_number == 0x0100007f)
                          {
                            freeaddrinfo(address_info_list);
                            throwf("`%s' resolves to the loopback address, and "
                                   "fetches from the loopback address are not "
                                   "permitted.", host_name_chars);
                          }
                        if (((address_number & 0xff) == 10) ||
                            (((address_number & 0xff) == 172) &&
                             (((address_number >> 8) & 0xf0) == 16)) ||
                            (((address_number & 0xff) == 192) &&
                             (((address_number >> 8) & 0xff) == 168)))
                          {
                            freeaddrinfo(address_info_list);
                            throwf("`%s' resolves to a private network address,"
                                   " and fetches from a private network address"
                                   " are not permitted.", host_name_chars);
                          }
                        break;
                      }
                    case AF_INET6:
                      {
                        struct sockaddr_in6 *ipv6_data =
                                (struct sockaddr_in6 *)the_address;
                        if (IN6_IS_ADDR_LOOPBACK(&(ipv6_data->sin6_addr)))
                          {
                            freeaddrinfo(address_info_list);
                            throwf("`%s' resolves to the loopback address, and "
                                   "fetches from the loopback address are not "
                                   "permitted.", host_name_chars);
                          }
                        uint8_t *test_address =
                                &(ipv6_data->sin6_addr.s6_addr[0]);
                        for (size_t range_num = 0;
                             restricted_ipv6_ranges[range_num].range_name !=
                             NULL; ++range_num)
                          {
                            RestrictedIPv6Range *the_range =
                                    &(restricted_ipv6_ranges[range_num]);
                            if (in_range(test_address, the_range))
                              {
                                throwf("`%s' resolves to an IPv6 address in the"
                                       " %s range, and fetches from that range "
                                       "are not permitted.", host_name_chars,
                                       the_range->range_name);
                              }
                          }
                        break;
                      }
                    default:
                      {
                        throwf("Only IPv4 and IPv6 addresses are allowed, but "
                               "`%s' resolved to an address that is not either "
                               "of those.", host_name_chars);
                      }
                  }
                follow = follow->ai_next;
              }
          }

        url[host_start + host_length] = save;
      }

    int socket_num =
            open_socket_with_timeout(address_info_list, timeout_seconds);

    /* @@@ */
    ((struct sockaddr_in *)(address_info_list->ai_addr))->sin_port =
            htons(use_proxy ? proxy_port : port);
    /* @@@ */
    int return_code = connect(socket_num, address_info_list->ai_addr,
                              address_info_list->ai_addrlen);
    freeaddrinfo(address_info_list);
    if (return_code != 0)
      {
        throwf("Unable to connect: %s [%d].", strerror(return_code),
               return_code);
      }

    if (!is_ssl)
      {
        reader = new HTTPSocketReader(socket_num);

        writer = new SocketWriter(socket_num, reader, false);

#ifdef SAVE_RESPONSES
        doSaveResponsesSetup();
#endif /* SAVE_RESPONSES */

        return;
      }

    if (use_proxy)
      {
        const char *host = &(url[host_start]);
        HTTPSocketReader proxy_reader(socket_num, false);
        SocketWriter proxy_writer(socket_num, &proxy_reader, false);
        proxy_writer.write("CONNECT ");
        proxy_writer.write(host, host_length);
        proxy_writer.write(":");
        char port_buffer[100];
        sprintf(&(port_buffer[0]), "%u", port);
        proxy_writer.write(port_buffer);
        proxy_writer.write(" HTTP/1.1\r\n");
        proxy_writer.write(user_agent_key);
        proxy_writer.write(": ");
        proxy_writer.write(
                have_proxy_user_agent ? proxy_user_agent.c_str() : user_agent);
        proxy_writer.write("\r\n");
        size_t param_count = proxy_parameters.size();
        for (size_t param_num = 0; param_num < param_count; ++param_num)
          {
            proxy_writer.write(proxy_parameters[param_num].key);
            proxy_writer.write(": ");
            proxy_writer.write(proxy_parameters[param_num].value);
            proxy_writer.write("\r\n");
          }
        proxy_writer.write("\r\n");

        char *first_line = proxy_reader.readLine();
        char *follow = first_line;
        while (*follow != ' ')
          {
            if (*follow == 0)
                throwf("Bad first line from proxy server: `%s'.", first_line);
            ++follow;
          }
        ++follow;
        char *code_start = follow;
        while (*follow != ' ')
          {
            if (*follow == 0)
                throwf("Bad first line from proxy server: `%s'.", first_line);
            ++follow;
          }
        if (strncmp(code_start, "200", follow - code_start) != 0)
          {
            throwf("Proxy returned status code %.*s: %s.",
                   (int)(follow - code_start), code_start, follow + 1);
          }

        while (true)
          {
            char *next_line = proxy_reader.readLine();
            if ((next_line[0] == 0) ||
                ((next_line[0] == '\r') && (next_line[1] == 0)))
              {
                break;
              }
          }
      }

    pthread_mutex_lock(&ssl_init_lock);

    if (!initialized)
      {
        SSL_library_init();
        ERR_load_crypto_strings();
        SSL_load_error_strings();
        pthread_key_create(&thread_cleanup_key, &thread_cleanup_function);
        initialized = true;
      }
    pthread_setspecific(thread_cleanup_key, &initialized);

    pthread_mutex_unlock(&ssl_init_lock);

    SSL_CTX *the_ctx = SSL_CTX_new(SSLv23_client_method());
    if (the_ctx == NULL)
        throw "Unable to create SSL CTX object.";

    SSL *the_ssl = SSL_new(the_ctx);
    if (the_ssl == NULL)
      {
        SSL_CTX_free(the_ctx);
        throw "Failed trying to create an SSL object";
      }

    int retcode = SSL_set_tlsext_host_name(the_ssl, host_name.c_str());
    if (retcode != 1)
      {
        fprintf(stderr,
                "Warning: Failed trying to set the host name for TLS to %s.\n",
                host_name.c_str());
      }

    retcode = SSL_set_fd(the_ssl, socket_num);
    if (retcode != 1)
      {
        SSL_CTX_free(the_ctx);
        SSL_free(the_ssl);
        throw "Failed trying to associate the SSL object with the stream.";
      }

    retcode = SSL_connect(the_ssl);
    if (retcode != 1)
      {
        const char *message = ERR_reason_error_string(ERR_get_error());
        SSL_CTX_free(the_ctx);
        SSL_free(the_ssl);
        throwf("SSL connection to %s failed: %s.", host_name.c_str(), message);
      }

    class SSLReader : public HTTPRawReader
      {
      private:
        SSL *the_ssl;
        SSL_CTX *the_ctx;
        int socket_num;
        std::vector<char> buffer;

      public:
        SSLReader(SSL *the_ssl, int socket_num, SSL_CTX *the_ctx) :
                the_ssl(the_ssl), socket_num(socket_num), the_ctx(the_ctx)
          {
            assert(the_ssl != NULL);
          }
        ~SSLReader(void)
          {
            SSL_CTX_free(the_ctx);
            SSL_free(the_ssl);
            close(socket_num);
          }

        char *readLine(void)
          {
            buffer.clear();
            while (true)
              {
                char local_buffer[1];
                ssize_t num = SSL_read(the_ssl, &(local_buffer[0]), 1);
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
            if (SSL_pending(the_ssl) > 0)
                return true;
            struct pollfd data;
            data.fd = socket_num;
            data.events = POLLIN;
            return (poll(&data, 1, 0) > 0);
          }
        ssize_t read_bytes(char *buffer, size_t byte_count)
          {
            return SSL_read(the_ssl, buffer, byte_count);
          }
        void check_for_errors(void)
          {
          }
      };
    reader = new SSLReader(the_ssl, socket_num, the_ctx);

    class SSLWriter : public HTTPRawWriter
      {
      private:
        SSL *the_ssl;
        HTTPRawReader *reader;

      public:
        SSLWriter(SSL *the_ssl, HTTPRawReader *reader) : the_ssl(the_ssl),
                reader(reader)
          {
            assert(the_ssl != NULL);
            assert(reader != NULL);
          }
        ~SSLWriter(void)  { }

        void write(const char *to_write)
          {
            write(to_write, strlen(to_write));
          }
        void write(const char *to_write, size_t byte_count)
          {
            ssize_t write_result = SSL_write(the_ssl, to_write, byte_count);
            if (write_result != byte_count)
                throw "SSL socket write error.";
          }
        ssize_t read(char *buffer, size_t byte_count)
          {
            return reader->read_bytes(buffer, byte_count);
          }
      };
    writer = new SSLWriter(the_ssl, reader);

#ifdef SAVE_RESPONSES
    doSaveResponsesSetup();
#endif /* SAVE_RESPONSES */
  }

#ifdef SAVE_RESPONSES
void Fetch::doSaveResponsesSetup(void)
  {
    assert(reader != NULL);

    if ((getenv("GOLDEN_RETRIEVER_SAVE_PREFIX") != NULL) &&
        (getenv("GOLDEN_RETRIEVER_SAVE_CATALOG") != NULL))
      {
        class SaveReader : public HTTPRawReader
          {
          private:
            HTTPRawReader *next;
            FILE *save_fp;

          public:
            SaveReader(HTTPRawReader *next, const char *url)
              {
                assert(next != NULL);
                assert(url != NULL);

                char *prefix = getenv("GOLDEN_RETRIEVER_SAVE_PREFIX");
                char *save_file_name = new char[strlen(prefix) + 200];
                time_t the_time_t = time(NULL);
                struct tm *the_tm = localtime(&the_time_t);
                static unsigned long counter = 0;
                ++counter;
                sprintf(save_file_name,
                        "%s_%lu_%02d_%02d_%02d_%02d_%02d_%04lu.txt", prefix,
                        (unsigned long)(the_tm->tm_year + 1900),
                        (int)(the_tm->tm_mon + 1), (int)(the_tm->tm_mday),
                        (int)(the_tm->tm_hour), (int)(the_tm->tm_min),
                        (int)(the_tm->tm_sec), counter);
                save_fp = fopen(save_file_name, "w");
                if (save_fp == NULL)
                  {
                    fprintf(stderr,
                            "Warning: Failed trying to open save file %s: "
                            "%s.\n", save_file_name, strerror(errno));
                  }
                FILE *catalog_fp =
                        fopen(getenv("GOLDEN_RETRIEVER_SAVE_CATALOG"), "a");
                if (catalog_fp == NULL)
                  {
                    fprintf(stderr,
                            "Warning: Failed trying to open save catalog file "
                            "%s: %s.\n",
                            getenv("GOLDEN_RETRIEVER_SAVE_CATALOG"),
                            strerror(errno));
                  }
                else
                  {
                    fprintf(catalog_fp, "  [\"%s\", \"%s\"],\n", url,
                            save_file_name);
                    fclose(catalog_fp);
                  }
                delete[] save_file_name;
              }
            ~SaveReader(void)
              {
                if (save_fp != NULL)
                    fclose(save_fp);
                delete next;
              }

            char *readLine(void)
              {
                char *result = next->readLine();
                if (save_fp != NULL)
                    fprintf(save_fp, "%s\n", result);
                return result;
              }
            bool has_bytes(void)
              {
                return next->has_bytes();
              }
            ssize_t read_bytes(char *buffer, size_t byte_count)
              {
                ssize_t result = next->read_bytes(buffer, byte_count);
                if ((save_fp != NULL) && (result > 0))
                    fwrite(buffer, 1, result, save_fp);
                return result;
              }
            void check_for_errors(void)
              {
                next->check_for_errors();
              }
          };

        reader = new SaveReader(reader, url);
      }
  }
#endif /* SAVE_RESPONSES */


static int open_socket_with_timeout(struct addrinfo *address_info_list,
                                    double timeout_seconds)
  {
    int socket_num = socket(AF_INET, address_info_list->ai_socktype,
                            address_info_list->ai_protocol);
    if (socket_num == -1)
      {
        freeaddrinfo(address_info_list);
        throw "Unable to open a socket.";
      }

    if (timeout_seconds > 0)
      {
        struct timeval the_timeval;
        the_timeval.tv_sec = timeout_seconds;
        the_timeval.tv_usec =
                ((timeout_seconds - the_timeval.tv_sec) * 1000 * 1000);
        int result = setsockopt(socket_num, SOL_SOCKET, SO_RCVTIMEO,
                                &the_timeval, sizeof(struct timeval));
        if (result != 0)
          {
            fprintf(stderr,
                    "Warning: GoldenRetriever was unable to set the receive "
                    "timeout for a socket to %g seconds.\n", timeout_seconds);
          }
        result = setsockopt(socket_num, SOL_SOCKET, SO_SNDTIMEO, &the_timeval,
                            sizeof(struct timeval));
        if (result != 0)
          {
            fprintf(stderr,
                    "Warning: GoldenRetriever was unable to set the send "
                    "timeout for a socket to %g seconds.\n", timeout_seconds);
          }
      }

    return socket_num;
  }

static bool in_range(uint8_t *test_address, RestrictedIPv6Range *the_range)
  {
    assert(test_address != NULL);
    assert(the_range != NULL);

    for (size_t byte_num = 0; byte_num < 16; ++byte_num)
      {
        uint8_t test_byte = test_address[byte_num];
        uint8_t bound_byte = the_range->first_address[byte_num];
        if (test_byte < bound_byte)
            return false;
        if (test_byte > bound_byte)
            break;
      }

    for (size_t byte_num = 0; byte_num < 16; ++byte_num)
      {
        uint8_t test_byte = test_address[byte_num];
        uint8_t bound_byte = the_range->last_address[byte_num];
        if (test_byte > bound_byte)
            return false;
        if (test_byte < bound_byte)
            break;
      }

    return true;
  }

static void thread_cleanup_function(void *data)
  {
    ERR_remove_state(0);
    CRYPTO_cleanup_all_ex_data();
  }
