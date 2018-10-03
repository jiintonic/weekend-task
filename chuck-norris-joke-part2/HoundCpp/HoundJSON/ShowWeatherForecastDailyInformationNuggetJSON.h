/* file "ShowWeatherForecastDailyInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWWEATHERFORECASTDAILYINFORMATIONNUGGETJSON_H
#define SHOWWEATHERFORECASTDAILYINFORMATIONNUGGETJSON_H

#pragma interface

#include "WeatherInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "AttributionJSON.h"
#include "MapLocationJSON.h"
#include "AlertJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateTimeSpecJSON.h"
#include "DateTimeSpecJSON.h"
#include "DailyForecastJSON.h"
#include "PlannerJSON.h"
#include "CurrentConditionsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowWeatherForecastDailyInformationNuggetJSON : public WeatherInformationNuggetJSON
  {
  public:
    enum TypeRequestedAttributeActionKnownValues
      {
        RequestedAttributeAction_Unknown,
        RequestedAttributeAction_Start,
        RequestedAttributeAction_Stop,
        RequestedAttributeAction__none
      };
    struct TypeRequestedAttributeAction
      {
        bool in_known_list;
        std::string string_value;
        TypeRequestedAttributeActionKnownValues list_value;

        TypeRequestedAttributeAction(void);
        TypeRequestedAttributeAction(const TypeRequestedAttributeAction &other);
        TypeRequestedAttributeAction(TypeRequestedAttributeActionKnownValues other);
        bool  operator==(const TypeRequestedAttributeAction &other) const;
        bool  operator!=(const TypeRequestedAttributeAction &other) const;
        bool  operator<(const TypeRequestedAttributeAction &other) const;
        bool  operator>(const TypeRequestedAttributeAction &other) const;
        bool  operator>=(const TypeRequestedAttributeAction &other) const;
        bool  operator<=(const TypeRequestedAttributeAction &other) const;

      };

    static TypeRequestedAttributeActionKnownValues  stringToRequestedAttributeAction(const char *chars);
    static const char * stringFromRequestedAttributeAction(TypeRequestedAttributeActionKnownValues the_enum);
    class TypeSearchResultsJSON : public ReferenceCounted
      {
      private:
        bool flagHasFirstForecastDateAndOrTime;
        DateAndOrTimeJSON * storeFirstForecastDateAndOrTime;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSearchResultsJSON(const TypeSearchResultsJSON &);
        TypeSearchResultsJSON & operator=(const TypeSearchResultsJSON &other);

        void  fromJSONFirstForecastDateAndOrTime(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSearchResultsJSON(void);
        virtual ~TypeSearchResultsJSON(void);
        bool  hasFirstForecastDateAndOrTime(void) const;
        DateAndOrTimeJSON *  getFirstForecastDateAndOrTime(void);
        const DateAndOrTimeJSON *  getFirstForecastDateAndOrTime(void) const;

        virtual size_t extraTypeSearchResultsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSearchResultsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSearchResultsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSearchResultsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSearchResultsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSearchResultsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setFirstForecastDateAndOrTime(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasFirstForecastDateAndOrTime)
              {
                storeFirstForecastDateAndOrTime->remove_reference();
              }
            flagHasFirstForecastDateAndOrTime = true;
            storeFirstForecastDateAndOrTime = new_value;
          }
        void unsetFirstForecastDateAndOrTime(void)
          {
            if (flagHasFirstForecastDateAndOrTime)
              {
                storeFirstForecastDateAndOrTime->remove_reference();
              }
            flagHasFirstForecastDateAndOrTime = false;
          }

        virtual void extraTypeSearchResultsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSearchResultsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSearchResultsLookup(key);
            if (old_field == NULL)
              {
                extraTypeSearchResultsAppendPair(key, new_component);
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
            if (flagHasFirstForecastDateAndOrTime)
              {
                handler->start_pair("FirstForecastDateAndOrTime");
                storeFirstForecastDateAndOrTime->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeSearchResultsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSearchResultsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSearchResultsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSearchResultsJSON>, TypeSearchResultsJSON *, bool> generator("Type TypeSearchResults", ignore_extras);
                parse_json_value(text, "Text for TypeSearchResultsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSearchResultsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSearchResultsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSearchResultsJSON>, TypeSearchResultsJSON *, bool> generator("Type TypeSearchResults", ignore_extras);
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
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorFirstForecastDateAndOrTime;
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
                TypeSearchResultsJSON *result = new TypeSearchResultsJSON();
                assert(result != NULL);
                RCHandle<TypeSearchResultsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSearchResultsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSearchResultsJSON *result)
              {
                if (fieldGeneratorFirstForecastDateAndOrTime.have_value)
                  {
                    result->setFirstForecastDateAndOrTime(fieldGeneratorFirstForecastDateAndOrTime.value.referenced());
                    fieldGeneratorFirstForecastDateAndOrTime.have_value = false;
                  }
              }
            virtual void handle_result(TypeSearchResultsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "FirstForecastDateAndOrTime") == 0)
                    return &fieldGeneratorFirstForecastDateAndOrTime;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorFirstForecastDateAndOrTime("field \"FirstForecastDateAndOrTime\" of the TypeSearchResults class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSearchResults class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorFirstForecastDateAndOrTime.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasAttribution;
    AttributionJSON * storeAttribution;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    bool flagHasAlerts;
    std::vector< AlertJSON * > storeAlerts;
    bool flagHasRequestedAttribute;
    std::string storeRequestedAttribute;
    bool flagHasRequestedAttributeAction;
    TypeRequestedAttributeAction storeRequestedAttributeAction;
    bool flagHasIsSearchQuery;
    bool storeIsSearchQuery;
    bool flagHasIsYesNoQuery;
    bool storeIsYesNoQuery;
    bool flagHasSearchResults;
    TypeSearchResultsJSON * storeSearchResults;
    bool flagHasStartDateAndTime;
    DateAndOrTimeJSON * storeStartDateAndTime;
    bool flagHasEndDateAndTime;
    DateAndOrTimeJSON * storeEndDateAndTime;
    bool flagHasStartDateTimeSpec;
    DateTimeSpecJSON * storeStartDateTimeSpec;
    bool flagHasEndDateTimeSpec;
    DateTimeSpecJSON * storeEndDateTimeSpec;
    bool flagHasDailyForecasts;
    std::vector< DailyForecastJSON * > storeDailyForecasts;
    bool flagHasPlanner;
    PlannerJSON * storePlanner;
    bool flagHasCurrentConditions;
    CurrentConditionsJSON * storeCurrentConditions;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowWeatherForecastDailyInformationNuggetJSON(const ShowWeatherForecastDailyInformationNuggetJSON &);
    ShowWeatherForecastDailyInformationNuggetJSON & operator=(const ShowWeatherForecastDailyInformationNuggetJSON &other);

    JSONValue * extraAttributionToJSON(void) const;
    JSONValue * extraLocationToJSON(void) const;
    JSONValue * extraAlertsToJSON(void) const;
    JSONValue * extraRequestedAttributeToJSON(void) const;
    JSONValue * extraRequestedAttributeActionToJSON(void) const;
    JSONValue * extraIsSearchQueryToJSON(void) const;
    JSONValue * extraIsYesNoQueryToJSON(void) const;
    JSONValue * extraSearchResultsToJSON(void) const;
    JSONValue * extraStartDateAndTimeToJSON(void) const;
    JSONValue * extraEndDateAndTimeToJSON(void) const;
    JSONValue * extraStartDateTimeSpecToJSON(void) const;
    JSONValue * extraEndDateTimeSpecToJSON(void) const;
    JSONValue * extraDailyForecastsToJSON(void) const;
    JSONValue * extraPlannerToJSON(void) const;
    JSONValue * extraCurrentConditionsToJSON(void) const;

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlerts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttributeAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSearchResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDailyForecasts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlanner(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrentConditions(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowWeatherForecastDailyInformationNuggetJSON(void);
    virtual ~ShowWeatherForecastDailyInformationNuggetJSON(void);
    const char * getWeatherNuggetKind(void) const;
    bool  hasAttribution(void) const;
    AttributionJSON *  getAttribution(void);
    const AttributionJSON *  getAttribution(void) const;
    bool  hasLocation(void) const;
    MapLocationJSON *  getLocation(void);
    const MapLocationJSON *  getLocation(void) const;
    bool  hasAlerts(void) const;
    size_t  countOfAlerts(void) const;
    AlertJSON *  elementOfAlerts(size_t element_num);
    const AlertJSON *  elementOfAlerts(size_t element_num) const;
    std::vector< AlertJSON * >  getAlerts(void);
    const std::vector< AlertJSON * >  getAlerts(void) const;
    bool  hasRequestedAttribute(void) const;
    std::string  getRequestedAttribute(void);
    const std::string  getRequestedAttribute(void) const;
    bool  hasRequestedAttributeAction(void) const;
    TypeRequestedAttributeAction  getRequestedAttributeAction(void);
    const TypeRequestedAttributeAction  getRequestedAttributeAction(void) const;
    const char * getRequestedAttributeActionAsChars(void) const;
    std::string  getRequestedAttributeActionAsString(void) const;
    bool  hasIsSearchQuery(void) const;
    bool  getIsSearchQuery(void);
    const bool  getIsSearchQuery(void) const;
    bool  hasIsYesNoQuery(void) const;
    bool  getIsYesNoQuery(void);
    const bool  getIsYesNoQuery(void) const;
    bool  hasSearchResults(void) const;
    TypeSearchResultsJSON *  getSearchResults(void);
    const TypeSearchResultsJSON *  getSearchResults(void) const;
    bool  hasStartDateAndTime(void) const;
    DateAndOrTimeJSON *  getStartDateAndTime(void);
    const DateAndOrTimeJSON *  getStartDateAndTime(void) const;
    bool  hasEndDateAndTime(void) const;
    DateAndOrTimeJSON *  getEndDateAndTime(void);
    const DateAndOrTimeJSON *  getEndDateAndTime(void) const;
    bool  hasStartDateTimeSpec(void) const;
    DateTimeSpecJSON *  getStartDateTimeSpec(void);
    const DateTimeSpecJSON *  getStartDateTimeSpec(void) const;
    bool  hasEndDateTimeSpec(void) const;
    DateTimeSpecJSON *  getEndDateTimeSpec(void);
    const DateTimeSpecJSON *  getEndDateTimeSpec(void) const;
    bool  hasDailyForecasts(void) const;
    size_t  countOfDailyForecasts(void) const;
    DailyForecastJSON *  elementOfDailyForecasts(size_t element_num);
    const DailyForecastJSON *  elementOfDailyForecasts(size_t element_num) const;
    std::vector< DailyForecastJSON * >  getDailyForecasts(void);
    const std::vector< DailyForecastJSON * >  getDailyForecasts(void) const;
    bool  hasPlanner(void) const;
    PlannerJSON *  getPlanner(void);
    const PlannerJSON *  getPlanner(void) const;
    bool  hasCurrentConditions(void) const;
    CurrentConditionsJSON *  getCurrentConditions(void);
    const CurrentConditionsJSON *  getCurrentConditions(void) const;

    virtual size_t extraShowWeatherForecastDailyInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowWeatherForecastDailyInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowWeatherForecastDailyInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowWeatherForecastDailyInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowWeatherForecastDailyInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowWeatherForecastDailyInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraWeatherInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAttribution)
            ++result;
        if (flagHasLocation)
            ++result;
        if (flagHasAlerts)
            ++result;
        if (flagHasRequestedAttribute)
            ++result;
        if (flagHasRequestedAttributeAction)
            ++result;
        if (flagHasIsSearchQuery)
            ++result;
        if (flagHasIsYesNoQuery)
            ++result;
        if (flagHasSearchResults)
            ++result;
        if (flagHasStartDateAndTime)
            ++result;
        if (flagHasEndDateAndTime)
            ++result;
        if (flagHasStartDateTimeSpec)
            ++result;
        if (flagHasEndDateTimeSpec)
            ++result;
        if (flagHasDailyForecasts)
            ++result;
        if (flagHasPlanner)
            ++result;
        if (flagHasCurrentConditions)
            ++result;
        result += extraShowWeatherForecastDailyInformationNuggetComponentCount();
        return result;
      }
    const char *extraWeatherInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return "Attribution";
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return "Location";
            --remainder;
          }
        if (flagHasAlerts)
          {
            if (remainder == 0)
                return "Alerts";
            --remainder;
          }
        if (flagHasRequestedAttribute)
          {
            if (remainder == 0)
                return "RequestedAttribute";
            --remainder;
          }
        if (flagHasRequestedAttributeAction)
          {
            if (remainder == 0)
                return "RequestedAttributeAction";
            --remainder;
          }
        if (flagHasIsSearchQuery)
          {
            if (remainder == 0)
                return "IsSearchQuery";
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return "IsYesNoQuery";
            --remainder;
          }
        if (flagHasSearchResults)
          {
            if (remainder == 0)
                return "SearchResults";
            --remainder;
          }
        if (flagHasStartDateAndTime)
          {
            if (remainder == 0)
                return "StartDateAndTime";
            --remainder;
          }
        if (flagHasEndDateAndTime)
          {
            if (remainder == 0)
                return "EndDateAndTime";
            --remainder;
          }
        if (flagHasStartDateTimeSpec)
          {
            if (remainder == 0)
                return "StartDateTimeSpec";
            --remainder;
          }
        if (flagHasEndDateTimeSpec)
          {
            if (remainder == 0)
                return "EndDateTimeSpec";
            --remainder;
          }
        if (flagHasDailyForecasts)
          {
            if (remainder == 0)
                return "DailyForecasts";
            --remainder;
          }
        if (flagHasPlanner)
          {
            if (remainder == 0)
                return "Planner";
            --remainder;
          }
        if (flagHasCurrentConditions)
          {
            if (remainder == 0)
                return "CurrentConditions";
            --remainder;
          }
        return extraShowWeatherForecastDailyInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraWeatherInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        if (flagHasAlerts)
          {
            if (remainder == 0)
                return extraAlertsToJSON();
            --remainder;
          }
        if (flagHasRequestedAttribute)
          {
            if (remainder == 0)
                return extraRequestedAttributeToJSON();
            --remainder;
          }
        if (flagHasRequestedAttributeAction)
          {
            if (remainder == 0)
                return extraRequestedAttributeActionToJSON();
            --remainder;
          }
        if (flagHasIsSearchQuery)
          {
            if (remainder == 0)
                return extraIsSearchQueryToJSON();
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return extraIsYesNoQueryToJSON();
            --remainder;
          }
        if (flagHasSearchResults)
          {
            if (remainder == 0)
                return extraSearchResultsToJSON();
            --remainder;
          }
        if (flagHasStartDateAndTime)
          {
            if (remainder == 0)
                return extraStartDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasEndDateAndTime)
          {
            if (remainder == 0)
                return extraEndDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasStartDateTimeSpec)
          {
            if (remainder == 0)
                return extraStartDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasEndDateTimeSpec)
          {
            if (remainder == 0)
                return extraEndDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDailyForecasts)
          {
            if (remainder == 0)
                return extraDailyForecastsToJSON();
            --remainder;
          }
        if (flagHasPlanner)
          {
            if (remainder == 0)
                return extraPlannerToJSON();
            --remainder;
          }
        if (flagHasCurrentConditions)
          {
            if (remainder == 0)
                return extraCurrentConditionsToJSON();
            --remainder;
          }
        return extraShowWeatherForecastDailyInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraWeatherInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        if (flagHasAlerts)
          {
            if (remainder == 0)
                return extraAlertsToJSON();
            --remainder;
          }
        if (flagHasRequestedAttribute)
          {
            if (remainder == 0)
                return extraRequestedAttributeToJSON();
            --remainder;
          }
        if (flagHasRequestedAttributeAction)
          {
            if (remainder == 0)
                return extraRequestedAttributeActionToJSON();
            --remainder;
          }
        if (flagHasIsSearchQuery)
          {
            if (remainder == 0)
                return extraIsSearchQueryToJSON();
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return extraIsYesNoQueryToJSON();
            --remainder;
          }
        if (flagHasSearchResults)
          {
            if (remainder == 0)
                return extraSearchResultsToJSON();
            --remainder;
          }
        if (flagHasStartDateAndTime)
          {
            if (remainder == 0)
                return extraStartDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasEndDateAndTime)
          {
            if (remainder == 0)
                return extraEndDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasStartDateTimeSpec)
          {
            if (remainder == 0)
                return extraStartDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasEndDateTimeSpec)
          {
            if (remainder == 0)
                return extraEndDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDailyForecasts)
          {
            if (remainder == 0)
                return extraDailyForecastsToJSON();
            --remainder;
          }
        if (flagHasPlanner)
          {
            if (remainder == 0)
                return extraPlannerToJSON();
            --remainder;
          }
        if (flagHasCurrentConditions)
          {
            if (remainder == 0)
                return extraCurrentConditionsToJSON();
            --remainder;
          }
        return extraShowWeatherForecastDailyInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraWeatherInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strcmp(&(field_name[2]), "erts") == 0)
                            return (flagHasAlerts ? extraAlertsToJSON() : NULL);
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "tribution") == 0)
                            return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "urrentConditions") == 0)
                    return (flagHasCurrentConditions ? extraCurrentConditionsToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "ailyForecasts") == 0)
                    return (flagHasDailyForecasts ? extraDailyForecastsToJSON() : NULL);
                break;
            case 'E':
                if (strncmp(&(field_name[1]), "ndDate", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "ndTime") == 0)
                                return (flagHasEndDateAndTime ? extraEndDateAndTimeToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "imeSpec") == 0)
                                return (flagHasEndDateTimeSpec ? extraEndDateTimeSpecToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strncmp(&(field_name[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[3]), "earchQuery") == 0)
                                return (flagHasIsSearchQuery ? extraIsSearchQueryToJSON() : NULL);
                            break;
                        case 'Y':
                            if (strcmp(&(field_name[3]), "esNoQuery") == 0)
                                return (flagHasIsYesNoQuery ? extraIsYesNoQueryToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "lanner") == 0)
                    return (flagHasPlanner ? extraPlannerToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "equestedAttribute", 17) == 0)
                  {
                    switch ((unsigned char)(field_name[18]))
                      {
                        case 0:
                            return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                        case 'A':
                            if (strcmp(&(field_name[19]), "ction") == 0)
                                return (flagHasRequestedAttributeAction ? extraRequestedAttributeActionToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "archResults") == 0)
                            return (flagHasSearchResults ? extraSearchResultsToJSON() : NULL);
                        break;
                    case 't':
                        if (strncmp(&(field_name[2]), "artDate", 7) == 0)
                          {
                            switch ((unsigned char)(field_name[9]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[10]), "ndTime") == 0)
                                        return (flagHasStartDateAndTime ? extraStartDateAndTimeToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[10]), "imeSpec") == 0)
                                        return (flagHasStartDateTimeSpec ? extraStartDateTimeSpecToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraShowWeatherForecastDailyInformationNuggetLookup(field_name);
      }
    const JSONValue *extraWeatherInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strcmp(&(field_name[2]), "erts") == 0)
                            return (flagHasAlerts ? extraAlertsToJSON() : NULL);
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "tribution") == 0)
                            return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "urrentConditions") == 0)
                    return (flagHasCurrentConditions ? extraCurrentConditionsToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "ailyForecasts") == 0)
                    return (flagHasDailyForecasts ? extraDailyForecastsToJSON() : NULL);
                break;
            case 'E':
                if (strncmp(&(field_name[1]), "ndDate", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "ndTime") == 0)
                                return (flagHasEndDateAndTime ? extraEndDateAndTimeToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "imeSpec") == 0)
                                return (flagHasEndDateTimeSpec ? extraEndDateTimeSpecToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strncmp(&(field_name[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[3]), "earchQuery") == 0)
                                return (flagHasIsSearchQuery ? extraIsSearchQueryToJSON() : NULL);
                            break;
                        case 'Y':
                            if (strcmp(&(field_name[3]), "esNoQuery") == 0)
                                return (flagHasIsYesNoQuery ? extraIsYesNoQueryToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "lanner") == 0)
                    return (flagHasPlanner ? extraPlannerToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "equestedAttribute", 17) == 0)
                  {
                    switch ((unsigned char)(field_name[18]))
                      {
                        case 0:
                            return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                        case 'A':
                            if (strcmp(&(field_name[19]), "ction") == 0)
                                return (flagHasRequestedAttributeAction ? extraRequestedAttributeActionToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "archResults") == 0)
                            return (flagHasSearchResults ? extraSearchResultsToJSON() : NULL);
                        break;
                    case 't':
                        if (strncmp(&(field_name[2]), "artDate", 7) == 0)
                          {
                            switch ((unsigned char)(field_name[9]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[10]), "ndTime") == 0)
                                        return (flagHasStartDateAndTime ? extraStartDateAndTimeToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[10]), "imeSpec") == 0)
                                        return (flagHasStartDateTimeSpec ? extraStartDateTimeSpecToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraShowWeatherForecastDailyInformationNuggetLookup(field_name);
      }

    void setAttribution(AttributionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = true;
        storeAttribution = new_value;
      }
    void unsetAttribution(void)
      {
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = false;
      }
    void setLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = false;
      }
    void initAlerts(void)
      {
        if (flagHasAlerts)
          {
            for (size_t num3 = 0; num3 < storeAlerts.size(); ++num3)
              {
                storeAlerts[num3]->remove_reference();
              }
          }
        flagHasAlerts = true;
        storeAlerts.clear();
      }
    void appendAlerts(AlertJSON * to_append)
      {
        if (!flagHasAlerts)
          {
            flagHasAlerts = true;
            storeAlerts.clear();
          }
        assert(flagHasAlerts);
        to_append->add_reference();
        storeAlerts.push_back(to_append);
      }
    void unsetAlerts(void)
      {
        if (flagHasAlerts)
          {
            for (size_t num4 = 0; num4 < storeAlerts.size(); ++num4)
              {
                storeAlerts[num4]->remove_reference();
              }
          }
        flagHasAlerts = false;
        storeAlerts.clear();
      }
    void setRequestedAttribute(std::string new_value)
      {
        flagHasRequestedAttribute = true;
        storeRequestedAttribute = new_value;
      }
    void unsetRequestedAttribute(void)
      {
        flagHasRequestedAttribute = false;
      }
    void setRequestedAttributeAction(TypeRequestedAttributeAction new_value)
      {
        flagHasRequestedAttributeAction = true;
        storeRequestedAttributeAction = new_value;
      }
    void setRequestedAttributeAction(const char *chars)
      {
        TypeRequestedAttributeActionKnownValues known = stringToRequestedAttributeAction(chars);
        TypeRequestedAttributeAction new_value;
        if (known == RequestedAttributeAction__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setRequestedAttributeAction(new_value);
      }
    void setRequestedAttributeAction(std::string the_string)
      {
        setRequestedAttributeAction(the_string.c_str());
      }
    void setRequestedAttributeAction(TypeRequestedAttributeActionKnownValues new_value)
      {
        TypeRequestedAttributeAction new_full_value;
        assert(new_value != RequestedAttributeAction__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setRequestedAttributeAction(new_full_value);
      }
    void unsetRequestedAttributeAction(void)
      {
        flagHasRequestedAttributeAction = false;
      }
    void setIsSearchQuery(bool new_value)
      {
        flagHasIsSearchQuery = true;
        storeIsSearchQuery = new_value;
      }
    void unsetIsSearchQuery(void)
      {
        flagHasIsSearchQuery = false;
      }
    void setIsYesNoQuery(bool new_value)
      {
        flagHasIsYesNoQuery = true;
        storeIsYesNoQuery = new_value;
      }
    void unsetIsYesNoQuery(void)
      {
        flagHasIsYesNoQuery = false;
      }
    void setSearchResults(TypeSearchResultsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSearchResults)
          {
            storeSearchResults->remove_reference();
          }
        flagHasSearchResults = true;
        storeSearchResults = new_value;
      }
    void unsetSearchResults(void)
      {
        if (flagHasSearchResults)
          {
            storeSearchResults->remove_reference();
          }
        flagHasSearchResults = false;
      }
    void setStartDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = true;
        storeStartDateAndTime = new_value;
      }
    void unsetStartDateAndTime(void)
      {
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = false;
      }
    void setEndDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = true;
        storeEndDateAndTime = new_value;
      }
    void unsetEndDateAndTime(void)
      {
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = false;
      }
    void setStartDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateTimeSpec)
          {
            storeStartDateTimeSpec->remove_reference();
          }
        flagHasStartDateTimeSpec = true;
        storeStartDateTimeSpec = new_value;
      }
    void unsetStartDateTimeSpec(void)
      {
        if (flagHasStartDateTimeSpec)
          {
            storeStartDateTimeSpec->remove_reference();
          }
        flagHasStartDateTimeSpec = false;
      }
    void setEndDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateTimeSpec)
          {
            storeEndDateTimeSpec->remove_reference();
          }
        flagHasEndDateTimeSpec = true;
        storeEndDateTimeSpec = new_value;
      }
    void unsetEndDateTimeSpec(void)
      {
        if (flagHasEndDateTimeSpec)
          {
            storeEndDateTimeSpec->remove_reference();
          }
        flagHasEndDateTimeSpec = false;
      }
    void initDailyForecasts(void)
      {
        if (flagHasDailyForecasts)
          {
            for (size_t num5 = 0; num5 < storeDailyForecasts.size(); ++num5)
              {
                storeDailyForecasts[num5]->remove_reference();
              }
          }
        flagHasDailyForecasts = true;
        storeDailyForecasts.clear();
      }
    void appendDailyForecasts(DailyForecastJSON * to_append)
      {
        if (!flagHasDailyForecasts)
          {
            flagHasDailyForecasts = true;
            storeDailyForecasts.clear();
          }
        assert(flagHasDailyForecasts);
        to_append->add_reference();
        storeDailyForecasts.push_back(to_append);
      }
    void unsetDailyForecasts(void)
      {
        if (flagHasDailyForecasts)
          {
            for (size_t num6 = 0; num6 < storeDailyForecasts.size(); ++num6)
              {
                storeDailyForecasts[num6]->remove_reference();
              }
          }
        flagHasDailyForecasts = false;
        storeDailyForecasts.clear();
      }
    void setPlanner(PlannerJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPlanner)
          {
            storePlanner->remove_reference();
          }
        flagHasPlanner = true;
        storePlanner = new_value;
      }
    void unsetPlanner(void)
      {
        if (flagHasPlanner)
          {
            storePlanner->remove_reference();
          }
        flagHasPlanner = false;
      }
    void setCurrentConditions(CurrentConditionsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCurrentConditions)
          {
            storeCurrentConditions->remove_reference();
          }
        flagHasCurrentConditions = true;
        storeCurrentConditions = new_value;
      }
    void unsetCurrentConditions(void)
      {
        if (flagHasCurrentConditions)
          {
            storeCurrentConditions->remove_reference();
          }
        flagHasCurrentConditions = false;
      }

    virtual void extraShowWeatherForecastDailyInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowWeatherForecastDailyInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowWeatherForecastDailyInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowWeatherForecastDailyInformationNuggetAppendPair(key, new_component);
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
    void extraWeatherInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strcmp(&(key[2]), "erts") == 0)
                            {
                            fromJSONAlerts(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "tribution") == 0)
                            {
                            fromJSONAttribution(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "urrentConditions") == 0)
                    {
                    fromJSONCurrentConditions(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "ailyForecasts") == 0)
                    {
                    fromJSONDailyForecasts(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strncmp(&(key[1]), "ndDate", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "ndTime") == 0)
                                {
                                fromJSONEndDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "imeSpec") == 0)
                                {
                                fromJSONEndDateTimeSpec(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strncmp(&(key[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'S':
                            if (strcmp(&(key[3]), "earchQuery") == 0)
                                {
                                fromJSONIsSearchQuery(new_component, false);
                                return;
                                }
                            break;
                        case 'Y':
                            if (strcmp(&(key[3]), "esNoQuery") == 0)
                                {
                                fromJSONIsYesNoQuery(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "lanner") == 0)
                    {
                    fromJSONPlanner(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strncmp(&(key[1]), "equestedAttribute", 17) == 0)
                  {
                    switch ((unsigned char)(key[18]))
                      {
                        case 0:
                            {
                            fromJSONRequestedAttribute(new_component, false);
                            return;
                            }
                        case 'A':
                            if (strcmp(&(key[19]), "ction") == 0)
                                {
                                fromJSONRequestedAttributeAction(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "archResults") == 0)
                            {
                            fromJSONSearchResults(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strncmp(&(key[2]), "artDate", 7) == 0)
                          {
                            switch ((unsigned char)(key[9]))
                              {
                                case 'A':
                                    if (strcmp(&(key[10]), "ndTime") == 0)
                                        {
                                        fromJSONStartDateAndTime(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[10]), "imeSpec") == 0)
                                        {
                                        fromJSONStartDateTimeSpec(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraShowWeatherForecastDailyInformationNuggetAppendPair(key, new_component);
      }
    void extraWeatherInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strcmp(&(key[2]), "erts") == 0)
                            {
                            fromJSONAlerts(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "tribution") == 0)
                            {
                            fromJSONAttribution(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "urrentConditions") == 0)
                    {
                    fromJSONCurrentConditions(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "ailyForecasts") == 0)
                    {
                    fromJSONDailyForecasts(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strncmp(&(key[1]), "ndDate", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "ndTime") == 0)
                                {
                                fromJSONEndDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "imeSpec") == 0)
                                {
                                fromJSONEndDateTimeSpec(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strncmp(&(key[1]), "s", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'S':
                            if (strcmp(&(key[3]), "earchQuery") == 0)
                                {
                                fromJSONIsSearchQuery(new_component, false);
                                return;
                                }
                            break;
                        case 'Y':
                            if (strcmp(&(key[3]), "esNoQuery") == 0)
                                {
                                fromJSONIsYesNoQuery(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "lanner") == 0)
                    {
                    fromJSONPlanner(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strncmp(&(key[1]), "equestedAttribute", 17) == 0)
                  {
                    switch ((unsigned char)(key[18]))
                      {
                        case 0:
                            {
                            fromJSONRequestedAttribute(new_component, false);
                            return;
                            }
                        case 'A':
                            if (strcmp(&(key[19]), "ction") == 0)
                                {
                                fromJSONRequestedAttributeAction(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "archResults") == 0)
                            {
                            fromJSONSearchResults(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strncmp(&(key[2]), "artDate", 7) == 0)
                          {
                            switch ((unsigned char)(key[9]))
                              {
                                case 'A':
                                    if (strcmp(&(key[10]), "ndTime") == 0)
                                        {
                                        fromJSONStartDateAndTime(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[10]), "imeSpec") == 0)
                                        {
                                        fromJSONStartDateTimeSpec(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraShowWeatherForecastDailyInformationNuggetSetField(key, new_component);
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
        WeatherInformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasAttribution)
          {
            handler->start_pair("Attribution");
            storeAttribution->write_as_json(handler);
          }
        assert(flagHasLocation);
        handler->start_pair("Location");
        storeLocation->write_as_json(handler);
        assert(flagHasAlerts);
        handler->start_pair("Alerts");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeAlerts.size(); ++num1)
          {
            storeAlerts[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasRequestedAttribute);
        handler->start_pair("RequestedAttribute");
        handler->string_value(storeRequestedAttribute);
        assert(flagHasRequestedAttributeAction);
        handler->start_pair("RequestedAttributeAction");
        if (storeRequestedAttributeAction.in_known_list)
          {
            switch (storeRequestedAttributeAction.list_value)
              {
                case RequestedAttributeAction_Unknown:
                    handler->string_value("Unknown");
                    break;
                case RequestedAttributeAction_Start:
                    handler->string_value("Start");
                    break;
                case RequestedAttributeAction_Stop:
                    handler->string_value("Stop");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeRequestedAttributeAction.string_value);
          }
        assert(flagHasIsSearchQuery);
        handler->start_pair("IsSearchQuery");
        handler->boolean_value(storeIsSearchQuery);
        assert(flagHasIsYesNoQuery);
        handler->start_pair("IsYesNoQuery");
        handler->boolean_value(storeIsYesNoQuery);
        if (flagHasSearchResults)
          {
            handler->start_pair("SearchResults");
            storeSearchResults->write_as_json(handler);
          }
        assert(flagHasStartDateAndTime);
        handler->start_pair("StartDateAndTime");
        storeStartDateAndTime->write_as_json(handler);
        assert(flagHasEndDateAndTime);
        handler->start_pair("EndDateAndTime");
        storeEndDateAndTime->write_as_json(handler);
        assert(flagHasStartDateTimeSpec);
        handler->start_pair("StartDateTimeSpec");
        storeStartDateTimeSpec->write_as_json(handler);
        assert(flagHasEndDateTimeSpec);
        handler->start_pair("EndDateTimeSpec");
        storeEndDateTimeSpec->write_as_json(handler);
        assert(flagHasDailyForecasts);
        handler->start_pair("DailyForecasts");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeDailyForecasts.size(); ++num2)
          {
            storeDailyForecasts[num2]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasPlanner)
          {
            handler->start_pair("Planner");
            storePlanner->write_as_json(handler);
          }
        if (flagHasCurrentConditions)
          {
            handler->start_pair("CurrentConditions");
            storeCurrentConditions->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLocation()))
          {
            return "When parsing the object for %what%, the \"Location\" field was missing.";
          }
        if (!(hasAlerts()))
          {
            return "When parsing the object for %what%, the \"Alerts\" field was missing.";
          }
        if (!(hasRequestedAttribute()))
          {
            return "When parsing the object for %what%, the \"RequestedAttribute\" field was missing.";
          }
        if (!(hasRequestedAttributeAction()))
          {
            return "When parsing the object for %what%, the \"RequestedAttributeAction\" field was missing.";
          }
        if (!(hasIsSearchQuery()))
          {
            return "When parsing the object for %what%, the \"IsSearchQuery\" field was missing.";
          }
        if (!(hasIsYesNoQuery()))
          {
            return "When parsing the object for %what%, the \"IsYesNoQuery\" field was missing.";
          }
        if (!(hasStartDateAndTime()))
          {
            return "When parsing the object for %what%, the \"StartDateAndTime\" field was missing.";
          }
        if (!(hasEndDateAndTime()))
          {
            return "When parsing the object for %what%, the \"EndDateAndTime\" field was missing.";
          }
        if (!(hasStartDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"StartDateTimeSpec\" field was missing.";
          }
        if (!(hasEndDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"EndDateTimeSpec\" field was missing.";
          }
        if (!(hasDailyForecasts()))
          {
            return "When parsing the object for %what%, the \"DailyForecasts\" field was missing.";
          }
        return NULL;
      }

    static ShowWeatherForecastDailyInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowWeatherForecastDailyInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowWeatherForecastDailyInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherForecastDailyInformationNuggetJSON>, ShowWeatherForecastDailyInformationNuggetJSON *, bool> generator("Type ShowWeatherForecastDailyInformationNugget", ignore_extras);
            parse_json_value(text, "Text for ShowWeatherForecastDailyInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowWeatherForecastDailyInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowWeatherForecastDailyInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherForecastDailyInformationNuggetJSON>, ShowWeatherForecastDailyInformationNuggetJSON *, bool> generator("Type ShowWeatherForecastDailyInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public WeatherInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<AttributionJSON::Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool > fieldGeneratorAttribution;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorLocation;
        JSONHoldingArrayGenerator<AlertJSON::Generator, RCHandle<AlertJSON>, AlertJSON *, bool > fieldGeneratorAlerts;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedAttribute;
    class FieldGeneratorRequestedAttributeAction : public JSONStringGenerator
          {
          protected:
            FieldGeneratorRequestedAttributeAction(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorRequestedAttributeAction(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeRequestedAttributeActionKnownValues known = stringToRequestedAttributeAction(result);
                TypeRequestedAttributeAction new_value;
                if (known == RequestedAttributeAction__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeRequestedAttributeAction result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorRequestedAttributeAction, TypeRequestedAttributeAction, TypeRequestedAttributeAction > fieldGeneratorRequestedAttributeAction;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsSearchQuery;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsYesNoQuery;
        JSONHoldingGenerator<TypeSearchResultsJSON::Generator, RCHandle<TypeSearchResultsJSON>, TypeSearchResultsJSON *, bool > fieldGeneratorSearchResults;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndDateAndTime;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorStartDateTimeSpec;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorEndDateTimeSpec;
        JSONHoldingArrayGenerator<DailyForecastJSON::Generator, RCHandle<DailyForecastJSON>, DailyForecastJSON *, bool > fieldGeneratorDailyForecasts;
        JSONHoldingGenerator<PlannerJSON::Generator, RCHandle<PlannerJSON>, PlannerJSON *, bool > fieldGeneratorPlanner;
        JSONHoldingGenerator<CurrentConditionsJSON::Generator, RCHandle<CurrentConditionsJSON>, CurrentConditionsJSON *, bool > fieldGeneratorCurrentConditions;
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
            if (!(strcmp(getWeatherInformationNuggetJSONKey().c_str(), "ShowWeatherForecastDaily") == 0))
                throw("The key field has a value other than `ShowWeatherForecastDaily'.");
            ShowWeatherForecastDailyInformationNuggetJSON *result = new ShowWeatherForecastDailyInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowWeatherForecastDailyInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowWeatherForecastDailyInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(WeatherInformationNuggetJSON *new_result)
          {
            handle_result((ShowWeatherForecastDailyInformationNuggetJSON *)new_result);
          }
        void finish(ShowWeatherForecastDailyInformationNuggetJSON *result)
          {
            if (fieldGeneratorAttribution.have_value)
              {
                result->setAttribution(fieldGeneratorAttribution.value.referenced());
                fieldGeneratorAttribution.have_value = false;
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value.referenced());
                fieldGeneratorLocation.have_value = false;
              }
            else if (!(result->hasLocation()))
              {
                error("When parsing the object for %what%, the \"Location\" field was missing.");
              }
            if (fieldGeneratorAlerts.have_value)
              {
                result->initAlerts();
                size_t count = fieldGeneratorAlerts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlerts(fieldGeneratorAlerts.value[num].referenced());
                  }
                fieldGeneratorAlerts.value.clear();
                fieldGeneratorAlerts.have_value = false;
              }
            else if (!(result->hasAlerts()))
              {
                error("When parsing the object for %what%, the \"Alerts\" field was missing.");
              }
            if (fieldGeneratorRequestedAttribute.have_value)
              {
                result->setRequestedAttribute(fieldGeneratorRequestedAttribute.value);
                fieldGeneratorRequestedAttribute.have_value = false;
              }
            else if (!(result->hasRequestedAttribute()))
              {
                error("When parsing the object for %what%, the \"RequestedAttribute\" field was missing.");
              }
            if (fieldGeneratorRequestedAttributeAction.have_value)
              {
                result->setRequestedAttributeAction(fieldGeneratorRequestedAttributeAction.value);
                fieldGeneratorRequestedAttributeAction.have_value = false;
              }
            else if (!(result->hasRequestedAttributeAction()))
              {
                error("When parsing the object for %what%, the \"RequestedAttributeAction\" field was missing.");
              }
            if (fieldGeneratorIsSearchQuery.have_value)
              {
                result->setIsSearchQuery(fieldGeneratorIsSearchQuery.value);
                fieldGeneratorIsSearchQuery.have_value = false;
              }
            else if (!(result->hasIsSearchQuery()))
              {
                error("When parsing the object for %what%, the \"IsSearchQuery\" field was missing.");
              }
            if (fieldGeneratorIsYesNoQuery.have_value)
              {
                result->setIsYesNoQuery(fieldGeneratorIsYesNoQuery.value);
                fieldGeneratorIsYesNoQuery.have_value = false;
              }
            else if (!(result->hasIsYesNoQuery()))
              {
                error("When parsing the object for %what%, the \"IsYesNoQuery\" field was missing.");
              }
            if (fieldGeneratorSearchResults.have_value)
              {
                result->setSearchResults(fieldGeneratorSearchResults.value.referenced());
                fieldGeneratorSearchResults.have_value = false;
              }
            if (fieldGeneratorStartDateAndTime.have_value)
              {
                result->setStartDateAndTime(fieldGeneratorStartDateAndTime.value.referenced());
                fieldGeneratorStartDateAndTime.have_value = false;
              }
            else if (!(result->hasStartDateAndTime()))
              {
                error("When parsing the object for %what%, the \"StartDateAndTime\" field was missing.");
              }
            if (fieldGeneratorEndDateAndTime.have_value)
              {
                result->setEndDateAndTime(fieldGeneratorEndDateAndTime.value.referenced());
                fieldGeneratorEndDateAndTime.have_value = false;
              }
            else if (!(result->hasEndDateAndTime()))
              {
                error("When parsing the object for %what%, the \"EndDateAndTime\" field was missing.");
              }
            if (fieldGeneratorStartDateTimeSpec.have_value)
              {
                result->setStartDateTimeSpec(fieldGeneratorStartDateTimeSpec.value.referenced());
                fieldGeneratorStartDateTimeSpec.have_value = false;
              }
            else if (!(result->hasStartDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"StartDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorEndDateTimeSpec.have_value)
              {
                result->setEndDateTimeSpec(fieldGeneratorEndDateTimeSpec.value.referenced());
                fieldGeneratorEndDateTimeSpec.have_value = false;
              }
            else if (!(result->hasEndDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"EndDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorDailyForecasts.have_value)
              {
                result->initDailyForecasts();
                size_t count = fieldGeneratorDailyForecasts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDailyForecasts(fieldGeneratorDailyForecasts.value[num].referenced());
                  }
                fieldGeneratorDailyForecasts.value.clear();
                fieldGeneratorDailyForecasts.have_value = false;
              }
            else if (!(result->hasDailyForecasts()))
              {
                error("When parsing the object for %what%, the \"DailyForecasts\" field was missing.");
              }
            if (fieldGeneratorPlanner.have_value)
              {
                result->setPlanner(fieldGeneratorPlanner.value.referenced());
                fieldGeneratorPlanner.have_value = false;
              }
            if (fieldGeneratorCurrentConditions.have_value)
              {
                result->setCurrentConditions(fieldGeneratorCurrentConditions.value.referenced());
                fieldGeneratorCurrentConditions.have_value = false;
              }
            WeatherInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowWeatherForecastDailyInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "erts") == 0)
                                return &fieldGeneratorAlerts;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "tribution") == 0)
                                return &fieldGeneratorAttribution;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "urrentConditions") == 0)
                        return &fieldGeneratorCurrentConditions;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ailyForecasts") == 0)
                        return &fieldGeneratorDailyForecasts;
                    break;
                case 'E':
                    if (strncmp(&(field_name[1]), "ndDate", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[8]), "ndTime") == 0)
                                    return &fieldGeneratorEndDateAndTime;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "imeSpec") == 0)
                                    return &fieldGeneratorEndDateTimeSpec;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "s", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'S':
                                if (strcmp(&(field_name[3]), "earchQuery") == 0)
                                    return &fieldGeneratorIsSearchQuery;
                                break;
                            case 'Y':
                                if (strcmp(&(field_name[3]), "esNoQuery") == 0)
                                    return &fieldGeneratorIsYesNoQuery;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "lanner") == 0)
                        return &fieldGeneratorPlanner;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equestedAttribute", 17) == 0)
                      {
                        switch ((unsigned char)(field_name[18]))
                          {
                            case 0:
                                return &fieldGeneratorRequestedAttribute;
                            case 'A':
                                if (strcmp(&(field_name[19]), "ction") == 0)
                                    return &fieldGeneratorRequestedAttributeAction;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "archResults") == 0)
                                return &fieldGeneratorSearchResults;
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "artDate", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[10]), "ndTime") == 0)
                                            return &fieldGeneratorStartDateAndTime;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[10]), "imeSpec") == 0)
                                            return &fieldGeneratorStartDateTimeSpec;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return WeatherInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : WeatherInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorAttribution("field \"Attribution\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorAlerts("field \"Alerts\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorRequestedAttribute("field \"RequestedAttribute\" of the ShowWeatherForecastDailyInformationNugget class"), fieldGeneratorRequestedAttributeAction("field \"RequestedAttributeAction\" of the ShowWeatherForecastDailyInformationNugget class"), fieldGeneratorIsSearchQuery("field \"IsSearchQuery\" of the ShowWeatherForecastDailyInformationNugget class"), fieldGeneratorIsYesNoQuery("field \"IsYesNoQuery\" of the ShowWeatherForecastDailyInformationNugget class"), fieldGeneratorSearchResults("field \"SearchResults\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorStartDateAndTime("field \"StartDateAndTime\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorEndDateAndTime("field \"EndDateAndTime\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorStartDateTimeSpec("field \"StartDateTimeSpec\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorEndDateTimeSpec("field \"EndDateTimeSpec\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorDailyForecasts("field \"DailyForecasts\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorPlanner("field \"Planner\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), fieldGeneratorCurrentConditions("field \"CurrentConditions\" of the ShowWeatherForecastDailyInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowWeatherForecastDailyInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAttribution.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorAlerts.reset();
            fieldGeneratorRequestedAttribute.reset();
            fieldGeneratorRequestedAttributeAction.reset();
            fieldGeneratorIsSearchQuery.reset();
            fieldGeneratorIsYesNoQuery.reset();
            fieldGeneratorSearchResults.reset();
            fieldGeneratorStartDateAndTime.reset();
            fieldGeneratorEndDateAndTime.reset();
            fieldGeneratorStartDateTimeSpec.reset();
            fieldGeneratorEndDateTimeSpec.reset();
            fieldGeneratorDailyForecasts.reset();
            fieldGeneratorPlanner.reset();
            fieldGeneratorCurrentConditions.reset();
            WeatherInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWWEATHERFORECASTDAILYINFORMATIONNUGGETJSON_H */
