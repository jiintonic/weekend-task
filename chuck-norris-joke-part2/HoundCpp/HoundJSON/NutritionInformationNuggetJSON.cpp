/* file "NutritionInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NutritionInformationNuggetJSON.h"

#include "NutritionInformationNuggetJSON.h"


NutritionInformationNuggetJSON::TypeNutritionCommandKind NutritionInformationNuggetJSON::stringToNutritionCommandKind(const char *chars)
  {
    if (strcmp(chars, "NutritionCommand") == 0)
        return NutritionCommandKind_NutritionCommand;
    throw("The value for field `NutritionCommandKind' is not one of the legal values.");
  }

const char *NutritionInformationNuggetJSON::stringFromNutritionCommandKind(TypeNutritionCommandKind the_enum)
  {
    switch (the_enum)
      {
        case NutritionCommandKind_NutritionCommand:
            return "NutritionCommand";
        default:
            assert(false);
            return NULL;
      }
  }

NutritionInformationNuggetJSON::NutritionInformationNuggetJSON(const NutritionInformationNuggetJSON &)
  {
    assert(false);
  }

NutritionInformationNuggetJSON &NutritionInformationNuggetJSON::operator=(const NutritionInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NutritionInformationNuggetJSON::extraNutritionCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_NutritionCommandKind;
    generated_string_NutritionCommandKind = new JSONStringValue("NutritionCommand");
    return generated_string_NutritionCommandKind;
  }

JSONValue *NutritionInformationNuggetJSON::extraNutrientsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Nutrients = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeNutrients.size(); ++num1)
      {
        JSONValueHandler handler_Nutrients;
        storeNutrients[num1]->write_as_json(&handler_Nutrients);
        handler_Nutrients.result->add_reference();
        generated_array_1_Nutrients->appendComponent(handler_Nutrients.result);
        handler_Nutrients.result->remove_reference();
      }
    return generated_array_1_Nutrients;
  }

JSONValue *NutritionInformationNuggetJSON::extraFoodBlocksToJSON(void) const
  {
    JSONArrayValue *generated_array_2_FoodBlocks = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeFoodBlocks.size(); ++num2)
      {
        JSONArrayValue *generated_array_3_FoodBlocks = new JSONArrayValue();
        for (size_t num3 = 0; num3 < storeFoodBlocks[num2].size(); ++num3)
          {
            JSONValueHandler handler_FoodBlocks;
            storeFoodBlocks[num2][num3]->write_as_json(&handler_FoodBlocks);
            handler_FoodBlocks.result->add_reference();
            generated_array_3_FoodBlocks->appendComponent(handler_FoodBlocks.result);
            handler_FoodBlocks.result->remove_reference();
          }
        generated_array_2_FoodBlocks->appendComponent(generated_array_3_FoodBlocks);
      }
    return generated_array_2_FoodBlocks;
  }

void NutritionInformationNuggetJSON::fromJSONNutritionCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NutritionCommandKind of NutritionInformationNuggetJSON is not a string.");
    if (!(strcmp(json_string->getData(), "NutritionCommand") == 0))
        throw("The value for field NutritionCommandKind of NutritionInformationNuggetJSON is not `NutritionCommand'.");
    setNutritionCommandKind();
  }

void NutritionInformationNuggetJSON::fromJSONNutrients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Nutrients of NutritionInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< NutrientJSON * > vector_Nutrients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        NutrientJSON *convert_classy = NutrientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Nutrients1[num1] = convert_classy;
      }
    initNutrients();
    for (size_t num3 = 0; num3 < vector_Nutrients1.size(); ++num3)
        appendNutrients(vector_Nutrients1[num3]);
    for (size_t num1 = 0; num1 < vector_Nutrients1.size(); ++num1)
      {
        vector_Nutrients1[num1]->remove_reference();
      }
  }

void NutritionInformationNuggetJSON::fromJSONFoodBlocks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FoodBlocks of NutritionInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::vector< FoodJSON * > > vector_FoodBlocks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        JSONArrayValue *json_array2 = json_array1->component(num1)->array_value();
        if (json_array2 == NULL)
            throw("The value for an element of field FoodBlocks of NutritionInformationNuggetJSON is not an array.");
        size_t count2 = json_array2->componentCount();
        std::vector< FoodJSON * > vector_FoodBlocks2(count2);
        for (size_t num2 = 0; num2 < count2; ++num2)
          {
            FoodJSON *convert_classy = FoodJSON::from_json(json_array2->component(num2), ignore_extras);
            convert_classy->add_reference();
            vector_FoodBlocks2[num2] = convert_classy;
          }
        vector_FoodBlocks1[num1] = vector_FoodBlocks2;
      }
    initFoodBlocks();
    for (size_t num4 = 0; num4 < vector_FoodBlocks1.size(); ++num4)
        appendFoodBlocks(vector_FoodBlocks1[num4]);
    for (size_t num1 = 0; num1 < vector_FoodBlocks1.size(); ++num1)
      {
        for (size_t num2 = 0; num2 < vector_FoodBlocks1[num1].size(); ++num2)
          {
            vector_FoodBlocks1[num1][num2]->remove_reference();
          }
      }
  }

NutritionInformationNuggetJSON::NutritionInformationNuggetJSON(void) :
        flagHasNutritionCommandKind(false),
        flagHasNutrients(false),
        flagHasFoodBlocks(false)
  {
    extraIndex = create_string_index();
  }

NutritionInformationNuggetJSON::~NutritionInformationNuggetJSON(void)
  {
    if (flagHasNutrients)
      {
        for (size_t num10 = 0; num10 < storeNutrients.size(); ++num10)
          {
            storeNutrients[num10]->remove_reference();
          }
      }
    if (flagHasFoodBlocks)
      {
        for (size_t num11 = 0; num11 < storeFoodBlocks.size(); ++num11)
          {
            for (size_t num12 = 0; num12 < storeFoodBlocks[num11].size(); ++num12)
              {
                storeFoodBlocks[num11][num12]->remove_reference();
              }
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NutritionInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Nutrition";
  }

bool NutritionInformationNuggetJSON::hasNutritionCommandKind(void) const
  {
    return flagHasNutritionCommandKind;
  }

NutritionInformationNuggetJSON::TypeNutritionCommandKind NutritionInformationNuggetJSON::getNutritionCommandKind(void)
  {
    assert(flagHasNutritionCommandKind);
    return NutritionCommandKind_NutritionCommand;
  }

const NutritionInformationNuggetJSON::TypeNutritionCommandKind NutritionInformationNuggetJSON::getNutritionCommandKind(void) const
  {
    assert(flagHasNutritionCommandKind);
    return NutritionCommandKind_NutritionCommand;
  }

const char *NutritionInformationNuggetJSON::getNutritionCommandKindAsChars(void) const
  {
    return stringFromNutritionCommandKind(getNutritionCommandKind());
  }

std::string NutritionInformationNuggetJSON::getNutritionCommandKindAsString(void) const
  {
    return stringFromNutritionCommandKind(getNutritionCommandKind());
  }

bool NutritionInformationNuggetJSON::hasNutrients(void) const
  {
    return flagHasNutrients;
  }

size_t NutritionInformationNuggetJSON::countOfNutrients(void) const
  {
    assert(flagHasNutrients);
    return storeNutrients.size();
  }

NutrientJSON * NutritionInformationNuggetJSON::elementOfNutrients(size_t element_num)
  {
    assert(flagHasNutrients);
    return storeNutrients[element_num];
  }

const NutrientJSON * NutritionInformationNuggetJSON::elementOfNutrients(size_t element_num) const
  {
    assert(flagHasNutrients);
    return storeNutrients[element_num];
  }

std::vector< NutrientJSON * > NutritionInformationNuggetJSON::getNutrients(void)
  {
    assert(flagHasNutrients);
    return storeNutrients;
  }

const std::vector< NutrientJSON * > NutritionInformationNuggetJSON::getNutrients(void) const
  {
    assert(flagHasNutrients);
    return storeNutrients;
  }

bool NutritionInformationNuggetJSON::hasFoodBlocks(void) const
  {
    return flagHasFoodBlocks;
  }

size_t NutritionInformationNuggetJSON::countOfFoodBlocks(void) const
  {
    assert(flagHasFoodBlocks);
    return storeFoodBlocks.size();
  }

std::vector< FoodJSON * > NutritionInformationNuggetJSON::elementOfFoodBlocks(size_t element_num)
  {
    assert(flagHasFoodBlocks);
    return storeFoodBlocks[element_num];
  }

const std::vector< FoodJSON * > NutritionInformationNuggetJSON::elementOfFoodBlocks(size_t element_num) const
  {
    assert(flagHasFoodBlocks);
    return storeFoodBlocks[element_num];
  }

std::vector< std::vector< FoodJSON * > > NutritionInformationNuggetJSON::getFoodBlocks(void)
  {
    assert(flagHasFoodBlocks);
    return storeFoodBlocks;
  }

const std::vector< std::vector< FoodJSON * > > NutritionInformationNuggetJSON::getFoodBlocks(void) const
  {
    assert(flagHasFoodBlocks);
    return storeFoodBlocks;
  }

NutritionInformationNuggetJSON *NutritionInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NutritionInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NutritionInformationNuggetJSON>, NutritionInformationNuggetJSON *, bool> generator("Type NutritionInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
