/* file "RobotCommandIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTCOMMANDINTENTJSON_H
#define ROBOTCOMMANDINTENTJSON_H

#pragma interface

#include "CommandIntentJSON.h"
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


class RobotCommandIntentJSON : public CommandIntentJSON
  {
  private:

    RobotCommandIntentJSON(const RobotCommandIntentJSON &);
    RobotCommandIntentJSON & operator=(const RobotCommandIntentJSON &other);

  public:
    RobotCommandIntentJSON(void);
    virtual ~RobotCommandIntentJSON(void);
    const char * getCommandIntentKind(void) const;
    virtual const char *getRobotIntentKind(void) const = 0;

    virtual size_t extraRobotCommandIntentComponentCount(void) const = 0;
    virtual const char *extraRobotCommandIntentComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraRobotCommandIntentComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraRobotCommandIntentComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraRobotCommandIntentLookup(const char *field_name) = 0;
    virtual const JSONValue *extraRobotCommandIntentLookup(const char *field_name) const = 0;
    size_t extraCommandIntentComponentCount(void) const
      {
        size_t result = 1;
        result += extraRobotCommandIntentComponentCount();
        return result;
      }
    const char *extraCommandIntentComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "RobotIntentKind";
        return extraRobotCommandIntentComponentKey((component_num - 1));
      }
    JSONValue *extraCommandIntentComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getRobotIntentKind());
        return extraRobotCommandIntentComponentValue((component_num - 1));
      }
    const JSONValue *extraCommandIntentComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getRobotIntentKind());
        return extraRobotCommandIntentComponentValue((component_num - 1));
      }
    JSONValue *extraCommandIntentLookup(const char *field_name)
      {
        if (strcmp(field_name, "RobotIntentKind") == 0)
            return new JSONStringValue(getRobotIntentKind());
        return extraRobotCommandIntentLookup(field_name);
      }
    const JSONValue *extraCommandIntentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "RobotIntentKind") == 0)
            return new JSONStringValue(getRobotIntentKind());
        return extraRobotCommandIntentLookup(field_name);
      }


    virtual void extraRobotCommandIntentAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraRobotCommandIntentSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "RobotIntentKind") == 0)
            return;
        extraRobotCommandIntentAppendPair(key, new_component);
      }
    void extraCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "RobotIntentKind") == 0)
            return;
        extraRobotCommandIntentSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandIntentJSON::write_fields_as_json(handler);
        handler->pair("RobotIntentKind", getRobotIntentKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RobotCommandIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotCommandIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotCommandIntentJSON>, RobotCommandIntentJSON *, bool> generator("Type RobotCommandIntent", ignore_extras);
            parse_json_value(text, "Text for RobotCommandIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotCommandIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotCommandIntentJSON>, RobotCommandIntentJSON *, bool> generator("Type RobotCommandIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandIntentJSON::Generator
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
                throw("The `RobotIntentKind' field is missing.");
            if (!(strcmp(getCommandIntentJSONKey().c_str(), "Robot") == 0))
                throw("The key field has a value other than `Robot'.");
            RobotCommandIntentJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<RobotCommandIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotCommandIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getRobotCommandIntentJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `RobotIntentKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandIntentJSON *new_result)
          {
            handle_result((RobotCommandIntentJSON *)new_result);
          }
        void finish(RobotCommandIntentJSON *result)
          {
            CommandIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(RobotCommandIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "RobotIntentKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return CommandIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandIntentJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"RobotIntentKind\" of the RobotCommandIntent class")
          {
            set_what("the RobotCommandIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            CommandIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static RobotCommandIntentJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* ROBOTCOMMANDINTENTJSON_H */
