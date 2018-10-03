/* file "NavigationNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NavigationNotUnderstoodCommandJSON.h"

#include "NavigationNotUnderstoodCommandJSON.h"


NavigationNotUnderstoodCommandJSON::NavigationNotUnderstoodCommandJSON(const NavigationNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

NavigationNotUnderstoodCommandJSON &NavigationNotUnderstoodCommandJSON::operator=(const NavigationNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NavigationNotUnderstoodCommandJSON::NavigationNotUnderstoodCommandJSON(void)
  {
  }

NavigationNotUnderstoodCommandJSON::~NavigationNotUnderstoodCommandJSON(void)
  {
  }

const char *NavigationNotUnderstoodCommandJSON::getNavigationCommandKind(void) const
  {
    return "NavigationNotUnderstoodCommand";
  }

NavigationNotUnderstoodCommandJSON *NavigationNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NavigationNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NavigationNotUnderstoodCommandJSON>, NavigationNotUnderstoodCommandJSON *, bool> generator("Type NavigationNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
