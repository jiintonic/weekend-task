/* file "ShowWeatherForecastDailyInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowWeatherForecastDailyInformationNuggetJSON.h"

#include "ShowWeatherForecastDailyInformationNuggetJSON.h"


ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(void)
  {
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(const TypeRequestedAttributeAction &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(TypeRequestedAttributeActionKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::operator==(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::operator!=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator==(other));
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::operator<(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::operator>(const TypeRequestedAttributeAction &other) const
  {
    return other.operator<(*this);
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::operator>=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator<(other));
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction::operator<=(const TypeRequestedAttributeAction &other) const
  {
    return !(other.operator<(*this));
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeActionKnownValues ShowWeatherForecastDailyInformationNuggetJSON::stringToRequestedAttributeAction(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strncmp(&(chars[1]), "t", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'a':
                        if (strcmp(&(chars[3]), "rt") == 0)
                            return RequestedAttributeAction_Start;
                        break;
                    case 'o':
                        if (strcmp(&(chars[3]), "p") == 0)
                            return RequestedAttributeAction_Stop;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return RequestedAttributeAction_Unknown;
            break;
        default:
            break;
      }
    return RequestedAttributeAction__none;
  }

const char *ShowWeatherForecastDailyInformationNuggetJSON::stringFromRequestedAttributeAction(TypeRequestedAttributeActionKnownValues the_enum)
  {
    switch (the_enum)
      {
        case RequestedAttributeAction_Unknown:
            return "Unknown";
        case RequestedAttributeAction_Start:
            return "Start";
        case RequestedAttributeAction_Stop:
            return "Stop";
        default:
            assert(false);
            return NULL;
      }
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::TypeSearchResultsJSON(const TypeSearchResultsJSON &)
  {
    assert(false);
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON &ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::operator=(const TypeSearchResultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::fromJSONFirstForecastDateAndOrTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFirstForecastDateAndOrTime(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::TypeSearchResultsJSON(void) :
        flagHasFirstForecastDateAndOrTime(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::~TypeSearchResultsJSON(void)
  {
    if (flagHasFirstForecastDateAndOrTime)
      {
        storeFirstForecastDateAndOrTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::hasFirstForecastDateAndOrTime(void) const
  {
    return flagHasFirstForecastDateAndOrTime;
  }

DateAndOrTimeJSON * ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::getFirstForecastDateAndOrTime(void)
  {
    assert(flagHasFirstForecastDateAndOrTime);
    return storeFirstForecastDateAndOrTime;
  }

const DateAndOrTimeJSON * ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::getFirstForecastDateAndOrTime(void) const
  {
    assert(flagHasFirstForecastDateAndOrTime);
    return storeFirstForecastDateAndOrTime;
  }

ShowWeatherForecastDailyInformationNuggetJSON::ShowWeatherForecastDailyInformationNuggetJSON(const ShowWeatherForecastDailyInformationNuggetJSON &)
  {
    assert(false);
  }

ShowWeatherForecastDailyInformationNuggetJSON &ShowWeatherForecastDailyInformationNuggetJSON::operator=(const ShowWeatherForecastDailyInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraAlertsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Alerts = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeAlerts.size(); ++num1)
      {
        JSONValueHandler handler_Alerts;
        storeAlerts[num1]->write_as_json(&handler_Alerts);
        handler_Alerts.result->add_reference();
        generated_array_1_Alerts->appendComponent(handler_Alerts.result);
        handler_Alerts.result->remove_reference();
      }
    return generated_array_1_Alerts;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraRequestedAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttribute = new JSONStringValue(storeRequestedAttribute.c_str());
    return generated_string_RequestedAttribute;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraRequestedAttributeActionToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttributeAction;
    if (!(storeRequestedAttributeAction.in_known_list))
      {
    generated_string_RequestedAttributeAction = new JSONStringValue(storeRequestedAttributeAction.string_value.c_str());
      }
    else
      {
    switch (storeRequestedAttributeAction.list_value)
      {
        case RequestedAttributeAction_Unknown:
            generated_string_RequestedAttributeAction = new JSONStringValue("Unknown");
            break;
        case RequestedAttributeAction_Start:
            generated_string_RequestedAttributeAction = new JSONStringValue("Start");
            break;
        case RequestedAttributeAction_Stop:
            generated_string_RequestedAttributeAction = new JSONStringValue("Stop");
            break;
        default:
            assert(false);
            generated_string_RequestedAttributeAction = NULL;
      }
      }
    return generated_string_RequestedAttributeAction;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraIsSearchQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsSearchQuery = (storeIsSearchQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsSearchQuery;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraIsYesNoQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsYesNoQuery = (storeIsYesNoQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsYesNoQuery;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraSearchResultsToJSON(void) const
  {
    JSONValueHandler handler_SearchResults;
    storeSearchResults->write_as_json(&handler_SearchResults);
    handler_SearchResults.result->add_reference();
    return handler_SearchResults.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraStartDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_StartDateAndTime;
    storeStartDateAndTime->write_as_json(&handler_StartDateAndTime);
    handler_StartDateAndTime.result->add_reference();
    return handler_StartDateAndTime.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraEndDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_EndDateAndTime;
    storeEndDateAndTime->write_as_json(&handler_EndDateAndTime);
    handler_EndDateAndTime.result->add_reference();
    return handler_EndDateAndTime.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraStartDateTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_StartDateTimeSpec;
    storeStartDateTimeSpec->write_as_json(&handler_StartDateTimeSpec);
    handler_StartDateTimeSpec.result->add_reference();
    return handler_StartDateTimeSpec.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraEndDateTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_EndDateTimeSpec;
    storeEndDateTimeSpec->write_as_json(&handler_EndDateTimeSpec);
    handler_EndDateTimeSpec.result->add_reference();
    return handler_EndDateTimeSpec.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraDailyForecastsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_DailyForecasts = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeDailyForecasts.size(); ++num2)
      {
        JSONValueHandler handler_DailyForecasts;
        storeDailyForecasts[num2]->write_as_json(&handler_DailyForecasts);
        handler_DailyForecasts.result->add_reference();
        generated_array_2_DailyForecasts->appendComponent(handler_DailyForecasts.result);
        handler_DailyForecasts.result->remove_reference();
      }
    return generated_array_2_DailyForecasts;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraPlannerToJSON(void) const
  {
    JSONValueHandler handler_Planner;
    storePlanner->write_as_json(&handler_Planner);
    handler_Planner.result->add_reference();
    return handler_Planner.result;
  }

JSONValue *ShowWeatherForecastDailyInformationNuggetJSON::extraCurrentConditionsToJSON(void) const
  {
    JSONValueHandler handler_CurrentConditions;
    storeCurrentConditions->write_as_json(&handler_CurrentConditions);
    handler_CurrentConditions.result->add_reference();
    return handler_CurrentConditions.result;
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONAlerts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Alerts of ShowWeatherForecastDailyInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AlertJSON * > vector_Alerts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AlertJSON *convert_classy = AlertJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Alerts1[num1] = convert_classy;
      }
    initAlerts();
    for (size_t num3 = 0; num3 < vector_Alerts1.size(); ++num3)
        appendAlerts(vector_Alerts1[num3]);
    for (size_t num1 = 0; num1 < vector_Alerts1.size(); ++num1)
      {
        vector_Alerts1[num1]->remove_reference();
      }
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of ShowWeatherForecastDailyInformationNuggetJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONRequestedAttributeAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttributeAction of ShowWeatherForecastDailyInformationNuggetJSON is not a string.");
    TypeRequestedAttributeAction the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "t", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'a':
                        if (strcmp(&(json_string->getData()[3]), "rt") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestedAttributeAction_Start;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'o':
                        if (strcmp(&(json_string->getData()[3]), "p") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = RequestedAttributeAction_Stop;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RequestedAttributeAction_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setRequestedAttributeAction(the_open_enum);
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsSearchQuery of ShowWeatherForecastDailyInformationNuggetJSON is not true for false.");
          }
      }
    setIsSearchQuery(the_bool);
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsYesNoQuery of ShowWeatherForecastDailyInformationNuggetJSON is not true for false.");
          }
      }
    setIsYesNoQuery(the_bool);
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONSearchResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSearchResultsJSON *convert_classy = TypeSearchResultsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchResults(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONStartDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONEndDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONDailyForecasts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DailyForecasts of ShowWeatherForecastDailyInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DailyForecastJSON * > vector_DailyForecasts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DailyForecastJSON *convert_classy = DailyForecastJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DailyForecasts1[num1] = convert_classy;
      }
    initDailyForecasts();
    for (size_t num4 = 0; num4 < vector_DailyForecasts1.size(); ++num4)
        appendDailyForecasts(vector_DailyForecasts1[num4]);
    for (size_t num1 = 0; num1 < vector_DailyForecasts1.size(); ++num1)
      {
        vector_DailyForecasts1[num1]->remove_reference();
      }
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONPlanner(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PlannerJSON *convert_classy = PlannerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlanner(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastDailyInformationNuggetJSON::fromJSONCurrentConditions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CurrentConditionsJSON *convert_classy = CurrentConditionsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentConditions(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherForecastDailyInformationNuggetJSON::ShowWeatherForecastDailyInformationNuggetJSON(void) :
        flagHasAttribution(false),
        flagHasLocation(false),
        flagHasAlerts(false),
        flagHasRequestedAttribute(false),
        flagHasRequestedAttributeAction(false),
        flagHasIsSearchQuery(false),
        flagHasIsYesNoQuery(false),
        flagHasSearchResults(false),
        flagHasStartDateAndTime(false),
        flagHasEndDateAndTime(false),
        flagHasStartDateTimeSpec(false),
        flagHasEndDateTimeSpec(false),
        flagHasDailyForecasts(false),
        flagHasPlanner(false),
        flagHasCurrentConditions(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherForecastDailyInformationNuggetJSON::~ShowWeatherForecastDailyInformationNuggetJSON(void)
  {
    if (flagHasAttribution)
      {
        storeAttribution->remove_reference();
      }
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
    if (flagHasAlerts)
      {
        for (size_t num7 = 0; num7 < storeAlerts.size(); ++num7)
          {
            storeAlerts[num7]->remove_reference();
          }
      }
    if (flagHasSearchResults)
      {
        storeSearchResults->remove_reference();
      }
    if (flagHasStartDateAndTime)
      {
        storeStartDateAndTime->remove_reference();
      }
    if (flagHasEndDateAndTime)
      {
        storeEndDateAndTime->remove_reference();
      }
    if (flagHasStartDateTimeSpec)
      {
        storeStartDateTimeSpec->remove_reference();
      }
    if (flagHasEndDateTimeSpec)
      {
        storeEndDateTimeSpec->remove_reference();
      }
    if (flagHasDailyForecasts)
      {
        for (size_t num8 = 0; num8 < storeDailyForecasts.size(); ++num8)
          {
            storeDailyForecasts[num8]->remove_reference();
          }
      }
    if (flagHasPlanner)
      {
        storePlanner->remove_reference();
      }
    if (flagHasCurrentConditions)
      {
        storeCurrentConditions->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowWeatherForecastDailyInformationNuggetJSON::getWeatherNuggetKind(void) const
  {
    return "ShowWeatherForecastDaily";
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * ShowWeatherForecastDailyInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * ShowWeatherForecastDailyInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * ShowWeatherForecastDailyInformationNuggetJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * ShowWeatherForecastDailyInformationNuggetJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasAlerts(void) const
  {
    return flagHasAlerts;
  }

size_t ShowWeatherForecastDailyInformationNuggetJSON::countOfAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts.size();
  }

AlertJSON * ShowWeatherForecastDailyInformationNuggetJSON::elementOfAlerts(size_t element_num)
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

const AlertJSON * ShowWeatherForecastDailyInformationNuggetJSON::elementOfAlerts(size_t element_num) const
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

std::vector< AlertJSON * > ShowWeatherForecastDailyInformationNuggetJSON::getAlerts(void)
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

const std::vector< AlertJSON * > ShowWeatherForecastDailyInformationNuggetJSON::getAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string ShowWeatherForecastDailyInformationNuggetJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string ShowWeatherForecastDailyInformationNuggetJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasRequestedAttributeAction(void) const
  {
    return flagHasRequestedAttributeAction;
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction ShowWeatherForecastDailyInformationNuggetJSON::getRequestedAttributeAction(void)
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const ShowWeatherForecastDailyInformationNuggetJSON::TypeRequestedAttributeAction ShowWeatherForecastDailyInformationNuggetJSON::getRequestedAttributeAction(void) const
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const char *ShowWeatherForecastDailyInformationNuggetJSON::getRequestedAttributeActionAsChars(void) const
  {
    TypeRequestedAttributeAction result = getRequestedAttributeAction();
    if (result.in_known_list)
        return stringFromRequestedAttributeAction(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string ShowWeatherForecastDailyInformationNuggetJSON::getRequestedAttributeActionAsString(void) const
  {
    return getRequestedAttributeActionAsChars();
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasIsSearchQuery(void) const
  {
    return flagHasIsSearchQuery;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::getIsSearchQuery(void)
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

const bool ShowWeatherForecastDailyInformationNuggetJSON::getIsSearchQuery(void) const
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasIsYesNoQuery(void) const
  {
    return flagHasIsYesNoQuery;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::getIsYesNoQuery(void)
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

const bool ShowWeatherForecastDailyInformationNuggetJSON::getIsYesNoQuery(void) const
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasSearchResults(void) const
  {
    return flagHasSearchResults;
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON * ShowWeatherForecastDailyInformationNuggetJSON::getSearchResults(void)
  {
    assert(flagHasSearchResults);
    return storeSearchResults;
  }

const ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON * ShowWeatherForecastDailyInformationNuggetJSON::getSearchResults(void) const
  {
    assert(flagHasSearchResults);
    return storeSearchResults;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasStartDateAndTime(void) const
  {
    return flagHasStartDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherForecastDailyInformationNuggetJSON::getStartDateAndTime(void)
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherForecastDailyInformationNuggetJSON::getStartDateAndTime(void) const
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasEndDateAndTime(void) const
  {
    return flagHasEndDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherForecastDailyInformationNuggetJSON::getEndDateAndTime(void)
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherForecastDailyInformationNuggetJSON::getEndDateAndTime(void) const
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasStartDateTimeSpec(void) const
  {
    return flagHasStartDateTimeSpec;
  }

DateTimeSpecJSON * ShowWeatherForecastDailyInformationNuggetJSON::getStartDateTimeSpec(void)
  {
    assert(flagHasStartDateTimeSpec);
    return storeStartDateTimeSpec;
  }

const DateTimeSpecJSON * ShowWeatherForecastDailyInformationNuggetJSON::getStartDateTimeSpec(void) const
  {
    assert(flagHasStartDateTimeSpec);
    return storeStartDateTimeSpec;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasEndDateTimeSpec(void) const
  {
    return flagHasEndDateTimeSpec;
  }

DateTimeSpecJSON * ShowWeatherForecastDailyInformationNuggetJSON::getEndDateTimeSpec(void)
  {
    assert(flagHasEndDateTimeSpec);
    return storeEndDateTimeSpec;
  }

const DateTimeSpecJSON * ShowWeatherForecastDailyInformationNuggetJSON::getEndDateTimeSpec(void) const
  {
    assert(flagHasEndDateTimeSpec);
    return storeEndDateTimeSpec;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasDailyForecasts(void) const
  {
    return flagHasDailyForecasts;
  }

size_t ShowWeatherForecastDailyInformationNuggetJSON::countOfDailyForecasts(void) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts.size();
  }

DailyForecastJSON * ShowWeatherForecastDailyInformationNuggetJSON::elementOfDailyForecasts(size_t element_num)
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts[element_num];
  }

const DailyForecastJSON * ShowWeatherForecastDailyInformationNuggetJSON::elementOfDailyForecasts(size_t element_num) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts[element_num];
  }

std::vector< DailyForecastJSON * > ShowWeatherForecastDailyInformationNuggetJSON::getDailyForecasts(void)
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts;
  }

const std::vector< DailyForecastJSON * > ShowWeatherForecastDailyInformationNuggetJSON::getDailyForecasts(void) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasPlanner(void) const
  {
    return flagHasPlanner;
  }

PlannerJSON * ShowWeatherForecastDailyInformationNuggetJSON::getPlanner(void)
  {
    assert(flagHasPlanner);
    return storePlanner;
  }

const PlannerJSON * ShowWeatherForecastDailyInformationNuggetJSON::getPlanner(void) const
  {
    assert(flagHasPlanner);
    return storePlanner;
  }

bool ShowWeatherForecastDailyInformationNuggetJSON::hasCurrentConditions(void) const
  {
    return flagHasCurrentConditions;
  }

CurrentConditionsJSON * ShowWeatherForecastDailyInformationNuggetJSON::getCurrentConditions(void)
  {
    assert(flagHasCurrentConditions);
    return storeCurrentConditions;
  }

const CurrentConditionsJSON * ShowWeatherForecastDailyInformationNuggetJSON::getCurrentConditions(void) const
  {
    assert(flagHasCurrentConditions);
    return storeCurrentConditions;
  }

ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON *ShowWeatherForecastDailyInformationNuggetJSON::TypeSearchResultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSearchResultsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSearchResultsJSON>, TypeSearchResultsJSON *, bool> generator("Type TypeSearchResults", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherForecastDailyInformationNuggetJSON *ShowWeatherForecastDailyInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowWeatherForecastDailyInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowWeatherForecastDailyInformationNuggetJSON>, ShowWeatherForecastDailyInformationNuggetJSON *, bool> generator("Type ShowWeatherForecastDailyInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
