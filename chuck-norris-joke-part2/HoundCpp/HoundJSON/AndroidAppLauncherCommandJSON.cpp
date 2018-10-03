/* file "AndroidAppLauncherCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AndroidAppLauncherCommandJSON.h"

#include "AndroidAppLauncherCommandJSON.h"


AndroidAppLauncherCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

AndroidAppLauncherCommandJSON::TypeNativeDataJSON &AndroidAppLauncherCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AndroidAppLauncherCommandJSON::TypeNativeDataJSON::fromJSONRequestedApp(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AppSpecJSON *convert_classy = AppSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedApp(convert_classy);
    convert_classy->remove_reference();
  }

AndroidAppLauncherCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasRequestedApp(false)
  {
    extraIndex = create_string_index();
  }

AndroidAppLauncherCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasRequestedApp)
      {
        storeRequestedApp->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AndroidAppLauncherCommandJSON::TypeNativeDataJSON::hasRequestedApp(void) const
  {
    return flagHasRequestedApp;
  }

AppSpecJSON * AndroidAppLauncherCommandJSON::TypeNativeDataJSON::getRequestedApp(void)
  {
    assert(flagHasRequestedApp);
    return storeRequestedApp;
  }

const AppSpecJSON * AndroidAppLauncherCommandJSON::TypeNativeDataJSON::getRequestedApp(void) const
  {
    assert(flagHasRequestedApp);
    return storeRequestedApp;
  }

AndroidAppLauncherCommandJSON::AndroidAppLauncherCommandJSON(const AndroidAppLauncherCommandJSON &)
  {
    assert(false);
  }

AndroidAppLauncherCommandJSON &AndroidAppLauncherCommandJSON::operator=(const AndroidAppLauncherCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AndroidAppLauncherCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void AndroidAppLauncherCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

AndroidAppLauncherCommandJSON::AndroidAppLauncherCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

AndroidAppLauncherCommandJSON::~AndroidAppLauncherCommandJSON(void)
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

const char *AndroidAppLauncherCommandJSON::getCommandKind(void) const
  {
    return "AndroidAppLauncherCommand";
  }

bool AndroidAppLauncherCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

AndroidAppLauncherCommandJSON::TypeNativeDataJSON * AndroidAppLauncherCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const AndroidAppLauncherCommandJSON::TypeNativeDataJSON * AndroidAppLauncherCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

AndroidAppLauncherCommandJSON::TypeNativeDataJSON *AndroidAppLauncherCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
AndroidAppLauncherCommandJSON *AndroidAppLauncherCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AndroidAppLauncherCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AndroidAppLauncherCommandJSON>, AndroidAppLauncherCommandJSON *, bool> generator("Type AndroidAppLauncherCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
