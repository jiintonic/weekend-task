/* file "HomeAutomationControlCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationControlCommandJSON.h"

#include "HomeAutomationControlCommandJSON.h"
#include "HomeAutomationSetBrightnessCommandJSON.h"
#include "HomeAutomationSetBrightnessDeltaCommandJSON.h"
#include "HomeAutomationSetColorCommandJSON.h"
#include "HomeAutomationSetTemperatureCommandJSON.h"
#include "HomeAutomationSetTemperatureDeltaCommandJSON.h"
#include "HomeAutomationSetWindSpeedCommandJSON.h"
#include "HomeAutomationSetWindSpeedDeltaCommandJSON.h"
#include "HomeAutomationTurboControlCommandJSON.h"
#include "HomeAutomationBasicControlCommandJSON.h"


HomeAutomationControlCommandJSON::HomeAutomationControlCommandJSON(const HomeAutomationControlCommandJSON &)
  {
    assert(false);
  }

HomeAutomationControlCommandJSON &HomeAutomationControlCommandJSON::operator=(const HomeAutomationControlCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationControlCommandJSON::extraOperationToJSON(void) const
  {
    JSONValueHandler handler_Operation;
    storeOperation->write_as_json(&handler_Operation);
    handler_Operation.result->add_reference();
    return handler_Operation.result;
  }

JSONValue *HomeAutomationControlCommandJSON::extraDeviceSpecifierToJSON(void) const
  {
    JSONValueHandler handler_DeviceSpecifier;
    storeDeviceSpecifier->write_as_json(&handler_DeviceSpecifier);
    handler_DeviceSpecifier.result->add_reference();
    return handler_DeviceSpecifier.result;
  }

JSONValue *HomeAutomationControlCommandJSON::extraControlResultToJSON(void) const
  {
    JSONValueHandler handler_ControlResult;
    storeControlResult->write_as_json(&handler_ControlResult);
    handler_ControlResult.result->add_reference();
    return handler_ControlResult.result;
  }

void HomeAutomationControlCommandJSON::fromJSONOperation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationOperationJSON *convert_classy = HomeAutomationOperationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOperation(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationControlCommandJSON::fromJSONDeviceSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceSpecifierJSON *convert_classy = HomeAutomationDeviceSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeviceSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationControlCommandJSON::fromJSONControlResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationActionResultJSON *convert_classy = HomeAutomationActionResultJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setControlResult(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationControlCommandJSON::HomeAutomationControlCommandJSON(void) :
        flagHasOperation(false),
        flagHasDeviceSpecifier(false),
        flagHasControlResult(false)
  {
  }

HomeAutomationControlCommandJSON::~HomeAutomationControlCommandJSON(void)
  {
    if (flagHasOperation)
      {
        storeOperation->remove_reference();
      }
    if (flagHasDeviceSpecifier)
      {
        storeDeviceSpecifier->remove_reference();
      }
    if (flagHasControlResult)
      {
        storeControlResult->remove_reference();
      }
  }

const char *HomeAutomationControlCommandJSON::getCommandKind(void) const
  {
    return "HomeAutomationControlCommand";
  }

bool HomeAutomationControlCommandJSON::hasOperation(void) const
  {
    return flagHasOperation;
  }

HomeAutomationOperationJSON * HomeAutomationControlCommandJSON::getOperation(void)
  {
    assert(flagHasOperation);
    return storeOperation;
  }

const HomeAutomationOperationJSON * HomeAutomationControlCommandJSON::getOperation(void) const
  {
    assert(flagHasOperation);
    return storeOperation;
  }

HomeAutomationOperationJSON::TypeValue HomeAutomationControlCommandJSON::getOperationValue(void)
  {
    return getOperation()->getValue();
  }

const HomeAutomationOperationJSON::TypeValue HomeAutomationControlCommandJSON::getOperationValue(void) const
  {
    return getOperation()->getValue();
  }

const char *HomeAutomationControlCommandJSON::getOperationAsChars(void) const
  {
    return getOperation()->getValueAsChars();
  }

std::string HomeAutomationControlCommandJSON::getOperationAsString(void) const
  {
    return getOperation()->getValueAsString();
  }

bool HomeAutomationControlCommandJSON::hasDeviceSpecifier(void) const
  {
    return flagHasDeviceSpecifier;
  }

HomeAutomationDeviceSpecifierJSON * HomeAutomationControlCommandJSON::getDeviceSpecifier(void)
  {
    assert(flagHasDeviceSpecifier);
    return storeDeviceSpecifier;
  }

const HomeAutomationDeviceSpecifierJSON * HomeAutomationControlCommandJSON::getDeviceSpecifier(void) const
  {
    assert(flagHasDeviceSpecifier);
    return storeDeviceSpecifier;
  }

bool HomeAutomationControlCommandJSON::hasControlResult(void) const
  {
    return flagHasControlResult;
  }

HomeAutomationActionResultJSON * HomeAutomationControlCommandJSON::getControlResult(void)
  {
    assert(flagHasControlResult);
    return storeControlResult;
  }

const HomeAutomationActionResultJSON * HomeAutomationControlCommandJSON::getControlResult(void) const
  {
    assert(flagHasControlResult);
    return storeControlResult;
  }

HomeAutomationControlCommandJSON *HomeAutomationControlCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "HomeAutomation", 14) == 0)
      {
        switch ((unsigned char)(key[14]))
          {
            case 'B':
                if (strcmp(&(key[15]), "asicControlCommand") == 0)
                    return new HomeAutomationBasicControlCommandJSON();
                break;
            case 'S':
                if (strncmp(&(key[15]), "et", 2) == 0)
                  {
                    switch ((unsigned char)(key[17]))
                      {
                        case 'B':
                            if (strncmp(&(key[18]), "rightness", 9) == 0)
                              {
                                switch ((unsigned char)(key[27]))
                                  {
                                    case 'C':
                                        if (strcmp(&(key[28]), "ommand") == 0)
                                            return new HomeAutomationSetBrightnessCommandJSON();
                                        break;
                                    case 'D':
                                        if (strcmp(&(key[28]), "eltaCommand") == 0)
                                            return new HomeAutomationSetBrightnessDeltaCommandJSON();
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'C':
                            if (strcmp(&(key[18]), "olorCommand") == 0)
                                return new HomeAutomationSetColorCommandJSON();
                            break;
                        case 'T':
                            if (strncmp(&(key[18]), "emperature", 10) == 0)
                              {
                                switch ((unsigned char)(key[28]))
                                  {
                                    case 'C':
                                        if (strcmp(&(key[29]), "ommand") == 0)
                                            return new HomeAutomationSetTemperatureCommandJSON();
                                        break;
                                    case 'D':
                                        if (strcmp(&(key[29]), "eltaCommand") == 0)
                                            return new HomeAutomationSetTemperatureDeltaCommandJSON();
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'W':
                            if (strncmp(&(key[18]), "indSpeed", 8) == 0)
                              {
                                switch ((unsigned char)(key[26]))
                                  {
                                    case 'C':
                                        if (strcmp(&(key[27]), "ommand") == 0)
                                            return new HomeAutomationSetWindSpeedCommandJSON();
                                        break;
                                    case 'D':
                                        if (strcmp(&(key[27]), "eltaCommand") == 0)
                                            return new HomeAutomationSetWindSpeedDeltaCommandJSON();
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(key[15]), "urboControlCommand") == 0)
                    return new HomeAutomationTurboControlCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericHomeAutomationControlCommandJSON : public HomeAutomationControlCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericHomeAutomationControlCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericHomeAutomationControlCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getHomeAutomationControlCommandKind(void) const  { return key.c_str(); }
        size_t extraHomeAutomationControlCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraHomeAutomationControlCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraHomeAutomationControlCommandLookup(key);
            if (old_field == NULL)
              {
                extraHomeAutomationControlCommandAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(), key) == 0)
                      {
                        extraValues[num] = new_component;
                        break;
                      }
                  }
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
                old_field->remove_reference();
                old_field->remove_reference();
              }
          }

        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            size_t extra_count = extraKeys.size();
            assert(extra_count == extraValues.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                handler->start_pair(extraKeys[extra_num].c_str());
                extraValues[extra_num]->write(handler);
              }
            handler->finish_object();
          }
      };
    return new GenericHomeAutomationControlCommandJSON(key);
  }
HomeAutomationControlCommandJSON *HomeAutomationControlCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationControlCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationControlCommandJSON>, HomeAutomationControlCommandJSON *, bool> generator("Type HomeAutomationControlCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
