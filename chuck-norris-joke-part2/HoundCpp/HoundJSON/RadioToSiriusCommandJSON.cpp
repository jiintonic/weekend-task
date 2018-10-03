/* file "RadioToSiriusCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToSiriusCommandJSON.h"

#include "RadioToSiriusCommandJSON.h"


RadioToSiriusCommandJSON::RadioToSiriusCommandJSON(const RadioToSiriusCommandJSON &)
  {
    assert(false);
  }

RadioToSiriusCommandJSON &RadioToSiriusCommandJSON::operator=(const RadioToSiriusCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RadioToSiriusCommandJSON::RadioToSiriusCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

RadioToSiriusCommandJSON::~RadioToSiriusCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioToSiriusCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioToSirius";
  }

RadioToSiriusCommandJSON *RadioToSiriusCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToSiriusCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToSiriusCommandJSON>, RadioToSiriusCommandJSON *, bool> generator("Type RadioToSiriusCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
