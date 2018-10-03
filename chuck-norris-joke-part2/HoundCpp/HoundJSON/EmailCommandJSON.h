/* file "EmailCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILCOMMANDJSON_H
#define EMAILCOMMANDJSON_H

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


class EmailCommandJSON : public CommandResultJSON
  {
  private:

    EmailCommandJSON(const EmailCommandJSON &);
    EmailCommandJSON & operator=(const EmailCommandJSON &other);

  public:
    EmailCommandJSON(void);
    virtual ~EmailCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getEmailCommandKind(void) const = 0;

    virtual size_t extraEmailCommandComponentCount(void) const = 0;
    virtual const char *extraEmailCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraEmailCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraEmailCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraEmailCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraEmailCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        result += extraEmailCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "EmailCommandKind";
        return extraEmailCommandComponentKey((component_num - 1));
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getEmailCommandKind());
        return extraEmailCommandComponentValue((component_num - 1));
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getEmailCommandKind());
        return extraEmailCommandComponentValue((component_num - 1));
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "EmailCommandKind") == 0)
            return new JSONStringValue(getEmailCommandKind());
        return extraEmailCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "EmailCommandKind") == 0)
            return new JSONStringValue(getEmailCommandKind());
        return extraEmailCommandLookup(field_name);
      }


    virtual void extraEmailCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraEmailCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "EmailCommandKind") == 0)
            return;
        extraEmailCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "EmailCommandKind") == 0)
            return;
        extraEmailCommandSetField(key, new_component);
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
        handler->pair("EmailCommandKind", getEmailCommandKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static EmailCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailCommandJSON>, EmailCommandJSON *, bool> generator("Type EmailCommand", ignore_extras);
            parse_json_value(text, "Text for EmailCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailCommandJSON>, EmailCommandJSON *, bool> generator("Type EmailCommand", ignore_extras);
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
                throw("The `EmailCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "EmailCommand") == 0))
                throw("The key field has a value other than `EmailCommand'.");
            EmailCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<EmailCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraEmailCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getEmailCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `EmailCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((EmailCommandJSON *)new_result);
          }
        void finish(EmailCommandJSON *result)
          {
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(EmailCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "EmailCommandKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"EmailCommandKind\" of the EmailCommand class")
          {
            set_what("the EmailCommand class");
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
    static EmailCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* EMAILCOMMANDJSON_H */
