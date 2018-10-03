/* file "SportsStatsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSINFORMATIONNUGGETJSON_H
#define SPORTSSTATSINFORMATIONNUGGETJSON_H

#pragma interface

#include "SportsInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsStatsQueryDataJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStatsInformationNuggetJSON : public SportsInformationNuggetJSON
  {
  private:
    bool flagHasQueryData;
    std::vector< SportsStatsQueryDataJSON * > storeQueryData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStatsInformationNuggetJSON(const SportsStatsInformationNuggetJSON &);
    SportsStatsInformationNuggetJSON & operator=(const SportsStatsInformationNuggetJSON &other);

    JSONValue * extraQueryDataToJSON(void) const;

    void  fromJSONQueryData(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsInformationNuggetJSON(void);
    virtual ~SportsStatsInformationNuggetJSON(void);
    const char * getSportsNuggetKind(void) const;
    bool  hasQueryData(void) const;
    size_t  countOfQueryData(void) const;
    SportsStatsQueryDataJSON *  elementOfQueryData(size_t element_num);
    const SportsStatsQueryDataJSON *  elementOfQueryData(size_t element_num) const;
    std::vector< SportsStatsQueryDataJSON * >  getQueryData(void);
    const std::vector< SportsStatsQueryDataJSON * >  getQueryData(void) const;

    virtual size_t extraSportsStatsInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStatsInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStatsInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStatsInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStatsInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStatsInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasQueryData)
            ++result;
        result += extraSportsStatsInformationNuggetComponentCount();
        return result;
      }
    const char *extraSportsInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return "QueryData";
            --remainder;
          }
        return extraSportsStatsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return extraQueryDataToJSON();
            --remainder;
          }
        return extraSportsStatsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return extraQueryDataToJSON();
            --remainder;
          }
        return extraSportsStatsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraSportsInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "QueryData") == 0)
            return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
        return extraSportsStatsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraSportsInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "QueryData") == 0)
            return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
        return extraSportsStatsInformationNuggetLookup(field_name);
      }

    void initQueryData(void)
      {
        if (flagHasQueryData)
          {
            for (size_t num2 = 0; num2 < storeQueryData.size(); ++num2)
              {
                storeQueryData[num2]->remove_reference();
              }
          }
        flagHasQueryData = true;
        storeQueryData.clear();
      }
    void appendQueryData(SportsStatsQueryDataJSON * to_append)
      {
        if (!flagHasQueryData)
          {
            flagHasQueryData = true;
            storeQueryData.clear();
          }
        assert(flagHasQueryData);
        to_append->add_reference();
        storeQueryData.push_back(to_append);
      }
    void unsetQueryData(void)
      {
        if (flagHasQueryData)
          {
            for (size_t num3 = 0; num3 < storeQueryData.size(); ++num3)
              {
                storeQueryData[num3]->remove_reference();
              }
          }
        flagHasQueryData = false;
        storeQueryData.clear();
      }

    virtual void extraSportsStatsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStatsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStatsInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSportsStatsInformationNuggetAppendPair(key, new_component);
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
    void extraSportsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "QueryData") == 0)
            {
            fromJSONQueryData(new_component, false);
            return;
            }
        extraSportsStatsInformationNuggetAppendPair(key, new_component);
      }
    void extraSportsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "QueryData") == 0)
            {
            fromJSONQueryData(new_component, false);
            return;
            }
        extraSportsStatsInformationNuggetSetField(key, new_component);
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
        SportsInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasQueryData);
        handler->start_pair("QueryData");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeQueryData.size(); ++num1)
          {
            storeQueryData[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryData()))
          {
            return "When parsing the object for %what%, the \"QueryData\" field was missing.";
          }
        return NULL;
      }

    static SportsStatsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsInformationNuggetJSON>, SportsStatsInformationNuggetJSON *, bool> generator("Type SportsStatsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsStatsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsInformationNuggetJSON>, SportsStatsInformationNuggetJSON *, bool> generator("Type SportsStatsInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<SportsStatsQueryDataJSON::Generator, RCHandle<SportsStatsQueryDataJSON>, SportsStatsQueryDataJSON *, bool > fieldGeneratorQueryData;
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
            if (!(strcmp(getSportsInformationNuggetJSONKey().c_str(), "SportsStats") == 0))
                throw("The key field has a value other than `SportsStats'.");
            SportsStatsInformationNuggetJSON *result = new SportsStatsInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SportsStatsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStatsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsInformationNuggetJSON *new_result)
          {
            handle_result((SportsStatsInformationNuggetJSON *)new_result);
          }
        void finish(SportsStatsInformationNuggetJSON *result)
          {
            if (fieldGeneratorQueryData.have_value)
              {
                result->initQueryData();
                size_t count = fieldGeneratorQueryData.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryData(fieldGeneratorQueryData.value[num].referenced());
                  }
                fieldGeneratorQueryData.value.clear();
                fieldGeneratorQueryData.have_value = false;
              }
            else if (!(result->hasQueryData()))
              {
                error("When parsing the object for %what%, the \"QueryData\" field was missing.");
              }
            SportsInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsStatsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "QueryData") == 0)
                return &fieldGeneratorQueryData;
            return SportsInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryData("field \"QueryData\" of the SportsStatsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStatsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryData.reset();
            SportsInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTATSINFORMATIONNUGGETJSON_H */
