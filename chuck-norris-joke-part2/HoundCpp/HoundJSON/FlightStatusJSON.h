/* file "FlightStatusJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATUSJSON_H
#define FLIGHTSTATUSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "AirlineFlightNumberJSON.h"
#include "FlightCodeshareJSON.h"
#include "AircraftJSON.h"
#include "DepartureArrivalInfoJSON.h"
#include "DepartureArrivalInfoJSON.h"
#include "TimeDifferenceJSON.h"
#include "TimeDifferenceJSON.h"
#include "TimeDifferenceJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatusJSON : public ReferenceCounted
  {
  public:
    enum TypeFlightTravelState
      {
        FlightTravelState_Scheduled,
        FlightTravelState_Canceled,
        FlightTravelState_Diverted,
        FlightTravelState_Enroute,
        FlightTravelState_Arrived,
        FlightTravelState_Unknown
      };

    static TypeFlightTravelState  stringToFlightTravelState(const char *chars);
    static const char * stringFromFlightTravelState(TypeFlightTravelState the_enum);

  private:
    bool flagHasFlightId;
    std::string storeFlightId;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasSpokenLabel;
    std::string storeSpokenLabel;
    bool flagHasAirlineFlightNumber;
    AirlineFlightNumberJSON * storeAirlineFlightNumber;
    bool flagHasCodeshares;
    std::vector< FlightCodeshareJSON * > storeCodeshares;
    bool flagHasMatchingCodeshareIndex;
    OInteger storeMatchingCodeshareIndex;
    bool flagHasFlightTravelState;
    TypeFlightTravelState storeFlightTravelState;
    bool flagHasStatusSummary;
    std::string storeStatusSummary;
    bool flagHasStatusSummaryShort;
    std::string storeStatusSummaryShort;
    bool flagHasDepartureArrivalText;
    std::string storeDepartureArrivalText;
    bool flagHasTailNumber;
    std::string storeTailNumber;
    bool flagHasAircraft;
    AircraftJSON * storeAircraft;
    bool flagHasDeparture;
    DepartureArrivalInfoJSON * storeDeparture;
    bool flagHasArrival;
    DepartureArrivalInfoJSON * storeArrival;
    bool flagHasScheduledFlightDuration;
    TimeDifferenceJSON * storeScheduledFlightDuration;
    bool flagHasOperationalFlightDuration;
    TimeDifferenceJSON * storeOperationalFlightDuration;
    bool flagHasDeviationInFlightDurationFromScheduled;
    TimeDifferenceJSON * storeDeviationInFlightDurationFromScheduled;
    bool flagHasWrittenHints;
    std::vector< std::string > storeWrittenHints;
    bool flagHasSpokenHints;
    std::vector< std::string > storeSpokenHints;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatusJSON(const FlightStatusJSON &);
    FlightStatusJSON & operator=(const FlightStatusJSON &other);

    void  fromJSONFlightId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAirlineFlightNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCodeshares(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMatchingCodeshareIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightTravelState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatusSummary(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatusSummaryShort(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureArrivalText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTailNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAircraft(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeparture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArrival(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScheduledFlightDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOperationalFlightDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeviationInFlightDurationFromScheduled(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenHints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenHints(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatusJSON(void);
    virtual ~FlightStatusJSON(void);
    bool  hasFlightId(void) const;
    std::string  getFlightId(void);
    const std::string  getFlightId(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasSpokenLabel(void) const;
    std::string  getSpokenLabel(void);
    const std::string  getSpokenLabel(void) const;
    bool  hasAirlineFlightNumber(void) const;
    AirlineFlightNumberJSON *  getAirlineFlightNumber(void);
    const AirlineFlightNumberJSON *  getAirlineFlightNumber(void) const;
    bool  hasCodeshares(void) const;
    size_t  countOfCodeshares(void) const;
    FlightCodeshareJSON *  elementOfCodeshares(size_t element_num);
    const FlightCodeshareJSON *  elementOfCodeshares(size_t element_num) const;
    std::vector< FlightCodeshareJSON * >  getCodeshares(void);
    const std::vector< FlightCodeshareJSON * >  getCodeshares(void) const;
    bool  hasMatchingCodeshareIndex(void) const;
    OInteger  getMatchingCodeshareIndex(void);
    const OInteger  getMatchingCodeshareIndex(void) const;
    bool  hasFlightTravelState(void) const;
    TypeFlightTravelState  getFlightTravelState(void);
    const TypeFlightTravelState  getFlightTravelState(void) const;
    const char * getFlightTravelStateAsChars(void) const;
    std::string  getFlightTravelStateAsString(void) const;
    bool  hasStatusSummary(void) const;
    std::string  getStatusSummary(void);
    const std::string  getStatusSummary(void) const;
    bool  hasStatusSummaryShort(void) const;
    std::string  getStatusSummaryShort(void);
    const std::string  getStatusSummaryShort(void) const;
    bool  hasDepartureArrivalText(void) const;
    std::string  getDepartureArrivalText(void);
    const std::string  getDepartureArrivalText(void) const;
    bool  hasTailNumber(void) const;
    std::string  getTailNumber(void);
    const std::string  getTailNumber(void) const;
    bool  hasAircraft(void) const;
    AircraftJSON *  getAircraft(void);
    const AircraftJSON *  getAircraft(void) const;
    bool  hasDeparture(void) const;
    DepartureArrivalInfoJSON *  getDeparture(void);
    const DepartureArrivalInfoJSON *  getDeparture(void) const;
    bool  hasArrival(void) const;
    DepartureArrivalInfoJSON *  getArrival(void);
    const DepartureArrivalInfoJSON *  getArrival(void) const;
    bool  hasScheduledFlightDuration(void) const;
    TimeDifferenceJSON *  getScheduledFlightDuration(void);
    const TimeDifferenceJSON *  getScheduledFlightDuration(void) const;
    bool  hasOperationalFlightDuration(void) const;
    TimeDifferenceJSON *  getOperationalFlightDuration(void);
    const TimeDifferenceJSON *  getOperationalFlightDuration(void) const;
    bool  hasDeviationInFlightDurationFromScheduled(void) const;
    TimeDifferenceJSON *  getDeviationInFlightDurationFromScheduled(void);
    const TimeDifferenceJSON *  getDeviationInFlightDurationFromScheduled(void) const;
    bool  hasWrittenHints(void) const;
    size_t  countOfWrittenHints(void) const;
    std::string  elementOfWrittenHints(size_t element_num);
    const std::string  elementOfWrittenHints(size_t element_num) const;
    std::vector< std::string >  getWrittenHints(void);
    const std::vector< std::string >  getWrittenHints(void) const;
    bool  hasSpokenHints(void) const;
    size_t  countOfSpokenHints(void) const;
    std::string  elementOfSpokenHints(size_t element_num);
    const std::string  elementOfSpokenHints(size_t element_num) const;
    std::vector< std::string >  getSpokenHints(void);
    const std::vector< std::string >  getSpokenHints(void) const;

    virtual size_t extraFlightStatusComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatusComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatusComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatusComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatusLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatusLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFlightId(std::string new_value)
      {
        flagHasFlightId = true;
        storeFlightId = new_value;
      }
    void unsetFlightId(void)
      {
        flagHasFlightId = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }
    void setSpokenLabel(std::string new_value)
      {
        flagHasSpokenLabel = true;
        storeSpokenLabel = new_value;
      }
    void unsetSpokenLabel(void)
      {
        flagHasSpokenLabel = false;
      }
    void setAirlineFlightNumber(AirlineFlightNumberJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAirlineFlightNumber)
          {
            storeAirlineFlightNumber->remove_reference();
          }
        flagHasAirlineFlightNumber = true;
        storeAirlineFlightNumber = new_value;
      }
    void unsetAirlineFlightNumber(void)
      {
        if (flagHasAirlineFlightNumber)
          {
            storeAirlineFlightNumber->remove_reference();
          }
        flagHasAirlineFlightNumber = false;
      }
    void initCodeshares(void)
      {
        if (flagHasCodeshares)
          {
            for (size_t num2 = 0; num2 < storeCodeshares.size(); ++num2)
              {
                storeCodeshares[num2]->remove_reference();
              }
          }
        flagHasCodeshares = true;
        storeCodeshares.clear();
      }
    void appendCodeshares(FlightCodeshareJSON * to_append)
      {
        if (!flagHasCodeshares)
          {
            flagHasCodeshares = true;
            storeCodeshares.clear();
          }
        assert(flagHasCodeshares);
        to_append->add_reference();
        storeCodeshares.push_back(to_append);
      }
    void unsetCodeshares(void)
      {
        if (flagHasCodeshares)
          {
            for (size_t num3 = 0; num3 < storeCodeshares.size(); ++num3)
              {
                storeCodeshares[num3]->remove_reference();
              }
          }
        flagHasCodeshares = false;
        storeCodeshares.clear();
      }
    void setMatchingCodeshareIndex(OInteger new_value)
      {
        flagHasMatchingCodeshareIndex = true;
        if (new_value < 0)
            throw("The value for field MatchingCodeshareIndex of FlightStatusJSON is less than the lower bound (0) for that field.");
        storeMatchingCodeshareIndex = new_value;
      }
    void unsetMatchingCodeshareIndex(void)
      {
        flagHasMatchingCodeshareIndex = false;
      }
    void setFlightTravelState(TypeFlightTravelState new_value)
      {
        flagHasFlightTravelState = true;
        storeFlightTravelState = new_value;
      }
    void setFlightTravelState(const char *chars)
      {
        setFlightTravelState(stringToFlightTravelState(chars));
      }
    void setFlightTravelState(std::string the_string)
      {
        setFlightTravelState(stringToFlightTravelState(the_string.c_str()));
      }
    void unsetFlightTravelState(void)
      {
        flagHasFlightTravelState = false;
      }
    void setStatusSummary(std::string new_value)
      {
        flagHasStatusSummary = true;
        storeStatusSummary = new_value;
      }
    void unsetStatusSummary(void)
      {
        flagHasStatusSummary = false;
      }
    void setStatusSummaryShort(std::string new_value)
      {
        flagHasStatusSummaryShort = true;
        storeStatusSummaryShort = new_value;
      }
    void unsetStatusSummaryShort(void)
      {
        flagHasStatusSummaryShort = false;
      }
    void setDepartureArrivalText(std::string new_value)
      {
        flagHasDepartureArrivalText = true;
        storeDepartureArrivalText = new_value;
      }
    void unsetDepartureArrivalText(void)
      {
        flagHasDepartureArrivalText = false;
      }
    void setTailNumber(std::string new_value)
      {
        flagHasTailNumber = true;
        storeTailNumber = new_value;
      }
    void unsetTailNumber(void)
      {
        flagHasTailNumber = false;
      }
    void setAircraft(AircraftJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAircraft)
          {
            storeAircraft->remove_reference();
          }
        flagHasAircraft = true;
        storeAircraft = new_value;
      }
    void unsetAircraft(void)
      {
        if (flagHasAircraft)
          {
            storeAircraft->remove_reference();
          }
        flagHasAircraft = false;
      }
    void setDeparture(DepartureArrivalInfoJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeparture)
          {
            storeDeparture->remove_reference();
          }
        flagHasDeparture = true;
        storeDeparture = new_value;
      }
    void unsetDeparture(void)
      {
        if (flagHasDeparture)
          {
            storeDeparture->remove_reference();
          }
        flagHasDeparture = false;
      }
    void setArrival(DepartureArrivalInfoJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArrival)
          {
            storeArrival->remove_reference();
          }
        flagHasArrival = true;
        storeArrival = new_value;
      }
    void unsetArrival(void)
      {
        if (flagHasArrival)
          {
            storeArrival->remove_reference();
          }
        flagHasArrival = false;
      }
    void setScheduledFlightDuration(TimeDifferenceJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasScheduledFlightDuration)
          {
            storeScheduledFlightDuration->remove_reference();
          }
        flagHasScheduledFlightDuration = true;
        storeScheduledFlightDuration = new_value;
      }
    void unsetScheduledFlightDuration(void)
      {
        if (flagHasScheduledFlightDuration)
          {
            storeScheduledFlightDuration->remove_reference();
          }
        flagHasScheduledFlightDuration = false;
      }
    void setOperationalFlightDuration(TimeDifferenceJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOperationalFlightDuration)
          {
            storeOperationalFlightDuration->remove_reference();
          }
        flagHasOperationalFlightDuration = true;
        storeOperationalFlightDuration = new_value;
      }
    void unsetOperationalFlightDuration(void)
      {
        if (flagHasOperationalFlightDuration)
          {
            storeOperationalFlightDuration->remove_reference();
          }
        flagHasOperationalFlightDuration = false;
      }
    void setDeviationInFlightDurationFromScheduled(TimeDifferenceJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeviationInFlightDurationFromScheduled)
          {
            storeDeviationInFlightDurationFromScheduled->remove_reference();
          }
        flagHasDeviationInFlightDurationFromScheduled = true;
        storeDeviationInFlightDurationFromScheduled = new_value;
      }
    void unsetDeviationInFlightDurationFromScheduled(void)
      {
        if (flagHasDeviationInFlightDurationFromScheduled)
          {
            storeDeviationInFlightDurationFromScheduled->remove_reference();
          }
        flagHasDeviationInFlightDurationFromScheduled = false;
      }
    void initWrittenHints(void)
      {
        flagHasWrittenHints = true;
        storeWrittenHints.clear();
      }
    void appendWrittenHints(std::string to_append)
      {
        if (!flagHasWrittenHints)
          {
            flagHasWrittenHints = true;
            storeWrittenHints.clear();
          }
        assert(flagHasWrittenHints);
        storeWrittenHints.push_back(to_append);
      }
    void unsetWrittenHints(void)
      {
        flagHasWrittenHints = false;
        storeWrittenHints.clear();
      }
    void initSpokenHints(void)
      {
        flagHasSpokenHints = true;
        storeSpokenHints.clear();
      }
    void appendSpokenHints(std::string to_append)
      {
        if (!flagHasSpokenHints)
          {
            flagHasSpokenHints = true;
            storeSpokenHints.clear();
          }
        assert(flagHasSpokenHints);
        storeSpokenHints.push_back(to_append);
      }
    void unsetSpokenHints(void)
      {
        flagHasSpokenHints = false;
        storeSpokenHints.clear();
      }

    virtual void extraFlightStatusAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatusSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatusLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatusAppendPair(key, new_component);
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
        assert(flagHasFlightId);
        handler->start_pair("FlightId");
        handler->string_value(storeFlightId);
        assert(flagHasLabel);
        handler->start_pair("Label");
        handler->string_value(storeLabel);
        assert(flagHasSpokenLabel);
        handler->start_pair("SpokenLabel");
        handler->string_value(storeSpokenLabel);
        assert(flagHasAirlineFlightNumber);
        handler->start_pair("AirlineFlightNumber");
        storeAirlineFlightNumber->write_as_json(handler);
        if (flagHasCodeshares)
          {
            handler->start_pair("Codeshares");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeCodeshares.size(); ++num1)
              {
                storeCodeshares[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasMatchingCodeshareIndex)
          {
            handler->start_pair("MatchingCodeshareIndex");
            handler->number_value(storeMatchingCodeshareIndex.get_o_integer());
          }
        assert(flagHasFlightTravelState);
        handler->start_pair("FlightTravelState");
        switch (storeFlightTravelState)
          {
            case FlightTravelState_Scheduled:
                handler->string_value("Scheduled");
                break;
            case FlightTravelState_Canceled:
                handler->string_value("Canceled");
                break;
            case FlightTravelState_Diverted:
                handler->string_value("Diverted");
                break;
            case FlightTravelState_Enroute:
                handler->string_value("Enroute");
                break;
            case FlightTravelState_Arrived:
                handler->string_value("Arrived");
                break;
            case FlightTravelState_Unknown:
                handler->string_value("Unknown");
                break;
            default:
                assert(false);
          }
        assert(flagHasStatusSummary);
        handler->start_pair("StatusSummary");
        handler->string_value(storeStatusSummary);
        assert(flagHasStatusSummaryShort);
        handler->start_pair("StatusSummaryShort");
        handler->string_value(storeStatusSummaryShort);
        assert(flagHasDepartureArrivalText);
        handler->start_pair("DepartureArrivalText");
        handler->string_value(storeDepartureArrivalText);
        if (flagHasTailNumber)
          {
            handler->start_pair("TailNumber");
            handler->string_value(storeTailNumber);
          }
        if (flagHasAircraft)
          {
            handler->start_pair("Aircraft");
            storeAircraft->write_as_json(handler);
          }
        assert(flagHasDeparture);
        handler->start_pair("Departure");
        storeDeparture->write_as_json(handler);
        assert(flagHasArrival);
        handler->start_pair("Arrival");
        storeArrival->write_as_json(handler);
        assert(flagHasScheduledFlightDuration);
        handler->start_pair("ScheduledFlightDuration");
        storeScheduledFlightDuration->write_as_json(handler);
        assert(flagHasOperationalFlightDuration);
        handler->start_pair("OperationalFlightDuration");
        storeOperationalFlightDuration->write_as_json(handler);
        assert(flagHasDeviationInFlightDurationFromScheduled);
        handler->start_pair("DeviationInFlightDurationFromScheduled");
        storeDeviationInFlightDurationFromScheduled->write_as_json(handler);
        if (flagHasWrittenHints)
          {
            handler->start_pair("WrittenHints");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeWrittenHints.size(); ++num2)
              {
                handler->string_value(storeWrittenHints[num2]);
              }
            handler->finish_array();
          }
        if (flagHasSpokenHints)
          {
            handler->start_pair("SpokenHints");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeSpokenHints.size(); ++num3)
              {
                handler->string_value(storeSpokenHints[num3]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightId()))
          {
            return "When parsing the object for %what%, the \"FlightId\" field was missing.";
          }
        if (!(hasLabel()))
          {
            return "When parsing the object for %what%, the \"Label\" field was missing.";
          }
        if (!(hasSpokenLabel()))
          {
            return "When parsing the object for %what%, the \"SpokenLabel\" field was missing.";
          }
        if (!(hasAirlineFlightNumber()))
          {
            return "When parsing the object for %what%, the \"AirlineFlightNumber\" field was missing.";
          }
        if (!(hasFlightTravelState()))
          {
            return "When parsing the object for %what%, the \"FlightTravelState\" field was missing.";
          }
        if (!(hasStatusSummary()))
          {
            return "When parsing the object for %what%, the \"StatusSummary\" field was missing.";
          }
        if (!(hasStatusSummaryShort()))
          {
            return "When parsing the object for %what%, the \"StatusSummaryShort\" field was missing.";
          }
        if (!(hasDepartureArrivalText()))
          {
            return "When parsing the object for %what%, the \"DepartureArrivalText\" field was missing.";
          }
        if (!(hasDeparture()))
          {
            return "When parsing the object for %what%, the \"Departure\" field was missing.";
          }
        if (!(hasArrival()))
          {
            return "When parsing the object for %what%, the \"Arrival\" field was missing.";
          }
        if (!(hasScheduledFlightDuration()))
          {
            return "When parsing the object for %what%, the \"ScheduledFlightDuration\" field was missing.";
          }
        if (!(hasOperationalFlightDuration()))
          {
            return "When parsing the object for %what%, the \"OperationalFlightDuration\" field was missing.";
          }
        if (!(hasDeviationInFlightDurationFromScheduled()))
          {
            return "When parsing the object for %what%, the \"DeviationInFlightDurationFromScheduled\" field was missing.";
          }
        return NULL;
      }

    static FlightStatusJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatusJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusJSON>, FlightStatusJSON *, bool> generator("Type FlightStatus", ignore_extras);
            parse_json_value(text, "Text for FlightStatusJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatusJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusJSON>, FlightStatusJSON *, bool> generator("Type FlightStatus", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFlightId;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenLabel;
        JSONHoldingGenerator<AirlineFlightNumberJSON::Generator, RCHandle<AirlineFlightNumberJSON>, AirlineFlightNumberJSON *, bool > fieldGeneratorAirlineFlightNumber;
        JSONHoldingArrayGenerator<FlightCodeshareJSON::Generator, RCHandle<FlightCodeshareJSON>, FlightCodeshareJSON *, bool > fieldGeneratorCodeshares;
        static char lowerBoundMatchingCodeshareIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMatchingCodeshareIndex>, OInteger, o_integer > fieldGeneratorMatchingCodeshareIndex;
    class FieldGeneratorFlightTravelState : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFlightTravelState(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFlightTravelState(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFlightTravelState(result));
              }
            virtual void handle_result(TypeFlightTravelState result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFlightTravelState, TypeFlightTravelState, TypeFlightTravelState > fieldGeneratorFlightTravelState;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStatusSummary;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStatusSummaryShort;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDepartureArrivalText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTailNumber;
        JSONHoldingGenerator<AircraftJSON::Generator, RCHandle<AircraftJSON>, AircraftJSON *, bool > fieldGeneratorAircraft;
        JSONHoldingGenerator<DepartureArrivalInfoJSON::Generator, RCHandle<DepartureArrivalInfoJSON>, DepartureArrivalInfoJSON *, bool > fieldGeneratorDeparture;
        JSONHoldingGenerator<DepartureArrivalInfoJSON::Generator, RCHandle<DepartureArrivalInfoJSON>, DepartureArrivalInfoJSON *, bool > fieldGeneratorArrival;
        JSONHoldingGenerator<TimeDifferenceJSON::Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool > fieldGeneratorScheduledFlightDuration;
        JSONHoldingGenerator<TimeDifferenceJSON::Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool > fieldGeneratorOperationalFlightDuration;
        JSONHoldingGenerator<TimeDifferenceJSON::Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool > fieldGeneratorDeviationInFlightDurationFromScheduled;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenHints;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenHints;
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
            FlightStatusJSON *result = new FlightStatusJSON();
            assert(result != NULL);
            RCHandle<FlightStatusJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatusAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatusJSON *result)
          {
            if (fieldGeneratorFlightId.have_value)
              {
                result->setFlightId(fieldGeneratorFlightId.value);
                fieldGeneratorFlightId.have_value = false;
              }
            else if (!(result->hasFlightId()))
              {
                error("When parsing the object for %what%, the \"FlightId\" field was missing.");
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            else if (!(result->hasLabel()))
              {
                error("When parsing the object for %what%, the \"Label\" field was missing.");
              }
            if (fieldGeneratorSpokenLabel.have_value)
              {
                result->setSpokenLabel(fieldGeneratorSpokenLabel.value);
                fieldGeneratorSpokenLabel.have_value = false;
              }
            else if (!(result->hasSpokenLabel()))
              {
                error("When parsing the object for %what%, the \"SpokenLabel\" field was missing.");
              }
            if (fieldGeneratorAirlineFlightNumber.have_value)
              {
                result->setAirlineFlightNumber(fieldGeneratorAirlineFlightNumber.value.referenced());
                fieldGeneratorAirlineFlightNumber.have_value = false;
              }
            else if (!(result->hasAirlineFlightNumber()))
              {
                error("When parsing the object for %what%, the \"AirlineFlightNumber\" field was missing.");
              }
            if (fieldGeneratorCodeshares.have_value)
              {
                result->initCodeshares();
                size_t count = fieldGeneratorCodeshares.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCodeshares(fieldGeneratorCodeshares.value[num].referenced());
                  }
                fieldGeneratorCodeshares.value.clear();
                fieldGeneratorCodeshares.have_value = false;
              }
            if (fieldGeneratorMatchingCodeshareIndex.have_value)
              {
                result->setMatchingCodeshareIndex(fieldGeneratorMatchingCodeshareIndex.value);
                fieldGeneratorMatchingCodeshareIndex.have_value = false;
              }
            if (fieldGeneratorFlightTravelState.have_value)
              {
                result->setFlightTravelState(fieldGeneratorFlightTravelState.value);
                fieldGeneratorFlightTravelState.have_value = false;
              }
            else if (!(result->hasFlightTravelState()))
              {
                error("When parsing the object for %what%, the \"FlightTravelState\" field was missing.");
              }
            if (fieldGeneratorStatusSummary.have_value)
              {
                result->setStatusSummary(fieldGeneratorStatusSummary.value);
                fieldGeneratorStatusSummary.have_value = false;
              }
            else if (!(result->hasStatusSummary()))
              {
                error("When parsing the object for %what%, the \"StatusSummary\" field was missing.");
              }
            if (fieldGeneratorStatusSummaryShort.have_value)
              {
                result->setStatusSummaryShort(fieldGeneratorStatusSummaryShort.value);
                fieldGeneratorStatusSummaryShort.have_value = false;
              }
            else if (!(result->hasStatusSummaryShort()))
              {
                error("When parsing the object for %what%, the \"StatusSummaryShort\" field was missing.");
              }
            if (fieldGeneratorDepartureArrivalText.have_value)
              {
                result->setDepartureArrivalText(fieldGeneratorDepartureArrivalText.value);
                fieldGeneratorDepartureArrivalText.have_value = false;
              }
            else if (!(result->hasDepartureArrivalText()))
              {
                error("When parsing the object for %what%, the \"DepartureArrivalText\" field was missing.");
              }
            if (fieldGeneratorTailNumber.have_value)
              {
                result->setTailNumber(fieldGeneratorTailNumber.value);
                fieldGeneratorTailNumber.have_value = false;
              }
            if (fieldGeneratorAircraft.have_value)
              {
                result->setAircraft(fieldGeneratorAircraft.value.referenced());
                fieldGeneratorAircraft.have_value = false;
              }
            if (fieldGeneratorDeparture.have_value)
              {
                result->setDeparture(fieldGeneratorDeparture.value.referenced());
                fieldGeneratorDeparture.have_value = false;
              }
            else if (!(result->hasDeparture()))
              {
                error("When parsing the object for %what%, the \"Departure\" field was missing.");
              }
            if (fieldGeneratorArrival.have_value)
              {
                result->setArrival(fieldGeneratorArrival.value.referenced());
                fieldGeneratorArrival.have_value = false;
              }
            else if (!(result->hasArrival()))
              {
                error("When parsing the object for %what%, the \"Arrival\" field was missing.");
              }
            if (fieldGeneratorScheduledFlightDuration.have_value)
              {
                result->setScheduledFlightDuration(fieldGeneratorScheduledFlightDuration.value.referenced());
                fieldGeneratorScheduledFlightDuration.have_value = false;
              }
            else if (!(result->hasScheduledFlightDuration()))
              {
                error("When parsing the object for %what%, the \"ScheduledFlightDuration\" field was missing.");
              }
            if (fieldGeneratorOperationalFlightDuration.have_value)
              {
                result->setOperationalFlightDuration(fieldGeneratorOperationalFlightDuration.value.referenced());
                fieldGeneratorOperationalFlightDuration.have_value = false;
              }
            else if (!(result->hasOperationalFlightDuration()))
              {
                error("When parsing the object for %what%, the \"OperationalFlightDuration\" field was missing.");
              }
            if (fieldGeneratorDeviationInFlightDurationFromScheduled.have_value)
              {
                result->setDeviationInFlightDurationFromScheduled(fieldGeneratorDeviationInFlightDurationFromScheduled.value.referenced());
                fieldGeneratorDeviationInFlightDurationFromScheduled.have_value = false;
              }
            else if (!(result->hasDeviationInFlightDurationFromScheduled()))
              {
                error("When parsing the object for %what%, the \"DeviationInFlightDurationFromScheduled\" field was missing.");
              }
            if (fieldGeneratorWrittenHints.have_value)
              {
                result->initWrittenHints();
                size_t count = fieldGeneratorWrittenHints.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWrittenHints(fieldGeneratorWrittenHints.value[num]);
                  }
                fieldGeneratorWrittenHints.value.clear();
                fieldGeneratorWrittenHints.have_value = false;
              }
            if (fieldGeneratorSpokenHints.have_value)
              {
                result->initSpokenHints();
                size_t count = fieldGeneratorSpokenHints.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSpokenHints(fieldGeneratorSpokenHints.value[num]);
                  }
                fieldGeneratorSpokenHints.value.clear();
                fieldGeneratorSpokenHints.have_value = false;
              }
          }
        virtual void handle_result(FlightStatusJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "r", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'c':
                                        if (strcmp(&(field_name[4]), "raft") == 0)
                                            return &fieldGeneratorAircraft;
                                        break;
                                    case 'l':
                                        if (strcmp(&(field_name[4]), "ineFlightNumber") == 0)
                                            return &fieldGeneratorAirlineFlightNumber;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "rival") == 0)
                                return &fieldGeneratorArrival;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "odeshares") == 0)
                        return &fieldGeneratorCodeshares;
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
                                        case 0:
                                            return &fieldGeneratorDeparture;
                                        case 'A':
                                            if (strcmp(&(field_name[10]), "rrivalText") == 0)
                                                return &fieldGeneratorDepartureArrivalText;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'v':
                                if (strcmp(&(field_name[3]), "iationInFlightDurationFromScheduled") == 0)
                                    return &fieldGeneratorDeviationInFlightDurationFromScheduled;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "light", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[7]), "d") == 0)
                                    return &fieldGeneratorFlightId;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "ravelState") == 0)
                                    return &fieldGeneratorFlightTravelState;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "atchingCodeshareIndex") == 0)
                        return &fieldGeneratorMatchingCodeshareIndex;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "perationalFlightDuration") == 0)
                        return &fieldGeneratorOperationalFlightDuration;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "heduledFlightDuration") == 0)
                                return &fieldGeneratorScheduledFlightDuration;
                            break;
                        case 'p':
                            if (strncmp(&(field_name[2]), "oken", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'H':
                                        if (strcmp(&(field_name[7]), "ints") == 0)
                                            return &fieldGeneratorSpokenHints;
                                        break;
                                    case 'L':
                                        if (strcmp(&(field_name[7]), "abel") == 0)
                                            return &fieldGeneratorSpokenLabel;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "atusSummary", 11) == 0)
                              {
                                switch ((unsigned char)(field_name[13]))
                                  {
                                    case 0:
                                        return &fieldGeneratorStatusSummary;
                                    case 'S':
                                        if (strcmp(&(field_name[14]), "hort") == 0)
                                            return &fieldGeneratorStatusSummaryShort;
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
                case 'T':
                    if (strcmp(&(field_name[1]), "ailNumber") == 0)
                        return &fieldGeneratorTailNumber;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "rittenHints") == 0)
                        return &fieldGeneratorWrittenHints;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFlightId("field \"FlightId\" of the FlightStatus class"), fieldGeneratorLabel("field \"Label\" of the FlightStatus class"), fieldGeneratorSpokenLabel("field \"SpokenLabel\" of the FlightStatus class"), fieldGeneratorAirlineFlightNumber("field \"AirlineFlightNumber\" of the FlightStatus class", ignore_extras), fieldGeneratorCodeshares("field \"Codeshares\" of the FlightStatus class", ignore_extras), fieldGeneratorMatchingCodeshareIndex("field \"MatchingCodeshareIndex\" of the FlightStatus class"), fieldGeneratorFlightTravelState("field \"FlightTravelState\" of the FlightStatus class"), fieldGeneratorStatusSummary("field \"StatusSummary\" of the FlightStatus class"), fieldGeneratorStatusSummaryShort("field \"StatusSummaryShort\" of the FlightStatus class"), fieldGeneratorDepartureArrivalText("field \"DepartureArrivalText\" of the FlightStatus class"), fieldGeneratorTailNumber("field \"TailNumber\" of the FlightStatus class"), fieldGeneratorAircraft("field \"Aircraft\" of the FlightStatus class", ignore_extras), fieldGeneratorDeparture("field \"Departure\" of the FlightStatus class", ignore_extras), fieldGeneratorArrival("field \"Arrival\" of the FlightStatus class", ignore_extras), fieldGeneratorScheduledFlightDuration("field \"ScheduledFlightDuration\" of the FlightStatus class", ignore_extras), fieldGeneratorOperationalFlightDuration("field \"OperationalFlightDuration\" of the FlightStatus class", ignore_extras), fieldGeneratorDeviationInFlightDurationFromScheduled("field \"DeviationInFlightDurationFromScheduled\" of the FlightStatus class", ignore_extras), fieldGeneratorWrittenHints("field \"WrittenHints\" of the FlightStatus class"), fieldGeneratorSpokenHints("field \"SpokenHints\" of the FlightStatus class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatus class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFlightId.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorSpokenLabel.reset();
            fieldGeneratorAirlineFlightNumber.reset();
            fieldGeneratorCodeshares.reset();
            fieldGeneratorMatchingCodeshareIndex.reset();
            fieldGeneratorFlightTravelState.reset();
            fieldGeneratorStatusSummary.reset();
            fieldGeneratorStatusSummaryShort.reset();
            fieldGeneratorDepartureArrivalText.reset();
            fieldGeneratorTailNumber.reset();
            fieldGeneratorAircraft.reset();
            fieldGeneratorDeparture.reset();
            fieldGeneratorArrival.reset();
            fieldGeneratorScheduledFlightDuration.reset();
            fieldGeneratorOperationalFlightDuration.reset();
            fieldGeneratorDeviationInFlightDurationFromScheduled.reset();
            fieldGeneratorWrittenHints.reset();
            fieldGeneratorSpokenHints.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATUSJSON_H */
