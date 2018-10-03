/* file "WhatDrinkCanMakeInterQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhatDrinkCanMakeInterQueryStateJSON.h"

#include "WhatDrinkCanMakeInterQueryStateJSON.h"


WhatDrinkCanMakeInterQueryStateJSON::WhatDrinkCanMakeInterQueryStateJSON(const WhatDrinkCanMakeInterQueryStateJSON &)
  {
    assert(false);
  }

WhatDrinkCanMakeInterQueryStateJSON &WhatDrinkCanMakeInterQueryStateJSON::operator=(const WhatDrinkCanMakeInterQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WhatDrinkCanMakeInterQueryStateJSON::fromJSONIngredients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Ingredients of WhatDrinkCanMakeInterQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Ingredients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Ingredients of WhatDrinkCanMakeInterQueryStateJSON is not a string.");
        vector_Ingredients1[num1] = std::string(json_string->getData());
      }
    initIngredients();
    for (size_t num2 = 0; num2 < vector_Ingredients1.size(); ++num2)
        appendIngredients(vector_Ingredients1[num2]);
    for (size_t num1 = 0; num1 < vector_Ingredients1.size(); ++num1)
      {
      }
  }

WhatDrinkCanMakeInterQueryStateJSON::WhatDrinkCanMakeInterQueryStateJSON(void) :
        flagHasIngredients(false)
  {
    extraIndex = create_string_index();
  }

WhatDrinkCanMakeInterQueryStateJSON::~WhatDrinkCanMakeInterQueryStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WhatDrinkCanMakeInterQueryStateJSON::hasIngredients(void) const
  {
    return flagHasIngredients;
  }

size_t WhatDrinkCanMakeInterQueryStateJSON::countOfIngredients(void) const
  {
    assert(flagHasIngredients);
    return storeIngredients.size();
  }

std::string WhatDrinkCanMakeInterQueryStateJSON::elementOfIngredients(size_t element_num)
  {
    assert(flagHasIngredients);
    return storeIngredients[element_num];
  }

const std::string WhatDrinkCanMakeInterQueryStateJSON::elementOfIngredients(size_t element_num) const
  {
    assert(flagHasIngredients);
    return storeIngredients[element_num];
  }

std::vector< std::string > WhatDrinkCanMakeInterQueryStateJSON::getIngredients(void)
  {
    assert(flagHasIngredients);
    return storeIngredients;
  }

const std::vector< std::string > WhatDrinkCanMakeInterQueryStateJSON::getIngredients(void) const
  {
    assert(flagHasIngredients);
    return storeIngredients;
  }

WhatDrinkCanMakeInterQueryStateJSON *WhatDrinkCanMakeInterQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhatDrinkCanMakeInterQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhatDrinkCanMakeInterQueryStateJSON>, WhatDrinkCanMakeInterQueryStateJSON *, bool> generator("Type WhatDrinkCanMakeInterQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
