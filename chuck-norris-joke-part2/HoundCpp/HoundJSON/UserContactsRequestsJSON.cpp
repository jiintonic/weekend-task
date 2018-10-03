/* file "UserContactsRequestsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsRequestsJSON.h"

#include "UserContactsRequestsJSON.h"


UserContactsRequestsJSON::UserContactsRequestsJSON(const UserContactsRequestsJSON &)
  {
    assert(false);
  }

UserContactsRequestsJSON &UserContactsRequestsJSON::operator=(const UserContactsRequestsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UserContactsRequestsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of UserContactsRequestsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Value of UserContactsRequestsJSON has too few elements.");
    std::vector< UserContactsRequestJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UserContactsRequestJSON *convert_classy = UserContactsRequestJSON::from_json(json_array1->component(num1), ignore_extras);
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

UserContactsRequestsJSON::UserContactsRequestsJSON(void) :
        flagHasValue(false)
  {
  }

UserContactsRequestsJSON::~UserContactsRequestsJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool UserContactsRequestsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t UserContactsRequestsJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

UserContactsRequestJSON * UserContactsRequestsJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const UserContactsRequestJSON * UserContactsRequestsJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< UserContactsRequestJSON * > UserContactsRequestsJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< UserContactsRequestJSON * > UserContactsRequestsJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

UserContactsRequestsJSON *UserContactsRequestsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsRequestsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsRequestsJSON>, UserContactsRequestsJSON *, bool> generator("Type UserContactsRequests", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
