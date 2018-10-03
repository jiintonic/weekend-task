/* file "ChineseZodiacGeneralInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CHINESEZODIACGENERALINFONUGGETJSON_H
#define CHINESEZODIACGENERALINFONUGGETJSON_H

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


class ChineseZodiacGeneralInfoNuggetJSON : public ChineseZodiacInfoNuggetJSON
  {
  private:
    bool flagHasAdditionalInfo;
    std::string storeAdditionalInfo;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ChineseZodiacGeneralInfoNuggetJSON(const ChineseZodiacGeneralInfoNuggetJSON &);
    ChineseZodiacGeneralInfoNuggetJSON & operator=(const ChineseZodiacGeneralInfoNuggetJSON &other);

    JSONValue * extraAdditionalInfoToJSON(void) const;

    void  fromJSONAdditionalInfo(JSONValue *json_value, bool ignore_extras = false);


  public:
    ChineseZodiacGeneralInfoNuggetJSON(void);
    virtual ~ChineseZodiacGeneralInfoNuggetJSON(void);
    const char * getChineseZodiacInfoNuggetKind(void) const;
    bool  hasAdditionalInfo(void) const;
    std::string  getAdditionalInfo(void);
    const std::string  getAdditionalInfo(void) const;

    virtual size_t extraChineseZodiacGeneralInfoNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraChineseZodiacGeneralInfoNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraChineseZodiacGeneralInfoNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraChineseZodiacGeneralInfoNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraChineseZodiacGeneralInfoNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraChineseZodiacGeneralInfoNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraChineseZodiacInfoNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAdditionalInfo)
            ++result;
        result += extraChineseZodiacGeneralInfoNuggetComponentCount();
        return result;
      }
    const char *extraChineseZodiacInfoNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAdditionalInfo)
          {
            if (remainder == 0)
                return "AdditionalInfo";
            --remainder;
          }
        return extraChineseZodiacGeneralInfoNuggetComponentKey(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAdditionalInfo)
          {
            if (remainder == 0)
                return extraAdditionalInfoToJSON();
            --remainder;
          }
        return extraChineseZodiacGeneralInfoNuggetComponentValue(remainder);
      }
    const JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAdditionalInfo)
          {
            if (remainder == 0)
                return extraAdditionalInfoToJSON();
            --remainder;
          }
        return extraChineseZodiacGeneralInfoNuggetComponentValue(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "AdditionalInfo") == 0)
            return (flagHasAdditionalInfo ? extraAdditionalInfoToJSON() : NULL);
        return extraChineseZodiacGeneralInfoNuggetLookup(field_name);
      }
    const JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "AdditionalInfo") == 0)
            return (flagHasAdditionalInfo ? extraAdditionalInfoToJSON() : NULL);
        return extraChineseZodiacGeneralInfoNuggetLookup(field_name);
      }

    void setAdditionalInfo(std::string new_value)
      {
        flagHasAdditionalInfo = true;
        storeAdditionalInfo = new_value;
      }
    void unsetAdditionalInfo(void)
      {
        flagHasAdditionalInfo = false;
      }

    virtual void extraChineseZodiacGeneralInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraChineseZodiacGeneralInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraChineseZodiacGeneralInfoNuggetLookup(key);
        if (old_field == NULL)
          {
            extraChineseZodiacGeneralInfoNuggetAppendPair(key, new_component);
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
        if (strcmp(key, "AdditionalInfo") == 0)
            {
            fromJSONAdditionalInfo(new_component, false);
            return;
            }
        extraChineseZodiacGeneralInfoNuggetAppendPair(key, new_component);
      }
    void extraChineseZodiacInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "AdditionalInfo") == 0)
            {
            fromJSONAdditionalInfo(new_component, false);
            return;
            }
        extraChineseZodiacGeneralInfoNuggetSetField(key, new_component);
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
        if (flagHasAdditionalInfo)
          {
            handler->start_pair("AdditionalInfo");
            handler->string_value(storeAdditionalInfo);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ChineseZodiacGeneralInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ChineseZodiacGeneralInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ChineseZodiacGeneralInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacGeneralInfoNuggetJSON>, ChineseZodiacGeneralInfoNuggetJSON *, bool> generator("Type ChineseZodiacGeneralInfoNugget", ignore_extras);
            parse_json_value(text, "Text for ChineseZodiacGeneralInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ChineseZodiacGeneralInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ChineseZodiacGeneralInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacGeneralInfoNuggetJSON>, ChineseZodiacGeneralInfoNuggetJSON *, bool> generator("Type ChineseZodiacGeneralInfoNugget", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAdditionalInfo;
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
            if (!(strcmp(getChineseZodiacInfoNuggetJSONKey().c_str(), "ChineseZodiacGeneralInfoNugget") == 0))
                throw("The key field has a value other than `ChineseZodiacGeneralInfoNugget'.");
            ChineseZodiacGeneralInfoNuggetJSON *result = new ChineseZodiacGeneralInfoNuggetJSON();
            assert(result != NULL);
            RCHandle<ChineseZodiacGeneralInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraChineseZodiacGeneralInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ChineseZodiacInfoNuggetJSON *new_result)
          {
            handle_result((ChineseZodiacGeneralInfoNuggetJSON *)new_result);
          }
        void finish(ChineseZodiacGeneralInfoNuggetJSON *result)
          {
            if (fieldGeneratorAdditionalInfo.have_value)
              {
                result->setAdditionalInfo(fieldGeneratorAdditionalInfo.value);
                fieldGeneratorAdditionalInfo.have_value = false;
              }
            ChineseZodiacInfoNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ChineseZodiacGeneralInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "AdditionalInfo") == 0)
                return &fieldGeneratorAdditionalInfo;
            return ChineseZodiacInfoNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ChineseZodiacInfoNuggetJSON::Generator(ignore_extras), fieldGeneratorAdditionalInfo("field \"AdditionalInfo\" of the ChineseZodiacGeneralInfoNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ChineseZodiacGeneralInfoNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAdditionalInfo.reset();
            ChineseZodiacInfoNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CHINESEZODIACGENERALINFONUGGETJSON_H */
