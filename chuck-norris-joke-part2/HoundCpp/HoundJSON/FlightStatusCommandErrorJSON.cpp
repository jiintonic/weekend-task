/* file "FlightStatusCommandErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusCommandErrorJSON.h"

#include "FlightStatusCommandErrorJSON.h"


FlightStatusCommandErrorJSON::FlightStatusCommandErrorJSON(const FlightStatusCommandErrorJSON &)
  {
    assert(false);
  }

FlightStatusCommandErrorJSON &FlightStatusCommandErrorJSON::operator=(const FlightStatusCommandErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

FlightStatusCommandErrorJSON::FlightStatusCommandErrorJSON(void)
  {
    extraIndex = create_string_index();
  }

FlightStatusCommandErrorJSON::~FlightStatusCommandErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FlightStatusCommandErrorJSON::getErrorType(void) const
  {
    return "FlightStatusCommandError";
  }

FlightStatusCommandErrorJSON *FlightStatusCommandErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusCommandErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusCommandErrorJSON>, FlightStatusCommandErrorJSON *, bool> generator("Type FlightStatusCommandError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
