/* file "BluetoothCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BluetoothCommandJSON.h"

#include "BluetoothCommandJSON.h"


BluetoothCommandJSON::TypeCommandType BluetoothCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckBluetoothState") == 0)
                return CommandType_CheckBluetoothState;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "howBluetoothDevices") == 0)
                return CommandType_ShowBluetoothDevices;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "ggleBluetoothState") == 0)
                        return CommandType_ToggleBluetoothState;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "rnBluetoothO", 12) == 0)
                      {
                        switch ((unsigned char)(chars[14]))
                          {
                            case 'f':
                                if (strcmp(&(chars[15]), "f") == 0)
                                    return CommandType_TurnBluetoothOff;
                                break;
                            case 'n':
                                if (chars[15] == 0)
                                    return CommandType_TurnBluetoothOn;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *BluetoothCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnBluetoothOn:
            return "TurnBluetoothOn";
        case CommandType_TurnBluetoothOff:
            return "TurnBluetoothOff";
        case CommandType_CheckBluetoothState:
            return "CheckBluetoothState";
        case CommandType_ToggleBluetoothState:
            return "ToggleBluetoothState";
        case CommandType_ShowBluetoothDevices:
            return "ShowBluetoothDevices";
        default:
            assert(false);
            return NULL;
      }
  }

BluetoothCommandJSON::BluetoothCommandJSON(const BluetoothCommandJSON &)
  {
    assert(false);
  }

BluetoothCommandJSON &BluetoothCommandJSON::operator=(const BluetoothCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BluetoothCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnBluetoothOn:
            generated_string_CommandType = new JSONStringValue("TurnBluetoothOn");
            break;
        case CommandType_TurnBluetoothOff:
            generated_string_CommandType = new JSONStringValue("TurnBluetoothOff");
            break;
        case CommandType_CheckBluetoothState:
            generated_string_CommandType = new JSONStringValue("CheckBluetoothState");
            break;
        case CommandType_ToggleBluetoothState:
            generated_string_CommandType = new JSONStringValue("ToggleBluetoothState");
            break;
        case CommandType_ShowBluetoothDevices:
            generated_string_CommandType = new JSONStringValue("ShowBluetoothDevices");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void BluetoothCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of BluetoothCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckBluetoothState") == 0)
                  {
                    the_enum = CommandType_CheckBluetoothState;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "howBluetoothDevices") == 0)
                  {
                    the_enum = CommandType_ShowBluetoothDevices;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ggleBluetoothState") == 0)
                          {
                            the_enum = CommandType_ToggleBluetoothState;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "rnBluetoothO", 12) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[14]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[15]), "f") == 0)
                                      {
                                        the_enum = CommandType_TurnBluetoothOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[15] == 0)
                                      {
                                        the_enum = CommandType_TurnBluetoothOn;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of BluetoothCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

BluetoothCommandJSON::BluetoothCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

BluetoothCommandJSON::~BluetoothCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BluetoothCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "BluetoothCommand";
  }

bool BluetoothCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

BluetoothCommandJSON::TypeCommandType BluetoothCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const BluetoothCommandJSON::TypeCommandType BluetoothCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *BluetoothCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string BluetoothCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

BluetoothCommandJSON *BluetoothCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BluetoothCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BluetoothCommandJSON>, BluetoothCommandJSON *, bool> generator("Type BluetoothCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
