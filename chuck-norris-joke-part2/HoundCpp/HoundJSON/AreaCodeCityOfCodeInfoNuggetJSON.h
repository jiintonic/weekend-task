/* file "AreaCodeCityOfCodeInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AREACODECITYOFCODEINFONUGGETJSON_H
#define AREACODECITYOFCODEINFONUGGETJSON_H

#pragma interface

#include "AreaCodeInfoNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AreaCodeCityOfCodeInfoNuggetJSON : public AreaCodeInfoNuggetJSON
  {
  private:
    bool flagHasAreaCode;
    OInteger storeAreaCode;
    bool flagHasCityName;
    std::vector< std::string > storeCityName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AreaCodeCityOfCodeInfoNuggetJSON(const AreaCodeCityOfCodeInfoNuggetJSON &);
    AreaCodeCityOfCodeInfoNuggetJSON & operator=(const AreaCodeCityOfCodeInfoNuggetJSON &other);

    JSONValue * extraAreaCodeToJSON(void) const;
    JSONValue * extraCityNameToJSON(void) const;

    void  fromJSONAreaCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCityName(JSONValue *json_value, bool ignore_extras = false);


  public:
    AreaCodeCityOfCodeInfoNuggetJSON(void);
    virtual ~AreaCodeCityOfCodeInfoNuggetJSON(void);
    const char * getAreaCodeInfoNuggetKind(void) const;
    bool  hasAreaCode(void) const;
    OInteger  getAreaCode(void);
    const OInteger  getAreaCode(void) const;
    bool  hasCityName(void) const;
    size_t  countOfCityName(void) const;
    std::string  elementOfCityName(size_t element_num);
    const std::string  elementOfCityName(size_t element_num) const;
    std::vector< std::string >  getCityName(void);
    const std::vector< std::string >  getCityName(void) const;

    virtual size_t extraAreaCodeCityOfCodeInfoNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAreaCodeCityOfCodeInfoNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAreaCodeCityOfCodeInfoNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAreaCodeCityOfCodeInfoNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAreaCodeCityOfCodeInfoNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAreaCodeCityOfCodeInfoNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraAreaCodeInfoNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAreaCode)
            ++result;
        if (flagHasCityName)
            ++result;
        result += extraAreaCodeCityOfCodeInfoNuggetComponentCount();
        return result;
      }
    const char *extraAreaCodeInfoNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAreaCode)
          {
            if (remainder == 0)
                return "AreaCode";
            --remainder;
          }
        if (flagHasCityName)
          {
            if (remainder == 0)
                return "CityName";
            --remainder;
          }
        return extraAreaCodeCityOfCodeInfoNuggetComponentKey(remainder);
      }
    JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAreaCode)
          {
            if (remainder == 0)
                return extraAreaCodeToJSON();
            --remainder;
          }
        if (flagHasCityName)
          {
            if (remainder == 0)
                return extraCityNameToJSON();
            --remainder;
          }
        return extraAreaCodeCityOfCodeInfoNuggetComponentValue(remainder);
      }
    const JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAreaCode)
          {
            if (remainder == 0)
                return extraAreaCodeToJSON();
            --remainder;
          }
        if (flagHasCityName)
          {
            if (remainder == 0)
                return extraCityNameToJSON();
            --remainder;
          }
        return extraAreaCodeCityOfCodeInfoNuggetComponentValue(remainder);
      }
    JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "reaCode") == 0)
                    return (flagHasAreaCode ? extraAreaCodeToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ityName") == 0)
                    return (flagHasCityName ? extraCityNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAreaCodeCityOfCodeInfoNuggetLookup(field_name);
      }
    const JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "reaCode") == 0)
                    return (flagHasAreaCode ? extraAreaCodeToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ityName") == 0)
                    return (flagHasCityName ? extraCityNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAreaCodeCityOfCodeInfoNuggetLookup(field_name);
      }

    void setAreaCode(OInteger new_value)
      {
        flagHasAreaCode = true;
        storeAreaCode = new_value;
      }
    void unsetAreaCode(void)
      {
        flagHasAreaCode = false;
      }
    void initCityName(void)
      {
        flagHasCityName = true;
        storeCityName.clear();
      }
    void appendCityName(std::string to_append)
      {
        if (!flagHasCityName)
          {
            flagHasCityName = true;
            storeCityName.clear();
          }
        assert(flagHasCityName);
        storeCityName.push_back(to_append);
      }
    void unsetCityName(void)
      {
        flagHasCityName = false;
        storeCityName.clear();
      }

    virtual void extraAreaCodeCityOfCodeInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAreaCodeCityOfCodeInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAreaCodeCityOfCodeInfoNuggetLookup(key);
        if (old_field == NULL)
          {
            extraAreaCodeCityOfCodeInfoNuggetAppendPair(key, new_component);
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
    void extraAreaCodeInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "reaCode") == 0)
                    {
                    fromJSONAreaCode(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "ityName") == 0)
                    {
                    fromJSONCityName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAreaCodeCityOfCodeInfoNuggetAppendPair(key, new_component);
      }
    void extraAreaCodeInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "reaCode") == 0)
                    {
                    fromJSONAreaCode(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "ityName") == 0)
                    {
                    fromJSONCityName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAreaCodeCityOfCodeInfoNuggetSetField(key, new_component);
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
        AreaCodeInfoNuggetJSON::write_fields_as_json(handler);
        assert(flagHasAreaCode);
        handler->start_pair("AreaCode");
        handler->number_value(storeAreaCode.get_o_integer());
        if (flagHasCityName)
          {
            handler->start_pair("CityName");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeCityName.size(); ++num1)
              {
                handler->string_value(storeCityName[num1]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAreaCode()))
          {
            return "When parsing the object for %what%, the \"AreaCode\" field was missing.";
          }
        return NULL;
      }

    static AreaCodeCityOfCodeInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AreaCodeCityOfCodeInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AreaCodeCityOfCodeInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeCityOfCodeInfoNuggetJSON>, AreaCodeCityOfCodeInfoNuggetJSON *, bool> generator("Type AreaCodeCityOfCodeInfoNugget", ignore_extras);
            parse_json_value(text, "Text for AreaCodeCityOfCodeInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AreaCodeCityOfCodeInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AreaCodeCityOfCodeInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeCityOfCodeInfoNuggetJSON>, AreaCodeCityOfCodeInfoNuggetJSON *, bool> generator("Type AreaCodeCityOfCodeInfoNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public AreaCodeInfoNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorAreaCode;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCityName;
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
            if (!(strcmp(getAreaCodeInfoNuggetJSONKey().c_str(), "AreaCodeCityOfCodeInfoNugget") == 0))
                throw("The key field has a value other than `AreaCodeCityOfCodeInfoNugget'.");
            AreaCodeCityOfCodeInfoNuggetJSON *result = new AreaCodeCityOfCodeInfoNuggetJSON();
            assert(result != NULL);
            RCHandle<AreaCodeCityOfCodeInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAreaCodeCityOfCodeInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(AreaCodeInfoNuggetJSON *new_result)
          {
            handle_result((AreaCodeCityOfCodeInfoNuggetJSON *)new_result);
          }
        void finish(AreaCodeCityOfCodeInfoNuggetJSON *result)
          {
            if (fieldGeneratorAreaCode.have_value)
              {
                result->setAreaCode(fieldGeneratorAreaCode.value);
                fieldGeneratorAreaCode.have_value = false;
              }
            else if (!(result->hasAreaCode()))
              {
                error("When parsing the object for %what%, the \"AreaCode\" field was missing.");
              }
            if (fieldGeneratorCityName.have_value)
              {
                result->initCityName();
                size_t count = fieldGeneratorCityName.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCityName(fieldGeneratorCityName.value[num]);
                  }
                fieldGeneratorCityName.value.clear();
                fieldGeneratorCityName.have_value = false;
              }
            AreaCodeInfoNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(AreaCodeCityOfCodeInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "reaCode") == 0)
                        return &fieldGeneratorAreaCode;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ityName") == 0)
                        return &fieldGeneratorCityName;
                    break;
                default:
                    break;
              }
            return AreaCodeInfoNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : AreaCodeInfoNuggetJSON::Generator(ignore_extras), fieldGeneratorAreaCode("field \"AreaCode\" of the AreaCodeCityOfCodeInfoNugget class"), fieldGeneratorCityName("field \"CityName\" of the AreaCodeCityOfCodeInfoNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AreaCodeCityOfCodeInfoNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAreaCode.reset();
            fieldGeneratorCityName.reset();
            AreaCodeInfoNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AREACODECITYOFCODEINFONUGGETJSON_H */
