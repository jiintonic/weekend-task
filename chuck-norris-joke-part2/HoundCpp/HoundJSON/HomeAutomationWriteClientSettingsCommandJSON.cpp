/* file "HomeAutomationWriteClientSettingsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationWriteClientSettingsCommandJSON.h"

#include "HomeAutomationWriteClientSettingsCommandJSON.h"


HomeAutomationWriteClientSettingsCommandJSON::HomeAutomationWriteClientSettingsCommandJSON(const HomeAutomationWriteClientSettingsCommandJSON &)
  {
    assert(false);
  }

HomeAutomationWriteClientSettingsCommandJSON &HomeAutomationWriteClientSettingsCommandJSON::operator=(const HomeAutomationWriteClientSettingsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationWriteClientSettingsCommandJSON::extraHomeAutomationDomainSettingsToJSON(void) const
  {
    JSONValueHandler handler_HomeAutomationDomainSettings;
    storeHomeAutomationDomainSettings->write_as_json(&handler_HomeAutomationDomainSettings);
    handler_HomeAutomationDomainSettings.result->add_reference();
    return handler_HomeAutomationDomainSettings.result;
  }

void HomeAutomationWriteClientSettingsCommandJSON::fromJSONHomeAutomationDomainSettings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDomainSettingsJSON *convert_classy = HomeAutomationDomainSettingsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHomeAutomationDomainSettings(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationWriteClientSettingsCommandJSON::HomeAutomationWriteClientSettingsCommandJSON(void) :
        flagHasHomeAutomationDomainSettings(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationWriteClientSettingsCommandJSON::~HomeAutomationWriteClientSettingsCommandJSON(void)
  {
    if (flagHasHomeAutomationDomainSettings)
      {
        storeHomeAutomationDomainSettings->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationWriteClientSettingsCommandJSON::getHomeAutomationCommandKind(void) const
  {
    return "HomeAutomationWriteClientSettingsCommand";
  }

bool HomeAutomationWriteClientSettingsCommandJSON::hasHomeAutomationDomainSettings(void) const
  {
    return flagHasHomeAutomationDomainSettings;
  }

HomeAutomationDomainSettingsJSON * HomeAutomationWriteClientSettingsCommandJSON::getHomeAutomationDomainSettings(void)
  {
    assert(flagHasHomeAutomationDomainSettings);
    return storeHomeAutomationDomainSettings;
  }

const HomeAutomationDomainSettingsJSON * HomeAutomationWriteClientSettingsCommandJSON::getHomeAutomationDomainSettings(void) const
  {
    assert(flagHasHomeAutomationDomainSettings);
    return storeHomeAutomationDomainSettings;
  }

HomeAutomationWriteClientSettingsCommandJSON *HomeAutomationWriteClientSettingsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationWriteClientSettingsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationWriteClientSettingsCommandJSON>, HomeAutomationWriteClientSettingsCommandJSON *, bool> generator("Type HomeAutomationWriteClientSettingsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
