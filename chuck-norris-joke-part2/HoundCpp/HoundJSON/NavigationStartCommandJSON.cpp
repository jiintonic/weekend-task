/* file "NavigationStartCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NavigationStartCommandJSON.h"

#include "NavigationStartCommandJSON.h"


NavigationStartCommandJSON::NavigationStartCommandJSON(const NavigationStartCommandJSON &)
  {
    assert(false);
  }

NavigationStartCommandJSON &NavigationStartCommandJSON::operator=(const NavigationStartCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NavigationStartCommandJSON::NavigationStartCommandJSON(void)
  {
  }

NavigationStartCommandJSON::~NavigationStartCommandJSON(void)
  {
  }

const char *NavigationStartCommandJSON::getNavigationCommandKind(void) const
  {
    return "NavigationStartCommand";
  }

NavigationStartCommandJSON *NavigationStartCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NavigationStartCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NavigationStartCommandJSON>, NavigationStartCommandJSON *, bool> generator("Type NavigationStartCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
