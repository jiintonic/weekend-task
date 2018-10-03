/* file "FlightStatusJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusJSON.h"

#include "FlightStatusJSON.h"


FlightStatusJSON::TypeFlightTravelState FlightStatusJSON::stringToFlightTravelState(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "rrived") == 0)
                return FlightTravelState_Arrived;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "anceled") == 0)
                return FlightTravelState_Canceled;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "iverted") == 0)
                return FlightTravelState_Diverted;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "nroute") == 0)
                return FlightTravelState_Enroute;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "cheduled") == 0)
                return FlightTravelState_Scheduled;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return FlightTravelState_Unknown;
            break;
        default:
            break;
      }
    throw("The value for field `FlightTravelState' is not one of the legal values.");
  }

const char *FlightStatusJSON::stringFromFlightTravelState(TypeFlightTravelState the_enum)
  {
    switch (the_enum)
      {
        case FlightTravelState_Scheduled:
            return "Scheduled";
        case FlightTravelState_Canceled:
            return "Canceled";
        case FlightTravelState_Diverted:
            return "Diverted";
        case FlightTravelState_Enroute:
            return "Enroute";
        case FlightTravelState_Arrived:
            return "Arrived";
        case FlightTravelState_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

FlightStatusJSON::FlightStatusJSON(const FlightStatusJSON &)
  {
    assert(false);
  }

FlightStatusJSON &FlightStatusJSON::operator=(const FlightStatusJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatusJSON::fromJSONFlightId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FlightId of FlightStatusJSON is not a string.");
    setFlightId(std::string(json_string->getData()));
  }

void FlightStatusJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of FlightStatusJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void FlightStatusJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of FlightStatusJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void FlightStatusJSON::fromJSONAirlineFlightNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AirlineFlightNumberJSON *convert_classy = AirlineFlightNumberJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirlineFlightNumber(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusJSON::fromJSONCodeshares(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Codeshares of FlightStatusJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightCodeshareJSON * > vector_Codeshares1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightCodeshareJSON *convert_classy = FlightCodeshareJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Codeshares1[num1] = convert_classy;
      }
    initCodeshares();
    for (size_t num4 = 0; num4 < vector_Codeshares1.size(); ++num4)
        appendCodeshares(vector_Codeshares1[num4]);
    for (size_t num1 = 0; num1 < vector_Codeshares1.size(); ++num1)
      {
        vector_Codeshares1[num1]->remove_reference();
      }
  }

void FlightStatusJSON::fromJSONMatchingCodeshareIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MatchingCodeshareIndex of FlightStatusJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MatchingCodeshareIndex of FlightStatusJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMatchingCodeshareIndex(extracted_integer);
  }

void FlightStatusJSON::fromJSONFlightTravelState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FlightTravelState of FlightStatusJSON is not a string.");
    TypeFlightTravelState the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "rrived") == 0)
                  {
                    the_enum = FlightTravelState_Arrived;
                    goto enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "anceled") == 0)
                  {
                    the_enum = FlightTravelState_Canceled;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "iverted") == 0)
                  {
                    the_enum = FlightTravelState_Diverted;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "nroute") == 0)
                  {
                    the_enum = FlightTravelState_Enroute;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "cheduled") == 0)
                  {
                    the_enum = FlightTravelState_Scheduled;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = FlightTravelState_Unknown;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field FlightTravelState of FlightStatusJSON is not one of the legal strings.");
  enum_is_done:;
    setFlightTravelState(the_enum);
  }

void FlightStatusJSON::fromJSONStatusSummary(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StatusSummary of FlightStatusJSON is not a string.");
    setStatusSummary(std::string(json_string->getData()));
  }

void FlightStatusJSON::fromJSONStatusSummaryShort(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StatusSummaryShort of FlightStatusJSON is not a string.");
    setStatusSummaryShort(std::string(json_string->getData()));
  }

void FlightStatusJSON::fromJSONDepartureArrivalText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DepartureArrivalText of FlightStatusJSON is not a string.");
    setDepartureArrivalText(std::string(json_string->getData()));
  }

void FlightStatusJSON::fromJSONTailNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TailNumber of FlightStatusJSON is not a string.");
    setTailNumber(std::string(json_string->getData()));
  }

void FlightStatusJSON::fromJSONAircraft(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AircraftJSON *convert_classy = AircraftJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAircraft(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusJSON::fromJSONDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DepartureArrivalInfoJSON *convert_classy = DepartureArrivalInfoJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusJSON::fromJSONArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DepartureArrivalInfoJSON *convert_classy = DepartureArrivalInfoJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArrival(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusJSON::fromJSONScheduledFlightDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeDifferenceJSON *convert_classy = TimeDifferenceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setScheduledFlightDuration(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusJSON::fromJSONOperationalFlightDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeDifferenceJSON *convert_classy = TimeDifferenceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOperationalFlightDuration(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusJSON::fromJSONDeviationInFlightDurationFromScheduled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TimeDifferenceJSON *convert_classy = TimeDifferenceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeviationInFlightDurationFromScheduled(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusJSON::fromJSONWrittenHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field WrittenHints of FlightStatusJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_WrittenHints1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field WrittenHints of FlightStatusJSON is not a string.");
        vector_WrittenHints1[num1] = std::string(json_string->getData());
      }
    initWrittenHints();
    for (size_t num5 = 0; num5 < vector_WrittenHints1.size(); ++num5)
        appendWrittenHints(vector_WrittenHints1[num5]);
    for (size_t num1 = 0; num1 < vector_WrittenHints1.size(); ++num1)
      {
      }
  }

void FlightStatusJSON::fromJSONSpokenHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SpokenHints of FlightStatusJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_SpokenHints1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SpokenHints of FlightStatusJSON is not a string.");
        vector_SpokenHints1[num1] = std::string(json_string->getData());
      }
    initSpokenHints();
    for (size_t num6 = 0; num6 < vector_SpokenHints1.size(); ++num6)
        appendSpokenHints(vector_SpokenHints1[num6]);
    for (size_t num1 = 0; num1 < vector_SpokenHints1.size(); ++num1)
      {
      }
  }

FlightStatusJSON::FlightStatusJSON(void) :
        flagHasFlightId(false),
        flagHasLabel(false),
        flagHasSpokenLabel(false),
        flagHasAirlineFlightNumber(false),
        flagHasCodeshares(false),
        flagHasMatchingCodeshareIndex(false),
        flagHasFlightTravelState(false),
        flagHasStatusSummary(false),
        flagHasStatusSummaryShort(false),
        flagHasDepartureArrivalText(false),
        flagHasTailNumber(false),
        flagHasAircraft(false),
        flagHasDeparture(false),
        flagHasArrival(false),
        flagHasScheduledFlightDuration(false),
        flagHasOperationalFlightDuration(false),
        flagHasDeviationInFlightDurationFromScheduled(false),
        flagHasWrittenHints(false),
        flagHasSpokenHints(false)
  {
    extraIndex = create_string_index();
  }

FlightStatusJSON::~FlightStatusJSON(void)
  {
    if (flagHasAirlineFlightNumber)
      {
        storeAirlineFlightNumber->remove_reference();
      }
    if (flagHasCodeshares)
      {
        for (size_t num4 = 0; num4 < storeCodeshares.size(); ++num4)
          {
            storeCodeshares[num4]->remove_reference();
          }
      }
    if (flagHasAircraft)
      {
        storeAircraft->remove_reference();
      }
    if (flagHasDeparture)
      {
        storeDeparture->remove_reference();
      }
    if (flagHasArrival)
      {
        storeArrival->remove_reference();
      }
    if (flagHasScheduledFlightDuration)
      {
        storeScheduledFlightDuration->remove_reference();
      }
    if (flagHasOperationalFlightDuration)
      {
        storeOperationalFlightDuration->remove_reference();
      }
    if (flagHasDeviationInFlightDurationFromScheduled)
      {
        storeDeviationInFlightDurationFromScheduled->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatusJSON::hasFlightId(void) const
  {
    return flagHasFlightId;
  }

std::string FlightStatusJSON::getFlightId(void)
  {
    assert(flagHasFlightId);
    return storeFlightId;
  }

const std::string FlightStatusJSON::getFlightId(void) const
  {
    assert(flagHasFlightId);
    return storeFlightId;
  }

bool FlightStatusJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string FlightStatusJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string FlightStatusJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool FlightStatusJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string FlightStatusJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string FlightStatusJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool FlightStatusJSON::hasAirlineFlightNumber(void) const
  {
    return flagHasAirlineFlightNumber;
  }

AirlineFlightNumberJSON * FlightStatusJSON::getAirlineFlightNumber(void)
  {
    assert(flagHasAirlineFlightNumber);
    return storeAirlineFlightNumber;
  }

const AirlineFlightNumberJSON * FlightStatusJSON::getAirlineFlightNumber(void) const
  {
    assert(flagHasAirlineFlightNumber);
    return storeAirlineFlightNumber;
  }

bool FlightStatusJSON::hasCodeshares(void) const
  {
    return flagHasCodeshares;
  }

size_t FlightStatusJSON::countOfCodeshares(void) const
  {
    assert(flagHasCodeshares);
    return storeCodeshares.size();
  }

FlightCodeshareJSON * FlightStatusJSON::elementOfCodeshares(size_t element_num)
  {
    assert(flagHasCodeshares);
    return storeCodeshares[element_num];
  }

const FlightCodeshareJSON * FlightStatusJSON::elementOfCodeshares(size_t element_num) const
  {
    assert(flagHasCodeshares);
    return storeCodeshares[element_num];
  }

std::vector< FlightCodeshareJSON * > FlightStatusJSON::getCodeshares(void)
  {
    assert(flagHasCodeshares);
    return storeCodeshares;
  }

const std::vector< FlightCodeshareJSON * > FlightStatusJSON::getCodeshares(void) const
  {
    assert(flagHasCodeshares);
    return storeCodeshares;
  }

bool FlightStatusJSON::hasMatchingCodeshareIndex(void) const
  {
    return flagHasMatchingCodeshareIndex;
  }

OInteger FlightStatusJSON::getMatchingCodeshareIndex(void)
  {
    assert(flagHasMatchingCodeshareIndex);
    return storeMatchingCodeshareIndex;
  }

const OInteger FlightStatusJSON::getMatchingCodeshareIndex(void) const
  {
    assert(flagHasMatchingCodeshareIndex);
    return storeMatchingCodeshareIndex;
  }

bool FlightStatusJSON::hasFlightTravelState(void) const
  {
    return flagHasFlightTravelState;
  }

FlightStatusJSON::TypeFlightTravelState FlightStatusJSON::getFlightTravelState(void)
  {
    assert(flagHasFlightTravelState);
    return storeFlightTravelState;
  }

const FlightStatusJSON::TypeFlightTravelState FlightStatusJSON::getFlightTravelState(void) const
  {
    assert(flagHasFlightTravelState);
    return storeFlightTravelState;
  }

const char *FlightStatusJSON::getFlightTravelStateAsChars(void) const
  {
    return stringFromFlightTravelState(getFlightTravelState());
  }

std::string FlightStatusJSON::getFlightTravelStateAsString(void) const
  {
    return stringFromFlightTravelState(getFlightTravelState());
  }

bool FlightStatusJSON::hasStatusSummary(void) const
  {
    return flagHasStatusSummary;
  }

std::string FlightStatusJSON::getStatusSummary(void)
  {
    assert(flagHasStatusSummary);
    return storeStatusSummary;
  }

const std::string FlightStatusJSON::getStatusSummary(void) const
  {
    assert(flagHasStatusSummary);
    return storeStatusSummary;
  }

bool FlightStatusJSON::hasStatusSummaryShort(void) const
  {
    return flagHasStatusSummaryShort;
  }

std::string FlightStatusJSON::getStatusSummaryShort(void)
  {
    assert(flagHasStatusSummaryShort);
    return storeStatusSummaryShort;
  }

const std::string FlightStatusJSON::getStatusSummaryShort(void) const
  {
    assert(flagHasStatusSummaryShort);
    return storeStatusSummaryShort;
  }

bool FlightStatusJSON::hasDepartureArrivalText(void) const
  {
    return flagHasDepartureArrivalText;
  }

std::string FlightStatusJSON::getDepartureArrivalText(void)
  {
    assert(flagHasDepartureArrivalText);
    return storeDepartureArrivalText;
  }

const std::string FlightStatusJSON::getDepartureArrivalText(void) const
  {
    assert(flagHasDepartureArrivalText);
    return storeDepartureArrivalText;
  }

bool FlightStatusJSON::hasTailNumber(void) const
  {
    return flagHasTailNumber;
  }

std::string FlightStatusJSON::getTailNumber(void)
  {
    assert(flagHasTailNumber);
    return storeTailNumber;
  }

const std::string FlightStatusJSON::getTailNumber(void) const
  {
    assert(flagHasTailNumber);
    return storeTailNumber;
  }

bool FlightStatusJSON::hasAircraft(void) const
  {
    return flagHasAircraft;
  }

AircraftJSON * FlightStatusJSON::getAircraft(void)
  {
    assert(flagHasAircraft);
    return storeAircraft;
  }

const AircraftJSON * FlightStatusJSON::getAircraft(void) const
  {
    assert(flagHasAircraft);
    return storeAircraft;
  }

bool FlightStatusJSON::hasDeparture(void) const
  {
    return flagHasDeparture;
  }

DepartureArrivalInfoJSON * FlightStatusJSON::getDeparture(void)
  {
    assert(flagHasDeparture);
    return storeDeparture;
  }

const DepartureArrivalInfoJSON * FlightStatusJSON::getDeparture(void) const
  {
    assert(flagHasDeparture);
    return storeDeparture;
  }

bool FlightStatusJSON::hasArrival(void) const
  {
    return flagHasArrival;
  }

DepartureArrivalInfoJSON * FlightStatusJSON::getArrival(void)
  {
    assert(flagHasArrival);
    return storeArrival;
  }

const DepartureArrivalInfoJSON * FlightStatusJSON::getArrival(void) const
  {
    assert(flagHasArrival);
    return storeArrival;
  }

bool FlightStatusJSON::hasScheduledFlightDuration(void) const
  {
    return flagHasScheduledFlightDuration;
  }

TimeDifferenceJSON * FlightStatusJSON::getScheduledFlightDuration(void)
  {
    assert(flagHasScheduledFlightDuration);
    return storeScheduledFlightDuration;
  }

const TimeDifferenceJSON * FlightStatusJSON::getScheduledFlightDuration(void) const
  {
    assert(flagHasScheduledFlightDuration);
    return storeScheduledFlightDuration;
  }

bool FlightStatusJSON::hasOperationalFlightDuration(void) const
  {
    return flagHasOperationalFlightDuration;
  }

TimeDifferenceJSON * FlightStatusJSON::getOperationalFlightDuration(void)
  {
    assert(flagHasOperationalFlightDuration);
    return storeOperationalFlightDuration;
  }

const TimeDifferenceJSON * FlightStatusJSON::getOperationalFlightDuration(void) const
  {
    assert(flagHasOperationalFlightDuration);
    return storeOperationalFlightDuration;
  }

bool FlightStatusJSON::hasDeviationInFlightDurationFromScheduled(void) const
  {
    return flagHasDeviationInFlightDurationFromScheduled;
  }

TimeDifferenceJSON * FlightStatusJSON::getDeviationInFlightDurationFromScheduled(void)
  {
    assert(flagHasDeviationInFlightDurationFromScheduled);
    return storeDeviationInFlightDurationFromScheduled;
  }

const TimeDifferenceJSON * FlightStatusJSON::getDeviationInFlightDurationFromScheduled(void) const
  {
    assert(flagHasDeviationInFlightDurationFromScheduled);
    return storeDeviationInFlightDurationFromScheduled;
  }

bool FlightStatusJSON::hasWrittenHints(void) const
  {
    return flagHasWrittenHints;
  }

size_t FlightStatusJSON::countOfWrittenHints(void) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints.size();
  }

std::string FlightStatusJSON::elementOfWrittenHints(size_t element_num)
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints[element_num];
  }

const std::string FlightStatusJSON::elementOfWrittenHints(size_t element_num) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints[element_num];
  }

std::vector< std::string > FlightStatusJSON::getWrittenHints(void)
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints;
  }

const std::vector< std::string > FlightStatusJSON::getWrittenHints(void) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints;
  }

bool FlightStatusJSON::hasSpokenHints(void) const
  {
    return flagHasSpokenHints;
  }

size_t FlightStatusJSON::countOfSpokenHints(void) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints.size();
  }

std::string FlightStatusJSON::elementOfSpokenHints(size_t element_num)
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints[element_num];
  }

const std::string FlightStatusJSON::elementOfSpokenHints(size_t element_num) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints[element_num];
  }

std::vector< std::string > FlightStatusJSON::getSpokenHints(void)
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints;
  }

const std::vector< std::string > FlightStatusJSON::getSpokenHints(void) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints;
  }

char FlightStatusJSON::Generator::lowerBoundMatchingCodeshareIndex[] = "0";
FlightStatusJSON *FlightStatusJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusJSON>, FlightStatusJSON *, bool> generator("Type FlightStatus", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
