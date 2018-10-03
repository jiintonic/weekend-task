/* file "BlackjackHandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackHandJSON.h"

#include "BlackjackHandJSON.h"


BlackjackHandJSON::BlackjackHandJSON(const BlackjackHandJSON &)
  {
    assert(false);
  }

BlackjackHandJSON &BlackjackHandJSON::operator=(const BlackjackHandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BlackjackHandJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of BlackjackHandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Value of BlackjackHandJSON has too few elements.");
    std::vector< PlayingCardJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        PlayingCardJSON *convert_classy = PlayingCardJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    assert(vector_Value1.size() >= 1);
    initValue();
    for (size_t num2 = 0; num2 < vector_Value1.size(); ++num2)
        appendValue(vector_Value1[num2]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

BlackjackHandJSON::BlackjackHandJSON(void) :
        flagHasValue(false)
  {
  }

BlackjackHandJSON::~BlackjackHandJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool BlackjackHandJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t BlackjackHandJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

PlayingCardJSON * BlackjackHandJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const PlayingCardJSON * BlackjackHandJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< PlayingCardJSON * > BlackjackHandJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< PlayingCardJSON * > BlackjackHandJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

BlackjackHandJSON *BlackjackHandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackHandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackHandJSON>, BlackjackHandJSON *, bool> generator("Type BlackjackHand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
