/* file "SportsOlympicsEventSchedulesAndResultsInstanceJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINSTANCEJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINSTANCEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "SportsOlympicsEventJSON.h"
#include "SportsOlympicsEventCategoryJSON.h"
#include "SportsOlympicsGamesJSON.h"
#include "DateAndOrTimeJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsInstanceJSON : public ReferenceCounted
  {
  private:
    bool flagHasEvent;
    SportsOlympicsEventJSON * storeEvent;
    bool flagHasEventCategory;
    SportsOlympicsEventCategoryJSON * storeEventCategory;
    bool flagHasInstanceDescription;
    std::string storeInstanceDescription;
    bool flagHasGames;
    SportsOlympicsGamesJSON * storeGames;
    bool flagHasMedalEvent;
    bool storeMedalEvent;
    bool flagHasGeneralSummary;
    bool storeGeneralSummary;
    bool flagHasStartTime;
    DateAndOrTimeJSON * storeStartTime;
    bool flagHasMedalWinners;
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * > storeMedalWinners;
    bool flagHasParticipants;
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * > storeParticipants;
    bool flagHasUpcoming;
    bool storeUpcoming;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsInstanceJSON(const SportsOlympicsEventSchedulesAndResultsInstanceJSON &);
    SportsOlympicsEventSchedulesAndResultsInstanceJSON & operator=(const SportsOlympicsEventSchedulesAndResultsInstanceJSON &other);

    void  fromJSONEvent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEventCategory(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInstanceDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMedalEvent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeneralSummary(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMedalWinners(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONParticipants(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUpcoming(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsInstanceJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsInstanceJSON(void);
    bool  hasEvent(void) const;
    SportsOlympicsEventJSON *  getEvent(void);
    const SportsOlympicsEventJSON *  getEvent(void) const;
    SportsOlympicsEventJSON::TypeValue  getEventValue(void);
    const SportsOlympicsEventJSON::TypeValue  getEventValue(void) const;
    const char * getEventAsChars(void) const;
    std::string  getEventAsString(void) const;
    bool  hasEventCategory(void) const;
    SportsOlympicsEventCategoryJSON *  getEventCategory(void);
    const SportsOlympicsEventCategoryJSON *  getEventCategory(void) const;
    SportsOlympicsEventCategoryJSON::TypeValue  getEventCategoryValue(void);
    const SportsOlympicsEventCategoryJSON::TypeValue  getEventCategoryValue(void) const;
    const char * getEventCategoryAsChars(void) const;
    std::string  getEventCategoryAsString(void) const;
    bool  hasInstanceDescription(void) const;
    std::string  getInstanceDescription(void);
    const std::string  getInstanceDescription(void) const;
    bool  hasGames(void) const;
    SportsOlympicsGamesJSON *  getGames(void);
    const SportsOlympicsGamesJSON *  getGames(void) const;
    bool  hasMedalEvent(void) const;
    bool  getMedalEvent(void);
    const bool  getMedalEvent(void) const;
    bool  hasGeneralSummary(void) const;
    bool  getGeneralSummary(void);
    const bool  getGeneralSummary(void) const;
    bool  hasStartTime(void) const;
    DateAndOrTimeJSON *  getStartTime(void);
    const DateAndOrTimeJSON *  getStartTime(void) const;
    bool  hasMedalWinners(void) const;
    size_t  countOfMedalWinners(void) const;
    SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON *  elementOfMedalWinners(size_t element_num);
    const SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON *  elementOfMedalWinners(size_t element_num) const;
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * >  getMedalWinners(void);
    const std::vector< SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * >  getMedalWinners(void) const;
    bool  hasParticipants(void) const;
    size_t  countOfParticipants(void) const;
    SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *  elementOfParticipants(size_t element_num);
    const SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *  elementOfParticipants(size_t element_num) const;
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * >  getParticipants(void);
    const std::vector< SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * >  getParticipants(void) const;
    bool  hasUpcoming(void) const;
    bool  getUpcoming(void);
    const bool  getUpcoming(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsInstanceComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsInstanceComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setEvent(SportsOlympicsEventJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEvent)
          {
            storeEvent->remove_reference();
          }
        flagHasEvent = true;
        storeEvent = new_value;
      }
    void setEvent(SportsOlympicsEventJSON::TypeValue new_value)
      {
        setEvent(new SportsOlympicsEventJSON(new_value));
      }
    void setEvent(const char *chars)
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
        setEvent(new_value);
      }
    void setEvent(std::string the_string)
      {
        setEvent(the_string.c_str());
      }
    void unsetEvent(void)
      {
        if (flagHasEvent)
          {
            storeEvent->remove_reference();
          }
        flagHasEvent = false;
      }
    void setEventCategory(SportsOlympicsEventCategoryJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEventCategory)
          {
            storeEventCategory->remove_reference();
          }
        flagHasEventCategory = true;
        storeEventCategory = new_value;
      }
    void setEventCategory(SportsOlympicsEventCategoryJSON::TypeValue new_value)
      {
        setEventCategory(new SportsOlympicsEventCategoryJSON(new_value));
      }
    void setEventCategory(const char *chars)
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
        setEventCategory(new_value);
      }
    void setEventCategory(std::string the_string)
      {
        setEventCategory(the_string.c_str());
      }
    void unsetEventCategory(void)
      {
        if (flagHasEventCategory)
          {
            storeEventCategory->remove_reference();
          }
        flagHasEventCategory = false;
      }
    void setInstanceDescription(std::string new_value)
      {
        flagHasInstanceDescription = true;
        storeInstanceDescription = new_value;
      }
    void unsetInstanceDescription(void)
      {
        flagHasInstanceDescription = false;
      }
    void setGames(SportsOlympicsGamesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGames)
          {
            storeGames->remove_reference();
          }
        flagHasGames = true;
        storeGames = new_value;
      }
    void unsetGames(void)
      {
        if (flagHasGames)
          {
            storeGames->remove_reference();
          }
        flagHasGames = false;
      }
    void setMedalEvent(bool new_value)
      {
        flagHasMedalEvent = true;
        storeMedalEvent = new_value;
      }
    void unsetMedalEvent(void)
      {
        flagHasMedalEvent = false;
      }
    void setGeneralSummary(bool new_value)
      {
        flagHasGeneralSummary = true;
        storeGeneralSummary = new_value;
      }
    void unsetGeneralSummary(void)
      {
        flagHasGeneralSummary = false;
      }
    void setStartTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartTime)
          {
            storeStartTime->remove_reference();
          }
        flagHasStartTime = true;
        storeStartTime = new_value;
      }
    void unsetStartTime(void)
      {
        if (flagHasStartTime)
          {
            storeStartTime->remove_reference();
          }
        flagHasStartTime = false;
      }
    void initMedalWinners(void)
      {
        if (flagHasMedalWinners)
          {
            for (size_t num3 = 0; num3 < storeMedalWinners.size(); ++num3)
              {
                storeMedalWinners[num3]->remove_reference();
              }
          }
        flagHasMedalWinners = true;
        storeMedalWinners.clear();
      }
    void appendMedalWinners(SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * to_append)
      {
        if (!flagHasMedalWinners)
          {
            flagHasMedalWinners = true;
            storeMedalWinners.clear();
          }
        assert(flagHasMedalWinners);
        to_append->add_reference();
        storeMedalWinners.push_back(to_append);
      }
    void unsetMedalWinners(void)
      {
        if (flagHasMedalWinners)
          {
            for (size_t num4 = 0; num4 < storeMedalWinners.size(); ++num4)
              {
                storeMedalWinners[num4]->remove_reference();
              }
          }
        flagHasMedalWinners = false;
        storeMedalWinners.clear();
      }
    void initParticipants(void)
      {
        if (flagHasParticipants)
          {
            for (size_t num5 = 0; num5 < storeParticipants.size(); ++num5)
              {
                storeParticipants[num5]->remove_reference();
              }
          }
        flagHasParticipants = true;
        storeParticipants.clear();
      }
    void appendParticipants(SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * to_append)
      {
        if (!flagHasParticipants)
          {
            flagHasParticipants = true;
            storeParticipants.clear();
          }
        assert(flagHasParticipants);
        to_append->add_reference();
        storeParticipants.push_back(to_append);
      }
    void unsetParticipants(void)
      {
        if (flagHasParticipants)
          {
            for (size_t num6 = 0; num6 < storeParticipants.size(); ++num6)
              {
                storeParticipants[num6]->remove_reference();
              }
          }
        flagHasParticipants = false;
        storeParticipants.clear();
      }
    void setUpcoming(bool new_value)
      {
        flagHasUpcoming = true;
        storeUpcoming = new_value;
      }
    void unsetUpcoming(void)
      {
        flagHasUpcoming = false;
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsInstanceAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsInstanceSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsInstanceLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsInstanceAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        assert(flagHasEvent);
        handler->start_pair("Event");
        storeEvent->write_as_json(handler);
        assert(flagHasEventCategory);
        handler->start_pair("EventCategory");
        storeEventCategory->write_as_json(handler);
        if (flagHasInstanceDescription)
          {
            handler->start_pair("InstanceDescription");
            handler->string_value(storeInstanceDescription);
          }
        assert(flagHasGames);
        handler->start_pair("Games");
        storeGames->write_as_json(handler);
        if (flagHasMedalEvent)
          {
            handler->start_pair("MedalEvent");
            handler->boolean_value(storeMedalEvent);
          }
        if (flagHasGeneralSummary)
          {
            handler->start_pair("GeneralSummary");
            handler->boolean_value(storeGeneralSummary);
          }
        if (flagHasStartTime)
          {
            handler->start_pair("StartTime");
            storeStartTime->write_as_json(handler);
          }
        if (flagHasMedalWinners)
          {
            handler->start_pair("MedalWinners");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeMedalWinners.size(); ++num1)
              {
                storeMedalWinners[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasParticipants)
          {
            handler->start_pair("Participants");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeParticipants.size(); ++num2)
              {
                storeParticipants[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasUpcoming)
          {
            handler->start_pair("Upcoming");
            handler->boolean_value(storeUpcoming);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasEvent()))
          {
            return "When parsing the object for %what%, the \"Event\" field was missing.";
          }
        if (!(hasEventCategory()))
          {
            return "When parsing the object for %what%, the \"EventCategory\" field was missing.";
          }
        if (!(hasGames()))
          {
            return "When parsing the object for %what%, the \"Games\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsInstanceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsInstanceJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsInstanceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceJSON>, SportsOlympicsEventSchedulesAndResultsInstanceJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInstance", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsInstanceJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsInstanceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsInstanceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceJSON>, SportsOlympicsEventSchedulesAndResultsInstanceJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInstance", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<SportsOlympicsEventJSON::Generator, RCHandle<SportsOlympicsEventJSON>, SportsOlympicsEventJSON *, bool > fieldGeneratorEvent;
        JSONHoldingGenerator<SportsOlympicsEventCategoryJSON::Generator, RCHandle<SportsOlympicsEventCategoryJSON>, SportsOlympicsEventCategoryJSON *, bool > fieldGeneratorEventCategory;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInstanceDescription;
        JSONHoldingGenerator<SportsOlympicsGamesJSON::Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool > fieldGeneratorGames;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMedalEvent;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorGeneralSummary;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartTime;
        JSONHoldingArrayGenerator<SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON>, SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON *, bool > fieldGeneratorMedalWinners;
        JSONHoldingArrayGenerator<SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON>, SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *, bool > fieldGeneratorParticipants;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUpcoming;
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
            SportsOlympicsEventSchedulesAndResultsInstanceJSON *result = new SportsOlympicsEventSchedulesAndResultsInstanceJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsInstanceAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsInstanceJSON *result)
          {
            if (fieldGeneratorEvent.have_value)
              {
                result->setEvent(fieldGeneratorEvent.value.referenced());
                fieldGeneratorEvent.have_value = false;
              }
            else if (!(result->hasEvent()))
              {
                error("When parsing the object for %what%, the \"Event\" field was missing.");
              }
            if (fieldGeneratorEventCategory.have_value)
              {
                result->setEventCategory(fieldGeneratorEventCategory.value.referenced());
                fieldGeneratorEventCategory.have_value = false;
              }
            else if (!(result->hasEventCategory()))
              {
                error("When parsing the object for %what%, the \"EventCategory\" field was missing.");
              }
            if (fieldGeneratorInstanceDescription.have_value)
              {
                result->setInstanceDescription(fieldGeneratorInstanceDescription.value);
                fieldGeneratorInstanceDescription.have_value = false;
              }
            if (fieldGeneratorGames.have_value)
              {
                result->setGames(fieldGeneratorGames.value.referenced());
                fieldGeneratorGames.have_value = false;
              }
            else if (!(result->hasGames()))
              {
                error("When parsing the object for %what%, the \"Games\" field was missing.");
              }
            if (fieldGeneratorMedalEvent.have_value)
              {
                result->setMedalEvent(fieldGeneratorMedalEvent.value);
                fieldGeneratorMedalEvent.have_value = false;
              }
            if (fieldGeneratorGeneralSummary.have_value)
              {
                result->setGeneralSummary(fieldGeneratorGeneralSummary.value);
                fieldGeneratorGeneralSummary.have_value = false;
              }
            if (fieldGeneratorStartTime.have_value)
              {
                result->setStartTime(fieldGeneratorStartTime.value.referenced());
                fieldGeneratorStartTime.have_value = false;
              }
            if (fieldGeneratorMedalWinners.have_value)
              {
                result->initMedalWinners();
                size_t count = fieldGeneratorMedalWinners.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMedalWinners(fieldGeneratorMedalWinners.value[num].referenced());
                  }
                fieldGeneratorMedalWinners.value.clear();
                fieldGeneratorMedalWinners.have_value = false;
              }
            if (fieldGeneratorParticipants.have_value)
              {
                result->initParticipants();
                size_t count = fieldGeneratorParticipants.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendParticipants(fieldGeneratorParticipants.value[num].referenced());
                  }
                fieldGeneratorParticipants.value.clear();
                fieldGeneratorParticipants.have_value = false;
              }
            if (fieldGeneratorUpcoming.have_value)
              {
                result->setUpcoming(fieldGeneratorUpcoming.value);
                fieldGeneratorUpcoming.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsInstanceJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strncmp(&(field_name[1]), "vent", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 0:
                                return &fieldGeneratorEvent;
                            case 'C':
                                if (strcmp(&(field_name[6]), "ategory") == 0)
                                    return &fieldGeneratorEventCategory;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'G':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "mes") == 0)
                                return &fieldGeneratorGames;
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "neralSummary") == 0)
                                return &fieldGeneratorGeneralSummary;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nstanceDescription") == 0)
                        return &fieldGeneratorInstanceDescription;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "edal", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[6]), "vent") == 0)
                                    return &fieldGeneratorMedalEvent;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[6]), "inners") == 0)
                                    return &fieldGeneratorMedalWinners;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "articipants") == 0)
                        return &fieldGeneratorParticipants;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartTime") == 0)
                        return &fieldGeneratorStartTime;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "pcoming") == 0)
                        return &fieldGeneratorUpcoming;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorEvent("field \"Event\" of the SportsOlympicsEventSchedulesAndResultsInstance class", ignore_extras), fieldGeneratorEventCategory("field \"EventCategory\" of the SportsOlympicsEventSchedulesAndResultsInstance class", ignore_extras), fieldGeneratorInstanceDescription("field \"InstanceDescription\" of the SportsOlympicsEventSchedulesAndResultsInstance class"), fieldGeneratorGames("field \"Games\" of the SportsOlympicsEventSchedulesAndResultsInstance class", ignore_extras), fieldGeneratorMedalEvent("field \"MedalEvent\" of the SportsOlympicsEventSchedulesAndResultsInstance class"), fieldGeneratorGeneralSummary("field \"GeneralSummary\" of the SportsOlympicsEventSchedulesAndResultsInstance class"), fieldGeneratorStartTime("field \"StartTime\" of the SportsOlympicsEventSchedulesAndResultsInstance class", ignore_extras), fieldGeneratorMedalWinners("field \"MedalWinners\" of the SportsOlympicsEventSchedulesAndResultsInstance class", ignore_extras), fieldGeneratorParticipants("field \"Participants\" of the SportsOlympicsEventSchedulesAndResultsInstance class", ignore_extras), fieldGeneratorUpcoming("field \"Upcoming\" of the SportsOlympicsEventSchedulesAndResultsInstance class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsInstance class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEvent.reset();
            fieldGeneratorEventCategory.reset();
            fieldGeneratorInstanceDescription.reset();
            fieldGeneratorGames.reset();
            fieldGeneratorMedalEvent.reset();
            fieldGeneratorGeneralSummary.reset();
            fieldGeneratorStartTime.reset();
            fieldGeneratorMedalWinners.reset();
            fieldGeneratorParticipants.reset();
            fieldGeneratorUpcoming.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINSTANCEJSON_H */
