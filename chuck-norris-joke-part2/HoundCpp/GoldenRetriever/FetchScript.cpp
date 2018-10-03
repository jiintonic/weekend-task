/* file "FetchScript.cpp" */

/* Copyright 2012-2016 SoundHound, Incorporated.  All rights reserved. */


#include "Fetch.h"
#include "GoldenRetrieverPosixSockets.h"
#include "throwf.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string>
#include <vector>
#include <sstream>
#include "pthread.h"
extern "C"
  {
#define class CLASS
#include "include.h"
#include "string_index.h"
#include "file_parser.h"
#include "execute.h"
#include "standard_built_ins.h"
#include "trace.h"
#include "trace_channels.h"
#include "routine_instance.h"
#include "utility.h"
#undef class
  }


class CannedCatalog
  {
  private:
    string_index *tail_index;
    std::vector<string_index *> all_tail_indexes;
    std::vector<std::string> all_file_names;

  public:
    CannedCatalog(void)
      {
        tail_index = create_string_index();
        if (tail_index == NULL)
            throw "Out of memory.";
      }
    ~CannedCatalog(void)
      {
        destroy_string_index(tail_index);
        size_t name_count = all_tail_indexes.size();
        for (size_t name_num = 0; name_num < name_count; ++name_num)
            destroy_string_index(all_tail_indexes[name_num]);
      }

    FILE *open_item(const char *body, const char *url_tail,
                    const char *catalog_file_name)
      {
        string_index *body_index =
                (string_index *)(lookup_in_string_index(tail_index, url_tail));
        if (body_index == NULL)
          {
          not_found:
            size_t body_length = strlen(body);
            char *buffer = new char[body_length + 100];
            if (body_length == 0)
                buffer[0] = 0;
            else
                sprintf(buffer, ", body \"%s\",", body);
            fprintf(stderr,
                    "Error: No canned output found for catalog \"%s\"%s and URL"
                    " tail \"%s\".\n", catalog_file_name, buffer, url_tail);
            delete[] buffer;
            return NULL;
          }
        void *position_pointer = lookup_in_string_index(body_index, body);
        if (position_pointer == NULL)
            goto not_found;
        const char *file_name =
                all_file_names[((size_t)position_pointer) - 1].c_str();
        if (strcmp(file_name, "api_error") == 0)
            return NULL;
        FILE *result = fopen(file_name, "rb");
        if (result == NULL)
          {
            fprintf(stderr, "Error opening file `%s' for reading: %s.\n",
                    file_name, strerror(errno));
          }
        return result;
      }

    void add_item(const char *body, const char *url_tail, const char *file_name)
      {
        string_index *body_index =
                (string_index *)(lookup_in_string_index(tail_index, url_tail));
        if (body_index == NULL)
          {
            body_index = create_string_index();
            if (body_index == NULL)
                throw "Out of memory.";
            all_tail_indexes.push_back(body_index);
            enter_into_string_index(tail_index, url_tail, body_index);
          }

        size_t position = all_file_names.size();
        all_file_names.push_back(file_name);
        enter_into_string_index(body_index, body, (void *)(position + 1));
      }
  };


static CannedCatalog *find_catalog(const char *catalog_file_name,
        const char *executable_directory, size_t executable_directory_length);
static object *object_for_class_declaration(routine_declaration *declaration,
        context *the_context, purity_level *level, tracer *the_tracer,
        salmon_thread *root_thread, jumper *the_jumper);
static context *global_object_internal_context(object *global_object,
                                               jumper *the_jumper);
static CannedCatalog *fill_in_catalog_from_value(CannedCatalog *result,
        value *top_value, const char *catalog_file_name,
        const char *executable_directory);


static string_index *catalog_index = NULL;
static pthread_mutex_t catalog_lock = PTHREAD_MUTEX_INITIALIZER;
static std::vector<CannedCatalog *> all_catalogs;


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

