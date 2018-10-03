/* file "RadioOffCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioOffCommandIntentJSON.h"

#include "RadioOffCommandIntentJSON.h"


RadioOffCommandIntentJSON::RadioOffCommandIntentJSON(const RadioOffCommandIntentJSON &)
  {
    assert(false);
  }

RadioOffCommandIntentJSON &RadioOffCommandIntentJSON::operator=(const RadioOffCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioOffCommandIntentJSON::RadioOffCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RadioOffCommandIntentJSON::~RadioOffCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioOffCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "RadioOff";
  }

RadioOffCommandIntentJSON *RadioOffCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioOffCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioOffCommandIntentJSON>, RadioOffCommandIntentJSON *, bool> generator("Type RadioOffCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
