/* file "HomeAutomationBasicControlCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationBasicControlCommandJSON.h"

#include "HomeAutomationBasicControlCommandJSON.h"


HomeAutomationBasicControlCommandJSON::HomeAutomationBasicControlCommandJSON(const HomeAutomationBasicControlCommandJSON &)
  {
    assert(false);
  }

HomeAutomationBasicControlCommandJSON &HomeAutomationBasicControlCommandJSON::operator=(const HomeAutomationBasicControlCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

HomeAutomationBasicControlCommandJSON::HomeAutomationBasicControlCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

HomeAutomationBasicControlCommandJSON::~HomeAutomationBasicControlCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationBasicControlCommandJSON::getHomeAutomationControlCommandKind(void) const
  {
    return "HomeAutomationBasicControlCommand";
  }

HomeAutomationBasicControlCommandJSON *HomeAutomationBasicControlCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationBasicControlCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationBasicControlCommandJSON>, HomeAutomationBasicControlCommandJSON *, bool> generator("Type HomeAutomationBasicControlCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
