/* file "SportsOlympicsBasicAttributeArgumentQueryTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSBASICATTRIBUTEARGUMENTQUERYTYPEJSON_H
#define SPORTSOLYMPICSBASICATTRIBUTEARGUMENTQUERYTYPEJSON_H

#pragma interface

#include "SportsOlympicsBasicAttributeArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SportsOlympicsBasicAttributeTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsBasicAttributeArgumentQueryTypeJSON : public SportsOlympicsBasicAttributeArgumentJSON
  {
  private:
    bool flagHasType;
    SportsOlympicsBasicAttributeTypeJSON * storeType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsBasicAttributeArgumentQueryTypeJSON(const SportsOlympicsBasicAttributeArgumentQueryTypeJSON &);
    SportsOlympicsBasicAttributeArgumentQueryTypeJSON & operator=(const SportsOlympicsBasicAttributeArgumentQueryTypeJSON &other);

    JSONValue * extraTypeToJSON(void) const;

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsBasicAttributeArgumentQueryTypeJSON(void);
    virtual ~SportsOlympicsBasicAttributeArgumentQueryTypeJSON(void);
    const char * getSportsOlympicsBasicAttributeArgumentKind(void) const;
    bool  hasType(void) const;
    SportsOlympicsBasicAttributeTypeJSON *  getType(void);
    const SportsOlympicsBasicAttributeTypeJSON *  getType(void) const;
    SportsOlympicsBasicAttributeTypeJSON::TypeValue  getTypeValue(void);
    const SportsOlympicsBasicAttributeTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;

    virtual size_t extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeArgumentQueryTypeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeArgumentQueryTypeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsBasicAttributeArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasType)
            ++result;
        result += extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentCount();
        return result;
      }
    const char *extraSportsOlympicsBasicAttributeArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasType)
          {
            if (remainder == 0)
                return "Type";
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasType)
          {
            if (remainder == 0)
                return extraTypeToJSON();
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasType)
          {
            if (remainder == 0)
                return extraTypeToJSON();
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeArgumentQueryTypeComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Type") == 0)
            return (flagHasType ? extraTypeToJSON() : NULL);
        return extraSportsOlympicsBasicAttributeArgumentQueryTypeLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Type") == 0)
            return (flagHasType ? extraTypeToJSON() : NULL);
        return extraSportsOlympicsBasicAttributeArgumentQueryTypeLookup(field_name);
      }

    void setType(SportsOlympicsBasicAttributeTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = true;
        storeType = new_value;
      }
    void setType(SportsOlympicsBasicAttributeTypeJSON::TypeValue new_value)
      {
        setType(new SportsOlympicsBasicAttributeTypeJSON(new_value));
      }
    void setType(const char *chars)
      {
        SportsOlympicsBasicAttributeTypeJSON::TypeValueKnownValues known = SportsOlympicsBasicAttributeTypeJSON::stringToValue(chars);
        SportsOlympicsBasicAttributeTypeJSON::TypeValue new_value;
        if (known == SportsOlympicsBasicAttributeTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setType(new_value);
      }
    void setType(std::string the_string)
      {
        setType(the_string.c_str());
      }
    void unsetType(void)
      {
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = false;
      }

    virtual void extraSportsOlympicsBasicAttributeArgumentQueryTypeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsBasicAttributeArgumentQueryTypeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsBasicAttributeArgumentQueryTypeLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsBasicAttributeArgumentQueryTypeAppendPair(key, new_component);
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
    void extraSportsOlympicsBasicAttributeArgumentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Type") == 0)
            {
            fromJSONType(new_component, false);
            return;
            }
        extraSportsOlympicsBasicAttributeArgumentQueryTypeAppendPair(key, new_component);
      }
    void extraSportsOlympicsBasicAttributeArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Type") == 0)
            {
            fromJSONType(new_component, false);
            return;
            }
        extraSportsOlympicsBasicAttributeArgumentQueryTypeSetField(key, new_component);
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
        SportsOlympicsBasicAttributeArgumentJSON::write_fields_as_json(handler);
        assert(flagHasType);
        handler->start_pair("Type");
        storeType->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsBasicAttributeArgumentQueryTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsBasicAttributeArgumentQueryTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeArgumentQueryTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentQueryTypeJSON>, SportsOlympicsBasicAttributeArgumentQueryTypeJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentQueryType", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsBasicAttributeArgumentQueryTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsBasicAttributeArgumentQueryTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeArgumentQueryTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentQueryTypeJSON>, SportsOlympicsBasicAttributeArgumentQueryTypeJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentQueryType", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsOlympicsBasicAttributeArgumentJSON::Generator
      {
      private:
        JSONHoldingGenerator<SportsOlympicsBasicAttributeTypeJSON::Generator, RCHandle<SportsOlympicsBasicAttributeTypeJSON>, SportsOlympicsBasicAttributeTypeJSON *, bool > fieldGeneratorType;
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
            if (!(strcmp(getSportsOlympicsBasicAttributeArgumentJSONKey().c_str(), "QueryType") == 0))
                throw("The key field has a value other than `QueryType'.");
            SportsOlympicsBasicAttributeArgumentQueryTypeJSON *result = new SportsOlympicsBasicAttributeArgumentQueryTypeJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsBasicAttributeArgumentQueryTypeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsBasicAttributeArgumentQueryTypeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsBasicAttributeArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsBasicAttributeArgumentQueryTypeJSON *)new_result);
          }
        void finish(SportsOlympicsBasicAttributeArgumentQueryTypeJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value.referenced());
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            SportsOlympicsBasicAttributeArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsBasicAttributeArgumentQueryTypeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Type") == 0)
                return &fieldGeneratorType;
            return SportsOlympicsBasicAttributeArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsBasicAttributeArgumentJSON::Generator(ignore_extras), fieldGeneratorType("field \"Type\" of the SportsOlympicsBasicAttributeArgumentQueryType class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsBasicAttributeArgumentQueryType class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            SportsOlympicsBasicAttributeArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSBASICATTRIBUTEARGUMENTQUERYTYPEJSON_H */
