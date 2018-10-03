/* file "UberEstimatesCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberEstimatesCommandJSON.h"

#include "UberEstimatesCommandJSON.h"


UberEstimatesCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberEstimatesCommandJSON::TypeNativeDataJSON &UberEstimatesCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberEstimatesCommandJSON::TypeNativeDataJSON::fromJSONUberEstimatesSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberEstimatesSpecJSON *convert_classy = UberEstimatesSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberEstimatesSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberEstimatesCommandJSON::TypeNativeDataJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberEstimatesCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberEstimatesSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberEstimatesCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool UberEstimatesCommandJSON::TypeNativeDataJSON::hasUberEstimatesSpec(void) const
  {
    return flagHasUberEstimatesSpec;
  }

UberEstimatesSpecJSON * UberEstimatesCommandJSON::TypeNativeDataJSON::getUberEstimatesSpec(void)
  {
    assert(flagHasUberEstimatesSpec);
    return storeUberEstimatesSpec;
  }

const UberEstimatesSpecJSON * UberEstimatesCommandJSON::TypeNativeDataJSON::getUberEstimatesSpec(void) const
  {
    assert(flagHasUberEstimatesSpec);
    return storeUberEstimatesSpec;
  }

bool UberEstimatesCommandJSON::TypeNativeDataJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberEstimatesCommandJSON::TypeNativeDataJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberEstimatesCommandJSON::TypeNativeDataJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberEstimatesCommandJSON::UberEstimatesCommandJSON(const UberEstimatesCommandJSON &)
  {
    assert(false);
  }

UberEstimatesCommandJSON &UberEstimatesCommandJSON::operator=(const UberEstimatesCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberEstimatesCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberEstimatesCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberEstimatesCommandJSON::UberEstimatesCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberEstimatesCommandJSON::~UberEstimatesCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberEstimatesCommandJSON::getUberCommandKind(void) const
  {
    return "UberEstimates";
  }

bool UberEstimatesCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberEstimatesCommandJSON::TypeNativeDataJSON * UberEstimatesCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberEstimatesCommandJSON::TypeNativeDataJSON * UberEstimatesCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberEstimatesCommandJSON::TypeNativeDataJSON *UberEstimatesCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
UberEstimatesCommandJSON *UberEstimatesCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberEstimatesCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberEstimatesCommandJSON>, UberEstimatesCommandJSON *, bool> generator("Type UberEstimatesCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
