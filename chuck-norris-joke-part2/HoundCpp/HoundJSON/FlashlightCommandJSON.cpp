/* file "FlashlightCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlashlightCommandJSON.h"

#include "FlashlightCommandJSON.h"


FlashlightCommandJSON::TypeCommandType FlashlightCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckFlashlightState") == 0)
                return CommandType_CheckFlashlightState;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "ggleFlashlightState") == 0)
                        return CommandType_ToggleFlashlightState;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "rnFlashlightO", 13) == 0)
                      {
                        switch ((unsigned char)(chars[15]))
                          {
                            case 'f':
                                if (strcmp(&(chars[16]), "f") == 0)
                                    return CommandType_TurnFlashlightOff;
                                break;
                            case 'n':
                                if (chars[16] == 0)
                                    return CommandType_TurnFlashlightOn;
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

const char *FlashlightCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnFlashlightOn:
            return "TurnFlashlightOn";
        case CommandType_TurnFlashlightOff:
            return "TurnFlashlightOff";
        case CommandType_CheckFlashlightState:
            return "CheckFlashlightState";
        case CommandType_ToggleFlashlightState:
            return "ToggleFlashlightState";
        default:
            assert(false);
            return NULL;
      }
  }

FlashlightCommandJSON::FlashlightCommandJSON(const FlashlightCommandJSON &)
  {
    assert(false);
  }

FlashlightCommandJSON &FlashlightCommandJSON::operator=(const FlashlightCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FlashlightCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnFlashlightOn:
            generated_string_CommandType = new JSONStringValue("TurnFlashlightOn");
            break;
        case CommandType_TurnFlashlightOff:
            generated_string_CommandType = new JSONStringValue("TurnFlashlightOff");
            break;
        case CommandType_CheckFlashlightState:
            generated_string_CommandType = new JSONStringValue("CheckFlashlightState");
            break;
        case CommandType_ToggleFlashlightState:
            generated_string_CommandType = new JSONStringValue("ToggleFlashlightState");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void FlashlightCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of FlashlightCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckFlashlightState") == 0)
                  {
                    the_enum = CommandType_CheckFlashlightState;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ggleFlashlightState") == 0)
                          {
                            the_enum = CommandType_ToggleFlashlightState;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "rnFlashlightO", 13) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[15]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[16]), "f") == 0)
                                      {
                                        the_enum = CommandType_TurnFlashlightOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[16] == 0)
                                      {
                                        the_enum = CommandType_TurnFlashlightOn;
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
    throw("The value for field CommandType of FlashlightCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

FlashlightCommandJSON::FlashlightCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

FlashlightCommandJSON::~FlashlightCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FlashlightCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "FlashlightCommand";
  }

bool FlashlightCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

FlashlightCommandJSON::TypeCommandType FlashlightCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const FlashlightCommandJSON::TypeCommandType FlashlightCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *FlashlightCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string FlashlightCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

FlashlightCommandJSON *FlashlightCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlashlightCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlashlightCommandJSON>, FlashlightCommandJSON *, bool> generator("Type FlashlightCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
