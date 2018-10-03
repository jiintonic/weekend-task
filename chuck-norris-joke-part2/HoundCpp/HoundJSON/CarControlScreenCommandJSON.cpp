/* file "CarControlScreenCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlScreenCommandJSON.h"

#include "CarControlScreenCommandJSON.h"


CarControlScreenCommandJSON::TypeCommandType CarControlScreenCommandJSON::stringToCommandType(const char *chars)
  {
    if (strncmp(chars, "Show", 4) == 0)
      {
        switch ((unsigned char)(chars[4]))
          {
            case 'A':
                if (strcmp(&(chars[5]), "udioScreen") == 0)
                    return CommandType_ShowAudioScreen;
                break;
            case 'C':
                if (strcmp(&(chars[5]), "limateControlScreen") == 0)
                    return CommandType_ShowClimateControlScreen;
                break;
            case 'D':
                if (strcmp(&(chars[5]), "ebugScreen") == 0)
                    return CommandType_ShowDebugScreen;
                break;
            case 'H':
                if (strcmp(&(chars[5]), "omeScreen") == 0)
                    return CommandType_ShowHomeScreen;
                break;
            case 'M':
                if (strcmp(&(chars[5]), "apScreen") == 0)
                    return CommandType_ShowMapScreen;
                break;
            case 'P':
                if (strcmp(&(chars[5]), "honeScreen") == 0)
                    return CommandType_ShowPhoneScreen;
                break;
            case 'R':
                if (strcmp(&(chars[5]), "adioScreen") == 0)
                    return CommandType_ShowRadioScreen;
                break;
            case 'S':
                if (strcmp(&(chars[5]), "potifyScreen") == 0)
                    return CommandType_ShowSpotifyScreen;
                break;
            case 'U':
                if (strcmp(&(chars[5]), "SBAudioScreen") == 0)
                    return CommandType_ShowUSBAudioScreen;
                break;
            default:
                break;
          }
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlScreenCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_ShowAudioScreen:
            return "ShowAudioScreen";
        case CommandType_ShowMapScreen:
            return "ShowMapScreen";
        case CommandType_ShowRadioScreen:
            return "ShowRadioScreen";
        case CommandType_ShowSpotifyScreen:
            return "ShowSpotifyScreen";
        case CommandType_ShowUSBAudioScreen:
            return "ShowUSBAudioScreen";
        case CommandType_ShowClimateControlScreen:
            return "ShowClimateControlScreen";
        case CommandType_ShowPhoneScreen:
            return "ShowPhoneScreen";
        case CommandType_ShowHomeScreen:
            return "ShowHomeScreen";
        case CommandType_ShowDebugScreen:
            return "ShowDebugScreen";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlScreenCommandJSON::CarControlScreenCommandJSON(const CarControlScreenCommandJSON &)
  {
    assert(false);
  }

CarControlScreenCommandJSON &CarControlScreenCommandJSON::operator=(const CarControlScreenCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlScreenCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_ShowAudioScreen:
            generated_string_CommandType = new JSONStringValue("ShowAudioScreen");
            break;
        case CommandType_ShowMapScreen:
            generated_string_CommandType = new JSONStringValue("ShowMapScreen");
            break;
        case CommandType_ShowRadioScreen:
            generated_string_CommandType = new JSONStringValue("ShowRadioScreen");
            break;
        case CommandType_ShowSpotifyScreen:
            generated_string_CommandType = new JSONStringValue("ShowSpotifyScreen");
            break;
        case CommandType_ShowUSBAudioScreen:
            generated_string_CommandType = new JSONStringValue("ShowUSBAudioScreen");
            break;
        case CommandType_ShowClimateControlScreen:
            generated_string_CommandType = new JSONStringValue("ShowClimateControlScreen");
            break;
        case CommandType_ShowPhoneScreen:
            generated_string_CommandType = new JSONStringValue("ShowPhoneScreen");
            break;
        case CommandType_ShowHomeScreen:
            generated_string_CommandType = new JSONStringValue("ShowHomeScreen");
            break;
        case CommandType_ShowDebugScreen:
            generated_string_CommandType = new JSONStringValue("ShowDebugScreen");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlScreenCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlScreenCommandJSON is not a string.");
    TypeCommandType the_enum;
    if (strncmp(json_string->getData(), "Show", 4) == 0)
      {
        switch ((unsigned char)(json_string->getData()[4]))
          {
            case 'A':
                if (strcmp(&(json_string->getData()[5]), "udioScreen") == 0)
                      {
                        the_enum = CommandType_ShowAudioScreen;
                        goto enum_is_done;
                      }
                break;
            case 'C':
                if (strcmp(&(json_string->getData()[5]), "limateControlScreen") == 0)
                      {
                        the_enum = CommandType_ShowClimateControlScreen;
                        goto enum_is_done;
                      }
                break;
            case 'D':
                if (strcmp(&(json_string->getData()[5]), "ebugScreen") == 0)
                      {
                        the_enum = CommandType_ShowDebugScreen;
                        goto enum_is_done;
                      }
                break;
            case 'H':
                if (strcmp(&(json_string->getData()[5]), "omeScreen") == 0)
                      {
                        the_enum = CommandType_ShowHomeScreen;
                        goto enum_is_done;
                      }
                break;
            case 'M':
                if (strcmp(&(json_string->getData()[5]), "apScreen") == 0)
                      {
                        the_enum = CommandType_ShowMapScreen;
                        goto enum_is_done;
                      }
                break;
            case 'P':
                if (strcmp(&(json_string->getData()[5]), "honeScreen") == 0)
                      {
                        the_enum = CommandType_ShowPhoneScreen;
                        goto enum_is_done;
                      }
                break;
            case 'R':
                if (strcmp(&(json_string->getData()[5]), "adioScreen") == 0)
                      {
                        the_enum = CommandType_ShowRadioScreen;
                        goto enum_is_done;
                      }
                break;
            case 'S':
                if (strcmp(&(json_string->getData()[5]), "potifyScreen") == 0)
                      {
                        the_enum = CommandType_ShowSpotifyScreen;
                        goto enum_is_done;
                      }
                break;
            case 'U':
                if (strcmp(&(json_string->getData()[5]), "SBAudioScreen") == 0)
                      {
                        the_enum = CommandType_ShowUSBAudioScreen;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field CommandType of CarControlScreenCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlScreenCommandJSON::CarControlScreenCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlScreenCommandJSON::~CarControlScreenCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlScreenCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlScreenCommand";
  }

bool CarControlScreenCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlScreenCommandJSON::TypeCommandType CarControlScreenCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlScreenCommandJSON::TypeCommandType CarControlScreenCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlScreenCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlScreenCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlScreenCommandJSON *CarControlScreenCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlScreenCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlScreenCommandJSON>, CarControlScreenCommandJSON *, bool> generator("Type CarControlScreenCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
