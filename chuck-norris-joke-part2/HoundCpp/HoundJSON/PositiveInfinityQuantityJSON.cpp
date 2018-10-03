/* file "PositiveInfinityQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PositiveInfinityQuantityJSON.h"

#include "PositiveInfinityQuantityJSON.h"


PositiveInfinityQuantityJSON::PositiveInfinityQuantityJSON(const PositiveInfinityQuantityJSON &)
  {
    assert(false);
  }

PositiveInfinityQuantityJSON &PositiveInfinityQuantityJSON::operator=(const PositiveInfinityQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

PositiveInfinityQuantityJSON::PositiveInfinityQuantityJSON(void)
  {
    extraIndex = create_string_index();
  }

PositiveInfinityQuantityJSON::~PositiveInfinityQuantityJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *PositiveInfinityQuantityJSON::getQuantityKind(void) const
  {
    return "PositiveInfinity";
  }

PositiveInfinityQuantityJSON *PositiveInfinityQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PositiveInfinityQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PositiveInfinityQuantityJSON>, PositiveInfinityQuantityJSON *, bool> generator("Type PositiveInfinityQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
