/* file "HomeAutomationCommandErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationCommandErrorJSON.h"

#include "HomeAutomationCommandErrorJSON.h"


HomeAutomationCommandErrorJSON::HomeAutomationCommandErrorJSON(const HomeAutomationCommandErrorJSON &)
  {
    assert(false);
  }

HomeAutomationCommandErrorJSON &HomeAutomationCommandErrorJSON::operator=(const HomeAutomationCommandErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

HomeAutomationCommandErrorJSON::HomeAutomationCommandErrorJSON(void)
  {
  }

HomeAutomationCommandErrorJSON::~HomeAutomationCommandErrorJSON(void)
  {
  }

const char *HomeAutomationCommandErrorJSON::getErrorType(void) const
  {
    return "HomeAutomationCommandError";
  }

HomeAutomationCommandErrorJSON *HomeAutomationCommandErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationCommandErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCommandErrorJSON>, HomeAutomationCommandErrorJSON *, bool> generator("Type HomeAutomationCommandError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
