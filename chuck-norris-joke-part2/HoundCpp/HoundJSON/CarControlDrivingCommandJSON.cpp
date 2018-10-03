/* file "CarControlDrivingCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlDrivingCommandJSON.h"

#include "CarControlDrivingCommandJSON.h"


CarControlDrivingCommandJSON::TypeCommandType CarControlDrivingCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'd':
                    if (strncmp(&(chars[2]), "aptiveCruiseControlO", 20) == 0)
                      {
                        switch ((unsigned char)(chars[22]))
                          {
                            case 'f':
                                if (strcmp(&(chars[23]), "f") == 0)
                                    return CommandType_AdaptiveCruiseControlOff;
                                break;
                            case 'n':
                                if (chars[23] == 0)
                                    return CommandType_AdaptiveCruiseControlOn;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "to", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'm':
                                if (strncmp(&(chars[5]), "aticLaneKeepingO", 16) == 0)
                                  {
                                    switch ((unsigned char)(chars[21]))
                                      {
                                        case 'f':
                                            if (strcmp(&(chars[22]), "f") == 0)
                                                return CommandType_AutomaticLaneKeepingOff;
                                            break;
                                        case 'n':
                                            if (chars[22] == 0)
                                                return CommandType_AutomaticLaneKeepingOn;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(chars[5]), "omousParking") == 0)
                                    return CommandType_AutonomousParking;
                                break;
                            case 'p':
                                if (strncmp(&(chars[5]), "ilotO", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 'f':
                                            if (strcmp(&(chars[11]), "f") == 0)
                                                return CommandType_AutopilotOff;
                                            break;
                                        case 'n':
                                            if (chars[11] == 0)
                                                return CommandType_AutopilotOn;
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
            break;
        case 'C':
            if (strncmp(&(chars[1]), "ruiseControl", 12) == 0)
              {
                switch ((unsigned char)(chars[13]))
                  {
                    case 'O':
                        switch ((unsigned char)(chars[14]))
                          {
                            case 'f':
                                if (strcmp(&(chars[15]), "f") == 0)
                                    return CommandType_CruiseControlOff;
                                break;
                            case 'n':
                                if (chars[15] == 0)
                                    return CommandType_CruiseControlOn;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(chars[14]))
                          {
                            case 'l':
                                if (strcmp(&(chars[15]), "owDown") == 0)
                                    return CommandType_CruiseControlSlowDown;
                                break;
                            case 'p':
                                if (strcmp(&(chars[15]), "eedUp") == 0)
                                    return CommandType_CruiseControlSpeedUp;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strncmp(&(chars[1]), "ourWheelDriveO", 14) == 0)
              {
                switch ((unsigned char)(chars[15]))
                  {
                    case 'f':
                        if (strcmp(&(chars[16]), "f") == 0)
                            return CommandType_FourWheelDriveOff;
                        break;
                    case 'n':
                        if (chars[16] == 0)
                            return CommandType_FourWheelDriveOn;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strncmp(&(chars[1]), "aneDepartureWarningO", 20) == 0)
              {
                switch ((unsigned char)(chars[21]))
                  {
                    case 'f':
                        if (strcmp(&(chars[22]), "f") == 0)
                            return CommandType_LaneDepartureWarningOff;
                        break;
                    case 'n':
                        if (chars[22] == 0)
                            return CommandType_LaneDepartureWarningOn;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strncmp(&(chars[1]), "arkingAssistO", 13) == 0)
              {
                switch ((unsigned char)(chars[14]))
                  {
                    case 'f':
                        if (strcmp(&(chars[15]), "f") == 0)
                            return CommandType_ParkingAssistOff;
                        break;
                    case 'n':
                        if (chars[15] == 0)
                            return CommandType_ParkingAssistOn;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            if (strncmp(&(chars[1]), "ractionControlO", 15) == 0)
              {
                switch ((unsigned char)(chars[16]))
                  {
                    case 'f':
                        if (strcmp(&(chars[17]), "f") == 0)
                            return CommandType_TractionControlOff;
                        break;
                    case 'n':
                        if (chars[17] == 0)
                            return CommandType_TractionControlOn;
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

const char *CarControlDrivingCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_CruiseControlOn:
            return "CruiseControlOn";
        case CommandType_CruiseControlOff:
            return "CruiseControlOff";
        case CommandType_FourWheelDriveOn:
            return "FourWheelDriveOn";
        case CommandType_FourWheelDriveOff:
            return "FourWheelDriveOff";
        case CommandType_AdaptiveCruiseControlOn:
            return "AdaptiveCruiseControlOn";
        case CommandType_AdaptiveCruiseControlOff:
            return "AdaptiveCruiseControlOff";
        case CommandType_TractionControlOn:
            return "TractionControlOn";
        case CommandType_TractionControlOff:
            return "TractionControlOff";
        case CommandType_LaneDepartureWarningOn:
            return "LaneDepartureWarningOn";
        case CommandType_LaneDepartureWarningOff:
            return "LaneDepartureWarningOff";
        case CommandType_AutomaticLaneKeepingOn:
            return "AutomaticLaneKeepingOn";
        case CommandType_AutomaticLaneKeepingOff:
            return "AutomaticLaneKeepingOff";
        case CommandType_ParkingAssistOn:
            return "ParkingAssistOn";
        case CommandType_ParkingAssistOff:
            return "ParkingAssistOff";
        case CommandType_CruiseControlSpeedUp:
            return "CruiseControlSpeedUp";
        case CommandType_CruiseControlSlowDown:
            return "CruiseControlSlowDown";
        case CommandType_AutonomousParking:
            return "AutonomousParking";
        case CommandType_AutopilotOn:
            return "AutopilotOn";
        case CommandType_AutopilotOff:
            return "AutopilotOff";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlDrivingCommandJSON::CarControlDrivingCommandJSON(const CarControlDrivingCommandJSON &)
  {
    assert(false);
  }

CarControlDrivingCommandJSON &CarControlDrivingCommandJSON::operator=(const CarControlDrivingCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlDrivingCommandJSON::extraCruiseSpeedToJSON(void) const
  {
    JSONValue *generated_rational_CruiseSpeed;
    if (((double)(long int)storeCruiseSpeed) == storeCruiseSpeed)
        generated_rational_CruiseSpeed = new JSONIntegerValue((long int)(storeCruiseSpeed));
    else
        generated_rational_CruiseSpeed = new JSONRationalValue(storeCruiseSpeed, DBL_DIG);
    return generated_rational_CruiseSpeed;
  }

JSONValue *CarControlDrivingCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_CruiseControlOn:
            generated_string_CommandType = new JSONStringValue("CruiseControlOn");
            break;
        case CommandType_CruiseControlOff:
            generated_string_CommandType = new JSONStringValue("CruiseControlOff");
            break;
        case CommandType_FourWheelDriveOn:
            generated_string_CommandType = new JSONStringValue("FourWheelDriveOn");
            break;
        case CommandType_FourWheelDriveOff:
            generated_string_CommandType = new JSONStringValue("FourWheelDriveOff");
            break;
        case CommandType_AdaptiveCruiseControlOn:
            generated_string_CommandType = new JSONStringValue("AdaptiveCruiseControlOn");
            break;
        case CommandType_AdaptiveCruiseControlOff:
            generated_string_CommandType = new JSONStringValue("AdaptiveCruiseControlOff");
            break;
        case CommandType_TractionControlOn:
            generated_string_CommandType = new JSONStringValue("TractionControlOn");
            break;
        case CommandType_TractionControlOff:
            generated_string_CommandType = new JSONStringValue("TractionControlOff");
            break;
        case CommandType_LaneDepartureWarningOn:
            generated_string_CommandType = new JSONStringValue("LaneDepartureWarningOn");
            break;
        case CommandType_LaneDepartureWarningOff:
            generated_string_CommandType = new JSONStringValue("LaneDepartureWarningOff");
            break;
        case CommandType_AutomaticLaneKeepingOn:
            generated_string_CommandType = new JSONStringValue("AutomaticLaneKeepingOn");
            break;
        case CommandType_AutomaticLaneKeepingOff:
            generated_string_CommandType = new JSONStringValue("AutomaticLaneKeepingOff");
            break;
        case CommandType_ParkingAssistOn:
            generated_string_CommandType = new JSONStringValue("ParkingAssistOn");
            break;
        case CommandType_ParkingAssistOff:
            generated_string_CommandType = new JSONStringValue("ParkingAssistOff");
            break;
        case CommandType_CruiseControlSpeedUp:
            generated_string_CommandType = new JSONStringValue("CruiseControlSpeedUp");
            break;
        case CommandType_CruiseControlSlowDown:
            generated_string_CommandType = new JSONStringValue("CruiseControlSlowDown");
            break;
        case CommandType_AutonomousParking:
            generated_string_CommandType = new JSONStringValue("AutonomousParking");
            break;
        case CommandType_AutopilotOn:
            generated_string_CommandType = new JSONStringValue("AutopilotOn");
            break;
        case CommandType_AutopilotOff:
            generated_string_CommandType = new JSONStringValue("AutopilotOff");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlDrivingCommandJSON::fromJSONCruiseSpeed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field CruiseSpeed of CarControlDrivingCommandJSON is not a number.");
          }
      }
    setCruiseSpeedText(the_rational_text);
  }

void CarControlDrivingCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlDrivingCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'd':
                    if (strncmp(&(json_string->getData()[2]), "aptiveCruiseControlO", 20) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[22]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[23]), "f") == 0)
                                      {
                                        the_enum = CommandType_AdaptiveCruiseControlOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[23] == 0)
                                      {
                                        the_enum = CommandType_AdaptiveCruiseControlOn;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "to", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'm':
                                if (strncmp(&(json_string->getData()[5]), "aticLaneKeepingO", 16) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[21]))
                                      {
                                        case 'f':
                                            if (strcmp(&(json_string->getData()[22]), "f") == 0)
                                                  {
                                                    the_enum = CommandType_AutomaticLaneKeepingOff;
                                                    goto enum_is_done;
                                                  }
                                            break;
                                        case 'n':
                                            if (json_string->getData()[22] == 0)
                                                  {
                                                    the_enum = CommandType_AutomaticLaneKeepingOn;
                                                    goto enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(json_string->getData()[5]), "omousParking") == 0)
                                      {
                                        the_enum = CommandType_AutonomousParking;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strncmp(&(json_string->getData()[5]), "ilotO", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 'f':
                                            if (strcmp(&(json_string->getData()[11]), "f") == 0)
                                                  {
                                                    the_enum = CommandType_AutopilotOff;
                                                    goto enum_is_done;
                                                  }
                                            break;
                                        case 'n':
                                            if (json_string->getData()[11] == 0)
                                                  {
                                                    the_enum = CommandType_AutopilotOn;
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
            break;
        case 'C':
            if (strncmp(&(json_string->getData()[1]), "ruiseControl", 12) == 0)
              {
                switch ((unsigned char)(json_string->getData()[13]))
                  {
                    case 'O':
                        switch ((unsigned char)(json_string->getData()[14]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[15]), "f") == 0)
                                      {
                                        the_enum = CommandType_CruiseControlOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[15] == 0)
                                      {
                                        the_enum = CommandType_CruiseControlOn;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(json_string->getData()[14]))
                          {
                            case 'l':
                                if (strcmp(&(json_string->getData()[15]), "owDown") == 0)
                                      {
                                        the_enum = CommandType_CruiseControlSlowDown;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[15]), "eedUp") == 0)
                                      {
                                        the_enum = CommandType_CruiseControlSpeedUp;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'F':
            if (strncmp(&(json_string->getData()[1]), "ourWheelDriveO", 14) == 0)
              {
                switch ((unsigned char)(json_string->getData()[15]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[16]), "f") == 0)
                              {
                                the_enum = CommandType_FourWheelDriveOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[16] == 0)
                              {
                                the_enum = CommandType_FourWheelDriveOn;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strncmp(&(json_string->getData()[1]), "aneDepartureWarningO", 20) == 0)
              {
                switch ((unsigned char)(json_string->getData()[21]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[22]), "f") == 0)
                              {
                                the_enum = CommandType_LaneDepartureWarningOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[22] == 0)
                              {
                                the_enum = CommandType_LaneDepartureWarningOn;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strncmp(&(json_string->getData()[1]), "arkingAssistO", 13) == 0)
              {
                switch ((unsigned char)(json_string->getData()[14]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[15]), "f") == 0)
                              {
                                the_enum = CommandType_ParkingAssistOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[15] == 0)
                              {
                                the_enum = CommandType_ParkingAssistOn;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "ractionControlO", 15) == 0)
              {
                switch ((unsigned char)(json_string->getData()[16]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[17]), "f") == 0)
                              {
                                the_enum = CommandType_TractionControlOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[17] == 0)
                              {
                                the_enum = CommandType_TractionControlOn;
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
    throw("The value for field CommandType of CarControlDrivingCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlDrivingCommandJSON::CarControlDrivingCommandJSON(void) :
        flagHasCruiseSpeed(false),
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlDrivingCommandJSON::~CarControlDrivingCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlDrivingCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlDrivingCommand";
  }

bool CarControlDrivingCommandJSON::hasCruiseSpeed(void) const
  {
    return flagHasCruiseSpeed;
  }

double CarControlDrivingCommandJSON::getCruiseSpeed(void)
  {
    assert(flagHasCruiseSpeed);
    if (textStoreCruiseSpeed != "")
      {
        return atof(textStoreCruiseSpeed.c_str());
      }
    return storeCruiseSpeed;
  }

const double CarControlDrivingCommandJSON::getCruiseSpeed(void) const
  {
    assert(flagHasCruiseSpeed);
    if (textStoreCruiseSpeed != "")
      {
        return atof(textStoreCruiseSpeed.c_str());
      }
    return storeCruiseSpeed;
  }

std::string CarControlDrivingCommandJSON::getCruiseSpeedAsText(void) const
  {
    assert(flagHasCruiseSpeed);
    if (textStoreCruiseSpeed == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeCruiseSpeed);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreCruiseSpeed);
      }
  }

bool CarControlDrivingCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlDrivingCommandJSON::TypeCommandType CarControlDrivingCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlDrivingCommandJSON::TypeCommandType CarControlDrivingCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlDrivingCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlDrivingCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlDrivingCommandJSON *CarControlDrivingCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlDrivingCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlDrivingCommandJSON>, CarControlDrivingCommandJSON *, bool> generator("Type CarControlDrivingCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
