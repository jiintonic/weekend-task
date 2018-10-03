/* file "ShowWeatherForecastHourlyInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowWeatherForecastHourlyInformationNuggetJSON.h"

#include "ShowWeatherForecastHourlyInformationNuggetJSON.h"


ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(void)
  {
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(const TypeRequestedAttributeAction &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(TypeRequestedAttributeActionKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::operator==(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::operator!=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator==(other));
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::operator<(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::operator>(const TypeRequestedAttributeAction &other) const
  {
    return other.operator<(*this);
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::operator>=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator<(other));
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction::operator<=(const TypeRequestedAttributeAction &other) const
  {
    return !(other.operator<(*this));
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeActionKnownValues ShowWeatherForecastHourlyInformationNuggetJSON::stringToRequestedAttributeAction(const char *chars)
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

const char *ShowWeatherForecastHourlyInformationNuggetJSON::stringFromRequestedAttributeAction(TypeRequestedAttributeActionKnownValues the_enum)
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

ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::TypeSearchResultsJSON(const TypeSearchResultsJSON &)
  {
    assert(false);
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON &ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::operator=(const TypeSearchResultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::fromJSONFirstForecastDateAndOrTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFirstForecastDateAndOrTime(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::TypeSearchResultsJSON(void) :
        flagHasFirstForecastDateAndOrTime(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::~TypeSearchResultsJSON(void)
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

bool ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::hasFirstForecastDateAndOrTime(void) const
  {
    return flagHasFirstForecastDateAndOrTime;
  }

DateAndOrTimeJSON * ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::getFirstForecastDateAndOrTime(void)
  {
    assert(flagHasFirstForecastDateAndOrTime);
    return storeFirstForecastDateAndOrTime;
  }

const DateAndOrTimeJSON * ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::getFirstForecastDateAndOrTime(void) const
  {
    assert(flagHasFirstForecastDateAndOrTime);
    return storeFirstForecastDateAndOrTime;
  }

ShowWeatherForecastHourlyInformationNuggetJSON::ShowWeatherForecastHourlyInformationNuggetJSON(const ShowWeatherForecastHourlyInformationNuggetJSON &)
  {
    assert(false);
  }

ShowWeatherForecastHourlyInformationNuggetJSON &ShowWeatherForecastHourlyInformationNuggetJSON::operator=(const ShowWeatherForecastHourlyInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraAlertsToJSON(void) const
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

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraRequestedAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttribute = new JSONStringValue(storeRequestedAttribute.c_str());
    return generated_string_RequestedAttribute;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraRequestedAttributeActionToJSON(void) const
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

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraIsSearchQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsSearchQuery = (storeIsSearchQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsSearchQuery;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraIsYesNoQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsYesNoQuery = (storeIsYesNoQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsYesNoQuery;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraSearchResultsToJSON(void) const
  {
    JSONValueHandler handler_SearchResults;
    storeSearchResults->write_as_json(&handler_SearchResults);
    handler_SearchResults.result->add_reference();
    return handler_SearchResults.result;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraStartDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_StartDateAndTime;
    storeStartDateAndTime->write_as_json(&handler_StartDateAndTime);
    handler_StartDateAndTime.result->add_reference();
    return handler_StartDateAndTime.result;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraEndDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_EndDateAndTime;
    storeEndDateAndTime->write_as_json(&handler_EndDateAndTime);
    handler_EndDateAndTime.result->add_reference();
    return handler_EndDateAndTime.result;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraDailyForecastsToJSON(void) const
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

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraHourlyForecastsToJSON(void) const
  {
    JSONArrayValue *generated_array_3_HourlyForecasts = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeHourlyForecasts.size(); ++num3)
      {
        JSONValueHandler handler_HourlyForecasts;
        storeHourlyForecasts[num3]->write_as_json(&handler_HourlyForecasts);
        handler_HourlyForecasts.result->add_reference();
        generated_array_3_HourlyForecasts->appendComponent(handler_HourlyForecasts.result);
        handler_HourlyForecasts.result->remove_reference();
      }
    return generated_array_3_HourlyForecasts;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraPlannerToJSON(void) const
  {
    JSONValueHandler handler_Planner;
    storePlanner->write_as_json(&handler_Planner);
    handler_Planner.result->add_reference();
    return handler_Planner.result;
  }

JSONValue *ShowWeatherForecastHourlyInformationNuggetJSON::extraCurrentConditionsToJSON(void) const
  {
    JSONValueHandler handler_CurrentConditions;
    storeCurrentConditions->write_as_json(&handler_CurrentConditions);
    handler_CurrentConditions.result->add_reference();
    return handler_CurrentConditions.result;
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONAlerts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Alerts of ShowWeatherForecastHourlyInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AlertJSON * > vector_Alerts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AlertJSON *convert_classy = AlertJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Alerts1[num1] = convert_classy;
      }
    initAlerts();
    for (size_t num4 = 0; num4 < vector_Alerts1.size(); ++num4)
        appendAlerts(vector_Alerts1[num4]);
    for (size_t num1 = 0; num1 < vector_Alerts1.size(); ++num1)
      {
        vector_Alerts1[num1]->remove_reference();
      }
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of ShowWeatherForecastHourlyInformationNuggetJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONRequestedAttributeAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttributeAction of ShowWeatherForecastHourlyInformationNuggetJSON is not a string.");
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

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsSearchQuery of ShowWeatherForecastHourlyInformationNuggetJSON is not true for false.");
          }
      }
    setIsSearchQuery(the_bool);
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsYesNoQuery of ShowWeatherForecastHourlyInformationNuggetJSON is not true for false.");
          }
      }
    setIsYesNoQuery(the_bool);
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONSearchResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSearchResultsJSON *convert_classy = TypeSearchResultsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchResults(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONDailyForecasts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DailyForecasts of ShowWeatherForecastHourlyInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DailyForecastJSON * > vector_DailyForecasts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DailyForecastJSON *convert_classy = DailyForecastJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DailyForecasts1[num1] = convert_classy;
      }
    initDailyForecasts();
    for (size_t num5 = 0; num5 < vector_DailyForecasts1.size(); ++num5)
        appendDailyForecasts(vector_DailyForecasts1[num5]);
    for (size_t num1 = 0; num1 < vector_DailyForecasts1.size(); ++num1)
      {
        vector_DailyForecasts1[num1]->remove_reference();
      }
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONHourlyForecasts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HourlyForecasts of ShowWeatherForecastHourlyInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HourlyForecastJSON * > vector_HourlyForecasts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HourlyForecastJSON *convert_classy = HourlyForecastJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_HourlyForecasts1[num1] = convert_classy;
      }
    initHourlyForecasts();
    for (size_t num6 = 0; num6 < vector_HourlyForecasts1.size(); ++num6)
        appendHourlyForecasts(vector_HourlyForecasts1[num6]);
    for (size_t num1 = 0; num1 < vector_HourlyForecasts1.size(); ++num1)
      {
        vector_HourlyForecasts1[num1]->remove_reference();
      }
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONPlanner(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PlannerJSON *convert_classy = PlannerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlanner(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherForecastHourlyInformationNuggetJSON::fromJSONCurrentConditions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CurrentConditionsJSON *convert_classy = CurrentConditionsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentConditions(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherForecastHourlyInformationNuggetJSON::ShowWeatherForecastHourlyInformationNuggetJSON(void) :
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
        flagHasDailyForecasts(false),
        flagHasHourlyForecasts(false),
        flagHasPlanner(false),
        flagHasCurrentConditions(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherForecastHourlyInformationNuggetJSON::~ShowWeatherForecastHourlyInformationNuggetJSON(void)
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
        for (size_t num10 = 0; num10 < storeAlerts.size(); ++num10)
          {
            storeAlerts[num10]->remove_reference();
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
    if (flagHasDailyForecasts)
      {
        for (size_t num11 = 0; num11 < storeDailyForecasts.size(); ++num11)
          {
            storeDailyForecasts[num11]->remove_reference();
          }
      }
    if (flagHasHourlyForecasts)
      {
        for (size_t num12 = 0; num12 < storeHourlyForecasts.size(); ++num12)
          {
            storeHourlyForecasts[num12]->remove_reference();
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

const char *ShowWeatherForecastHourlyInformationNuggetJSON::getWeatherNuggetKind(void) const
  {
    return "ShowWeatherForecastHourly";
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasAlerts(void) const
  {
    return flagHasAlerts;
  }

size_t ShowWeatherForecastHourlyInformationNuggetJSON::countOfAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts.size();
  }

AlertJSON * ShowWeatherForecastHourlyInformationNuggetJSON::elementOfAlerts(size_t element_num)
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

const AlertJSON * ShowWeatherForecastHourlyInformationNuggetJSON::elementOfAlerts(size_t element_num) const
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

std::vector< AlertJSON * > ShowWeatherForecastHourlyInformationNuggetJSON::getAlerts(void)
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

const std::vector< AlertJSON * > ShowWeatherForecastHourlyInformationNuggetJSON::getAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string ShowWeatherForecastHourlyInformationNuggetJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string ShowWeatherForecastHourlyInformationNuggetJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasRequestedAttributeAction(void) const
  {
    return flagHasRequestedAttributeAction;
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction ShowWeatherForecastHourlyInformationNuggetJSON::getRequestedAttributeAction(void)
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const ShowWeatherForecastHourlyInformationNuggetJSON::TypeRequestedAttributeAction ShowWeatherForecastHourlyInformationNuggetJSON::getRequestedAttributeAction(void) const
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const char *ShowWeatherForecastHourlyInformationNuggetJSON::getRequestedAttributeActionAsChars(void) const
  {
    TypeRequestedAttributeAction result = getRequestedAttributeAction();
    if (result.in_known_list)
        return stringFromRequestedAttributeAction(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string ShowWeatherForecastHourlyInformationNuggetJSON::getRequestedAttributeActionAsString(void) const
  {
    return getRequestedAttributeActionAsChars();
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasIsSearchQuery(void) const
  {
    return flagHasIsSearchQuery;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::getIsSearchQuery(void)
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

const bool ShowWeatherForecastHourlyInformationNuggetJSON::getIsSearchQuery(void) const
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasIsYesNoQuery(void) const
  {
    return flagHasIsYesNoQuery;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::getIsYesNoQuery(void)
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

const bool ShowWeatherForecastHourlyInformationNuggetJSON::getIsYesNoQuery(void) const
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasSearchResults(void) const
  {
    return flagHasSearchResults;
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getSearchResults(void)
  {
    assert(flagHasSearchResults);
    return storeSearchResults;
  }

const ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getSearchResults(void) const
  {
    assert(flagHasSearchResults);
    return storeSearchResults;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasStartDateAndTime(void) const
  {
    return flagHasStartDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getStartDateAndTime(void)
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getStartDateAndTime(void) const
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasEndDateAndTime(void) const
  {
    return flagHasEndDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getEndDateAndTime(void)
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getEndDateAndTime(void) const
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasDailyForecasts(void) const
  {
    return flagHasDailyForecasts;
  }

size_t ShowWeatherForecastHourlyInformationNuggetJSON::countOfDailyForecasts(void) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts.size();
  }

DailyForecastJSON * ShowWeatherForecastHourlyInformationNuggetJSON::elementOfDailyForecasts(size_t element_num)
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts[element_num];
  }

const DailyForecastJSON * ShowWeatherForecastHourlyInformationNuggetJSON::elementOfDailyForecasts(size_t element_num) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts[element_num];
  }

std::vector< DailyForecastJSON * > ShowWeatherForecastHourlyInformationNuggetJSON::getDailyForecasts(void)
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts;
  }

const std::vector< DailyForecastJSON * > ShowWeatherForecastHourlyInformationNuggetJSON::getDailyForecasts(void) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasHourlyForecasts(void) const
  {
    return flagHasHourlyForecasts;
  }

size_t ShowWeatherForecastHourlyInformationNuggetJSON::countOfHourlyForecasts(void) const
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts.size();
  }

HourlyForecastJSON * ShowWeatherForecastHourlyInformationNuggetJSON::elementOfHourlyForecasts(size_t element_num)
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts[element_num];
  }

const HourlyForecastJSON * ShowWeatherForecastHourlyInformationNuggetJSON::elementOfHourlyForecasts(size_t element_num) const
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts[element_num];
  }

std::vector< HourlyForecastJSON * > ShowWeatherForecastHourlyInformationNuggetJSON::getHourlyForecasts(void)
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts;
  }

const std::vector< HourlyForecastJSON * > ShowWeatherForecastHourlyInformationNuggetJSON::getHourlyForecasts(void) const
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasPlanner(void) const
  {
    return flagHasPlanner;
  }

PlannerJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getPlanner(void)
  {
    assert(flagHasPlanner);
    return storePlanner;
  }

const PlannerJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getPlanner(void) const
  {
    assert(flagHasPlanner);
    return storePlanner;
  }

bool ShowWeatherForecastHourlyInformationNuggetJSON::hasCurrentConditions(void) const
  {
    return flagHasCurrentConditions;
  }

CurrentConditionsJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getCurrentConditions(void)
  {
    assert(flagHasCurrentConditions);
    return storeCurrentConditions;
  }

const CurrentConditionsJSON * ShowWeatherForecastHourlyInformationNuggetJSON::getCurrentConditions(void) const
  {
    assert(flagHasCurrentConditions);
    return storeCurrentConditions;
  }

ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON *ShowWeatherForecastHourlyInformationNuggetJSON::TypeSearchResultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherForecastHourlyInformationNuggetJSON *ShowWeatherForecastHourlyInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowWeatherForecastHourlyInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowWeatherForecastHourlyInformationNuggetJSON>, ShowWeatherForecastHourlyInformationNuggetJSON *, bool> generator("Type ShowWeatherForecastHourlyInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
