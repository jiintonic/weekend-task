/* file "UberRequestsRedirectCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsRedirectCommandJSON.h"

#include "UberRequestsRedirectCommandJSON.h"


UberRequestsRedirectCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberRequestsRedirectCommandJSON::TypeNativeDataJSON &UberRequestsRedirectCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsRedirectCommandJSON::TypeNativeDataJSON::fromJSONUberDeepLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberDeepLinksJSON *convert_classy = UberDeepLinksJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberDeepLinks(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsRedirectCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasUberDeepLinks(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsRedirectCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasUberDeepLinks)
      {
        storeUberDeepLinks->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestsRedirectCommandJSON::TypeNativeDataJSON::hasUberDeepLinks(void) const
  {
    return flagHasUberDeepLinks;
  }

UberDeepLinksJSON * UberRequestsRedirectCommandJSON::TypeNativeDataJSON::getUberDeepLinks(void)
  {
    assert(flagHasUberDeepLinks);
    return storeUberDeepLinks;
  }

const UberDeepLinksJSON * UberRequestsRedirectCommandJSON::TypeNativeDataJSON::getUberDeepLinks(void) const
  {
    assert(flagHasUberDeepLinks);
    return storeUberDeepLinks;
  }

UberRequestsRedirectCommandJSON::UberRequestsRedirectCommandJSON(const UberRequestsRedirectCommandJSON &)
  {
    assert(false);
  }

UberRequestsRedirectCommandJSON &UberRequestsRedirectCommandJSON::operator=(const UberRequestsRedirectCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsRedirectCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberRequestsRedirectCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsRedirectCommandJSON::UberRequestsRedirectCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsRedirectCommandJSON::~UberRequestsRedirectCommandJSON(void)
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

const char *UberRequestsRedirectCommandJSON::getUberRequestsCommandKind(void) const
  {
    return "UberRequestsRedirect";
  }

bool UberRequestsRedirectCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberRequestsRedirectCommandJSON::TypeNativeDataJSON * UberRequestsRedirectCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberRequestsRedirectCommandJSON::TypeNativeDataJSON * UberRequestsRedirectCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberRequestsRedirectCommandJSON::TypeNativeDataJSON *UberRequestsRedirectCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberRequestsRedirectCommandJSON *UberRequestsRedirectCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsRedirectCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsRedirectCommandJSON>, UberRequestsRedirectCommandJSON *, bool> generator("Type UberRequestsRedirectCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
