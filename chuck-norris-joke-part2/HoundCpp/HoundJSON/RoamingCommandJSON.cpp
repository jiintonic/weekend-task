/* file "RoamingCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RoamingCommandJSON.h"

#include "RoamingCommandJSON.h"


RoamingCommandJSON::TypeCommandType RoamingCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckRoamingState") == 0)
                return CommandType_CheckRoamingState;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "ggleRoamingState") == 0)
                        return CommandType_ToggleRoamingState;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "rnRoamingO", 10) == 0)
                      {
                        switch ((unsigned char)(chars[12]))
                          {
                            case 'f':
                                if (strcmp(&(chars[13]), "f") == 0)
                                    return CommandType_TurnRoamingOff;
                                break;
                            case 'n':
                                if (chars[13] == 0)
                                    return CommandType_TurnRoamingOn;
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

const char *RoamingCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnRoamingOn:
            return "TurnRoamingOn";
        case CommandType_TurnRoamingOff:
            return "TurnRoamingOff";
        case CommandType_CheckRoamingState:
            return "CheckRoamingState";
        case CommandType_ToggleRoamingState:
            return "ToggleRoamingState";
        default:
            assert(false);
            return NULL;
      }
  }

RoamingCommandJSON::RoamingCommandJSON(const RoamingCommandJSON &)
  {
    assert(false);
  }

RoamingCommandJSON &RoamingCommandJSON::operator=(const RoamingCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RoamingCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnRoamingOn:
            generated_string_CommandType = new JSONStringValue("TurnRoamingOn");
            break;
        case CommandType_TurnRoamingOff:
            generated_string_CommandType = new JSONStringValue("TurnRoamingOff");
            break;
        case CommandType_CheckRoamingState:
            generated_string_CommandType = new JSONStringValue("CheckRoamingState");
            break;
        case CommandType_ToggleRoamingState:
            generated_string_CommandType = new JSONStringValue("ToggleRoamingState");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void RoamingCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of RoamingCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckRoamingState") == 0)
                  {
                    the_enum = CommandType_CheckRoamingState;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ggleRoamingState") == 0)
                          {
                            the_enum = CommandType_ToggleRoamingState;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "rnRoamingO", 10) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[12]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[13]), "f") == 0)
                                      {
                                        the_enum = CommandType_TurnRoamingOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[13] == 0)
                                      {
                                        the_enum = CommandType_TurnRoamingOn;
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
    throw("The value for field CommandType of RoamingCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

RoamingCommandJSON::RoamingCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

RoamingCommandJSON::~RoamingCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RoamingCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "RoamingCommand";
  }

bool RoamingCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

RoamingCommandJSON::TypeCommandType RoamingCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const RoamingCommandJSON::TypeCommandType RoamingCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *RoamingCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string RoamingCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

RoamingCommandJSON *RoamingCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RoamingCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RoamingCommandJSON>, RoamingCommandJSON *, bool> generator("Type RoamingCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
