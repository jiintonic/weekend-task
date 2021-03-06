/* file "HomeAutomationAmbiguityListJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationAmbiguityListJSON.h"

#include "HomeAutomationAmbiguityListJSON.h"


HomeAutomationAmbiguityListJSON::HomeAutomationAmbiguityListJSON(const HomeAutomationAmbiguityListJSON &)
  {
    assert(false);
  }

HomeAutomationAmbiguityListJSON &HomeAutomationAmbiguityListJSON::operator=(const HomeAutomationAmbiguityListJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationAmbiguityListJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of HomeAutomationAmbiguityListJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HomeAutomationAmbiguityJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationAmbiguityJSON *convert_classy = HomeAutomationAmbiguityJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    initValue();
    for (size_t num2 = 0; num2 < vector_Value1.size(); ++num2)
        appendValue(vector_Value1[num2]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

HomeAutomationAmbiguityListJSON::HomeAutomationAmbiguityListJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationAmbiguityListJSON::~HomeAutomationAmbiguityListJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool HomeAutomationAmbiguityListJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t HomeAutomationAmbiguityListJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

HomeAutomationAmbiguityJSON * HomeAutomationAmbiguityListJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const HomeAutomationAmbiguityJSON * HomeAutomationAmbiguityListJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< HomeAutomationAmbiguityJSON * > HomeAutomationAmbiguityListJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< HomeAutomationAmbiguityJSON * > HomeAutomationAmbiguityListJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HomeAutomationAmbiguityListJSON *HomeAutomationAmbiguityListJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationAmbiguityListJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationAmbiguityListJSON>, HomeAutomationAmbiguityListJSON *, bool> generator("Type HomeAutomationAmbiguityList", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
