/* file "UberRequestsLoginCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsLoginCommandJSON.h"

#include "UberRequestsLoginCommandJSON.h"


UberRequestsLoginCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberRequestsLoginCommandJSON::TypeNativeDataJSON &UberRequestsLoginCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsLoginCommandJSON::TypeNativeDataJSON::fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestsSpecJSON *convert_classy = UberRequestsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequestsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsLoginCommandJSON::TypeNativeDataJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsLoginCommandJSON::TypeNativeDataJSON::fromJSONCause(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Cause of TypeNativeDataJSON is not a string.");
    setCause(std::string(json_string->getData()));
  }

UberRequestsLoginCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberRequestsSpec(false),
        flagHasUberProducts(false),
        flagHasCause(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsLoginCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool UberRequestsLoginCommandJSON::TypeNativeDataJSON::hasUberRequestsSpec(void) const
  {
    return flagHasUberRequestsSpec;
  }

UberRequestsSpecJSON * UberRequestsLoginCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void)
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

const UberRequestsSpecJSON * UberRequestsLoginCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void) const
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

bool UberRequestsLoginCommandJSON::TypeNativeDataJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberRequestsLoginCommandJSON::TypeNativeDataJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberRequestsLoginCommandJSON::TypeNativeDataJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

bool UberRequestsLoginCommandJSON::TypeNativeDataJSON::hasCause(void) const
  {
    return flagHasCause;
  }

std::string UberRequestsLoginCommandJSON::TypeNativeDataJSON::getCause(void)
  {
    assert(flagHasCause);
    return storeCause;
  }

const std::string UberRequestsLoginCommandJSON::TypeNativeDataJSON::getCause(void) const
  {
    assert(flagHasCause);
    return storeCause;
  }

UberRequestsLoginCommandJSON::UberRequestsLoginCommandJSON(const UberRequestsLoginCommandJSON &)
  {
    assert(false);
  }

UberRequestsLoginCommandJSON &UberRequestsLoginCommandJSON::operator=(const UberRequestsLoginCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsLoginCommandJSON::extraRequireLoginResponseToJSON(void) const
  {
    JSONValueHandler handler_RequireLoginResponse;
    storeRequireLoginResponse->write_as_json(&handler_RequireLoginResponse);
    handler_RequireLoginResponse.result->add_reference();
    return handler_RequireLoginResponse.result;
  }

JSONValue *UberRequestsLoginCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberRequestsLoginCommandJSON::fromJSONRequireLoginResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequireLoginResponse(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsLoginCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsLoginCommandJSON::UberRequestsLoginCommandJSON(void) :
        flagHasRequireLoginResponse(false),
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsLoginCommandJSON::~UberRequestsLoginCommandJSON(void)
  {
    if (flagHasRequireLoginResponse)
      {
        storeRequireLoginResponse->remove_reference();
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberRequestsLoginCommandJSON::getUberRequestsCommandKind(void) const
  {
    return "UberRequestsLogin";
  }

bool UberRequestsLoginCommandJSON::hasRequireLoginResponse(void) const
  {
    return flagHasRequireLoginResponse;
  }

DynamicResponseJSON * UberRequestsLoginCommandJSON::getRequireLoginResponse(void)
  {
    assert(flagHasRequireLoginResponse);
    return storeRequireLoginResponse;
  }

const DynamicResponseJSON * UberRequestsLoginCommandJSON::getRequireLoginResponse(void) const
  {
    assert(flagHasRequireLoginResponse);
    return storeRequireLoginResponse;
  }

bool UberRequestsLoginCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberRequestsLoginCommandJSON::TypeNativeDataJSON * UberRequestsLoginCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberRequestsLoginCommandJSON::TypeNativeDataJSON * UberRequestsLoginCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberRequestsLoginCommandJSON::TypeNativeDataJSON *UberRequestsLoginCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberRequestsLoginCommandJSON *UberRequestsLoginCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsLoginCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsLoginCommandJSON>, UberRequestsLoginCommandJSON *, bool> generator("Type UberRequestsLoginCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
