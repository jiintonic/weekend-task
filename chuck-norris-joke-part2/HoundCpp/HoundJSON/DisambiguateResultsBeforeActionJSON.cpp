/* file "DisambiguateResultsBeforeActionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateResultsBeforeActionJSON.h"

#include "DisambiguateResultsBeforeActionJSON.h"


DisambiguateResultsBeforeActionJSON::DisambiguateResultsBeforeActionJSON(const DisambiguateResultsBeforeActionJSON &)
  {
    assert(false);
  }

DisambiguateResultsBeforeActionJSON &DisambiguateResultsBeforeActionJSON::operator=(const DisambiguateResultsBeforeActionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateResultsBeforeActionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of DisambiguateResultsBeforeActionJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

DisambiguateResultsBeforeActionJSON::DisambiguateResultsBeforeActionJSON(void) :
        flagHasValue(false)
  {
  }

DisambiguateResultsBeforeActionJSON::DisambiguateResultsBeforeActionJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

DisambiguateResultsBeforeActionJSON::~DisambiguateResultsBeforeActionJSON(void)
  {
  }

bool DisambiguateResultsBeforeActionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool DisambiguateResultsBeforeActionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool DisambiguateResultsBeforeActionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DisambiguateResultsBeforeActionJSON *DisambiguateResultsBeforeActionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateResultsBeforeActionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateResultsBeforeActionJSON>, DisambiguateResultsBeforeActionJSON *, bool> generator("Type DisambiguateResultsBeforeAction", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
