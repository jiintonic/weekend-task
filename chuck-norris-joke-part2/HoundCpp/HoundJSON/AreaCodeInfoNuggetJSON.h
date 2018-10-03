/* file "AreaCodeInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AREACODEINFONUGGETJSON_H
#define AREACODEINFONUGGETJSON_H

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


class AreaCodeInfoNuggetJSON : public InformationNuggetJSON
  {
  private:

    AreaCodeInfoNuggetJSON(const AreaCodeInfoNuggetJSON &);
    AreaCodeInfoNuggetJSON & operator=(const AreaCodeInfoNuggetJSON &other);

  public:
    AreaCodeInfoNuggetJSON(void);
    virtual ~AreaCodeInfoNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getAreaCodeInfoNuggetKind(void) const = 0;

    virtual size_t extraAreaCodeInfoNuggetComponentCount(void) const = 0;
    virtual const char *extraAreaCodeInfoNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        result += extraAreaCodeInfoNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "AreaCodeInfoNuggetKind";
        return extraAreaCodeInfoNuggetComponentKey((component_num - 1));
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getAreaCodeInfoNuggetKind());
        return extraAreaCodeInfoNuggetComponentValue((component_num - 1));
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getAreaCodeInfoNuggetKind());
        return extraAreaCodeInfoNuggetComponentValue((component_num - 1));
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "AreaCodeInfoNuggetKind") == 0)
            return new JSONStringValue(getAreaCodeInfoNuggetKind());
        return extraAreaCodeInfoNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "AreaCodeInfoNuggetKind") == 0)
            return new JSONStringValue(getAreaCodeInfoNuggetKind());
        return extraAreaCodeInfoNuggetLookup(field_name);
      }


    virtual void extraAreaCodeInfoNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraAreaCodeInfoNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "AreaCodeInfoNuggetKind") == 0)
            return;
        extraAreaCodeInfoNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "AreaCodeInfoNuggetKind") == 0)
            return;
        extraAreaCodeInfoNuggetSetField(key, new_component);
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
        handler->pair("AreaCodeInfoNuggetKind", getAreaCodeInfoNuggetKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static AreaCodeInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AreaCodeInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AreaCodeInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeInfoNuggetJSON>, AreaCodeInfoNuggetJSON *, bool> generator("Type AreaCodeInfoNugget", ignore_extras);
            parse_json_value(text, "Text for AreaCodeInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AreaCodeInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AreaCodeInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeInfoNuggetJSON>, AreaCodeInfoNuggetJSON *, bool> generator("Type AreaCodeInfoNugget", ignore_extras);
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
                throw("The `AreaCodeInfoNuggetKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "AreaCodeInfoNugget") == 0))
                throw("The key field has a value other than `AreaCodeInfoNugget'.");
            AreaCodeInfoNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<AreaCodeInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAreaCodeInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getAreaCodeInfoNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `AreaCodeInfoNuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((AreaCodeInfoNuggetJSON *)new_result);
          }
        void finish(AreaCodeInfoNuggetJSON *result)
          {
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(AreaCodeInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "AreaCodeInfoNuggetKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"AreaCodeInfoNuggetKind\" of the AreaCodeInfoNugget class")
          {
            set_what("the AreaCodeInfoNugget class");
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
    static AreaCodeInfoNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* AREACODEINFONUGGETJSON_H */
