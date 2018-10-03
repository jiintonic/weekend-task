/* file "NegativeInfinityQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NegativeInfinityQuantityJSON.h"

#include "NegativeInfinityQuantityJSON.h"


NegativeInfinityQuantityJSON::NegativeInfinityQuantityJSON(const NegativeInfinityQuantityJSON &)
  {
    assert(false);
  }

NegativeInfinityQuantityJSON &NegativeInfinityQuantityJSON::operator=(const NegativeInfinityQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NegativeInfinityQuantityJSON::NegativeInfinityQuantityJSON(void)
  {
    extraIndex = create_string_index();
  }

NegativeInfinityQuantityJSON::~NegativeInfinityQuantityJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NegativeInfinityQuantityJSON::getQuantityKind(void) const
  {
    return "NegativeInfinity";
  }

NegativeInfinityQuantityJSON *NegativeInfinityQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NegativeInfinityQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NegativeInfinityQuantityJSON>, NegativeInfinityQuantityJSON *, bool> generator("Type NegativeInfinityQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
