/* file "UberProductsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberProductsCommandJSON.h"

#include "UberProductsCommandJSON.h"


UberProductsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberProductsCommandJSON::TypeNativeDataJSON &UberProductsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberProductsCommandJSON::TypeNativeDataJSON::fromJSONUberProductsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberProductsSpecJSON *convert_classy = UberProductsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProductsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberProductsCommandJSON::TypeNativeDataJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberProductsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberProductsSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberProductsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool UberProductsCommandJSON::TypeNativeDataJSON::hasUberProductsSpec(void) const
  {
    return flagHasUberProductsSpec;
  }

UberProductsSpecJSON * UberProductsCommandJSON::TypeNativeDataJSON::getUberProductsSpec(void)
  {
    assert(flagHasUberProductsSpec);
    return storeUberProductsSpec;
  }

const UberProductsSpecJSON * UberProductsCommandJSON::TypeNativeDataJSON::getUberProductsSpec(void) const
  {
    assert(flagHasUberProductsSpec);
    return storeUberProductsSpec;
  }

bool UberProductsCommandJSON::TypeNativeDataJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberProductsCommandJSON::TypeNativeDataJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberProductsCommandJSON::TypeNativeDataJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberProductsCommandJSON::UberProductsCommandJSON(const UberProductsCommandJSON &)
  {
    assert(false);
  }

UberProductsCommandJSON &UberProductsCommandJSON::operator=(const UberProductsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberProductsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberProductsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberProductsCommandJSON::UberProductsCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberProductsCommandJSON::~UberProductsCommandJSON(void)
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

const char *UberProductsCommandJSON::getUberCommandKind(void) const
  {
    return "UberProducts";
  }

bool UberProductsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberProductsCommandJSON::TypeNativeDataJSON * UberProductsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberProductsCommandJSON::TypeNativeDataJSON * UberProductsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberProductsCommandJSON::TypeNativeDataJSON *UberProductsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberProductsCommandJSON *UberProductsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberProductsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberProductsCommandJSON>, UberProductsCommandJSON *, bool> generator("Type UberProductsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
