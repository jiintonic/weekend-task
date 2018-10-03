/* file "UberProductsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberProductsInformationNuggetJSON.h"

#include "UberProductsInformationNuggetJSON.h"


UberProductsInformationNuggetJSON::UberProductsInformationNuggetJSON(const UberProductsInformationNuggetJSON &)
  {
    assert(false);
  }

UberProductsInformationNuggetJSON &UberProductsInformationNuggetJSON::operator=(const UberProductsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberProductsInformationNuggetJSON::extraUberProductsSpecToJSON(void) const
  {
    JSONValueHandler handler_UberProductsSpec;
    storeUberProductsSpec->write_as_json(&handler_UberProductsSpec);
    handler_UberProductsSpec.result->add_reference();
    return handler_UberProductsSpec.result;
  }

JSONValue *UberProductsInformationNuggetJSON::extraUberProductsToJSON(void) const
  {
    JSONValueHandler handler_UberProducts;
    storeUberProducts->write_as_json(&handler_UberProducts);
    handler_UberProducts.result->add_reference();
    return handler_UberProducts.result;
  }

void UberProductsInformationNuggetJSON::fromJSONUberProductsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberProductsSpecJSON *convert_classy = UberProductsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProductsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberProductsInformationNuggetJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberProductsInformationNuggetJSON::UberProductsInformationNuggetJSON(void) :
        flagHasUberProductsSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberProductsInformationNuggetJSON::~UberProductsInformationNuggetJSON(void)
  {
    if (flagHasUberProductsSpec)
      {
        storeUberProductsSpec->remove_reference();
      }
    if (flagHasUberProducts)
      {
        storeUberProducts->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberProductsInformationNuggetJSON::getUberNuggetKind(void) const
  {
    return "UberProducts";
  }

bool UberProductsInformationNuggetJSON::hasUberProductsSpec(void) const
  {
    return flagHasUberProductsSpec;
  }

UberProductsSpecJSON * UberProductsInformationNuggetJSON::getUberProductsSpec(void)
  {
    assert(flagHasUberProductsSpec);
    return storeUberProductsSpec;
  }

const UberProductsSpecJSON * UberProductsInformationNuggetJSON::getUberProductsSpec(void) const
  {
    assert(flagHasUberProductsSpec);
    return storeUberProductsSpec;
  }

bool UberProductsInformationNuggetJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberProductsInformationNuggetJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberProductsInformationNuggetJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberProductsInformationNuggetJSON *UberProductsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberProductsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberProductsInformationNuggetJSON>, UberProductsInformationNuggetJSON *, bool> generator("Type UberProductsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
