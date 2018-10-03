/* file "ZeroZeroQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ZeroZeroQuantityJSON.h"

#include "ZeroZeroQuantityJSON.h"


ZeroZeroQuantityJSON::ZeroZeroQuantityJSON(const ZeroZeroQuantityJSON &)
  {
    assert(false);
  }

ZeroZeroQuantityJSON &ZeroZeroQuantityJSON::operator=(const ZeroZeroQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ZeroZeroQuantityJSON::ZeroZeroQuantityJSON(void)
  {
    extraIndex = create_string_index();
  }

ZeroZeroQuantityJSON::~ZeroZeroQuantityJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ZeroZeroQuantityJSON::getQuantityKind(void) const
  {
    return "ZeroZero";
  }

ZeroZeroQuantityJSON *ZeroZeroQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ZeroZeroQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ZeroZeroQuantityJSON>, ZeroZeroQuantityJSON *, bool> generator("Type ZeroZeroQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
