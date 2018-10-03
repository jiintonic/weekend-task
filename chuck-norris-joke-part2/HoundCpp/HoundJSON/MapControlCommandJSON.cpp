/* file "MapControlCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MapControlCommandJSON.h"

#include "MapControlCommandJSON.h"


MapControlCommandJSON::TypeCommandType MapControlCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strncmp(&(chars[1]), "apView", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case '2':
                        if (strcmp(&(chars[8]), "D") == 0)
                            return CommandType_MapView2D;
                        break;
                    case '3':
                        if (strcmp(&(chars[8]), "D") == 0)
                            return CommandType_MapView3D;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strncmp(&(chars[1]), "anMap", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'A':
                        if (strcmp(&(chars[7]), "bsolute") == 0)
                            return CommandType_PanMapAbsolute;
                        break;
                    case 'R':
                        if (strcmp(&(chars[7]), "elative") == 0)
                            return CommandType_PanMapRelative;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            if (strncmp(&(chars[1]), "otateMap", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 0:
                        return CommandType_RotateMap;
                    case 'T':
                        if (strcmp(&(chars[10]), "oHeading") == 0)
                            return CommandType_RotateMapToHeading;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'Z':
            if (strcmp(&(chars[1]), "oomMap") == 0)
                return CommandType_ZoomMap;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *MapControlCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_PanMapAbsolute:
            return "PanMapAbsolute";
        case CommandType_PanMapRelative:
            return "PanMapRelative";
        case CommandType_ZoomMap:
            return "ZoomMap";
        case CommandType_RotateMap:
            return "RotateMap";
        case CommandType_RotateMapToHeading:
            return "RotateMapToHeading";
        case CommandType_MapView2D:
            return "MapView2D";
        case CommandType_MapView3D:
            return "MapView3D";
        default:
            assert(false);
            return NULL;
      }
  }

MapControlCommandJSON::TypePanUnit MapControlCommandJSON::stringToPanUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'K':
            if (strcmp(&(chars[1]), "ilometres") == 0)
                return PanUnit_Kilometres;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "iles") == 0)
                return PanUnit_Miles;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return PanUnit_None;
            break;
        default:
            break;
      }
    throw("The value for field `PanUnit' is not one of the legal values.");
  }

const char *MapControlCommandJSON::stringFromPanUnit(TypePanUnit the_enum)
  {
    switch (the_enum)
      {
        case PanUnit_Miles:
            return "Miles";
        case PanUnit_Kilometres:
            return "Kilometres";
        case PanUnit_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

MapControlCommandJSON::TypeZoomUnit MapControlCommandJSON::stringToZoomUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "eet") == 0)
                return ZoomUnit_Feet;
            break;
        case 'K':
            if (strcmp(&(chars[1]), "ilometres") == 0)
                return ZoomUnit_Kilometres;
            break;
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "tres") == 0)
                        return ZoomUnit_Metres;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "les") == 0)
                        return ZoomUnit_Miles;
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return ZoomUnit_None;
            break;
        default:
            break;
      }
    throw("The value for field `ZoomUnit' is not one of the legal values.");
  }

const char *MapControlCommandJSON::stringFromZoomUnit(TypeZoomUnit the_enum)
  {
    switch (the_enum)
      {
        case ZoomUnit_Miles:
            return "Miles";
        case ZoomUnit_Feet:
            return "Feet";
        case ZoomUnit_Kilometres:
            return "Kilometres";
        case ZoomUnit_Metres:
            return "Metres";
        case ZoomUnit_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

MapControlCommandJSON::MapControlCommandJSON(const MapControlCommandJSON &)
  {
    assert(false);
  }

MapControlCommandJSON &MapControlCommandJSON::operator=(const MapControlCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MapControlCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_PanMapAbsolute:
            generated_string_CommandType = new JSONStringValue("PanMapAbsolute");
            break;
        case CommandType_PanMapRelative:
            generated_string_CommandType = new JSONStringValue("PanMapRelative");
            break;
        case CommandType_ZoomMap:
            generated_string_CommandType = new JSONStringValue("ZoomMap");
            break;
        case CommandType_RotateMap:
            generated_string_CommandType = new JSONStringValue("RotateMap");
            break;
        case CommandType_RotateMapToHeading:
            generated_string_CommandType = new JSONStringValue("RotateMapToHeading");
            break;
        case CommandType_MapView2D:
            generated_string_CommandType = new JSONStringValue("MapView2D");
            break;
        case CommandType_MapView3D:
            generated_string_CommandType = new JSONStringValue("MapView3D");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *MapControlCommandJSON::extraDirectionToJSON(void) const
  {
    JSONValue *generated_rational_Direction;
    if (((double)(long int)storeDirection) == storeDirection)
        generated_rational_Direction = new JSONIntegerValue((long int)(storeDirection));
    else
        generated_rational_Direction = new JSONRationalValue(storeDirection, DBL_DIG);
    return generated_rational_Direction;
  }

JSONValue *MapControlCommandJSON::extraPanDistanceToJSON(void) const
  {
    JSONValue *generated_rational_PanDistance;
    if (((double)(long int)storePanDistance) == storePanDistance)
        generated_rational_PanDistance = new JSONIntegerValue((long int)(storePanDistance));
    else
        generated_rational_PanDistance = new JSONRationalValue(storePanDistance, DBL_DIG);
    return generated_rational_PanDistance;
  }

JSONValue *MapControlCommandJSON::extraPanUnitToJSON(void) const
  {
    JSONStringValue *generated_string_PanUnit;
    switch (storePanUnit)
      {
        case PanUnit_Miles:
            generated_string_PanUnit = new JSONStringValue("Miles");
            break;
        case PanUnit_Kilometres:
            generated_string_PanUnit = new JSONStringValue("Kilometres");
            break;
        case PanUnit_None:
            generated_string_PanUnit = new JSONStringValue("None");
            break;
        default:
            assert(false);
            generated_string_PanUnit = NULL;
      }
    return generated_string_PanUnit;
  }

JSONValue *MapControlCommandJSON::extraZoomAmountToJSON(void) const
  {
    JSONValue *generated_rational_ZoomAmount;
    if (((double)(long int)storeZoomAmount) == storeZoomAmount)
        generated_rational_ZoomAmount = new JSONIntegerValue((long int)(storeZoomAmount));
    else
        generated_rational_ZoomAmount = new JSONRationalValue(storeZoomAmount, DBL_DIG);
    return generated_rational_ZoomAmount;
  }

JSONValue *MapControlCommandJSON::extraZoomUnitToJSON(void) const
  {
    JSONStringValue *generated_string_ZoomUnit;
    switch (storeZoomUnit)
      {
        case ZoomUnit_Miles:
            generated_string_ZoomUnit = new JSONStringValue("Miles");
            break;
        case ZoomUnit_Feet:
            generated_string_ZoomUnit = new JSONStringValue("Feet");
            break;
        case ZoomUnit_Kilometres:
            generated_string_ZoomUnit = new JSONStringValue("Kilometres");
            break;
        case ZoomUnit_Metres:
            generated_string_ZoomUnit = new JSONStringValue("Metres");
            break;
        case ZoomUnit_None:
            generated_string_ZoomUnit = new JSONStringValue("None");
            break;
        default:
            assert(false);
            generated_string_ZoomUnit = NULL;
      }
    return generated_string_ZoomUnit;
  }

void MapControlCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of MapControlCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "apView", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case '2':
                        if (strcmp(&(json_string->getData()[8]), "D") == 0)
                              {
                                the_enum = CommandType_MapView2D;
                                goto enum_is_done;
                              }
                        break;
                    case '3':
                        if (strcmp(&(json_string->getData()[8]), "D") == 0)
                              {
                                the_enum = CommandType_MapView3D;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strncmp(&(json_string->getData()[1]), "anMap", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[7]), "bsolute") == 0)
                              {
                                the_enum = CommandType_PanMapAbsolute;
                                goto enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strcmp(&(json_string->getData()[7]), "elative") == 0)
                              {
                                the_enum = CommandType_PanMapRelative;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            if (strncmp(&(json_string->getData()[1]), "otateMap", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 0:
                          {
                            the_enum = CommandType_RotateMap;
                            goto enum_is_done;
                          }
                    case 'T':
                        if (strcmp(&(json_string->getData()[10]), "oHeading") == 0)
                              {
                                the_enum = CommandType_RotateMapToHeading;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'Z':
            if (strcmp(&(json_string->getData()[1]), "oomMap") == 0)
                  {
                    the_enum = CommandType_ZoomMap;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of MapControlCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void MapControlCommandJSON::fromJSONDirection(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Direction of MapControlCommandJSON is not a number.");
          }
      }
    setDirectionText(the_rational_text);
  }

void MapControlCommandJSON::fromJSONPanDistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PanDistance of MapControlCommandJSON is not a number.");
          }
      }
    setPanDistanceText(the_rational_text);
  }

void MapControlCommandJSON::fromJSONPanUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PanUnit of MapControlCommandJSON is not a string.");
    TypePanUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'K':
            if (strcmp(&(json_string->getData()[1]), "ilometres") == 0)
                  {
                    the_enum = PanUnit_Kilometres;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "iles") == 0)
                  {
                    the_enum = PanUnit_Miles;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = PanUnit_None;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field PanUnit of MapControlCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setPanUnit(the_enum);
  }

void MapControlCommandJSON::fromJSONZoomAmount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ZoomAmount of MapControlCommandJSON is not a number.");
          }
      }
    setZoomAmountText(the_rational_text);
  }

void MapControlCommandJSON::fromJSONZoomUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ZoomUnit of MapControlCommandJSON is not a string.");
    TypeZoomUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "eet") == 0)
                  {
                    the_enum = ZoomUnit_Feet;
                    goto enum_is_done;
                  }
            break;
        case 'K':
            if (strcmp(&(json_string->getData()[1]), "ilometres") == 0)
                  {
                    the_enum = ZoomUnit_Kilometres;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "tres") == 0)
                          {
                            the_enum = ZoomUnit_Metres;
                            goto enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "les") == 0)
                          {
                            the_enum = ZoomUnit_Miles;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = ZoomUnit_None;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field ZoomUnit of MapControlCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setZoomUnit(the_enum);
  }

MapControlCommandJSON::MapControlCommandJSON(void) :
        flagHasCommandType(false),
        flagHasDirection(false),
        flagHasPanDistance(false),
        flagHasPanUnit(false),
        flagHasZoomAmount(false),
        flagHasZoomUnit(false)
  {
    extraIndex = create_string_index();
  }

MapControlCommandJSON::~MapControlCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MapControlCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "MapCommand";
  }

bool MapControlCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

MapControlCommandJSON::TypeCommandType MapControlCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const MapControlCommandJSON::TypeCommandType MapControlCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *MapControlCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string MapControlCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool MapControlCommandJSON::hasDirection(void) const
  {
    return flagHasDirection;
  }

double MapControlCommandJSON::getDirection(void)
  {
    assert(flagHasDirection);
    if (textStoreDirection != "")
      {
        return atof(textStoreDirection.c_str());
      }
    return storeDirection;
  }

const double MapControlCommandJSON::getDirection(void) const
  {
    assert(flagHasDirection);
    if (textStoreDirection != "")
      {
        return atof(textStoreDirection.c_str());
      }
    return storeDirection;
  }

std::string MapControlCommandJSON::getDirectionAsText(void) const
  {
    assert(flagHasDirection);
    if (textStoreDirection == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDirection);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDirection);
      }
  }

bool MapControlCommandJSON::hasPanDistance(void) const
  {
    return flagHasPanDistance;
  }

double MapControlCommandJSON::getPanDistance(void)
  {
    assert(flagHasPanDistance);
    if (textStorePanDistance != "")
      {
        return atof(textStorePanDistance.c_str());
      }
    return storePanDistance;
  }

const double MapControlCommandJSON::getPanDistance(void) const
  {
    assert(flagHasPanDistance);
    if (textStorePanDistance != "")
      {
        return atof(textStorePanDistance.c_str());
      }
    return storePanDistance;
  }

std::string MapControlCommandJSON::getPanDistanceAsText(void) const
  {
    assert(flagHasPanDistance);
    if (textStorePanDistance == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storePanDistance);
        return &(buffer[0]);
      }
    else
      {
        return (textStorePanDistance);
      }
  }

bool MapControlCommandJSON::hasPanUnit(void) const
  {
    return flagHasPanUnit;
  }

MapControlCommandJSON::TypePanUnit MapControlCommandJSON::getPanUnit(void)
  {
    assert(flagHasPanUnit);
    return storePanUnit;
  }

const MapControlCommandJSON::TypePanUnit MapControlCommandJSON::getPanUnit(void) const
  {
    assert(flagHasPanUnit);
    return storePanUnit;
  }

const char *MapControlCommandJSON::getPanUnitAsChars(void) const
  {
    return stringFromPanUnit(getPanUnit());
  }

std::string MapControlCommandJSON::getPanUnitAsString(void) const
  {
    return stringFromPanUnit(getPanUnit());
  }

bool MapControlCommandJSON::hasZoomAmount(void) const
  {
    return flagHasZoomAmount;
  }

double MapControlCommandJSON::getZoomAmount(void)
  {
    assert(flagHasZoomAmount);
    if (textStoreZoomAmount != "")
      {
        return atof(textStoreZoomAmount.c_str());
      }
    return storeZoomAmount;
  }

const double MapControlCommandJSON::getZoomAmount(void) const
  {
    assert(flagHasZoomAmount);
    if (textStoreZoomAmount != "")
      {
        return atof(textStoreZoomAmount.c_str());
      }
    return storeZoomAmount;
  }

std::string MapControlCommandJSON::getZoomAmountAsText(void) const
  {
    assert(flagHasZoomAmount);
    if (textStoreZoomAmount == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeZoomAmount);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreZoomAmount);
      }
  }

bool MapControlCommandJSON::hasZoomUnit(void) const
  {
    return flagHasZoomUnit;
  }

MapControlCommandJSON::TypeZoomUnit MapControlCommandJSON::getZoomUnit(void)
  {
    assert(flagHasZoomUnit);
    return storeZoomUnit;
  }

const MapControlCommandJSON::TypeZoomUnit MapControlCommandJSON::getZoomUnit(void) const
  {
    assert(flagHasZoomUnit);
    return storeZoomUnit;
  }

const char *MapControlCommandJSON::getZoomUnitAsChars(void) const
  {
    return stringFromZoomUnit(getZoomUnit());
  }

std::string MapControlCommandJSON::getZoomUnitAsString(void) const
  {
    return stringFromZoomUnit(getZoomUnit());
  }

MapControlCommandJSON *MapControlCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MapControlCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MapControlCommandJSON>, MapControlCommandJSON *, bool> generator("Type MapControlCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
