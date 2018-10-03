/* file "IntegerEndpointJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IntegerEndpointJSON.h"

#include "IntegerEndpointJSON.h"


IntegerEndpointJSON::IntegerEndpointJSON(const IntegerEndpointJSON &)
  {
    assert(false);
  }

IntegerEndpointJSON &IntegerEndpointJSON::operator=(const IntegerEndpointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void IntegerEndpointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of IntegerEndpointJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of IntegerEndpointJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setValue(extracted_integer);
  }

void IntegerEndpointJSON::fromJSONInclusive(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Inclusive of IntegerEndpointJSON is not true for false.");
          }
      }
    setInclusive(the_bool);
  }

IntegerEndpointJSON::IntegerEndpointJSON(void) :
        flagHasValue(false),
        flagHasInclusive(false)
  {
    extraIndex = create_string_index();
  }

IntegerEndpointJSON::~IntegerEndpointJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool IntegerEndpointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

OInteger IntegerEndpointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const OInteger IntegerEndpointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool IntegerEndpointJSON::hasInclusive(void) const
  {
    return flagHasInclusive;
  }

bool IntegerEndpointJSON::getInclusive(void)
  {
    assert(flagHasInclusive);
    return storeInclusive;
  }

const bool IntegerEndpointJSON::getInclusive(void) const
  {
    assert(flagHasInclusive);
    return storeInclusive;
  }

IntegerEndpointJSON *IntegerEndpointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IntegerEndpointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IntegerEndpointJSON>, IntegerEndpointJSON *, bool> generator("Type IntegerEndpoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
