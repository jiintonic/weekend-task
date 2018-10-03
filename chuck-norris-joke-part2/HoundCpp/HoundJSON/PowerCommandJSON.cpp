/* file "PowerCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PowerCommandJSON.h"

#include "PowerCommandJSON.h"


PowerCommandJSON::TypeCommandType PowerCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "irplaneMode") == 0)
                return CommandType_AirplaneMode;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ockScreen") == 0)
                return CommandType_LockScreen;
            break;
        case 'P':
            if (strncmp(&(chars[1]), "ower", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'O':
                        switch ((unsigned char)(chars[6]))
                          {
                            case 'f':
                                if (strcmp(&(chars[7]), "f") == 0)
                                    return CommandType_PowerOff;
                                break;
                            case 'n':
                                if (chars[7] == 0)
                                    return CommandType_PowerOn;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        if (strncmp(&(chars[6]), "avingModeO", 10) == 0)
                          {
                            switch ((unsigned char)(chars[16]))
                              {
                                case 'f':
                                    if (strcmp(&(chars[17]), "f") == 0)
                                        return CommandType_PowerSavingModeOff;
                                    break;
                                case 'n':
                                    if (chars[17] == 0)
                                        return CommandType_PowerSavingModeOn;
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
        case 'R':
            if (strcmp(&(chars[1]), "estart") == 0)
                return CommandType_Restart;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *PowerCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_LockScreen:
            return "LockScreen";
        case CommandType_AirplaneMode:
            return "AirplaneMode";
        case CommandType_PowerSavingModeOn:
            return "PowerSavingModeOn";
        case CommandType_PowerSavingModeOff:
            return "PowerSavingModeOff";
        case CommandType_PowerOff:
            return "PowerOff";
        case CommandType_Restart:
            return "Restart";
        case CommandType_PowerOn:
            return "PowerOn";
        default:
            assert(false);
            return NULL;
      }
  }

PowerCommandJSON::PowerCommandJSON(const PowerCommandJSON &)
  {
    assert(false);
  }

PowerCommandJSON &PowerCommandJSON::operator=(const PowerCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *PowerCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_LockScreen:
            generated_string_CommandType = new JSONStringValue("LockScreen");
            break;
        case CommandType_AirplaneMode:
            generated_string_CommandType = new JSONStringValue("AirplaneMode");
            break;
        case CommandType_PowerSavingModeOn:
            generated_string_CommandType = new JSONStringValue("PowerSavingModeOn");
            break;
        case CommandType_PowerSavingModeOff:
            generated_string_CommandType = new JSONStringValue("PowerSavingModeOff");
            break;
        case CommandType_PowerOff:
            generated_string_CommandType = new JSONStringValue("PowerOff");
            break;
        case CommandType_Restart:
            generated_string_CommandType = new JSONStringValue("Restart");
            break;
        case CommandType_PowerOn:
            generated_string_CommandType = new JSONStringValue("PowerOn");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void PowerCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of PowerCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "irplaneMode") == 0)
                  {
                    the_enum = CommandType_AirplaneMode;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ockScreen") == 0)
                  {
                    the_enum = CommandType_LockScreen;
                    goto enum_is_done;
                  }
            break;
        case 'P':
            if (strncmp(&(json_string->getData()[1]), "ower", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'O':
                        switch ((unsigned char)(json_string->getData()[6]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[7]), "f") == 0)
                                      {
                                        the_enum = CommandType_PowerOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[7] == 0)
                                      {
                                        the_enum = CommandType_PowerOn;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        if (strncmp(&(json_string->getData()[6]), "avingModeO", 10) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[16]))
                              {
                                case 'f':
                                    if (strcmp(&(json_string->getData()[17]), "f") == 0)
                                          {
                                            the_enum = CommandType_PowerSavingModeOff;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'n':
                                    if (json_string->getData()[17] == 0)
                                          {
                                            the_enum = CommandType_PowerSavingModeOn;
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
              }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "estart") == 0)
                  {
                    the_enum = CommandType_Restart;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of PowerCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

PowerCommandJSON::PowerCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

PowerCommandJSON::~PowerCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *PowerCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "PowerCommand";
  }

bool PowerCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

PowerCommandJSON::TypeCommandType PowerCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const PowerCommandJSON::TypeCommandType PowerCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *PowerCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string PowerCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

PowerCommandJSON *PowerCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PowerCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PowerCommandJSON>, PowerCommandJSON *, bool> generator("Type PowerCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
