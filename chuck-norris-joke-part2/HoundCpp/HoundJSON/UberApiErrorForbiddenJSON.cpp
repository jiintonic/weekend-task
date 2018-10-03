/* file "UberApiErrorForbiddenJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorForbiddenJSON.h"

#include "UberApiErrorForbiddenJSON.h"


UberApiErrorForbiddenJSON::UberApiErrorForbiddenJSON(const UberApiErrorForbiddenJSON &)
  {
    assert(false);
  }

UberApiErrorForbiddenJSON &UberApiErrorForbiddenJSON::operator=(const UberApiErrorForbiddenJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorForbiddenJSON::UberApiErrorForbiddenJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorForbiddenJSON::~UberApiErrorForbiddenJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

UberApiErrorForbiddenJSON *UberApiErrorForbiddenJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorForbiddenJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorForbiddenJSON>, UberApiErrorForbiddenJSON *, bool> generator("Type UberApiErrorForbidden", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
