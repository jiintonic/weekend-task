/* file "HomeAutomationCancelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationCancelCommandJSON.h"

#include "HomeAutomationCancelCommandJSON.h"


HomeAutomationCancelCommandJSON::HomeAutomationCancelCommandJSON(const HomeAutomationCancelCommandJSON &)
  {
    assert(false);
  }

HomeAutomationCancelCommandJSON &HomeAutomationCancelCommandJSON::operator=(const HomeAutomationCancelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

HomeAutomationCancelCommandJSON::HomeAutomationCancelCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

HomeAutomationCancelCommandJSON::~HomeAutomationCancelCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationCancelCommandJSON::getCommandKind(void) const
  {
    return "HomeAutomationCancelCommand";
  }

HomeAutomationCancelCommandJSON *HomeAutomationCancelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationCancelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCancelCommandJSON>, HomeAutomationCancelCommandJSON *, bool> generator("Type HomeAutomationCancelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
