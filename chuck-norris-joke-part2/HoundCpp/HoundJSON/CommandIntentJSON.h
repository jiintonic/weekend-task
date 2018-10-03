/* file "CommandIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMMANDINTENTJSON_H
#define COMMANDINTENTJSON_H

#pragma interface

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


class CommandIntentJSON : public ReferenceCounted
  {
  private:

    CommandIntentJSON(const CommandIntentJSON &);
    CommandIntentJSON & operator=(const CommandIntentJSON &other);

  public:
    CommandIntentJSON(void);
    virtual ~CommandIntentJSON(void);
    virtual const char *getCommandIntentKind(void) const = 0;

    virtual size_t extraCommandIntentComponentCount(void) const = 0;
    virtual const char *extraCommandIntentComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraCommandIntentComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraCommandIntentComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraCommandIntentLookup(const char *field_name) = 0;
    virtual const JSONValue *extraCommandIntentLookup(const char *field_name) const = 0;


    virtual void extraCommandIntentAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraCommandIntentSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("CommandIntentKind", getCommandIntentKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static CommandIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CommandIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CommandIntentJSON>, CommandIntentJSON *, bool> generator("Type CommandIntent", ignore_extras);
            parse_json_value(text, "Text for CommandIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CommandIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CommandIntentJSON>, CommandIntentJSON *, bool> generator("Type CommandIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
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
                throw("The `CommandIntentKind' field is missing.");
            CommandIntentJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<CommandIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCommandIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getCommandIntentJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `CommandIntentKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(CommandIntentJSON *result)
          {
          }
        virtual void handle_result(CommandIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "CommandIntentKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : unknownFieldGenerator(ignore_extras), keyGenerator("key field \"CommandIntentKind\" of the CommandIntent class")
          {
            set_what("the CommandIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static CommandIntentJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* COMMANDINTENTJSON_H */
