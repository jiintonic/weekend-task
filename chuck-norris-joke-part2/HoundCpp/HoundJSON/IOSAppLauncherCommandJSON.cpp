/* file "IOSAppLauncherCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IOSAppLauncherCommandJSON.h"

#include "IOSAppLauncherCommandJSON.h"


IOSAppLauncherCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

IOSAppLauncherCommandJSON::TypeNativeDataJSON &IOSAppLauncherCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void IOSAppLauncherCommandJSON::TypeNativeDataJSON::fromJSONRequestedApp(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AppSpecJSON *convert_classy = AppSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedApp(convert_classy);
    convert_classy->remove_reference();
  }

IOSAppLauncherCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasRequestedApp(false)
  {
    extraIndex = create_string_index();
  }

IOSAppLauncherCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool IOSAppLauncherCommandJSON::TypeNativeDataJSON::hasRequestedApp(void) const
  {
    return flagHasRequestedApp;
  }

AppSpecJSON * IOSAppLauncherCommandJSON::TypeNativeDataJSON::getRequestedApp(void)
  {
    assert(flagHasRequestedApp);
    return storeRequestedApp;
  }

const AppSpecJSON * IOSAppLauncherCommandJSON::TypeNativeDataJSON::getRequestedApp(void) const
  {
    assert(flagHasRequestedApp);
    return storeRequestedApp;
  }

IOSAppLauncherCommandJSON::IOSAppLauncherCommandJSON(const IOSAppLauncherCommandJSON &)
  {
    assert(false);
  }

IOSAppLauncherCommandJSON &IOSAppLauncherCommandJSON::operator=(const IOSAppLauncherCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *IOSAppLauncherCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void IOSAppLauncherCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

IOSAppLauncherCommandJSON::IOSAppLauncherCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

IOSAppLauncherCommandJSON::~IOSAppLauncherCommandJSON(void)
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

const char *IOSAppLauncherCommandJSON::getCommandKind(void) const
  {
    return "IOSAppLauncherCommand";
  }

bool IOSAppLauncherCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

IOSAppLauncherCommandJSON::TypeNativeDataJSON * IOSAppLauncherCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const IOSAppLauncherCommandJSON::TypeNativeDataJSON * IOSAppLauncherCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

IOSAppLauncherCommandJSON::TypeNativeDataJSON *IOSAppLauncherCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
IOSAppLauncherCommandJSON *IOSAppLauncherCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IOSAppLauncherCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IOSAppLauncherCommandJSON>, IOSAppLauncherCommandJSON *, bool> generator("Type IOSAppLauncherCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