void Fetch::doScript(size_t host_start, size_t path_end)
  {
    size_t token_count = 1;
    const char *follow = &(url[host_start]);
    while (follow < &(url[path_end]))
      {
        if (((*follow == ' ') || (*follow == '@')) &&
            ((follow[1] != ' ') || (follow[1] != '@')))
          {
            ++token_count;
          }
        ++follow;
      }
    char **argv = new char *[token_count + 1];
    char *buffer = new char[(path_end - host_start) + 1];
    memcpy(buffer, &(url[host_start]), path_end - host_start);
    buffer[path_end - host_start] = 0;
    argv[0] = buffer;
    size_t arg_num = 1;
    char *follow_buffer = buffer;
    while (follow_buffer < &(buffer[path_end - host_start]))
      {
        if ((*follow_buffer == ' ') || (*follow_buffer == '@'))
          {
            *follow_buffer = 0;
            if ((follow_buffer[1] != ' ') || (follow_buffer[1] != '@'))
              {
                argv[arg_num] = &(follow_buffer[1]);
                ++arg_num;
              }
          }
        ++follow_buffer;
      }
    assert(arg_num == token_count);
    argv[arg_num] = NULL;

    size_t length0 = strlen(argv[0]);
    if ((length0 >= 16) &&
        (strcmp(&(argv[0][length0 - 16]), "/canned_api.salm") == 0))
      {
        const char *fetch_if_not_found =
                getenv("TERRIER_CANNED_API_FETCH_IF_NOT_FOUND");
        if ((fetch_if_not_found != NULL) &&
            (strcmp(fetch_if_not_found, "yes") == 0))
          {
            /* Let the script handle it in this case. */
            goto skip;
          }

        size_t used_argument_count = 1;

        if (arg_num < used_argument_count + 1)
            goto skip;

        if (strcmp(argv[used_argument_count], "-new-data-directory") == 0)
          {
            if (arg_num < used_argument_count + 3)
                goto skip;
            used_argument_count += 2;
          }

        if (strcmp(argv[used_argument_count], "-real-url-base") == 0)
          {
            if (arg_num < used_argument_count + 3)
                goto skip;
            used_argument_count += 2;
          }

        if (arg_num != used_argument_count + 2)
            goto skip;

        const char *catalog_file_name = argv[used_argument_count];
        const char *url_tail = argv[used_argument_count + 1];

        CannedCatalog *catalog =
                find_catalog(catalog_file_name, argv[0], length0 - 16);
        if (catalog == NULL)
          {
            delete[] argv;
            delete[] buffer;
            throw "Script returned non-zero exit status 1.";
          }

        class CannedReader : public HTTPRawReader
          {
          private:
            CannedCatalog *catalog;
            std::string catalog_file_name;
            std::string url_tail;
            std::stringstream body;
            FILE *fp;
            std::vector<char> buffer;

            void start_read(void)
              {
                if (catalog == NULL)
                    return;
                std::string body_string = body.str();
                const char *body_chars = body_string.c_str();
                size_t body_char_count = strlen(body_chars);
                if ((body_char_count > 0) &&
                    (body_chars[body_char_count - 1] != '\n'))
                  {
                    body_string += "\n";
                    body_chars = body_string.c_str();
                  }
                fp = catalog->open_item(body_chars, url_tail.c_str(),
                                        catalog_file_name.c_str());
                catalog = NULL;
                if (fp == NULL)
                    throw "Script returned non-zero exit status 1.";
              }

          public:
            CannedReader(CannedCatalog *catalog, const char *catalog_file_name,
                    const char *url_tail) : catalog(catalog),
                            catalog_file_name(catalog_file_name),
                            url_tail(url_tail), fp(NULL)
              {
                assert(catalog != NULL);
              }
            ~CannedReader(void)
              {
                if (fp != NULL)
                    fclose(fp);
              }

            char *readLine(void)
              {
                start_read();
                buffer.clear();
                while (true)
                  {
                    char local_buffer[1];
                    size_t num = fread(&(local_buffer[0]), 1, 1, fp);
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
                data.fd = fileno(fp);
                data.events = POLLIN;
                return (poll(&data, 1, 0) > 0);
              }
            ssize_t read_bytes(char *buffer, size_t byte_count)
              {
                start_read();
                return fread(buffer, 1, byte_count, fp);
              }
            void check_for_errors(void)
              {
              }

            void add_to_body(const char *to_add, size_t byte_count)
              {
                body.write(to_add, byte_count);
              }
          };
        CannedReader *canned_reader =
                new CannedReader(catalog, catalog_file_name, url_tail);
        reader = canned_reader;

        class CannedWriter : public HTTPRawWriter
          {
          private:
            CannedReader *reader;
            enum state_type
              {
                STATE_HEADER,
                STATE_HEADER_LF,
                STATE_HEADER_LF_CR,
                STATE_BODY
              };
            state_type state;

          public:
            CannedWriter(CannedReader *reader) : reader(reader),
                    state(STATE_HEADER)  { }
            ~CannedWriter(void)  { }

            void write(const char *to_write)
              {
                write(to_write, strlen(to_write));
              }
            void write(const char *to_write, size_t byte_count)
              {
                if (state == STATE_BODY)
                  {
                    reader->add_to_body(to_write, byte_count);
                    return;
                  }
                for (size_t num = 0; num < byte_count; ++num)
                  {
                    switch (to_write[num])
                      {
                        case '\r':
                            switch (state)
                              {
                                case STATE_HEADER:
                                    break;
                                case STATE_HEADER_LF:
                                    state = STATE_HEADER_LF_CR;
                                    break;
                                case STATE_HEADER_LF_CR:
                                    state = STATE_HEADER;
                                    break;
                                default:
                                    assert(false);
                              }
                            break;
                        case '\n':
                            switch (state)
                              {
                                case STATE_HEADER:
                                    state = STATE_HEADER_LF;
                                    break;
                                case STATE_HEADER_LF:
                                case STATE_HEADER_LF_CR:
                                    state = STATE_BODY;
                                    if (byte_count > num + 1)
                                      {
                                        reader->add_to_body(
                                                &(to_write[num + 1]),
                                                byte_count - (num + 1));
                                      }
                                    return;
                                default:
                                    assert(false);
                              }
                            break;
                        default:
                            state = STATE_HEADER;
                            break;
                      }
                  }
              }
            ssize_t read(char *buffer, size_t byte_count)
              {
                return reader->read_bytes(buffer, byte_count);
              }
          };
        writer = new CannedWriter(canned_reader);

#ifdef SAVE_RESPONSES
        doSaveResponsesSetup();
#endif /* SAVE_RESPONSES */

        delete[] argv;
        delete[] buffer;
        return;
      }
  skip:

    int incoming_pipe_fds[2];
    int retcode = pipe(incoming_pipe_fds);
    if (retcode != 0)
        throwf("Unable to open a pipe: %s.", strerror(errno));
    int outgoing_pipe_fds[2];
    retcode = pipe(outgoing_pipe_fds);
    if (retcode != 0)
        throwf("Unable to open a pipe: %s.", strerror(errno));
    pid_t fork_result = fork();
    if (fork_result == -1)
      {
        throwf("Unable to fork: %s.", strerror(errno));
      }
    else if (fork_result == 0)
      {
        /* This is the child. */
        close(incoming_pipe_fds[0]);
        close(1);
        int retcode = dup2(incoming_pipe_fds[1], 1);
        if (retcode == -1)
          {
            throwf("Unable to set standard out to a pipe: %s.",
                   strerror(errno));
          }

        close(outgoing_pipe_fds[1]);
        close(0);
        retcode = dup2(outgoing_pipe_fds[0], 0);
        if (retcode == -1)
            throwf("Unable to set standard in to a pipe: %s.", strerror(errno));

        execvp(argv[0], argv);
        throwf("Failed attempting to execvp() on `%s': %s.\n", argv[0],
               strerror(errno));
      }
    else
      {
        /* This is the parent. */
        delete[] argv;
        delete[] buffer;
        close(incoming_pipe_fds[1]);
        close(outgoing_pipe_fds[0]);

        class ScriptReader : public HTTPSocketReader
          {
          private:
            pid_t script_pid;

          public:
            ScriptReader(int socket_num, pid_t script_pid) :
                    HTTPSocketReader(socket_num), script_pid(script_pid)
              { }
            ~ScriptReader(void)  { }

            void check_for_errors(void)
              {
                int script_status;
                pid_t wait_status = waitpid(script_pid, &script_status, 0);
                if (wait_status == script_pid)
                  {
                    if (WIFEXITED(script_status))
                      {
                        if (WEXITSTATUS(script_status) != 0)
                          {
                            throwf("Script returned non-zero exit status %d.",
                                   WEXITSTATUS(script_status));
                          }
                      }
                    else
                      {
                        if (WIFSIGNALED(script_status))
                          {
                            throwf("Script died from signal %lu.",
                                   (unsigned long)(WTERMSIG(script_status)));
                          }
                        throwf("Script died with exit status %lu.",
                               (unsigned long)script_status);
                      }
                  }
              }
          };
        reader = new ScriptReader(incoming_pipe_fds[0], fork_result);

        writer = new SocketWriter(outgoing_pipe_fds[1], reader, true);

#ifdef SAVE_RESPONSES
        doSaveResponsesSetup();
#endif /* SAVE_RESPONSES */
      }
  }

extern void clean_up_fetch(void)
  {
    pthread_mutex_lock(&catalog_lock);

    if (catalog_index != NULL)
      {
        destroy_string_index(catalog_index);
        catalog_index = NULL;
        size_t count = all_catalogs.size();
        for (size_t num = 0; num < count; ++num)
            delete all_catalogs[num];
        all_catalogs.clear();
      }

    pthread_mutex_unlock(&catalog_lock);
  }


static CannedCatalog *find_catalog(const char *catalog_file_name,
        const char *executable_directory, size_t executable_directory_length)
  {
    assert(catalog_file_name != NULL);

    CannedCatalog *result;

    pthread_mutex_lock(&catalog_lock);

    if (catalog_index == NULL)
      {
        catalog_index = create_string_index();
        if (catalog_index == NULL)
            throw "Out of memory.";
      }

    result = (CannedCatalog *)(lookup_in_string_index(catalog_index,
                                                      catalog_file_name));

    pthread_mutex_unlock(&catalog_lock);

    if (result != NULL)
        return result;

    char *directory_copy = new char[executable_directory_length + 1];
    memcpy(directory_copy, executable_directory, executable_directory_length);
    directory_copy[executable_directory_length] = 0;

    pthread_mutex_lock(&catalog_lock);

    void *include_handler_data = create_local_file_include_handler_data(
            catalog_file_name, "", directory_copy);
    if (include_handler_data == NULL)
      {
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    file_parser *the_file_parser = create_file_parser(catalog_file_name, NULL,
            NULL, &local_file_include_handler,
            &local_file_interface_include_handler, include_handler_data, NULL,
            NULL, true);
    if (the_file_parser == NULL)
      {
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    parser *the_parser = file_parser_parser(the_file_parser);

    open_expression *the_open_expression =
            parse_expression(the_parser, EPP_TOP, NULL, FALSE);
    if (the_open_expression == NULL)
      {
        delete_file_parser(the_file_parser);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    tokenizer *the_tokenizer = file_parser_tokenizer(the_file_parser);

    token *the_token = next_token(the_tokenizer);
    if (the_token == NULL)
      {
        delete_open_expression(the_open_expression);
        delete_file_parser(the_file_parser);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    token_kind kind = get_token_kind(the_token);

    if (kind == TK_ERROR)
      {
        delete_open_expression(the_open_expression);
        delete_file_parser(the_file_parser);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    if (kind != TK_END_OF_INPUT)
      {
        token_error(the_token, "Syntax error -- expected end of input.");
        delete_open_expression(the_open_expression);
        delete_file_parser(the_file_parser);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    verdict the_verdict = consume_token(the_tokenizer);
    if (the_verdict != MISSION_ACCOMPLISHED)
      {
        delete_open_expression(the_open_expression);
        delete_file_parser(the_file_parser);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    delete_file_parser(the_file_parser);

    declaration *built_ins_declaration =
            create_standard_built_ins_class_declaration();
    if (built_ins_declaration == NULL)
      {
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    tracer *the_tracer = create_tracer(TC_COUNT, trace_channel_names);
    if (the_tracer == NULL)
      {
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    salmon_thread *root_thread = create_salmon_thread("Root Thread",
            get_root_thread_back_end_data());
    if (root_thread == NULL)
      {
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    jumper *the_jumper = create_root_jumper(root_thread, the_tracer);
    if (the_jumper == NULL)
      {
        salmon_thread_remove_reference(root_thread);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    value *arguments_value = create_semi_labeled_value_list_value();
    if (arguments_value == NULL)
      {
        delete_jumper(the_jumper);
        salmon_thread_remove_reference(root_thread);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    value *element_value = c_string_to_value("???");
    if (element_value == NULL)
      {
        value_remove_reference(arguments_value, NULL);
        delete_jumper(the_jumper);
        salmon_thread_remove_reference(root_thread);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    the_verdict = add_field(arguments_value, NULL, element_value);
    value_remove_reference(element_value, NULL);
    if (the_verdict != MISSION_ACCOMPLISHED)
      {
        value_remove_reference(arguments_value, NULL);
        delete_jumper(the_jumper);
        salmon_thread_remove_reference(root_thread);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    context *top_level_context = create_top_level_context(arguments_value);
    value_remove_reference(arguments_value, NULL);
    if (top_level_context == NULL)
      {
        delete_jumper(the_jumper);
        salmon_thread_remove_reference(root_thread);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    object *built_ins_object = object_for_class_declaration(
            declaration_routine_declaration(built_ins_declaration),
            top_level_context, jumper_purity_level(the_jumper), the_tracer,
            root_thread, the_jumper);
    salmon_thread_remove_reference(root_thread);
    if (built_ins_object == NULL)
      {
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    context *built_ins_context =
            global_object_internal_context(built_ins_object, the_jumper);

    unbound_name_manager *the_unbound_name_manager =
            open_expression_unbound_name_manager(the_open_expression);
    assert(the_unbound_name_manager != NULL);

    quark_declaration *api_error_declaration = create_quark_declaration();
    if (api_error_declaration == NULL)
      {
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    source_location start_location;
    start_location.file_name = __FILE__;
    start_location.start_line_number = __LINE__;
    start_location.start_column_number = 1;
    start_location.end_line_number = __LINE__;
    start_location.end_column_number = 1;
    start_location.holder = NULL;

    declaration *the_declaration = create_declaration_for_quark("api_error",
            false, false, true, api_error_declaration,
            get_declaration_location(built_ins_declaration));
    if (the_declaration == NULL)
      {
        quark_declaration_remove_reference(api_error_declaration);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    the_verdict = bind_quark_name(the_unbound_name_manager, "api_error",
                                  api_error_declaration);
    if (the_verdict != MISSION_ACCOMPLISHED)
      {
        quark_declaration_remove_reference(api_error_declaration);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    statement *api_error_statement = create_declaration_statement();
    if (api_error_statement == NULL)
      {
        quark_declaration_remove_reference(api_error_declaration);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    the_verdict = declaration_statement_add_declaration(api_error_statement,
                                                        the_declaration);
    if (the_verdict != MISSION_ACCOMPLISHED)
      {
        delete_statement(api_error_statement);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    static_home *global_static_home = create_static_home(
            unbound_name_manager_static_count(the_unbound_name_manager),
            unbound_name_manager_static_declarations(
                    the_unbound_name_manager));
    if (global_static_home == NULL)
      {
        delete_statement(api_error_statement);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    context *static_global_context = create_static_context(built_ins_context,
            global_static_home, the_jumper);
    if (static_global_context == NULL)
      {
        delete_static_home(global_static_home);
        delete_statement(api_error_statement);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    statement_block *api_error_statement_block = create_statement_block();
    if (api_error_statement_block == NULL)
      {
        exit_context(static_global_context, the_jumper);
        delete_static_home(global_static_home);
        delete_statement(api_error_statement);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    the_verdict = append_statement_to_block(api_error_statement_block,
                                            api_error_statement);
    if (the_verdict != MISSION_ACCOMPLISHED)
      {
        delete_statement_block(api_error_statement_block);
        exit_context(static_global_context, the_jumper);
        delete_static_home(global_static_home);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    context *main_context = create_statement_block_context(
            static_global_context, api_error_statement_block, NULL, NULL,
            the_jumper);
    if (main_context == NULL)
      {
        exit_context(static_global_context, the_jumper);
        delete_static_home(global_static_home);
        delete_statement_block(api_error_statement_block);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    execute_statement(api_error_statement, main_context, the_jumper, NULL);

    value *top_value = evaluate_expression(
            open_expression_expression(the_open_expression), main_context,
            the_jumper);
    if (top_value == NULL)
      {
        exit_context(main_context, the_jumper);
        exit_context(static_global_context, the_jumper);
        delete_static_home(global_static_home);
        delete_statement_block(api_error_statement_block);
        close_object(built_ins_object, the_jumper);
        object_remove_reference(built_ins_object, the_jumper);
        exit_context(top_level_context, NULL);
        delete_jumper(the_jumper);
        delete_tracer(the_tracer);
        declaration_remove_reference(built_ins_declaration);
        delete_open_expression(the_open_expression);
        delete_local_file_include_handler_data(include_handler_data);
        delete[] directory_copy;
        pthread_mutex_unlock(&catalog_lock);
        return NULL;
      }

    wait_for_all_threads_to_finish();

    result = new CannedCatalog();

    result = fill_in_catalog_from_value(result, top_value, catalog_file_name,
                                        directory_copy);

    value_remove_reference(top_value, the_jumper);
    exit_context(main_context, the_jumper);
    exit_context(static_global_context, the_jumper);
    delete_static_home(global_static_home);
    delete_statement_block(api_error_statement_block);
    close_object(built_ins_object, the_jumper);
    object_remove_reference(built_ins_object, the_jumper);
    exit_context(top_level_context, NULL);
    delete_jumper(the_jumper);
    delete_tracer(the_tracer);
    declaration_remove_reference(built_ins_declaration);
    delete_open_expression(the_open_expression);
    delete_local_file_include_handler_data(include_handler_data);
    delete[] directory_copy;

    enter_into_string_index(catalog_index, catalog_file_name, result);
    all_catalogs.push_back(result);

    pthread_mutex_unlock(&catalog_lock);

    return result;
  }

static object *object_for_class_declaration(routine_declaration *declaration,
        context *the_context, purity_level *level, tracer *the_tracer,
        salmon_thread *root_thread, jumper *the_jumper)
  {
    routine_instance *the_class;
    type *return_type;
    value *routine_value;
    expression *routine_expression;
    call *the_call;
    value *object_value;
    object *result;

    assert(declaration != NULL);
    assert(the_context != NULL);
    assert(level != NULL);

    the_class = create_routine_instance(declaration, level, NULL);
    if (the_class == NULL)
        return NULL;

    return_type = get_class_type(the_class);
    if (return_type == NULL)
      {
        routine_instance_remove_reference(the_class, NULL);
        return NULL;
      }

    assert(!(routine_instance_scope_exited(the_class)));
    routine_instance_set_return_type(the_class, return_type, 1, the_jumper);
    type_remove_reference(return_type, the_jumper);
    if (!(jumper_flowing_forward(the_jumper)))
      {
        routine_instance_remove_reference(the_class, the_jumper);
        return NULL;
      }

    assert(routine_instance_instance(the_class) != NULL);
    set_instance_instantiated(routine_instance_instance(the_class));

    assert(!(routine_instance_scope_exited(the_class)));
    routine_instance_set_up_static_context(the_class, the_context, the_jumper);
    if (!(jumper_flowing_forward(the_jumper)))
      {
        routine_instance_remove_reference(the_class, the_jumper);
        return NULL;
      }

    routine_value = create_routine_value(the_class);
    routine_instance_remove_reference(the_class, the_jumper);
    if (routine_value == NULL)
        return NULL;

    routine_expression = create_constant_expression(routine_value);
    value_remove_reference(routine_value, NULL);
    if (routine_expression == NULL)
        return NULL;

    the_call = create_call(routine_expression, 0, NULL, NULL, NULL);
    if (the_call == NULL)
        return NULL;

    object_value = execute_call(the_call, TRUE, NULL, NULL, 0, the_context,
                                the_jumper);
    delete_call(the_call);
    if (!(jumper_flowing_forward(the_jumper)))
      {
        assert(object_value == NULL);
        assert(jumper_target(the_jumper) == NULL);
        return NULL;
      }

    assert(object_value != NULL);
    assert(get_value_kind(object_value) == VK_OBJECT);
    result = object_value_data(object_value);
    object_add_reference(result);
    value_remove_reference(object_value, NULL);
    return result;
  }

static context *global_object_internal_context(object *global_object,
                                               jumper *the_jumper)
  {
    size_t print_field_num;
    value *print_value;
    routine_instance *the_routine_instance;

    assert(global_object != NULL);
    assert(the_jumper != NULL);

    assert(!(object_is_closed(global_object))); /* VERIFIED */
    print_field_num = object_field_lookup(global_object, "print");
    assert(print_field_num < object_field_count(global_object));

    assert(!(object_is_closed(global_object))); /* VERIFIED */
    print_value = object_field_read_value(global_object, print_field_num, NULL,
                                          the_jumper);
    if (!(jumper_flowing_forward(the_jumper)))
      {
        assert(print_value == NULL);
        return NULL;
      }

    assert(print_value != NULL);
    assert(value_is_valid(print_value)); /* VERIFIED */

    assert(get_value_kind(print_value) == VK_ROUTINE);
    the_routine_instance = routine_value_data(print_value);
    assert(the_routine_instance != NULL);

    value_remove_reference(print_value, NULL);

    assert(routine_instance_is_instantiated(the_routine_instance));
            /* VERIFIED */
    assert(!(routine_instance_scope_exited(the_routine_instance)));
            /* VERIFIED */
    return routine_instance_context(the_routine_instance);
  }

static CannedCatalog *fill_in_catalog_from_value(CannedCatalog *result,
        value *top_value, const char *catalog_file_name,
        const char *executable_directory)
  {
    assert(result != NULL);
    assert(top_value != NULL);

    if (get_value_kind(top_value) != VK_SEMI_LABELED_VALUE_LIST)
      {
        delete result;
        fprintf(stderr,
                "In canned API catalog file `%s', the top-level value was not a"
                " semi-labeled value list.\n", catalog_file_name);
        return NULL;
      }

    size_t component_count = value_component_count(top_value);
    for (size_t component_num = 0; component_num < component_count;
         ++component_num)
      {
        value *component_value =
                value_component_value(top_value, component_num);
        assert(component_value != NULL);

        if (get_value_kind(component_value) != VK_SEMI_LABELED_VALUE_LIST)
          {
            delete result;
            fprintf(stderr,
                    "In canned API catalog file `%s', component %lu of the "
                    "top-level value was not a semi-labeled value list.\n",
                    catalog_file_name, (unsigned long)component_num);
            return NULL;
          }

        size_t inner_count = value_component_count(component_value);
        const char *body;
        switch (inner_count)
          {
            case 2:
              {
                body = "";
                break;
              }
            case 3:
              {
                value *body_value = value_component_value(component_value, 2);
                assert(body_value != NULL);

                if (get_value_kind(body_value) != VK_STRING)
                  {
                    delete result;
                    fprintf(stderr,
                            "In canned API catalog file `%s', component %lu of "
                            "the top-level value had a non-string third "
                            "element.\n", catalog_file_name,
                            (unsigned long)component_num);
                    return NULL;
                  }
                body = string_value_data(body_value);
                break;
              }
            default:
              {
                delete result;
                fprintf(stderr,
                        "In canned API catalog file `%s', component %lu of the "
                        "top-level value had %lu elements instead of 2 or 3.\n",
                        catalog_file_name, (unsigned long)component_num,
                        (unsigned long)inner_count);
                return NULL;
              }
          }

        value *url_tail_value = value_component_value(component_value, 0);
        assert(url_tail_value != NULL);

        if (get_value_kind(url_tail_value) != VK_STRING)
          {
            delete result;
            fprintf(stderr,
                    "In canned API catalog file `%s', component %lu of the "
                    "top-level value had a non-string first element.\n",
                    catalog_file_name, (unsigned long)component_num);
            return NULL;
          }

        value *file_name_value = value_component_value(component_value, 1);
        assert(file_name_value != NULL);

        if (get_value_kind(file_name_value) == VK_QUARK)
          {
            result->add_item(body, string_value_data(url_tail_value),
                             "api_error");
            continue;
          }

        if (get_value_kind(file_name_value) != VK_STRING)
          {
            delete result;
            fprintf(stderr,
                    "In canned API catalog file `%s', component %lu of the "
                    "top-level value had a non-string second element.\n",
                    catalog_file_name, (unsigned long)component_num);
            return NULL;
          }

        const char *relative_file_name = string_value_data(file_name_value);

        char *full_path = new char[
                strlen(executable_directory) + strlen(relative_file_name) + 2];
        sprintf(full_path, "%s/%s", executable_directory, relative_file_name);
        result->add_item(body, string_value_data(url_tail_value), full_path);
        delete[] full_path;
      }

    return result;
  }
