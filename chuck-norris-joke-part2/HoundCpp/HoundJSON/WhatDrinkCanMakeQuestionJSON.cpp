/* file "WhatDrinkCanMakeQuestionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhatDrinkCanMakeQuestionJSON.h"

#include "WhatDrinkCanMakeQuestionJSON.h"


WhatDrinkCanMakeQuestionJSON::WhatDrinkCanMakeQuestionJSON(const WhatDrinkCanMakeQuestionJSON &)
  {
    assert(false);
  }

WhatDrinkCanMakeQuestionJSON &WhatDrinkCanMakeQuestionJSON::operator=(const WhatDrinkCanMakeQuestionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *WhatDrinkCanMakeQuestionJSON::extraIngredientsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Ingredients = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeIngredients.size(); ++num1)
      {
        JSONValueHandler handler_Ingredients;
        storeIngredients[num1]->write_as_json(&handler_Ingredients);
        handler_Ingredients.result->add_reference();
        generated_array_1_Ingredients->appendComponent(handler_Ingredients.result);
        handler_Ingredients.result->remove_reference();
      }
    return generated_array_1_Ingredients;
  }

JSONValue *WhatDrinkCanMakeQuestionJSON::extraCanMakeToJSON(void) const
  {
    JSONArrayValue *generated_array_2_CanMake = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeCanMake.size(); ++num2)
      {
        JSONValueHandler handler_CanMake;
        storeCanMake[num2]->write_as_json(&handler_CanMake);
        handler_CanMake.result->add_reference();
        generated_array_2_CanMake->appendComponent(handler_CanMake.result);
        handler_CanMake.result->remove_reference();
      }
    return generated_array_2_CanMake;
  }

JSONValue *WhatDrinkCanMakeQuestionJSON::extraCanAlmostMakeToJSON(void) const
  {
    JSONArrayValue *generated_array_3_CanAlmostMake = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeCanAlmostMake.size(); ++num3)
      {
        JSONValueHandler handler_CanAlmostMake;
        storeCanAlmostMake[num3]->write_as_json(&handler_CanAlmostMake);
        handler_CanAlmostMake.result->add_reference();
        generated_array_3_CanAlmostMake->appendComponent(handler_CanAlmostMake.result);
        handler_CanAlmostMake.result->remove_reference();
      }
    return generated_array_3_CanAlmostMake;
  }

void WhatDrinkCanMakeQuestionJSON::fromJSONIngredients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Ingredients of WhatDrinkCanMakeQuestionJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DrinkIngredientJSON * > vector_Ingredients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DrinkIngredientJSON *convert_classy = DrinkIngredientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Ingredients1[num1] = convert_classy;
      }
    initIngredients();
    for (size_t num4 = 0; num4 < vector_Ingredients1.size(); ++num4)
        appendIngredients(vector_Ingredients1[num4]);
    for (size_t num1 = 0; num1 < vector_Ingredients1.size(); ++num1)
      {
        vector_Ingredients1[num1]->remove_reference();
      }
  }

void WhatDrinkCanMakeQuestionJSON::fromJSONCanMake(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CanMake of WhatDrinkCanMakeQuestionJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DrinkRecipeJSON * > vector_CanMake1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DrinkRecipeJSON *convert_classy = DrinkRecipeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_CanMake1[num1] = convert_classy;
      }
    initCanMake();
    for (size_t num5 = 0; num5 < vector_CanMake1.size(); ++num5)
        appendCanMake(vector_CanMake1[num5]);
    for (size_t num1 = 0; num1 < vector_CanMake1.size(); ++num1)
      {
        vector_CanMake1[num1]->remove_reference();
      }
  }

void WhatDrinkCanMakeQuestionJSON::fromJSONCanAlmostMake(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CanAlmostMake of WhatDrinkCanMakeQuestionJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DrinkRecipeJSON * > vector_CanAlmostMake1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DrinkRecipeJSON *convert_classy = DrinkRecipeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_CanAlmostMake1[num1] = convert_classy;
      }
    initCanAlmostMake();
    for (size_t num6 = 0; num6 < vector_CanAlmostMake1.size(); ++num6)
        appendCanAlmostMake(vector_CanAlmostMake1[num6]);
    for (size_t num1 = 0; num1 < vector_CanAlmostMake1.size(); ++num1)
      {
        vector_CanAlmostMake1[num1]->remove_reference();
      }
  }

WhatDrinkCanMakeQuestionJSON::WhatDrinkCanMakeQuestionJSON(void) :
        flagHasIngredients(false),
        flagHasCanMake(false),
        flagHasCanAlmostMake(false)
  {
    extraIndex = create_string_index();
  }

WhatDrinkCanMakeQuestionJSON::~WhatDrinkCanMakeQuestionJSON(void)
  {
    if (flagHasIngredients)
      {
        for (size_t num10 = 0; num10 < storeIngredients.size(); ++num10)
          {
            storeIngredients[num10]->remove_reference();
          }
      }
    if (flagHasCanMake)
      {
        for (size_t num11 = 0; num11 < storeCanMake.size(); ++num11)
          {
            storeCanMake[num11]->remove_reference();
          }
      }
    if (flagHasCanAlmostMake)
      {
        for (size_t num12 = 0; num12 < storeCanAlmostMake.size(); ++num12)
          {
            storeCanAlmostMake[num12]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *WhatDrinkCanMakeQuestionJSON::getNuggetKind(void) const
  {
    return "WhatDrinkCanMakeNugget";
  }

bool WhatDrinkCanMakeQuestionJSON::hasIngredients(void) const
  {
    return flagHasIngredients;
  }

size_t WhatDrinkCanMakeQuestionJSON::countOfIngredients(void) const
  {
    assert(flagHasIngredients);
    return storeIngredients.size();
  }

DrinkIngredientJSON * WhatDrinkCanMakeQuestionJSON::elementOfIngredients(size_t element_num)
  {
    assert(flagHasIngredients);
    return storeIngredients[element_num];
  }

const DrinkIngredientJSON * WhatDrinkCanMakeQuestionJSON::elementOfIngredients(size_t element_num) const
  {
    assert(flagHasIngredients);
    return storeIngredients[element_num];
  }

std::vector< DrinkIngredientJSON * > WhatDrinkCanMakeQuestionJSON::getIngredients(void)
  {
    assert(flagHasIngredients);
    return storeIngredients;
  }

const std::vector< DrinkIngredientJSON * > WhatDrinkCanMakeQuestionJSON::getIngredients(void) const
  {
    assert(flagHasIngredients);
    return storeIngredients;
  }

bool WhatDrinkCanMakeQuestionJSON::hasCanMake(void) const
  {
    return flagHasCanMake;
  }

size_t WhatDrinkCanMakeQuestionJSON::countOfCanMake(void) const
  {
    assert(flagHasCanMake);
    return storeCanMake.size();
  }

DrinkRecipeJSON * WhatDrinkCanMakeQuestionJSON::elementOfCanMake(size_t element_num)
  {
    assert(flagHasCanMake);
    return storeCanMake[element_num];
  }

const DrinkRecipeJSON * WhatDrinkCanMakeQuestionJSON::elementOfCanMake(size_t element_num) const
  {
    assert(flagHasCanMake);
    return storeCanMake[element_num];
  }

std::vector< DrinkRecipeJSON * > WhatDrinkCanMakeQuestionJSON::getCanMake(void)
  {
    assert(flagHasCanMake);
    return storeCanMake;
  }

const std::vector< DrinkRecipeJSON * > WhatDrinkCanMakeQuestionJSON::getCanMake(void) const
  {
    assert(flagHasCanMake);
    return storeCanMake;
  }

bool WhatDrinkCanMakeQuestionJSON::hasCanAlmostMake(void) const
  {
    return flagHasCanAlmostMake;
  }

size_t WhatDrinkCanMakeQuestionJSON::countOfCanAlmostMake(void) const
  {
    assert(flagHasCanAlmostMake);
    return storeCanAlmostMake.size();
  }

DrinkRecipeJSON * WhatDrinkCanMakeQuestionJSON::elementOfCanAlmostMake(size_t element_num)
  {
    assert(flagHasCanAlmostMake);
    return storeCanAlmostMake[element_num];
  }

const DrinkRecipeJSON * WhatDrinkCanMakeQuestionJSON::elementOfCanAlmostMake(size_t element_num) const
  {
    assert(flagHasCanAlmostMake);
    return storeCanAlmostMake[element_num];
  }

std::vector< DrinkRecipeJSON * > WhatDrinkCanMakeQuestionJSON::getCanAlmostMake(void)
  {
    assert(flagHasCanAlmostMake);
    return storeCanAlmostMake;
  }

const std::vector< DrinkRecipeJSON * > WhatDrinkCanMakeQuestionJSON::getCanAlmostMake(void) const
  {
    assert(flagHasCanAlmostMake);
    return storeCanAlmostMake;
  }

WhatDrinkCanMakeQuestionJSON *WhatDrinkCanMakeQuestionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhatDrinkCanMakeQuestionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhatDrinkCanMakeQuestionJSON>, WhatDrinkCanMakeQuestionJSON *, bool> generator("Type WhatDrinkCanMakeQuestion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
