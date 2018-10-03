/* file "AutoRotateCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AutoRotateCommandJSON.h"

#include "AutoRotateCommandJSON.h"


AutoRotateCommandJSON::TypeCommandType AutoRotateCommandJSON::stringToCommandType(const char *chars)
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

const char *AutoRotateCommandJSON::stringFromCommandType(TypeCommandType the_enum)
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

AutoRotateCommandJSON::AutoRotateCommandJSON(const AutoRotateCommandJSON &)
  {
    assert(false);
  }

AutoRotateCommandJSON &AutoRotateCommandJSON::operator=(const AutoRotateCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AutoRotateCommandJSON::extraCommandTypeToJSON(void) const
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

void AutoRotateCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of AutoRotateCommandJSON is not a string.");
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
    throw("The value for field CommandType of AutoRotateCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

AutoRotateCommandJSON::AutoRotateCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

AutoRotateCommandJSON::~AutoRotateCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AutoRotateCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "AutoRotateCommand";
  }

bool AutoRotateCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

AutoRotateCommandJSON::TypeCommandType AutoRotateCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const AutoRotateCommandJSON::TypeCommandType AutoRotateCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *AutoRotateCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string AutoRotateCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

AutoRotateCommandJSON *AutoRotateCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AutoRotateCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AutoRotateCommandJSON>, AutoRotateCommandJSON *, bool> generator("Type AutoRotateCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
