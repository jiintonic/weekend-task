/* file "UberRequestsSuccessCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsSuccessCommandJSON.h"

#include "UberRequestsSuccessCommandJSON.h"


UberRequestsSuccessCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberRequestsSuccessCommandJSON::TypeNativeDataJSON &UberRequestsSuccessCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsSuccessCommandJSON::TypeNativeDataJSON::fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestsSpecJSON *convert_classy = UberRequestsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequestsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSuccessCommandJSON::TypeNativeDataJSON::fromJSONUberProduct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductJSON *convert_classy = UberCompositeProductJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProduct(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSuccessCommandJSON::TypeNativeDataJSON::fromJSONUberRequest(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeRequestJSON *convert_classy = UberCompositeRequestJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequest(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsSuccessCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberRequestsSpec(false),
        flagHasUberProduct(false),
        flagHasUberRequest(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsSuccessCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasUberRequestsSpec)
      {
        storeUberRequestsSpec->remove_reference();
      }
    if (flagHasUberProduct)
      {
        storeUberProduct->remove_reference();
      }
    if (flagHasUberRequest)
      {
        storeUberRequest->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestsSuccessCommandJSON::TypeNativeDataJSON::hasUberRequestsSpec(void) const
  {
    return flagHasUberRequestsSpec;
  }

UberRequestsSpecJSON * UberRequestsSuccessCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void)
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

const UberRequestsSpecJSON * UberRequestsSuccessCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void) const
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

bool UberRequestsSuccessCommandJSON::TypeNativeDataJSON::hasUberProduct(void) const
  {
    return flagHasUberProduct;
  }

UberCompositeProductJSON * UberRequestsSuccessCommandJSON::TypeNativeDataJSON::getUberProduct(void)
  {
    assert(flagHasUberProduct);
    return storeUberProduct;
  }

const UberCompositeProductJSON * UberRequestsSuccessCommandJSON::TypeNativeDataJSON::getUberProduct(void) const
  {
    assert(flagHasUberProduct);
    return storeUberProduct;
  }

bool UberRequestsSuccessCommandJSON::TypeNativeDataJSON::hasUberRequest(void) const
  {
    return flagHasUberRequest;
  }

UberCompositeRequestJSON * UberRequestsSuccessCommandJSON::TypeNativeDataJSON::getUberRequest(void)
  {
    assert(flagHasUberRequest);
    return storeUberRequest;
  }

const UberCompositeRequestJSON * UberRequestsSuccessCommandJSON::TypeNativeDataJSON::getUberRequest(void) const
  {
    assert(flagHasUberRequest);
    return storeUberRequest;
  }

UberRequestsSuccessCommandJSON::UberRequestsSuccessCommandJSON(const UberRequestsSuccessCommandJSON &)
  {
    assert(false);
  }

UberRequestsSuccessCommandJSON &UberRequestsSuccessCommandJSON::operator=(const UberRequestsSuccessCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsSuccessCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberRequestsSuccessCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsSuccessCommandJSON::UberRequestsSuccessCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsSuccessCommandJSON::~UberRequestsSuccessCommandJSON(void)
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

const char *UberRequestsSuccessCommandJSON::getUberRequestsCommandKind(void) const
  {
    return "UberRequestsSuccess";
  }

bool UberRequestsSuccessCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberRequestsSuccessCommandJSON::TypeNativeDataJSON * UberRequestsSuccessCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberRequestsSuccessCommandJSON::TypeNativeDataJSON * UberRequestsSuccessCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberRequestsSuccessCommandJSON::TypeNativeDataJSON *UberRequestsSuccessCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberRequestsSuccessCommandJSON *UberRequestsSuccessCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsSuccessCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsSuccessCommandJSON>, UberRequestsSuccessCommandJSON *, bool> generator("Type UberRequestsSuccessCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
