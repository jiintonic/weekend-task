/* file "FlightBookingCommandErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightBookingCommandErrorJSON.h"

#include "FlightBookingCommandErrorJSON.h"


FlightBookingCommandErrorJSON::FlightBookingCommandErrorJSON(const FlightBookingCommandErrorJSON &)
  {
    assert(false);
  }

FlightBookingCommandErrorJSON &FlightBookingCommandErrorJSON::operator=(const FlightBookingCommandErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

FlightBookingCommandErrorJSON::FlightBookingCommandErrorJSON(void)
  {
    extraIndex = create_string_index();
  }

FlightBookingCommandErrorJSON::~FlightBookingCommandErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FlightBookingCommandErrorJSON::getErrorType(void) const
  {
    return "FlightBookingCommandError";
  }

FlightBookingCommandErrorJSON *FlightBookingCommandErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightBookingCommandErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightBookingCommandErrorJSON>, FlightBookingCommandErrorJSON *, bool> generator("Type FlightBookingCommandError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
