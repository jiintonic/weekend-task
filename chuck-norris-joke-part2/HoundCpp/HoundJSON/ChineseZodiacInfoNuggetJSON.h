/* file "ChineseZodiacInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CHINESEZODIACINFONUGGETJSON_H
#define CHINESEZODIACINFONUGGETJSON_H

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


class ChineseZodiacInfoNuggetJSON : public InformationNuggetJSON
  {
  private:

    ChineseZodiacInfoNuggetJSON(const ChineseZodiacInfoNuggetJSON &);
    ChineseZodiacInfoNuggetJSON & operator=(const ChineseZodiacInfoNuggetJSON &other);

  public:
    ChineseZodiacInfoNuggetJSON(void);
    virtual ~ChineseZodiacInfoNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getChineseZodiacInfoNuggetKind(void) const = 0;

    virtual size_t extraChineseZodiacInfoNuggetComponentCount(void) const = 0;
    virtual const char *extraChineseZodiacInfoNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        result += extraChineseZodiacInfoNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "ChineseZodiacInfoNuggetKind";
        return extraChineseZodiacInfoNuggetComponentKey((component_num - 1));
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getChineseZodiacInfoNuggetKind());
        return extraChineseZodiacInfoNuggetComponentValue((component_num - 1));
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getChineseZodiacInfoNuggetKind());
        return extraChineseZodiacInfoNuggetComponentValue((component_num - 1));
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "ChineseZodiacInfoNuggetKind") == 0)
            return new JSONStringValue(getChineseZodiacInfoNuggetKind());
        return extraChineseZodiacInfoNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "ChineseZodiacInfoNuggetKind") == 0)
            return new JSONStringValue(getChineseZodiacInfoNuggetKind());
        return extraChineseZodiacInfoNuggetLookup(field_name);
      }


    virtual void extraChineseZodiacInfoNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraChineseZodiacInfoNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "ChineseZodiacInfoNuggetKind") == 0)
            return;
        extraChineseZodiacInfoNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "ChineseZodiacInfoNuggetKind") == 0)
            return;
        extraChineseZodiacInfoNuggetSetField(key, new_component);
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
        handler->pair("ChineseZodiacInfoNuggetKind", getChineseZodiacInfoNuggetKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ChineseZodiacInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ChineseZodiacInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ChineseZodiacInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacInfoNuggetJSON>, ChineseZodiacInfoNuggetJSON *, bool> generator("Type ChineseZodiacInfoNugget", ignore_extras);
            parse_json_value(text, "Text for ChineseZodiacInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ChineseZodiacInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ChineseZodiacInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacInfoNuggetJSON>, ChineseZodiacInfoNuggetJSON *, bool> generator("Type ChineseZodiacInfoNugget", ignore_extras);
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
                throw("The `ChineseZodiacInfoNuggetKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "ChineseZodiacInfoNugget") == 0))
                throw("The key field has a value other than `ChineseZodiacInfoNugget'.");
            ChineseZodiacInfoNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<ChineseZodiacInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraChineseZodiacInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getChineseZodiacInfoNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `ChineseZodiacInfoNuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((ChineseZodiacInfoNuggetJSON *)new_result);
          }
        void finish(ChineseZodiacInfoNuggetJSON *result)
          {
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ChineseZodiacInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "ChineseZodiacInfoNuggetKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"ChineseZodiacInfoNuggetKind\" of the ChineseZodiacInfoNugget class")
          {
            set_what("the ChineseZodiacInfoNugget class");
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
    static ChineseZodiacInfoNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* CHINESEZODIACINFONUGGETJSON_H */
