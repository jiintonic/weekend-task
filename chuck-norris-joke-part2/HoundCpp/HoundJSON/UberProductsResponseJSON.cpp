/* file "UberProductsResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberProductsResponseJSON.h"

#include "UberProductsResponseJSON.h"


UberProductsResponseJSON::UberProductsResponseJSON(const UberProductsResponseJSON &)
  {
    assert(false);
  }

UberProductsResponseJSON &UberProductsResponseJSON::operator=(const UberProductsResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberProductsResponseJSON::fromJSONproducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field products of UberProductsResponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UberProductDetailsJSON * > vector_products1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UberProductDetailsJSON *convert_classy = UberProductDetailsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_products1[num1] = convert_classy;
      }
    initproducts();
    for (size_t num2 = 0; num2 < vector_products1.size(); ++num2)
        appendproducts(vector_products1[num2]);
    for (size_t num1 = 0; num1 < vector_products1.size(); ++num1)
      {
        vector_products1[num1]->remove_reference();
      }
  }

UberProductsResponseJSON::UberProductsResponseJSON(void) :
        flagHasproducts(false)
  {
    extraIndex = create_string_index();
  }

UberProductsResponseJSON::~UberProductsResponseJSON(void)
  {
    if (flagHasproducts)
      {
        for (size_t num4 = 0; num4 < storeproducts.size(); ++num4)
          {
            storeproducts[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberProductsResponseJSON::hasproducts(void) const
  {
    return flagHasproducts;
  }

size_t UberProductsResponseJSON::countOfproducts(void) const
  {
    assert(flagHasproducts);
    return storeproducts.size();
  }

UberProductDetailsJSON * UberProductsResponseJSON::elementOfproducts(size_t element_num)
  {
    assert(flagHasproducts);
    return storeproducts[element_num];
  }

const UberProductDetailsJSON * UberProductsResponseJSON::elementOfproducts(size_t element_num) const
  {
    assert(flagHasproducts);
    return storeproducts[element_num];
  }

std::vector< UberProductDetailsJSON * > UberProductsResponseJSON::getproducts(void)
  {
    assert(flagHasproducts);
    return storeproducts;
  }

const std::vector< UberProductDetailsJSON * > UberProductsResponseJSON::getproducts(void) const
  {
    assert(flagHasproducts);
    return storeproducts;
  }

UberProductsResponseJSON *UberProductsResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberProductsResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberProductsResponseJSON>, UberProductsResponseJSON *, bool> generator("Type UberProductsResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
