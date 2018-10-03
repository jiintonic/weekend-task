/* file "ClientCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CLIENTCOMMANDJSON_H
#define CLIENTCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ClientCommandJSON : public CommandResultJSON
  {
  private:

    ClientCommandJSON(const ClientCommandJSON &);
    ClientCommandJSON & operator=(const ClientCommandJSON &other);

  public:
    ClientCommandJSON(void);
    virtual ~ClientCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getClientCommandKind(void) const = 0;

    virtual size_t extraClientCommandComponentCount(void) const = 0;
    virtual const char *extraClientCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraClientCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraClientCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraClientCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraClientCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        result += extraClientCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "ClientCommandKind";
        return extraClientCommandComponentKey((component_num - 1));
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getClientCommandKind());
        return extraClientCommandComponentValue((component_num - 1));
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getClientCommandKind());
        return extraClientCommandComponentValue((component_num - 1));
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "ClientCommandKind") == 0)
            return new JSONStringValue(getClientCommandKind());
        return extraClientCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "ClientCommandKind") == 0)
            return new JSONStringValue(getClientCommandKind());
        return extraClientCommandLookup(field_name);
      }


    virtual void extraClientCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraClientCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "ClientCommandKind") == 0)
            return;
        extraClientCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "ClientCommandKind") == 0)
            return;
        extraClientCommandSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        handler->pair("ClientCommandKind", getClientCommandKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ClientCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ClientCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ClientCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ClientCommandJSON>, ClientCommandJSON *, bool> generator("Type ClientCommand", ignore_extras);
            parse_json_value(text, "Text for ClientCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ClientCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ClientCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ClientCommandJSON>, ClientCommandJSON *, bool> generator("Type ClientCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `ClientCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "ClientCommand") == 0))
                throw("The key field has a value other than `ClientCommand'.");
            ClientCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<ClientCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraClientCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getClientCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `ClientCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((ClientCommandJSON *)new_result);
          }
        void finish(ClientCommandJSON *result)
          {
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(ClientCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "ClientCommandKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"ClientCommandKind\" of the ClientCommand class")
          {
            set_what("the ClientCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static ClientCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* CLIENTCOMMANDJSON_H */
