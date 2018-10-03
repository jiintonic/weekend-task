/* file "NavigationControlCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NavigationControlCommandJSON.h"

#include "NavigationControlCommandJSON.h"


NavigationControlCommandJSON::TypeCommandType NavigationControlCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'r':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'e':
                            if (strcmp(&(chars[3]), "ThereTollsOnThisRoad") == 0)
                                return CommandType_AreThereTollsOnThisRoad;
                            break;
                        case 'r':
                            if (strcmp(&(chars[3]), "ivalTime") == 0)
                                return CommandType_ArrivalTime;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'v':
                    if (strcmp(&(chars[2]), "oidHighways") == 0)
                        return CommandType_AvoidHighways;
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            if (strcmp(&(chars[1]), "emainingTravelTime") == 0)
                return CommandType_RemainingTravelTime;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'p':
                    if (strcmp(&(chars[2]), "eedLimitOnThisRoad") == 0)
                        return CommandType_SpeedLimitOnThisRoad;
                    break;
                case 't':
                    if (strncmp(&(chars[2]), "op", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'N':
                                if (strcmp(&(chars[5]), "avigation") == 0)
                                    return CommandType_StopNavigation;
                                break;
                            case 'T':
                                if (strcmp(&(chars[5]), "urnByTurnNavigation") == 0)
                                    return CommandType_StopTurnByTurnNavigation;
                                break;
                            case 'V':
                                if (strcmp(&(chars[5]), "oiceNavigation") == 0)
                                    return CommandType_StopVoiceNavigation;
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

const char *NavigationControlCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_StopNavigation:
            return "StopNavigation";
        case CommandType_StopVoiceNavigation:
            return "StopVoiceNavigation";
        case CommandType_StopTurnByTurnNavigation:
            return "StopTurnByTurnNavigation";
        case CommandType_AvoidHighways:
            return "AvoidHighways";
        case CommandType_AreThereTollsOnThisRoad:
            return "AreThereTollsOnThisRoad";
        case CommandType_RemainingTravelTime:
            return "RemainingTravelTime";
        case CommandType_ArrivalTime:
            return "ArrivalTime";
        case CommandType_SpeedLimitOnThisRoad:
            return "SpeedLimitOnThisRoad";
        default:
            assert(false);
            return NULL;
      }
  }

NavigationControlCommandJSON::NavigationControlCommandJSON(const NavigationControlCommandJSON &)
  {
    assert(false);
  }

NavigationControlCommandJSON &NavigationControlCommandJSON::operator=(const NavigationControlCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NavigationControlCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_StopNavigation:
            generated_string_CommandType = new JSONStringValue("StopNavigation");
            break;
        case CommandType_StopVoiceNavigation:
            generated_string_CommandType = new JSONStringValue("StopVoiceNavigation");
            break;
        case CommandType_StopTurnByTurnNavigation:
            generated_string_CommandType = new JSONStringValue("StopTurnByTurnNavigation");
            break;
        case CommandType_AvoidHighways:
            generated_string_CommandType = new JSONStringValue("AvoidHighways");
            break;
        case CommandType_AreThereTollsOnThisRoad:
            generated_string_CommandType = new JSONStringValue("AreThereTollsOnThisRoad");
            break;
        case CommandType_RemainingTravelTime:
            generated_string_CommandType = new JSONStringValue("RemainingTravelTime");
            break;
        case CommandType_ArrivalTime:
            generated_string_CommandType = new JSONStringValue("ArrivalTime");
            break;
        case CommandType_SpeedLimitOnThisRoad:
            generated_string_CommandType = new JSONStringValue("SpeedLimitOnThisRoad");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void NavigationControlCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of NavigationControlCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'r':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'e':
                            if (strcmp(&(json_string->getData()[3]), "ThereTollsOnThisRoad") == 0)
                                  {
                                    the_enum = CommandType_AreThereTollsOnThisRoad;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'r':
                            if (strcmp(&(json_string->getData()[3]), "ivalTime") == 0)
                                  {
                                    the_enum = CommandType_ArrivalTime;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'v':
                    if (strcmp(&(json_string->getData()[2]), "oidHighways") == 0)
                          {
                            the_enum = CommandType_AvoidHighways;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "emainingTravelTime") == 0)
                  {
                    the_enum = CommandType_RemainingTravelTime;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'p':
                    if (strcmp(&(json_string->getData()[2]), "eedLimitOnThisRoad") == 0)
                          {
                            the_enum = CommandType_SpeedLimitOnThisRoad;
                            goto enum_is_done;
                          }
                    break;
                case 't':
                    if (strncmp(&(json_string->getData()[2]), "op", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'N':
                                if (strcmp(&(json_string->getData()[5]), "avigation") == 0)
                                      {
                                        the_enum = CommandType_StopNavigation;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[5]), "urnByTurnNavigation") == 0)
                                      {
                                        the_enum = CommandType_StopTurnByTurnNavigation;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'V':
                                if (strcmp(&(json_string->getData()[5]), "oiceNavigation") == 0)
                                      {
                                        the_enum = CommandType_StopVoiceNavigation;
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
    throw("The value for field CommandType of NavigationControlCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

NavigationControlCommandJSON::NavigationControlCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

NavigationControlCommandJSON::~NavigationControlCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NavigationControlCommandJSON::getCommandKind(void) const
  {
    return "NavigationControlCommand";
  }

bool NavigationControlCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

NavigationControlCommandJSON::TypeCommandType NavigationControlCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const NavigationControlCommandJSON::TypeCommandType NavigationControlCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *NavigationControlCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string NavigationControlCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

NavigationControlCommandJSON *NavigationControlCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NavigationControlCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NavigationControlCommandJSON>, NavigationControlCommandJSON *, bool> generator("Type NavigationControlCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
