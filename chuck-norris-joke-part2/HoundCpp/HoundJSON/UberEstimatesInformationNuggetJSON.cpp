/* file "UberEstimatesInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberEstimatesInformationNuggetJSON.h"

#include "UberEstimatesInformationNuggetJSON.h"


UberEstimatesInformationNuggetJSON::UberEstimatesInformationNuggetJSON(const UberEstimatesInformationNuggetJSON &)
  {
    assert(false);
  }

UberEstimatesInformationNuggetJSON &UberEstimatesInformationNuggetJSON::operator=(const UberEstimatesInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberEstimatesInformationNuggetJSON::extraUberEstimatesSpecToJSON(void) const
  {
    JSONValueHandler handler_UberEstimatesSpec;
    storeUberEstimatesSpec->write_as_json(&handler_UberEstimatesSpec);
    handler_UberEstimatesSpec.result->add_reference();
    return handler_UberEstimatesSpec.result;
  }

JSONValue *UberEstimatesInformationNuggetJSON::extraUberProductsToJSON(void) const
  {
    JSONValueHandler handler_UberProducts;
    storeUberProducts->write_as_json(&handler_UberProducts);
    handler_UberProducts.result->add_reference();
    return handler_UberProducts.result;
  }

void UberEstimatesInformationNuggetJSON::fromJSONUberEstimatesSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberEstimatesSpecJSON *convert_classy = UberEstimatesSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberEstimatesSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberEstimatesInformationNuggetJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberEstimatesInformationNuggetJSON::UberEstimatesInformationNuggetJSON(void) :
        flagHasUberEstimatesSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberEstimatesInformationNuggetJSON::~UberEstimatesInformationNuggetJSON(void)
  {
    if (flagHasUberEstimatesSpec)
      {
        storeUberEstimatesSpec->remove_reference();
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

const char *UberEstimatesInformationNuggetJSON::getUberNuggetKind(void) const
  {
    return "UberEstimates";
  }

bool UberEstimatesInformationNuggetJSON::hasUberEstimatesSpec(void) const
  {
    return flagHasUberEstimatesSpec;
  }

UberEstimatesSpecJSON * UberEstimatesInformationNuggetJSON::getUberEstimatesSpec(void)
  {
    assert(flagHasUberEstimatesSpec);
    return storeUberEstimatesSpec;
  }

const UberEstimatesSpecJSON * UberEstimatesInformationNuggetJSON::getUberEstimatesSpec(void) const
  {
    assert(flagHasUberEstimatesSpec);
    return storeUberEstimatesSpec;
  }

bool UberEstimatesInformationNuggetJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberEstimatesInformationNuggetJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberEstimatesInformationNuggetJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberEstimatesInformationNuggetJSON *UberEstimatesInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberEstimatesInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberEstimatesInformationNuggetJSON>, UberEstimatesInformationNuggetJSON *, bool> generator("Type UberEstimatesInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
