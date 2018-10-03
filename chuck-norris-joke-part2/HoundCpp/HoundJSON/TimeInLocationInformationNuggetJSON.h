/* file "TimeInLocationInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEINLOCATIONINFORMATIONNUGGETJSON_H
#define TIMEINLOCATIONINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "MapLocationJSON.h"
#include "TimeZoneJSON.h"
#include "DateTimeSpecJSON.h"
#include "MapLocationJSON.h"
#include "LocationAndTimeJSON.h"
#include "TimeZoneJSON.h"
#include "DateTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimeInLocationInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasSourceMapLocation;
    MapLocationJSON * storeSourceMapLocation;
    bool flagHasSourceTimeZone;
    TimeZoneJSON * storeSourceTimeZone;
    bool flagHasSourceDateTimeSpec;
    DateTimeSpecJSON * storeSourceDateTimeSpec;
    bool flagHasDestinationMapLocation;
    MapLocationJSON * storeDestinationMapLocation;
    bool flagHasDestinationLocationsAndTimes;
    std::vector< LocationAndTimeJSON * > storeDestinationLocationsAndTimes;
    bool flagHasDestinationTimeZone;
    TimeZoneJSON * storeDestinationTimeZone;
    bool flagHasDestinationDateTimeSpec;
    DateTimeSpecJSON * storeDestinationDateTimeSpec;
    bool flagHasIsDateRequested;
    bool storeIsDateRequested;
    bool flagHasIsTimeInFuture;
    bool storeIsTimeInFuture;
    bool flagHasIsTimeInPast;
    bool storeIsTimeInPast;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeInLocationInformationNuggetJSON(const TimeInLocationInformationNuggetJSON &);
    TimeInLocationInformationNuggetJSON & operator=(const TimeInLocationInformationNuggetJSON &other);

    JSONValue * extraSourceMapLocationToJSON(void) const;
    JSONValue * extraSourceTimeZoneToJSON(void) const;
    JSONValue * extraSourceDateTimeSpecToJSON(void) const;
    JSONValue * extraDestinationMapLocationToJSON(void) const;
    JSONValue * extraDestinationLocationsAndTimesToJSON(void) const;
    JSONValue * extraDestinationTimeZoneToJSON(void) const;
    JSONValue * extraDestinationDateTimeSpecToJSON(void) const;
    JSONValue * extraIsDateRequestedToJSON(void) const;
    JSONValue * extraIsTimeInFutureToJSON(void) const;
    JSONValue * extraIsTimeInPastToJSON(void) const;

    void  fromJSONSourceMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationLocationsAndTimes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsDateRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsTimeInFuture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsTimeInPast(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeInLocationInformationNuggetJSON(void);
    virtual ~TimeInLocationInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasSourceMapLocation(void) const;
    MapLocationJSON *  getSourceMapLocation(void);
    const MapLocationJSON *  getSourceMapLocation(void) const;
    bool  hasSourceTimeZone(void) const;
    TimeZoneJSON *  getSourceTimeZone(void);
    const TimeZoneJSON *  getSourceTimeZone(void) const;
    bool  hasSourceDateTimeSpec(void) const;
    DateTimeSpecJSON *  getSourceDateTimeSpec(void);
    const DateTimeSpecJSON *  getSourceDateTimeSpec(void) const;
    bool  hasDestinationMapLocation(void) const;
    MapLocationJSON *  getDestinationMapLocation(void);
    const MapLocationJSON *  getDestinationMapLocation(void) const;
    bool  hasDestinationLocationsAndTimes(void) const;
    size_t  countOfDestinationLocationsAndTimes(void) const;
    LocationAndTimeJSON *  elementOfDestinationLocationsAndTimes(size_t element_num);
    const LocationAndTimeJSON *  elementOfDestinationLocationsAndTimes(size_t element_num) const;
    std::vector< LocationAndTimeJSON * >  getDestinationLocationsAndTimes(void);
    const std::vector< LocationAndTimeJSON * >  getDestinationLocationsAndTimes(void) const;
    bool  hasDestinationTimeZone(void) const;
    TimeZoneJSON *  getDestinationTimeZone(void);
    const TimeZoneJSON *  getDestinationTimeZone(void) const;
    bool  hasDestinationDateTimeSpec(void) const;
    DateTimeSpecJSON *  getDestinationDateTimeSpec(void);
    const DateTimeSpecJSON *  getDestinationDateTimeSpec(void) const;
    bool  hasIsDateRequested(void) const;
    bool  getIsDateRequested(void);
    const bool  getIsDateRequested(void) const;
    bool  hasIsTimeInFuture(void) const;
    bool  getIsTimeInFuture(void);
    const bool  getIsTimeInFuture(void) const;
    bool  hasIsTimeInPast(void) const;
    bool  getIsTimeInPast(void);
    const bool  getIsTimeInPast(void) const;

    virtual size_t extraTimeInLocationInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeInLocationInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeInLocationInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeInLocationInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeInLocationInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeInLocationInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSourceMapLocation)
            ++result;
        if (flagHasSourceTimeZone)
            ++result;
        if (flagHasSourceDateTimeSpec)
            ++result;
        if (flagHasDestinationMapLocation)
            ++result;
        if (flagHasDestinationLocationsAndTimes)
            ++result;
        if (flagHasDestinationTimeZone)
            ++result;
        if (flagHasDestinationDateTimeSpec)
            ++result;
        if (flagHasIsDateRequested)
            ++result;
        if (flagHasIsTimeInFuture)
            ++result;
        if (flagHasIsTimeInPast)
            ++result;
        result += extraTimeInLocationInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSourceMapLocation)
          {
            if (remainder == 0)
                return "SourceMapLocation";
            --remainder;
          }
        if (flagHasSourceTimeZone)
          {
            if (remainder == 0)
                return "SourceTimeZone";
            --remainder;
          }
        if (flagHasSourceDateTimeSpec)
          {
            if (remainder == 0)
                return "SourceDateTimeSpec";
            --remainder;
          }
        if (flagHasDestinationMapLocation)
          {
            if (remainder == 0)
                return "DestinationMapLocation";
            --remainder;
          }
        if (flagHasDestinationLocationsAndTimes)
          {
            if (remainder == 0)
                return "DestinationLocationsAndTimes";
            --remainder;
          }
        if (flagHasDestinationTimeZone)
          {
            if (remainder == 0)
                return "DestinationTimeZone";
            --remainder;
          }
        if (flagHasDestinationDateTimeSpec)
          {
            if (remainder == 0)
                return "DestinationDateTimeSpec";
            --remainder;
          }
        if (flagHasIsDateRequested)
          {
            if (remainder == 0)
                return "IsDateRequested";
            --remainder;
          }
        if (flagHasIsTimeInFuture)
          {
            if (remainder == 0)
                return "IsTimeInFuture";
            --remainder;
          }
        if (flagHasIsTimeInPast)
          {
            if (remainder == 0)
                return "IsTimeInPast";
            --remainder;
          }
        return extraTimeInLocationInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSourceMapLocation)
          {
            if (remainder == 0)
                return extraSourceMapLocationToJSON();
            --remainder;
          }
        if (flagHasSourceTimeZone)
          {
            if (remainder == 0)
                return extraSourceTimeZoneToJSON();
            --remainder;
          }
        if (flagHasSourceDateTimeSpec)
          {
            if (remainder == 0)
                return extraSourceDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationMapLocation)
          {
            if (remainder == 0)
                return extraDestinationMapLocationToJSON();
            --remainder;
          }
        if (flagHasDestinationLocationsAndTimes)
          {
            if (remainder == 0)
                return extraDestinationLocationsAndTimesToJSON();
            --remainder;
          }
        if (flagHasDestinationTimeZone)
          {
            if (remainder == 0)
                return extraDestinationTimeZoneToJSON();
            --remainder;
          }
        if (flagHasDestinationDateTimeSpec)
          {
            if (remainder == 0)
                return extraDestinationDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasIsDateRequested)
          {
            if (remainder == 0)
                return extraIsDateRequestedToJSON();
            --remainder;
          }
        if (flagHasIsTimeInFuture)
          {
            if (remainder == 0)
                return extraIsTimeInFutureToJSON();
            --remainder;
          }
        if (flagHasIsTimeInPast)
          {
            if (remainder == 0)
                return extraIsTimeInPastToJSON();
            --remainder;
          }
        return extraTimeInLocationInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSourceMapLocation)
          {
            if (remainder == 0)
                return extraSourceMapLocationToJSON();
            --remainder;
          }
        if (flagHasSourceTimeZone)
          {
            if (remainder == 0)
                return extraSourceTimeZoneToJSON();
            --remainder;
          }
        if (flagHasSourceDateTimeSpec)
          {
            if (remainder == 0)
                return extraSourceDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationMapLocation)
          {
            if (remainder == 0)
                return extraDestinationMapLocationToJSON();
            --remainder;
          }
        if (flagHasDestinationLocationsAndTimes)
          {
            if (remainder == 0)
                return extraDestinationLocationsAndTimesToJSON();
            --remainder;
          }
        if (flagHasDestinationTimeZone)
          {
            if (remainder == 0)
                return extraDestinationTimeZoneToJSON();
            --remainder;
          }
        if (flagHasDestinationDateTimeSpec)
          {
            if (remainder == 0)
                return extraDestinationDateTimeSpecToJSON();
            --remainder;
          }
        if (flagHasIsDateRequested)
          {
            if (remainder == 0)
                return extraIsDateRequestedToJSON();
            --remainder;
          }
        if (flagHasIsTimeInFuture)
          {
            if (remainder == 0)
                return extraIsTimeInFutureToJSON();
            --remainder;
          }
        if (flagHasIsTimeInPast)
          {
            if (remainder == 0)
                return extraIsTimeInPastToJSON();
            --remainder;
          }
        return extraTimeInLocationInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[12]), "ateTimeSpec") == 0)
                                return (flagHasDestinationDateTimeSpec ? extraDestinationDateTimeSpecToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[12]), "ocationsAndTimes") == 0)
                                return (flagHasDestinationLocationsAndTimes ? extraDestinationLocationsAndTimesToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[12]), "apLocation") == 0)
                                return (flagHasDestinationMapLocation ? extraDestinationMapLocationToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[12]), "imeZone") == 0)
                                return (flagHasDestinationTimeZone ? extraDestinationTimeZoneToJSON() : NULL);
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
                        case 'D':
                            if (strcmp(&(field_name[3]), "ateRequested") == 0)
                                return (flagHasIsDateRequested ? extraIsDateRequestedToJSON() : NULL);
                            break;
                        case 'T':
                            if (strncmp(&(field_name[3]), "imeIn", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(field_name[9]), "uture") == 0)
                                            return (flagHasIsTimeInFuture ? extraIsTimeInFutureToJSON() : NULL);
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[9]), "ast") == 0)
                                            return (flagHasIsTimeInPast ? extraIsTimeInPastToJSON() : NULL);
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
            case 'S':
                if (strncmp(&(field_name[1]), "ource", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[7]), "ateTimeSpec") == 0)
                                return (flagHasSourceDateTimeSpec ? extraSourceDateTimeSpecToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "apLocation") == 0)
                                return (flagHasSourceMapLocation ? extraSourceMapLocationToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[7]), "imeZone") == 0)
                                return (flagHasSourceTimeZone ? extraSourceTimeZoneToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimeInLocationInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[12]), "ateTimeSpec") == 0)
                                return (flagHasDestinationDateTimeSpec ? extraDestinationDateTimeSpecToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[12]), "ocationsAndTimes") == 0)
                                return (flagHasDestinationLocationsAndTimes ? extraDestinationLocationsAndTimesToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[12]), "apLocation") == 0)
                                return (flagHasDestinationMapLocation ? extraDestinationMapLocationToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[12]), "imeZone") == 0)
                                return (flagHasDestinationTimeZone ? extraDestinationTimeZoneToJSON() : NULL);
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
                        case 'D':
                            if (strcmp(&(field_name[3]), "ateRequested") == 0)
                                return (flagHasIsDateRequested ? extraIsDateRequestedToJSON() : NULL);
                            break;
                        case 'T':
                            if (strncmp(&(field_name[3]), "imeIn", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(field_name[9]), "uture") == 0)
                                            return (flagHasIsTimeInFuture ? extraIsTimeInFutureToJSON() : NULL);
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[9]), "ast") == 0)
                                            return (flagHasIsTimeInPast ? extraIsTimeInPastToJSON() : NULL);
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
            case 'S':
                if (strncmp(&(field_name[1]), "ource", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[7]), "ateTimeSpec") == 0)
                                return (flagHasSourceDateTimeSpec ? extraSourceDateTimeSpecToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "apLocation") == 0)
                                return (flagHasSourceMapLocation ? extraSourceMapLocationToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[7]), "imeZone") == 0)
                                return (flagHasSourceTimeZone ? extraSourceTimeZoneToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimeInLocationInformationNuggetLookup(field_name);
      }

    void setSourceMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceMapLocation)
          {
            storeSourceMapLocation->remove_reference();
          }
        flagHasSourceMapLocation = true;
        storeSourceMapLocation = new_value;
      }
    void unsetSourceMapLocation(void)
      {
        if (flagHasSourceMapLocation)
          {
            storeSourceMapLocation->remove_reference();
          }
        flagHasSourceMapLocation = false;
      }
    void setSourceTimeZone(TimeZoneJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceTimeZone)
          {
            storeSourceTimeZone->remove_reference();
          }
        flagHasSourceTimeZone = true;
        storeSourceTimeZone = new_value;
      }
    void unsetSourceTimeZone(void)
      {
        if (flagHasSourceTimeZone)
          {
            storeSourceTimeZone->remove_reference();
          }
        flagHasSourceTimeZone = false;
      }
    void setSourceDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceDateTimeSpec)
          {
            storeSourceDateTimeSpec->remove_reference();
          }
        flagHasSourceDateTimeSpec = true;
        storeSourceDateTimeSpec = new_value;
      }
    void unsetSourceDateTimeSpec(void)
      {
        if (flagHasSourceDateTimeSpec)
          {
            storeSourceDateTimeSpec->remove_reference();
          }
        flagHasSourceDateTimeSpec = false;
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
    void initDestinationLocationsAndTimes(void)
      {
        if (flagHasDestinationLocationsAndTimes)
          {
            for (size_t num2 = 0; num2 < storeDestinationLocationsAndTimes.size(); ++num2)
              {
                storeDestinationLocationsAndTimes[num2]->remove_reference();
              }
          }
        flagHasDestinationLocationsAndTimes = true;
        storeDestinationLocationsAndTimes.clear();
      }
    void appendDestinationLocationsAndTimes(LocationAndTimeJSON * to_append)
      {
        if (!flagHasDestinationLocationsAndTimes)
          {
            flagHasDestinationLocationsAndTimes = true;
            storeDestinationLocationsAndTimes.clear();
          }
        assert(flagHasDestinationLocationsAndTimes);
        to_append->add_reference();
        storeDestinationLocationsAndTimes.push_back(to_append);
      }
    void unsetDestinationLocationsAndTimes(void)
      {
        if (flagHasDestinationLocationsAndTimes)
          {
            for (size_t num3 = 0; num3 < storeDestinationLocationsAndTimes.size(); ++num3)
              {
                storeDestinationLocationsAndTimes[num3]->remove_reference();
              }
          }
        flagHasDestinationLocationsAndTimes = false;
        storeDestinationLocationsAndTimes.clear();
      }
    void setDestinationTimeZone(TimeZoneJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationTimeZone)
          {
            storeDestinationTimeZone->remove_reference();
          }
        flagHasDestinationTimeZone = true;
        storeDestinationTimeZone = new_value;
      }
    void unsetDestinationTimeZone(void)
      {
        if (flagHasDestinationTimeZone)
          {
            storeDestinationTimeZone->remove_reference();
          }
        flagHasDestinationTimeZone = false;
      }
    void setDestinationDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationDateTimeSpec)
          {
            storeDestinationDateTimeSpec->remove_reference();
          }
        flagHasDestinationDateTimeSpec = true;
        storeDestinationDateTimeSpec = new_value;
      }
    void unsetDestinationDateTimeSpec(void)
      {
        if (flagHasDestinationDateTimeSpec)
          {
            storeDestinationDateTimeSpec->remove_reference();
          }
        flagHasDestinationDateTimeSpec = false;
      }
    void setIsDateRequested(bool new_value)
      {
        flagHasIsDateRequested = true;
        storeIsDateRequested = new_value;
      }
    void unsetIsDateRequested(void)
      {
        flagHasIsDateRequested = false;
      }
    void setIsTimeInFuture(bool new_value)
      {
        flagHasIsTimeInFuture = true;
        storeIsTimeInFuture = new_value;
      }
    void unsetIsTimeInFuture(void)
      {
        flagHasIsTimeInFuture = false;
      }
    void setIsTimeInPast(bool new_value)
      {
        flagHasIsTimeInPast = true;
        storeIsTimeInPast = new_value;
      }
    void unsetIsTimeInPast(void)
      {
        flagHasIsTimeInPast = false;
      }

    virtual void extraTimeInLocationInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeInLocationInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeInLocationInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraTimeInLocationInformationNuggetAppendPair(key, new_component);
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
            case 'D':
                if (strncmp(&(key[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'D':
                            if (strcmp(&(key[12]), "ateTimeSpec") == 0)
                                {
                                fromJSONDestinationDateTimeSpec(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[12]), "ocationsAndTimes") == 0)
                                {
                                fromJSONDestinationLocationsAndTimes(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[12]), "apLocation") == 0)
                                {
                                fromJSONDestinationMapLocation(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[12]), "imeZone") == 0)
                                {
                                fromJSONDestinationTimeZone(new_component, false);
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
                        case 'D':
                            if (strcmp(&(key[3]), "ateRequested") == 0)
                                {
                                fromJSONIsDateRequested(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strncmp(&(key[3]), "imeIn", 5) == 0)
                              {
                                switch ((unsigned char)(key[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(key[9]), "uture") == 0)
                                            {
                                            fromJSONIsTimeInFuture(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'P':
                                        if (strcmp(&(key[9]), "ast") == 0)
                                            {
                                            fromJSONIsTimeInPast(new_component, false);
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
            case 'S':
                if (strncmp(&(key[1]), "ource", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'D':
                            if (strcmp(&(key[7]), "ateTimeSpec") == 0)
                                {
                                fromJSONSourceDateTimeSpec(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "apLocation") == 0)
                                {
                                fromJSONSourceMapLocation(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[7]), "imeZone") == 0)
                                {
                                fromJSONSourceTimeZone(new_component, false);
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
        extraTimeInLocationInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strncmp(&(key[1]), "estination", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'D':
                            if (strcmp(&(key[12]), "ateTimeSpec") == 0)
                                {
                                fromJSONDestinationDateTimeSpec(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[12]), "ocationsAndTimes") == 0)
                                {
                                fromJSONDestinationLocationsAndTimes(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[12]), "apLocation") == 0)
                                {
                                fromJSONDestinationMapLocation(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[12]), "imeZone") == 0)
                                {
                                fromJSONDestinationTimeZone(new_component, false);
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
                        case 'D':
                            if (strcmp(&(key[3]), "ateRequested") == 0)
                                {
                                fromJSONIsDateRequested(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strncmp(&(key[3]), "imeIn", 5) == 0)
                              {
                                switch ((unsigned char)(key[8]))
                                  {
                                    case 'F':
                                        if (strcmp(&(key[9]), "uture") == 0)
                                            {
                                            fromJSONIsTimeInFuture(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'P':
                                        if (strcmp(&(key[9]), "ast") == 0)
                                            {
                                            fromJSONIsTimeInPast(new_component, false);
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
            case 'S':
                if (strncmp(&(key[1]), "ource", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'D':
                            if (strcmp(&(key[7]), "ateTimeSpec") == 0)
                                {
                                fromJSONSourceDateTimeSpec(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "apLocation") == 0)
                                {
                                fromJSONSourceMapLocation(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[7]), "imeZone") == 0)
                                {
                                fromJSONSourceTimeZone(new_component, false);
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
        extraTimeInLocationInformationNuggetSetField(key, new_component);
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
        if (flagHasSourceMapLocation)
          {
            handler->start_pair("SourceMapLocation");
            storeSourceMapLocation->write_as_json(handler);
          }
        if (flagHasSourceTimeZone)
          {
            handler->start_pair("SourceTimeZone");
            storeSourceTimeZone->write_as_json(handler);
          }
        assert(flagHasSourceDateTimeSpec);
        handler->start_pair("SourceDateTimeSpec");
        storeSourceDateTimeSpec->write_as_json(handler);
        if (flagHasDestinationMapLocation)
          {
            handler->start_pair("DestinationMapLocation");
            storeDestinationMapLocation->write_as_json(handler);
          }
        if (flagHasDestinationLocationsAndTimes)
          {
            handler->start_pair("DestinationLocationsAndTimes");
            assert(storeDestinationLocationsAndTimes.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDestinationLocationsAndTimes.size(); ++num1)
              {
                storeDestinationLocationsAndTimes[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDestinationTimeZone)
          {
            handler->start_pair("DestinationTimeZone");
            storeDestinationTimeZone->write_as_json(handler);
          }
        assert(flagHasDestinationDateTimeSpec);
        handler->start_pair("DestinationDateTimeSpec");
        storeDestinationDateTimeSpec->write_as_json(handler);
        if (flagHasIsDateRequested)
          {
            handler->start_pair("IsDateRequested");
            handler->boolean_value(storeIsDateRequested);
          }
        if (flagHasIsTimeInFuture)
          {
            handler->start_pair("IsTimeInFuture");
            handler->boolean_value(storeIsTimeInFuture);
          }
        if (flagHasIsTimeInPast)
          {
            handler->start_pair("IsTimeInPast");
            handler->boolean_value(storeIsTimeInPast);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSourceDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"SourceDateTimeSpec\" field was missing.";
          }
        if (!(hasDestinationDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DestinationDateTimeSpec\" field was missing.";
          }
        return NULL;
      }

    static TimeInLocationInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeInLocationInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeInLocationInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeInLocationInformationNuggetJSON>, TimeInLocationInformationNuggetJSON *, bool> generator("Type TimeInLocationInformationNugget", ignore_extras);
            parse_json_value(text, "Text for TimeInLocationInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeInLocationInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeInLocationInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeInLocationInformationNuggetJSON>, TimeInLocationInformationNuggetJSON *, bool> generator("Type TimeInLocationInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorSourceMapLocation;
        JSONHoldingGenerator<TimeZoneJSON::Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool > fieldGeneratorSourceTimeZone;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorSourceDateTimeSpec;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDestinationMapLocation;
        JSONHoldingArrayGenerator<LocationAndTimeJSON::Generator, RCHandle<LocationAndTimeJSON>, LocationAndTimeJSON *, bool > fieldGeneratorDestinationLocationsAndTimes;
        JSONHoldingGenerator<TimeZoneJSON::Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool > fieldGeneratorDestinationTimeZone;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorDestinationDateTimeSpec;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsDateRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsTimeInFuture;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsTimeInPast;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "TimeInLocation") == 0))
                throw("The key field has a value other than `TimeInLocation'.");
            TimeInLocationInformationNuggetJSON *result = new TimeInLocationInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<TimeInLocationInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeInLocationInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((TimeInLocationInformationNuggetJSON *)new_result);
          }
        void finish(TimeInLocationInformationNuggetJSON *result)
          {
            if (fieldGeneratorSourceMapLocation.have_value)
              {
                result->setSourceMapLocation(fieldGeneratorSourceMapLocation.value.referenced());
                fieldGeneratorSourceMapLocation.have_value = false;
              }
            if (fieldGeneratorSourceTimeZone.have_value)
              {
                result->setSourceTimeZone(fieldGeneratorSourceTimeZone.value.referenced());
                fieldGeneratorSourceTimeZone.have_value = false;
              }
            if (fieldGeneratorSourceDateTimeSpec.have_value)
              {
                result->setSourceDateTimeSpec(fieldGeneratorSourceDateTimeSpec.value.referenced());
                fieldGeneratorSourceDateTimeSpec.have_value = false;
              }
            else if (!(result->hasSourceDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"SourceDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorDestinationMapLocation.have_value)
              {
                result->setDestinationMapLocation(fieldGeneratorDestinationMapLocation.value.referenced());
                fieldGeneratorDestinationMapLocation.have_value = false;
              }
            if (fieldGeneratorDestinationLocationsAndTimes.have_value)
              {
                result->initDestinationLocationsAndTimes();
                size_t count = fieldGeneratorDestinationLocationsAndTimes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDestinationLocationsAndTimes(fieldGeneratorDestinationLocationsAndTimes.value[num].referenced());
                  }
                fieldGeneratorDestinationLocationsAndTimes.value.clear();
                fieldGeneratorDestinationLocationsAndTimes.have_value = false;
              }
            if (fieldGeneratorDestinationTimeZone.have_value)
              {
                result->setDestinationTimeZone(fieldGeneratorDestinationTimeZone.value.referenced());
                fieldGeneratorDestinationTimeZone.have_value = false;
              }
            if (fieldGeneratorDestinationDateTimeSpec.have_value)
              {
                result->setDestinationDateTimeSpec(fieldGeneratorDestinationDateTimeSpec.value.referenced());
                fieldGeneratorDestinationDateTimeSpec.have_value = false;
              }
            else if (!(result->hasDestinationDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DestinationDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorIsDateRequested.have_value)
              {
                result->setIsDateRequested(fieldGeneratorIsDateRequested.value);
                fieldGeneratorIsDateRequested.have_value = false;
              }
            if (fieldGeneratorIsTimeInFuture.have_value)
              {
                result->setIsTimeInFuture(fieldGeneratorIsTimeInFuture.value);
                fieldGeneratorIsTimeInFuture.have_value = false;
              }
            if (fieldGeneratorIsTimeInPast.have_value)
              {
                result->setIsTimeInPast(fieldGeneratorIsTimeInPast.value);
                fieldGeneratorIsTimeInPast.have_value = false;
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(TimeInLocationInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "estination", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[12]), "ateTimeSpec") == 0)
                                    return &fieldGeneratorDestinationDateTimeSpec;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[12]), "ocationsAndTimes") == 0)
                                    return &fieldGeneratorDestinationLocationsAndTimes;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[12]), "apLocation") == 0)
                                    return &fieldGeneratorDestinationMapLocation;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[12]), "imeZone") == 0)
                                    return &fieldGeneratorDestinationTimeZone;
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
                            case 'D':
                                if (strcmp(&(field_name[3]), "ateRequested") == 0)
                                    return &fieldGeneratorIsDateRequested;
                                break;
                            case 'T':
                                if (strncmp(&(field_name[3]), "imeIn", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[8]))
                                      {
                                        case 'F':
                                            if (strcmp(&(field_name[9]), "uture") == 0)
                                                return &fieldGeneratorIsTimeInFuture;
                                            break;
                                        case 'P':
                                            if (strcmp(&(field_name[9]), "ast") == 0)
                                                return &fieldGeneratorIsTimeInPast;
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
                case 'S':
                    if (strncmp(&(field_name[1]), "ource", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[7]), "ateTimeSpec") == 0)
                                    return &fieldGeneratorSourceDateTimeSpec;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[7]), "apLocation") == 0)
                                    return &fieldGeneratorSourceMapLocation;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "imeZone") == 0)
                                    return &fieldGeneratorSourceTimeZone;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorSourceMapLocation("field \"SourceMapLocation\" of the TimeInLocationInformationNugget class", ignore_extras), fieldGeneratorSourceTimeZone("field \"SourceTimeZone\" of the TimeInLocationInformationNugget class", ignore_extras), fieldGeneratorSourceDateTimeSpec("field \"SourceDateTimeSpec\" of the TimeInLocationInformationNugget class", ignore_extras), fieldGeneratorDestinationMapLocation("field \"DestinationMapLocation\" of the TimeInLocationInformationNugget class", ignore_extras), fieldGeneratorDestinationLocationsAndTimes("field \"DestinationLocationsAndTimes\" of the TimeInLocationInformationNugget class", ignore_extras), fieldGeneratorDestinationTimeZone("field \"DestinationTimeZone\" of the TimeInLocationInformationNugget class", ignore_extras), fieldGeneratorDestinationDateTimeSpec("field \"DestinationDateTimeSpec\" of the TimeInLocationInformationNugget class", ignore_extras), fieldGeneratorIsDateRequested("field \"IsDateRequested\" of the TimeInLocationInformationNugget class"), fieldGeneratorIsTimeInFuture("field \"IsTimeInFuture\" of the TimeInLocationInformationNugget class"), fieldGeneratorIsTimeInPast("field \"IsTimeInPast\" of the TimeInLocationInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeInLocationInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSourceMapLocation.reset();
            fieldGeneratorSourceTimeZone.reset();
            fieldGeneratorSourceDateTimeSpec.reset();
            fieldGeneratorDestinationMapLocation.reset();
            fieldGeneratorDestinationLocationsAndTimes.reset();
            fieldGeneratorDestinationTimeZone.reset();
            fieldGeneratorDestinationDateTimeSpec.reset();
            fieldGeneratorIsDateRequested.reset();
            fieldGeneratorIsTimeInFuture.reset();
            fieldGeneratorIsTimeInPast.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEINLOCATIONINFORMATIONNUGGETJSON_H */
