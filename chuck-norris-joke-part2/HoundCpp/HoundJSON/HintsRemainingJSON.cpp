/* file "HintsRemainingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HintsRemainingJSON.h"

#include "HintsRemainingJSON.h"


HintsRemainingJSON::HintsRemainingJSON(const HintsRemainingJSON &)
  {
    assert(false);
  }

HintsRemainingJSON &HintsRemainingJSON::operator=(const HintsRemainingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HintsRemainingJSON::fromJSONHintsRemaining(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HintsRemaining of HintsRemainingJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HintsRemaining of HintsRemainingJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHintsRemaining(extracted_integer);
  }

HintsRemainingJSON::HintsRemainingJSON(void) :
        flagHasHintsRemaining(false)
  {
    extraIndex = create_string_index();
  }

HintsRemainingJSON::~HintsRemainingJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HintsRemainingJSON::hasHintsRemaining(void) const
  {
    return flagHasHintsRemaining;
  }

uint8_t HintsRemainingJSON::getHintsRemaining(void)
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

const uint8_t HintsRemainingJSON::getHintsRemaining(void) const
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

HintsRemainingJSON *HintsRemainingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HintsRemainingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HintsRemainingJSON>, HintsRemainingJSON *, bool> generator("Type HintsRemaining", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
