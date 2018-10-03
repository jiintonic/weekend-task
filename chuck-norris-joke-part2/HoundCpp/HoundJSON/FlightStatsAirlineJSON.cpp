/* file "FlightStatsAirlineJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsAirlineJSON.h"

#include "FlightStatsAirlineJSON.h"


FlightStatsAirlineJSON::FlightStatsAirlineJSON(const FlightStatsAirlineJSON &)
  {
    assert(false);
  }

FlightStatsAirlineJSON &FlightStatsAirlineJSON::operator=(const FlightStatsAirlineJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsAirlineJSON::fromJSONiata(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field iata of FlightStatsAirlineJSON is not a string.");
    setiata(std::string(json_string->getData()));
  }

void FlightStatsAirlineJSON::fromJSONicao(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field icao of FlightStatsAirlineJSON is not a string.");
    seticao(std::string(json_string->getData()));
  }

void FlightStatsAirlineJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of FlightStatsAirlineJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

FlightStatsAirlineJSON::FlightStatsAirlineJSON(void) :
        flagHasiata(false),
        flagHasicao(false),
        flagHasname(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsAirlineJSON::~FlightStatsAirlineJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsAirlineJSON::hasiata(void) const
  {
    return flagHasiata;
  }

std::string FlightStatsAirlineJSON::getiata(void)
  {
    assert(flagHasiata);
    return storeiata;
  }

const std::string FlightStatsAirlineJSON::getiata(void) const
  {
    assert(flagHasiata);
    return storeiata;
  }

bool FlightStatsAirlineJSON::hasicao(void) const
  {
    return flagHasicao;
  }

std::string FlightStatsAirlineJSON::geticao(void)
  {
    assert(flagHasicao);
    return storeicao;
  }

const std::string FlightStatsAirlineJSON::geticao(void) const
  {
    assert(flagHasicao);
    return storeicao;
  }

bool FlightStatsAirlineJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string FlightStatsAirlineJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string FlightStatsAirlineJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

FlightStatsAirlineJSON *FlightStatsAirlineJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsAirlineJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsAirlineJSON>, FlightStatsAirlineJSON *, bool> generator("Type FlightStatsAirline", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
