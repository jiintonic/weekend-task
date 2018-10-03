/* file "HoundWeatherInformationNuggetIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HoundWeatherInformationNuggetIntentJSON.h"

#include "HoundWeatherInformationNuggetIntentJSON.h"


HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(void)
  {
  }

HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(const TypeRequestedAttributeAction &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::TypeRequestedAttributeAction(TypeRequestedAttributeActionKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator==(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator!=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator==(other));
  }

bool HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator<(const TypeRequestedAttributeAction &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator>(const TypeRequestedAttributeAction &other) const
  {
    return other.operator<(*this);
  }

bool HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator>=(const TypeRequestedAttributeAction &other) const
  {
    return !(operator<(other));
  }

bool HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction::operator<=(const TypeRequestedAttributeAction &other) const
  {
    return !(other.operator<(*this));
  }

HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeActionKnownValues HoundWeatherInformationNuggetIntentJSON::stringToRequestedAttributeAction(const char *chars)
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

const char *HoundWeatherInformationNuggetIntentJSON::stringFromRequestedAttributeAction(TypeRequestedAttributeActionKnownValues the_enum)
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

HoundWeatherInformationNuggetIntentJSON::HoundWeatherInformationNuggetIntentJSON(const HoundWeatherInformationNuggetIntentJSON &)
  {
    assert(false);
  }

HoundWeatherInformationNuggetIntentJSON &HoundWeatherInformationNuggetIntentJSON::operator=(const HoundWeatherInformationNuggetIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraWeatherIntentKindToJSON(void) const
  {
    JSONStringValue *generated_string_WeatherIntentKind = new JSONStringValue(storeWeatherIntentKind.c_str());
    return generated_string_WeatherIntentKind;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraWeatherQueryTypeToJSON(void) const
  {
    JSONStringValue *generated_string_WeatherQueryType = new JSONStringValue(storeWeatherQueryType.c_str());
    return generated_string_WeatherQueryType;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraRequestedAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttribute = new JSONStringValue(storeRequestedAttribute.c_str());
    return generated_string_RequestedAttribute;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraRequestedAttributeActionToJSON(void) const
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

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraIsSearchQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsSearchQuery = (storeIsSearchQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsSearchQuery;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraMapLocationToJSON(void) const
  {
    JSONValueHandler handler_MapLocation;
    storeMapLocation->write_as_json(&handler_MapLocation);
    handler_MapLocation.result->add_reference();
    return handler_MapLocation.result;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraDateTimeRangeToJSON(void) const
  {
    JSONValueHandler handler_DateTimeRange;
    storeDateTimeRange->write_as_json(&handler_DateTimeRange);
    handler_DateTimeRange.result->add_reference();
    return handler_DateTimeRange.result;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraUnitsToJSON(void) const
  {
    JSONStringValue *generated_string_Units = new JSONStringValue(storeUnits.c_str());
    return generated_string_Units;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraIsYesNoQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsYesNoQuery = (storeIsYesNoQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsYesNoQuery;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraDailyForecastExplicitlyRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_DailyForecastExplicitlyRequested = (storeDailyForecastExplicitlyRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DailyForecastExplicitlyRequested;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraHourlyForecastExplicitlyRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_HourlyForecastExplicitlyRequested = (storeHourlyForecastExplicitlyRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_HourlyForecastExplicitlyRequested;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraDisplayDailyToJSON(void) const
  {
    JSONValue *generated_boolean_DisplayDaily = (storeDisplayDaily ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DisplayDaily;
  }

JSONValue *HoundWeatherInformationNuggetIntentJSON::extraDisplayHourlyToJSON(void) const
  {
    JSONValue *generated_boolean_DisplayHourly = (storeDisplayHourly ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DisplayHourly;
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONWeatherIntentKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherIntentKind of HoundWeatherInformationNuggetIntentJSON is not a string.");
    setWeatherIntentKind(std::string(json_string->getData()));
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONWeatherQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherQueryType of HoundWeatherInformationNuggetIntentJSON is not a string.");
    setWeatherQueryType(std::string(json_string->getData()));
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of HoundWeatherInformationNuggetIntentJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONRequestedAttributeAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttributeAction of HoundWeatherInformationNuggetIntentJSON is not a string.");
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

void HoundWeatherInformationNuggetIntentJSON::fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsSearchQuery of HoundWeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setIsSearchQuery(the_bool);
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of HoundWeatherInformationNuggetIntentJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsYesNoQuery of HoundWeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setIsYesNoQuery(the_bool);
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONDailyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DailyForecastExplicitlyRequested of HoundWeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setDailyForecastExplicitlyRequested(the_bool);
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONHourlyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HourlyForecastExplicitlyRequested of HoundWeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setHourlyForecastExplicitlyRequested(the_bool);
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONDisplayDaily(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DisplayDaily of HoundWeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setDisplayDaily(the_bool);
  }

void HoundWeatherInformationNuggetIntentJSON::fromJSONDisplayHourly(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DisplayHourly of HoundWeatherInformationNuggetIntentJSON is not true for false.");
          }
      }
    setDisplayHourly(the_bool);
  }

HoundWeatherInformationNuggetIntentJSON::HoundWeatherInformationNuggetIntentJSON(void) :
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

HoundWeatherInformationNuggetIntentJSON::~HoundWeatherInformationNuggetIntentJSON(void)
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

const char *HoundWeatherInformationNuggetIntentJSON::getNuggetIntentKind(void) const
  {
    return "HoundWeather";
  }

bool HoundWeatherInformationNuggetIntentJSON::hasWeatherIntentKind(void) const
  {
    return flagHasWeatherIntentKind;
  }

std::string HoundWeatherInformationNuggetIntentJSON::getWeatherIntentKind(void)
  {
    assert(flagHasWeatherIntentKind);
    return storeWeatherIntentKind;
  }

const std::string HoundWeatherInformationNuggetIntentJSON::getWeatherIntentKind(void) const
  {
    assert(flagHasWeatherIntentKind);
    return storeWeatherIntentKind;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasWeatherQueryType(void) const
  {
    return flagHasWeatherQueryType;
  }

std::string HoundWeatherInformationNuggetIntentJSON::getWeatherQueryType(void)
  {
    assert(flagHasWeatherQueryType);
    return storeWeatherQueryType;
  }

const std::string HoundWeatherInformationNuggetIntentJSON::getWeatherQueryType(void) const
  {
    assert(flagHasWeatherQueryType);
    return storeWeatherQueryType;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string HoundWeatherInformationNuggetIntentJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string HoundWeatherInformationNuggetIntentJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasRequestedAttributeAction(void) const
  {
    return flagHasRequestedAttributeAction;
  }

HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction HoundWeatherInformationNuggetIntentJSON::getRequestedAttributeAction(void)
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const HoundWeatherInformationNuggetIntentJSON::TypeRequestedAttributeAction HoundWeatherInformationNuggetIntentJSON::getRequestedAttributeAction(void) const
  {
    assert(flagHasRequestedAttributeAction);
    return storeRequestedAttributeAction;
  }

const char *HoundWeatherInformationNuggetIntentJSON::getRequestedAttributeActionAsChars(void) const
  {
    TypeRequestedAttributeAction result = getRequestedAttributeAction();
    if (result.in_known_list)
        return stringFromRequestedAttributeAction(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HoundWeatherInformationNuggetIntentJSON::getRequestedAttributeActionAsString(void) const
  {
    return getRequestedAttributeActionAsChars();
  }

bool HoundWeatherInformationNuggetIntentJSON::hasIsSearchQuery(void) const
  {
    return flagHasIsSearchQuery;
  }

bool HoundWeatherInformationNuggetIntentJSON::getIsSearchQuery(void)
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

const bool HoundWeatherInformationNuggetIntentJSON::getIsSearchQuery(void) const
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * HoundWeatherInformationNuggetIntentJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * HoundWeatherInformationNuggetIntentJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasDateTimeRange(void) const
  {
    return flagHasDateTimeRange;
  }

DateTimeRangeSpecJSON * HoundWeatherInformationNuggetIntentJSON::getDateTimeRange(void)
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

const DateTimeRangeSpecJSON * HoundWeatherInformationNuggetIntentJSON::getDateTimeRange(void) const
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string HoundWeatherInformationNuggetIntentJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string HoundWeatherInformationNuggetIntentJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasIsYesNoQuery(void) const
  {
    return flagHasIsYesNoQuery;
  }

bool HoundWeatherInformationNuggetIntentJSON::getIsYesNoQuery(void)
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

const bool HoundWeatherInformationNuggetIntentJSON::getIsYesNoQuery(void) const
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasDailyForecastExplicitlyRequested(void) const
  {
    return flagHasDailyForecastExplicitlyRequested;
  }

bool HoundWeatherInformationNuggetIntentJSON::getDailyForecastExplicitlyRequested(void)
  {
    assert(flagHasDailyForecastExplicitlyRequested);
    return storeDailyForecastExplicitlyRequested;
  }

const bool HoundWeatherInformationNuggetIntentJSON::getDailyForecastExplicitlyRequested(void) const
  {
    assert(flagHasDailyForecastExplicitlyRequested);
    return storeDailyForecastExplicitlyRequested;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasHourlyForecastExplicitlyRequested(void) const
  {
    return flagHasHourlyForecastExplicitlyRequested;
  }

bool HoundWeatherInformationNuggetIntentJSON::getHourlyForecastExplicitlyRequested(void)
  {
    assert(flagHasHourlyForecastExplicitlyRequested);
    return storeHourlyForecastExplicitlyRequested;
  }

const bool HoundWeatherInformationNuggetIntentJSON::getHourlyForecastExplicitlyRequested(void) const
  {
    assert(flagHasHourlyForecastExplicitlyRequested);
    return storeHourlyForecastExplicitlyRequested;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasDisplayDaily(void) const
  {
    return flagHasDisplayDaily;
  }

bool HoundWeatherInformationNuggetIntentJSON::getDisplayDaily(void)
  {
    assert(flagHasDisplayDaily);
    return storeDisplayDaily;
  }

const bool HoundWeatherInformationNuggetIntentJSON::getDisplayDaily(void) const
  {
    assert(flagHasDisplayDaily);
    return storeDisplayDaily;
  }

bool HoundWeatherInformationNuggetIntentJSON::hasDisplayHourly(void) const
  {
    return flagHasDisplayHourly;
  }

bool HoundWeatherInformationNuggetIntentJSON::getDisplayHourly(void)
  {
    assert(flagHasDisplayHourly);
    return storeDisplayHourly;
  }

const bool HoundWeatherInformationNuggetIntentJSON::getDisplayHourly(void) const
  {
    assert(flagHasDisplayHourly);
    return storeDisplayHourly;
  }

HoundWeatherInformationNuggetIntentJSON *HoundWeatherInformationNuggetIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HoundWeatherInformationNuggetIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HoundWeatherInformationNuggetIntentJSON>, HoundWeatherInformationNuggetIntentJSON *, bool> generator("Type HoundWeatherInformationNuggetIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
