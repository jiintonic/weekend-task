/* file "DateAndTimeLookupInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATEANDTIMELOOKUPINFORMATIONNUGGETJSON_H
#define DATEANDTIMELOOKUPINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "DateAndOrTimeSpecJSON.h"
#include "MapLocationJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateAndTimeLookupInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeDateAndOrTimeSpec;
    bool flagHasDestinationMapLocation;
    MapLocationJSON * storeDestinationMapLocation;
    bool flagHasDayOfWeekRequested;
    bool storeDayOfWeekRequested;
    bool flagHasDateAndOrTimeSpecInFuture;
    bool storeDateAndOrTimeSpecInFuture;
    bool flagHasComparisonRequested;
    bool storeComparisonRequested;
    bool flagHasIncludeTime;
    bool storeIncludeTime;
    bool flagHasComparisonDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeComparisonDateAndOrTimeSpec;
    bool flagHasComparisonDateAndOrTimeSpecEnd;
    DateAndOrTimeSpecJSON * storeComparisonDateAndOrTimeSpecEnd;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DateAndTimeLookupInformationNuggetJSON(const DateAndTimeLookupInformationNuggetJSON &);
    DateAndTimeLookupInformationNuggetJSON & operator=(const DateAndTimeLookupInformationNuggetJSON &other);

    JSONValue * extraDateAndOrTimeSpecToJSON(void) const;
    JSONValue * extraDestinationMapLocationToJSON(void) const;
    JSONValue * extraDayOfWeekRequestedToJSON(void) const;
    JSONValue * extraDateAndOrTimeSpecInFutureToJSON(void) const;
    JSONValue * extraComparisonRequestedToJSON(void) const;
    JSONValue * extraIncludeTimeToJSON(void) const;
    JSONValue * extraComparisonDateAndOrTimeSpecToJSON(void) const;
    JSONValue * extraComparisonDateAndOrTimeSpecEndToJSON(void) const;

    void  fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDayOfWeekRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndOrTimeSpecInFuture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComparisonRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIncludeTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComparisonDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComparisonDateAndOrTimeSpecEnd(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateAndTimeLookupInformationNuggetJSON(void);
    virtual ~DateAndTimeLookupInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void) const;
    bool  hasDestinationMapLocation(void) const;
    MapLocationJSON *  getDestinationMapLocation(void);
    const MapLocationJSON *  getDestinationMapLocation(void) const;
    bool  hasDayOfWeekRequested(void) const;
    bool  getDayOfWeekRequested(void);
    const bool  getDayOfWeekRequested(void) const;
    bool  hasDateAndOrTimeSpecInFuture(void) const;
    bool  getDateAndOrTimeSpecInFuture(void);
    const bool  getDateAndOrTimeSpecInFuture(void) const;
    bool  hasComparisonRequested(void) const;
    bool  getComparisonRequested(void);
    const bool  getComparisonRequested(void) const;
    bool  hasIncludeTime(void) const;
    bool  getIncludeTime(void);
    const bool  getIncludeTime(void) const;
    bool  hasComparisonDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpec(void) const;
    bool  hasComparisonDateAndOrTimeSpecEnd(void) const;
    DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpecEnd(void);
    const DateAndOrTimeSpecJSON *  getComparisonDateAndOrTimeSpecEnd(void) const;

    virtual size_t extraDateAndTimeLookupInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateAndTimeLookupInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateAndTimeLookupInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateAndTimeLookupInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateAndTimeLookupInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateAndTimeLookupInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDateAndOrTimeSpec)
            ++result;
        if (flagHasDestinationMapLocation)
            ++result;
        if (flagHasDayOfWeekRequested)
            ++result;
        if (flagHasDateAndOrTimeSpecInFuture)
            ++result;
        if (flagHasComparisonRequested)
            ++result;
        if (flagHasIncludeTime)
            ++result;
        if (flagHasComparisonDateAndOrTimeSpec)
            ++result;
        if (flagHasComparisonDateAndOrTimeSpecEnd)
            ++result;
        result += extraDateAndTimeLookupInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return "DateAndOrTimeSpec";
            --remainder;
          }
        if (flagHasDestinationMapLocation)
          {
            if (remainder == 0)
                return "DestinationMapLocation";
            --remainder;
          }
        if (flagHasDayOfWeekRequested)
          {
            if (remainder == 0)
                return "DayOfWeekRequested";
            --remainder;
          }
        if (flagHasDateAndOrTimeSpecInFuture)
          {
            if (remainder == 0)
                return "DateAndOrTimeSpecInFuture";
            --remainder;
          }
        if (flagHasComparisonRequested)
          {
            if (remainder == 0)
                return "ComparisonRequested";
            --remainder;
          }
        if (flagHasIncludeTime)
          {
            if (remainder == 0)
                return "IncludeTime";
            --remainder;
          }
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return "ComparisonDateAndOrTimeSpec";
            --remainder;
          }
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            if (remainder == 0)
                return "ComparisonDateAndOrTimeSpecEnd";
            --remainder;
          }
        return extraDateAndTimeLookupInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationMapLocation)
          {
            if (remainder == 0)
                return extraDestinationMapLocationToJSON();
            --remainder;
          }
        if (flagHasDayOfWeekRequested)
          {
            if (remainder == 0)
                return extraDayOfWeekRequestedToJSON();
            --remainder;
          }
        if (flagHasDateAndOrTimeSpecInFuture)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecInFutureToJSON();
            --remainder;
          }
        if (flagHasComparisonRequested)
          {
            if (remainder == 0)
                return extraComparisonRequestedToJSON();
            --remainder;
          }
        if (flagHasIncludeTime)
          {
            if (remainder == 0)
                return extraIncludeTimeToJSON();
            --remainder;
          }
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraComparisonDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            if (remainder == 0)
                return extraComparisonDateAndOrTimeSpecEndToJSON();
            --remainder;
          }
        return extraDateAndTimeLookupInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationMapLocation)
          {
            if (remainder == 0)
                return extraDestinationMapLocationToJSON();
            --remainder;
          }
        if (flagHasDayOfWeekRequested)
          {
            if (remainder == 0)
                return extraDayOfWeekRequestedToJSON();
            --remainder;
          }
        if (flagHasDateAndOrTimeSpecInFuture)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecInFutureToJSON();
            --remainder;
          }
        if (flagHasComparisonRequested)
          {
            if (remainder == 0)
                return extraComparisonRequestedToJSON();
            --remainder;
          }
        if (flagHasIncludeTime)
          {
            if (remainder == 0)
                return extraIncludeTimeToJSON();
            --remainder;
          }
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraComparisonDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            if (remainder == 0)
                return extraComparisonDateAndOrTimeSpecEndToJSON();
            --remainder;
          }
        return extraDateAndTimeLookupInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "omparison", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 'D':
                            if (strncmp(&(field_name[11]), "ateAndOrTimeSpec", 16) == 0)
                              {
                                switch ((unsigned char)(field_name[27]))
                                  {
                                    case 0:
                                        return (flagHasComparisonDateAndOrTimeSpec ? extraComparisonDateAndOrTimeSpecToJSON() : NULL);
                                    case 'E':
                                        if (strcmp(&(field_name[28]), "nd") == 0)
                                            return (flagHasComparisonDateAndOrTimeSpecEnd ? extraComparisonDateAndOrTimeSpecEndToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(field_name[11]), "equested") == 0)
                                return (flagHasComparisonRequested ? extraComparisonRequestedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 't':
                                if (strncmp(&(field_name[3]), "eAndOrTimeSpec", 14) == 0)
                                  {
                                    switch ((unsigned char)(field_name[17]))
                                      {
                                        case 0:
                                            return (flagHasDateAndOrTimeSpec ? extraDateAndOrTimeSpecToJSON() : NULL);
                                        case 'I':
                                            if (strcmp(&(field_name[18]), "nFuture") == 0)
                                                return (flagHasDateAndOrTimeSpecInFuture ? extraDateAndOrTimeSpecInFutureToJSON() : NULL);
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'y':
                                if (strcmp(&(field_name[3]), "OfWeekRequested") == 0)
                                    return (flagHasDayOfWeekRequested ? extraDayOfWeekRequestedToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'e':
                        if (strcmp(&(field_name[2]), "stinationMapLocation") == 0)
                            return (flagHasDestinationMapLocation ? extraDestinationMapLocationToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "ncludeTime") == 0)
                    return (flagHasIncludeTime ? extraIncludeTimeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDateAndTimeLookupInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "omparison", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 'D':
                            if (strncmp(&(field_name[11]), "ateAndOrTimeSpec", 16) == 0)
                              {
                                switch ((unsigned char)(field_name[27]))
                                  {
                                    case 0:
                                        return (flagHasComparisonDateAndOrTimeSpec ? extraComparisonDateAndOrTimeSpecToJSON() : NULL);
                                    case 'E':
                                        if (strcmp(&(field_name[28]), "nd") == 0)
                                            return (flagHasComparisonDateAndOrTimeSpecEnd ? extraComparisonDateAndOrTimeSpecEndToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(field_name[11]), "equested") == 0)
                                return (flagHasComparisonRequested ? extraComparisonRequestedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 't':
                                if (strncmp(&(field_name[3]), "eAndOrTimeSpec", 14) == 0)
                                  {
                                    switch ((unsigned char)(field_name[17]))
                                      {
                                        case 0:
                                            return (flagHasDateAndOrTimeSpec ? extraDateAndOrTimeSpecToJSON() : NULL);
                                        case 'I':
                                            if (strcmp(&(field_name[18]), "nFuture") == 0)
                                                return (flagHasDateAndOrTimeSpecInFuture ? extraDateAndOrTimeSpecInFutureToJSON() : NULL);
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'y':
                                if (strcmp(&(field_name[3]), "OfWeekRequested") == 0)
                                    return (flagHasDayOfWeekRequested ? extraDayOfWeekRequestedToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'e':
                        if (strcmp(&(field_name[2]), "stinationMapLocation") == 0)
                            return (flagHasDestinationMapLocation ? extraDestinationMapLocationToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "ncludeTime") == 0)
                    return (flagHasIncludeTime ? extraIncludeTimeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDateAndTimeLookupInformationNuggetLookup(field_name);
      }

    void setDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateAndOrTimeSpec)
          {
            storeDateAndOrTimeSpec->remove_reference();
          }
        flagHasDateAndOrTimeSpec = true;
        storeDateAndOrTimeSpec = new_value;
      }
    void unsetDateAndOrTimeSpec(void)
      {
        if (flagHasDateAndOrTimeSpec)
          {
            storeDateAndOrTimeSpec->remove_reference();
          }
        flagHasDateAndOrTimeSpec = false;
      }
    void setDestinationMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationMapLocation)
          {
            storeDestinationMapLocation->remove_reference();
          }
        flagHasDestinationMapLocation = true;
        storeDestinationMapLocation = new_value;
      }
    void unsetDestinationMapLocation(void)
      {
        if (flagHasDestinationMapLocation)
          {
            storeDestinationMapLocation->remove_reference();
          }
        flagHasDestinationMapLocation = false;
      }
    void setDayOfWeekRequested(bool new_value)
      {
        flagHasDayOfWeekRequested = true;
        storeDayOfWeekRequested = new_value;
      }
    void unsetDayOfWeekRequested(void)
      {
        flagHasDayOfWeekRequested = false;
      }
    void setDateAndOrTimeSpecInFuture(bool new_value)
      {
        flagHasDateAndOrTimeSpecInFuture = true;
        storeDateAndOrTimeSpecInFuture = new_value;
      }
    void unsetDateAndOrTimeSpecInFuture(void)
      {
        flagHasDateAndOrTimeSpecInFuture = false;
      }
    void setComparisonRequested(bool new_value)
      {
        flagHasComparisonRequested = true;
        storeComparisonRequested = new_value;
      }
    void unsetComparisonRequested(void)
      {
        flagHasComparisonRequested = false;
      }
    void setIncludeTime(bool new_value)
      {
        flagHasIncludeTime = true;
        storeIncludeTime = new_value;
      }
    void unsetIncludeTime(void)
      {
        flagHasIncludeTime = false;
      }
    void setComparisonDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            storeComparisonDateAndOrTimeSpec->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpec = true;
        storeComparisonDateAndOrTimeSpec = new_value;
      }
    void unsetComparisonDateAndOrTimeSpec(void)
      {
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            storeComparisonDateAndOrTimeSpec->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpec = false;
      }
    void setComparisonDateAndOrTimeSpecEnd(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            storeComparisonDateAndOrTimeSpecEnd->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpecEnd = true;
        storeComparisonDateAndOrTimeSpecEnd = new_value;
      }
    void unsetComparisonDateAndOrTimeSpecEnd(void)
      {
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            storeComparisonDateAndOrTimeSpecEnd->remove_reference();
          }
        flagHasComparisonDateAndOrTimeSpecEnd = false;
      }

    virtual void extraDateAndTimeLookupInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateAndTimeLookupInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateAndTimeLookupInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraDateAndTimeLookupInformationNuggetAppendPair(key, new_component);
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
    void extraDateAndTimeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strncmp(&(key[1]), "omparison", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 'D':
                            if (strncmp(&(key[11]), "ateAndOrTimeSpec", 16) == 0)
                              {
                                switch ((unsigned char)(key[27]))
                                  {
                                    case 0:
                                        {
                                        fromJSONComparisonDateAndOrTimeSpec(new_component, false);
                                        return;
                                        }
                                    case 'E':
                                        if (strcmp(&(key[28]), "nd") == 0)
                                            {
                                            fromJSONComparisonDateAndOrTimeSpecEnd(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(key[11]), "equested") == 0)
                                {
                                fromJSONComparisonRequested(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(key[2]))
                          {
                            case 't':
                                if (strncmp(&(key[3]), "eAndOrTimeSpec", 14) == 0)
                                  {
                                    switch ((unsigned char)(key[17]))
                                      {
                                        case 0:
                                            {
                                            fromJSONDateAndOrTimeSpec(new_component, false);
                                            return;
                                            }
                                        case 'I':
                                            if (strcmp(&(key[18]), "nFuture") == 0)
                                                {
                                                fromJSONDateAndOrTimeSpecInFuture(new_component, false);
                                                return;
                                                }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'y':
                                if (strcmp(&(key[3]), "OfWeekRequested") == 0)
                                    {
                                    fromJSONDayOfWeekRequested(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'e':
                        if (strcmp(&(key[2]), "stinationMapLocation") == 0)
                            {
                            fromJSONDestinationMapLocation(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "ncludeTime") == 0)
                    {
                    fromJSONIncludeTime(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDateAndTimeLookupInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strncmp(&(key[1]), "omparison", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 'D':
                            if (strncmp(&(key[11]), "ateAndOrTimeSpec", 16) == 0)
                              {
                                switch ((unsigned char)(key[27]))
                                  {
                                    case 0:
                                        {
                                        fromJSONComparisonDateAndOrTimeSpec(new_component, false);
                                        return;
                                        }
                                    case 'E':
                                        if (strcmp(&(key[28]), "nd") == 0)
                                            {
                                            fromJSONComparisonDateAndOrTimeSpecEnd(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(key[11]), "equested") == 0)
                                {
                                fromJSONComparisonRequested(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        switch ((unsigned char)(key[2]))
                          {
                            case 't':
                                if (strncmp(&(key[3]), "eAndOrTimeSpec", 14) == 0)
                                  {
                                    switch ((unsigned char)(key[17]))
                                      {
                                        case 0:
                                            {
                                            fromJSONDateAndOrTimeSpec(new_component, false);
                                            return;
                                            }
                                        case 'I':
                                            if (strcmp(&(key[18]), "nFuture") == 0)
                                                {
                                                fromJSONDateAndOrTimeSpecInFuture(new_component, false);
                                                return;
                                                }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'y':
                                if (strcmp(&(key[3]), "OfWeekRequested") == 0)
                                    {
                                    fromJSONDayOfWeekRequested(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'e':
                        if (strcmp(&(key[2]), "stinationMapLocation") == 0)
                            {
                            fromJSONDestinationMapLocation(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "ncludeTime") == 0)
                    {
                    fromJSONIncludeTime(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDateAndTimeLookupInformationNuggetSetField(key, new_component);
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
        DateAndTimeInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasDateAndOrTimeSpec);
        handler->start_pair("DateAndOrTimeSpec");
        storeDateAndOrTimeSpec->write_as_json(handler);
        if (flagHasDestinationMapLocation)
          {
            handler->start_pair("DestinationMapLocation");
            storeDestinationMapLocation->write_as_json(handler);
          }
        assert(flagHasDayOfWeekRequested);
        handler->start_pair("DayOfWeekRequested");
        handler->boolean_value(storeDayOfWeekRequested);
        assert(flagHasDateAndOrTimeSpecInFuture);
        handler->start_pair("DateAndOrTimeSpecInFuture");
        handler->boolean_value(storeDateAndOrTimeSpecInFuture);
        assert(flagHasComparisonRequested);
        handler->start_pair("ComparisonRequested");
        handler->boolean_value(storeComparisonRequested);
        assert(flagHasIncludeTime);
        handler->start_pair("IncludeTime");
        handler->boolean_value(storeIncludeTime);
        if (flagHasComparisonDateAndOrTimeSpec)
          {
            handler->start_pair("ComparisonDateAndOrTimeSpec");
            storeComparisonDateAndOrTimeSpec->write_as_json(handler);
          }
        if (flagHasComparisonDateAndOrTimeSpecEnd)
          {
            handler->start_pair("ComparisonDateAndOrTimeSpecEnd");
            storeComparisonDateAndOrTimeSpecEnd->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.";
          }
        if (!(hasDayOfWeekRequested()))
          {
            return "When parsing the object for %what%, the \"DayOfWeekRequested\" field was missing.";
          }
        if (!(hasDateAndOrTimeSpecInFuture()))
          {
            return "When parsing the object for %what%, the \"DateAndOrTimeSpecInFuture\" field was missing.";
          }
        if (!(hasComparisonRequested()))
          {
            return "When parsing the object for %what%, the \"ComparisonRequested\" field was missing.";
          }
        if (!(hasIncludeTime()))
          {
            return "When parsing the object for %what%, the \"IncludeTime\" field was missing.";
          }
        return NULL;
      }

    static DateAndTimeLookupInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateAndTimeLookupInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateAndTimeLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndTimeLookupInformationNuggetJSON>, DateAndTimeLookupInformationNuggetJSON *, bool> generator("Type DateAndTimeLookupInformationNugget", ignore_extras);
            parse_json_value(text, "Text for DateAndTimeLookupInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateAndTimeLookupInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateAndTimeLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateAndTimeLookupInformationNuggetJSON>, DateAndTimeLookupInformationNuggetJSON *, bool> generator("Type DateAndTimeLookupInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DateAndTimeInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorDateAndOrTimeSpec;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDestinationMapLocation;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDayOfWeekRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDateAndOrTimeSpecInFuture;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorComparisonRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIncludeTime;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorComparisonDateAndOrTimeSpec;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorComparisonDateAndOrTimeSpecEnd;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "DateAndTimeLookupCommand") == 0))
                throw("The key field has a value other than `DateAndTimeLookupCommand'.");
            DateAndTimeLookupInformationNuggetJSON *result = new DateAndTimeLookupInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<DateAndTimeLookupInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateAndTimeLookupInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((DateAndTimeLookupInformationNuggetJSON *)new_result);
          }
        void finish(DateAndTimeLookupInformationNuggetJSON *result)
          {
            if (fieldGeneratorDateAndOrTimeSpec.have_value)
              {
                result->setDateAndOrTimeSpec(fieldGeneratorDateAndOrTimeSpec.value.referenced());
                fieldGeneratorDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.");
              }
            if (fieldGeneratorDestinationMapLocation.have_value)
              {
                result->setDestinationMapLocation(fieldGeneratorDestinationMapLocation.value.referenced());
                fieldGeneratorDestinationMapLocation.have_value = false;
              }
            if (fieldGeneratorDayOfWeekRequested.have_value)
              {
                result->setDayOfWeekRequested(fieldGeneratorDayOfWeekRequested.value);
                fieldGeneratorDayOfWeekRequested.have_value = false;
              }
            else if (!(result->hasDayOfWeekRequested()))
              {
                error("When parsing the object for %what%, the \"DayOfWeekRequested\" field was missing.");
              }
            if (fieldGeneratorDateAndOrTimeSpecInFuture.have_value)
              {
                result->setDateAndOrTimeSpecInFuture(fieldGeneratorDateAndOrTimeSpecInFuture.value);
                fieldGeneratorDateAndOrTimeSpecInFuture.have_value = false;
              }
            else if (!(result->hasDateAndOrTimeSpecInFuture()))
              {
                error("When parsing the object for %what%, the \"DateAndOrTimeSpecInFuture\" field was missing.");
              }
            if (fieldGeneratorComparisonRequested.have_value)
              {
                result->setComparisonRequested(fieldGeneratorComparisonRequested.value);
                fieldGeneratorComparisonRequested.have_value = false;
              }
            else if (!(result->hasComparisonRequested()))
              {
                error("When parsing the object for %what%, the \"ComparisonRequested\" field was missing.");
              }
            if (fieldGeneratorIncludeTime.have_value)
              {
                result->setIncludeTime(fieldGeneratorIncludeTime.value);
                fieldGeneratorIncludeTime.have_value = false;
              }
            else if (!(result->hasIncludeTime()))
              {
                error("When parsing the object for %what%, the \"IncludeTime\" field was missing.");
              }
            if (fieldGeneratorComparisonDateAndOrTimeSpec.have_value)
              {
                result->setComparisonDateAndOrTimeSpec(fieldGeneratorComparisonDateAndOrTimeSpec.value.referenced());
                fieldGeneratorComparisonDateAndOrTimeSpec.have_value = false;
              }
            if (fieldGeneratorComparisonDateAndOrTimeSpecEnd.have_value)
              {
                result->setComparisonDateAndOrTimeSpecEnd(fieldGeneratorComparisonDateAndOrTimeSpecEnd.value.referenced());
                fieldGeneratorComparisonDateAndOrTimeSpecEnd.have_value = false;
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(DateAndTimeLookupInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "omparison", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'D':
                                if (strncmp(&(field_name[11]), "ateAndOrTimeSpec", 16) == 0)
                                  {
                                    switch ((unsigned char)(field_name[27]))
                                      {
                                        case 0:
                                            return &fieldGeneratorComparisonDateAndOrTimeSpec;
                                        case 'E':
                                            if (strcmp(&(field_name[28]), "nd") == 0)
                                                return &fieldGeneratorComparisonDateAndOrTimeSpecEnd;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'R':
                                if (strcmp(&(field_name[11]), "equested") == 0)
                                    return &fieldGeneratorComparisonRequested;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 't':
                                    if (strncmp(&(field_name[3]), "eAndOrTimeSpec", 14) == 0)
                                      {
                                        switch ((unsigned char)(field_name[17]))
                                          {
                                            case 0:
                                                return &fieldGeneratorDateAndOrTimeSpec;
                                            case 'I':
                                                if (strcmp(&(field_name[18]), "nFuture") == 0)
                                                    return &fieldGeneratorDateAndOrTimeSpecInFuture;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'y':
                                    if (strcmp(&(field_name[3]), "OfWeekRequested") == 0)
                                        return &fieldGeneratorDayOfWeekRequested;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "stinationMapLocation") == 0)
                                return &fieldGeneratorDestinationMapLocation;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "ncludeTime") == 0)
                        return &fieldGeneratorIncludeTime;
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorDateAndOrTimeSpec("field \"DateAndOrTimeSpec\" of the DateAndTimeLookupInformationNugget class", ignore_extras), fieldGeneratorDestinationMapLocation("field \"DestinationMapLocation\" of the DateAndTimeLookupInformationNugget class", ignore_extras), fieldGeneratorDayOfWeekRequested("field \"DayOfWeekRequested\" of the DateAndTimeLookupInformationNugget class"), fieldGeneratorDateAndOrTimeSpecInFuture("field \"DateAndOrTimeSpecInFuture\" of the DateAndTimeLookupInformationNugget class"), fieldGeneratorComparisonRequested("field \"ComparisonRequested\" of the DateAndTimeLookupInformationNugget class"), fieldGeneratorIncludeTime("field \"IncludeTime\" of the DateAndTimeLookupInformationNugget class"), fieldGeneratorComparisonDateAndOrTimeSpec("field \"ComparisonDateAndOrTimeSpec\" of the DateAndTimeLookupInformationNugget class", ignore_extras), fieldGeneratorComparisonDateAndOrTimeSpecEnd("field \"ComparisonDateAndOrTimeSpecEnd\" of the DateAndTimeLookupInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateAndTimeLookupInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndOrTimeSpec.reset();
            fieldGeneratorDestinationMapLocation.reset();
            fieldGeneratorDayOfWeekRequested.reset();
            fieldGeneratorDateAndOrTimeSpecInFuture.reset();
            fieldGeneratorComparisonRequested.reset();
            fieldGeneratorIncludeTime.reset();
            fieldGeneratorComparisonDateAndOrTimeSpec.reset();
            fieldGeneratorComparisonDateAndOrTimeSpecEnd.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DATEANDTIMELOOKUPINFORMATIONNUGGETJSON_H */
