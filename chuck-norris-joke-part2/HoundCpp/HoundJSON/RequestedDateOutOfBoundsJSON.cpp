/* file "RequestedDateOutOfBoundsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RequestedDateOutOfBoundsJSON.h"

#include "RequestedDateOutOfBoundsJSON.h"


RequestedDateOutOfBoundsJSON::RequestedDateOutOfBoundsJSON(const RequestedDateOutOfBoundsJSON &)
  {
    assert(false);
  }

RequestedDateOutOfBoundsJSON &RequestedDateOutOfBoundsJSON::operator=(const RequestedDateOutOfBoundsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RequestedDateOutOfBoundsJSON::RequestedDateOutOfBoundsJSON(void)
  {
    extraIndex = create_string_index();
  }

RequestedDateOutOfBoundsJSON::~RequestedDateOutOfBoundsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RequestedDateOutOfBoundsJSON::getErrorType(void) const
  {
    return "RequestedDateOutOfBounds";
  }

RequestedDateOutOfBoundsJSON *RequestedDateOutOfBoundsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RequestedDateOutOfBoundsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RequestedDateOutOfBoundsJSON>, RequestedDateOutOfBoundsJSON *, bool> generator("Type RequestedDateOutOfBounds", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
