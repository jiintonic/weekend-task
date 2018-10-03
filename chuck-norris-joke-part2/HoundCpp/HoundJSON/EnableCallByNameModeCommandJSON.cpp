/* file "EnableCallByNameModeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EnableCallByNameModeCommandJSON.h"

#include "EnableCallByNameModeCommandJSON.h"


EnableCallByNameModeCommandJSON::EnableCallByNameModeCommandJSON(const EnableCallByNameModeCommandJSON &)
  {
    assert(false);
  }

EnableCallByNameModeCommandJSON &EnableCallByNameModeCommandJSON::operator=(const EnableCallByNameModeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

EnableCallByNameModeCommandJSON::EnableCallByNameModeCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

EnableCallByNameModeCommandJSON::~EnableCallByNameModeCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *EnableCallByNameModeCommandJSON::getPhoneCommandKind(void) const
  {
    return "EnableCallByNameMode";
  }

EnableCallByNameModeCommandJSON *EnableCallByNameModeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EnableCallByNameModeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EnableCallByNameModeCommandJSON>, EnableCallByNameModeCommandJSON *, bool> generator("Type EnableCallByNameModeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
