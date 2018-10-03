/* file "RadioToFMCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToFMCommandIntentJSON.h"

#include "RadioToFMCommandIntentJSON.h"


RadioToFMCommandIntentJSON::RadioToFMCommandIntentJSON(const RadioToFMCommandIntentJSON &)
  {
    assert(false);
  }

RadioToFMCommandIntentJSON &RadioToFMCommandIntentJSON::operator=(const RadioToFMCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioToFMCommandIntentJSON::RadioToFMCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RadioToFMCommandIntentJSON::~RadioToFMCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioToFMCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "RadioToFM";
  }

RadioToFMCommandIntentJSON *RadioToFMCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToFMCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToFMCommandIntentJSON>, RadioToFMCommandIntentJSON *, bool> generator("Type RadioToFMCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
