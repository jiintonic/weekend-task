/* file "UserAppsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserAppsJSON.h"

#include "UserAppsJSON.h"


UserAppsJSON::UserAppsJSON(const UserAppsJSON &)
  {
    assert(false);
  }

UserAppsJSON &UserAppsJSON::operator=(const UserAppsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UserAppsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of UserAppsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AppSpecJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AppSpecJSON *convert_classy = AppSpecJSON::from_json(json_array1->component(num1), ignore_extras);
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

UserAppsJSON::UserAppsJSON(void) :
        flagHasValue(false)
  {
  }

UserAppsJSON::~UserAppsJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool UserAppsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t UserAppsJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

AppSpecJSON * UserAppsJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const AppSpecJSON * UserAppsJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< AppSpecJSON * > UserAppsJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< AppSpecJSON * > UserAppsJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

UserAppsJSON *UserAppsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserAppsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserAppsJSON>, UserAppsJSON *, bool> generator("Type UserApps", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
