/* file "HoundWeatherInformationNuggetIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOUNDWEATHERINFORMATIONNUGGETINTENTJSON_H
#define HOUNDWEATHERINFORMATIONNUGGETINTENTJSON_H

#pragma interface

#include "InformationNuggetIntentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HoundWeatherInformationNuggetIntentJSON : public InformationNuggetIntentJSON
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

  private:
    bool flagHasWeatherIntentKind;
    std::string storeWeatherIntentKind;
    bool flagHasWeatherQueryType;
    std::string storeWeatherQueryType;
    bool flagHasRequestedAttribute;
    std::string storeRequestedAttribute;
    bool flagHasRequestedAttributeAction;
    TypeRequestedAttributeAction storeRequestedAttributeAction;
    bool flagHasIsSearchQuery;
    bool storeIsSearchQuery;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasDateTimeRange;
    DateTimeRangeSpecJSON * storeDateTimeRange;
    bool flagHasUnits;
    std::string storeUnits;
    bool flagHasIsYesNoQuery;
    bool storeIsYesNoQuery;
    bool flagHasDailyForecastExplicitlyRequested;
    bool storeDailyForecastExplicitlyRequested;
    bool flagHasHourlyForecastExplicitlyRequested;
    bool storeHourlyForecastExplicitlyRequested;
    bool flagHasDisplayDaily;
    bool storeDisplayDaily;
    bool flagHasDisplayHourly;
    bool storeDisplayHourly;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HoundWeatherInformationNuggetIntentJSON(const HoundWeatherInformationNuggetIntentJSON &);
    HoundWeatherInformationNuggetIntentJSON & operator=(const HoundWeatherInformationNuggetIntentJSON &other);

    JSONValue * extraWeatherIntentKindToJSON(void) const;
    JSONValue * extraWeatherQueryTypeToJSON(void) const;
    JSONValue * extraRequestedAttributeToJSON(void) const;
    JSONValue * extraRequestedAttributeActionToJSON(void) const;
    JSONValue * extraIsSearchQueryToJSON(void) const;
    JSONValue * extraMapLocationToJSON(void) const;
    JSONValue * extraDateTimeRangeToJSON(void) const;
    JSONValue * extraUnitsToJSON(void) const;
    JSONValue * extraIsYesNoQueryToJSON(void) const;
    JSONValue * extraDailyForecastExplicitlyRequestedToJSON(void) const;
    JSONValue * extraHourlyForecastExplicitlyRequestedToJSON(void) const;
    JSONValue * extraDisplayDailyToJSON(void) const;
    JSONValue * extraDisplayHourlyToJSON(void) const;

    void  fromJSONWeatherIntentKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeatherQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttributeAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDailyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHourlyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayDaily(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayHourly(JSONValue *json_value, bool ignore_extras = false);


  public:
    HoundWeatherInformationNuggetIntentJSON(void);
    virtual ~HoundWeatherInformationNuggetIntentJSON(void);
    const char * getNuggetIntentKind(void) const;
    bool  hasWeatherIntentKind(void) const;
    std::string  getWeatherIntentKind(void);
    const std::string  getWeatherIntentKind(void) const;
    bool  hasWeatherQueryType(void) const;
    std::string  getWeatherQueryType(void);
    const std::string  getWeatherQueryType(void) const;
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
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getDateTimeRange(void) const;
    bool  hasUnits(void) const;
    std::string  getUnits(void);
    const std::string  getUnits(void) const;
    bool  hasIsYesNoQuery(void) const;
    bool  getIsYesNoQuery(void);
    const bool  getIsYesNoQuery(void) const;
    bool  hasDailyForecastExplicitlyRequested(void) const;
    bool  getDailyForecastExplicitlyRequested(void);
    const bool  getDailyForecastExplicitlyRequested(void) const;
    bool  hasHourlyForecastExplicitlyRequested(void) const;
    bool  getHourlyForecastExplicitlyRequested(void);
    const bool  getHourlyForecastExplicitlyRequested(void) const;
    bool  hasDisplayDaily(void) const;
    bool  getDisplayDaily(void);
    const bool  getDisplayDaily(void) const;
    bool  hasDisplayHourly(void) const;
    bool  getDisplayHourly(void);
    const bool  getDisplayHourly(void) const;

    virtual size_t extraHoundWeatherInformationNuggetIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHoundWeatherInformationNuggetIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHoundWeatherInformationNuggetIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHoundWeatherInformationNuggetIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHoundWeatherInformationNuggetIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHoundWeatherInformationNuggetIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetIntentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasWeatherIntentKind)
            ++result;
        if (flagHasWeatherQueryType)
            ++result;
        if (flagHasRequestedAttribute)
            ++result;
        if (flagHasRequestedAttributeAction)
            ++result;
        if (flagHasIsSearchQuery)
            ++result;
        if (flagHasMapLocation)
            ++result;
        if (flagHasDateTimeRange)
            ++result;
        if (flagHasUnits)
            ++result;
        if (flagHasIsYesNoQuery)
            ++result;
        if (flagHasDailyForecastExplicitlyRequested)
            ++result;
        if (flagHasHourlyForecastExplicitlyRequested)
            ++result;
        if (flagHasDisplayDaily)
            ++result;
        if (flagHasDisplayHourly)
            ++result;
        result += extraHoundWeatherInformationNuggetIntentComponentCount();
        return result;
      }
    const char *extraInformationNuggetIntentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasWeatherIntentKind)
          {
            if (remainder == 0)
                return "WeatherIntentKind";
            --remainder;
          }
        if (flagHasWeatherQueryType)
          {
            if (remainder == 0)
                return "WeatherQueryType";
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
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return "MapLocation";
            --remainder;
          }
        if (flagHasDateTimeRange)
          {
            if (remainder == 0)
                return "DateTimeRange";
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return "Units";
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return "IsYesNoQuery";
            --remainder;
          }
        if (flagHasDailyForecastExplicitlyRequested)
          {
            if (remainder == 0)
                return "DailyForecastExplicitlyRequested";
            --remainder;
          }
        if (flagHasHourlyForecastExplicitlyRequested)
          {
            if (remainder == 0)
                return "HourlyForecastExplicitlyRequested";
            --remainder;
          }
        if (flagHasDisplayDaily)
          {
            if (remainder == 0)
                return "DisplayDaily";
            --remainder;
          }
        if (flagHasDisplayHourly)
          {
            if (remainder == 0)
                return "DisplayHourly";
            --remainder;
          }
        return extraHoundWeatherInformationNuggetIntentComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetIntentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasWeatherIntentKind)
          {
            if (remainder == 0)
                return extraWeatherIntentKindToJSON();
            --remainder;
          }
        if (flagHasWeatherQueryType)
          {
            if (remainder == 0)
                return extraWeatherQueryTypeToJSON();
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
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        if (flagHasDateTimeRange)
          {
            if (remainder == 0)
                return extraDateTimeRangeToJSON();
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return extraUnitsToJSON();
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return extraIsYesNoQueryToJSON();
            --remainder;
          }
        if (flagHasDailyForecastExplicitlyRequested)
          {
            if (remainder == 0)
                return extraDailyForecastExplicitlyRequestedToJSON();
            --remainder;
          }
        if (flagHasHourlyForecastExplicitlyRequested)
          {
            if (remainder == 0)
                return extraHourlyForecastExplicitlyRequestedToJSON();
            --remainder;
          }
        if (flagHasDisplayDaily)
          {
            if (remainder == 0)
                return extraDisplayDailyToJSON();
            --remainder;
          }
        if (flagHasDisplayHourly)
          {
            if (remainder == 0)
                return extraDisplayHourlyToJSON();
            --remainder;
          }
        return extraHoundWeatherInformationNuggetIntentComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetIntentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasWeatherIntentKind)
          {
            if (remainder == 0)
                return extraWeatherIntentKindToJSON();
            --remainder;
          }
        if (flagHasWeatherQueryType)
          {
            if (remainder == 0)
                return extraWeatherQueryTypeToJSON();
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
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        if (flagHasDateTimeRange)
          {
            if (remainder == 0)
                return extraDateTimeRangeToJSON();
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return extraUnitsToJSON();
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return extraIsYesNoQueryToJSON();
            --remainder;
          }
        if (flagHasDailyForecastExplicitlyRequested)
          {
            if (remainder == 0)
                return extraDailyForecastExplicitlyRequestedToJSON();
            --remainder;
          }
        if (flagHasHourlyForecastExplicitlyRequested)
          {
            if (remainder == 0)
                return extraHourlyForecastExplicitlyRequestedToJSON();
            --remainder;
          }
        if (flagHasDisplayDaily)
          {
            if (remainder == 0)
                return extraDisplayDailyToJSON();
            --remainder;
          }
        if (flagHasDisplayHourly)
          {
            if (remainder == 0)
                return extraDisplayHourlyToJSON();
            --remainder;
          }
        return extraHoundWeatherInformationNuggetIntentComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetIntentLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "lyForecastExplicitlyRequested") == 0)
                                    return (flagHasDailyForecastExplicitlyRequested ? extraDailyForecastExplicitlyRequestedToJSON() : NULL);
                                break;
                            case 't':
                                if (strcmp(&(field_name[3]), "eTimeRange") == 0)
                                    return (flagHasDateTimeRange ? extraDateTimeRangeToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'i':
                        if (strncmp(&(field_name[2]), "splay", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[8]), "aily") == 0)
                                        return (flagHasDisplayDaily ? extraDisplayDailyToJSON() : NULL);
                                    break;
                                case 'H':
                                    if (strcmp(&(field_name[8]), "ourly") == 0)
                                        return (flagHasDisplayHourly ? extraDisplayHourlyToJSON() : NULL);
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
            case 'H':
                if (strcmp(&(field_name[1]), "ourlyForecastExplicitlyRequested") == 0)
                    return (flagHasHourlyForecastExplicitlyRequested ? extraHourlyForecastExplicitlyRequestedToJSON() : NULL);
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
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
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
            case 'U':
                if (strcmp(&(field_name[1]), "nits") == 0)
                    return (flagHasUnits ? extraUnitsToJSON() : NULL);
                break;
            case 'W':
                if (strncmp(&(field_name[1]), "eather", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[8]), "ntentKind") == 0)
                                return (flagHasWeatherIntentKind ? extraWeatherIntentKindToJSON() : NULL);
                            break;
                        case 'Q':
                            if (strcmp(&(field_name[8]), "ueryType") == 0)
                                return (flagHasWeatherQueryType ? extraWeatherQueryTypeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraHoundWeatherInformationNuggetIntentLookup(field_name);
      }
    const JSONValue *extraInformationNuggetIntentLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "lyForecastExplicitlyRequested") == 0)
                                    return (flagHasDailyForecastExplicitlyRequested ? extraDailyForecastExplicitlyRequestedToJSON() : NULL);
                                break;
                            case 't':
                                if (strcmp(&(field_name[3]), "eTimeRange") == 0)
                                    return (flagHasDateTimeRange ? extraDateTimeRangeToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'i':
                        if (strncmp(&(field_name[2]), "splay", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[8]), "aily") == 0)
                                        return (flagHasDisplayDaily ? extraDisplayDailyToJSON() : NULL);
                                    break;
                                case 'H':
                                    if (strcmp(&(field_name[8]), "ourly") == 0)
                                        return (flagHasDisplayHourly ? extraDisplayHourlyToJSON() : NULL);
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
            case 'H':
                if (strcmp(&(field_name[1]), "ourlyForecastExplicitlyRequested") == 0)
                    return (flagHasHourlyForecastExplicitlyRequested ? extraHourlyForecastExplicitlyRequestedToJSON() : NULL);
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
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
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
            case 'U':
                if (strcmp(&(field_name[1]), "nits") == 0)
                    return (flagHasUnits ? extraUnitsToJSON() : NULL);
                break;
            case 'W':
                if (strncmp(&(field_name[1]), "eather", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[8]), "ntentKind") == 0)
                                return (flagHasWeatherIntentKind ? extraWeatherIntentKindToJSON() : NULL);
                            break;
                        case 'Q':
                            if (strcmp(&(field_name[8]), "ueryType") == 0)
                                return (flagHasWeatherQueryType ? extraWeatherQueryTypeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraHoundWeatherInformationNuggetIntentLookup(field_name);
      }

    void setWeatherIntentKind(std::string new_value)
      {
        flagHasWeatherIntentKind = true;
        storeWeatherIntentKind = new_value;
      }
    void unsetWeatherIntentKind(void)
      {
        flagHasWeatherIntentKind = false;
      }
    void setWeatherQueryType(std::string new_value)
      {
        flagHasWeatherQueryType = true;
        storeWeatherQueryType = new_value;
      }
    void unsetWeatherQueryType(void)
      {
        flagHasWeatherQueryType = false;
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
    void setMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = true;
        storeMapLocation = new_value;
      }
    void unsetMapLocation(void)
      {
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = false;
      }
    void setDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = true;
        storeDateTimeRange = new_value;
      }
    void unsetDateTimeRange(void)
      {
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = false;
      }
    void setUnits(std::string new_value)
      {
        flagHasUnits = true;
        storeUnits = new_value;
      }
    void unsetUnits(void)
      {
        flagHasUnits = false;
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
    void setDailyForecastExplicitlyRequested(bool new_value)
      {
        flagHasDailyForecastExplicitlyRequested = true;
        storeDailyForecastExplicitlyRequested = new_value;
      }
    void unsetDailyForecastExplicitlyRequested(void)
      {
        flagHasDailyForecastExplicitlyRequested = false;
      }
    void setHourlyForecastExplicitlyRequested(bool new_value)
      {
        flagHasHourlyForecastExplicitlyRequested = true;
        storeHourlyForecastExplicitlyRequested = new_value;
      }
    void unsetHourlyForecastExplicitlyRequested(void)
      {
        flagHasHourlyForecastExplicitlyRequested = false;
      }
    void setDisplayDaily(bool new_value)
      {
        flagHasDisplayDaily = true;
        storeDisplayDaily = new_value;
      }
    void unsetDisplayDaily(void)
      {
        flagHasDisplayDaily = false;
      }
    void setDisplayHourly(bool new_value)
      {
        flagHasDisplayHourly = true;
        storeDisplayHourly = new_value;
      }
    void unsetDisplayHourly(void)
      {
        flagHasDisplayHourly = false;
      }

    virtual void extraHoundWeatherInformationNuggetIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHoundWeatherInformationNuggetIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHoundWeatherInformationNuggetIntentLookup(key);
        if (old_field == NULL)
          {
            extraHoundWeatherInformationNuggetIntentAppendPair(key, new_component);
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
    void extraInformationNuggetIntentAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(key[2]))
                          {
                            case 'i':
                                if (strcmp(&(key[3]), "lyForecastExplicitlyRequested") == 0)
                                    {
                                    fromJSONDailyForecastExplicitlyRequested(new_component, false);
                                    return;
                                    }
                                break;
                            case 't':
                                if (strcmp(&(key[3]), "eTimeRange") == 0)
                                    {
                                    fromJSONDateTimeRange(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'i':
                        if (strncmp(&(key[2]), "splay", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 'D':
                                    if (strcmp(&(key[8]), "aily") == 0)
                                        {
                                        fromJSONDisplayDaily(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'H':
                                    if (strcmp(&(key[8]), "ourly") == 0)
                                        {
                                        fromJSONDisplayHourly(new_component, false);
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
            case 'H':
                if (strcmp(&(key[1]), "ourlyForecastExplicitlyRequested") == 0)
                    {
                    fromJSONHourlyForecastExplicitlyRequested(new_component, false);
                    return;
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
            case 'M':
                if (strcmp(&(key[1]), "apLocation") == 0)
                    {
                    fromJSONMapLocation(new_component, false);
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
            case 'U':
                if (strcmp(&(key[1]), "nits") == 0)
                    {
                    fromJSONUnits(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strncmp(&(key[1]), "eather", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'I':
                            if (strcmp(&(key[8]), "ntentKind") == 0)
                                {
                                fromJSONWeatherIntentKind(new_component, false);
                                return;
                                }
                            break;
                        case 'Q':
                            if (strcmp(&(key[8]), "ueryType") == 0)
                                {
                                fromJSONWeatherQueryType(new_component, false);
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
        extraHoundWeatherInformationNuggetIntentAppendPair(key, new_component);
      }
    void extraInformationNuggetIntentSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(key[2]))
                          {
                            case 'i':
                                if (strcmp(&(key[3]), "lyForecastExplicitlyRequested") == 0)
                                    {
                                    fromJSONDailyForecastExplicitlyRequested(new_component, false);
                                    return;
                                    }
                                break;
                            case 't':
                                if (strcmp(&(key[3]), "eTimeRange") == 0)
                                    {
                                    fromJSONDateTimeRange(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'i':
                        if (strncmp(&(key[2]), "splay", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 'D':
                                    if (strcmp(&(key[8]), "aily") == 0)
                                        {
                                        fromJSONDisplayDaily(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'H':
                                    if (strcmp(&(key[8]), "ourly") == 0)
                                        {
                                        fromJSONDisplayHourly(new_component, false);
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
            case 'H':
                if (strcmp(&(key[1]), "ourlyForecastExplicitlyRequested") == 0)
                    {
                    fromJSONHourlyForecastExplicitlyRequested(new_component, false);
                    return;
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
            case 'M':
                if (strcmp(&(key[1]), "apLocation") == 0)
                    {
                    fromJSONMapLocation(new_component, false);
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
            case 'U':
                if (strcmp(&(key[1]), "nits") == 0)
                    {
                    fromJSONUnits(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strncmp(&(key[1]), "eather", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'I':
                            if (strcmp(&(key[8]), "ntentKind") == 0)
                                {
                                fromJSONWeatherIntentKind(new_component, false);
                                return;
                                }
                            break;
                        case 'Q':
                            if (strcmp(&(key[8]), "ueryType") == 0)
                                {
                                fromJSONWeatherQueryType(new_component, false);
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
        extraHoundWeatherInformationNuggetIntentSetField(key, new_component);
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
        InformationNuggetIntentJSON::write_fields_as_json(handler);
        assert(flagHasWeatherIntentKind);
        handler->start_pair("WeatherIntentKind");
        handler->string_value(storeWeatherIntentKind);
        assert(flagHasWeatherQueryType);
        handler->start_pair("WeatherQueryType");
        handler->string_value(storeWeatherQueryType);
        assert(flagHasRequestedAttribute);
        handler->start_pair("RequestedAttribute");
        handler->string_value(storeRequestedAttribute);
        if (flagHasRequestedAttributeAction)
          {
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
          }
        if (flagHasIsSearchQuery)
          {
            handler->start_pair("IsSearchQuery");
            handler->boolean_value(storeIsSearchQuery);
          }
        if (flagHasMapLocation)
          {
            handler->start_pair("MapLocation");
            storeMapLocation->write_as_json(handler);
          }
        if (flagHasDateTimeRange)
          {
            handler->start_pair("DateTimeRange");
            storeDateTimeRange->write_as_json(handler);
          }
        assert(flagHasUnits);
        handler->start_pair("Units");
        handler->string_value(storeUnits);
        assert(flagHasIsYesNoQuery);
        handler->start_pair("IsYesNoQuery");
        handler->boolean_value(storeIsYesNoQuery);
        if (flagHasDailyForecastExplicitlyRequested)
          {
            handler->start_pair("DailyForecastExplicitlyRequested");
            handler->boolean_value(storeDailyForecastExplicitlyRequested);
          }
        if (flagHasHourlyForecastExplicitlyRequested)
          {
            handler->start_pair("HourlyForecastExplicitlyRequested");
            handler->boolean_value(storeHourlyForecastExplicitlyRequested);
          }
        if (flagHasDisplayDaily)
          {
            handler->start_pair("DisplayDaily");
            handler->boolean_value(storeDisplayDaily);
          }
        if (flagHasDisplayHourly)
          {
            handler->start_pair("DisplayHourly");
            handler->boolean_value(storeDisplayHourly);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasWeatherIntentKind()))
          {
            return "When parsing the object for %what%, the \"WeatherIntentKind\" field was missing.";
          }
        if (!(hasWeatherQueryType()))
          {
            return "When parsing the object for %what%, the \"WeatherQueryType\" field was missing.";
          }
        if (!(hasRequestedAttribute()))
          {
            return "When parsing the object for %what%, the \"RequestedAttribute\" field was missing.";
          }
        if (!(hasUnits()))
          {
            return "When parsing the object for %what%, the \"Units\" field was missing.";
          }
        if (!(hasIsYesNoQuery()))
          {
            return "When parsing the object for %what%, the \"IsYesNoQuery\" field was missing.";
          }
        return NULL;
      }

    static HoundWeatherInformationNuggetIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HoundWeatherInformationNuggetIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HoundWeatherInformationNuggetIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundWeatherInformationNuggetIntentJSON>, HoundWeatherInformationNuggetIntentJSON *, bool> generator("Type HoundWeatherInformationNuggetIntent", ignore_extras);
            parse_json_value(text, "Text for HoundWeatherInformationNuggetIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HoundWeatherInformationNuggetIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HoundWeatherInformationNuggetIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundWeatherInformationNuggetIntentJSON>, HoundWeatherInformationNuggetIntentJSON *, bool> generator("Type HoundWeatherInformationNuggetIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetIntentJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherIntentKind;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherQueryType;
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRange;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnits;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsYesNoQuery;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDailyForecastExplicitlyRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHourlyForecastExplicitlyRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDisplayDaily;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDisplayHourly;
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
            if (!(strcmp(getInformationNuggetIntentJSONKey().c_str(), "HoundWeather") == 0))
                throw("The key field has a value other than `HoundWeather'.");
            HoundWeatherInformationNuggetIntentJSON *result = new HoundWeatherInformationNuggetIntentJSON();
            assert(result != NULL);
            RCHandle<HoundWeatherInformationNuggetIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHoundWeatherInformationNuggetIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetIntentJSON *new_result)
          {
            handle_result((HoundWeatherInformationNuggetIntentJSON *)new_result);
          }
        void finish(HoundWeatherInformationNuggetIntentJSON *result)
          {
            if (fieldGeneratorWeatherIntentKind.have_value)
              {
                result->setWeatherIntentKind(fieldGeneratorWeatherIntentKind.value);
                fieldGeneratorWeatherIntentKind.have_value = false;
              }
            else if (!(result->hasWeatherIntentKind()))
              {
                error("When parsing the object for %what%, the \"WeatherIntentKind\" field was missing.");
              }
            if (fieldGeneratorWeatherQueryType.have_value)
              {
                result->setWeatherQueryType(fieldGeneratorWeatherQueryType.value);
                fieldGeneratorWeatherQueryType.have_value = false;
              }
            else if (!(result->hasWeatherQueryType()))
              {
                error("When parsing the object for %what%, the \"WeatherQueryType\" field was missing.");
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
            if (fieldGeneratorIsSearchQuery.have_value)
              {
                result->setIsSearchQuery(fieldGeneratorIsSearchQuery.value);
                fieldGeneratorIsSearchQuery.have_value = false;
              }
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            if (fieldGeneratorDateTimeRange.have_value)
              {
                result->setDateTimeRange(fieldGeneratorDateTimeRange.value.referenced());
                fieldGeneratorDateTimeRange.have_value = false;
              }
            if (fieldGeneratorUnits.have_value)
              {
                result->setUnits(fieldGeneratorUnits.value);
                fieldGeneratorUnits.have_value = false;
              }
            else if (!(result->hasUnits()))
              {
                error("When parsing the object for %what%, the \"Units\" field was missing.");
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
            if (fieldGeneratorDailyForecastExplicitlyRequested.have_value)
              {
                result->setDailyForecastExplicitlyRequested(fieldGeneratorDailyForecastExplicitlyRequested.value);
                fieldGeneratorDailyForecastExplicitlyRequested.have_value = false;
              }
            if (fieldGeneratorHourlyForecastExplicitlyRequested.have_value)
              {
                result->setHourlyForecastExplicitlyRequested(fieldGeneratorHourlyForecastExplicitlyRequested.value);
                fieldGeneratorHourlyForecastExplicitlyRequested.have_value = false;
              }
            if (fieldGeneratorDisplayDaily.have_value)
              {
                result->setDisplayDaily(fieldGeneratorDisplayDaily.value);
                fieldGeneratorDisplayDaily.have_value = false;
              }
            if (fieldGeneratorDisplayHourly.have_value)
              {
                result->setDisplayHourly(fieldGeneratorDisplayHourly.value);
                fieldGeneratorDisplayHourly.have_value = false;
              }
            InformationNuggetIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(HoundWeatherInformationNuggetIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'i':
                                    if (strcmp(&(field_name[3]), "lyForecastExplicitlyRequested") == 0)
                                        return &fieldGeneratorDailyForecastExplicitlyRequested;
                                    break;
                                case 't':
                                    if (strcmp(&(field_name[3]), "eTimeRange") == 0)
                                        return &fieldGeneratorDateTimeRange;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'i':
                            if (strncmp(&(field_name[2]), "splay", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[8]), "aily") == 0)
                                            return &fieldGeneratorDisplayDaily;
                                        break;
                                    case 'H':
                                        if (strcmp(&(field_name[8]), "ourly") == 0)
                                            return &fieldGeneratorDisplayHourly;
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
                case 'H':
                    if (strcmp(&(field_name[1]), "ourlyForecastExplicitlyRequested") == 0)
                        return &fieldGeneratorHourlyForecastExplicitlyRequested;
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
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
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
                case 'U':
                    if (strcmp(&(field_name[1]), "nits") == 0)
                        return &fieldGeneratorUnits;
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "eather", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[8]), "ntentKind") == 0)
                                    return &fieldGeneratorWeatherIntentKind;
                                break;
                            case 'Q':
                                if (strcmp(&(field_name[8]), "ueryType") == 0)
                                    return &fieldGeneratorWeatherQueryType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return InformationNuggetIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetIntentJSON::Generator(ignore_extras), fieldGeneratorWeatherIntentKind("field \"WeatherIntentKind\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorWeatherQueryType("field \"WeatherQueryType\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorRequestedAttribute("field \"RequestedAttribute\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorRequestedAttributeAction("field \"RequestedAttributeAction\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorIsSearchQuery("field \"IsSearchQuery\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorMapLocation("field \"MapLocation\" of the HoundWeatherInformationNuggetIntent class", ignore_extras), fieldGeneratorDateTimeRange("field \"DateTimeRange\" of the HoundWeatherInformationNuggetIntent class", ignore_extras), fieldGeneratorUnits("field \"Units\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorIsYesNoQuery("field \"IsYesNoQuery\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorDailyForecastExplicitlyRequested("field \"DailyForecastExplicitlyRequested\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorHourlyForecastExplicitlyRequested("field \"HourlyForecastExplicitlyRequested\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorDisplayDaily("field \"DisplayDaily\" of the HoundWeatherInformationNuggetIntent class"), fieldGeneratorDisplayHourly("field \"DisplayHourly\" of the HoundWeatherInformationNuggetIntent class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HoundWeatherInformationNuggetIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWeatherIntentKind.reset();
            fieldGeneratorWeatherQueryType.reset();
            fieldGeneratorRequestedAttribute.reset();
            fieldGeneratorRequestedAttributeAction.reset();
            fieldGeneratorIsSearchQuery.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorDateTimeRange.reset();
            fieldGeneratorUnits.reset();
            fieldGeneratorIsYesNoQuery.reset();
            fieldGeneratorDailyForecastExplicitlyRequested.reset();
            fieldGeneratorHourlyForecastExplicitlyRequested.reset();
            fieldGeneratorDisplayDaily.reset();
            fieldGeneratorDisplayHourly.reset();
            InformationNuggetIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOUNDWEATHERINFORMATIONNUGGETINTENTJSON_H */
