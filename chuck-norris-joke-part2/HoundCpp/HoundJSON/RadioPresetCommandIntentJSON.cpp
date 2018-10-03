/* file "RadioPresetCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioPresetCommandIntentJSON.h"

#include "RadioPresetCommandIntentJSON.h"


RadioPresetCommandIntentJSON::RadioPresetCommandIntentJSON(const RadioPresetCommandIntentJSON &)
  {
    assert(false);
  }

RadioPresetCommandIntentJSON &RadioPresetCommandIntentJSON::operator=(const RadioPresetCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioPresetCommandIntentJSON::extraPresetNumberToJSON(void) const
  {
    JSONIntegerValue *generated_integer_PresetNumber = new JSONIntegerValue(storePresetNumber);
    return generated_integer_PresetNumber;
  }

void RadioPresetCommandIntentJSON::fromJSONPresetNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PresetNumber of RadioPresetCommandIntentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PresetNumber of RadioPresetCommandIntentJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setPresetNumber(extracted_integer);
  }

RadioPresetCommandIntentJSON::RadioPresetCommandIntentJSON(void) :
        flagHasPresetNumber(false)
  {
    extraIndex = create_string_index();
  }

RadioPresetCommandIntentJSON::~RadioPresetCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioPresetCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "RadioPreset";
  }

bool RadioPresetCommandIntentJSON::hasPresetNumber(void) const
  {
    return flagHasPresetNumber;
  }

uint8_t RadioPresetCommandIntentJSON::getPresetNumber(void)
  {
    assert(flagHasPresetNumber);
    return storePresetNumber;
  }

const uint8_t RadioPresetCommandIntentJSON::getPresetNumber(void) const
  {
    assert(flagHasPresetNumber);
    return storePresetNumber;
  }

RadioPresetCommandIntentJSON *RadioPresetCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioPresetCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioPresetCommandIntentJSON>, RadioPresetCommandIntentJSON *, bool> generator("Type RadioPresetCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
