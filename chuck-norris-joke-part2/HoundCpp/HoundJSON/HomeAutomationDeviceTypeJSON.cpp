/* file "HomeAutomationDeviceTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationDeviceTypeJSON.h"

#include "HomeAutomationDeviceTypeJSON.h"


HomeAutomationDeviceTypeJSON::TypeValue::TypeValue(void)
  {
  }

HomeAutomationDeviceTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationDeviceTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationDeviceTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationDeviceTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationDeviceTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationDeviceTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationDeviceTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationDeviceTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationDeviceTypeJSON::TypeValueKnownValues HomeAutomationDeviceTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "rPurifier") == 0)
                        return Value_AirPurifier;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "arm") == 0)
                        return Value_Alarm;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "mera") == 0)
                        return Value_Camera;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "othesWasher") == 0)
                        return Value_ClothesWasher;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "oor") == 0)
                return Value_Door;
            break;
        case 'L':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "ght") == 0)
                        return Value_Light;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ck") == 0)
                        return Value_Lock;
                    break;
                default:
                    break;
              }
            break;
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "diaPlayer") == 0)
                        return Value_MediaPlayer;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "sicPlayer") == 0)
                        return Value_MusicPlayer;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "nsor") == 0)
                        return Value_Sensor;
                    break;
                case 'w':
                    if (strcmp(&(chars[2]), "itch") == 0)
                        return Value_Switch;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "hermostat") == 0)
                return Value_Thermostat;
            break;
        case 'V':
            if (strcmp(&(chars[1]), "acuum") == 0)
                return Value_Vacuum;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *HomeAutomationDeviceTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Switch:
            return "Switch";
        case Value_Light:
            return "Light";
        case Value_Thermostat:
            return "Thermostat";
        case Value_AirPurifier:
            return "AirPurifier";
        case Value_Vacuum:
            return "Vacuum";
        case Value_ClothesWasher:
            return "ClothesWasher";
        case Value_Lock:
            return "Lock";
        case Value_Door:
            return "Door";
        case Value_Alarm:
            return "Alarm";
        case Value_Sensor:
            return "Sensor";
        case Value_Camera:
            return "Camera";
        case Value_MusicPlayer:
            return "MusicPlayer";
        case Value_MediaPlayer:
            return "MediaPlayer";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationDeviceTypeJSON::HomeAutomationDeviceTypeJSON(const HomeAutomationDeviceTypeJSON &)
  {
    assert(false);
  }

HomeAutomationDeviceTypeJSON &HomeAutomationDeviceTypeJSON::operator=(const HomeAutomationDeviceTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationDeviceTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of HomeAutomationDeviceTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "rPurifier") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_AirPurifier;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "arm") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Alarm;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "mera") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Camera;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "othesWasher") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_ClothesWasher;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "oor") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Door;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ght") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Light;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ck") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Lock;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "diaPlayer") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_MediaPlayer;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "sicPlayer") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_MusicPlayer;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "nsor") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Sensor;
                            goto open_enum_is_done;
                          }
                    break;
                case 'w':
                    if (strcmp(&(json_string->getData()[2]), "itch") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Switch;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "hermostat") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Thermostat;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            if (strcmp(&(json_string->getData()[1]), "acuum") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Vacuum;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

HomeAutomationDeviceTypeJSON::HomeAutomationDeviceTypeJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationDeviceTypeJSON::HomeAutomationDeviceTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HomeAutomationDeviceTypeJSON::HomeAutomationDeviceTypeJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

HomeAutomationDeviceTypeJSON::HomeAutomationDeviceTypeJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

HomeAutomationDeviceTypeJSON::HomeAutomationDeviceTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

HomeAutomationDeviceTypeJSON::~HomeAutomationDeviceTypeJSON(void)
  {
  }

bool HomeAutomationDeviceTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationDeviceTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HomeAutomationDeviceTypeJSON::TypeValue HomeAutomationDeviceTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *HomeAutomationDeviceTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationDeviceTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

HomeAutomationDeviceTypeJSON *HomeAutomationDeviceTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationDeviceTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceTypeJSON>, HomeAutomationDeviceTypeJSON *, bool> generator("Type HomeAutomationDeviceType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
