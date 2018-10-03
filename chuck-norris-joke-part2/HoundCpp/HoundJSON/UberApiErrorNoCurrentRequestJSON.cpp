/* file "UberApiErrorNoCurrentRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorNoCurrentRequestJSON.h"

#include "UberApiErrorNoCurrentRequestJSON.h"


UberApiErrorNoCurrentRequestJSON::UberApiErrorNoCurrentRequestJSON(const UberApiErrorNoCurrentRequestJSON &)
  {
    assert(false);
  }

UberApiErrorNoCurrentRequestJSON &UberApiErrorNoCurrentRequestJSON::operator=(const UberApiErrorNoCurrentRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorNoCurrentRequestJSON::UberApiErrorNoCurrentRequestJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorNoCurrentRequestJSON::~UberApiErrorNoCurrentRequestJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

UberApiErrorNoCurrentRequestJSON *UberApiErrorNoCurrentRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorNoCurrentRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorNoCurrentRequestJSON>, UberApiErrorNoCurrentRequestJSON *, bool> generator("Type UberApiErrorNoCurrentRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
