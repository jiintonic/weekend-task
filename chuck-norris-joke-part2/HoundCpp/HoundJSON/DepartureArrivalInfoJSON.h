/* file "DepartureArrivalInfoJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DEPARTUREARRIVALINFOJSON_H
#define DEPARTUREARRIVALINFOJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "FlightStatusAirportJSON.h"
#include "FlightStatusAirportJSON.h"
#include "FlightTimesJSON.h"
#include "FlightTimesJSON.h"
#include "FlightTimesJSON.h"
#include "FlightTimesJSON.h"
#include "FlightTimesJSON.h"
#include "FlightTimesJSON.h"
#include "FlightTimesJSON.h"
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


class DepartureArrivalInfoJSON : public ReferenceCounted
  {
  public:
    enum TypeOperationalDateTimeType
      {
        OperationalDateTimeType_Scheduled,
        OperationalDateTimeType_Estimated,
        OperationalDateTimeType_Actual
      };

    static TypeOperationalDateTimeType  stringToOperationalDateTimeType(const char *chars);
    static const char * stringFromOperationalDateTimeType(TypeOperationalDateTimeType the_enum);
    enum TypeStateInTimeline
      {
        StateInTimeline_Upcoming,
        StateInTimeline_Defunct,
        StateInTimeline_InPast
      };

    static TypeStateInTimeline  stringToStateInTimeline(const char *chars);
    static const char * stringFromStateInTimeline(TypeStateInTimeline the_enum);

  private:
    bool flagHasSummary;
    std::string storeSummary;
    bool flagHasAirport;
    FlightStatusAirportJSON * storeAirport;
    bool flagHasDivertedToAirport;
    FlightStatusAirportJSON * storeDivertedToAirport;
    bool flagHasTerminal;
    std::string storeTerminal;
    bool flagHasGate;
    std::string storeGate;
    bool flagHasBaggageClaim;
    std::string storeBaggageClaim;
    bool flagHasActualGateTime;
    FlightTimesJSON * storeActualGateTime;
    bool flagHasEstimatedGateTime;
    FlightTimesJSON * storeEstimatedGateTime;
    bool flagHasScheduledGateTime;
    FlightTimesJSON * storeScheduledGateTime;
    bool flagHasActualRunwayTime;
    FlightTimesJSON * storeActualRunwayTime;
    bool flagHasEstimatedRunwayTime;
    FlightTimesJSON * storeEstimatedRunwayTime;
    bool flagHasOperationalDateTime;
    FlightTimesJSON * storeOperationalDateTime;
    bool flagHasOperationalDateTimeType;
    TypeOperationalDateTimeType storeOperationalDateTimeType;
    bool flagHasScheduledDateTime;
    FlightTimesJSON * storeScheduledDateTime;
    bool flagHasDeviationFromScheduled;
    TimeDifferenceJSON * storeDeviationFromScheduled;
    bool flagHasStateInTimeline;
    TypeStateInTimeline storeStateInTimeline;
    bool flagHasWaitingPeriod;
    TimeDifferenceJSON * storeWaitingPeriod;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DepartureArrivalInfoJSON(const DepartureArrivalInfoJSON &);
    DepartureArrivalInfoJSON & operator=(const DepartureArrivalInfoJSON &other);

    void  fromJSONSummary(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAirport(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivertedToAirport(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTerminal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBaggageClaim(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActualGateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEstimatedGateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScheduledGateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActualRunwayTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEstimatedRunwayTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOperationalDateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOperationalDateTimeType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScheduledDateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeviationFromScheduled(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStateInTimeline(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWaitingPeriod(JSONValue *json_value, bool ignore_extras = false);


  public:
    DepartureArrivalInfoJSON(void);
    virtual ~DepartureArrivalInfoJSON(void);
    bool  hasSummary(void) const;
    std::string  getSummary(void);
    const std::string  getSummary(void) const;
    bool  hasAirport(void) const;
    FlightStatusAirportJSON *  getAirport(void);
    const FlightStatusAirportJSON *  getAirport(void) const;
    bool  hasDivertedToAirport(void) const;
    FlightStatusAirportJSON *  getDivertedToAirport(void);
    const FlightStatusAirportJSON *  getDivertedToAirport(void) const;
    bool  hasTerminal(void) const;
    std::string  getTerminal(void);
    const std::string  getTerminal(void) const;
    bool  hasGate(void) const;
    std::string  getGate(void);
    const std::string  getGate(void) const;
    bool  hasBaggageClaim(void) const;
    std::string  getBaggageClaim(void);
    const std::string  getBaggageClaim(void) const;
    bool  hasActualGateTime(void) const;
    FlightTimesJSON *  getActualGateTime(void);
    const FlightTimesJSON *  getActualGateTime(void) const;
    bool  hasEstimatedGateTime(void) const;
    FlightTimesJSON *  getEstimatedGateTime(void);
    const FlightTimesJSON *  getEstimatedGateTime(void) const;
    bool  hasScheduledGateTime(void) const;
    FlightTimesJSON *  getScheduledGateTime(void);
    const FlightTimesJSON *  getScheduledGateTime(void) const;
    bool  hasActualRunwayTime(void) const;
    FlightTimesJSON *  getActualRunwayTime(void);
    const FlightTimesJSON *  getActualRunwayTime(void) const;
    bool  hasEstimatedRunwayTime(void) const;
    FlightTimesJSON *  getEstimatedRunwayTime(void);
    const FlightTimesJSON *  getEstimatedRunwayTime(void) const;
    bool  hasOperationalDateTime(void) const;
    FlightTimesJSON *  getOperationalDateTime(void);
    const FlightTimesJSON *  getOperationalDateTime(void) const;
    bool  hasOperationalDateTimeType(void) const;
    TypeOperationalDateTimeType  getOperationalDateTimeType(void);
    const TypeOperationalDateTimeType  getOperationalDateTimeType(void) const;
    const char * getOperationalDateTimeTypeAsChars(void) const;
    std::string  getOperationalDateTimeTypeAsString(void) const;
    bool  hasScheduledDateTime(void) const;
    FlightTimesJSON *  getScheduledDateTime(void);
    const FlightTimesJSON *  getScheduledDateTime(void) const;
    bool  hasDeviationFromScheduled(void) const;
    TimeDifferenceJSON *  getDeviationFromScheduled(void);
    const TimeDifferenceJSON *  getDeviationFromScheduled(void) const;
    bool  hasStateInTimeline(void) const;
    TypeStateInTimeline  getStateInTimeline(void);
    const TypeStateInTimeline  getStateInTimeline(void) const;
    const char * getStateInTimelineAsChars(void) const;
    std::string  getStateInTimelineAsString(void) const;
    bool  hasWaitingPeriod(void) const;
    TimeDifferenceJSON *  getWaitingPeriod(void);
    const TimeDifferenceJSON *  getWaitingPeriod(void) const;

    virtual size_t extraDepartureArrivalInfoComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDepartureArrivalInfoComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDepartureArrivalInfoComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDepartureArrivalInfoComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDepartureArrivalInfoLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDepartureArrivalInfoLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSummary(std::string new_value)
      {
        flagHasSummary = true;
        storeSummary = new_value;
      }
    void unsetSummary(void)
      {
        flagHasSummary = false;
      }
    void setAirport(FlightStatusAirportJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAirport)
          {
            storeAirport->remove_reference();
          }
        flagHasAirport = true;
        storeAirport = new_value;
      }
    void unsetAirport(void)
      {
        if (flagHasAirport)
          {
            storeAirport->remove_reference();
          }
        flagHasAirport = false;
      }
    void setDivertedToAirport(FlightStatusAirportJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDivertedToAirport)
          {
            storeDivertedToAirport->remove_reference();
          }
        flagHasDivertedToAirport = true;
        storeDivertedToAirport = new_value;
      }
    void unsetDivertedToAirport(void)
      {
        if (flagHasDivertedToAirport)
          {
            storeDivertedToAirport->remove_reference();
          }
        flagHasDivertedToAirport = false;
      }
    void setTerminal(std::string new_value)
      {
        flagHasTerminal = true;
        storeTerminal = new_value;
      }
    void unsetTerminal(void)
      {
        flagHasTerminal = false;
      }
    void setGate(std::string new_value)
      {
        flagHasGate = true;
        storeGate = new_value;
      }
    void unsetGate(void)
      {
        flagHasGate = false;
      }
    void setBaggageClaim(std::string new_value)
      {
        flagHasBaggageClaim = true;
        storeBaggageClaim = new_value;
      }
    void unsetBaggageClaim(void)
      {
        flagHasBaggageClaim = false;
      }
    void setActualGateTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasActualGateTime)
          {
            storeActualGateTime->remove_reference();
          }
        flagHasActualGateTime = true;
        storeActualGateTime = new_value;
      }
    void unsetActualGateTime(void)
      {
        if (flagHasActualGateTime)
          {
            storeActualGateTime->remove_reference();
          }
        flagHasActualGateTime = false;
      }
    void setEstimatedGateTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEstimatedGateTime)
          {
            storeEstimatedGateTime->remove_reference();
          }
        flagHasEstimatedGateTime = true;
        storeEstimatedGateTime = new_value;
      }
    void unsetEstimatedGateTime(void)
      {
        if (flagHasEstimatedGateTime)
          {
            storeEstimatedGateTime->remove_reference();
          }
        flagHasEstimatedGateTime = false;
      }
    void setScheduledGateTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasScheduledGateTime)
          {
            storeScheduledGateTime->remove_reference();
          }
        flagHasScheduledGateTime = true;
        storeScheduledGateTime = new_value;
      }
    void unsetScheduledGateTime(void)
      {
        if (flagHasScheduledGateTime)
          {
            storeScheduledGateTime->remove_reference();
          }
        flagHasScheduledGateTime = false;
      }
    void setActualRunwayTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasActualRunwayTime)
          {
            storeActualRunwayTime->remove_reference();
          }
        flagHasActualRunwayTime = true;
        storeActualRunwayTime = new_value;
      }
    void unsetActualRunwayTime(void)
      {
        if (flagHasActualRunwayTime)
          {
            storeActualRunwayTime->remove_reference();
          }
        flagHasActualRunwayTime = false;
      }
    void setEstimatedRunwayTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEstimatedRunwayTime)
          {
            storeEstimatedRunwayTime->remove_reference();
          }
        flagHasEstimatedRunwayTime = true;
        storeEstimatedRunwayTime = new_value;
      }
    void unsetEstimatedRunwayTime(void)
      {
        if (flagHasEstimatedRunwayTime)
          {
            storeEstimatedRunwayTime->remove_reference();
          }
        flagHasEstimatedRunwayTime = false;
      }
    void setOperationalDateTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOperationalDateTime)
          {
            storeOperationalDateTime->remove_reference();
          }
        flagHasOperationalDateTime = true;
        storeOperationalDateTime = new_value;
      }
    void unsetOperationalDateTime(void)
      {
        if (flagHasOperationalDateTime)
          {
            storeOperationalDateTime->remove_reference();
          }
        flagHasOperationalDateTime = false;
      }
    void setOperationalDateTimeType(TypeOperationalDateTimeType new_value)
      {
        flagHasOperationalDateTimeType = true;
        storeOperationalDateTimeType = new_value;
      }
    void setOperationalDateTimeType(const char *chars)
      {
        setOperationalDateTimeType(stringToOperationalDateTimeType(chars));
      }
    void setOperationalDateTimeType(std::string the_string)
      {
        setOperationalDateTimeType(stringToOperationalDateTimeType(the_string.c_str()));
      }
    void unsetOperationalDateTimeType(void)
      {
        flagHasOperationalDateTimeType = false;
      }
    void setScheduledDateTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasScheduledDateTime)
          {
            storeScheduledDateTime->remove_reference();
          }
        flagHasScheduledDateTime = true;
        storeScheduledDateTime = new_value;
      }
    void unsetScheduledDateTime(void)
      {
        if (flagHasScheduledDateTime)
          {
            storeScheduledDateTime->remove_reference();
          }
        flagHasScheduledDateTime = false;
      }
    void setDeviationFromScheduled(TimeDifferenceJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeviationFromScheduled)
          {
            storeDeviationFromScheduled->remove_reference();
          }
        flagHasDeviationFromScheduled = true;
        storeDeviationFromScheduled = new_value;
      }
    void unsetDeviationFromScheduled(void)
      {
        if (flagHasDeviationFromScheduled)
          {
            storeDeviationFromScheduled->remove_reference();
          }
        flagHasDeviationFromScheduled = false;
      }
    void setStateInTimeline(TypeStateInTimeline new_value)
      {
        flagHasStateInTimeline = true;
        storeStateInTimeline = new_value;
      }
    void setStateInTimeline(const char *chars)
      {
        setStateInTimeline(stringToStateInTimeline(chars));
      }
    void setStateInTimeline(std::string the_string)
      {
        setStateInTimeline(stringToStateInTimeline(the_string.c_str()));
      }
    void unsetStateInTimeline(void)
      {
        flagHasStateInTimeline = false;
      }
    void setWaitingPeriod(TimeDifferenceJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasWaitingPeriod)
          {
            storeWaitingPeriod->remove_reference();
          }
        flagHasWaitingPeriod = true;
        storeWaitingPeriod = new_value;
      }
    void unsetWaitingPeriod(void)
      {
        if (flagHasWaitingPeriod)
          {
            storeWaitingPeriod->remove_reference();
          }
        flagHasWaitingPeriod = false;
      }

    virtual void extraDepartureArrivalInfoAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDepartureArrivalInfoSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDepartureArrivalInfoLookup(key);
        if (old_field == NULL)
          {
            extraDepartureArrivalInfoAppendPair(key, new_component);
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
        if (flagHasSummary)
          {
            handler->start_pair("Summary");
            handler->string_value(storeSummary);
          }
        if (flagHasAirport)
          {
            handler->start_pair("Airport");
            storeAirport->write_as_json(handler);
          }
        if (flagHasDivertedToAirport)
          {
            handler->start_pair("DivertedToAirport");
            storeDivertedToAirport->write_as_json(handler);
          }
        if (flagHasTerminal)
          {
            handler->start_pair("Terminal");
            handler->string_value(storeTerminal);
          }
        if (flagHasGate)
          {
            handler->start_pair("Gate");
            handler->string_value(storeGate);
          }
        if (flagHasBaggageClaim)
          {
            handler->start_pair("BaggageClaim");
            handler->string_value(storeBaggageClaim);
          }
        if (flagHasActualGateTime)
          {
            handler->start_pair("ActualGateTime");
            storeActualGateTime->write_as_json(handler);
          }
        if (flagHasEstimatedGateTime)
          {
            handler->start_pair("EstimatedGateTime");
            storeEstimatedGateTime->write_as_json(handler);
          }
        if (flagHasScheduledGateTime)
          {
            handler->start_pair("ScheduledGateTime");
            storeScheduledGateTime->write_as_json(handler);
          }
        if (flagHasActualRunwayTime)
          {
            handler->start_pair("ActualRunwayTime");
            storeActualRunwayTime->write_as_json(handler);
          }
        if (flagHasEstimatedRunwayTime)
          {
            handler->start_pair("EstimatedRunwayTime");
            storeEstimatedRunwayTime->write_as_json(handler);
          }
        assert(flagHasOperationalDateTime);
        handler->start_pair("OperationalDateTime");
        storeOperationalDateTime->write_as_json(handler);
        assert(flagHasOperationalDateTimeType);
        handler->start_pair("OperationalDateTimeType");
        switch (storeOperationalDateTimeType)
          {
            case OperationalDateTimeType_Scheduled:
                handler->string_value("Scheduled");
                break;
            case OperationalDateTimeType_Estimated:
                handler->string_value("Estimated");
                break;
            case OperationalDateTimeType_Actual:
                handler->string_value("Actual");
                break;
            default:
                assert(false);
          }
        assert(flagHasScheduledDateTime);
        handler->start_pair("ScheduledDateTime");
        storeScheduledDateTime->write_as_json(handler);
        assert(flagHasDeviationFromScheduled);
        handler->start_pair("DeviationFromScheduled");
        storeDeviationFromScheduled->write_as_json(handler);
        assert(flagHasStateInTimeline);
        handler->start_pair("StateInTimeline");
        switch (storeStateInTimeline)
          {
            case StateInTimeline_Upcoming:
                handler->string_value("Upcoming");
                break;
            case StateInTimeline_Defunct:
                handler->string_value("Defunct");
                break;
            case StateInTimeline_InPast:
                handler->string_value("InPast");
                break;
            default:
                assert(false);
          }
        assert(flagHasWaitingPeriod);
        handler->start_pair("WaitingPeriod");
        storeWaitingPeriod->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOperationalDateTime()))
          {
            return "When parsing the object for %what%, the \"OperationalDateTime\" field was missing.";
          }
        if (!(hasOperationalDateTimeType()))
          {
            return "When parsing the object for %what%, the \"OperationalDateTimeType\" field was missing.";
          }
        if (!(hasScheduledDateTime()))
          {
            return "When parsing the object for %what%, the \"ScheduledDateTime\" field was missing.";
          }
        if (!(hasDeviationFromScheduled()))
          {
            return "When parsing the object for %what%, the \"DeviationFromScheduled\" field was missing.";
          }
        if (!(hasStateInTimeline()))
          {
            return "When parsing the object for %what%, the \"StateInTimeline\" field was missing.";
          }
        if (!(hasWaitingPeriod()))
          {
            return "When parsing the object for %what%, the \"WaitingPeriod\" field was missing.";
          }
        return NULL;
      }

    static DepartureArrivalInfoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DepartureArrivalInfoJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DepartureArrivalInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DepartureArrivalInfoJSON>, DepartureArrivalInfoJSON *, bool> generator("Type DepartureArrivalInfo", ignore_extras);
            parse_json_value(text, "Text for DepartureArrivalInfoJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DepartureArrivalInfoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DepartureArrivalInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DepartureArrivalInfoJSON>, DepartureArrivalInfoJSON *, bool> generator("Type DepartureArrivalInfo", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSummary;
        JSONHoldingGenerator<FlightStatusAirportJSON::Generator, RCHandle<FlightStatusAirportJSON>, FlightStatusAirportJSON *, bool > fieldGeneratorAirport;
        JSONHoldingGenerator<FlightStatusAirportJSON::Generator, RCHandle<FlightStatusAirportJSON>, FlightStatusAirportJSON *, bool > fieldGeneratorDivertedToAirport;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTerminal;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBaggageClaim;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorActualGateTime;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorEstimatedGateTime;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorScheduledGateTime;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorActualRunwayTime;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorEstimatedRunwayTime;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorOperationalDateTime;
    class FieldGeneratorOperationalDateTimeType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorOperationalDateTimeType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorOperationalDateTimeType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToOperationalDateTimeType(result));
              }
            virtual void handle_result(TypeOperationalDateTimeType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorOperationalDateTimeType, TypeOperationalDateTimeType, TypeOperationalDateTimeType > fieldGeneratorOperationalDateTimeType;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorScheduledDateTime;
        JSONHoldingGenerator<TimeDifferenceJSON::Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool > fieldGeneratorDeviationFromScheduled;
    class FieldGeneratorStateInTimeline : public JSONStringGenerator
          {
          protected:
            FieldGeneratorStateInTimeline(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorStateInTimeline(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToStateInTimeline(result));
              }
            virtual void handle_result(TypeStateInTimeline result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorStateInTimeline, TypeStateInTimeline, TypeStateInTimeline > fieldGeneratorStateInTimeline;
        JSONHoldingGenerator<TimeDifferenceJSON::Generator, RCHandle<TimeDifferenceJSON>, TimeDifferenceJSON *, bool > fieldGeneratorWaitingPeriod;
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
            DepartureArrivalInfoJSON *result = new DepartureArrivalInfoJSON();
            assert(result != NULL);
            RCHandle<DepartureArrivalInfoJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDepartureArrivalInfoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DepartureArrivalInfoJSON *result)
          {
            if (fieldGeneratorSummary.have_value)
              {
                result->setSummary(fieldGeneratorSummary.value);
                fieldGeneratorSummary.have_value = false;
              }
            if (fieldGeneratorAirport.have_value)
              {
                result->setAirport(fieldGeneratorAirport.value.referenced());
                fieldGeneratorAirport.have_value = false;
              }
            if (fieldGeneratorDivertedToAirport.have_value)
              {
                result->setDivertedToAirport(fieldGeneratorDivertedToAirport.value.referenced());
                fieldGeneratorDivertedToAirport.have_value = false;
              }
            if (fieldGeneratorTerminal.have_value)
              {
                result->setTerminal(fieldGeneratorTerminal.value);
                fieldGeneratorTerminal.have_value = false;
              }
            if (fieldGeneratorGate.have_value)
              {
                result->setGate(fieldGeneratorGate.value);
                fieldGeneratorGate.have_value = false;
              }
            if (fieldGeneratorBaggageClaim.have_value)
              {
                result->setBaggageClaim(fieldGeneratorBaggageClaim.value);
                fieldGeneratorBaggageClaim.have_value = false;
              }
            if (fieldGeneratorActualGateTime.have_value)
              {
                result->setActualGateTime(fieldGeneratorActualGateTime.value.referenced());
                fieldGeneratorActualGateTime.have_value = false;
              }
            if (fieldGeneratorEstimatedGateTime.have_value)
              {
                result->setEstimatedGateTime(fieldGeneratorEstimatedGateTime.value.referenced());
                fieldGeneratorEstimatedGateTime.have_value = false;
              }
            if (fieldGeneratorScheduledGateTime.have_value)
              {
                result->setScheduledGateTime(fieldGeneratorScheduledGateTime.value.referenced());
                fieldGeneratorScheduledGateTime.have_value = false;
              }
            if (fieldGeneratorActualRunwayTime.have_value)
              {
                result->setActualRunwayTime(fieldGeneratorActualRunwayTime.value.referenced());
                fieldGeneratorActualRunwayTime.have_value = false;
              }
            if (fieldGeneratorEstimatedRunwayTime.have_value)
              {
                result->setEstimatedRunwayTime(fieldGeneratorEstimatedRunwayTime.value.referenced());
                fieldGeneratorEstimatedRunwayTime.have_value = false;
              }
            if (fieldGeneratorOperationalDateTime.have_value)
              {
                result->setOperationalDateTime(fieldGeneratorOperationalDateTime.value.referenced());
                fieldGeneratorOperationalDateTime.have_value = false;
              }
            else if (!(result->hasOperationalDateTime()))
              {
                error("When parsing the object for %what%, the \"OperationalDateTime\" field was missing.");
              }
            if (fieldGeneratorOperationalDateTimeType.have_value)
              {
                result->setOperationalDateTimeType(fieldGeneratorOperationalDateTimeType.value);
                fieldGeneratorOperationalDateTimeType.have_value = false;
              }
            else if (!(result->hasOperationalDateTimeType()))
              {
                error("When parsing the object for %what%, the \"OperationalDateTimeType\" field was missing.");
              }
            if (fieldGeneratorScheduledDateTime.have_value)
              {
                result->setScheduledDateTime(fieldGeneratorScheduledDateTime.value.referenced());
                fieldGeneratorScheduledDateTime.have_value = false;
              }
            else if (!(result->hasScheduledDateTime()))
              {
                error("When parsing the object for %what%, the \"ScheduledDateTime\" field was missing.");
              }
            if (fieldGeneratorDeviationFromScheduled.have_value)
              {
                result->setDeviationFromScheduled(fieldGeneratorDeviationFromScheduled.value.referenced());
                fieldGeneratorDeviationFromScheduled.have_value = false;
              }
            else if (!(result->hasDeviationFromScheduled()))
              {
                error("When parsing the object for %what%, the \"DeviationFromScheduled\" field was missing.");
              }
            if (fieldGeneratorStateInTimeline.have_value)
              {
                result->setStateInTimeline(fieldGeneratorStateInTimeline.value);
                fieldGeneratorStateInTimeline.have_value = false;
              }
            else if (!(result->hasStateInTimeline()))
              {
                error("When parsing the object for %what%, the \"StateInTimeline\" field was missing.");
              }
            if (fieldGeneratorWaitingPeriod.have_value)
              {
                result->setWaitingPeriod(fieldGeneratorWaitingPeriod.value.referenced());
                fieldGeneratorWaitingPeriod.have_value = false;
              }
            else if (!(result->hasWaitingPeriod()))
              {
                error("When parsing the object for %what%, the \"WaitingPeriod\" field was missing.");
              }
          }
        virtual void handle_result(DepartureArrivalInfoJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strncmp(&(field_name[2]), "tual", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'G':
                                        if (strcmp(&(field_name[7]), "ateTime") == 0)
                                            return &fieldGeneratorActualGateTime;
                                        break;
                                    case 'R':
                                        if (strcmp(&(field_name[7]), "unwayTime") == 0)
                                            return &fieldGeneratorActualRunwayTime;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "rport") == 0)
                                return &fieldGeneratorAirport;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'B':
                    if (strcmp(&(field_name[1]), "aggageClaim") == 0)
                        return &fieldGeneratorBaggageClaim;
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "viationFromScheduled") == 0)
                                return &fieldGeneratorDeviationFromScheduled;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "vertedToAirport") == 0)
                                return &fieldGeneratorDivertedToAirport;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'E':
                    if (strncmp(&(field_name[1]), "stimated", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'G':
                                if (strcmp(&(field_name[10]), "ateTime") == 0)
                                    return &fieldGeneratorEstimatedGateTime;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[10]), "unwayTime") == 0)
                                    return &fieldGeneratorEstimatedRunwayTime;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "ate") == 0)
                        return &fieldGeneratorGate;
                    break;
                case 'O':
                    if (strncmp(&(field_name[1]), "perationalDateTime", 18) == 0)
                      {
                        switch ((unsigned char)(field_name[19]))
                          {
                            case 0:
                                return &fieldGeneratorOperationalDateTime;
                            case 'T':
                                if (strcmp(&(field_name[20]), "ype") == 0)
                                    return &fieldGeneratorOperationalDateTimeType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strncmp(&(field_name[2]), "heduled", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[10]), "ateTime") == 0)
                                            return &fieldGeneratorScheduledDateTime;
                                        break;
                                    case 'G':
                                        if (strcmp(&(field_name[10]), "ateTime") == 0)
                                            return &fieldGeneratorScheduledGateTime;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "ateInTimeline") == 0)
                                return &fieldGeneratorStateInTimeline;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "mmary") == 0)
                                return &fieldGeneratorSummary;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "erminal") == 0)
                        return &fieldGeneratorTerminal;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "aitingPeriod") == 0)
                        return &fieldGeneratorWaitingPeriod;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSummary("field \"Summary\" of the DepartureArrivalInfo class"), fieldGeneratorAirport("field \"Airport\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorDivertedToAirport("field \"DivertedToAirport\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorTerminal("field \"Terminal\" of the DepartureArrivalInfo class"), fieldGeneratorGate("field \"Gate\" of the DepartureArrivalInfo class"), fieldGeneratorBaggageClaim("field \"BaggageClaim\" of the DepartureArrivalInfo class"), fieldGeneratorActualGateTime("field \"ActualGateTime\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorEstimatedGateTime("field \"EstimatedGateTime\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorScheduledGateTime("field \"ScheduledGateTime\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorActualRunwayTime("field \"ActualRunwayTime\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorEstimatedRunwayTime("field \"EstimatedRunwayTime\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorOperationalDateTime("field \"OperationalDateTime\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorOperationalDateTimeType("field \"OperationalDateTimeType\" of the DepartureArrivalInfo class"), fieldGeneratorScheduledDateTime("field \"ScheduledDateTime\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorDeviationFromScheduled("field \"DeviationFromScheduled\" of the DepartureArrivalInfo class", ignore_extras), fieldGeneratorStateInTimeline("field \"StateInTimeline\" of the DepartureArrivalInfo class"), fieldGeneratorWaitingPeriod("field \"WaitingPeriod\" of the DepartureArrivalInfo class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DepartureArrivalInfo class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSummary.reset();
            fieldGeneratorAirport.reset();
            fieldGeneratorDivertedToAirport.reset();
            fieldGeneratorTerminal.reset();
            fieldGeneratorGate.reset();
            fieldGeneratorBaggageClaim.reset();
            fieldGeneratorActualGateTime.reset();
            fieldGeneratorEstimatedGateTime.reset();
            fieldGeneratorScheduledGateTime.reset();
            fieldGeneratorActualRunwayTime.reset();
            fieldGeneratorEstimatedRunwayTime.reset();
            fieldGeneratorOperationalDateTime.reset();
            fieldGeneratorOperationalDateTimeType.reset();
            fieldGeneratorScheduledDateTime.reset();
            fieldGeneratorDeviationFromScheduled.reset();
            fieldGeneratorStateInTimeline.reset();
            fieldGeneratorWaitingPeriod.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DEPARTUREARRIVALINFOJSON_H */
