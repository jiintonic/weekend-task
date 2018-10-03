/* file "UberApiErrorDistanceLimitExceededJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorDistanceLimitExceededJSON.h"

#include "UberApiErrorDistanceLimitExceededJSON.h"


UberApiErrorDistanceLimitExceededJSON::UberApiErrorDistanceLimitExceededJSON(const UberApiErrorDistanceLimitExceededJSON &)
  {
    assert(false);
  }

UberApiErrorDistanceLimitExceededJSON &UberApiErrorDistanceLimitExceededJSON::operator=(const UberApiErrorDistanceLimitExceededJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorDistanceLimitExceededJSON::UberApiErrorDistanceLimitExceededJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorDistanceLimitExceededJSON::~UberApiErrorDistanceLimitExceededJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

UberApiErrorDistanceLimitExceededJSON *UberApiErrorDistanceLimitExceededJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorDistanceLimitExceededJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorDistanceLimitExceededJSON>, UberApiErrorDistanceLimitExceededJSON *, bool> generator("Type UberApiErrorDistanceLimitExceeded", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
