/* file "FlightSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSPECJSON_H
#define FLIGHTSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "AirlineJSON.h"
#include "AirlineJSON.h"
#include "FlightTravelLocationJSON.h"
#include "FlightTravelLocationJSON.h"
#include "DepartureOrArrivalJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "DepartureOrArrivalJSON.h"
#include "FlightAttributeJSON.h"
#include "FlightTimeFormatJSON.h"
#include "FlightTimeFormatJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSpecJSON : public ReferenceCounted
  {
  private:
    bool flagHasNextFlight;
    bool storeNextFlight;
    bool flagHasAirline;
    AirlineJSON * storeAirline;
    bool flagHasAdditionalAirlineMatches;
    std::vector< AirlineJSON * > storeAdditionalAirlineMatches;
    bool flagHasFlightNumber;
    uint16_t storeFlightNumber;
    bool flagHasDepartureLocation;
    FlightTravelLocationJSON * storeDepartureLocation;
    bool flagHasDestinationLocation;
    FlightTravelLocationJSON * storeDestinationLocation;
    bool flagHasTypeOfLastLocationFilter;
    DepartureOrArrivalJSON * storeTypeOfLastLocationFilter;
    bool flagHasDepartureDateTimeRange;
    DateTimeRangeSpecJSON * storeDepartureDateTimeRange;
    bool flagHasArrivalDateTimeRange;
    DateTimeRangeSpecJSON * storeArrivalDateTimeRange;
    bool flagHasEitherDepartureOrArrivalDateTimeRange;
    DateTimeRangeSpecJSON * storeEitherDepartureOrArrivalDateTimeRange;
    bool flagHasTypeOfLastDateTimeRangeFilter;
    DepartureOrArrivalJSON * storeTypeOfLastDateTimeRangeFilter;
    bool flagHasRequestedFlightAttributes;
    std::vector< FlightAttributeJSON * > storeRequestedFlightAttributes;
    bool flagHasDepartureTimeFormat;
    FlightTimeFormatJSON * storeDepartureTimeFormat;
    bool flagHasArrivalTimeFormat;
    FlightTimeFormatJSON * storeArrivalTimeFormat;
    bool flagHasSpoken;
    std::string storeSpoken;
    bool flagHasWritten;
    std::string storeWritten;
    bool flagHasModeInteractionDisabled;
    bool storeModeInteractionDisabled;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightSpecJSON(const FlightSpecJSON &);
    FlightSpecJSON & operator=(const FlightSpecJSON &other);

    void  fromJSONNextFlight(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAirline(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAdditionalAirlineMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTypeOfLastLocationFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureDateTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArrivalDateTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEitherDepartureOrArrivalDateTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTypeOfLastDateTimeRangeFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedFlightAttributes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureTimeFormat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArrivalTimeFormat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONModeInteractionDisabled(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSpecJSON(void);
    virtual ~FlightSpecJSON(void);
    bool  hasNextFlight(void) const;
    bool  getNextFlight(void);
    const bool  getNextFlight(void) const;
    bool  hasAirline(void) const;
    AirlineJSON *  getAirline(void);
    const AirlineJSON *  getAirline(void) const;
    bool  hasAdditionalAirlineMatches(void) const;
    size_t  countOfAdditionalAirlineMatches(void) const;
    AirlineJSON *  elementOfAdditionalAirlineMatches(size_t element_num);
    const AirlineJSON *  elementOfAdditionalAirlineMatches(size_t element_num) const;
    std::vector< AirlineJSON * >  getAdditionalAirlineMatches(void);
    const std::vector< AirlineJSON * >  getAdditionalAirlineMatches(void) const;
    bool  hasFlightNumber(void) const;
    uint16_t  getFlightNumber(void);
    const uint16_t  getFlightNumber(void) const;
    bool  hasDepartureLocation(void) const;
    FlightTravelLocationJSON *  getDepartureLocation(void);
    const FlightTravelLocationJSON *  getDepartureLocation(void) const;
    bool  hasDestinationLocation(void) const;
    FlightTravelLocationJSON *  getDestinationLocation(void);
    const FlightTravelLocationJSON *  getDestinationLocation(void) const;
    bool  hasTypeOfLastLocationFilter(void) const;
    DepartureOrArrivalJSON *  getTypeOfLastLocationFilter(void);
    const DepartureOrArrivalJSON *  getTypeOfLastLocationFilter(void) const;
    DepartureOrArrivalJSON::TypeValue  getTypeOfLastLocationFilterValue(void);
    const DepartureOrArrivalJSON::TypeValue  getTypeOfLastLocationFilterValue(void) const;
    const char * getTypeOfLastLocationFilterAsChars(void) const;
    std::string  getTypeOfLastLocationFilterAsString(void) const;
    bool  hasDepartureDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getDepartureDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getDepartureDateTimeRange(void) const;
    bool  hasArrivalDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getArrivalDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getArrivalDateTimeRange(void) const;
    bool  hasEitherDepartureOrArrivalDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getEitherDepartureOrArrivalDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getEitherDepartureOrArrivalDateTimeRange(void) const;
    bool  hasTypeOfLastDateTimeRangeFilter(void) const;
    DepartureOrArrivalJSON *  getTypeOfLastDateTimeRangeFilter(void);
    const DepartureOrArrivalJSON *  getTypeOfLastDateTimeRangeFilter(void) const;
    DepartureOrArrivalJSON::TypeValue  getTypeOfLastDateTimeRangeFilterValue(void);
    const DepartureOrArrivalJSON::TypeValue  getTypeOfLastDateTimeRangeFilterValue(void) const;
    const char * getTypeOfLastDateTimeRangeFilterAsChars(void) const;
    std::string  getTypeOfLastDateTimeRangeFilterAsString(void) const;
    bool  hasRequestedFlightAttributes(void) const;
    size_t  countOfRequestedFlightAttributes(void) const;
    FlightAttributeJSON *  elementOfRequestedFlightAttributes(size_t element_num);
    const FlightAttributeJSON *  elementOfRequestedFlightAttributes(size_t element_num) const;
    std::vector< FlightAttributeJSON * >  getRequestedFlightAttributes(void);
    const std::vector< FlightAttributeJSON * >  getRequestedFlightAttributes(void) const;
    bool  hasDepartureTimeFormat(void) const;
    FlightTimeFormatJSON *  getDepartureTimeFormat(void);
    const FlightTimeFormatJSON *  getDepartureTimeFormat(void) const;
    bool  hasArrivalTimeFormat(void) const;
    FlightTimeFormatJSON *  getArrivalTimeFormat(void);
    const FlightTimeFormatJSON *  getArrivalTimeFormat(void) const;
    bool  hasSpoken(void) const;
    std::string  getSpoken(void);
    const std::string  getSpoken(void) const;
    bool  hasWritten(void) const;
    std::string  getWritten(void);
    const std::string  getWritten(void) const;
    bool  hasModeInteractionDisabled(void) const;
    bool  getModeInteractionDisabled(void);
    const bool  getModeInteractionDisabled(void) const;

    virtual size_t extraFlightSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setNextFlight(bool new_value)
      {
        flagHasNextFlight = true;
        storeNextFlight = new_value;
      }
    void unsetNextFlight(void)
      {
        flagHasNextFlight = false;
      }
    void setAirline(AirlineJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAirline)
          {
            storeAirline->remove_reference();
          }
        flagHasAirline = true;
        storeAirline = new_value;
      }
    void unsetAirline(void)
      {
        if (flagHasAirline)
          {
            storeAirline->remove_reference();
          }
        flagHasAirline = false;
      }
    void initAdditionalAirlineMatches(void)
      {
        if (flagHasAdditionalAirlineMatches)
          {
            for (size_t num3 = 0; num3 < storeAdditionalAirlineMatches.size(); ++num3)
              {
                storeAdditionalAirlineMatches[num3]->remove_reference();
              }
          }
        flagHasAdditionalAirlineMatches = true;
        storeAdditionalAirlineMatches.clear();
      }
    void appendAdditionalAirlineMatches(AirlineJSON * to_append)
      {
        if (!flagHasAdditionalAirlineMatches)
          {
            flagHasAdditionalAirlineMatches = true;
            storeAdditionalAirlineMatches.clear();
          }
        assert(flagHasAdditionalAirlineMatches);
        to_append->add_reference();
        storeAdditionalAirlineMatches.push_back(to_append);
      }
    void unsetAdditionalAirlineMatches(void)
      {
        if (flagHasAdditionalAirlineMatches)
          {
            for (size_t num4 = 0; num4 < storeAdditionalAirlineMatches.size(); ++num4)
              {
                storeAdditionalAirlineMatches[num4]->remove_reference();
              }
          }
        flagHasAdditionalAirlineMatches = false;
        storeAdditionalAirlineMatches.clear();
      }
    void setFlightNumber(uint16_t new_value)
      {
        flagHasFlightNumber = true;
        if (new_value < 0)
            throw("The value for field FlightNumber of FlightSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 9999)
            throw("The value for field FlightNumber of FlightSpecJSON is greater than the upper bound (9999) for that field.");
        storeFlightNumber = new_value;
      }
    void unsetFlightNumber(void)
      {
        flagHasFlightNumber = false;
      }
    void setDepartureLocation(FlightTravelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDepartureLocation)
          {
            storeDepartureLocation->remove_reference();
          }
        flagHasDepartureLocation = true;
        storeDepartureLocation = new_value;
      }
    void unsetDepartureLocation(void)
      {
        if (flagHasDepartureLocation)
          {
            storeDepartureLocation->remove_reference();
          }
        flagHasDepartureLocation = false;
      }
    void setDestinationLocation(FlightTravelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationLocation)
          {
            storeDestinationLocation->remove_reference();
          }
        flagHasDestinationLocation = true;
        storeDestinationLocation = new_value;
      }
    void unsetDestinationLocation(void)
      {
        if (flagHasDestinationLocation)
          {
            storeDestinationLocation->remove_reference();
          }
        flagHasDestinationLocation = false;
      }
    void setTypeOfLastLocationFilter(DepartureOrArrivalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTypeOfLastLocationFilter)
          {
            storeTypeOfLastLocationFilter->remove_reference();
          }
        flagHasTypeOfLastLocationFilter = true;
        storeTypeOfLastLocationFilter = new_value;
      }
    void setTypeOfLastLocationFilter(DepartureOrArrivalJSON::TypeValue new_value)
      {
        setTypeOfLastLocationFilter(new DepartureOrArrivalJSON(new_value));
      }
    void setTypeOfLastLocationFilter(const char *chars)
      {
        setTypeOfLastLocationFilter(new DepartureOrArrivalJSON(chars));
      }
    void setTypeOfLastLocationFilter(std::string the_string)
      {
        setTypeOfLastLocationFilter(new DepartureOrArrivalJSON(the_string));
      }
    void unsetTypeOfLastLocationFilter(void)
      {
        if (flagHasTypeOfLastLocationFilter)
          {
            storeTypeOfLastLocationFilter->remove_reference();
          }
        flagHasTypeOfLastLocationFilter = false;
      }
    void setDepartureDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDepartureDateTimeRange)
          {
            storeDepartureDateTimeRange->remove_reference();
          }
        flagHasDepartureDateTimeRange = true;
        storeDepartureDateTimeRange = new_value;
      }
    void unsetDepartureDateTimeRange(void)
      {
        if (flagHasDepartureDateTimeRange)
          {
            storeDepartureDateTimeRange->remove_reference();
          }
        flagHasDepartureDateTimeRange = false;
      }
    void setArrivalDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArrivalDateTimeRange)
          {
            storeArrivalDateTimeRange->remove_reference();
          }
        flagHasArrivalDateTimeRange = true;
        storeArrivalDateTimeRange = new_value;
      }
    void unsetArrivalDateTimeRange(void)
      {
        if (flagHasArrivalDateTimeRange)
          {
            storeArrivalDateTimeRange->remove_reference();
          }
        flagHasArrivalDateTimeRange = false;
      }
    void setEitherDepartureOrArrivalDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEitherDepartureOrArrivalDateTimeRange)
          {
            storeEitherDepartureOrArrivalDateTimeRange->remove_reference();
          }
        flagHasEitherDepartureOrArrivalDateTimeRange = true;
        storeEitherDepartureOrArrivalDateTimeRange = new_value;
      }
    void unsetEitherDepartureOrArrivalDateTimeRange(void)
      {
        if (flagHasEitherDepartureOrArrivalDateTimeRange)
          {
            storeEitherDepartureOrArrivalDateTimeRange->remove_reference();
          }
        flagHasEitherDepartureOrArrivalDateTimeRange = false;
      }
    void setTypeOfLastDateTimeRangeFilter(DepartureOrArrivalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTypeOfLastDateTimeRangeFilter)
          {
            storeTypeOfLastDateTimeRangeFilter->remove_reference();
          }
        flagHasTypeOfLastDateTimeRangeFilter = true;
        storeTypeOfLastDateTimeRangeFilter = new_value;
      }
    void setTypeOfLastDateTimeRangeFilter(DepartureOrArrivalJSON::TypeValue new_value)
      {
        setTypeOfLastDateTimeRangeFilter(new DepartureOrArrivalJSON(new_value));
      }
    void setTypeOfLastDateTimeRangeFilter(const char *chars)
      {
        setTypeOfLastDateTimeRangeFilter(new DepartureOrArrivalJSON(chars));
      }
    void setTypeOfLastDateTimeRangeFilter(std::string the_string)
      {
        setTypeOfLastDateTimeRangeFilter(new DepartureOrArrivalJSON(the_string));
      }
    void unsetTypeOfLastDateTimeRangeFilter(void)
      {
        if (flagHasTypeOfLastDateTimeRangeFilter)
          {
            storeTypeOfLastDateTimeRangeFilter->remove_reference();
          }
        flagHasTypeOfLastDateTimeRangeFilter = false;
      }
    void initRequestedFlightAttributes(void)
      {
        if (flagHasRequestedFlightAttributes)
          {
            for (size_t num5 = 0; num5 < storeRequestedFlightAttributes.size(); ++num5)
              {
                storeRequestedFlightAttributes[num5]->remove_reference();
              }
          }
        flagHasRequestedFlightAttributes = true;
        storeRequestedFlightAttributes.clear();
      }
    void appendRequestedFlightAttributes(FlightAttributeJSON * to_append)
      {
        if (!flagHasRequestedFlightAttributes)
          {
            flagHasRequestedFlightAttributes = true;
            storeRequestedFlightAttributes.clear();
          }
        assert(flagHasRequestedFlightAttributes);
        to_append->add_reference();
        storeRequestedFlightAttributes.push_back(to_append);
      }
    void appendRequestedFlightAttributes(FlightAttributeJSON::TypeValue new_value)
      {
        appendRequestedFlightAttributes(new FlightAttributeJSON(new_value));
      }
    void appendRequestedFlightAttributes(const char *chars)
      {
        appendRequestedFlightAttributes(new FlightAttributeJSON(chars));
      }
    void appendRequestedFlightAttributes(std::string the_string)
      {
        appendRequestedFlightAttributes(new FlightAttributeJSON(the_string));
      }
    void unsetRequestedFlightAttributes(void)
      {
        if (flagHasRequestedFlightAttributes)
          {
            for (size_t num6 = 0; num6 < storeRequestedFlightAttributes.size(); ++num6)
              {
                storeRequestedFlightAttributes[num6]->remove_reference();
              }
          }
        flagHasRequestedFlightAttributes = false;
        storeRequestedFlightAttributes.clear();
      }
    void setDepartureTimeFormat(FlightTimeFormatJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDepartureTimeFormat)
          {
            storeDepartureTimeFormat->remove_reference();
          }
        flagHasDepartureTimeFormat = true;
        storeDepartureTimeFormat = new_value;
      }
    void unsetDepartureTimeFormat(void)
      {
        if (flagHasDepartureTimeFormat)
          {
            storeDepartureTimeFormat->remove_reference();
          }
        flagHasDepartureTimeFormat = false;
      }
    void setArrivalTimeFormat(FlightTimeFormatJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArrivalTimeFormat)
          {
            storeArrivalTimeFormat->remove_reference();
          }
        flagHasArrivalTimeFormat = true;
        storeArrivalTimeFormat = new_value;
      }
    void unsetArrivalTimeFormat(void)
      {
        if (flagHasArrivalTimeFormat)
          {
            storeArrivalTimeFormat->remove_reference();
          }
        flagHasArrivalTimeFormat = false;
      }
    void setSpoken(std::string new_value)
      {
        flagHasSpoken = true;
        storeSpoken = new_value;
      }
    void unsetSpoken(void)
      {
        flagHasSpoken = false;
      }
    void setWritten(std::string new_value)
      {
        flagHasWritten = true;
        storeWritten = new_value;
      }
    void unsetWritten(void)
      {
        flagHasWritten = false;
      }
    void setModeInteractionDisabled(bool new_value)
      {
        flagHasModeInteractionDisabled = true;
        storeModeInteractionDisabled = new_value;
      }
    void unsetModeInteractionDisabled(void)
      {
        flagHasModeInteractionDisabled = false;
      }

    virtual void extraFlightSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightSpecLookup(key);
        if (old_field == NULL)
          {
            extraFlightSpecAppendPair(key, new_component);
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
        if (flagHasNextFlight)
          {
            handler->start_pair("NextFlight");
            handler->boolean_value(storeNextFlight);
          }
        if (flagHasAirline)
          {
            handler->start_pair("Airline");
            storeAirline->write_as_json(handler);
          }
        if (flagHasAdditionalAirlineMatches)
          {
            handler->start_pair("AdditionalAirlineMatches");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAdditionalAirlineMatches.size(); ++num1)
              {
                storeAdditionalAirlineMatches[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasFlightNumber)
          {
            handler->start_pair("FlightNumber");
            handler->number_value(storeFlightNumber);
          }
        if (flagHasDepartureLocation)
          {
            handler->start_pair("DepartureLocation");
            storeDepartureLocation->write_as_json(handler);
          }
        if (flagHasDestinationLocation)
          {
            handler->start_pair("DestinationLocation");
            storeDestinationLocation->write_as_json(handler);
          }
        if (flagHasTypeOfLastLocationFilter)
          {
            handler->start_pair("TypeOfLastLocationFilter");
            storeTypeOfLastLocationFilter->write_as_json(handler);
          }
        if (flagHasDepartureDateTimeRange)
          {
            handler->start_pair("DepartureDateTimeRange");
            storeDepartureDateTimeRange->write_as_json(handler);
          }
        if (flagHasArrivalDateTimeRange)
          {
            handler->start_pair("ArrivalDateTimeRange");
            storeArrivalDateTimeRange->write_as_json(handler);
          }
        if (flagHasEitherDepartureOrArrivalDateTimeRange)
          {
            handler->start_pair("EitherDepartureOrArrivalDateTimeRange");
            storeEitherDepartureOrArrivalDateTimeRange->write_as_json(handler);
          }
        if (flagHasTypeOfLastDateTimeRangeFilter)
          {
            handler->start_pair("TypeOfLastDateTimeRangeFilter");
            storeTypeOfLastDateTimeRangeFilter->write_as_json(handler);
          }
        assert(flagHasRequestedFlightAttributes);
        handler->start_pair("RequestedFlightAttributes");
        assert(storeRequestedFlightAttributes.size() >= 1);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeRequestedFlightAttributes.size(); ++num2)
          {
            storeRequestedFlightAttributes[num2]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasDepartureTimeFormat)
          {
            handler->start_pair("DepartureTimeFormat");
            storeDepartureTimeFormat->write_as_json(handler);
          }
        if (flagHasArrivalTimeFormat)
          {
            handler->start_pair("ArrivalTimeFormat");
            storeArrivalTimeFormat->write_as_json(handler);
          }
        if (flagHasSpoken)
          {
            handler->start_pair("Spoken");
            handler->string_value(storeSpoken);
          }
        if (flagHasWritten)
          {
            handler->start_pair("Written");
            handler->string_value(storeWritten);
          }
        if (flagHasModeInteractionDisabled)
          {
            handler->start_pair("ModeInteractionDisabled");
            handler->boolean_value(storeModeInteractionDisabled);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasRequestedFlightAttributes()))
          {
            return "When parsing the object for %what%, the \"RequestedFlightAttributes\" field was missing.";
          }
        return NULL;
      }

    static FlightSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSpecJSON>, FlightSpecJSON *, bool> generator("Type FlightSpec", ignore_extras);
            parse_json_value(text, "Text for FlightSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSpecJSON>, FlightSpecJSON *, bool> generator("Type FlightSpec", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNextFlight;
        JSONHoldingGenerator<AirlineJSON::Generator, RCHandle<AirlineJSON>, AirlineJSON *, bool > fieldGeneratorAirline;
        JSONHoldingArrayGenerator<AirlineJSON::Generator, RCHandle<AirlineJSON>, AirlineJSON *, bool > fieldGeneratorAdditionalAirlineMatches;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 0, 9999>, uint16_t, uint16_t > fieldGeneratorFlightNumber;
        JSONHoldingGenerator<FlightTravelLocationJSON::Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool > fieldGeneratorDepartureLocation;
        JSONHoldingGenerator<FlightTravelLocationJSON::Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool > fieldGeneratorDestinationLocation;
        JSONHoldingGenerator<DepartureOrArrivalJSON::Generator, RCHandle<DepartureOrArrivalJSON>, DepartureOrArrivalJSON *, bool > fieldGeneratorTypeOfLastLocationFilter;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDepartureDateTimeRange;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorArrivalDateTimeRange;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorEitherDepartureOrArrivalDateTimeRange;
        JSONHoldingGenerator<DepartureOrArrivalJSON::Generator, RCHandle<DepartureOrArrivalJSON>, DepartureOrArrivalJSON *, bool > fieldGeneratorTypeOfLastDateTimeRangeFilter;
        JSONHoldingArrayGenerator<FlightAttributeJSON::Generator, RCHandle<FlightAttributeJSON>, FlightAttributeJSON *, bool > fieldGeneratorRequestedFlightAttributes;
        JSONHoldingGenerator<FlightTimeFormatJSON::Generator, RCHandle<FlightTimeFormatJSON>, FlightTimeFormatJSON *, bool > fieldGeneratorDepartureTimeFormat;
        JSONHoldingGenerator<FlightTimeFormatJSON::Generator, RCHandle<FlightTimeFormatJSON>, FlightTimeFormatJSON *, bool > fieldGeneratorArrivalTimeFormat;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWritten;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorModeInteractionDisabled;
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
            FlightSpecJSON *result = new FlightSpecJSON();
            assert(result != NULL);
            RCHandle<FlightSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightSpecJSON *result)
          {
            if (fieldGeneratorNextFlight.have_value)
              {
                result->setNextFlight(fieldGeneratorNextFlight.value);
                fieldGeneratorNextFlight.have_value = false;
              }
            if (fieldGeneratorAirline.have_value)
              {
                result->setAirline(fieldGeneratorAirline.value.referenced());
                fieldGeneratorAirline.have_value = false;
              }
            if (fieldGeneratorAdditionalAirlineMatches.have_value)
              {
                result->initAdditionalAirlineMatches();
                size_t count = fieldGeneratorAdditionalAirlineMatches.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAdditionalAirlineMatches(fieldGeneratorAdditionalAirlineMatches.value[num].referenced());
                  }
                fieldGeneratorAdditionalAirlineMatches.value.clear();
                fieldGeneratorAdditionalAirlineMatches.have_value = false;
              }
            if (fieldGeneratorFlightNumber.have_value)
              {
                result->setFlightNumber(fieldGeneratorFlightNumber.value);
                fieldGeneratorFlightNumber.have_value = false;
              }
            if (fieldGeneratorDepartureLocation.have_value)
              {
                result->setDepartureLocation(fieldGeneratorDepartureLocation.value.referenced());
                fieldGeneratorDepartureLocation.have_value = false;
              }
            if (fieldGeneratorDestinationLocation.have_value)
              {
                result->setDestinationLocation(fieldGeneratorDestinationLocation.value.referenced());
                fieldGeneratorDestinationLocation.have_value = false;
              }
            if (fieldGeneratorTypeOfLastLocationFilter.have_value)
              {
                result->setTypeOfLastLocationFilter(fieldGeneratorTypeOfLastLocationFilter.value.referenced());
                fieldGeneratorTypeOfLastLocationFilter.have_value = false;
              }
            if (fieldGeneratorDepartureDateTimeRange.have_value)
              {
                result->setDepartureDateTimeRange(fieldGeneratorDepartureDateTimeRange.value.referenced());
                fieldGeneratorDepartureDateTimeRange.have_value = false;
              }
            if (fieldGeneratorArrivalDateTimeRange.have_value)
              {
                result->setArrivalDateTimeRange(fieldGeneratorArrivalDateTimeRange.value.referenced());
                fieldGeneratorArrivalDateTimeRange.have_value = false;
              }
            if (fieldGeneratorEitherDepartureOrArrivalDateTimeRange.have_value)
              {
                result->setEitherDepartureOrArrivalDateTimeRange(fieldGeneratorEitherDepartureOrArrivalDateTimeRange.value.referenced());
                fieldGeneratorEitherDepartureOrArrivalDateTimeRange.have_value = false;
              }
            if (fieldGeneratorTypeOfLastDateTimeRangeFilter.have_value)
              {
                result->setTypeOfLastDateTimeRangeFilter(fieldGeneratorTypeOfLastDateTimeRangeFilter.value.referenced());
                fieldGeneratorTypeOfLastDateTimeRangeFilter.have_value = false;
              }
            if (fieldGeneratorRequestedFlightAttributes.have_value)
              {
                result->initRequestedFlightAttributes();
                size_t count = fieldGeneratorRequestedFlightAttributes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRequestedFlightAttributes(fieldGeneratorRequestedFlightAttributes.value[num].referenced());
                  }
                fieldGeneratorRequestedFlightAttributes.value.clear();
                fieldGeneratorRequestedFlightAttributes.have_value = false;
              }
            else if (!(result->hasRequestedFlightAttributes()))
              {
                error("When parsing the object for %what%, the \"RequestedFlightAttributes\" field was missing.");
              }
            if (fieldGeneratorDepartureTimeFormat.have_value)
              {
                result->setDepartureTimeFormat(fieldGeneratorDepartureTimeFormat.value.referenced());
                fieldGeneratorDepartureTimeFormat.have_value = false;
              }
            if (fieldGeneratorArrivalTimeFormat.have_value)
              {
                result->setArrivalTimeFormat(fieldGeneratorArrivalTimeFormat.value.referenced());
                fieldGeneratorArrivalTimeFormat.have_value = false;
              }
            if (fieldGeneratorSpoken.have_value)
              {
                result->setSpoken(fieldGeneratorSpoken.value);
                fieldGeneratorSpoken.have_value = false;
              }
            if (fieldGeneratorWritten.have_value)
              {
                result->setWritten(fieldGeneratorWritten.value);
                fieldGeneratorWritten.have_value = false;
              }
            if (fieldGeneratorModeInteractionDisabled.have_value)
              {
                result->setModeInteractionDisabled(fieldGeneratorModeInteractionDisabled.value);
                fieldGeneratorModeInteractionDisabled.have_value = false;
              }
          }
        virtual void handle_result(FlightSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'd':
                            if (strcmp(&(field_name[2]), "ditionalAirlineMatches") == 0)
                                return &fieldGeneratorAdditionalAirlineMatches;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "rline") == 0)
                                return &fieldGeneratorAirline;
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "rival", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[8]), "ateTimeRange") == 0)
                                            return &fieldGeneratorArrivalDateTimeRange;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[8]), "imeFormat") == 0)
                                            return &fieldGeneratorArrivalTimeFormat;
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
                case 'D':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'p':
                                if (strncmp(&(field_name[3]), "arture", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[9]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[10]), "ateTimeRange") == 0)
                                                return &fieldGeneratorDepartureDateTimeRange;
                                            break;
                                        case 'L':
                                            if (strcmp(&(field_name[10]), "ocation") == 0)
                                                return &fieldGeneratorDepartureLocation;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[10]), "imeFormat") == 0)
                                                return &fieldGeneratorDepartureTimeFormat;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 's':
                                if (strcmp(&(field_name[3]), "tinationLocation") == 0)
                                    return &fieldGeneratorDestinationLocation;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "itherDepartureOrArrivalDateTimeRange") == 0)
                        return &fieldGeneratorEitherDepartureOrArrivalDateTimeRange;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "lightNumber") == 0)
                        return &fieldGeneratorFlightNumber;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "odeInteractionDisabled") == 0)
                        return &fieldGeneratorModeInteractionDisabled;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "extFlight") == 0)
                        return &fieldGeneratorNextFlight;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedFlightAttributes") == 0)
                        return &fieldGeneratorRequestedFlightAttributes;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "poken") == 0)
                        return &fieldGeneratorSpoken;
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "ypeOfLast", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[11]), "ateTimeRangeFilter") == 0)
                                    return &fieldGeneratorTypeOfLastDateTimeRangeFilter;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[11]), "ocationFilter") == 0)
                                    return &fieldGeneratorTypeOfLastLocationFilter;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "ritten") == 0)
                        return &fieldGeneratorWritten;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorNextFlight("field \"NextFlight\" of the FlightSpec class"), fieldGeneratorAirline("field \"Airline\" of the FlightSpec class", ignore_extras), fieldGeneratorAdditionalAirlineMatches("field \"AdditionalAirlineMatches\" of the FlightSpec class", ignore_extras), fieldGeneratorFlightNumber("field \"FlightNumber\" of the FlightSpec class"), fieldGeneratorDepartureLocation("field \"DepartureLocation\" of the FlightSpec class", ignore_extras), fieldGeneratorDestinationLocation("field \"DestinationLocation\" of the FlightSpec class", ignore_extras), fieldGeneratorTypeOfLastLocationFilter("field \"TypeOfLastLocationFilter\" of the FlightSpec class", ignore_extras), fieldGeneratorDepartureDateTimeRange("field \"DepartureDateTimeRange\" of the FlightSpec class", ignore_extras), fieldGeneratorArrivalDateTimeRange("field \"ArrivalDateTimeRange\" of the FlightSpec class", ignore_extras), fieldGeneratorEitherDepartureOrArrivalDateTimeRange("field \"EitherDepartureOrArrivalDateTimeRange\" of the FlightSpec class", ignore_extras), fieldGeneratorTypeOfLastDateTimeRangeFilter("field \"TypeOfLastDateTimeRangeFilter\" of the FlightSpec class", ignore_extras), fieldGeneratorRequestedFlightAttributes("field \"RequestedFlightAttributes\" of the FlightSpec class", ignore_extras), fieldGeneratorDepartureTimeFormat("field \"DepartureTimeFormat\" of the FlightSpec class", ignore_extras), fieldGeneratorArrivalTimeFormat("field \"ArrivalTimeFormat\" of the FlightSpec class", ignore_extras), fieldGeneratorSpoken("field \"Spoken\" of the FlightSpec class"), fieldGeneratorWritten("field \"Written\" of the FlightSpec class"), fieldGeneratorModeInteractionDisabled("field \"ModeInteractionDisabled\" of the FlightSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNextFlight.reset();
            fieldGeneratorAirline.reset();
            fieldGeneratorAdditionalAirlineMatches.reset();
            fieldGeneratorFlightNumber.reset();
            fieldGeneratorDepartureLocation.reset();
            fieldGeneratorDestinationLocation.reset();
            fieldGeneratorTypeOfLastLocationFilter.reset();
            fieldGeneratorDepartureDateTimeRange.reset();
            fieldGeneratorArrivalDateTimeRange.reset();
            fieldGeneratorEitherDepartureOrArrivalDateTimeRange.reset();
            fieldGeneratorTypeOfLastDateTimeRangeFilter.reset();
            fieldGeneratorRequestedFlightAttributes.reset();
            fieldGeneratorDepartureTimeFormat.reset();
            fieldGeneratorArrivalTimeFormat.reset();
            fieldGeneratorSpoken.reset();
            fieldGeneratorWritten.reset();
            fieldGeneratorModeInteractionDisabled.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSPECJSON_H */
