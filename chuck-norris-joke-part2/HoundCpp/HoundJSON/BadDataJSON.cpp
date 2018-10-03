/* file "BadDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BadDataJSON.h"

#include "BadDataJSON.h"


BadDataJSON::BadDataJSON(const BadDataJSON &)
  {
    assert(false);
  }

BadDataJSON &BadDataJSON::operator=(const BadDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

BadDataJSON::BadDataJSON(void)
  {
    extraIndex = create_string_index();
  }

BadDataJSON::~BadDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BadDataJSON::getErrorType(void) const
  {
    return "BadData";
  }

BadDataJSON *BadDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BadDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BadDataJSON>, BadDataJSON *, bool> generator("Type BadData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
