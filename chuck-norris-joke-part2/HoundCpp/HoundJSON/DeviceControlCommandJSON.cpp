/* file "DeviceControlCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DeviceControlCommandJSON.h"

#include "DeviceControlCommandJSON.h"
#include "WifiCommandJSON.h"
#include "BluetoothCommandJSON.h"
#include "FlashlightCommandJSON.h"
#include "BrightnessCommandJSON.h"
#include "CellularDataCommandJSON.h"
#include "VolumeCommandJSON.h"
#include "RoamingCommandJSON.h"
#include "BatteryCommandJSON.h"
#include "RingerCommandJSON.h"
#include "PowerCommandJSON.h"
#include "LocationCommandJSON.h"
#include "LocationHelpCommandJSON.h"
#include "AutoRotateCommandJSON.h"
#include "AutoRotateHelpCommandJSON.h"
#include "VoiceSynthesisCommandJSON.h"
#include "CameraCommandJSON.h"
#include "MapControlCommandJSON.h"


DeviceControlCommandJSON::DeviceControlCommandJSON(const DeviceControlCommandJSON &)
  {
    assert(false);
  }

DeviceControlCommandJSON &DeviceControlCommandJSON::operator=(const DeviceControlCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

DeviceControlCommandJSON::DeviceControlCommandJSON(void)
  {
  }

DeviceControlCommandJSON::~DeviceControlCommandJSON(void)
  {
  }

const char *DeviceControlCommandJSON::getCommandKind(void) const
  {
    return "DeviceControlCommand";
  }

DeviceControlCommandJSON *DeviceControlCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            if (strncmp(&(key[1]), "utoRotate", 9) == 0)
              {
                switch ((unsigned char)(key[10]))
                  {
                    case 'C':
                        if (strcmp(&(key[11]), "ommand") == 0)
                            return new AutoRotateCommandJSON();
                        break;
                    case 'H':
                        if (strcmp(&(key[11]), "elpCommand") == 0)
                            return new AutoRotateHelpCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'B':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "tteryCommand") == 0)
                        return new BatteryCommandJSON();
                    break;
                case 'l':
                    if (strcmp(&(key[2]), "uetoothCommand") == 0)
                        return new BluetoothCommandJSON();
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "ightnessCommand") == 0)
                        return new BrightnessCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "meraCommand") == 0)
                        return new CameraCommandJSON();
                    break;
                case 'e':
                    if (strcmp(&(key[2]), "llularDataCommand") == 0)
                        return new CellularDataCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            if (strcmp(&(key[1]), "lashlightCommand") == 0)
                return new FlashlightCommandJSON();
            break;
        case 'L':
            if (strncmp(&(key[1]), "ocation", 7) == 0)
              {
                switch ((unsigned char)(key[8]))
                  {
                    case 'C':
                        if (strcmp(&(key[9]), "ommand") == 0)
                            return new LocationCommandJSON();
                        break;
                    case 'H':
                        if (strcmp(&(key[9]), "elpCommand") == 0)
                            return new LocationHelpCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strcmp(&(key[1]), "apCommand") == 0)
                return new MapControlCommandJSON();
            break;
        case 'P':
            if (strcmp(&(key[1]), "owerCommand") == 0)
                return new PowerCommandJSON();
            break;
        case 'R':
            switch ((unsigned char)(key[1]))
              {
                case 'i':
                    if (strcmp(&(key[2]), "ngerCommand") == 0)
                        return new RingerCommandJSON();
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "amingCommand") == 0)
                        return new RoamingCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'V':
            if (strncmp(&(key[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'i':
                        if (strcmp(&(key[3]), "ceSynthesisCommand") == 0)
                            return new VoiceSynthesisCommandJSON();
                        break;
                    case 'l':
                        if (strcmp(&(key[3]), "umeCommand") == 0)
                            return new VolumeCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'W':
            if (strcmp(&(key[1]), "ifiCommand") == 0)
                return new WifiCommandJSON();
            break;
        default:
            break;
      }

    class GenericDeviceControlCommandJSON : public DeviceControlCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericDeviceControlCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericDeviceControlCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getDeviceControlCommandKind(void) const  { return key.c_str(); }
        size_t extraDeviceControlCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraDeviceControlCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraDeviceControlCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraDeviceControlCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraDeviceControlCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraDeviceControlCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraDeviceControlCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraDeviceControlCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraDeviceControlCommandLookup(key);
            if (old_field == NULL)
              {
                extraDeviceControlCommandAppendPair(key, new_component);
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
    return new GenericDeviceControlCommandJSON(key);
  }
DeviceControlCommandJSON *DeviceControlCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DeviceControlCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DeviceControlCommandJSON>, DeviceControlCommandJSON *, bool> generator("Type DeviceControlCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
