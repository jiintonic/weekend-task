/* file "UberRequireLoginCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequireLoginCommandJSON.h"

#include "UberRequireLoginCommandJSON.h"


UberRequireLoginCommandJSON::UberRequireLoginCommandJSON(const UberRequireLoginCommandJSON &)
  {
    assert(false);
  }

UberRequireLoginCommandJSON &UberRequireLoginCommandJSON::operator=(const UberRequireLoginCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberRequireLoginCommandJSON::UberRequireLoginCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

UberRequireLoginCommandJSON::~UberRequireLoginCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberRequireLoginCommandJSON::getUberCommandKind(void) const
  {
    return "UberRequireLogin";
  }

UberRequireLoginCommandJSON *UberRequireLoginCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequireLoginCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequireLoginCommandJSON>, UberRequireLoginCommandJSON *, bool> generator("Type UberRequireLoginCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
