/* file "UberApiErrorSamePickupDropoffJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorSamePickupDropoffJSON.h"

#include "UberApiErrorSamePickupDropoffJSON.h"


UberApiErrorSamePickupDropoffJSON::UberApiErrorSamePickupDropoffJSON(const UberApiErrorSamePickupDropoffJSON &)
  {
    assert(false);
  }

UberApiErrorSamePickupDropoffJSON &UberApiErrorSamePickupDropoffJSON::operator=(const UberApiErrorSamePickupDropoffJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberApiErrorSamePickupDropoffJSON::UberApiErrorSamePickupDropoffJSON(void)
  {
    extraIndex = create_string_index();
  }

UberApiErrorSamePickupDropoffJSON::~UberApiErrorSamePickupDropoffJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

UberApiErrorSamePickupDropoffJSON *UberApiErrorSamePickupDropoffJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorSamePickupDropoffJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorSamePickupDropoffJSON>, UberApiErrorSamePickupDropoffJSON *, bool> generator("Type UberApiErrorSamePickupDropoff", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
