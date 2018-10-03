/* file "CarControlStatusCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlStatusCommandJSON.h"

#include "CarControlStatusCommandJSON.h"


CarControlStatusCommandJSON::TypeTireSelection CarControlStatusCommandJSON::stringToTireSelection(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ll") == 0)
                return TireSelection_All;
            break;
        case 'B':
            if (strncmp(&(chars[1]), "oth", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'F':
                        if (strcmp(&(chars[5]), "ront") == 0)
                            return TireSelection_BothFront;
                        break;
                    case 'L':
                        if (strcmp(&(chars[5]), "eft") == 0)
                            return TireSelection_BothLeft;
                        break;
                    case 'R':
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'e':
                                if (strcmp(&(chars[6]), "ar") == 0)
                                    return TireSelection_BothRear;
                                break;
                            case 'i':
                                if (strcmp(&(chars[6]), "ght") == 0)
                                    return TireSelection_BothRight;
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
            if (strncmp(&(chars[1]), "eft", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'F':
                        if (strcmp(&(chars[5]), "ront") == 0)
                            return TireSelection_LeftFront;
                        break;
                    case 'R':
                        if (strcmp(&(chars[5]), "ear") == 0)
                            return TireSelection_LeftRear;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return TireSelection_None;
            break;
        case 'R':
            if (strncmp(&(chars[1]), "ight", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'F':
                        if (strcmp(&(chars[6]), "ront") == 0)
                            return TireSelection_RightFront;
                        break;
                    case 'R':
                        if (strcmp(&(chars[6]), "ear") == 0)
                            return TireSelection_RightRear;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `TireSelection' is not one of the legal values.");
  }

const char *CarControlStatusCommandJSON::stringFromTireSelection(TypeTireSelection the_enum)
  {
    switch (the_enum)
      {
        case TireSelection_LeftFront:
            return "LeftFront";
        case TireSelection_RightFront:
            return "RightFront";
        case TireSelection_BothFront:
            return "BothFront";
        case TireSelection_LeftRear:
            return "LeftRear";
        case TireSelection_RightRear:
            return "RightRear";
        case TireSelection_BothRear:
            return "BothRear";
        case TireSelection_BothLeft:
            return "BothLeft";
        case TireSelection_BothRight:
            return "BothRight";
        case TireSelection_All:
            return "All";
        case TireSelection_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlStatusCommandJSON::TypeCommandType CarControlStatusCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'r':
                    if (strcmp(&(chars[2]), "eSeatbeltsOn") == 0)
                        return CommandType_AreSeatbeltsOn;
                    break;
                case 'v':
                    if (strcmp(&(chars[2]), "erageSpeed") == 0)
                        return CommandType_AverageSpeed;
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "tteryVoltage") == 0)
                        return CommandType_BatteryVoltage;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "akePadStatus") == 0)
                        return CommandType_BrakePadStatus;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'h':
                    if (strcmp(&(chars[2]), "eckEngineLightMeaning") == 0)
                        return CommandType_CheckEngineLightMeaning;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "olantTemperature") == 0)
                        return CommandType_CoolantTemperature;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "rrent", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'G':
                                if (strcmp(&(chars[8]), "ear") == 0)
                                    return CommandType_CurrentGear;
                                break;
                            case 'S':
                                if (strcmp(&(chars[8]), "peed") == 0)
                                    return CommandType_CurrentSpeed;
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
        case 'D':
            if (strcmp(&(chars[1]), "istanceBeforeOutOfFuel") == 0)
                return CommandType_DistanceBeforeOutOfFuel;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "ngineEfficiency") == 0)
                return CommandType_EngineEfficiency;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "uelInTankLeft") == 0)
                return CommandType_FuelInTankLeft;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "owAmIDriving") == 0)
                return CommandType_HowAmIDriving;
            break;
        case 'M':
            if (strncmp(&(chars[1]), "ileageToNext", 12) == 0)
              {
                switch ((unsigned char)(chars[13]))
                  {
                    case 'O':
                        if (strcmp(&(chars[14]), "ilChange") == 0)
                            return CommandType_MileageToNextOilChange;
                        break;
                    case 'S':
                        if (strcmp(&(chars[14]), "ervice") == 0)
                            return CommandType_MileageToNextService;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ilLevel") == 0)
                return CommandType_OilLevel;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "irePressure") == 0)
                return CommandType_TirePressure;
            break;
        case 'W':
            switch ((unsigned char)(chars[1]))
              {
                case 'h':
                    if (strcmp(&(chars[2]), "ichSideFuelTank") == 0)
                        return CommandType_WhichSideFuelTank;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "perFluidLeft") == 0)
                        return CommandType_WiperFluidLeft;
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

const char *CarControlStatusCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_FuelInTankLeft:
            return "FuelInTankLeft";
        case CommandType_DistanceBeforeOutOfFuel:
            return "DistanceBeforeOutOfFuel";
        case CommandType_TirePressure:
            return "TirePressure";
        case CommandType_CheckEngineLightMeaning:
            return "CheckEngineLightMeaning";
        case CommandType_EngineEfficiency:
            return "EngineEfficiency";
        case CommandType_CoolantTemperature:
            return "CoolantTemperature";
        case CommandType_BrakePadStatus:
            return "BrakePadStatus";
        case CommandType_MileageToNextService:
            return "MileageToNextService";
        case CommandType_CurrentSpeed:
            return "CurrentSpeed";
        case CommandType_CurrentGear:
            return "CurrentGear";
        case CommandType_WhichSideFuelTank:
            return "WhichSideFuelTank";
        case CommandType_WiperFluidLeft:
            return "WiperFluidLeft";
        case CommandType_AreSeatbeltsOn:
            return "AreSeatbeltsOn";
        case CommandType_HowAmIDriving:
            return "HowAmIDriving";
        case CommandType_OilLevel:
            return "OilLevel";
        case CommandType_BatteryVoltage:
            return "BatteryVoltage";
        case CommandType_AverageSpeed:
            return "AverageSpeed";
        case CommandType_MileageToNextOilChange:
            return "MileageToNextOilChange";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlStatusCommandJSON::TypeEfficiencyUnit CarControlStatusCommandJSON::stringToEfficiencyUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'K':
            if (strcmp(&(chars[1]), "m/L") == 0)
                return EfficiencyUnit_Km_x2f_L;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "/100Km") == 0)
                return EfficiencyUnit_L_x2f_100Km;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "PG") == 0)
                return EfficiencyUnit_MPG;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return EfficiencyUnit_None;
            break;
        default:
            break;
      }
    throw("The value for field `EfficiencyUnit' is not one of the legal values.");
  }

const char *CarControlStatusCommandJSON::stringFromEfficiencyUnit(TypeEfficiencyUnit the_enum)
  {
    switch (the_enum)
      {
        case EfficiencyUnit_MPG:
            return "MPG";
        case EfficiencyUnit_L_x2f_100Km:
            return "L/100Km";
        case EfficiencyUnit_Km_x2f_L:
            return "Km/L";
        case EfficiencyUnit_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlStatusCommandJSON::CarControlStatusCommandJSON(const CarControlStatusCommandJSON &)
  {
    assert(false);
  }

CarControlStatusCommandJSON &CarControlStatusCommandJSON::operator=(const CarControlStatusCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlStatusCommandJSON::extraTireSelectionToJSON(void) const
  {
    JSONStringValue *generated_string_TireSelection;
    switch (storeTireSelection)
      {
        case TireSelection_LeftFront:
            generated_string_TireSelection = new JSONStringValue("LeftFront");
            break;
        case TireSelection_RightFront:
            generated_string_TireSelection = new JSONStringValue("RightFront");
            break;
        case TireSelection_BothFront:
            generated_string_TireSelection = new JSONStringValue("BothFront");
            break;
        case TireSelection_LeftRear:
            generated_string_TireSelection = new JSONStringValue("LeftRear");
            break;
        case TireSelection_RightRear:
            generated_string_TireSelection = new JSONStringValue("RightRear");
            break;
        case TireSelection_BothRear:
            generated_string_TireSelection = new JSONStringValue("BothRear");
            break;
        case TireSelection_BothLeft:
            generated_string_TireSelection = new JSONStringValue("BothLeft");
            break;
        case TireSelection_BothRight:
            generated_string_TireSelection = new JSONStringValue("BothRight");
            break;
        case TireSelection_All:
            generated_string_TireSelection = new JSONStringValue("All");
            break;
        case TireSelection_None:
            generated_string_TireSelection = new JSONStringValue("None");
            break;
        default:
            assert(false);
            generated_string_TireSelection = NULL;
      }
    return generated_string_TireSelection;
  }

JSONValue *CarControlStatusCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_FuelInTankLeft:
            generated_string_CommandType = new JSONStringValue("FuelInTankLeft");
            break;
        case CommandType_DistanceBeforeOutOfFuel:
            generated_string_CommandType = new JSONStringValue("DistanceBeforeOutOfFuel");
            break;
        case CommandType_TirePressure:
            generated_string_CommandType = new JSONStringValue("TirePressure");
            break;
        case CommandType_CheckEngineLightMeaning:
            generated_string_CommandType = new JSONStringValue("CheckEngineLightMeaning");
            break;
        case CommandType_EngineEfficiency:
            generated_string_CommandType = new JSONStringValue("EngineEfficiency");
            break;
        case CommandType_CoolantTemperature:
            generated_string_CommandType = new JSONStringValue("CoolantTemperature");
            break;
        case CommandType_BrakePadStatus:
            generated_string_CommandType = new JSONStringValue("BrakePadStatus");
            break;
        case CommandType_MileageToNextService:
            generated_string_CommandType = new JSONStringValue("MileageToNextService");
            break;
        case CommandType_CurrentSpeed:
            generated_string_CommandType = new JSONStringValue("CurrentSpeed");
            break;
        case CommandType_CurrentGear:
            generated_string_CommandType = new JSONStringValue("CurrentGear");
            break;
        case CommandType_WhichSideFuelTank:
            generated_string_CommandType = new JSONStringValue("WhichSideFuelTank");
            break;
        case CommandType_WiperFluidLeft:
            generated_string_CommandType = new JSONStringValue("WiperFluidLeft");
            break;
        case CommandType_AreSeatbeltsOn:
            generated_string_CommandType = new JSONStringValue("AreSeatbeltsOn");
            break;
        case CommandType_HowAmIDriving:
            generated_string_CommandType = new JSONStringValue("HowAmIDriving");
            break;
        case CommandType_OilLevel:
            generated_string_CommandType = new JSONStringValue("OilLevel");
            break;
        case CommandType_BatteryVoltage:
            generated_string_CommandType = new JSONStringValue("BatteryVoltage");
            break;
        case CommandType_AverageSpeed:
            generated_string_CommandType = new JSONStringValue("AverageSpeed");
            break;
        case CommandType_MileageToNextOilChange:
            generated_string_CommandType = new JSONStringValue("MileageToNextOilChange");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlStatusCommandJSON::extraShowMeToJSON(void) const
  {
    JSONValue *generated_boolean_ShowMe = (storeShowMe ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_ShowMe;
  }

JSONValue *CarControlStatusCommandJSON::extraEfficiencyUnitToJSON(void) const
  {
    JSONStringValue *generated_string_EfficiencyUnit;
    switch (storeEfficiencyUnit)
      {
        case EfficiencyUnit_MPG:
            generated_string_EfficiencyUnit = new JSONStringValue("MPG");
            break;
        case EfficiencyUnit_L_x2f_100Km:
            generated_string_EfficiencyUnit = new JSONStringValue("L/100Km");
            break;
        case EfficiencyUnit_Km_x2f_L:
            generated_string_EfficiencyUnit = new JSONStringValue("Km/L");
            break;
        case EfficiencyUnit_None:
            generated_string_EfficiencyUnit = new JSONStringValue("None");
            break;
        default:
            assert(false);
            generated_string_EfficiencyUnit = NULL;
      }
    return generated_string_EfficiencyUnit;
  }

void CarControlStatusCommandJSON::fromJSONTireSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TireSelection of CarControlStatusCommandJSON is not a string.");
    TypeTireSelection the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ll") == 0)
                  {
                    the_enum = TireSelection_All;
                    goto enum_is_done;
                  }
            break;
        case 'B':
            if (strncmp(&(json_string->getData()[1]), "oth", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[5]), "ront") == 0)
                              {
                                the_enum = TireSelection_BothFront;
                                goto enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[5]), "eft") == 0)
                              {
                                the_enum = TireSelection_BothLeft;
                                goto enum_is_done;
                              }
                        break;
                    case 'R':
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[6]), "ar") == 0)
                                      {
                                        the_enum = TireSelection_BothRear;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'i':
                                if (strcmp(&(json_string->getData()[6]), "ght") == 0)
                                      {
                                        the_enum = TireSelection_BothRight;
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
            if (strncmp(&(json_string->getData()[1]), "eft", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[5]), "ront") == 0)
                              {
                                the_enum = TireSelection_LeftFront;
                                goto enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strcmp(&(json_string->getData()[5]), "ear") == 0)
                              {
                                the_enum = TireSelection_LeftRear;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = TireSelection_None;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strncmp(&(json_string->getData()[1]), "ight", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[6]), "ront") == 0)
                              {
                                the_enum = TireSelection_RightFront;
                                goto enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strcmp(&(json_string->getData()[6]), "ear") == 0)
                              {
                                the_enum = TireSelection_RightRear;
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
    throw("The value for field TireSelection of CarControlStatusCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setTireSelection(the_enum);
  }

void CarControlStatusCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlStatusCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "eSeatbeltsOn") == 0)
                          {
                            the_enum = CommandType_AreSeatbeltsOn;
                            goto enum_is_done;
                          }
                    break;
                case 'v':
                    if (strcmp(&(json_string->getData()[2]), "erageSpeed") == 0)
                          {
                            the_enum = CommandType_AverageSpeed;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "tteryVoltage") == 0)
                          {
                            the_enum = CommandType_BatteryVoltage;
                            goto enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "akePadStatus") == 0)
                          {
                            the_enum = CommandType_BrakePadStatus;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "eckEngineLightMeaning") == 0)
                          {
                            the_enum = CommandType_CheckEngineLightMeaning;
                            goto enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "olantTemperature") == 0)
                          {
                            the_enum = CommandType_CoolantTemperature;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "rrent", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'G':
                                if (strcmp(&(json_string->getData()[8]), "ear") == 0)
                                      {
                                        the_enum = CommandType_CurrentGear;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'S':
                                if (strcmp(&(json_string->getData()[8]), "peed") == 0)
                                      {
                                        the_enum = CommandType_CurrentSpeed;
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
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "istanceBeforeOutOfFuel") == 0)
                  {
                    the_enum = CommandType_DistanceBeforeOutOfFuel;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "ngineEfficiency") == 0)
                  {
                    the_enum = CommandType_EngineEfficiency;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "uelInTankLeft") == 0)
                  {
                    the_enum = CommandType_FuelInTankLeft;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "owAmIDriving") == 0)
                  {
                    the_enum = CommandType_HowAmIDriving;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "ileageToNext", 12) == 0)
              {
                switch ((unsigned char)(json_string->getData()[13]))
                  {
                    case 'O':
                        if (strcmp(&(json_string->getData()[14]), "ilChange") == 0)
                              {
                                the_enum = CommandType_MileageToNextOilChange;
                                goto enum_is_done;
                              }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[14]), "ervice") == 0)
                              {
                                the_enum = CommandType_MileageToNextService;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ilLevel") == 0)
                  {
                    the_enum = CommandType_OilLevel;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "irePressure") == 0)
                  {
                    the_enum = CommandType_TirePressure;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ichSideFuelTank") == 0)
                          {
                            the_enum = CommandType_WhichSideFuelTank;
                            goto enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "perFluidLeft") == 0)
                          {
                            the_enum = CommandType_WiperFluidLeft;
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
    throw("The value for field CommandType of CarControlStatusCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlStatusCommandJSON::fromJSONShowMe(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ShowMe of CarControlStatusCommandJSON is not true for false.");
          }
      }
    setShowMe(the_bool);
  }

void CarControlStatusCommandJSON::fromJSONEfficiencyUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EfficiencyUnit of CarControlStatusCommandJSON is not a string.");
    TypeEfficiencyUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'K':
            if (strcmp(&(json_string->getData()[1]), "m/L") == 0)
                  {
                    the_enum = EfficiencyUnit_Km_x2f_L;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "/100Km") == 0)
                  {
                    the_enum = EfficiencyUnit_L_x2f_100Km;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "PG") == 0)
                  {
                    the_enum = EfficiencyUnit_MPG;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = EfficiencyUnit_None;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field EfficiencyUnit of CarControlStatusCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setEfficiencyUnit(the_enum);
  }

CarControlStatusCommandJSON::CarControlStatusCommandJSON(void) :
        flagHasTireSelection(false),
        flagHasCommandType(false),
        flagHasShowMe(false),
        flagHasEfficiencyUnit(false)
  {
    extraIndex = create_string_index();
  }

CarControlStatusCommandJSON::~CarControlStatusCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlStatusCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlStatusCommand";
  }

bool CarControlStatusCommandJSON::hasTireSelection(void) const
  {
    return flagHasTireSelection;
  }

CarControlStatusCommandJSON::TypeTireSelection CarControlStatusCommandJSON::getTireSelection(void)
  {
    assert(flagHasTireSelection);
    return storeTireSelection;
  }

const CarControlStatusCommandJSON::TypeTireSelection CarControlStatusCommandJSON::getTireSelection(void) const
  {
    assert(flagHasTireSelection);
    return storeTireSelection;
  }

const char *CarControlStatusCommandJSON::getTireSelectionAsChars(void) const
  {
    return stringFromTireSelection(getTireSelection());
  }

std::string CarControlStatusCommandJSON::getTireSelectionAsString(void) const
  {
    return stringFromTireSelection(getTireSelection());
  }

bool CarControlStatusCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlStatusCommandJSON::TypeCommandType CarControlStatusCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlStatusCommandJSON::TypeCommandType CarControlStatusCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlStatusCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlStatusCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlStatusCommandJSON::hasShowMe(void) const
  {
    return flagHasShowMe;
  }

bool CarControlStatusCommandJSON::getShowMe(void)
  {
    assert(flagHasShowMe);
    return storeShowMe;
  }

const bool CarControlStatusCommandJSON::getShowMe(void) const
  {
    assert(flagHasShowMe);
    return storeShowMe;
  }

bool CarControlStatusCommandJSON::hasEfficiencyUnit(void) const
  {
    return flagHasEfficiencyUnit;
  }

CarControlStatusCommandJSON::TypeEfficiencyUnit CarControlStatusCommandJSON::getEfficiencyUnit(void)
  {
    assert(flagHasEfficiencyUnit);
    return storeEfficiencyUnit;
  }

const CarControlStatusCommandJSON::TypeEfficiencyUnit CarControlStatusCommandJSON::getEfficiencyUnit(void) const
  {
    assert(flagHasEfficiencyUnit);
    return storeEfficiencyUnit;
  }

const char *CarControlStatusCommandJSON::getEfficiencyUnitAsChars(void) const
  {
    return stringFromEfficiencyUnit(getEfficiencyUnit());
  }

std::string CarControlStatusCommandJSON::getEfficiencyUnitAsString(void) const
  {
    return stringFromEfficiencyUnit(getEfficiencyUnit());
  }

CarControlStatusCommandJSON *CarControlStatusCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlStatusCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlStatusCommandJSON>, CarControlStatusCommandJSON *, bool> generator("Type CarControlStatusCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
