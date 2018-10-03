/* file "FlightStatsCodeshareJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsCodeshareJSON.h"

#include "FlightStatsCodeshareJSON.h"


FlightStatsCodeshareJSON::FlightStatsCodeshareJSON(const FlightStatsCodeshareJSON &)
  {
    assert(false);
  }

FlightStatsCodeshareJSON &FlightStatsCodeshareJSON::operator=(const FlightStatsCodeshareJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsCodeshareJSON::fromJSONcarrier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsAirlineJSON *convert_classy = FlightStatsAirlineJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setcarrier(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsCodeshareJSON::fromJSONflightNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field flightNumber of FlightStatsCodeshareJSON is not a string.");
    setflightNumber(std::string(json_string->getData()));
  }

FlightStatsCodeshareJSON::FlightStatsCodeshareJSON(void) :
        flagHascarrier(false),
        flagHasflightNumber(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsCodeshareJSON::~FlightStatsCodeshareJSON(void)
  {
    if (flagHascarrier)
      {
        storecarrier->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsCodeshareJSON::hascarrier(void) const
  {
    return flagHascarrier;
  }

FlightStatsAirlineJSON * FlightStatsCodeshareJSON::getcarrier(void)
  {
    assert(flagHascarrier);
    return storecarrier;
  }

const FlightStatsAirlineJSON * FlightStatsCodeshareJSON::getcarrier(void) const
  {
    assert(flagHascarrier);
    return storecarrier;
  }

bool FlightStatsCodeshareJSON::hasflightNumber(void) const
  {
    return flagHasflightNumber;
  }

std::string FlightStatsCodeshareJSON::getflightNumber(void)
  {
    assert(flagHasflightNumber);
    return storeflightNumber;
  }

const std::string FlightStatsCodeshareJSON::getflightNumber(void) const
  {
    assert(flagHasflightNumber);
    return storeflightNumber;
  }

FlightStatsCodeshareJSON *FlightStatsCodeshareJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsCodeshareJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsCodeshareJSON>, FlightStatsCodeshareJSON *, bool> generator("Type FlightStatsCodeshare", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
