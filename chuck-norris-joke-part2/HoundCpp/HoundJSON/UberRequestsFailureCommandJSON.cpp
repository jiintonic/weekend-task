/* file "UberRequestsFailureCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsFailureCommandJSON.h"

#include "UberRequestsFailureCommandJSON.h"


UberRequestsFailureCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberRequestsFailureCommandJSON::TypeNativeDataJSON &UberRequestsFailureCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsFailureCommandJSON::TypeNativeDataJSON::fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestsSpecJSON *convert_classy = UberRequestsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequestsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsFailureCommandJSON::TypeNativeDataJSON::fromJSONUberProduct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductJSON *convert_classy = UberCompositeProductJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProduct(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsFailureCommandJSON::TypeNativeDataJSON::fromJSONErrors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestFatalErrorsJSON *convert_classy = UberRequestFatalErrorsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setErrors(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsFailureCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberRequestsSpec(false),
        flagHasUberProduct(false),
        flagHasErrors(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsFailureCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasUberRequestsSpec)
      {
        storeUberRequestsSpec->remove_reference();
      }
    if (flagHasUberProduct)
      {
        storeUberProduct->remove_reference();
      }
    if (flagHasErrors)
      {
        storeErrors->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestsFailureCommandJSON::TypeNativeDataJSON::hasUberRequestsSpec(void) const
  {
    return flagHasUberRequestsSpec;
  }

UberRequestsSpecJSON * UberRequestsFailureCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void)
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

const UberRequestsSpecJSON * UberRequestsFailureCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void) const
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

bool UberRequestsFailureCommandJSON::TypeNativeDataJSON::hasUberProduct(void) const
  {
    return flagHasUberProduct;
  }

UberCompositeProductJSON * UberRequestsFailureCommandJSON::TypeNativeDataJSON::getUberProduct(void)
  {
    assert(flagHasUberProduct);
    return storeUberProduct;
  }

const UberCompositeProductJSON * UberRequestsFailureCommandJSON::TypeNativeDataJSON::getUberProduct(void) const
  {
    assert(flagHasUberProduct);
    return storeUberProduct;
  }

bool UberRequestsFailureCommandJSON::TypeNativeDataJSON::hasErrors(void) const
  {
    return flagHasErrors;
  }

UberRequestFatalErrorsJSON * UberRequestsFailureCommandJSON::TypeNativeDataJSON::getErrors(void)
  {
    assert(flagHasErrors);
    return storeErrors;
  }

const UberRequestFatalErrorsJSON * UberRequestsFailureCommandJSON::TypeNativeDataJSON::getErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors;
  }

UberRequestsFailureCommandJSON::UberRequestsFailureCommandJSON(const UberRequestsFailureCommandJSON &)
  {
    assert(false);
  }

UberRequestsFailureCommandJSON &UberRequestsFailureCommandJSON::operator=(const UberRequestsFailureCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsFailureCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberRequestsFailureCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsFailureCommandJSON::UberRequestsFailureCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsFailureCommandJSON::~UberRequestsFailureCommandJSON(void)
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

const char *UberRequestsFailureCommandJSON::getUberRequestsCommandKind(void) const
  {
    return "UberRequestsFailure";
  }

bool UberRequestsFailureCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberRequestsFailureCommandJSON::TypeNativeDataJSON * UberRequestsFailureCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberRequestsFailureCommandJSON::TypeNativeDataJSON * UberRequestsFailureCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberRequestsFailureCommandJSON::TypeNativeDataJSON *UberRequestsFailureCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberRequestsFailureCommandJSON *UberRequestsFailureCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsFailureCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsFailureCommandJSON>, UberRequestsFailureCommandJSON *, bool> generator("Type UberRequestsFailureCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
