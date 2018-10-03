/* file "ClientMatchesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientMatchesJSON.h"

#include "ClientMatchesJSON.h"


ClientMatchesJSON::ClientMatchesJSON(const ClientMatchesJSON &)
  {
    assert(false);
  }

ClientMatchesJSON &ClientMatchesJSON::operator=(const ClientMatchesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ClientMatchesJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of ClientMatchesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< ClientMatchJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ClientMatchJSON *convert_classy = ClientMatchJSON::from_json(json_array1->component(num1), ignore_extras);
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

ClientMatchesJSON::ClientMatchesJSON(void) :
        flagHasValue(false)
  {
  }

ClientMatchesJSON::~ClientMatchesJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool ClientMatchesJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t ClientMatchesJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

ClientMatchJSON * ClientMatchesJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const ClientMatchJSON * ClientMatchesJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< ClientMatchJSON * > ClientMatchesJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< ClientMatchJSON * > ClientMatchesJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ClientMatchesJSON *ClientMatchesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientMatchesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientMatchesJSON>, ClientMatchesJSON *, bool> generator("Type ClientMatches", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
