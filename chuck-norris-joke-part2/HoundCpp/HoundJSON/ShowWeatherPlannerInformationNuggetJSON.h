/* file "ShowWeatherPlannerInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWWEATHERPLANNERINFORMATIONNUGGETJSON_H
#define SHOWWEATHERPLANNERINFORMATIONNUGGETJSON_H

#pragma interface

#include "WeatherInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "AttributionJSON.h"
#include "MapLocationJSON.h"
#include "AlertJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateTimeSpecJSON.h"
#include "DateTimeSpecJSON.h"
#include "PlannerJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowWeatherPlannerInformationNuggetJSON : public WeatherInformationNuggetJSON
  {
  private:
    bool flagHasAttribution;
    AttributionJSON * storeAttribution;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    bool flagHasAlerts;
    std::vector< AlertJSON * > storeAlerts;
    bool flagHasRequestedAttribute;
    std::string storeRequestedAttribute;
    bool flagHasRequestedStartDateAndTime;
    DateAndOrTimeJSON * storeRequestedStartDateAndTime;
    bool flagHasRequestedEndDateAndTime;
    DateAndOrTimeJSON * storeRequestedEndDateAndTime;
    bool flagHasRequestedStartDateTimeSpec;
    DateTimeSpecJSON * storeRequestedStartDateTimeSpec;
    bool flagHasRequestedEndDateTimeSpec;
    DateTimeSpecJSON * storeRequestedEndDateTimeSpec;
    bool flagHasPlanner;
    PlannerJSON * storePlanner;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowWeatherPlannerInformationNuggetJSON(const ShowWeatherPlannerInformationNuggetJSON &);
    ShowWeatherPlannerInformationNuggetJSON & operator=(const ShowWeatherPlannerInformationNuggetJSON &other);

    JSONValue * extraAttributionToJSON(void) const;
    JSONValue * extraLocationToJSON(void) const;
    JSONValue * extraAlertsToJSON(void) const;
    JSONValue * extraRequestedAttributeToJSON(void) const;
    JSONValue * extraRequestedStartDateAndTimeToJSON(void) const;
    JSONValue * extraRequestedEndDateAndTimeToJSON(void) const;
    JSONValue * extraRequestedStartDateTimeSpecToJSON(void) const;
    JSONValue * extraRequestedEndDateTimeSpecToJSON(void) const;
    JSONValue * extraPlannerToJSON(void) const;

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlerts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedStartDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedEndDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedStartDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedEndDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlanner(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowWeatherPlannerInformationNuggetJSON(void);
    virtual ~ShowWeatherPlannerInformationNuggetJSON(void);
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
    bool  hasRequestedStartDateAndTime(void) const;
    DateAndOrTimeJSON *  getRequestedStartDateAndTime(void);
    const DateAndOrTimeJSON *  getRequestedStartDateAndTime(void) const;
    bool  hasRequestedEndDateAndTime(void) const;
    DateAndOrTimeJSON *  getRequestedEndDateAndTime(void);
    const DateAndOrTimeJSON *  getRequestedEndDateAndTime(void) const;
    bool  hasRequestedStartDateTimeSpec(void) const;
    DateTimeSpecJSON *  getRequestedStartDateTimeSpec(void);
    const DateTimeSpecJSON *  getRequestedStartDateTimeSpec(void) const;
    bool  hasRequestedEndDateTimeSpec(void) const;
    DateTimeSpecJSON *  getRequestedEndDateTimeSpec(void);
    const DateTimeSpecJSON *  getRequestedEndDateTimeSpec(void) const;
    bool  hasPlanner(void) const;
    PlannerJSON *  getPlanner(void);
    const PlannerJSON *  getPlanner(void) const;

    virtual size_t extraShowWeatherPlannerInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowWeatherPlannerInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowWeatherPlannerInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowWeatherPlannerInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowWeatherPlannerInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowWeatherPlannerInformationNuggetLookup(const char *field_name) const
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
        if (flagHasRequestedStartDateAndTime)
            ++result;
        if (flagHasRequestedEndDateAndTime)
            ++result;
        if (flagHasRequestedStartDateTimeSpec)
            ++result;
        if (flagHasRequestedEndDateTimeSpec)
            ++result;
        if (flagHasPlanner)
            ++result;
        result += extraShowWeatherPlannerInformationNuggetComponentCount();
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
        if (flagHasRequestedStartDateAndTime)
          {
            if (remainder == 0)
                return "RequestedStartDateAndTime";
            --remainder;
          }
        if (flagHasRequestedEndDateAndTime)
          {
            if (remainder == 0)
                return "RequestedEndDateAndTime";
            --remainder;
          }
        if (flagHasRequestedStartDateTimeSpec)
          {
            if (remainder == 0)
                return "RequestedStartDateTimeSpec";
            --remainder;
          }
        if (flagHasRequestedEndDateTimeSpec)
          {
            if (remainder == 0)
                return "RequestedEndDateTimeSpec";
            --remainder;
          }
        if (flagHasPlanner)
          {
            if (remainder == 0)
                return "Planner";
            --remainder;
          }
        return extraShowWeatherPlannerInformationNuggetComponentKey(remainder);
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
        if (flagHasRequestedStartDateAndTime)
          {
            if (remainder == 0)
                return extraRequestedStartDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasRequestedEndDateAndTime)
          {
            if (remainder == 0)
                return extraRequestedEndDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasRequestedStartDateTimeSpec)
          {
            if (remainder == 0)
                return extraRequestedStartDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasRequestedEndDateTimeSpec)
          {
            if (remainder == 0)
                return extraRequestedEndDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasPlanner)
          {
            if (remainder == 0)
                return extraPlannerToJSON();
            --remainder;
          }
        return extraShowWeatherPlannerInformationNuggetComponentValue(remainder);
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
        if (flagHasRequestedStartDateAndTime)
          {
            if (remainder == 0)
                return extraRequestedStartDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasRequestedEndDateAndTime)
          {
            if (remainder == 0)
                return extraRequestedEndDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasRequestedStartDateTimeSpec)
          {
            if (remainder == 0)
                return extraRequestedStartDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasRequestedEndDateTimeSpec)
          {
            if (remainder == 0)
                return extraRequestedEndDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasPlanner)
          {
            if (remainder == 0)
                return extraPlannerToJSON();
            --remainder;
          }
        return extraShowWeatherPlannerInformationNuggetComponentValue(remainder);
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
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "lanner") == 0)
                    return (flagHasPlanner ? extraPlannerToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[10]), "ttribute") == 0)
                                return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                            break;
                        case 'E':
                            if (strncmp(&(field_name[10]), "ndDate", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[16]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[17]), "ndTime") == 0)
                                            return (flagHasRequestedEndDateAndTime ? extraRequestedEndDateAndTimeToJSON() : NULL);
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[17]), "imeSpec") == 0)
                                            return (flagHasRequestedEndDateTimeSpec ? extraRequestedEndDateTimeSpecToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(field_name[10]), "tartDate", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[18]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[19]), "ndTime") == 0)
                                            return (flagHasRequestedStartDateAndTime ? extraRequestedStartDateAndTimeToJSON() : NULL);
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[19]), "imeSpec") == 0)
                                            return (flagHasRequestedStartDateTimeSpec ? extraRequestedStartDateTimeSpecToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
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
        return extraShowWeatherPlannerInformationNuggetLookup(field_name);
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
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "lanner") == 0)
                    return (flagHasPlanner ? extraPlannerToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[10]), "ttribute") == 0)
                                return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                            break;
                        case 'E':
                            if (strncmp(&(field_name[10]), "ndDate", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[16]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[17]), "ndTime") == 0)
                                            return (flagHasRequestedEndDateAndTime ? extraRequestedEndDateAndTimeToJSON() : NULL);
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[17]), "imeSpec") == 0)
                                            return (flagHasRequestedEndDateTimeSpec ? extraRequestedEndDateTimeSpecToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(field_name[10]), "tartDate", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[18]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[19]), "ndTime") == 0)
                                            return (flagHasRequestedStartDateAndTime ? extraRequestedStartDateAndTimeToJSON() : NULL);
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[19]), "imeSpec") == 0)
                                            return (flagHasRequestedStartDateTimeSpec ? extraRequestedStartDateTimeSpecToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
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
        return extraShowWeatherPlannerInformationNuggetLookup(field_name);
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
            for (size_t num2 = 0; num2 < storeAlerts.size(); ++num2)
              {
                storeAlerts[num2]->remove_reference();
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
            for (size_t num3 = 0; num3 < storeAlerts.size(); ++num3)
              {
                storeAlerts[num3]->remove_reference();
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
    void setRequestedStartDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedStartDateAndTime)
          {
            storeRequestedStartDateAndTime->remove_reference();
          }
        flagHasRequestedStartDateAndTime = true;
        storeRequestedStartDateAndTime = new_value;
      }
    void unsetRequestedStartDateAndTime(void)
      {
        if (flagHasRequestedStartDateAndTime)
          {
            storeRequestedStartDateAndTime->remove_reference();
          }
        flagHasRequestedStartDateAndTime = false;
      }
    void setRequestedEndDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedEndDateAndTime)
          {
            storeRequestedEndDateAndTime->remove_reference();
          }
        flagHasRequestedEndDateAndTime = true;
        storeRequestedEndDateAndTime = new_value;
      }
    void unsetRequestedEndDateAndTime(void)
      {
        if (flagHasRequestedEndDateAndTime)
          {
            storeRequestedEndDateAndTime->remove_reference();
          }
        flagHasRequestedEndDateAndTime = false;
      }
    void setRequestedStartDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedStartDateTimeSpec)
          {
            storeRequestedStartDateTimeSpec->remove_reference();
          }
        flagHasRequestedStartDateTimeSpec = true;
        storeRequestedStartDateTimeSpec = new_value;
      }
    void unsetRequestedStartDateTimeSpec(void)
      {
        if (flagHasRequestedStartDateTimeSpec)
          {
            storeRequestedStartDateTimeSpec->remove_reference();
          }
        flagHasRequestedStartDateTimeSpec = false;
      }
    void setRequestedEndDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedEndDateTimeSpec)
          {
            storeRequestedEndDateTimeSpec->remove_reference();
          }
        flagHasRequestedEndDateTimeSpec = true;
        storeRequestedEndDateTimeSpec = new_value;
      }
    void unsetRequestedEndDateTimeSpec(void)
      {
        if (flagHasRequestedEndDateTimeSpec)
          {
            storeRequestedEndDateTimeSpec->remove_reference();
          }
        flagHasRequestedEndDateTimeSpec = false;
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

    virtual void extraShowWeatherPlannerInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowWeatherPlannerInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowWeatherPlannerInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowWeatherPlannerInformationNuggetAppendPair(key, new_component);
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
                if (strncmp(&(key[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'A':
                            if (strcmp(&(key[10]), "ttribute") == 0)
                                {
                                fromJSONRequestedAttribute(new_component, false);
                                return;
                                }
                            break;
                        case 'E':
                            if (strncmp(&(key[10]), "ndDate", 6) == 0)
                              {
                                switch ((unsigned char)(key[16]))
                                  {
                                    case 'A':
                                        if (strcmp(&(key[17]), "ndTime") == 0)
                                            {
                                            fromJSONRequestedEndDateAndTime(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'T':
                                        if (strcmp(&(key[17]), "imeSpec") == 0)
                                            {
                                            fromJSONRequestedEndDateTimeSpec(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(key[10]), "tartDate", 8) == 0)
                              {
                                switch ((unsigned char)(key[18]))
                                  {
                                    case 'A':
                                        if (strcmp(&(key[19]), "ndTime") == 0)
                                            {
                                            fromJSONRequestedStartDateAndTime(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'T':
                                        if (strcmp(&(key[19]), "imeSpec") == 0)
                                            {
                                            fromJSONRequestedStartDateTimeSpec(new_component, false);
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
                  }
                break;
            default:
                break;
          }
        extraShowWeatherPlannerInformationNuggetAppendPair(key, new_component);
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
                if (strncmp(&(key[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'A':
                            if (strcmp(&(key[10]), "ttribute") == 0)
                                {
                                fromJSONRequestedAttribute(new_component, false);
                                return;
                                }
                            break;
                        case 'E':
                            if (strncmp(&(key[10]), "ndDate", 6) == 0)
                              {
                                switch ((unsigned char)(key[16]))
                                  {
                                    case 'A':
                                        if (strcmp(&(key[17]), "ndTime") == 0)
                                            {
                                            fromJSONRequestedEndDateAndTime(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'T':
                                        if (strcmp(&(key[17]), "imeSpec") == 0)
                                            {
                                            fromJSONRequestedEndDateTimeSpec(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(key[10]), "tartDate", 8) == 0)
                              {
                                switch ((unsigned char)(key[18]))
                                  {
                                    case 'A':
                                        if (strcmp(&(key[19]), "ndTime") == 0)
                                            {
                                            fromJSONRequestedStartDateAndTime(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'T':
                                        if (strcmp(&(key[19]), "imeSpec") == 0)
                                            {
                                            fromJSONRequestedStartDateTimeSpec(new_component, false);
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
                  }
                break;
            default:
                break;
          }
        extraShowWeatherPlannerInformationNuggetSetField(key, new_component);
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
        assert(flagHasRequestedStartDateAndTime);
        handler->start_pair("RequestedStartDateAndTime");
        storeRequestedStartDateAndTime->write_as_json(handler);
        assert(flagHasRequestedEndDateAndTime);
        handler->start_pair("RequestedEndDateAndTime");
        storeRequestedEndDateAndTime->write_as_json(handler);
        assert(flagHasRequestedStartDateTimeSpec);
        handler->start_pair("RequestedStartDateTimeSpec");
        storeRequestedStartDateTimeSpec->write_as_json(handler);
        assert(flagHasRequestedEndDateTimeSpec);
        handler->start_pair("RequestedEndDateTimeSpec");
        storeRequestedEndDateTimeSpec->write_as_json(handler);
        if (flagHasPlanner)
          {
            handler->start_pair("Planner");
            storePlanner->write_as_json(handler);
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
        if (!(hasRequestedStartDateAndTime()))
          {
            return "When parsing the object for %what%, the \"RequestedStartDateAndTime\" field was missing.";
          }
        if (!(hasRequestedEndDateAndTime()))
          {
            return "When parsing the object for %what%, the \"RequestedEndDateAndTime\" field was missing.";
          }
        if (!(hasRequestedStartDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"RequestedStartDateTimeSpec\" field was missing.";
          }
        if (!(hasRequestedEndDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"RequestedEndDateTimeSpec\" field was missing.";
          }
        return NULL;
      }

    static ShowWeatherPlannerInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowWeatherPlannerInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowWeatherPlannerInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherPlannerInformationNuggetJSON>, ShowWeatherPlannerInformationNuggetJSON *, bool> generator("Type ShowWeatherPlannerInformationNugget", ignore_extras);
            parse_json_value(text, "Text for ShowWeatherPlannerInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowWeatherPlannerInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowWeatherPlannerInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherPlannerInformationNuggetJSON>, ShowWeatherPlannerInformationNuggetJSON *, bool> generator("Type ShowWeatherPlannerInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRequestedStartDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRequestedEndDateAndTime;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorRequestedStartDateTimeSpec;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorRequestedEndDateTimeSpec;
        JSONHoldingGenerator<PlannerJSON::Generator, RCHandle<PlannerJSON>, PlannerJSON *, bool > fieldGeneratorPlanner;
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
            if (!(strcmp(getWeatherInformationNuggetJSONKey().c_str(), "ShowWeatherPlanner") == 0))
                throw("The key field has a value other than `ShowWeatherPlanner'.");
            ShowWeatherPlannerInformationNuggetJSON *result = new ShowWeatherPlannerInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowWeatherPlannerInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowWeatherPlannerInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(WeatherInformationNuggetJSON *new_result)
          {
            handle_result((ShowWeatherPlannerInformationNuggetJSON *)new_result);
          }
        void finish(ShowWeatherPlannerInformationNuggetJSON *result)
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
            if (fieldGeneratorRequestedStartDateAndTime.have_value)
              {
                result->setRequestedStartDateAndTime(fieldGeneratorRequestedStartDateAndTime.value.referenced());
                fieldGeneratorRequestedStartDateAndTime.have_value = false;
              }
            else if (!(result->hasRequestedStartDateAndTime()))
              {
                error("When parsing the object for %what%, the \"RequestedStartDateAndTime\" field was missing.");
              }
            if (fieldGeneratorRequestedEndDateAndTime.have_value)
              {
                result->setRequestedEndDateAndTime(fieldGeneratorRequestedEndDateAndTime.value.referenced());
                fieldGeneratorRequestedEndDateAndTime.have_value = false;
              }
            else if (!(result->hasRequestedEndDateAndTime()))
              {
                error("When parsing the object for %what%, the \"RequestedEndDateAndTime\" field was missing.");
              }
            if (fieldGeneratorRequestedStartDateTimeSpec.have_value)
              {
                result->setRequestedStartDateTimeSpec(fieldGeneratorRequestedStartDateTimeSpec.value.referenced());
                fieldGeneratorRequestedStartDateTimeSpec.have_value = false;
              }
            else if (!(result->hasRequestedStartDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"RequestedStartDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorRequestedEndDateTimeSpec.have_value)
              {
                result->setRequestedEndDateTimeSpec(fieldGeneratorRequestedEndDateTimeSpec.value.referenced());
                fieldGeneratorRequestedEndDateTimeSpec.have_value = false;
              }
            else if (!(result->hasRequestedEndDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"RequestedEndDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorPlanner.have_value)
              {
                result->setPlanner(fieldGeneratorPlanner.value.referenced());
                fieldGeneratorPlanner.have_value = false;
              }
            WeatherInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowWeatherPlannerInformationNuggetJSON *new_result) = 0;
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
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "lanner") == 0)
                        return &fieldGeneratorPlanner;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equested", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[10]), "ttribute") == 0)
                                    return &fieldGeneratorRequestedAttribute;
                                break;
                            case 'E':
                                if (strncmp(&(field_name[10]), "ndDate", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[16]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[17]), "ndTime") == 0)
                                                return &fieldGeneratorRequestedEndDateAndTime;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[17]), "imeSpec") == 0)
                                                return &fieldGeneratorRequestedEndDateTimeSpec;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'S':
                                if (strncmp(&(field_name[10]), "tartDate", 8) == 0)
                                  {
                                    switch ((unsigned char)(field_name[18]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[19]), "ndTime") == 0)
                                                return &fieldGeneratorRequestedStartDateAndTime;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[19]), "imeSpec") == 0)
                                                return &fieldGeneratorRequestedStartDateTimeSpec;
                                            break;
                                        default:
                                            break;
                                      }
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
            return WeatherInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : WeatherInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorAttribution("field \"Attribution\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), fieldGeneratorAlerts("field \"Alerts\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), fieldGeneratorRequestedAttribute("field \"RequestedAttribute\" of the ShowWeatherPlannerInformationNugget class"), fieldGeneratorRequestedStartDateAndTime("field \"RequestedStartDateAndTime\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), fieldGeneratorRequestedEndDateAndTime("field \"RequestedEndDateAndTime\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), fieldGeneratorRequestedStartDateTimeSpec("field \"RequestedStartDateTimeSpec\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), fieldGeneratorRequestedEndDateTimeSpec("field \"RequestedEndDateTimeSpec\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), fieldGeneratorPlanner("field \"Planner\" of the ShowWeatherPlannerInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowWeatherPlannerInformationNugget class");
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
            fieldGeneratorRequestedStartDateAndTime.reset();
            fieldGeneratorRequestedEndDateAndTime.reset();
            fieldGeneratorRequestedStartDateTimeSpec.reset();
            fieldGeneratorRequestedEndDateTimeSpec.reset();
            fieldGeneratorPlanner.reset();
            WeatherInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWWEATHERPLANNERINFORMATIONNUGGETJSON_H */
