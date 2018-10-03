/* file "AllowPopularNameContactMatchesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AllowPopularNameContactMatchesJSON.h"

#include "AllowPopularNameContactMatchesJSON.h"


AllowPopularNameContactMatchesJSON::AllowPopularNameContactMatchesJSON(const AllowPopularNameContactMatchesJSON &)
  {
    assert(false);
  }

AllowPopularNameContactMatchesJSON &AllowPopularNameContactMatchesJSON::operator=(const AllowPopularNameContactMatchesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AllowPopularNameContactMatchesJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of AllowPopularNameContactMatchesJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

AllowPopularNameContactMatchesJSON::AllowPopularNameContactMatchesJSON(void) :
        flagHasValue(false)
  {
  }

AllowPopularNameContactMatchesJSON::AllowPopularNameContactMatchesJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

AllowPopularNameContactMatchesJSON::~AllowPopularNameContactMatchesJSON(void)
  {
  }

bool AllowPopularNameContactMatchesJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool AllowPopularNameContactMatchesJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool AllowPopularNameContactMatchesJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

AllowPopularNameContactMatchesJSON *AllowPopularNameContactMatchesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AllowPopularNameContactMatchesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AllowPopularNameContactMatchesJSON>, AllowPopularNameContactMatchesJSON *, bool> generator("Type AllowPopularNameContactMatches", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
