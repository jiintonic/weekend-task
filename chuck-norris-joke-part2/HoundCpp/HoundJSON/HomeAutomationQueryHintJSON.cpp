/* file "HomeAutomationQueryHintJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationQueryHintJSON.h"

#include "HomeAutomationQueryHintJSON.h"


HomeAutomationQueryHintJSON::HomeAutomationQueryHintJSON(const HomeAutomationQueryHintJSON &)
  {
    assert(false);
  }

HomeAutomationQueryHintJSON &HomeAutomationQueryHintJSON::operator=(const HomeAutomationQueryHintJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationQueryHintJSON::fromJSONOperations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Operations of HomeAutomationQueryHintJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Operations of HomeAutomationQueryHintJSON has too few elements.");
    std::vector< HomeAutomationOperationJSON * > vector_Operations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationOperationJSON *convert_classy = HomeAutomationOperationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Operations1[num1] = convert_classy;
      }
    assert(vector_Operations1.size() >= 1);
    initOperations();
    for (size_t num3 = 0; num3 < vector_Operations1.size(); ++num3)
        appendOperations(vector_Operations1[num3]);
    for (size_t num1 = 0; num1 < vector_Operations1.size(); ++num1)
      {
        vector_Operations1[num1]->remove_reference();
      }
  }

void HomeAutomationQueryHintJSON::fromJSONProperties(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Properties of HomeAutomationQueryHintJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Properties of HomeAutomationQueryHintJSON has too few elements.");
    std::vector< HomeAutomationPropertyJSON * > vector_Properties1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HomeAutomationPropertyJSON *convert_classy = HomeAutomationPropertyJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Properties1[num1] = convert_classy;
      }
    assert(vector_Properties1.size() >= 1);
    initProperties();
    for (size_t num4 = 0; num4 < vector_Properties1.size(); ++num4)
        appendProperties(vector_Properties1[num4]);
    for (size_t num1 = 0; num1 < vector_Properties1.size(); ++num1)
      {
        vector_Properties1[num1]->remove_reference();
      }
  }

HomeAutomationQueryHintJSON::HomeAutomationQueryHintJSON(void) :
        flagHasOperations(false),
        flagHasProperties(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationQueryHintJSON::~HomeAutomationQueryHintJSON(void)
  {
    if (flagHasOperations)
      {
        for (size_t num7 = 0; num7 < storeOperations.size(); ++num7)
          {
            storeOperations[num7]->remove_reference();
          }
      }
    if (flagHasProperties)
      {
        for (size_t num8 = 0; num8 < storeProperties.size(); ++num8)
          {
            storeProperties[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationQueryHintJSON::hasOperations(void) const
  {
    return flagHasOperations;
  }

size_t HomeAutomationQueryHintJSON::countOfOperations(void) const
  {
    assert(flagHasOperations);
    return storeOperations.size();
  }

HomeAutomationOperationJSON * HomeAutomationQueryHintJSON::elementOfOperations(size_t element_num)
  {
    assert(flagHasOperations);
    return storeOperations[element_num];
  }

const HomeAutomationOperationJSON * HomeAutomationQueryHintJSON::elementOfOperations(size_t element_num) const
  {
    assert(flagHasOperations);
    return storeOperations[element_num];
  }

std::vector< HomeAutomationOperationJSON * > HomeAutomationQueryHintJSON::getOperations(void)
  {
    assert(flagHasOperations);
    return storeOperations;
  }

const std::vector< HomeAutomationOperationJSON * > HomeAutomationQueryHintJSON::getOperations(void) const
  {
    assert(flagHasOperations);
    return storeOperations;
  }

bool HomeAutomationQueryHintJSON::hasProperties(void) const
  {
    return flagHasProperties;
  }

size_t HomeAutomationQueryHintJSON::countOfProperties(void) const
  {
    assert(flagHasProperties);
    return storeProperties.size();
  }

HomeAutomationPropertyJSON * HomeAutomationQueryHintJSON::elementOfProperties(size_t element_num)
  {
    assert(flagHasProperties);
    return storeProperties[element_num];
  }

const HomeAutomationPropertyJSON * HomeAutomationQueryHintJSON::elementOfProperties(size_t element_num) const
  {
    assert(flagHasProperties);
    return storeProperties[element_num];
  }

std::vector< HomeAutomationPropertyJSON * > HomeAutomationQueryHintJSON::getProperties(void)
  {
    assert(flagHasProperties);
    return storeProperties;
  }

const std::vector< HomeAutomationPropertyJSON * > HomeAutomationQueryHintJSON::getProperties(void) const
  {
    assert(flagHasProperties);
    return storeProperties;
  }

HomeAutomationQueryHintJSON *HomeAutomationQueryHintJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationQueryHintJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationQueryHintJSON>, HomeAutomationQueryHintJSON *, bool> generator("Type HomeAutomationQueryHint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
