/* file "SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTQUERYTYPEJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTQUERYTYPEJSON_H

#pragma interface

#include "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SportsOlympicsEventSchedulesAndResultsQueryTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON : public SportsOlympicsEventSchedulesAndResultsArgumentJSON
  {
  private:
    bool flagHasType;
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * storeType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON(const SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON &);
    SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON & operator=(const SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON &other);

    JSONValue * extraTypeToJSON(void) const;

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON(void);
    const char * getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const;
    bool  hasType(void) const;
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *  getType(void);
    const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *  getType(void) const;
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue  getTypeValue(void);
    const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsEventSchedulesAndResultsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasType)
            ++result;
        result += extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentCount();
        return result;
      }
    const char *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasType)
          {
            if (remainder == 0)
                return "Type";
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasType)
          {
            if (remainder == 0)
                return extraTypeToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasType)
          {
            if (remainder == 0)
                return extraTypeToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Type") == 0)
            return (flagHasType ? extraTypeToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Type") == 0)
            return (flagHasType ? extraTypeToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeLookup(field_name);
      }

    void setType(SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = true;
        storeType = new_value;
      }
    void setType(SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue new_value)
      {
        setType(new SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(new_value));
      }
    void setType(const char *chars)
      {
        SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValueKnownValues known = SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::stringToValue(chars);
        SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue new_value;
        if (known == SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::Value__none)
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

    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeAppendPair(key, new_component);
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
    void extraSportsOlympicsEventSchedulesAndResultsArgumentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Type") == 0)
            {
            fromJSONType(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeAppendPair(key, new_component);
      }
    void extraSportsOlympicsEventSchedulesAndResultsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Type") == 0)
            {
            fromJSONType(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeSetField(key, new_component);
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
        SportsOlympicsEventSchedulesAndResultsArgumentJSON::write_fields_as_json(handler);
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

    static SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON>, SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentQueryType", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON>, SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentQueryType", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator
      {
      private:
        JSONHoldingGenerator<SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryTypeJSON>, SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *, bool > fieldGeneratorType;
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
            if (!(strcmp(getSportsOlympicsEventSchedulesAndResultsArgumentJSONKey().c_str(), "QueryType") == 0))
                throw("The key field has a value other than `QueryType'.");
            SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *result = new SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsArgumentQueryTypeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *)new_result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *result)
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
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Type") == 0)
                return &fieldGeneratorType;
            return SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator(ignore_extras), fieldGeneratorType("field \"Type\" of the SportsOlympicsEventSchedulesAndResultsArgumentQueryType class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsArgumentQueryType class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTQUERYTYPEJSON_H */
