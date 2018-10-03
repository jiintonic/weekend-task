/* file "DepartureArrivalInfoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DepartureArrivalInfoJSON.h"

#include "DepartureArrivalInfoJSON.h"


DepartureArrivalInfoJSON::TypeOperationalDateTimeType DepartureArrivalInfoJSON::stringToOperationalDateTimeType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ctual") == 0)
                return OperationalDateTimeType_Actual;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "stimated") == 0)
                return OperationalDateTimeType_Estimated;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "cheduled") == 0)
                return OperationalDateTimeType_Scheduled;
            break;
        default:
            break;
      }
    throw("The value for field `OperationalDateTimeType' is not one of the legal values.");
  }

const char *DepartureArrivalInfoJSON::stringFromOperationalDateTimeType(TypeOperationalDateTimeType the_enum)
  {
    switch (the_enum)
      {
        case OperationalDateTimeType_Scheduled:
            return "Scheduled";
        case OperationalDateTimeType_Estimated:
            return "Estimated";
        case OperationalDateTimeType_Actual:
            return "Actual";
        default:
            assert(false);
            return NULL;
      }
  }

DepartureArrivalInfoJSON::TypeStateInTimeline DepartureArrivalInfoJSON::stringToStateInTimeline(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "efunct") == 0)
                return StateInTimeline_Defunct;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nPast") == 0)
                return StateInTimeline_InPast;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "pcoming") == 0)
                return StateInTimeline_Upcoming;
            break;
        default:
            break;
      }
    throw("The value for field `StateInTimeline' is not one of the legal values.");
  }

const char *DepartureArrivalInfoJSON::stringFromStateInTimeline(TypeStateInTimeline the_enum)
  {
    switch (the_enum)
      {
        case StateInTimeline_Upcoming:
            return "Upcoming";
        case StateInTimeline_Defunct:
            return "Defunct";
        case StateInTimeline_InPast:
            return "InPast";
        default:
            assert(false);
            return NULL;
      }
  }

DepartureArrivalInfoJSON::DepartureArrivalInfoJSON(const DepartureArrivalInfoJSON &)
  {
    assert(false);
  }

DepartureArrivalInfoJSON &DepartureArrivalInfoJSON::operator=(const DepartureArrivalInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DepartureArrivalInfoJSON::fromJSONSummary(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Summary of DepartureArrivalInfoJSON is not a string.");
    setSummary(std::string(json_string->getData()));
  }

void DepartureArrivalInfoJSON::fromJSONAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatusAirportJSON *convert_classy = FlightStatusAirportJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirport(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONDivertedToAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatusAirportJSON *convert_classy = FlightStatusAirportJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivertedToAirport(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONTerminal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Terminal of DepartureArrivalInfoJSON is not a string.");
    setTerminal(std::string(json_string->getData()));
  }

void DepartureArrivalInfoJSON::fromJSONGate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Gate of DepartureArrivalInfoJSON is not a string.");
    setGate(std::string(json_string->getData()));
  }

void DepartureArrivalInfoJSON::fromJSONBaggageClaim(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BaggageClaim of DepartureArrivalInfoJSON is not a string.");
    setBaggageClaim(std::string(json_string->getData()));
  }

void DepartureArrivalInfoJSON::fromJSONActualGateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActualGateTime(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONEstimatedGateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEstimatedGateTime(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONScheduledGateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setScheduledGateTime(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONActualRunwayTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActualRunwayTime(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONEstimatedRunwayTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEstimatedRunwayTime(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONOperationalDateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOperationalDateTime(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONOperationalDateTimeType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OperationalDateTimeType of DepartureArrivalInfoJSON is not a string.");
    TypeOperationalDateTimeType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ctual") == 0)
                  {
                    the_enum = OperationalDateTimeType_Actual;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "stimated") == 0)
                  {
                    the_enum = OperationalDateTimeType_Estimated;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "cheduled") == 0)
                  {
                    the_enum = OperationalDateTimeType_Scheduled;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field OperationalDateTimeType of DepartureArrivalInfoJSON is not one of the legal strings.");
  enum_is_done:;
    setOperationalDateTimeType(the_enum);
  }

void DepartureArrivalInfoJSON::fromJSONScheduledDateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setScheduledDateTime(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONDeviationFromScheduled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeDifferenceJSON *convert_classy = TimeDifferenceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeviationFromScheduled(convert_classy);
    convert_classy->remove_reference();
  }

void DepartureArrivalInfoJSON::fromJSONStateInTimeline(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StateInTimeline of DepartureArrivalInfoJSON is not a string.");
    TypeStateInTimeline the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "efunct") == 0)
                  {
                    the_enum = StateInTimeline_Defunct;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nPast") == 0)
                  {
                    the_enum = StateInTimeline_InPast;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "pcoming") == 0)
                  {
                    the_enum = StateInTimeline_Upcoming;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field StateInTimeline of DepartureArrivalInfoJSON is not one of the legal strings.");
  enum_is_done:;
    setStateInTimeline(the_enum);
  }

void DepartureArrivalInfoJSON::fromJSONWaitingPeriod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeDifferenceJSON *convert_classy = TimeDifferenceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWaitingPeriod(convert_classy);
    convert_classy->remove_reference();
  }

DepartureArrivalInfoJSON::DepartureArrivalInfoJSON(void) :
        flagHasSummary(false),
        flagHasAirport(false),
        flagHasDivertedToAirport(false),
        flagHasTerminal(false),
        flagHasGate(false),
        flagHasBaggageClaim(false),
        flagHasActualGateTime(false),
        flagHasEstimatedGateTime(false),
        flagHasScheduledGateTime(false),
        flagHasActualRunwayTime(false),
        flagHasEstimatedRunwayTime(false),
        flagHasOperationalDateTime(false),
        flagHasOperationalDateTimeType(false),
        flagHasScheduledDateTime(false),
        flagHasDeviationFromScheduled(false),
        flagHasStateInTimeline(false),
        flagHasWaitingPeriod(false)
  {
    extraIndex = create_string_index();
  }

DepartureArrivalInfoJSON::~DepartureArrivalInfoJSON(void)
  {
    if (flagHasAirport)
      {
        storeAirport->remove_reference();
      }
    if (flagHasDivertedToAirport)
      {
        storeDivertedToAirport->remove_reference();
      }
    if (flagHasActualGateTime)
      {
        storeActualGateTime->remove_reference();
      }
    if (flagHasEstimatedGateTime)
      {
        storeEstimatedGateTime->remove_reference();
      }
    if (flagHasScheduledGateTime)
      {
        storeScheduledGateTime->remove_reference();
      }
    if (flagHasActualRunwayTime)
      {
        storeActualRunwayTime->remove_reference();
      }
    if (flagHasEstimatedRunwayTime)
      {
        storeEstimatedRunwayTime->remove_reference();
      }
    if (flagHasOperationalDateTime)
      {
        storeOperationalDateTime->remove_reference();
      }
    if (flagHasScheduledDateTime)
      {
        storeScheduledDateTime->remove_reference();
      }
    if (flagHasDeviationFromScheduled)
      {
        storeDeviationFromScheduled->remove_reference();
      }
    if (flagHasWaitingPeriod)
      {
        storeWaitingPeriod->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DepartureArrivalInfoJSON::hasSummary(void) const
  {
    return flagHasSummary;
  }

std::string DepartureArrivalInfoJSON::getSummary(void)
  {
    assert(flagHasSummary);
    return storeSummary;
  }

const std::string DepartureArrivalInfoJSON::getSummary(void) const
  {
    assert(flagHasSummary);
    return storeSummary;
  }

bool DepartureArrivalInfoJSON::hasAirport(void) const
  {
    return flagHasAirport;
  }

FlightStatusAirportJSON * DepartureArrivalInfoJSON::getAirport(void)
  {
    assert(flagHasAirport);
    return storeAirport;
  }

const FlightStatusAirportJSON * DepartureArrivalInfoJSON::getAirport(void) const
  {
    assert(flagHasAirport);
    return storeAirport;
  }

bool DepartureArrivalInfoJSON::hasDivertedToAirport(void) const
  {
    return flagHasDivertedToAirport;
  }

FlightStatusAirportJSON * DepartureArrivalInfoJSON::getDivertedToAirport(void)
  {
    assert(flagHasDivertedToAirport);
    return storeDivertedToAirport;
  }

const FlightStatusAirportJSON * DepartureArrivalInfoJSON::getDivertedToAirport(void) const
  {
    assert(flagHasDivertedToAirport);
    return storeDivertedToAirport;
  }

bool DepartureArrivalInfoJSON::hasTerminal(void) const
  {
    return flagHasTerminal;
  }

std::string DepartureArrivalInfoJSON::getTerminal(void)
  {
    assert(flagHasTerminal);
    return storeTerminal;
  }

const std::string DepartureArrivalInfoJSON::getTerminal(void) const
  {
    assert(flagHasTerminal);
    return storeTerminal;
  }

bool DepartureArrivalInfoJSON::hasGate(void) const
  {
    return flagHasGate;
  }

std::string DepartureArrivalInfoJSON::getGate(void)
  {
    assert(flagHasGate);
    return storeGate;
  }

const std::string DepartureArrivalInfoJSON::getGate(void) const
  {
    assert(flagHasGate);
    return storeGate;
  }

bool DepartureArrivalInfoJSON::hasBaggageClaim(void) const
  {
    return flagHasBaggageClaim;
  }

std::string DepartureArrivalInfoJSON::getBaggageClaim(void)
  {
    assert(flagHasBaggageClaim);
    return storeBaggageClaim;
  }

const std::string DepartureArrivalInfoJSON::getBaggageClaim(void) const
  {
    assert(flagHasBaggageClaim);
    return storeBaggageClaim;
  }

bool DepartureArrivalInfoJSON::hasActualGateTime(void) const
  {
    return flagHasActualGateTime;
  }

FlightTimesJSON * DepartureArrivalInfoJSON::getActualGateTime(void)
  {
    assert(flagHasActualGateTime);
    return storeActualGateTime;
  }

const FlightTimesJSON * DepartureArrivalInfoJSON::getActualGateTime(void) const
  {
    assert(flagHasActualGateTime);
    return storeActualGateTime;
  }

bool DepartureArrivalInfoJSON::hasEstimatedGateTime(void) const
  {
    return flagHasEstimatedGateTime;
  }

FlightTimesJSON * DepartureArrivalInfoJSON::getEstimatedGateTime(void)
  {
    assert(flagHasEstimatedGateTime);
    return storeEstimatedGateTime;
  }

const FlightTimesJSON * DepartureArrivalInfoJSON::getEstimatedGateTime(void) const
  {
    assert(flagHasEstimatedGateTime);
    return storeEstimatedGateTime;
  }

bool DepartureArrivalInfoJSON::hasScheduledGateTime(void) const
  {
    return flagHasScheduledGateTime;
  }

FlightTimesJSON * DepartureArrivalInfoJSON::getScheduledGateTime(void)
  {
    assert(flagHasScheduledGateTime);
    return storeScheduledGateTime;
  }

const FlightTimesJSON * DepartureArrivalInfoJSON::getScheduledGateTime(void) const
  {
    assert(flagHasScheduledGateTime);
    return storeScheduledGateTime;
  }

bool DepartureArrivalInfoJSON::hasActualRunwayTime(void) const
  {
    return flagHasActualRunwayTime;
  }

FlightTimesJSON * DepartureArrivalInfoJSON::getActualRunwayTime(void)
  {
    assert(flagHasActualRunwayTime);
    return storeActualRunwayTime;
  }

const FlightTimesJSON * DepartureArrivalInfoJSON::getActualRunwayTime(void) const
  {
    assert(flagHasActualRunwayTime);
    return storeActualRunwayTime;
  }

bool DepartureArrivalInfoJSON::hasEstimatedRunwayTime(void) const
  {
    return flagHasEstimatedRunwayTime;
  }

FlightTimesJSON * DepartureArrivalInfoJSON::getEstimatedRunwayTime(void)
  {
    assert(flagHasEstimatedRunwayTime);
    return storeEstimatedRunwayTime;
  }

const FlightTimesJSON * DepartureArrivalInfoJSON::getEstimatedRunwayTime(void) const
  {
    assert(flagHasEstimatedRunwayTime);
    return storeEstimatedRunwayTime;
  }

bool DepartureArrivalInfoJSON::hasOperationalDateTime(void) const
  {
    return flagHasOperationalDateTime;
  }

FlightTimesJSON * DepartureArrivalInfoJSON::getOperationalDateTime(void)
  {
    assert(flagHasOperationalDateTime);
    return storeOperationalDateTime;
  }

const FlightTimesJSON * DepartureArrivalInfoJSON::getOperationalDateTime(void) const
  {
    assert(flagHasOperationalDateTime);
    return storeOperationalDateTime;
  }

bool DepartureArrivalInfoJSON::hasOperationalDateTimeType(void) const
  {
    return flagHasOperationalDateTimeType;
  }

DepartureArrivalInfoJSON::TypeOperationalDateTimeType DepartureArrivalInfoJSON::getOperationalDateTimeType(void)
  {
    assert(flagHasOperationalDateTimeType);
    return storeOperationalDateTimeType;
  }

const DepartureArrivalInfoJSON::TypeOperationalDateTimeType DepartureArrivalInfoJSON::getOperationalDateTimeType(void) const
  {
    assert(flagHasOperationalDateTimeType);
    return storeOperationalDateTimeType;
  }

const char *DepartureArrivalInfoJSON::getOperationalDateTimeTypeAsChars(void) const
  {
    return stringFromOperationalDateTimeType(getOperationalDateTimeType());
  }

std::string DepartureArrivalInfoJSON::getOperationalDateTimeTypeAsString(void) const
  {
    return stringFromOperationalDateTimeType(getOperationalDateTimeType());
  }

bool DepartureArrivalInfoJSON::hasScheduledDateTime(void) const
  {
    return flagHasScheduledDateTime;
  }

FlightTimesJSON * DepartureArrivalInfoJSON::getScheduledDateTime(void)
  {
    assert(flagHasScheduledDateTime);
    return storeScheduledDateTime;
  }

const FlightTimesJSON * DepartureArrivalInfoJSON::getScheduledDateTime(void) const
  {
    assert(flagHasScheduledDateTime);
    return storeScheduledDateTime;
  }

bool DepartureArrivalInfoJSON::hasDeviationFromScheduled(void) const
  {
    return flagHasDeviationFromScheduled;
  }

TimeDifferenceJSON * DepartureArrivalInfoJSON::getDeviationFromScheduled(void)
  {
    assert(flagHasDeviationFromScheduled);
    return storeDeviationFromScheduled;
  }

const TimeDifferenceJSON * DepartureArrivalInfoJSON::getDeviationFromScheduled(void) const
  {
    assert(flagHasDeviationFromScheduled);
    return storeDeviationFromScheduled;
  }

bool DepartureArrivalInfoJSON::hasStateInTimeline(void) const
  {
    return flagHasStateInTimeline;
  }

DepartureArrivalInfoJSON::TypeStateInTimeline DepartureArrivalInfoJSON::getStateInTimeline(void)
  {
    assert(flagHasStateInTimeline);
    return storeStateInTimeline;
  }

const DepartureArrivalInfoJSON::TypeStateInTimeline DepartureArrivalInfoJSON::getStateInTimeline(void) const
  {
    assert(flagHasStateInTimeline);
    return storeStateInTimeline;
  }

const char *DepartureArrivalInfoJSON::getStateInTimelineAsChars(void) const
  {
    return stringFromStateInTimeline(getStateInTimeline());
  }

std::string DepartureArrivalInfoJSON::getStateInTimelineAsString(void) const
  {
    return stringFromStateInTimeline(getStateInTimeline());
  }

bool DepartureArrivalInfoJSON::hasWaitingPeriod(void) const
  {
    return flagHasWaitingPeriod;
  }

TimeDifferenceJSON * DepartureArrivalInfoJSON::getWaitingPeriod(void)
  {
    assert(flagHasWaitingPeriod);
    return storeWaitingPeriod;
  }

const TimeDifferenceJSON * DepartureArrivalInfoJSON::getWaitingPeriod(void) const
  {
    assert(flagHasWaitingPeriod);
    return storeWaitingPeriod;
  }

DepartureArrivalInfoJSON *DepartureArrivalInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DepartureArrivalInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DepartureArrivalInfoJSON>, DepartureArrivalInfoJSON *, bool> generator("Type DepartureArrivalInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
