/* file "FlightStatsTimesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsTimesJSON.h"

#include "FlightStatsTimesJSON.h"


FlightStatsTimesJSON::FlightStatsTimesJSON(const FlightStatsTimesJSON &)
  {
    assert(false);
  }

FlightStatsTimesJSON &FlightStatsTimesJSON::operator=(const FlightStatsTimesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsTimesJSON::fromJSONdateLocal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field dateLocal of FlightStatsTimesJSON is not a string.");
    setdateLocal(std::string(json_string->getData()));
  }

void FlightStatsTimesJSON::fromJSONdateUtc(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field dateUtc of FlightStatsTimesJSON is not a string.");
    setdateUtc(std::string(json_string->getData()));
  }

FlightStatsTimesJSON::FlightStatsTimesJSON(void) :
        flagHasdateLocal(false),
        flagHasdateUtc(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsTimesJSON::~FlightStatsTimesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsTimesJSON::hasdateLocal(void) const
  {
    return flagHasdateLocal;
  }

std::string FlightStatsTimesJSON::getdateLocal(void)
  {
    assert(flagHasdateLocal);
    return storedateLocal;
  }

const std::string FlightStatsTimesJSON::getdateLocal(void) const
  {
    assert(flagHasdateLocal);
    return storedateLocal;
  }

bool FlightStatsTimesJSON::hasdateUtc(void) const
  {
    return flagHasdateUtc;
  }

std::string FlightStatsTimesJSON::getdateUtc(void)
  {
    assert(flagHasdateUtc);
    return storedateUtc;
  }

const std::string FlightStatsTimesJSON::getdateUtc(void) const
  {
    assert(flagHasdateUtc);
    return storedateUtc;
  }

FlightStatsTimesJSON *FlightStatsTimesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsTimesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool> generator("Type FlightStatsTimes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
