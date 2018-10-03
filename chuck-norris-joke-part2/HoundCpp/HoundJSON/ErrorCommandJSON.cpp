/* file "ErrorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ErrorCommandJSON.h"

#include "ErrorCommandJSON.h"


ErrorCommandJSON::ErrorCommandJSON(const ErrorCommandJSON &)
  {
    assert(false);
  }

ErrorCommandJSON &ErrorCommandJSON::operator=(const ErrorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ErrorCommandJSON::ErrorCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ErrorCommandJSON::~ErrorCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ErrorCommandJSON::getCommandKind(void) const
  {
    return "ErrorCommand";
  }

ErrorCommandJSON *ErrorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ErrorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ErrorCommandJSON>, ErrorCommandJSON *, bool> generator("Type ErrorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
