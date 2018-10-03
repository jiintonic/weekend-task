/* file "RadioToAMCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToAMCommandIntentJSON.h"

#include "RadioToAMCommandIntentJSON.h"


RadioToAMCommandIntentJSON::RadioToAMCommandIntentJSON(const RadioToAMCommandIntentJSON &)
  {
    assert(false);
  }

RadioToAMCommandIntentJSON &RadioToAMCommandIntentJSON::operator=(const RadioToAMCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioToAMCommandIntentJSON::RadioToAMCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RadioToAMCommandIntentJSON::~RadioToAMCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioToAMCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "RadioToAM";
  }

RadioToAMCommandIntentJSON *RadioToAMCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToAMCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToAMCommandIntentJSON>, RadioToAMCommandIntentJSON *, bool> generator("Type RadioToAMCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
