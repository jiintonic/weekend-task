/* file "UnsignedInfinityQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnsignedInfinityQuantityJSON.h"

#include "UnsignedInfinityQuantityJSON.h"


UnsignedInfinityQuantityJSON::UnsignedInfinityQuantityJSON(const UnsignedInfinityQuantityJSON &)
  {
    assert(false);
  }

UnsignedInfinityQuantityJSON &UnsignedInfinityQuantityJSON::operator=(const UnsignedInfinityQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UnsignedInfinityQuantityJSON::UnsignedInfinityQuantityJSON(void)
  {
    extraIndex = create_string_index();
  }

UnsignedInfinityQuantityJSON::~UnsignedInfinityQuantityJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UnsignedInfinityQuantityJSON::getQuantityKind(void) const
  {
    return "UnsignedInfinity";
  }

UnsignedInfinityQuantityJSON *UnsignedInfinityQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnsignedInfinityQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnsignedInfinityQuantityJSON>, UnsignedInfinityQuantityJSON *, bool> generator("Type UnsignedInfinityQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
