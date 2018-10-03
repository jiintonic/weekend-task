/* file "UberRequestsInProgressCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsInProgressCommandJSON.h"

#include "UberRequestsInProgressCommandJSON.h"


UberRequestsInProgressCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberRequestsInProgressCommandJSON::TypeNativeDataJSON &UberRequestsInProgressCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsInProgressCommandJSON::TypeNativeDataJSON::fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestsSpecJSON *convert_classy = UberRequestsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequestsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsInProgressCommandJSON::TypeNativeDataJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsInProgressCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberRequestsSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsInProgressCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasUberRequestsSpec)
      {
        storeUberRequestsSpec->remove_reference();
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

bool UberRequestsInProgressCommandJSON::TypeNativeDataJSON::hasUberRequestsSpec(void) const
  {
    return flagHasUberRequestsSpec;
  }

UberRequestsSpecJSON * UberRequestsInProgressCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void)
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

const UberRequestsSpecJSON * UberRequestsInProgressCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void) const
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

bool UberRequestsInProgressCommandJSON::TypeNativeDataJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberRequestsInProgressCommandJSON::TypeNativeDataJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberRequestsInProgressCommandJSON::TypeNativeDataJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberRequestsInProgressCommandJSON::UberRequestsInProgressCommandJSON(const UberRequestsInProgressCommandJSON &)
  {
    assert(false);
  }

UberRequestsInProgressCommandJSON &UberRequestsInProgressCommandJSON::operator=(const UberRequestsInProgressCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsInProgressCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberRequestsInProgressCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsInProgressCommandJSON::UberRequestsInProgressCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsInProgressCommandJSON::~UberRequestsInProgressCommandJSON(void)
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

const char *UberRequestsInProgressCommandJSON::getUberRequestsCommandKind(void) const
  {
    return "UberRequestsInProgress";
  }

bool UberRequestsInProgressCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberRequestsInProgressCommandJSON::TypeNativeDataJSON * UberRequestsInProgressCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberRequestsInProgressCommandJSON::TypeNativeDataJSON * UberRequestsInProgressCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberRequestsInProgressCommandJSON::TypeNativeDataJSON *UberRequestsInProgressCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberRequestsInProgressCommandJSON *UberRequestsInProgressCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsInProgressCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsInProgressCommandJSON>, UberRequestsInProgressCommandJSON *, bool> generator("Type UberRequestsInProgressCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
