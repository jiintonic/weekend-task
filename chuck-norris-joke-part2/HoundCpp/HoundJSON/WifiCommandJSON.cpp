/* file "WifiCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WifiCommandJSON.h"

#include "WifiCommandJSON.h"


WifiCommandJSON::TypeCommandType WifiCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckWifiConnection") == 0)
                return CommandType_CheckWifiConnection;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "earchWifiConnection") == 0)
                return CommandType_SearchWifiConnection;
            break;
        case 'T':
            if (strncmp(&(chars[1]), "urn", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'O':
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'f':
                                if (strcmp(&(chars[6]), "fWifiHotspot") == 0)
                                    return CommandType_TurnOffWifiHotspot;
                                break;
                            case 'n':
                                if (strcmp(&(chars[6]), "WifiHotspot") == 0)
                                    return CommandType_TurnOnWifiHotspot;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'W':
                        if (strncmp(&(chars[5]), "ifiO", 4) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'f':
                                    if (strcmp(&(chars[10]), "f") == 0)
                                        return CommandType_TurnWifiOff;
                                    break;
                                case 'n':
                                    if (chars[10] == 0)
                                        return CommandType_TurnWifiOn;
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
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *WifiCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnWifiOn:
            return "TurnWifiOn";
        case CommandType_TurnWifiOff:
            return "TurnWifiOff";
        case CommandType_CheckWifiConnection:
            return "CheckWifiConnection";
        case CommandType_SearchWifiConnection:
            return "SearchWifiConnection";
        case CommandType_TurnOnWifiHotspot:
            return "TurnOnWifiHotspot";
        case CommandType_TurnOffWifiHotspot:
            return "TurnOffWifiHotspot";
        default:
            assert(false);
            return NULL;
      }
  }

WifiCommandJSON::WifiCommandJSON(const WifiCommandJSON &)
  {
    assert(false);
  }

WifiCommandJSON &WifiCommandJSON::operator=(const WifiCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *WifiCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnWifiOn:
            generated_string_CommandType = new JSONStringValue("TurnWifiOn");
            break;
        case CommandType_TurnWifiOff:
            generated_string_CommandType = new JSONStringValue("TurnWifiOff");
            break;
        case CommandType_CheckWifiConnection:
            generated_string_CommandType = new JSONStringValue("CheckWifiConnection");
            break;
        case CommandType_SearchWifiConnection:
            generated_string_CommandType = new JSONStringValue("SearchWifiConnection");
            break;
        case CommandType_TurnOnWifiHotspot:
            generated_string_CommandType = new JSONStringValue("TurnOnWifiHotspot");
            break;
        case CommandType_TurnOffWifiHotspot:
            generated_string_CommandType = new JSONStringValue("TurnOffWifiHotspot");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void WifiCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of WifiCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckWifiConnection") == 0)
                  {
                    the_enum = CommandType_CheckWifiConnection;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "earchWifiConnection") == 0)
                  {
                    the_enum = CommandType_SearchWifiConnection;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "urn", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'O':
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[6]), "fWifiHotspot") == 0)
                                      {
                                        the_enum = CommandType_TurnOffWifiHotspot;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[6]), "WifiHotspot") == 0)
                                      {
                                        the_enum = CommandType_TurnOnWifiHotspot;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'W':
                        if (strncmp(&(json_string->getData()[5]), "ifiO", 4) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'f':
                                    if (strcmp(&(json_string->getData()[10]), "f") == 0)
                                          {
                                            the_enum = CommandType_TurnWifiOff;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'n':
                                    if (json_string->getData()[10] == 0)
                                          {
                                            the_enum = CommandType_TurnWifiOn;
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
        default:
            break;
      }
    throw("The value for field CommandType of WifiCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

WifiCommandJSON::WifiCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

WifiCommandJSON::~WifiCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *WifiCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "WifiCommand";
  }

bool WifiCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

WifiCommandJSON::TypeCommandType WifiCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const WifiCommandJSON::TypeCommandType WifiCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *WifiCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string WifiCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

WifiCommandJSON *WifiCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WifiCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WifiCommandJSON>, WifiCommandJSON *, bool> generator("Type WifiCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
