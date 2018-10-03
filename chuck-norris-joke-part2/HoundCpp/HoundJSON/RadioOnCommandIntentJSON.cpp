/* file "RadioOnCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioOnCommandIntentJSON.h"

#include "RadioOnCommandIntentJSON.h"


RadioOnCommandIntentJSON::RadioOnCommandIntentJSON(const RadioOnCommandIntentJSON &)
  {
    assert(false);
  }

RadioOnCommandIntentJSON &RadioOnCommandIntentJSON::operator=(const RadioOnCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioOnCommandIntentJSON::RadioOnCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RadioOnCommandIntentJSON::~RadioOnCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioOnCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "RadioOn";
  }

RadioOnCommandIntentJSON *RadioOnCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioOnCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioOnCommandIntentJSON>, RadioOnCommandIntentJSON *, bool> generator("Type RadioOnCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
