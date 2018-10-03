/* file "CountdownCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CountdownCommandJSON.h"

#include "CountdownCommandJSON.h"


CountdownCommandJSON::CountdownCommandJSON(const CountdownCommandJSON &)
  {
    assert(false);
  }

CountdownCommandJSON &CountdownCommandJSON::operator=(const CountdownCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CountdownCommandJSON::extraCountdownIsSupportedToJSON(void) const
  {
    JSONValue *generated_boolean_CountdownIsSupported = (storeCountdownIsSupported ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_CountdownIsSupported;
  }

JSONValue *CountdownCommandJSON::extraSecondsLeftToJSON(void) const
  {
    JSONIntegerValue *generated_integer_SecondsLeft = new JSONIntegerValue(storeSecondsLeft.get_o_integer());
    return generated_integer_SecondsLeft;
  }

void CountdownCommandJSON::fromJSONCountdownIsSupported(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CountdownIsSupported of CountdownCommandJSON is not true for false.");
          }
      }
    setCountdownIsSupported(the_bool);
  }

void CountdownCommandJSON::fromJSONSecondsLeft(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SecondsLeft of CountdownCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SecondsLeft of CountdownCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSecondsLeft(extracted_integer);
  }

CountdownCommandJSON::CountdownCommandJSON(void) :
        flagHasCountdownIsSupported(false),
        flagHasSecondsLeft(false)
  {
    extraIndex = create_string_index();
  }

CountdownCommandJSON::~CountdownCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CountdownCommandJSON::getCommandKind(void) const
  {
    return "CountdownCommand";
  }

bool CountdownCommandJSON::hasCountdownIsSupported(void) const
  {
    return flagHasCountdownIsSupported;
  }

bool CountdownCommandJSON::getCountdownIsSupported(void)
  {
    assert(flagHasCountdownIsSupported);
    return storeCountdownIsSupported;
  }

const bool CountdownCommandJSON::getCountdownIsSupported(void) const
  {
    assert(flagHasCountdownIsSupported);
    return storeCountdownIsSupported;
  }

bool CountdownCommandJSON::hasSecondsLeft(void) const
  {
    return flagHasSecondsLeft;
  }

OInteger CountdownCommandJSON::getSecondsLeft(void)
  {
    assert(flagHasSecondsLeft);
    return storeSecondsLeft;
  }

const OInteger CountdownCommandJSON::getSecondsLeft(void) const
  {
    assert(flagHasSecondsLeft);
    return storeSecondsLeft;
  }

char CountdownCommandJSON::Generator::lowerBoundSecondsLeft[] = "0";
CountdownCommandJSON *CountdownCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CountdownCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CountdownCommandJSON>, CountdownCommandJSON *, bool> generator("Type CountdownCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
