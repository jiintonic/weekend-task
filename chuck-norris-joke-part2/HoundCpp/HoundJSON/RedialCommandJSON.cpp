/* file "RedialCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RedialCommandJSON.h"

#include "RedialCommandJSON.h"


RedialCommandJSON::RedialCommandJSON(const RedialCommandJSON &)
  {
    assert(false);
  }

RedialCommandJSON &RedialCommandJSON::operator=(const RedialCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RedialCommandJSON::RedialCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

RedialCommandJSON::~RedialCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RedialCommandJSON::getPhoneCommandKind(void) const
  {
    return "Redial";
  }

RedialCommandJSON *RedialCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RedialCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RedialCommandJSON>, RedialCommandJSON *, bool> generator("Type RedialCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
