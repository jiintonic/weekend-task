/* file "WeatherInformationNuggetIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WeatherInformationNuggetIntentJSON.h"

#include "WeatherInformationNuggetIntentJSON.h"


WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(void)
  {
  }

WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(const TypeRequestedAttributeAction &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(TypeRequestedAttributeActionKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator==(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator!=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator==(other));
  }

bool WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator<(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator>(const TypeRequestedAttributeAction &other) const
  {
    return other.operator<(*this);
  }

bool WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator>=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator<(other));
  }

bool WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator<=(const TypeRequestedAttributeAction &other) const
  {
    return !(other.operator<(*this));
  }

WeatherInformationNuggetIntentJSON::TypeRequestedAttributeActionKnownValues WeatherInformationNuggetIntentJSON::stringToRequestedAttributeAction(const char *chars)
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

const char *WeatherInformationNuggetIntentJSON::stringFromRequestedAttributeAction(TypeRequestedAttributeActionKnownValues the_enum)
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

WeatherInformationNuggetIntentJSON::WeatherInformationNuggetIntentJSON(const WeatherInformationNuggetIntentJSON &)
  {
    assert(false);
  }

WeatherInformationNuggetIntentJSON &WeatherInformationNuggetIntentJSON::operator=(const WeatherInformationNuggetIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraWeatherIntentKindToJSON(void) const
  {
    JSONStringValue *generated_string_WeatherIntentKind = new JSONStringValue(storeWeatherIntentKind.c_str());
    return generated_string_WeatherIntentKind;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraWeatherQueryTypeToJSON(void) const
  {
    JSONStringValue *generated_string_WeatherQueryType = new JSONStringValue(storeWeatherQueryType.c_str());
    return generated_string_WeatherQueryType;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraRequestedAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttribute = new JSONStringValue(storeRequestedAttribute.c_str());
    return generated_string_RequestedAttribute;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraRequestedAttributeActionToJSON(void) const
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

JSONValue *WeatherInformationNuggetIntentJSON::extraIsSearchQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsSearchQuery = (storeIsSearchQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsSearchQuery;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraMapLocationToJSON(void) const
  {
    JSONValueHandler handler_MapLocation;
    storeMapLocation->write_as_json(&handler_MapLocation);
    handler_MapLocation.result->add_reference();
    return handler_MapLocation.result;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraDateTimeRangeToJSON(void) const
  {
    JSONValueHandler handler_DateTimeRange;
    storeDateTimeRange->write_as_json(&handler_DateTimeRange);
    handler_DateTimeRange.result->add_reference();
    return handler_DateTimeRange.result;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraUnitsToJSON(void) const
  {
    JSONStringValue *generated_string_Units = new JSONStringValue(storeUnits.c_str());
    return generated_string_Units;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraIsYesNoQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsYesNoQuery = (storeIsYesNoQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsYesNoQuery;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraDailyForecastExplicitlyRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_DailyForecastExplicitlyRequested = (storeDailyForecastExplicitlyRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DailyForecastExplicitlyRequested;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraHourlyForecastExplicitlyRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_HourlyForecastExplicitlyRequested = (storeHourlyForecastExplicitlyRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_HourlyForecastExplicitlyRequested;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraDisplayDailyToJSON(void) const
  {
    JSONValue *generated_boolean_DisplayDaily = (storeDisplayDaily ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DisplayDaily;
  }

JSONValue *WeatherInformationNuggetIntentJSON::extraDisplayHourlyToJSON(void) const
  {
    JSONValue *generated_boolean_DisplayHourly = (storeDisplayHourly ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DisplayHourly;
  }

void WeatherInformationNuggetIntentJSON::fromJSONWeatherIntentKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherIntentKind of WeatherInformationNuggetIntentJSON is not a string.");
    setWeatherIntentKind(std::string(json_string->getData()));
  }

void WeatherInformationNuggetIntentJSON::fromJSONWeatherQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherQueryType of WeatherInformationNuggetIntentJSON is not a string.");
    setWeatherQueryType(std::string(json_string->getData()));
  }

void WeatherInformationNuggetIntentJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of WeatherInformationNuggetIntentJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void WeatherInformationNuggetIntentJSON::fromJSONRequestedAttributeAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttributeAction of WeatherInformationNuggetIntentJSON is not a string.");
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

void WeatherInformationNuggetIntentJSON::fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsSearchQuery of WeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setIsSearchQuery(the_bool);
  }

void WeatherInformationNuggetIntentJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void WeatherInformationNuggetIntentJSON::fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void WeatherInformationNuggetIntentJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of WeatherInformationNuggetIntentJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void WeatherInformationNuggetIntentJSON::fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsYesNoQuery of WeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setIsYesNoQuery(the_bool);
  }

void WeatherInformationNuggetIntentJSON::fromJSONDailyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DailyForecastExplicitlyRequested of WeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setDailyForecastExplicitlyRequested(the_bool);
  }

void WeatherInformationNuggetIntentJSON::fromJSONHourlyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HourlyForecastExplicitlyRequested of WeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setHourlyForecastExplicitlyRequested(the_bool);
  }

void WeatherInformationNuggetIntentJSON::fromJSONDisplayDaily(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DisplayDaily of WeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setDisplayDaily(the_bool);
  }

void WeatherInformationNuggetIntentJSON::fromJSONDisplayHourly(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DisplayHourly of WeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setDisplayHourly(the_bool);
  }

WeatherInformationNuggetIntentJSON::WeatherInformationNuggetIntentJSON(void) :
        flagHasWeatherIntentKind(false),
        flagHasWeatherQueryType(false),
        flagHasRequestedAttribute(false),
        flagHasRequestedAttributeAction(false),
        flagHasIsSearchQuery(false),
        flagHasMapLocation(false),
        flagHasDateTimeRange(false),
        flagHasUnits(false),
        flagHasIsYesNoQuery(false),
        flagHasDailyForecastExplicitlyRequested(false),
        flagHasHourlyForecastExplicitlyRequested(false),
        flagHasDisplayDaily(false),
        flagHasDisplayHourly(false)
  {
    extraIndex = create_string_index();
  }

WeatherInformationNuggetIntentJSON::~WeatherInformationNuggetIntentJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasDateTimeRange)
      {
        storeDateTimeRange->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *WeatherInformationNuggetIntentJSON::getNuggetIntentKind(void) const
  {
    return "Weather";
  }

bool WeatherInformationNuggetIntentJSON::hasWeatherIntentKind(void) const
  {
    return flagHasWeatherIntentKind;
  }

std::string WeatherInformationNuggetIntentJSON::getWeatherIntentKind(void)
  {
    assert(flagHasWeatherIntentKind);
    return storeWeatherIntentKind;
  }

const std::string WeatherInformationNuggetIntentJSON::getWeatherIntentKind(void) const
  {
    assert(flagHasWeatherIntentKind);
    return storeWeatherIntentKind;
  }

bool WeatherInformationNuggetIntentJSON::hasWeatherQueryType(void) const
  {
    return flagHasWeatherQueryType;
  }

std::string WeatherInformationNuggetIntentJSON::getWeatherQueryType(void)
  {
    assert(flagHasWeatherQueryType);
    return storeWeatherQueryType;
  }

const std::string WeatherInformationNuggetIntentJSON::getWeatherQueryType(void) const
  {
    assert(flagHasWeatherQueryType);
    return storeWeatherQueryType;
  }

bool WeatherInformationNuggetIntentJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string WeatherInformationNuggetIntentJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string WeatherInformationNuggetIntentJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool WeatherInformationNuggetIntentJSON::hasRequestedAttributeAction(void) const
  {
    return flagHasRequestedAttributeAction;
  }

WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction WeatherInformationNuggetIntentJSON::getRequestedAttributeAction(void)
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const WeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction WeatherInformationNuggetIntentJSON::getRequestedAttributeAction(void) const
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const char *WeatherInformationNuggetIntentJSON::getRequestedAttributeActionAsChars(void) const
  {
    TypeRequestedAttributeAction result = getRequestedAttributeAction();
    if (result.in_known_list)
        return stringFromRequestedAttributeAction(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string WeatherInformationNuggetIntentJSON::getRequestedAttributeActionAsString(void) const
  {
    return getRequestedAttributeActionAsChars();
  }

bool WeatherInformationNuggetIntentJSON::hasIsSearchQuery(void) const
  {
    return flagHasIsSearchQuery;
  }

bool WeatherInformationNuggetIntentJSON::getIsSearchQuery(void)
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

const bool WeatherInformationNuggetIntentJSON::getIsSearchQuery(void) const
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

bool WeatherInformationNuggetIntentJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * WeatherInformationNuggetIntentJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * WeatherInformationNuggetIntentJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool WeatherInformationNuggetIntentJSON::hasDateTimeRange(void) const
  {
    return flagHasDateTimeRange;
  }

DateTimeRangeSpecJSON * WeatherInformationNuggetIntentJSON::getDateTimeRange(void)
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

const DateTimeRangeSpecJSON * WeatherInformationNuggetIntentJSON::getDateTimeRange(void) const
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

bool WeatherInformationNuggetIntentJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string WeatherInformationNuggetIntentJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string WeatherInformationNuggetIntentJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool WeatherInformationNuggetIntentJSON::hasIsYesNoQuery(void) const
  {
    return flagHasIsYesNoQuery;
  }

bool WeatherInformationNuggetIntentJSON::getIsYesNoQuery(void)
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

const bool WeatherInformationNuggetIntentJSON::getIsYesNoQuery(void) const
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

bool WeatherInformationNuggetIntentJSON::hasDailyForecastExplicitlyRequested(void) const
  {
    return flagHasDailyForecastExplicitlyRequested;
  }

bool WeatherInformationNuggetIntentJSON::getDailyForecastExplicitlyRequested(void)
  {
    assert(flagHasDailyForecastExplicitlyRequested);
    return storeDailyForecastExplicitlyRequested;
  }

const bool WeatherInformationNuggetIntentJSON::getDailyForecastExplicitlyRequested(void) const
  {
    assert(flagHasDailyForecastExplicitlyRequested);
    return storeDailyForecastExplicitlyRequested;
  }

bool WeatherInformationNuggetIntentJSON::hasHourlyForecastExplicitlyRequested(void) const
  {
    return flagHasHourlyForecastExplicitlyRequested;
  }

bool WeatherInformationNuggetIntentJSON::getHourlyForecastExplicitlyRequested(void)
  {
    assert(flagHasHourlyForecastExplicitlyRequested);
    return storeHourlyForecastExplicitlyRequested;
  }

const bool WeatherInformationNuggetIntentJSON::getHourlyForecastExplicitlyRequested(void) const
  {
    assert(flagHasHourlyForecastExplicitlyRequested);
    return storeHourlyForecastExplicitlyRequested;
  }

bool WeatherInformationNuggetIntentJSON::hasDisplayDaily(void) const
  {
    return flagHasDisplayDaily;
  }

bool WeatherInformationNuggetIntentJSON::getDisplayDaily(void)
  {
    assert(flagHasDisplayDaily);
    return storeDisplayDaily;
  }

const bool WeatherInformationNuggetIntentJSON::getDisplayDaily(void) const
  {
    assert(flagHasDisplayDaily);
    return storeDisplayDaily;
  }

bool WeatherInformationNuggetIntentJSON::hasDisplayHourly(void) const
  {
    return flagHasDisplayHourly;
  }

bool WeatherInformationNuggetIntentJSON::getDisplayHourly(void)
  {
    assert(flagHasDisplayHourly);
    return storeDisplayHourly;
  }

const bool WeatherInformationNuggetIntentJSON::getDisplayHourly(void) const
  {
    assert(flagHasDisplayHourly);
    return storeDisplayHourly;
  }

WeatherInformationNuggetIntentJSON *WeatherInformationNuggetIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WeatherInformationNuggetIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WeatherInformationNuggetIntentJSON>, WeatherInformationNuggetIntentJSON *, bool> generator("Type WeatherInformationNuggetIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
