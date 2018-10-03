/* file "HomeAutomationQueryCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationQueryCommandJSON.h"

#include "HomeAutomationQueryCommandJSON.h"


HomeAutomationQueryCommandJSON::HomeAutomationQueryCommandJSON(const HomeAutomationQueryCommandJSON &)
  {
    assert(false);
  }

HomeAutomationQueryCommandJSON &HomeAutomationQueryCommandJSON::operator=(const HomeAutomationQueryCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationQueryCommandJSON::extraDeviceSpecifierToJSON(void) const
  {
    JSONValueHandler handler_DeviceSpecifier;
    storeDeviceSpecifier->write_as_json(&handler_DeviceSpecifier);
    handler_DeviceSpecifier.result->add_reference();
    return handler_DeviceSpecifier.result;
  }

JSONValue *HomeAutomationQueryCommandJSON::extraHintToJSON(void) const
  {
    JSONValueHandler handler_Hint;
    storeHint->write_as_json(&handler_Hint);
    handler_Hint.result->add_reference();
    return handler_Hint.result;
  }

JSONValue *HomeAutomationQueryCommandJSON::extraQueryResultToJSON(void) const
  {
    JSONValueHandler handler_QueryResult;
    storeQueryResult->write_as_json(&handler_QueryResult);
    handler_QueryResult.result->add_reference();
    return handler_QueryResult.result;
  }

void HomeAutomationQueryCommandJSON::fromJSONDeviceSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceSpecifierJSON *convert_classy = HomeAutomationDeviceSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeviceSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationQueryCommandJSON::fromJSONHint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationQueryHintJSON *convert_classy = HomeAutomationQueryHintJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHint(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationQueryCommandJSON::fromJSONQueryResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationActionResultJSON *convert_classy = HomeAutomationActionResultJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQueryResult(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationQueryCommandJSON::HomeAutomationQueryCommandJSON(void) :
        flagHasDeviceSpecifier(false),
        flagHasHint(false),
        flagHasQueryResult(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationQueryCommandJSON::~HomeAutomationQueryCommandJSON(void)
  {
    if (flagHasDeviceSpecifier)
      {
        storeDeviceSpecifier->remove_reference();
      }
    if (flagHasHint)
      {
        storeHint->remove_reference();
      }
    if (flagHasQueryResult)
      {
        storeQueryResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationQueryCommandJSON::getCommandKind(void) const
  {
    return "HomeAutomationQueryCommand";
  }

bool HomeAutomationQueryCommandJSON::hasDeviceSpecifier(void) const
  {
    return flagHasDeviceSpecifier;
  }

HomeAutomationDeviceSpecifierJSON * HomeAutomationQueryCommandJSON::getDeviceSpecifier(void)
  {
    assert(flagHasDeviceSpecifier);
    return storeDeviceSpecifier;
  }

const HomeAutomationDeviceSpecifierJSON * HomeAutomationQueryCommandJSON::getDeviceSpecifier(void) const
  {
    assert(flagHasDeviceSpecifier);
    return storeDeviceSpecifier;
  }

bool HomeAutomationQueryCommandJSON::hasHint(void) const
  {
    return flagHasHint;
  }

HomeAutomationQueryHintJSON * HomeAutomationQueryCommandJSON::getHint(void)
  {
    assert(flagHasHint);
    return storeHint;
  }

const HomeAutomationQueryHintJSON * HomeAutomationQueryCommandJSON::getHint(void) const
  {
    assert(flagHasHint);
    return storeHint;
  }

bool HomeAutomationQueryCommandJSON::hasQueryResult(void) const
  {
    return flagHasQueryResult;
  }

HomeAutomationActionResultJSON * HomeAutomationQueryCommandJSON::getQueryResult(void)
  {
    assert(flagHasQueryResult);
    return storeQueryResult;
  }

const HomeAutomationActionResultJSON * HomeAutomationQueryCommandJSON::getQueryResult(void) const
  {
    assert(flagHasQueryResult);
    return storeQueryResult;
  }

HomeAutomationQueryCommandJSON *HomeAutomationQueryCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationQueryCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationQueryCommandJSON>, HomeAutomationQueryCommandJSON *, bool> generator("Type HomeAutomationQueryCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
