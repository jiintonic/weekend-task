/* file "EnableCallByNumberOrNameModeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EnableCallByNumberOrNameModeCommandJSON.h"

#include "EnableCallByNumberOrNameModeCommandJSON.h"


EnableCallByNumberOrNameModeCommandJSON::EnableCallByNumberOrNameModeCommandJSON(const EnableCallByNumberOrNameModeCommandJSON &)
  {
    assert(false);
  }

EnableCallByNumberOrNameModeCommandJSON &EnableCallByNumberOrNameModeCommandJSON::operator=(const EnableCallByNumberOrNameModeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

EnableCallByNumberOrNameModeCommandJSON::EnableCallByNumberOrNameModeCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

EnableCallByNumberOrNameModeCommandJSON::~EnableCallByNumberOrNameModeCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *EnableCallByNumberOrNameModeCommandJSON::getPhoneCommandKind(void) const
  {
    return "EnableCallByNumberOrNameMode";
  }

EnableCallByNumberOrNameModeCommandJSON *EnableCallByNumberOrNameModeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EnableCallByNumberOrNameModeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EnableCallByNumberOrNameModeCommandJSON>, EnableCallByNumberOrNameModeCommandJSON *, bool> generator("Type EnableCallByNumberOrNameModeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
