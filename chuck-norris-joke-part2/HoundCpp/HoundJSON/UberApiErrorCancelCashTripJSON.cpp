/* file "UberApiErrorCancelCashTripJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorCancelCashTripJSON.h"

#include "UberApiErrorCancelCashTripJSON.h"


UberApiErrorCancelCashTripJSON::UberApiErrorCancelCashTripJSON(const UberApiErrorCancelCashTripJSON &)
  {
    assert(false);
  }

UberApiErrorCancelCashTripJSON &UberApiErrorCancelCashTripJSON::operator=(const UberApiErrorCancelCashTripJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorCancelCashTripJSON::UberApiErrorCancelCashTripJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorCancelCashTripJSON::~UberApiErrorCancelCashTripJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

UberApiErrorCancelCashTripJSON *UberApiErrorCancelCashTripJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorCancelCashTripJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorCancelCashTripJSON>, UberApiErrorCancelCashTripJSON *, bool> generator("Type UberApiErrorCancelCashTrip", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
