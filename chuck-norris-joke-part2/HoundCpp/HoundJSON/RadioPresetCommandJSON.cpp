/* file "RadioPresetCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioPresetCommandJSON.h"

#include "RadioPresetCommandJSON.h"


RadioPresetCommandJSON::RadioPresetCommandJSON(const RadioPresetCommandJSON &)
  {
    assert(false);
  }

RadioPresetCommandJSON &RadioPresetCommandJSON::operator=(const RadioPresetCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioPresetCommandJSON::extraPresetNumberToJSON(void) const
  {
    JSONIntegerValue *generated_integer_PresetNumber = new JSONIntegerValue(storePresetNumber);
    return generated_integer_PresetNumber;
  }

void RadioPresetCommandJSON::fromJSONPresetNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PresetNumber of RadioPresetCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PresetNumber of RadioPresetCommandJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setPresetNumber(extracted_integer);
  }

RadioPresetCommandJSON::RadioPresetCommandJSON(void) :
        flagHasPresetNumber(false)
  {
    extraIndex = create_string_index();
  }

RadioPresetCommandJSON::~RadioPresetCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioPresetCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioPreset";
  }

bool RadioPresetCommandJSON::hasPresetNumber(void) const
  {
    return flagHasPresetNumber;
  }

uint8_t RadioPresetCommandJSON::getPresetNumber(void)
  {
    assert(flagHasPresetNumber);
    return storePresetNumber;
  }

const uint8_t RadioPresetCommandJSON::getPresetNumber(void) const
  {
    assert(flagHasPresetNumber);
    return storePresetNumber;
  }

RadioPresetCommandJSON *RadioPresetCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioPresetCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioPresetCommandJSON>, RadioPresetCommandJSON *, bool> generator("Type RadioPresetCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
