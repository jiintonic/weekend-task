/* file "RadioControlRecognizeNorthAmericanAMBandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioControlRecognizeNorthAmericanAMBandJSON.h"

#include "RadioControlRecognizeNorthAmericanAMBandJSON.h"


RadioControlRecognizeNorthAmericanAMBandJSON::RadioControlRecognizeNorthAmericanAMBandJSON(const RadioControlRecognizeNorthAmericanAMBandJSON &)
  {
    assert(false);
  }

RadioControlRecognizeNorthAmericanAMBandJSON &RadioControlRecognizeNorthAmericanAMBandJSON::operator=(const RadioControlRecognizeNorthAmericanAMBandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RadioControlRecognizeNorthAmericanAMBandJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field Value of RadioControlRecognizeNorthAmericanAMBandJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

RadioControlRecognizeNorthAmericanAMBandJSON::RadioControlRecognizeNorthAmericanAMBandJSON(void) :
        flagHasValue(false)
  {
  }

RadioControlRecognizeNorthAmericanAMBandJSON::RadioControlRecognizeNorthAmericanAMBandJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

RadioControlRecognizeNorthAmericanAMBandJSON::~RadioControlRecognizeNorthAmericanAMBandJSON(void)
  {
  }

bool RadioControlRecognizeNorthAmericanAMBandJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool RadioControlRecognizeNorthAmericanAMBandJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool RadioControlRecognizeNorthAmericanAMBandJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

RadioControlRecognizeNorthAmericanAMBandJSON *RadioControlRecognizeNorthAmericanAMBandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioControlRecognizeNorthAmericanAMBandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioControlRecognizeNorthAmericanAMBandJSON>, RadioControlRecognizeNorthAmericanAMBandJSON *, bool> generator("Type RadioControlRecognizeNorthAmericanAMBand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
