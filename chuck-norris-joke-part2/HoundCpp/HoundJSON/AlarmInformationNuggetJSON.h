/* file "AlarmInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ALARMINFORMATIONNUGGETJSON_H
#define ALARMINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
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


class AlarmInformationNuggetJSON : public InformationNuggetJSON
  {
  private:

    AlarmInformationNuggetJSON(const AlarmInformationNuggetJSON &);
    AlarmInformationNuggetJSON & operator=(const AlarmInformationNuggetJSON &other);

  public:
    AlarmInformationNuggetJSON(void);
    virtual ~AlarmInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getAlarmNuggetKind(void) const = 0;

    virtual size_t extraAlarmInformationNuggetComponentCount(void) const = 0;
    virtual const char *extraAlarmInformationNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraAlarmInformationNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraAlarmInformationNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraAlarmInformationNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraAlarmInformationNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        result += extraAlarmInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "AlarmNuggetKind";
        return extraAlarmInformationNuggetComponentKey((component_num - 1));
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getAlarmNuggetKind());
        return extraAlarmInformationNuggetComponentValue((component_num - 1));
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getAlarmNuggetKind());
        return extraAlarmInformationNuggetComponentValue((component_num - 1));
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "AlarmNuggetKind") == 0)
            return new JSONStringValue(getAlarmNuggetKind());
        return extraAlarmInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "AlarmNuggetKind") == 0)
            return new JSONStringValue(getAlarmNuggetKind());
        return extraAlarmInformationNuggetLookup(field_name);
      }


    virtual void extraAlarmInformationNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraAlarmInformationNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "AlarmNuggetKind") == 0)
            return;
        extraAlarmInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "AlarmNuggetKind") == 0)
            return;
        extraAlarmInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        InformationNuggetJSON::write_fields_as_json(handler);
        handler->pair("AlarmNuggetKind", getAlarmNuggetKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static AlarmInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AlarmInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AlarmInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmInformationNuggetJSON>, AlarmInformationNuggetJSON *, bool> generator("Type AlarmInformationNugget", ignore_extras);
            parse_json_value(text, "Text for AlarmInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AlarmInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AlarmInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmInformationNuggetJSON>, AlarmInformationNuggetJSON *, bool> generator("Type AlarmInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
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
                throw("The `AlarmNuggetKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "Alarm") == 0))
                throw("The key field has a value other than `Alarm'.");
            AlarmInformationNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<AlarmInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAlarmInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getAlarmInformationNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `AlarmNuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((AlarmInformationNuggetJSON *)new_result);
          }
        void finish(AlarmInformationNuggetJSON *result)
          {
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(AlarmInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "AlarmNuggetKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"AlarmNuggetKind\" of the AlarmInformationNugget class")
          {
            set_what("the AlarmInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static AlarmInformationNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* ALARMINFORMATIONNUGGETJSON_H */
