/* file "AutoRotateHelpCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AutoRotateHelpCommandJSON.h"

#include "AutoRotateHelpCommandJSON.h"


AutoRotateHelpCommandJSON::TypeCommandType AutoRotateHelpCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckAutoRotateState") == 0)
                return CommandType_CheckAutoRotateState;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "ggleAutoRotateState") == 0)
                        return CommandType_ToggleAutoRotateState;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "rnAutoRotateO", 13) == 0)
                      {
                        switch ((unsigned char)(chars[15]))
                          {
                            case 'f':
                                if (strcmp(&(chars[16]), "f") == 0)
                                    return CommandType_TurnAutoRotateOff;
                                break;
                            case 'n':
                                if (chars[16] == 0)
                                    return CommandType_TurnAutoRotateOn;
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

const char *AutoRotateHelpCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnAutoRotateOn:
            return "TurnAutoRotateOn";
        case CommandType_TurnAutoRotateOff:
            return "TurnAutoRotateOff";
        case CommandType_CheckAutoRotateState:
            return "CheckAutoRotateState";
        case CommandType_ToggleAutoRotateState:
            return "ToggleAutoRotateState";
        default:
            assert(false);
            return NULL;
      }
  }

AutoRotateHelpCommandJSON::AutoRotateHelpCommandJSON(const AutoRotateHelpCommandJSON &)
  {
    assert(false);
  }

AutoRotateHelpCommandJSON &AutoRotateHelpCommandJSON::operator=(const AutoRotateHelpCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AutoRotateHelpCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnAutoRotateOn:
            generated_string_CommandType = new JSONStringValue("TurnAutoRotateOn");
            break;
        case CommandType_TurnAutoRotateOff:
            generated_string_CommandType = new JSONStringValue("TurnAutoRotateOff");
            break;
        case CommandType_CheckAutoRotateState:
            generated_string_CommandType = new JSONStringValue("CheckAutoRotateState");
            break;
        case CommandType_ToggleAutoRotateState:
            generated_string_CommandType = new JSONStringValue("ToggleAutoRotateState");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void AutoRotateHelpCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of AutoRotateHelpCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckAutoRotateState") == 0)
                  {
                    the_enum = CommandType_CheckAutoRotateState;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ggleAutoRotateState") == 0)
                          {
                            the_enum = CommandType_ToggleAutoRotateState;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "rnAutoRotateO", 13) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[15]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[16]), "f") == 0)
                                      {
                                        the_enum = CommandType_TurnAutoRotateOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[16] == 0)
                                      {
                                        the_enum = CommandType_TurnAutoRotateOn;
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
    throw("The value for field CommandType of AutoRotateHelpCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

AutoRotateHelpCommandJSON::AutoRotateHelpCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

AutoRotateHelpCommandJSON::~AutoRotateHelpCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AutoRotateHelpCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "AutoRotateHelpCommand";
  }

bool AutoRotateHelpCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

AutoRotateHelpCommandJSON::TypeCommandType AutoRotateHelpCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const AutoRotateHelpCommandJSON::TypeCommandType AutoRotateHelpCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *AutoRotateHelpCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string AutoRotateHelpCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

AutoRotateHelpCommandJSON *AutoRotateHelpCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AutoRotateHelpCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AutoRotateHelpCommandJSON>, AutoRotateHelpCommandJSON *, bool> generator("Type AutoRotateHelpCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
