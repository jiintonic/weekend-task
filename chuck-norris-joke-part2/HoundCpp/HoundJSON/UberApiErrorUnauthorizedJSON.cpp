/* file "UberApiErrorUnauthorizedJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorUnauthorizedJSON.h"

#include "UberApiErrorUnauthorizedJSON.h"


UberApiErrorUnauthorizedJSON::UberApiErrorUnauthorizedJSON(const UberApiErrorUnauthorizedJSON &)
  {
    assert(false);
  }

UberApiErrorUnauthorizedJSON &UberApiErrorUnauthorizedJSON::operator=(const UberApiErrorUnauthorizedJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorUnauthorizedJSON::UberApiErrorUnauthorizedJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorUnauthorizedJSON::~UberApiErrorUnauthorizedJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

UberApiErrorUnauthorizedJSON *UberApiErrorUnauthorizedJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorUnauthorizedJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorUnauthorizedJSON>, UberApiErrorUnauthorizedJSON *, bool> generator("Type UberApiErrorUnauthorized", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
