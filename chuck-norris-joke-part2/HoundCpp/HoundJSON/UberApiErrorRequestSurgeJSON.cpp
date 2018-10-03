/* file "UberApiErrorRequestSurgeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorRequestSurgeJSON.h"

#include "UberApiErrorRequestSurgeJSON.h"


UberApiErrorRequestSurgeJSON::UberApiErrorRequestSurgeJSON(const UberApiErrorRequestSurgeJSON &)
  {
    assert(false);
  }

UberApiErrorRequestSurgeJSON &UberApiErrorRequestSurgeJSON::operator=(const UberApiErrorRequestSurgeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorRequestSurgeJSON::UberApiErrorRequestSurgeJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorRequestSurgeJSON::~UberApiErrorRequestSurgeJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

UberApiErrorRequestSurgeJSON *UberApiErrorRequestSurgeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorRequestSurgeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorRequestSurgeJSON>, UberApiErrorRequestSurgeJSON *, bool> generator("Type UberApiErrorRequestSurge", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
