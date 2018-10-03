/* file "LocationCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocationCommandJSON.h"

#include "LocationCommandJSON.h"


LocationCommandJSON::TypeCommandType LocationCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckLocationState") == 0)
                return CommandType_CheckLocationState;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "ggleLocationState") == 0)
                        return CommandType_ToggleLocationState;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "rnLocationO", 11) == 0)
                      {
                        switch ((unsigned char)(chars[13]))
                          {
                            case 'f':
                                if (strcmp(&(chars[14]), "f") == 0)
                                    return CommandType_TurnLocationOff;
                                break;
                            case 'n':
                                if (chars[14] == 0)
                                    return CommandType_TurnLocationOn;
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

const char *LocationCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnLocationOn:
            return "TurnLocationOn";
        case CommandType_TurnLocationOff:
            return "TurnLocationOff";
        case CommandType_CheckLocationState:
            return "CheckLocationState";
        case CommandType_ToggleLocationState:
            return "ToggleLocationState";
        default:
            assert(false);
            return NULL;
      }
  }

LocationCommandJSON::LocationCommandJSON(const LocationCommandJSON &)
  {
    assert(false);
  }

LocationCommandJSON &LocationCommandJSON::operator=(const LocationCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *LocationCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnLocationOn:
            generated_string_CommandType = new JSONStringValue("TurnLocationOn");
            break;
        case CommandType_TurnLocationOff:
            generated_string_CommandType = new JSONStringValue("TurnLocationOff");
            break;
        case CommandType_CheckLocationState:
            generated_string_CommandType = new JSONStringValue("CheckLocationState");
            break;
        case CommandType_ToggleLocationState:
            generated_string_CommandType = new JSONStringValue("ToggleLocationState");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void LocationCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of LocationCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckLocationState") == 0)
                  {
                    the_enum = CommandType_CheckLocationState;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ggleLocationState") == 0)
                          {
                            the_enum = CommandType_ToggleLocationState;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "rnLocationO", 11) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[13]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[14]), "f") == 0)
                                      {
                                        the_enum = CommandType_TurnLocationOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[14] == 0)
                                      {
                                        the_enum = CommandType_TurnLocationOn;
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
    throw("The value for field CommandType of LocationCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

LocationCommandJSON::LocationCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

LocationCommandJSON::~LocationCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *LocationCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "LocationCommand";
  }

bool LocationCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

LocationCommandJSON::TypeCommandType LocationCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const LocationCommandJSON::TypeCommandType LocationCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *LocationCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string LocationCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

LocationCommandJSON *LocationCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocationCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocationCommandJSON>, LocationCommandJSON *, bool> generator("Type LocationCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
