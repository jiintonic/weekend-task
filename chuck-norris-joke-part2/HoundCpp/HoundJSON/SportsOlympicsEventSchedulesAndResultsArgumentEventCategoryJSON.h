/* file "SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTEVENTCATEGORYJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTEVENTCATEGORYJSON_H

#pragma interface

#include "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsEventCategoryJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON : public SportsOlympicsEventSchedulesAndResultsArgumentJSON
  {
  private:
    bool flagHasEventCategories;
    std::vector< SportsOlympicsEventCategoryJSON * > storeEventCategories;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON(const SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON &);
    SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON & operator=(const SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON &other);

    JSONValue * extraEventCategoriesToJSON(void) const;

    void  fromJSONEventCategories(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON(void);
    const char * getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const;
    bool  hasEventCategories(void) const;
    size_t  countOfEventCategories(void) const;
    SportsOlympicsEventCategoryJSON *  elementOfEventCategories(size_t element_num);
    const SportsOlympicsEventCategoryJSON *  elementOfEventCategories(size_t element_num) const;
    std::vector< SportsOlympicsEventCategoryJSON * >  getEventCategories(void);
    const std::vector< SportsOlympicsEventCategoryJSON * >  getEventCategories(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsEventSchedulesAndResultsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasEventCategories)
            ++result;
        result += extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentCount();
        return result;
      }
    const char *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEventCategories)
          {
            if (remainder == 0)
                return "EventCategories";
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasEventCategories)
          {
            if (remainder == 0)
                return extraEventCategoriesToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEventCategories)
          {
            if (remainder == 0)
                return extraEventCategoriesToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "EventCategories") == 0)
            return (flagHasEventCategories ? extraEventCategoriesToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "EventCategories") == 0)
            return (flagHasEventCategories ? extraEventCategoriesToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryLookup(field_name);
      }

    void initEventCategories(void)
      {
        if (flagHasEventCategories)
          {
            for (size_t num2 = 0; num2 < storeEventCategories.size(); ++num2)
              {
                storeEventCategories[num2]->remove_reference();
              }
          }
        flagHasEventCategories = true;
        storeEventCategories.clear();
      }
    void appendEventCategories(SportsOlympicsEventCategoryJSON * to_append)
      {
        if (!flagHasEventCategories)
          {
            flagHasEventCategories = true;
            storeEventCategories.clear();
          }
        assert(flagHasEventCategories);
        to_append->add_reference();
        storeEventCategories.push_back(to_append);
      }
    void appendEventCategories(SportsOlympicsEventCategoryJSON::TypeValue new_value)
      {
        appendEventCategories(new SportsOlympicsEventCategoryJSON(new_value));
      }
    void appendEventCategories(const char *chars)
      {
        SportsOlympicsEventCategoryJSON::TypeValueKnownValues known = SportsOlympicsEventCategoryJSON::stringToValue(chars);
        SportsOlympicsEventCategoryJSON::TypeValue new_value;
        if (known == SportsOlympicsEventCategoryJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendEventCategories(new_value);
      }
    void appendEventCategories(std::string the_string)
      {
        appendEventCategories(the_string.c_str());
      }
    void unsetEventCategories(void)
      {
        if (flagHasEventCategories)
          {
            for (size_t num3 = 0; num3 < storeEventCategories.size(); ++num3)
              {
                storeEventCategories[num3]->remove_reference();
              }
          }
        flagHasEventCategories = false;
        storeEventCategories.clear();
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategorySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryAppendPair(key, new_component);
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
        if (strcmp(key, "EventCategories") == 0)
            {
            fromJSONEventCategories(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryAppendPair(key, new_component);
      }
    void extraSportsOlympicsEventSchedulesAndResultsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "EventCategories") == 0)
            {
            fromJSONEventCategories(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategorySetField(key, new_component);
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
        if (flagHasEventCategories)
          {
            handler->start_pair("EventCategories");
            assert(storeEventCategories.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeEventCategories.size(); ++num1)
              {
                storeEventCategories[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON>, SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentEventCategory", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON>, SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentEventCategory", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsOlympicsEventCategoryJSON::Generator, RCHandle<SportsOlympicsEventCategoryJSON>, SportsOlympicsEventCategoryJSON *, bool > fieldGeneratorEventCategories;
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
            if (!(strcmp(getSportsOlympicsEventSchedulesAndResultsArgumentJSONKey().c_str(), "EventCategory") == 0))
                throw("The key field has a value other than `EventCategory'.");
            SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *result = new SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsArgumentEventCategoryAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *)new_result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *result)
          {
            if (fieldGeneratorEventCategories.have_value)
              {
                result->initEventCategories();
                size_t count = fieldGeneratorEventCategories.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEventCategories(fieldGeneratorEventCategories.value[num].referenced());
                  }
                fieldGeneratorEventCategories.value.clear();
                fieldGeneratorEventCategories.have_value = false;
              }
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "EventCategories") == 0)
                return &fieldGeneratorEventCategories;
            return SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator(ignore_extras), fieldGeneratorEventCategories("field \"EventCategories\" of the SportsOlympicsEventSchedulesAndResultsArgumentEventCategory class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsArgumentEventCategory class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEventCategories.reset();
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTEVENTCATEGORYJSON_H */
