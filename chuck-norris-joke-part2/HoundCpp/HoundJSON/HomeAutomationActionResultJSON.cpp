/* file "HomeAutomationActionResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationActionResultJSON.h"

#include "HomeAutomationActionResultJSON.h"


HomeAutomationActionResultJSON::HomeAutomationActionResultJSON(const HomeAutomationActionResultJSON &)
  {
    assert(false);
  }

HomeAutomationActionResultJSON &HomeAutomationActionResultJSON::operator=(const HomeAutomationActionResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResultJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationActionResultTypeJSON *convert_classy = HomeAutomationActionResultTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResult(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResultJSON::fromJSONServerActionSucceeded(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationActionResponseListJSON *convert_classy = HomeAutomationActionResponseListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setServerActionSucceeded(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResultJSON::fromJSONServerActionFailed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationActionResponseListJSON *convert_classy = HomeAutomationActionResponseListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setServerActionFailed(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationActionResultJSON::HomeAutomationActionResultJSON(void) :
        flagHasResult(false),
        flagHasServerActionSucceeded(false),
        flagHasServerActionFailed(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationActionResultJSON::~HomeAutomationActionResultJSON(void)
  {
    if (flagHasResult)
      {
        storeResult->remove_reference();
      }
    if (flagHasServerActionSucceeded)
      {
        storeServerActionSucceeded->remove_reference();
      }
    if (flagHasServerActionFailed)
      {
        storeServerActionFailed->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationActionResultJSON::hasResult(void) const
  {
    return flagHasResult;
  }

HomeAutomationActionResultTypeJSON * HomeAutomationActionResultJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const HomeAutomationActionResultTypeJSON * HomeAutomationActionResultJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

HomeAutomationActionResultTypeJSON::TypeValue HomeAutomationActionResultJSON::getResultValue(void)
  {
    return getResult()->getValue();
  }

const HomeAutomationActionResultTypeJSON::TypeValue HomeAutomationActionResultJSON::getResultValue(void) const
  {
    return getResult()->getValue();
  }

const char *HomeAutomationActionResultJSON::getResultAsChars(void) const
  {
    return getResult()->getValueAsChars();
  }

std::string HomeAutomationActionResultJSON::getResultAsString(void) const
  {
    return getResult()->getValueAsString();
  }

bool HomeAutomationActionResultJSON::hasServerActionSucceeded(void) const
  {
    return flagHasServerActionSucceeded;
  }

HomeAutomationActionResponseListJSON * HomeAutomationActionResultJSON::getServerActionSucceeded(void)
  {
    assert(flagHasServerActionSucceeded);
    return storeServerActionSucceeded;
  }

const HomeAutomationActionResponseListJSON * HomeAutomationActionResultJSON::getServerActionSucceeded(void) const
  {
    assert(flagHasServerActionSucceeded);
    return storeServerActionSucceeded;
  }

bool HomeAutomationActionResultJSON::hasServerActionFailed(void) const
  {
    return flagHasServerActionFailed;
  }

HomeAutomationActionResponseListJSON * HomeAutomationActionResultJSON::getServerActionFailed(void)
  {
    assert(flagHasServerActionFailed);
    return storeServerActionFailed;
  }

const HomeAutomationActionResponseListJSON * HomeAutomationActionResultJSON::getServerActionFailed(void) const
  {
    assert(flagHasServerActionFailed);
    return storeServerActionFailed;
  }

HomeAutomationActionResultJSON *HomeAutomationActionResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationActionResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResultJSON>, HomeAutomationActionResultJSON *, bool> generator("Type HomeAutomationActionResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
