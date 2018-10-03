/* file "StoredPageMatchPageListJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredPageMatchPageListJSON.h"

#include "StoredPageMatchPageListJSON.h"


StoredPageMatchPageListJSON::StoredPageMatchPageListJSON(const StoredPageMatchPageListJSON &)
  {
    assert(false);
  }

StoredPageMatchPageListJSON &StoredPageMatchPageListJSON::operator=(const StoredPageMatchPageListJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StoredPageMatchPageListJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of StoredPageMatchPageListJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Value of StoredPageMatchPageListJSON has too few elements.");
    std::vector< std::string > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Value of StoredPageMatchPageListJSON is not a string.");
        vector_Value1[num1] = std::string(json_string->getData());
      }
    assert(vector_Value1.size() >= 1);
    initValue();
    for (size_t num2 = 0; num2 < vector_Value1.size(); ++num2)
        appendValue(vector_Value1[num2]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
      }
  }

StoredPageMatchPageListJSON::StoredPageMatchPageListJSON(void) :
        flagHasValue(false)
  {
  }

StoredPageMatchPageListJSON::~StoredPageMatchPageListJSON(void)
  {
  }

bool StoredPageMatchPageListJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t StoredPageMatchPageListJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

std::string StoredPageMatchPageListJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const std::string StoredPageMatchPageListJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< std::string > StoredPageMatchPageListJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< std::string > StoredPageMatchPageListJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

StoredPageMatchPageListJSON *StoredPageMatchPageListJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredPageMatchPageListJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool> generator("Type StoredPageMatchPageList", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
