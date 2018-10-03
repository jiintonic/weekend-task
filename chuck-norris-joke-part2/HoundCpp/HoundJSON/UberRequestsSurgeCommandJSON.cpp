/* file "UberRequestsSurgeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsSurgeCommandJSON.h"

#include "UberRequestsSurgeCommandJSON.h"


UberRequestsSurgeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberRequestsSurgeCommandJSON::TypeNativeDataJSON &UberRequestsSurgeCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsSurgeCommandJSON::TypeNativeDataJSON::fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestsSpecJSON *convert_classy = UberRequestsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequestsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSurgeCommandJSON::TypeNativeDataJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSurgeCommandJSON::TypeNativeDataJSON::fromJSONSurgeConfirmationUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SurgeConfirmationUrl of TypeNativeDataJSON is not a string.");
    setSurgeConfirmationUrl(std::string(json_string->getData()));
  }

UberRequestsSurgeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberRequestsSpec(false),
        flagHasUberProducts(false),
        flagHasSurgeConfirmationUrl(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsSurgeCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool UberRequestsSurgeCommandJSON::TypeNativeDataJSON::hasUberRequestsSpec(void) const
  {
    return flagHasUberRequestsSpec;
  }

UberRequestsSpecJSON * UberRequestsSurgeCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void)
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

const UberRequestsSpecJSON * UberRequestsSurgeCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void) const
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

bool UberRequestsSurgeCommandJSON::TypeNativeDataJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberRequestsSurgeCommandJSON::TypeNativeDataJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberRequestsSurgeCommandJSON::TypeNativeDataJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

bool UberRequestsSurgeCommandJSON::TypeNativeDataJSON::hasSurgeConfirmationUrl(void) const
  {
    return flagHasSurgeConfirmationUrl;
  }

std::string UberRequestsSurgeCommandJSON::TypeNativeDataJSON::getSurgeConfirmationUrl(void)
  {
    assert(flagHasSurgeConfirmationUrl);
    return storeSurgeConfirmationUrl;
  }

const std::string UberRequestsSurgeCommandJSON::TypeNativeDataJSON::getSurgeConfirmationUrl(void) const
  {
    assert(flagHasSurgeConfirmationUrl);
    return storeSurgeConfirmationUrl;
  }

UberRequestsSurgeCommandJSON::UberRequestsSurgeCommandJSON(const UberRequestsSurgeCommandJSON &)
  {
    assert(false);
  }

UberRequestsSurgeCommandJSON &UberRequestsSurgeCommandJSON::operator=(const UberRequestsSurgeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsSurgeCommandJSON::extraVoiceWorkflowResponseToJSON(void) const
  {
    JSONValueHandler handler_VoiceWorkflowResponse;
    storeVoiceWorkflowResponse->write_as_json(&handler_VoiceWorkflowResponse);
    handler_VoiceWorkflowResponse.result->add_reference();
    return handler_VoiceWorkflowResponse.result;
  }

JSONValue *UberRequestsSurgeCommandJSON::extraManualWorkflowResponseToJSON(void) const
  {
    JSONValueHandler handler_ManualWorkflowResponse;
    storeManualWorkflowResponse->write_as_json(&handler_ManualWorkflowResponse);
    handler_ManualWorkflowResponse.result->add_reference();
    return handler_ManualWorkflowResponse.result;
  }

JSONValue *UberRequestsSurgeCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberRequestsSurgeCommandJSON::fromJSONVoiceWorkflowResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVoiceWorkflowResponse(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSurgeCommandJSON::fromJSONManualWorkflowResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setManualWorkflowResponse(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSurgeCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsSurgeCommandJSON::UberRequestsSurgeCommandJSON(void) :
        flagHasVoiceWorkflowResponse(false),
        flagHasManualWorkflowResponse(false),
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsSurgeCommandJSON::~UberRequestsSurgeCommandJSON(void)
  {
    if (flagHasVoiceWorkflowResponse)
      {
        storeVoiceWorkflowResponse->remove_reference();
      }
    if (flagHasManualWorkflowResponse)
      {
        storeManualWorkflowResponse->remove_reference();
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

const char *UberRequestsSurgeCommandJSON::getUberRequestsCommandKind(void) const
  {
    return "UberRequestsSurge";
  }

bool UberRequestsSurgeCommandJSON::hasVoiceWorkflowResponse(void) const
  {
    return flagHasVoiceWorkflowResponse;
  }

DynamicResponseJSON * UberRequestsSurgeCommandJSON::getVoiceWorkflowResponse(void)
  {
    assert(flagHasVoiceWorkflowResponse);
    return storeVoiceWorkflowResponse;
  }

const DynamicResponseJSON * UberRequestsSurgeCommandJSON::getVoiceWorkflowResponse(void) const
  {
    assert(flagHasVoiceWorkflowResponse);
    return storeVoiceWorkflowResponse;
  }

bool UberRequestsSurgeCommandJSON::hasManualWorkflowResponse(void) const
  {
    return flagHasManualWorkflowResponse;
  }

DynamicResponseJSON * UberRequestsSurgeCommandJSON::getManualWorkflowResponse(void)
  {
    assert(flagHasManualWorkflowResponse);
    return storeManualWorkflowResponse;
  }

const DynamicResponseJSON * UberRequestsSurgeCommandJSON::getManualWorkflowResponse(void) const
  {
    assert(flagHasManualWorkflowResponse);
    return storeManualWorkflowResponse;
  }

bool UberRequestsSurgeCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberRequestsSurgeCommandJSON::TypeNativeDataJSON * UberRequestsSurgeCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberRequestsSurgeCommandJSON::TypeNativeDataJSON * UberRequestsSurgeCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberRequestsSurgeCommandJSON::TypeNativeDataJSON *UberRequestsSurgeCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberRequestsSurgeCommandJSON *UberRequestsSurgeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsSurgeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsSurgeCommandJSON>, UberRequestsSurgeCommandJSON *, bool> generator("Type UberRequestsSurgeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
