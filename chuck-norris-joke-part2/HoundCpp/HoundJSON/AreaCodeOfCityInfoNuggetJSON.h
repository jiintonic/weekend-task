/* file "AreaCodeOfCityInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AREACODEOFCITYINFONUGGETJSON_H
#define AREACODEOFCITYINFONUGGETJSON_H

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


class AreaCodeOfCityInfoNuggetJSON : public AreaCodeInfoNuggetJSON
  {
  private:
    bool flagHasCityName;
    std::string storeCityName;
    bool flagHasLocDump;
    std::string storeLocDump;
    bool flagHasAreaCodes;
    std::vector< OInteger > storeAreaCodes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AreaCodeOfCityInfoNuggetJSON(const AreaCodeOfCityInfoNuggetJSON &);
    AreaCodeOfCityInfoNuggetJSON & operator=(const AreaCodeOfCityInfoNuggetJSON &other);

    JSONValue * extraCityNameToJSON(void) const;
    JSONValue * extraLocDumpToJSON(void) const;
    JSONValue * extraAreaCodesToJSON(void) const;

    void  fromJSONCityName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocDump(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAreaCodes(JSONValue *json_value, bool ignore_extras = false);


  public:
    AreaCodeOfCityInfoNuggetJSON(void);
    virtual ~AreaCodeOfCityInfoNuggetJSON(void);
    const char * getAreaCodeInfoNuggetKind(void) const;
    bool  hasCityName(void) const;
    std::string  getCityName(void);
    const std::string  getCityName(void) const;
    bool  hasLocDump(void) const;
    std::string  getLocDump(void);
    const std::string  getLocDump(void) const;
    bool  hasAreaCodes(void) const;
    size_t  countOfAreaCodes(void) const;
    OInteger  elementOfAreaCodes(size_t element_num);
    const OInteger  elementOfAreaCodes(size_t element_num) const;
    std::vector< OInteger >  getAreaCodes(void);
    const std::vector< OInteger >  getAreaCodes(void) const;

    virtual size_t extraAreaCodeOfCityInfoNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAreaCodeOfCityInfoNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAreaCodeOfCityInfoNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAreaCodeOfCityInfoNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAreaCodeOfCityInfoNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAreaCodeOfCityInfoNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraAreaCodeInfoNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCityName)
            ++result;
        if (flagHasLocDump)
            ++result;
        if (flagHasAreaCodes)
            ++result;
        result += extraAreaCodeOfCityInfoNuggetComponentCount();
        return result;
      }
    const char *extraAreaCodeInfoNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCityName)
          {
            if (remainder == 0)
                return "CityName";
            --remainder;
          }
        if (flagHasLocDump)
          {
            if (remainder == 0)
                return "LocDump";
            --remainder;
          }
        if (flagHasAreaCodes)
          {
            if (remainder == 0)
                return "AreaCodes";
            --remainder;
          }
        return extraAreaCodeOfCityInfoNuggetComponentKey(remainder);
      }
    JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCityName)
          {
            if (remainder == 0)
                return extraCityNameToJSON();
            --remainder;
          }
        if (flagHasLocDump)
          {
            if (remainder == 0)
                return extraLocDumpToJSON();
            --remainder;
          }
        if (flagHasAreaCodes)
          {
            if (remainder == 0)
                return extraAreaCodesToJSON();
            --remainder;
          }
        return extraAreaCodeOfCityInfoNuggetComponentValue(remainder);
      }
    const JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCityName)
          {
            if (remainder == 0)
                return extraCityNameToJSON();
            --remainder;
          }
        if (flagHasLocDump)
          {
            if (remainder == 0)
                return extraLocDumpToJSON();
            --remainder;
          }
        if (flagHasAreaCodes)
          {
            if (remainder == 0)
                return extraAreaCodesToJSON();
            --remainder;
          }
        return extraAreaCodeOfCityInfoNuggetComponentValue(remainder);
      }
    JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "reaCodes") == 0)
                    return (flagHasAreaCodes ? extraAreaCodesToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ityName") == 0)
                    return (flagHasCityName ? extraCityNameToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocDump") == 0)
                    return (flagHasLocDump ? extraLocDumpToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAreaCodeOfCityInfoNuggetLookup(field_name);
      }
    const JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "reaCodes") == 0)
                    return (flagHasAreaCodes ? extraAreaCodesToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ityName") == 0)
                    return (flagHasCityName ? extraCityNameToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocDump") == 0)
                    return (flagHasLocDump ? extraLocDumpToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAreaCodeOfCityInfoNuggetLookup(field_name);
      }

    void setCityName(std::string new_value)
      {
        flagHasCityName = true;
        storeCityName = new_value;
      }
    void unsetCityName(void)
      {
        flagHasCityName = false;
      }
    void setLocDump(std::string new_value)
      {
        flagHasLocDump = true;
        storeLocDump = new_value;
      }
    void unsetLocDump(void)
      {
        flagHasLocDump = false;
      }
    void initAreaCodes(void)
      {
        flagHasAreaCodes = true;
        storeAreaCodes.clear();
      }
    void appendAreaCodes(OInteger to_append)
      {
        if (!flagHasAreaCodes)
          {
            flagHasAreaCodes = true;
            storeAreaCodes.clear();
          }
        assert(flagHasAreaCodes);
        storeAreaCodes.push_back(to_append);
      }
    void unsetAreaCodes(void)
      {
        flagHasAreaCodes = false;
        storeAreaCodes.clear();
      }

    virtual void extraAreaCodeOfCityInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAreaCodeOfCityInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAreaCodeOfCityInfoNuggetLookup(key);
        if (old_field == NULL)
          {
            extraAreaCodeOfCityInfoNuggetAppendPair(key, new_component);
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
                if (strcmp(&(key[1]), "reaCodes") == 0)
                    {
                    fromJSONAreaCodes(new_component, false);
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
            case 'L':
                if (strcmp(&(key[1]), "ocDump") == 0)
                    {
                    fromJSONLocDump(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAreaCodeOfCityInfoNuggetAppendPair(key, new_component);
      }
    void extraAreaCodeInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "reaCodes") == 0)
                    {
                    fromJSONAreaCodes(new_component, false);
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
            case 'L':
                if (strcmp(&(key[1]), "ocDump") == 0)
                    {
                    fromJSONLocDump(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAreaCodeOfCityInfoNuggetSetField(key, new_component);
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
        assert(flagHasCityName);
        handler->start_pair("CityName");
        handler->string_value(storeCityName);
        assert(flagHasLocDump);
        handler->start_pair("LocDump");
        handler->string_value(storeLocDump);
        if (flagHasAreaCodes)
          {
            handler->start_pair("AreaCodes");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAreaCodes.size(); ++num1)
              {
                handler->number_value(storeAreaCodes[num1].get_o_integer());
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCityName()))
          {
            return "When parsing the object for %what%, the \"CityName\" field was missing.";
          }
        if (!(hasLocDump()))
          {
            return "When parsing the object for %what%, the \"LocDump\" field was missing.";
          }
        return NULL;
      }

    static AreaCodeOfCityInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AreaCodeOfCityInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AreaCodeOfCityInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeOfCityInfoNuggetJSON>, AreaCodeOfCityInfoNuggetJSON *, bool> generator("Type AreaCodeOfCityInfoNugget", ignore_extras);
            parse_json_value(text, "Text for AreaCodeOfCityInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AreaCodeOfCityInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AreaCodeOfCityInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeOfCityInfoNuggetJSON>, AreaCodeOfCityInfoNuggetJSON *, bool> generator("Type AreaCodeOfCityInfoNugget", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCityName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLocDump;
        JSONHoldingArrayGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorAreaCodes;
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
            if (!(strcmp(getAreaCodeInfoNuggetJSONKey().c_str(), "AreaCodeOfCityInfoNugget") == 0))
                throw("The key field has a value other than `AreaCodeOfCityInfoNugget'.");
            AreaCodeOfCityInfoNuggetJSON *result = new AreaCodeOfCityInfoNuggetJSON();
            assert(result != NULL);
            RCHandle<AreaCodeOfCityInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAreaCodeOfCityInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(AreaCodeInfoNuggetJSON *new_result)
          {
            handle_result((AreaCodeOfCityInfoNuggetJSON *)new_result);
          }
        void finish(AreaCodeOfCityInfoNuggetJSON *result)
          {
            if (fieldGeneratorCityName.have_value)
              {
                result->setCityName(fieldGeneratorCityName.value);
                fieldGeneratorCityName.have_value = false;
              }
            else if (!(result->hasCityName()))
              {
                error("When parsing the object for %what%, the \"CityName\" field was missing.");
              }
            if (fieldGeneratorLocDump.have_value)
              {
                result->setLocDump(fieldGeneratorLocDump.value);
                fieldGeneratorLocDump.have_value = false;
              }
            else if (!(result->hasLocDump()))
              {
                error("When parsing the object for %what%, the \"LocDump\" field was missing.");
              }
            if (fieldGeneratorAreaCodes.have_value)
              {
                result->initAreaCodes();
                size_t count = fieldGeneratorAreaCodes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAreaCodes(fieldGeneratorAreaCodes.value[num]);
                  }
                fieldGeneratorAreaCodes.value.clear();
                fieldGeneratorAreaCodes.have_value = false;
              }
            AreaCodeInfoNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(AreaCodeOfCityInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "reaCodes") == 0)
                        return &fieldGeneratorAreaCodes;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ityName") == 0)
                        return &fieldGeneratorCityName;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocDump") == 0)
                        return &fieldGeneratorLocDump;
                    break;
                default:
                    break;
              }
            return AreaCodeInfoNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : AreaCodeInfoNuggetJSON::Generator(ignore_extras), fieldGeneratorCityName("field \"CityName\" of the AreaCodeOfCityInfoNugget class"), fieldGeneratorLocDump("field \"LocDump\" of the AreaCodeOfCityInfoNugget class"), fieldGeneratorAreaCodes("field \"AreaCodes\" of the AreaCodeOfCityInfoNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AreaCodeOfCityInfoNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCityName.reset();
            fieldGeneratorLocDump.reset();
            fieldGeneratorAreaCodes.reset();
            AreaCodeInfoNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AREACODEOFCITYINFONUGGETJSON_H */
