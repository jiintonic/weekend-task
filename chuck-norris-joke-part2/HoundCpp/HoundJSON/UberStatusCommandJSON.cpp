/* file "UberStatusCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberStatusCommandJSON.h"

#include "UberStatusCommandJSON.h"


UberStatusCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberStatusCommandJSON::TypeNativeDataJSON &UberStatusCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberStatusCommandJSON::TypeNativeDataJSON::fromJSONUberRequest(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeRequestJSON *convert_classy = UberCompositeRequestJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequest(convert_classy);
    convert_classy->remove_reference();
  }

UberStatusCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberRequest(false)
  {
    extraIndex = create_string_index();
  }

UberStatusCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasUberRequest)
      {
        storeUberRequest->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberStatusCommandJSON::TypeNativeDataJSON::hasUberRequest(void) const
  {
    return flagHasUberRequest;
  }

UberCompositeRequestJSON * UberStatusCommandJSON::TypeNativeDataJSON::getUberRequest(void)
  {
    assert(flagHasUberRequest);
    return storeUberRequest;
  }

const UberCompositeRequestJSON * UberStatusCommandJSON::TypeNativeDataJSON::getUberRequest(void) const
  {
    assert(flagHasUberRequest);
    return storeUberRequest;
  }

UberStatusCommandJSON::UberStatusCommandJSON(const UberStatusCommandJSON &)
  {
    assert(false);
  }

UberStatusCommandJSON &UberStatusCommandJSON::operator=(const UberStatusCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberStatusCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberStatusCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberStatusCommandJSON::UberStatusCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberStatusCommandJSON::~UberStatusCommandJSON(void)
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

const char *UberStatusCommandJSON::getUberCommandKind(void) const
  {
    return "UberStatus";
  }

bool UberStatusCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberStatusCommandJSON::TypeNativeDataJSON * UberStatusCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberStatusCommandJSON::TypeNativeDataJSON * UberStatusCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberStatusCommandJSON::TypeNativeDataJSON *UberStatusCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberStatusCommandJSON *UberStatusCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberStatusCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberStatusCommandJSON>, UberStatusCommandJSON *, bool> generator("Type UberStatusCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
