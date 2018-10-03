/* file "FlightStatsAirportResourcesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsAirportResourcesJSON.h"

#include "FlightStatsAirportResourcesJSON.h"


FlightStatsAirportResourcesJSON::FlightStatsAirportResourcesJSON(const FlightStatsAirportResourcesJSON &)
  {
    assert(false);
  }

FlightStatsAirportResourcesJSON &FlightStatsAirportResourcesJSON::operator=(const FlightStatsAirportResourcesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsAirportResourcesJSON::fromJSONdepartureTerminal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field departureTerminal of FlightStatsAirportResourcesJSON is not a string.");
    setdepartureTerminal(std::string(json_string->getData()));
  }

void FlightStatsAirportResourcesJSON::fromJSONdepartureGate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field departureGate of FlightStatsAirportResourcesJSON is not a string.");
    setdepartureGate(std::string(json_string->getData()));
  }

void FlightStatsAirportResourcesJSON::fromJSONarrivalTerminal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field arrivalTerminal of FlightStatsAirportResourcesJSON is not a string.");
    setarrivalTerminal(std::string(json_string->getData()));
  }

void FlightStatsAirportResourcesJSON::fromJSONarrivalGate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field arrivalGate of FlightStatsAirportResourcesJSON is not a string.");
    setarrivalGate(std::string(json_string->getData()));
  }

void FlightStatsAirportResourcesJSON::fromJSONbaggage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field baggage of FlightStatsAirportResourcesJSON is not a string.");
    setbaggage(std::string(json_string->getData()));
  }

FlightStatsAirportResourcesJSON::FlightStatsAirportResourcesJSON(void) :
        flagHasdepartureTerminal(false),
        flagHasdepartureGate(false),
        flagHasarrivalTerminal(false),
        flagHasarrivalGate(false),
        flagHasbaggage(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsAirportResourcesJSON::~FlightStatsAirportResourcesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsAirportResourcesJSON::hasdepartureTerminal(void) const
  {
    return flagHasdepartureTerminal;
  }

std::string FlightStatsAirportResourcesJSON::getdepartureTerminal(void)
  {
    assert(flagHasdepartureTerminal);
    return storedepartureTerminal;
  }

const std::string FlightStatsAirportResourcesJSON::getdepartureTerminal(void) const
  {
    assert(flagHasdepartureTerminal);
    return storedepartureTerminal;
  }

bool FlightStatsAirportResourcesJSON::hasdepartureGate(void) const
  {
    return flagHasdepartureGate;
  }

std::string FlightStatsAirportResourcesJSON::getdepartureGate(void)
  {
    assert(flagHasdepartureGate);
    return storedepartureGate;
  }

const std::string FlightStatsAirportResourcesJSON::getdepartureGate(void) const
  {
    assert(flagHasdepartureGate);
    return storedepartureGate;
  }

bool FlightStatsAirportResourcesJSON::hasarrivalTerminal(void) const
  {
    return flagHasarrivalTerminal;
  }

std::string FlightStatsAirportResourcesJSON::getarrivalTerminal(void)
  {
    assert(flagHasarrivalTerminal);
    return storearrivalTerminal;
  }

const std::string FlightStatsAirportResourcesJSON::getarrivalTerminal(void) const
  {
    assert(flagHasarrivalTerminal);
    return storearrivalTerminal;
  }

bool FlightStatsAirportResourcesJSON::hasarrivalGate(void) const
  {
    return flagHasarrivalGate;
  }

std::string FlightStatsAirportResourcesJSON::getarrivalGate(void)
  {
    assert(flagHasarrivalGate);
    return storearrivalGate;
  }

const std::string FlightStatsAirportResourcesJSON::getarrivalGate(void) const
  {
    assert(flagHasarrivalGate);
    return storearrivalGate;
  }

bool FlightStatsAirportResourcesJSON::hasbaggage(void) const
  {
    return flagHasbaggage;
  }

std::string FlightStatsAirportResourcesJSON::getbaggage(void)
  {
    assert(flagHasbaggage);
    return storebaggage;
  }

const std::string FlightStatsAirportResourcesJSON::getbaggage(void) const
  {
    assert(flagHasbaggage);
    return storebaggage;
  }

FlightStatsAirportResourcesJSON *FlightStatsAirportResourcesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsAirportResourcesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsAirportResourcesJSON>, FlightStatsAirportResourcesJSON *, bool> generator("Type FlightStatsAirportResources", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
