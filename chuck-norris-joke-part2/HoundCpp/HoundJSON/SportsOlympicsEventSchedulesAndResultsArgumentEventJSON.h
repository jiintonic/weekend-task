/* file "SportsOlympicsEventSchedulesAndResultsArgumentEventJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTEVENTJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTEVENTJSON_H

#pragma interface

#include "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsEventJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsArgumentEventJSON : public SportsOlympicsEventSchedulesAndResultsArgumentJSON
  {
  private:
    bool flagHasEvents;
    std::vector< SportsOlympicsEventJSON * > storeEvents;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsArgumentEventJSON(const SportsOlympicsEventSchedulesAndResultsArgumentEventJSON &);
    SportsOlympicsEventSchedulesAndResultsArgumentEventJSON & operator=(const SportsOlympicsEventSchedulesAndResultsArgumentEventJSON &other);

    JSONValue * extraEventsToJSON(void) const;

    void  fromJSONEvents(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsArgumentEventJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsArgumentEventJSON(void);
    const char * getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const;
    bool  hasEvents(void) const;
    size_t  countOfEvents(void) const;
    SportsOlympicsEventJSON *  elementOfEvents(size_t element_num);
    const SportsOlympicsEventJSON *  elementOfEvents(size_t element_num) const;
    std::vector< SportsOlympicsEventJSON * >  getEvents(void);
    const std::vector< SportsOlympicsEventJSON * >  getEvents(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentEventLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsEventSchedulesAndResultsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasEvents)
            ++result;
        result += extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentCount();
        return result;
      }
    const char *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEvents)
          {
            if (remainder == 0)
                return "Events";
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasEvents)
          {
            if (remainder == 0)
                return extraEventsToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEvents)
          {
            if (remainder == 0)
                return extraEventsToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Events") == 0)
            return (flagHasEvents ? extraEventsToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Events") == 0)
            return (flagHasEvents ? extraEventsToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentEventLookup(field_name);
      }

    void initEvents(void)
      {
        if (flagHasEvents)
          {
            for (size_t num2 = 0; num2 < storeEvents.size(); ++num2)
              {
                storeEvents[num2]->remove_reference();
              }
          }
        flagHasEvents = true;
        storeEvents.clear();
      }
    void appendEvents(SportsOlympicsEventJSON * to_append)
      {
        if (!flagHasEvents)
          {
            flagHasEvents = true;
            storeEvents.clear();
          }
        assert(flagHasEvents);
        to_append->add_reference();
        storeEvents.push_back(to_append);
      }
    void appendEvents(SportsOlympicsEventJSON::TypeValue new_value)
      {
        appendEvents(new SportsOlympicsEventJSON(new_value));
      }
    void appendEvents(const char *chars)
      {
        SportsOlympicsEventJSON::TypeValueKnownValues known = SportsOlympicsEventJSON::stringToValue(chars);
        SportsOlympicsEventJSON::TypeValue new_value;
        if (known == SportsOlympicsEventJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendEvents(new_value);
      }
    void appendEvents(std::string the_string)
      {
        appendEvents(the_string.c_str());
      }
    void unsetEvents(void)
      {
        if (flagHasEvents)
          {
            for (size_t num3 = 0; num3 < storeEvents.size(); ++num3)
              {
                storeEvents[num3]->remove_reference();
              }
          }
        flagHasEvents = false;
        storeEvents.clear();
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentEventAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentEventSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsArgumentEventLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsArgumentEventAppendPair(key, new_component);
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
        if (strcmp(key, "Events") == 0)
            {
            fromJSONEvents(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentEventAppendPair(key, new_component);
      }
    void extraSportsOlympicsEventSchedulesAndResultsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Events") == 0)
            {
            fromJSONEvents(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentEventSetField(key, new_component);
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
        if (flagHasEvents)
          {
            handler->start_pair("Events");
            assert(storeEvents.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeEvents.size(); ++num1)
              {
                storeEvents[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventJSON>, SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentEvent", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsArgumentEventJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventJSON>, SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentEvent", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsOlympicsEventJSON::Generator, RCHandle<SportsOlympicsEventJSON>, SportsOlympicsEventJSON *, bool > fieldGeneratorEvents;
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
            if (!(strcmp(getSportsOlympicsEventSchedulesAndResultsArgumentJSONKey().c_str(), "Event") == 0))
                throw("The key field has a value other than `Event'.");
            SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *result = new SportsOlympicsEventSchedulesAndResultsArgumentEventJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsArgumentEventAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *)new_result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *result)
          {
            if (fieldGeneratorEvents.have_value)
              {
                result->initEvents();
                size_t count = fieldGeneratorEvents.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEvents(fieldGeneratorEvents.value[num].referenced());
                  }
                fieldGeneratorEvents.value.clear();
                fieldGeneratorEvents.have_value = false;
              }
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Events") == 0)
                return &fieldGeneratorEvents;
            return SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator(ignore_extras), fieldGeneratorEvents("field \"Events\" of the SportsOlympicsEventSchedulesAndResultsArgumentEvent class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsArgumentEvent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEvents.reset();
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTEVENTJSON_H */
