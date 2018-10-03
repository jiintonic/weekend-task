/* file "FlightCodeshareJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightCodeshareJSON.h"

#include "FlightCodeshareJSON.h"


FlightCodeshareJSON::FlightCodeshareJSON(const FlightCodeshareJSON &)
  {
    assert(false);
  }

FlightCodeshareJSON &FlightCodeshareJSON::operator=(const FlightCodeshareJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightCodeshareJSON::fromJSONAirlineFlightNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AirlineFlightNumberJSON *convert_classy = AirlineFlightNumberJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirlineFlightNumber(convert_classy);
    convert_classy->remove_reference();
  }

FlightCodeshareJSON::FlightCodeshareJSON(void) :
        flagHasAirlineFlightNumber(false)
  {
    extraIndex = create_string_index();
  }

FlightCodeshareJSON::~FlightCodeshareJSON(void)
  {
    if (flagHasAirlineFlightNumber)
      {
        storeAirlineFlightNumber->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightCodeshareJSON::hasAirlineFlightNumber(void) const
  {
    return flagHasAirlineFlightNumber;
  }

AirlineFlightNumberJSON * FlightCodeshareJSON::getAirlineFlightNumber(void)
  {
    assert(flagHasAirlineFlightNumber);
    return storeAirlineFlightNumber;
  }

const AirlineFlightNumberJSON * FlightCodeshareJSON::getAirlineFlightNumber(void) const
  {
    assert(flagHasAirlineFlightNumber);
    return storeAirlineFlightNumber;
  }

FlightCodeshareJSON *FlightCodeshareJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightCodeshareJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightCodeshareJSON>, FlightCodeshareJSON *, bool> generator("Type FlightCodeshare", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
