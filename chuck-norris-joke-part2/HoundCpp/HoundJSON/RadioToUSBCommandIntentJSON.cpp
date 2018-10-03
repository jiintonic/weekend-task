/* file "RadioToUSBCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToUSBCommandIntentJSON.h"

#include "RadioToUSBCommandIntentJSON.h"


RadioToUSBCommandIntentJSON::RadioToUSBCommandIntentJSON(const RadioToUSBCommandIntentJSON &)
  {
    assert(false);
  }

RadioToUSBCommandIntentJSON &RadioToUSBCommandIntentJSON::operator=(const RadioToUSBCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioToUSBCommandIntentJSON::RadioToUSBCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RadioToUSBCommandIntentJSON::~RadioToUSBCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioToUSBCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "RadioToUSB";
  }

RadioToUSBCommandIntentJSON *RadioToUSBCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToUSBCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToUSBCommandIntentJSON>, RadioToUSBCommandIntentJSON *, bool> generator("Type RadioToUSBCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
