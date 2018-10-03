/* file "HomeAutomationWriteUserSettingsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationWriteUserSettingsCommandJSON.h"

#include "HomeAutomationWriteUserSettingsCommandJSON.h"


HomeAutomationWriteUserSettingsCommandJSON::HomeAutomationWriteUserSettingsCommandJSON(const HomeAutomationWriteUserSettingsCommandJSON &)
  {
    assert(false);
  }

HomeAutomationWriteUserSettingsCommandJSON &HomeAutomationWriteUserSettingsCommandJSON::operator=(const HomeAutomationWriteUserSettingsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationWriteUserSettingsCommandJSON::extraHomeAutomationDomainSettingsToJSON(void) const
  {
    JSONValueHandler handler_HomeAutomationDomainSettings;
    storeHomeAutomationDomainSettings->write_as_json(&handler_HomeAutomationDomainSettings);
    handler_HomeAutomationDomainSettings.result->add_reference();
    return handler_HomeAutomationDomainSettings.result;
  }

void HomeAutomationWriteUserSettingsCommandJSON::fromJSONHomeAutomationDomainSettings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDomainSettingsJSON *convert_classy = HomeAutomationDomainSettingsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHomeAutomationDomainSettings(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationWriteUserSettingsCommandJSON::HomeAutomationWriteUserSettingsCommandJSON(void) :
        flagHasHomeAutomationDomainSettings(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationWriteUserSettingsCommandJSON::~HomeAutomationWriteUserSettingsCommandJSON(void)
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

const char *HomeAutomationWriteUserSettingsCommandJSON::getHomeAutomationCommandKind(void) const
  {
    return "HomeAutomationWriteUserSettingsCommand";
  }

bool HomeAutomationWriteUserSettingsCommandJSON::hasHomeAutomationDomainSettings(void) const
  {
    return flagHasHomeAutomationDomainSettings;
  }

HomeAutomationDomainSettingsJSON * HomeAutomationWriteUserSettingsCommandJSON::getHomeAutomationDomainSettings(void)
  {
    assert(flagHasHomeAutomationDomainSettings);
    return storeHomeAutomationDomainSettings;
  }

const HomeAutomationDomainSettingsJSON * HomeAutomationWriteUserSettingsCommandJSON::getHomeAutomationDomainSettings(void) const
  {
    assert(flagHasHomeAutomationDomainSettings);
    return storeHomeAutomationDomainSettings;
  }

HomeAutomationWriteUserSettingsCommandJSON *HomeAutomationWriteUserSettingsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationWriteUserSettingsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationWriteUserSettingsCommandJSON>, HomeAutomationWriteUserSettingsCommandJSON *, bool> generator("Type HomeAutomationWriteUserSettingsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
