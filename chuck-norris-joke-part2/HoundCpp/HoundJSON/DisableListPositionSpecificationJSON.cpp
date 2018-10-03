/* file "DisableListPositionSpecificationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisableListPositionSpecificationJSON.h"

#include "DisableListPositionSpecificationJSON.h"


DisableListPositionSpecificationJSON::DisableListPositionSpecificationJSON(const DisableListPositionSpecificationJSON &)
  {
    assert(false);
  }

DisableListPositionSpecificationJSON &DisableListPositionSpecificationJSON::operator=(const DisableListPositionSpecificationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisableListPositionSpecificationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of DisableListPositionSpecificationJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

DisableListPositionSpecificationJSON::DisableListPositionSpecificationJSON(void) :
        flagHasValue(false)
  {
  }

DisableListPositionSpecificationJSON::DisableListPositionSpecificationJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

DisableListPositionSpecificationJSON::~DisableListPositionSpecificationJSON(void)
  {
  }

bool DisableListPositionSpecificationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool DisableListPositionSpecificationJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool DisableListPositionSpecificationJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DisableListPositionSpecificationJSON *DisableListPositionSpecificationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisableListPositionSpecificationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisableListPositionSpecificationJSON>, DisableListPositionSpecificationJSON *, bool> generator("Type DisableListPositionSpecification", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
