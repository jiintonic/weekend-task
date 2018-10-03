/* file "CarControlClimateCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlClimateCommandJSON.h"

#include "CarControlClimateCommandJSON.h"


CarControlClimateCommandJSON::TypeCommandType CarControlClimateCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "djust", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'F':
                        if (strcmp(&(chars[7]), "an") == 0)
                            return CommandType_AdjustFan;
                        break;
                    case 'T':
                        if (strcmp(&(chars[7]), "emperature") == 0)
                            return CommandType_AdjustTemperature;
                        break;
                    case 'V':
                        if (strcmp(&(chars[7]), "ents") == 0)
                            return CommandType_AdjustVents;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strcmp(&(chars[1]), "axAirConditioning") == 0)
                return CommandType_MaxAirConditioning;
            break;
        case 'R':
            if (strncmp(&(chars[1]), "ecirculateO", 11) == 0)
              {
                switch ((unsigned char)(chars[12]))
                  {
                    case 'f':
                        if (strcmp(&(chars[13]), "f") == 0)
                            return CommandType_RecirculateOff;
                        break;
                    case 'n':
                        if (chars[13] == 0)
                            return CommandType_RecirculateOn;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strncmp(&(chars[2]), "tClimateControlTo", 17) == 0)
                      {
                        switch ((unsigned char)(chars[19]))
                          {
                            case 'A':
                                if (strcmp(&(chars[20]), "uto") == 0)
                                    return CommandType_SetClimateControlToAuto;
                                break;
                            case 'M':
                                if (strcmp(&(chars[20]), "anual") == 0)
                                    return CommandType_SetClimateControlToManual;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "owClimateControlScreen") == 0)
                        return CommandType_ShowClimateControlScreen;
                    break;
                case 'y':
                    if (strcmp(&(chars[2]), "ncTemperatureZones") == 0)
                        return CommandType_SyncTemperatureZones;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strncmp(&(chars[1]), "urn", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'A':
                        if (strncmp(&(chars[5]), "irConditioningO", 15) == 0)
                          {
                            switch ((unsigned char)(chars[20]))
                              {
                                case 'f':
                                    if (strcmp(&(chars[21]), "f") == 0)
                                        return CommandType_TurnAirConditioningOff;
                                    break;
                                case 'n':
                                    if (chars[21] == 0)
                                        return CommandType_TurnAirConditioningOn;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'H':
                        if (strncmp(&(chars[5]), "eatingO", 7) == 0)
                          {
                            switch ((unsigned char)(chars[12]))
                              {
                                case 'f':
                                    if (strcmp(&(chars[13]), "f") == 0)
                                        return CommandType_TurnHeatingOff;
                                    break;
                                case 'n':
                                    if (chars[13] == 0)
                                        return CommandType_TurnHeatingOn;
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

const char *CarControlClimateCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnAirConditioningOn:
            return "TurnAirConditioningOn";
        case CommandType_TurnAirConditioningOff:
            return "TurnAirConditioningOff";
        case CommandType_MaxAirConditioning:
            return "MaxAirConditioning";
        case CommandType_TurnHeatingOn:
            return "TurnHeatingOn";
        case CommandType_TurnHeatingOff:
            return "TurnHeatingOff";
        case CommandType_AdjustTemperature:
            return "AdjustTemperature";
        case CommandType_RecirculateOn:
            return "RecirculateOn";
        case CommandType_RecirculateOff:
            return "RecirculateOff";
        case CommandType_AdjustVents:
            return "AdjustVents";
        case CommandType_AdjustFan:
            return "AdjustFan";
        case CommandType_SyncTemperatureZones:
            return "SyncTemperatureZones";
        case CommandType_SetClimateControlToAuto:
            return "SetClimateControlToAuto";
        case CommandType_SetClimateControlToManual:
            return "SetClimateControlToManual";
        case CommandType_ShowClimateControlScreen:
            return "ShowClimateControlScreen";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlClimateCommandJSON::TypeFanSpeed CarControlClimateCommandJSON::stringToFanSpeed(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "uto") == 0)
                return FanSpeed_Auto;
            break;
        case 'H':
            if (strncmp(&(chars[1]), "igh", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 0:
                        return FanSpeed_High;
                    case 'e':
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'r':
                                if (chars[6] == 0)
                                    return FanSpeed_Higher;
                                break;
                            case 's':
                                if (strcmp(&(chars[6]), "t") == 0)
                                    return FanSpeed_Highest;
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
        case 'L':
            if (strncmp(&(chars[1]), "ow", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 0:
                        return FanSpeed_Low;
                    case 'e':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'r':
                                if (chars[5] == 0)
                                    return FanSpeed_Lower;
                                break;
                            case 's':
                                if (strcmp(&(chars[5]), "t") == 0)
                                    return FanSpeed_Lowest;
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
        case 'M':
            if (strcmp(&(chars[1]), "edium") == 0)
                return FanSpeed_Medium;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "oChange") == 0)
                return FanSpeed_NoChange;
            break;
        case 'O':
            switch ((unsigned char)(chars[1]))
              {
                case 'f':
                    if (strcmp(&(chars[2]), "f") == 0)
                        return FanSpeed_Off;
                    break;
                case 'n':
                    if (chars[2] == 0)
                        return FanSpeed_On;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "etTo") == 0)
                return FanSpeed_SetTo;
            break;
        default:
            break;
      }
    throw("The value for field `FanSpeed' is not one of the legal values.");
  }

const char *CarControlClimateCommandJSON::stringFromFanSpeed(TypeFanSpeed the_enum)
  {
    switch (the_enum)
      {
        case FanSpeed_Off:
            return "Off";
        case FanSpeed_Lowest:
            return "Lowest";
        case FanSpeed_Lower:
            return "Lower";
        case FanSpeed_Low:
            return "Low";
        case FanSpeed_Medium:
            return "Medium";
        case FanSpeed_High:
            return "High";
        case FanSpeed_Higher:
            return "Higher";
        case FanSpeed_Highest:
            return "Highest";
        case FanSpeed_On:
            return "On";
        case FanSpeed_Auto:
            return "Auto";
        case FanSpeed_NoChange:
            return "NoChange";
        case FanSpeed_SetTo:
            return "SetTo";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlClimateCommandJSON::TypeVentsJSON::TypeVentAction CarControlClimateCommandJSON::TypeVentsJSON::stringToVentAction(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "lose") == 0)
                return VentAction_Close;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return VentAction_None;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "pen") == 0)
                return VentAction_Open;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "etTo") == 0)
                return VentAction_SetTo;
            break;
        default:
            break;
      }
    throw("The value for field `VentAction' is not one of the legal values.");
  }

const char *CarControlClimateCommandJSON::TypeVentsJSON::stringFromVentAction(TypeVentAction the_enum)
  {
    switch (the_enum)
      {
        case VentAction_Open:
            return "Open";
        case VentAction_Close:
            return "Close";
        case VentAction_SetTo:
            return "SetTo";
        case VentAction_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlClimateCommandJSON::TypeVentsJSON::TypeVentSelection CarControlClimateCommandJSON::TypeVentsJSON::stringToVentSelection(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "llVents") == 0)
                return VentSelection_AllVents;
            break;
        case 'B':
            if (strncmp(&(chars[1]), "oth", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'D':
                        if (strcmp(&(chars[5]), "ashboardVents") == 0)
                            return VentSelection_BothDashboardVents;
                        break;
                    case 'F':
                        if (strcmp(&(chars[5]), "ootwellVents") == 0)
                            return VentSelection_BothFootwellVents;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strncmp(&(chars[1]), "river", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'B':
                        if (strcmp(&(chars[7]), "othVents") == 0)
                            return VentSelection_DriverBothVents;
                        break;
                    case 'D':
                        if (strcmp(&(chars[7]), "ashboardVent") == 0)
                            return VentSelection_DriverDashboardVent;
                        break;
                    case 'F':
                        if (strcmp(&(chars[7]), "ootwellVent") == 0)
                            return VentSelection_DriverFootwellVent;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strncmp(&(chars[1]), "assenger", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'B':
                        if (strcmp(&(chars[10]), "othVents") == 0)
                            return VentSelection_PassengerBothVents;
                        break;
                    case 'D':
                        if (strcmp(&(chars[10]), "ashboardVent") == 0)
                            return VentSelection_PassengerDashboardVent;
                        break;
                    case 'F':
                        if (strcmp(&(chars[10]), "ootwellVent") == 0)
                            return VentSelection_PassengerFootwellVent;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `VentSelection' is not one of the legal values.");
  }

const char *CarControlClimateCommandJSON::TypeVentsJSON::stringFromVentSelection(TypeVentSelection the_enum)
  {
    switch (the_enum)
      {
        case VentSelection_DriverDashboardVent:
            return "DriverDashboardVent";
        case VentSelection_PassengerDashboardVent:
            return "PassengerDashboardVent";
        case VentSelection_DriverFootwellVent:
            return "DriverFootwellVent";
        case VentSelection_PassengerFootwellVent:
            return "PassengerFootwellVent";
        case VentSelection_DriverBothVents:
            return "DriverBothVents";
        case VentSelection_PassengerBothVents:
            return "PassengerBothVents";
        case VentSelection_BothFootwellVents:
            return "BothFootwellVents";
        case VentSelection_BothDashboardVents:
            return "BothDashboardVents";
        case VentSelection_AllVents:
            return "AllVents";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlClimateCommandJSON::TypeVentsJSON::TypeVentsJSON(const TypeVentsJSON &)
  {
    assert(false);
  }

CarControlClimateCommandJSON::TypeVentsJSON &CarControlClimateCommandJSON::TypeVentsJSON::operator=(const TypeVentsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CarControlClimateCommandJSON::TypeVentsJSON::fromJSONVentAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field VentAction of TypeVentsJSON is not a string.");
    TypeVentAction the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "lose") == 0)
                  {
                    the_enum = VentAction_Close;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = VentAction_None;
                    goto enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "pen") == 0)
                  {
                    the_enum = VentAction_Open;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "etTo") == 0)
                  {
                    the_enum = VentAction_SetTo;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field VentAction of TypeVentsJSON is not one of the legal strings.");
  enum_is_done:;
    setVentAction(the_enum);
  }

void CarControlClimateCommandJSON::TypeVentsJSON::fromJSONVentSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field VentSelection of TypeVentsJSON is not a string.");
    TypeVentSelection the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "llVents") == 0)
                  {
                    the_enum = VentSelection_AllVents;
                    goto enum_is_done;
                  }
            break;
        case 'B':
            if (strncmp(&(json_string->getData()[1]), "oth", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'D':
                        if (strcmp(&(json_string->getData()[5]), "ashboardVents") == 0)
                              {
                                the_enum = VentSelection_BothDashboardVents;
                                goto enum_is_done;
                              }
                        break;
                    case 'F':
                        if (strcmp(&(json_string->getData()[5]), "ootwellVents") == 0)
                              {
                                the_enum = VentSelection_BothFootwellVents;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "river", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'B':
                        if (strcmp(&(json_string->getData()[7]), "othVents") == 0)
                              {
                                the_enum = VentSelection_DriverBothVents;
                                goto enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[7]), "ashboardVent") == 0)
                              {
                                the_enum = VentSelection_DriverDashboardVent;
                                goto enum_is_done;
                              }
                        break;
                    case 'F':
                        if (strcmp(&(json_string->getData()[7]), "ootwellVent") == 0)
                              {
                                the_enum = VentSelection_DriverFootwellVent;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strncmp(&(json_string->getData()[1]), "assenger", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'B':
                        if (strcmp(&(json_string->getData()[10]), "othVents") == 0)
                              {
                                the_enum = VentSelection_PassengerBothVents;
                                goto enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[10]), "ashboardVent") == 0)
                              {
                                the_enum = VentSelection_PassengerDashboardVent;
                                goto enum_is_done;
                              }
                        break;
                    case 'F':
                        if (strcmp(&(json_string->getData()[10]), "ootwellVent") == 0)
                              {
                                the_enum = VentSelection_PassengerFootwellVent;
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
    throw("The value for field VentSelection of TypeVentsJSON is not one of the legal strings.");
  enum_is_done:;
    setVentSelection(the_enum);
  }

CarControlClimateCommandJSON::TypeVentsJSON::TypeVentsJSON(void) :
        flagHasVentAction(false),
        flagHasVentSelection(false)
  {
    extraIndex = create_string_index();
  }

CarControlClimateCommandJSON::TypeVentsJSON::~TypeVentsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CarControlClimateCommandJSON::TypeVentsJSON::hasVentAction(void) const
  {
    return flagHasVentAction;
  }

CarControlClimateCommandJSON::TypeVentsJSON::TypeVentAction CarControlClimateCommandJSON::TypeVentsJSON::getVentAction(void)
  {
    assert(flagHasVentAction);
    return storeVentAction;
  }

const CarControlClimateCommandJSON::TypeVentsJSON::TypeVentAction CarControlClimateCommandJSON::TypeVentsJSON::getVentAction(void) const
  {
    assert(flagHasVentAction);
    return storeVentAction;
  }

const char *CarControlClimateCommandJSON::TypeVentsJSON::getVentActionAsChars(void) const
  {
    return stringFromVentAction(getVentAction());
  }

std::string CarControlClimateCommandJSON::TypeVentsJSON::getVentActionAsString(void) const
  {
    return stringFromVentAction(getVentAction());
  }

bool CarControlClimateCommandJSON::TypeVentsJSON::hasVentSelection(void) const
  {
    return flagHasVentSelection;
  }

CarControlClimateCommandJSON::TypeVentsJSON::TypeVentSelection CarControlClimateCommandJSON::TypeVentsJSON::getVentSelection(void)
  {
    assert(flagHasVentSelection);
    return storeVentSelection;
  }

const CarControlClimateCommandJSON::TypeVentsJSON::TypeVentSelection CarControlClimateCommandJSON::TypeVentsJSON::getVentSelection(void) const
  {
    assert(flagHasVentSelection);
    return storeVentSelection;
  }

const char *CarControlClimateCommandJSON::TypeVentsJSON::getVentSelectionAsChars(void) const
  {
    return stringFromVentSelection(getVentSelection());
  }

std::string CarControlClimateCommandJSON::TypeVentsJSON::getVentSelectionAsString(void) const
  {
    return stringFromVentSelection(getVentSelection());
  }

CarControlClimateCommandJSON::TypeTemperatureJSON::TypeUnit CarControlClimateCommandJSON::TypeTemperatureJSON::stringToUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (chars[1] == 0)
                return Unit_C;
            break;
        case 'F':
            if (chars[1] == 0)
                return Unit_F;
            break;
        case 'd':
            if (strcmp(&(chars[1]), "egrees") == 0)
                return Unit_degrees;
            break;
        default:
            break;
      }
    throw("The value for field `Unit' is not one of the legal values.");
  }

const char *CarControlClimateCommandJSON::TypeTemperatureJSON::stringFromUnit(TypeUnit the_enum)
  {
    switch (the_enum)
      {
        case Unit_F:
            return "F";
        case Unit_C:
            return "C";
        case Unit_degrees:
            return "degrees";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlClimateCommandJSON::TypeTemperatureJSON::TypeZone CarControlClimateCommandJSON::TypeTemperatureJSON::stringToZone(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "ackSeat") == 0)
                return Zone_BackSeat;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "river") == 0)
                return Zone_Driver;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "assenger") == 0)
                return Zone_Passenger;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nspecified") == 0)
                return Zone_Unspecified;
            break;
        default:
            break;
      }
    throw("The value for field `Zone' is not one of the legal values.");
  }

const char *CarControlClimateCommandJSON::TypeTemperatureJSON::stringFromZone(TypeZone the_enum)
  {
    switch (the_enum)
      {
        case Zone_Unspecified:
            return "Unspecified";
        case Zone_Driver:
            return "Driver";
        case Zone_Passenger:
            return "Passenger";
        case Zone_BackSeat:
            return "BackSeat";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlClimateCommandJSON::TypeTemperatureJSON::TypeTemperatureJSON(const TypeTemperatureJSON &)
  {
    assert(false);
  }

CarControlClimateCommandJSON::TypeTemperatureJSON &CarControlClimateCommandJSON::TypeTemperatureJSON::operator=(const TypeTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CarControlClimateCommandJSON::TypeTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of TypeTemperatureJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

void CarControlClimateCommandJSON::TypeTemperatureJSON::fromJSONIsRelative(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsRelative of TypeTemperatureJSON is not true for false.");
          }
      }
    setIsRelative(the_bool);
  }

void CarControlClimateCommandJSON::TypeTemperatureJSON::fromJSONAmbiguousValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AmbiguousValue of TypeTemperatureJSON is not a number.");
          }
      }
    setAmbiguousValueText(the_rational_text);
  }

void CarControlClimateCommandJSON::TypeTemperatureJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Unit of TypeTemperatureJSON is not a string.");
    TypeUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = Unit_C;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = Unit_F;
                    goto enum_is_done;
                  }
            break;
        case 'd':
            if (strcmp(&(json_string->getData()[1]), "egrees") == 0)
                  {
                    the_enum = Unit_degrees;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Unit of TypeTemperatureJSON is not one of the legal strings.");
  enum_is_done:;
    setUnit(the_enum);
  }

void CarControlClimateCommandJSON::TypeTemperatureJSON::fromJSONZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Zone of TypeTemperatureJSON is not a string.");
    TypeZone the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "ackSeat") == 0)
                  {
                    the_enum = Zone_BackSeat;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "river") == 0)
                  {
                    the_enum = Zone_Driver;
                    goto enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "assenger") == 0)
                  {
                    the_enum = Zone_Passenger;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nspecified") == 0)
                  {
                    the_enum = Zone_Unspecified;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Zone of TypeTemperatureJSON is not one of the legal strings.");
  enum_is_done:;
    setZone(the_enum);
  }

CarControlClimateCommandJSON::TypeTemperatureJSON::TypeTemperatureJSON(void) :
        flagHasValue(false),
        flagHasIsRelative(false),
        flagHasAmbiguousValue(false),
        flagHasUnit(false),
        flagHasZone(false)
  {
    storeUnit = Unit_degrees;
    extraIndex = create_string_index();
  }

CarControlClimateCommandJSON::TypeTemperatureJSON::~TypeTemperatureJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CarControlClimateCommandJSON::TypeTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double CarControlClimateCommandJSON::TypeTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double CarControlClimateCommandJSON::TypeTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string CarControlClimateCommandJSON::TypeTemperatureJSON::getValueAsText(void) const
  {
    assert(flagHasValue);
    if (textStoreValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValue);
      }
  }

bool CarControlClimateCommandJSON::TypeTemperatureJSON::hasIsRelative(void) const
  {
    return flagHasIsRelative;
  }

bool CarControlClimateCommandJSON::TypeTemperatureJSON::getIsRelative(void)
  {
    assert(flagHasIsRelative);
    return storeIsRelative;
  }

const bool CarControlClimateCommandJSON::TypeTemperatureJSON::getIsRelative(void) const
  {
    assert(flagHasIsRelative);
    return storeIsRelative;
  }

bool CarControlClimateCommandJSON::TypeTemperatureJSON::hasAmbiguousValue(void) const
  {
    return flagHasAmbiguousValue;
  }

double CarControlClimateCommandJSON::TypeTemperatureJSON::getAmbiguousValue(void)
  {
    assert(flagHasAmbiguousValue);
    if (textStoreAmbiguousValue != "")
      {
        return atof(textStoreAmbiguousValue.c_str());
      }
    return storeAmbiguousValue;
  }

const double CarControlClimateCommandJSON::TypeTemperatureJSON::getAmbiguousValue(void) const
  {
    assert(flagHasAmbiguousValue);
    if (textStoreAmbiguousValue != "")
      {
        return atof(textStoreAmbiguousValue.c_str());
      }
    return storeAmbiguousValue;
  }

std::string CarControlClimateCommandJSON::TypeTemperatureJSON::getAmbiguousValueAsText(void) const
  {
    assert(flagHasAmbiguousValue);
    if (textStoreAmbiguousValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeAmbiguousValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreAmbiguousValue);
      }
  }

bool CarControlClimateCommandJSON::TypeTemperatureJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

CarControlClimateCommandJSON::TypeTemperatureJSON::TypeUnit CarControlClimateCommandJSON::TypeTemperatureJSON::getUnit(void)
  {
    return storeUnit;
  }

const CarControlClimateCommandJSON::TypeTemperatureJSON::TypeUnit CarControlClimateCommandJSON::TypeTemperatureJSON::getUnit(void) const
  {
    return storeUnit;
  }

const char *CarControlClimateCommandJSON::TypeTemperatureJSON::getUnitAsChars(void) const
  {
    return stringFromUnit(getUnit());
  }

std::string CarControlClimateCommandJSON::TypeTemperatureJSON::getUnitAsString(void) const
  {
    return stringFromUnit(getUnit());
  }

bool CarControlClimateCommandJSON::TypeTemperatureJSON::hasZone(void) const
  {
    return flagHasZone;
  }

CarControlClimateCommandJSON::TypeTemperatureJSON::TypeZone CarControlClimateCommandJSON::TypeTemperatureJSON::getZone(void)
  {
    assert(flagHasZone);
    return storeZone;
  }

const CarControlClimateCommandJSON::TypeTemperatureJSON::TypeZone CarControlClimateCommandJSON::TypeTemperatureJSON::getZone(void) const
  {
    assert(flagHasZone);
    return storeZone;
  }

const char *CarControlClimateCommandJSON::TypeTemperatureJSON::getZoneAsChars(void) const
  {
    return stringFromZone(getZone());
  }

std::string CarControlClimateCommandJSON::TypeTemperatureJSON::getZoneAsString(void) const
  {
    return stringFromZone(getZone());
  }

CarControlClimateCommandJSON::CarControlClimateCommandJSON(const CarControlClimateCommandJSON &)
  {
    assert(false);
  }

CarControlClimateCommandJSON &CarControlClimateCommandJSON::operator=(const CarControlClimateCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlClimateCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnAirConditioningOn:
            generated_string_CommandType = new JSONStringValue("TurnAirConditioningOn");
            break;
        case CommandType_TurnAirConditioningOff:
            generated_string_CommandType = new JSONStringValue("TurnAirConditioningOff");
            break;
        case CommandType_MaxAirConditioning:
            generated_string_CommandType = new JSONStringValue("MaxAirConditioning");
            break;
        case CommandType_TurnHeatingOn:
            generated_string_CommandType = new JSONStringValue("TurnHeatingOn");
            break;
        case CommandType_TurnHeatingOff:
            generated_string_CommandType = new JSONStringValue("TurnHeatingOff");
            break;
        case CommandType_AdjustTemperature:
            generated_string_CommandType = new JSONStringValue("AdjustTemperature");
            break;
        case CommandType_RecirculateOn:
            generated_string_CommandType = new JSONStringValue("RecirculateOn");
            break;
        case CommandType_RecirculateOff:
            generated_string_CommandType = new JSONStringValue("RecirculateOff");
            break;
        case CommandType_AdjustVents:
            generated_string_CommandType = new JSONStringValue("AdjustVents");
            break;
        case CommandType_AdjustFan:
            generated_string_CommandType = new JSONStringValue("AdjustFan");
            break;
        case CommandType_SyncTemperatureZones:
            generated_string_CommandType = new JSONStringValue("SyncTemperatureZones");
            break;
        case CommandType_SetClimateControlToAuto:
            generated_string_CommandType = new JSONStringValue("SetClimateControlToAuto");
            break;
        case CommandType_SetClimateControlToManual:
            generated_string_CommandType = new JSONStringValue("SetClimateControlToManual");
            break;
        case CommandType_ShowClimateControlScreen:
            generated_string_CommandType = new JSONStringValue("ShowClimateControlScreen");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlClimateCommandJSON::extraFanSpeedToJSON(void) const
  {
    JSONStringValue *generated_string_FanSpeed;
    switch (storeFanSpeed)
      {
        case FanSpeed_Off:
            generated_string_FanSpeed = new JSONStringValue("Off");
            break;
        case FanSpeed_Lowest:
            generated_string_FanSpeed = new JSONStringValue("Lowest");
            break;
        case FanSpeed_Lower:
            generated_string_FanSpeed = new JSONStringValue("Lower");
            break;
        case FanSpeed_Low:
            generated_string_FanSpeed = new JSONStringValue("Low");
            break;
        case FanSpeed_Medium:
            generated_string_FanSpeed = new JSONStringValue("Medium");
            break;
        case FanSpeed_High:
            generated_string_FanSpeed = new JSONStringValue("High");
            break;
        case FanSpeed_Higher:
            generated_string_FanSpeed = new JSONStringValue("Higher");
            break;
        case FanSpeed_Highest:
            generated_string_FanSpeed = new JSONStringValue("Highest");
            break;
        case FanSpeed_On:
            generated_string_FanSpeed = new JSONStringValue("On");
            break;
        case FanSpeed_Auto:
            generated_string_FanSpeed = new JSONStringValue("Auto");
            break;
        case FanSpeed_NoChange:
            generated_string_FanSpeed = new JSONStringValue("NoChange");
            break;
        case FanSpeed_SetTo:
            generated_string_FanSpeed = new JSONStringValue("SetTo");
            break;
        default:
            assert(false);
            generated_string_FanSpeed = NULL;
      }
    return generated_string_FanSpeed;
  }

JSONValue *CarControlClimateCommandJSON::extraFanSpeedNumberToJSON(void) const
  {
    JSONValue *generated_rational_FanSpeedNumber;
    if (((double)(long int)storeFanSpeedNumber) == storeFanSpeedNumber)
        generated_rational_FanSpeedNumber = new JSONIntegerValue((long int)(storeFanSpeedNumber));
    else
        generated_rational_FanSpeedNumber = new JSONRationalValue(storeFanSpeedNumber, DBL_DIG);
    return generated_rational_FanSpeedNumber;
  }

JSONValue *CarControlClimateCommandJSON::extraVentsToJSON(void) const
  {
    JSONValueHandler handler_Vents;
    storeVents->write_as_json(&handler_Vents);
    handler_Vents.result->add_reference();
    return handler_Vents.result;
  }

JSONValue *CarControlClimateCommandJSON::extraTemperatureToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Temperature = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeTemperature.size(); ++num1)
      {
        JSONValueHandler handler_Temperature;
        storeTemperature[num1]->write_as_json(&handler_Temperature);
        handler_Temperature.result->add_reference();
        generated_array_1_Temperature->appendComponent(handler_Temperature.result);
        handler_Temperature.result->remove_reference();
      }
    return generated_array_1_Temperature;
  }

void CarControlClimateCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlClimateCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "djust", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[7]), "an") == 0)
                              {
                                the_enum = CommandType_AdjustFan;
                                goto enum_is_done;
                              }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[7]), "emperature") == 0)
                              {
                                the_enum = CommandType_AdjustTemperature;
                                goto enum_is_done;
                              }
                        break;
                    case 'V':
                        if (strcmp(&(json_string->getData()[7]), "ents") == 0)
                              {
                                the_enum = CommandType_AdjustVents;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "axAirConditioning") == 0)
                  {
                    the_enum = CommandType_MaxAirConditioning;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strncmp(&(json_string->getData()[1]), "ecirculateO", 11) == 0)
              {
                switch ((unsigned char)(json_string->getData()[12]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[13]), "f") == 0)
                              {
                                the_enum = CommandType_RecirculateOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[13] == 0)
                              {
                                the_enum = CommandType_RecirculateOn;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "tClimateControlTo", 17) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[19]))
                          {
                            case 'A':
                                if (strcmp(&(json_string->getData()[20]), "uto") == 0)
                                      {
                                        the_enum = CommandType_SetClimateControlToAuto;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[20]), "anual") == 0)
                                      {
                                        the_enum = CommandType_SetClimateControlToManual;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "owClimateControlScreen") == 0)
                          {
                            the_enum = CommandType_ShowClimateControlScreen;
                            goto enum_is_done;
                          }
                    break;
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "ncTemperatureZones") == 0)
                          {
                            the_enum = CommandType_SyncTemperatureZones;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "urn", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'A':
                        if (strncmp(&(json_string->getData()[5]), "irConditioningO", 15) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[20]))
                              {
                                case 'f':
                                    if (strcmp(&(json_string->getData()[21]), "f") == 0)
                                          {
                                            the_enum = CommandType_TurnAirConditioningOff;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'n':
                                    if (json_string->getData()[21] == 0)
                                          {
                                            the_enum = CommandType_TurnAirConditioningOn;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'H':
                        if (strncmp(&(json_string->getData()[5]), "eatingO", 7) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[12]))
                              {
                                case 'f':
                                    if (strcmp(&(json_string->getData()[13]), "f") == 0)
                                          {
                                            the_enum = CommandType_TurnHeatingOff;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'n':
                                    if (json_string->getData()[13] == 0)
                                          {
                                            the_enum = CommandType_TurnHeatingOn;
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
    throw("The value for field CommandType of CarControlClimateCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlClimateCommandJSON::fromJSONFanSpeed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FanSpeed of CarControlClimateCommandJSON is not a string.");
    TypeFanSpeed the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "uto") == 0)
                  {
                    the_enum = FanSpeed_Auto;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strncmp(&(json_string->getData()[1]), "igh", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 0:
                          {
                            the_enum = FanSpeed_High;
                            goto enum_is_done;
                          }
                    case 'e':
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'r':
                                if (json_string->getData()[6] == 0)
                                      {
                                        the_enum = FanSpeed_Higher;
                                        goto enum_is_done;
                                      }
                                break;
                            case 's':
                                if (strcmp(&(json_string->getData()[6]), "t") == 0)
                                      {
                                        the_enum = FanSpeed_Highest;
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
        case 'L':
            if (strncmp(&(json_string->getData()[1]), "ow", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 0:
                          {
                            the_enum = FanSpeed_Low;
                            goto enum_is_done;
                          }
                    case 'e':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'r':
                                if (json_string->getData()[5] == 0)
                                      {
                                        the_enum = FanSpeed_Lower;
                                        goto enum_is_done;
                                      }
                                break;
                            case 's':
                                if (strcmp(&(json_string->getData()[5]), "t") == 0)
                                      {
                                        the_enum = FanSpeed_Lowest;
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
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "edium") == 0)
                  {
                    the_enum = FanSpeed_Medium;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "oChange") == 0)
                  {
                    the_enum = FanSpeed_NoChange;
                    goto enum_is_done;
                  }
            break;
        case 'O':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'f':
                    if (strcmp(&(json_string->getData()[2]), "f") == 0)
                          {
                            the_enum = FanSpeed_Off;
                            goto enum_is_done;
                          }
                    break;
                case 'n':
                    if (json_string->getData()[2] == 0)
                          {
                            the_enum = FanSpeed_On;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "etTo") == 0)
                  {
                    the_enum = FanSpeed_SetTo;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field FanSpeed of CarControlClimateCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setFanSpeed(the_enum);
  }

void CarControlClimateCommandJSON::fromJSONFanSpeedNumber(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FanSpeedNumber of CarControlClimateCommandJSON is not a number.");
          }
      }
    setFanSpeedNumberText(the_rational_text);
  }

void CarControlClimateCommandJSON::fromJSONVents(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeVentsJSON *convert_classy = TypeVentsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVents(convert_classy);
    convert_classy->remove_reference();
  }

void CarControlClimateCommandJSON::fromJSONTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Temperature of CarControlClimateCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Temperature of CarControlClimateCommandJSON has too few elements.");
    std::vector< TypeTemperatureJSON * > vector_Temperature1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeTemperatureJSON *convert_classy = TypeTemperatureJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Temperature1[num1] = convert_classy;
      }
    assert(vector_Temperature1.size() >= 1);
    initTemperature();
    for (size_t num2 = 0; num2 < vector_Temperature1.size(); ++num2)
        appendTemperature(vector_Temperature1[num2]);
    for (size_t num1 = 0; num1 < vector_Temperature1.size(); ++num1)
      {
        vector_Temperature1[num1]->remove_reference();
      }
  }

CarControlClimateCommandJSON::CarControlClimateCommandJSON(void) :
        flagHasCommandType(false),
        flagHasFanSpeed(false),
        flagHasFanSpeedNumber(false),
        flagHasVents(false),
        flagHasTemperature(false)
  {
    extraIndex = create_string_index();
  }

CarControlClimateCommandJSON::~CarControlClimateCommandJSON(void)
  {
    if (flagHasVents)
      {
        storeVents->remove_reference();
      }
    if (flagHasTemperature)
      {
        for (size_t num4 = 0; num4 < storeTemperature.size(); ++num4)
          {
            storeTemperature[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlClimateCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlClimateCommand";
  }

bool CarControlClimateCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlClimateCommandJSON::TypeCommandType CarControlClimateCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlClimateCommandJSON::TypeCommandType CarControlClimateCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlClimateCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlClimateCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlClimateCommandJSON::hasFanSpeed(void) const
  {
    return flagHasFanSpeed;
  }

CarControlClimateCommandJSON::TypeFanSpeed CarControlClimateCommandJSON::getFanSpeed(void)
  {
    assert(flagHasFanSpeed);
    return storeFanSpeed;
  }

const CarControlClimateCommandJSON::TypeFanSpeed CarControlClimateCommandJSON::getFanSpeed(void) const
  {
    assert(flagHasFanSpeed);
    return storeFanSpeed;
  }

const char *CarControlClimateCommandJSON::getFanSpeedAsChars(void) const
  {
    return stringFromFanSpeed(getFanSpeed());
  }

std::string CarControlClimateCommandJSON::getFanSpeedAsString(void) const
  {
    return stringFromFanSpeed(getFanSpeed());
  }

bool CarControlClimateCommandJSON::hasFanSpeedNumber(void) const
  {
    return flagHasFanSpeedNumber;
  }

double CarControlClimateCommandJSON::getFanSpeedNumber(void)
  {
    assert(flagHasFanSpeedNumber);
    if (textStoreFanSpeedNumber != "")
      {
        return atof(textStoreFanSpeedNumber.c_str());
      }
    return storeFanSpeedNumber;
  }

const double CarControlClimateCommandJSON::getFanSpeedNumber(void) const
  {
    assert(flagHasFanSpeedNumber);
    if (textStoreFanSpeedNumber != "")
      {
        return atof(textStoreFanSpeedNumber.c_str());
      }
    return storeFanSpeedNumber;
  }

std::string CarControlClimateCommandJSON::getFanSpeedNumberAsText(void) const
  {
    assert(flagHasFanSpeedNumber);
    if (textStoreFanSpeedNumber == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeFanSpeedNumber);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreFanSpeedNumber);
      }
  }

bool CarControlClimateCommandJSON::hasVents(void) const
  {
    return flagHasVents;
  }

CarControlClimateCommandJSON::TypeVentsJSON * CarControlClimateCommandJSON::getVents(void)
  {
    assert(flagHasVents);
    return storeVents;
  }

const CarControlClimateCommandJSON::TypeVentsJSON * CarControlClimateCommandJSON::getVents(void) const
  {
    assert(flagHasVents);
    return storeVents;
  }

bool CarControlClimateCommandJSON::hasTemperature(void) const
  {
    return flagHasTemperature;
  }

size_t CarControlClimateCommandJSON::countOfTemperature(void) const
  {
    assert(flagHasTemperature);
    return storeTemperature.size();
  }

CarControlClimateCommandJSON::TypeTemperatureJSON * CarControlClimateCommandJSON::elementOfTemperature(size_t element_num)
  {
    assert(flagHasTemperature);
    return storeTemperature[element_num];
  }

const CarControlClimateCommandJSON::TypeTemperatureJSON * CarControlClimateCommandJSON::elementOfTemperature(size_t element_num) const
  {
    assert(flagHasTemperature);
    return storeTemperature[element_num];
  }

std::vector< CarControlClimateCommandJSON::TypeTemperatureJSON * > CarControlClimateCommandJSON::getTemperature(void)
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

const std::vector< CarControlClimateCommandJSON::TypeTemperatureJSON * > CarControlClimateCommandJSON::getTemperature(void) const
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

CarControlClimateCommandJSON::TypeVentsJSON *CarControlClimateCommandJSON::TypeVentsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeVentsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeVentsJSON>, TypeVentsJSON *, bool> generator("Type TypeVents", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
CarControlClimateCommandJSON::TypeTemperatureJSON *CarControlClimateCommandJSON::TypeTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool> generator("Type TypeTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
CarControlClimateCommandJSON *CarControlClimateCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlClimateCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlClimateCommandJSON>, CarControlClimateCommandJSON *, bool> generator("Type CarControlClimateCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
