/* file "UberCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERCOMMANDJSON_H
#define UBERCOMMANDJSON_H

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


class UberCommandJSON : public CommandResultJSON
  {
  private:

    UberCommandJSON(const UberCommandJSON &);
    UberCommandJSON & operator=(const UberCommandJSON &other);

  public:
    UberCommandJSON(void);
    virtual ~UberCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getUberCommandKind(void) const = 0;

    virtual size_t extraUberCommandComponentCount(void) const = 0;
    virtual const char *extraUberCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraUberCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraUberCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraUberCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraUberCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        result += extraUberCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "UberCommandKind";
        return extraUberCommandComponentKey((component_num - 1));
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getUberCommandKind());
        return extraUberCommandComponentValue((component_num - 1));
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getUberCommandKind());
        return extraUberCommandComponentValue((component_num - 1));
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "UberCommandKind") == 0)
            return new JSONStringValue(getUberCommandKind());
        return extraUberCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "UberCommandKind") == 0)
            return new JSONStringValue(getUberCommandKind());
        return extraUberCommandLookup(field_name);
      }


    virtual void extraUberCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraUberCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "UberCommandKind") == 0)
            return;
        extraUberCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "UberCommandKind") == 0)
            return;
        extraUberCommandSetField(key, new_component);
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
        handler->pair("UberCommandKind", getUberCommandKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCommandJSON>, UberCommandJSON *, bool> generator("Type UberCommand", ignore_extras);
            parse_json_value(text, "Text for UberCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCommandJSON>, UberCommandJSON *, bool> generator("Type UberCommand", ignore_extras);
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
                throw("The `UberCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "UberCommand") == 0))
                throw("The key field has a value other than `UberCommand'.");
            UberCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<UberCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getUberCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `UberCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((UberCommandJSON *)new_result);
          }
        void finish(UberCommandJSON *result)
          {
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(UberCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "UberCommandKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"UberCommandKind\" of the UberCommand class")
          {
            set_what("the UberCommand class");
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
    static UberCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* UBERCOMMANDJSON_H */