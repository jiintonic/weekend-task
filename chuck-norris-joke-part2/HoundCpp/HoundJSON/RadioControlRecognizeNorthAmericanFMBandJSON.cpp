/* file "RadioControlRecognizeNorthAmericanFMBandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioControlRecognizeNorthAmericanFMBandJSON.h"

#include "RadioControlRecognizeNorthAmericanFMBandJSON.h"


RadioControlRecognizeNorthAmericanFMBandJSON::RadioControlRecognizeNorthAmericanFMBandJSON(const RadioControlRecognizeNorthAmericanFMBandJSON &)
  {
    assert(false);
  }

RadioControlRecognizeNorthAmericanFMBandJSON &RadioControlRecognizeNorthAmericanFMBandJSON::operator=(const RadioControlRecognizeNorthAmericanFMBandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RadioControlRecognizeNorthAmericanFMBandJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of RadioControlRecognizeNorthAmericanFMBandJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

RadioControlRecognizeNorthAmericanFMBandJSON::RadioControlRecognizeNorthAmericanFMBandJSON(void) :
        flagHasValue(false)
  {
  }

RadioControlRecognizeNorthAmericanFMBandJSON::RadioControlRecognizeNorthAmericanFMBandJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

RadioControlRecognizeNorthAmericanFMBandJSON::~RadioControlRecognizeNorthAmericanFMBandJSON(void)
  {
  }

bool RadioControlRecognizeNorthAmericanFMBandJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool RadioControlRecognizeNorthAmericanFMBandJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool RadioControlRecognizeNorthAmericanFMBandJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

RadioControlRecognizeNorthAmericanFMBandJSON *RadioControlRecognizeNorthAmericanFMBandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioControlRecognizeNorthAmericanFMBandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioControlRecognizeNorthAmericanFMBandJSON>, RadioControlRecognizeNorthAmericanFMBandJSON *, bool> generator("Type RadioControlRecognizeNorthAmericanFMBand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
