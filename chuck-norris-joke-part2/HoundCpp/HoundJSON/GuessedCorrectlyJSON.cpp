/* file "GuessedCorrectlyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessedCorrectlyJSON.h"

#include "GuessedCorrectlyJSON.h"


GuessedCorrectlyJSON::GuessedCorrectlyJSON(const GuessedCorrectlyJSON &)
  {
    assert(false);
  }

GuessedCorrectlyJSON &GuessedCorrectlyJSON::operator=(const GuessedCorrectlyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GuessedCorrectlyJSON::fromJSONGuessedCorrectly(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessedCorrectly of GuessedCorrectlyJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessedCorrectly of GuessedCorrectlyJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessedCorrectly(extracted_integer);
  }

GuessedCorrectlyJSON::GuessedCorrectlyJSON(void) :
        flagHasGuessedCorrectly(false)
  {
    extraIndex = create_string_index();
  }

GuessedCorrectlyJSON::~GuessedCorrectlyJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GuessedCorrectlyJSON::hasGuessedCorrectly(void) const
  {
    return flagHasGuessedCorrectly;
  }

OInteger GuessedCorrectlyJSON::getGuessedCorrectly(void)
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

const OInteger GuessedCorrectlyJSON::getGuessedCorrectly(void) const
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

char GuessedCorrectlyJSON::Generator::lowerBoundGuessedCorrectly[] = "0";
GuessedCorrectlyJSON *GuessedCorrectlyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessedCorrectlyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessedCorrectlyJSON>, GuessedCorrectlyJSON *, bool> generator("Type GuessedCorrectly", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
