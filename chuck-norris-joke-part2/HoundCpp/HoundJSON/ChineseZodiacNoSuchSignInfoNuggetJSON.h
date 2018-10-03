/* file "ChineseZodiacNoSuchSignInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CHINESEZODIACNOSUCHSIGNINFONUGGETJSON_H
#define CHINESEZODIACNOSUCHSIGNINFONUGGETJSON_H

#pragma interface

#include "ChineseZodiacInfoNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ChineseZodiacNoSuchSignInfoNuggetJSON : public ChineseZodiacInfoNuggetJSON
  {
  private:
    bool flagHasInputZodiacSign;
    std::string storeInputZodiacSign;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ChineseZodiacNoSuchSignInfoNuggetJSON(const ChineseZodiacNoSuchSignInfoNuggetJSON &);
    ChineseZodiacNoSuchSignInfoNuggetJSON & operator=(const ChineseZodiacNoSuchSignInfoNuggetJSON &other);

    JSONValue * extraInputZodiacSignToJSON(void) const;

    void  fromJSONInputZodiacSign(JSONValue *json_value, bool ignore_extras = false);


  public:
    ChineseZodiacNoSuchSignInfoNuggetJSON(void);
    virtual ~ChineseZodiacNoSuchSignInfoNuggetJSON(void);
    const char * getChineseZodiacInfoNuggetKind(void) const;
    bool  hasInputZodiacSign(void) const;
    std::string  getInputZodiacSign(void);
    const std::string  getInputZodiacSign(void) const;

    virtual size_t extraChineseZodiacNoSuchSignInfoNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraChineseZodiacNoSuchSignInfoNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraChineseZodiacNoSuchSignInfoNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraChineseZodiacNoSuchSignInfoNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraChineseZodiacNoSuchSignInfoNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraChineseZodiacNoSuchSignInfoNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraChineseZodiacInfoNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasInputZodiacSign)
            ++result;
        result += extraChineseZodiacNoSuchSignInfoNuggetComponentCount();
        return result;
      }
    const char *extraChineseZodiacInfoNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasInputZodiacSign)
          {
            if (remainder == 0)
                return "InputZodiacSign";
            --remainder;
          }
        return extraChineseZodiacNoSuchSignInfoNuggetComponentKey(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasInputZodiacSign)
          {
            if (remainder == 0)
                return extraInputZodiacSignToJSON();
            --remainder;
          }
        return extraChineseZodiacNoSuchSignInfoNuggetComponentValue(remainder);
      }
    const JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasInputZodiacSign)
          {
            if (remainder == 0)
                return extraInputZodiacSignToJSON();
            --remainder;
          }
        return extraChineseZodiacNoSuchSignInfoNuggetComponentValue(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "InputZodiacSign") == 0)
            return (flagHasInputZodiacSign ? extraInputZodiacSignToJSON() : NULL);
        return extraChineseZodiacNoSuchSignInfoNuggetLookup(field_name);
      }
    const JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "InputZodiacSign") == 0)
            return (flagHasInputZodiacSign ? extraInputZodiacSignToJSON() : NULL);
        return extraChineseZodiacNoSuchSignInfoNuggetLookup(field_name);
      }

    void setInputZodiacSign(std::string new_value)
      {
        flagHasInputZodiacSign = true;
        storeInputZodiacSign = new_value;
      }
    void unsetInputZodiacSign(void)
      {
        flagHasInputZodiacSign = false;
      }

    virtual void extraChineseZodiacNoSuchSignInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraChineseZodiacNoSuchSignInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraChineseZodiacNoSuchSignInfoNuggetLookup(key);
        if (old_field == NULL)
          {
            extraChineseZodiacNoSuchSignInfoNuggetAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }
    void extraChineseZodiacInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "InputZodiacSign") == 0)
            {
            fromJSONInputZodiacSign(new_component, false);
            return;
            }
        extraChineseZodiacNoSuchSignInfoNuggetAppendPair(key, new_component);
      }
    void extraChineseZodiacInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "InputZodiacSign") == 0)
            {
            fromJSONInputZodiacSign(new_component, false);
            return;
            }
        extraChineseZodiacNoSuchSignInfoNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        ChineseZodiacInfoNuggetJSON::write_fields_as_json(handler);
        if (flagHasInputZodiacSign)
          {
            handler->start_pair("InputZodiacSign");
            handler->string_value(storeInputZodiacSign);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ChineseZodiacNoSuchSignInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ChineseZodiacNoSuchSignInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ChineseZodiacNoSuchSignInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacNoSuchSignInfoNuggetJSON>, ChineseZodiacNoSuchSignInfoNuggetJSON *, bool> generator("Type ChineseZodiacNoSuchSignInfoNugget", ignore_extras);
            parse_json_value(text, "Text for ChineseZodiacNoSuchSignInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ChineseZodiacNoSuchSignInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ChineseZodiacNoSuchSignInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacNoSuchSignInfoNuggetJSON>, ChineseZodiacNoSuchSignInfoNuggetJSON *, bool> generator("Type ChineseZodiacNoSuchSignInfoNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public ChineseZodiacInfoNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInputZodiacSign;
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
            if (!(strcmp(getChineseZodiacInfoNuggetJSONKey().c_str(), "ChineseZodiacNoSuchSignInfoNugget") == 0))
                throw("The key field has a value other than `ChineseZodiacNoSuchSignInfoNugget'.");
            ChineseZodiacNoSuchSignInfoNuggetJSON *result = new ChineseZodiacNoSuchSignInfoNuggetJSON();
            assert(result != NULL);
            RCHandle<ChineseZodiacNoSuchSignInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraChineseZodiacNoSuchSignInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ChineseZodiacInfoNuggetJSON *new_result)
          {
            handle_result((ChineseZodiacNoSuchSignInfoNuggetJSON *)new_result);
          }
        void finish(ChineseZodiacNoSuchSignInfoNuggetJSON *result)
          {
            if (fieldGeneratorInputZodiacSign.have_value)
              {
                result->setInputZodiacSign(fieldGeneratorInputZodiacSign.value);
                fieldGeneratorInputZodiacSign.have_value = false;
              }
            ChineseZodiacInfoNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ChineseZodiacNoSuchSignInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "InputZodiacSign") == 0)
                return &fieldGeneratorInputZodiacSign;
            return ChineseZodiacInfoNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ChineseZodiacInfoNuggetJSON::Generator(ignore_extras), fieldGeneratorInputZodiacSign("field \"InputZodiacSign\" of the ChineseZodiacNoSuchSignInfoNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ChineseZodiacNoSuchSignInfoNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorInputZodiacSign.reset();
            ChineseZodiacInfoNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CHINESEZODIACNOSUCHSIGNINFONUGGETJSON_H */
