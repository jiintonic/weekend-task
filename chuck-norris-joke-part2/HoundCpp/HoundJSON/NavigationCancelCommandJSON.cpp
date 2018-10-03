/* file "NavigationCancelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NavigationCancelCommandJSON.h"

#include "NavigationCancelCommandJSON.h"


NavigationCancelCommandJSON::NavigationCancelCommandJSON(const NavigationCancelCommandJSON &)
  {
    assert(false);
  }

NavigationCancelCommandJSON &NavigationCancelCommandJSON::operator=(const NavigationCancelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NavigationCancelCommandJSON::NavigationCancelCommandJSON(void)
  {
  }

NavigationCancelCommandJSON::~NavigationCancelCommandJSON(void)
  {
  }

const char *NavigationCancelCommandJSON::getNavigationCommandKind(void) const
  {
    return "NavigationCancelCommand";
  }

NavigationCancelCommandJSON *NavigationCancelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NavigationCancelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NavigationCancelCommandJSON>, NavigationCancelCommandJSON *, bool> generator("Type NavigationCancelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
