/* file "UnitConversionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitConversionJSON.h"

#include "UnitConversionJSON.h"


UnitConversionJSON::TypeConversionType::TypeConversionType(void)
  {
  }

UnitConversionJSON::TypeConversionType::TypeConversionType(const TypeConversionType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UnitConversionJSON::TypeConversionType::TypeConversionType(TypeConversionTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UnitConversionJSON::TypeConversionType::operator==(const TypeConversionType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UnitConversionJSON::TypeConversionType::operator!=(const TypeConversionType &other) const
  {
    return !(operator==(other));
  }

bool UnitConversionJSON::TypeConversionType::operator<(const TypeConversionType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UnitConversionJSON::TypeConversionType::operator>(const TypeConversionType &other) const
  {
    return other.operator<(*this);
  }

bool UnitConversionJSON::TypeConversionType::operator>=(const TypeConversionType &other) const
  {
    return !(operator<(other));
  }

bool UnitConversionJSON::TypeConversionType::operator<=(const TypeConversionType &other) const
  {
    return !(other.operator<(*this));
  }

UnitConversionJSON::TypeConversionTypeKnownValues UnitConversionJSON::stringToConversionType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strcmp(&(chars[2]), "celeration") == 0)
                        return ConversionType_Acceleration;
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "gles") == 0)
                        return ConversionType_Angles;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "ea") == 0)
                        return ConversionType_Area;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "ata") == 0)
                return ConversionType_Data;
            break;
        case 'F':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "rce") == 0)
                        return ConversionType_Force;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "equency") == 0)
                        return ConversionType_Frequency;
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ength") == 0)
                return ConversionType_Length;
            break;
        case 'M':
            if (strncmp(&(chars[1]), "ass", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 0:
                        return ConversionType_Mass;
                    case 'T':
                        if (strcmp(&(chars[5]), "oVolume") == 0)
                            return ConversionType_MassToVolume;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "wer") == 0)
                        return ConversionType_Power;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "essure") == 0)
                        return ConversionType_Pressure;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "peed") == 0)
                return ConversionType_Speed;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "mperature") == 0)
                        return ConversionType_Temperature;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "me") == 0)
                        return ConversionType_Time;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return ConversionType_Unknown;
            break;
        case 'V':
            if (strncmp(&(chars[1]), "olume", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 0:
                        return ConversionType_Volume;
                    case 'T':
                        if (strcmp(&(chars[7]), "oMass") == 0)
                            return ConversionType_VolumeToMass;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ork") == 0)
                return ConversionType_Work;
            break;
        default:
            break;
      }
    return ConversionType__none;
  }

const char *UnitConversionJSON::stringFromConversionType(TypeConversionTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ConversionType_MassToVolume:
            return "MassToVolume";
        case ConversionType_VolumeToMass:
            return "VolumeToMass";
        case ConversionType_Length:
            return "Length";
        case ConversionType_Temperature:
            return "Temperature";
        case ConversionType_Pressure:
            return "Pressure";
        case ConversionType_Mass:
            return "Mass";
        case ConversionType_Time:
            return "Time";
        case ConversionType_Data:
            return "Data";
        case ConversionType_Frequency:
            return "Frequency";
        case ConversionType_Angles:
            return "Angles";
        case ConversionType_Volume:
            return "Volume";
        case ConversionType_Force:
            return "Force";
        case ConversionType_Work:
            return "Work";
        case ConversionType_Power:
            return "Power";
        case ConversionType_Area:
            return "Area";
        case ConversionType_Speed:
            return "Speed";
        case ConversionType_Acceleration:
            return "Acceleration";
        case ConversionType_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::TypeUnitType(void)
  {
  }

UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::TypeUnitType(const TypeUnitType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::TypeUnitType(TypeUnitTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::operator==(const TypeUnitType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::operator!=(const TypeUnitType &other) const
  {
    return !(operator==(other));
  }

bool UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::operator<(const TypeUnitType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::operator>(const TypeUnitType &other) const
  {
    return other.operator<(*this);
  }

bool UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::operator>=(const TypeUnitType &other) const
  {
    return !(operator<(other));
  }

bool UnitConversionJSON::TypeReferencePointJSON::TypeUnitType::operator<=(const TypeUnitType &other) const
  {
    return !(other.operator<(*this));
  }

UnitConversionJSON::TypeReferencePointJSON::TypeUnitTypeKnownValues UnitConversionJSON::TypeReferencePointJSON::stringToUnitType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strcmp(&(chars[2]), "celeration") == 0)
                        return UnitType_Acceleration;
                    break;
                case 'n':
                    if (strcmp(&(chars[2]), "gles") == 0)
                        return UnitType_Angles;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "ea") == 0)
                        return UnitType_Area;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ta") == 0)
                        return UnitType_Data;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "nsity") == 0)
                        return UnitType_Density;
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "rce") == 0)
                        return UnitType_Force;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "equency") == 0)
                        return UnitType_Frequency;
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ength") == 0)
                return UnitType_Length;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "ass") == 0)
                return UnitType_Mass;
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "wer") == 0)
                        return UnitType_Power;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "essure") == 0)
                        return UnitType_Pressure;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "peed") == 0)
                return UnitType_Speed;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "mperature") == 0)
                        return UnitType_Temperature;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "me") == 0)
                        return UnitType_Time;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return UnitType_Unknown;
            break;
        case 'V':
            if (strcmp(&(chars[1]), "olume") == 0)
                return UnitType_Volume;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ork") == 0)
                return UnitType_Work;
            break;
        default:
            break;
      }
    return UnitType__none;
  }

const char *UnitConversionJSON::TypeReferencePointJSON::stringFromUnitType(TypeUnitTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case UnitType_Density:
            return "Density";
        case UnitType_Length:
            return "Length";
        case UnitType_Temperature:
            return "Temperature";
        case UnitType_Pressure:
            return "Pressure";
        case UnitType_Mass:
            return "Mass";
        case UnitType_Time:
            return "Time";
        case UnitType_Data:
            return "Data";
        case UnitType_Frequency:
            return "Frequency";
        case UnitType_Angles:
            return "Angles";
        case UnitType_Volume:
            return "Volume";
        case UnitType_Force:
            return "Force";
        case UnitType_Work:
            return "Work";
        case UnitType_Power:
            return "Power";
        case UnitType_Area:
            return "Area";
        case UnitType_Speed:
            return "Speed";
        case UnitType_Acceleration:
            return "Acceleration";
        case UnitType_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

UnitConversionJSON::TypeReferencePointJSON::TypeReferencePointJSON(const TypeReferencePointJSON &)
  {
    assert(false);
  }

UnitConversionJSON::TypeReferencePointJSON &UnitConversionJSON::TypeReferencePointJSON::operator=(const TypeReferencePointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitConversionJSON::TypeReferencePointJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Unit of TypeReferencePointJSON is not a string.");
    setUnit(std::string(json_string->getData()));
  }

void UnitConversionJSON::TypeReferencePointJSON::fromJSONUnitType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitType of TypeReferencePointJSON is not a string.");
    TypeUnitType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strcmp(&(json_string->getData()[2]), "celeration") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Acceleration;
                            goto open_enum_is_done;
                          }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "gles") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Angles;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ea") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Area;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ta") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Data;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "nsity") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Density;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "rce") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Force;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "equency") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Frequency;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ength") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = UnitType_Length;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ass") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = UnitType_Mass;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "wer") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Power;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "essure") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Pressure;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "peed") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = UnitType_Speed;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "mperature") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Temperature;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "me") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = UnitType_Time;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = UnitType_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            if (strcmp(&(json_string->getData()[1]), "olume") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = UnitType_Volume;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ork") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = UnitType_Work;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setUnitType(the_open_enum);
  }

void UnitConversionJSON::TypeReferencePointJSON::fromJSONSingularName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SingularName of TypeReferencePointJSON is not a string.");
    setSingularName(std::string(json_string->getData()));
  }

void UnitConversionJSON::TypeReferencePointJSON::fromJSONPluralName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PluralName of TypeReferencePointJSON is not a string.");
    setPluralName(std::string(json_string->getData()));
  }

void UnitConversionJSON::TypeReferencePointJSON::fromJSONAbbreviatedName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AbbreviatedName of TypeReferencePointJSON is not a string.");
    setAbbreviatedName(std::string(json_string->getData()));
  }

void UnitConversionJSON::TypeReferencePointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of TypeReferencePointJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

UnitConversionJSON::TypeReferencePointJSON::TypeReferencePointJSON(void) :
        flagHasUnit(false),
        flagHasUnitType(false),
        flagHasSingularName(false),
        flagHasPluralName(false),
        flagHasAbbreviatedName(false),
        flagHasValue(false)
  {
  }

UnitConversionJSON::TypeReferencePointJSON::~TypeReferencePointJSON(void)
  {
  }

bool UnitConversionJSON::TypeReferencePointJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

std::string UnitConversionJSON::TypeReferencePointJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const std::string UnitConversionJSON::TypeReferencePointJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

bool UnitConversionJSON::TypeReferencePointJSON::hasUnitType(void) const
  {
    return flagHasUnitType;
  }

UnitConversionJSON::TypeReferencePointJSON::TypeUnitType UnitConversionJSON::TypeReferencePointJSON::getUnitType(void)
  {
    assert(flagHasUnitType);
    return storeUnitType;
  }

const UnitConversionJSON::TypeReferencePointJSON::TypeUnitType UnitConversionJSON::TypeReferencePointJSON::getUnitType(void) const
  {
    assert(flagHasUnitType);
    return storeUnitType;
  }

const char *UnitConversionJSON::TypeReferencePointJSON::getUnitTypeAsChars(void) const
  {
    TypeUnitType result = getUnitType();
    if (result.in_known_list)
        return stringFromUnitType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UnitConversionJSON::TypeReferencePointJSON::getUnitTypeAsString(void) const
  {
    return getUnitTypeAsChars();
  }

bool UnitConversionJSON::TypeReferencePointJSON::hasSingularName(void) const
  {
    return flagHasSingularName;
  }

std::string UnitConversionJSON::TypeReferencePointJSON::getSingularName(void)
  {
    assert(flagHasSingularName);
    return storeSingularName;
  }

const std::string UnitConversionJSON::TypeReferencePointJSON::getSingularName(void) const
  {
    assert(flagHasSingularName);
    return storeSingularName;
  }

bool UnitConversionJSON::TypeReferencePointJSON::hasPluralName(void) const
  {
    return flagHasPluralName;
  }

std::string UnitConversionJSON::TypeReferencePointJSON::getPluralName(void)
  {
    assert(flagHasPluralName);
    return storePluralName;
  }

const std::string UnitConversionJSON::TypeReferencePointJSON::getPluralName(void) const
  {
    assert(flagHasPluralName);
    return storePluralName;
  }

bool UnitConversionJSON::TypeReferencePointJSON::hasAbbreviatedName(void) const
  {
    return flagHasAbbreviatedName;
  }

std::string UnitConversionJSON::TypeReferencePointJSON::getAbbreviatedName(void)
  {
    assert(flagHasAbbreviatedName);
    return storeAbbreviatedName;
  }

const std::string UnitConversionJSON::TypeReferencePointJSON::getAbbreviatedName(void) const
  {
    assert(flagHasAbbreviatedName);
    return storeAbbreviatedName;
  }

bool UnitConversionJSON::TypeReferencePointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double UnitConversionJSON::TypeReferencePointJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double UnitConversionJSON::TypeReferencePointJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string UnitConversionJSON::TypeReferencePointJSON::getValueAsText(void) const
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

UnitConversionJSON::UnitConversionJSON(const UnitConversionJSON &)
  {
    assert(false);
  }

UnitConversionJSON &UnitConversionJSON::operator=(const UnitConversionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitConversionJSON::fromJSONConversionType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConversionType of UnitConversionJSON is not a string.");
    TypeConversionType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strcmp(&(json_string->getData()[2]), "celeration") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Acceleration;
                            goto open_enum_is_done;
                          }
                    break;
                case 'n':
                    if (strcmp(&(json_string->getData()[2]), "gles") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Angles;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ea") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Area;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ata") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ConversionType_Data;
                    goto open_enum_is_done;
                  }
            break;
        case 'F':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "rce") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Force;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "equency") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Frequency;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ength") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ConversionType_Length;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strncmp(&(json_string->getData()[1]), "ass", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Mass;
                            goto open_enum_is_done;
                          }
                    case 'T':
                        if (strcmp(&(json_string->getData()[5]), "oVolume") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = ConversionType_MassToVolume;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "wer") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Power;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "essure") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Pressure;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "peed") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ConversionType_Speed;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "mperature") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Temperature;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "me") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Time;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ConversionType_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            if (strncmp(&(json_string->getData()[1]), "olume", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ConversionType_Volume;
                            goto open_enum_is_done;
                          }
                    case 'T':
                        if (strcmp(&(json_string->getData()[7]), "oMass") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = ConversionType_VolumeToMass;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ork") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ConversionType_Work;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setConversionType(the_open_enum);
  }

void UnitConversionJSON::fromJSONDisplayTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DisplayTitle of UnitConversionJSON is not a string.");
    setDisplayTitle(std::string(json_string->getData()));
  }

void UnitConversionJSON::fromJSONDisplayDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DisplayDescription of UnitConversionJSON is not a string.");
    setDisplayDescription(std::string(json_string->getData()));
  }

void UnitConversionJSON::fromJSONInputValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InputValue of UnitConversionJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field InputValue of UnitConversionJSON has too few elements.");
    std::vector< MeasuredAmountJSON * > vector_InputValue1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MeasuredAmountJSON *convert_classy = MeasuredAmountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_InputValue1[num1] = convert_classy;
      }
    assert(vector_InputValue1.size() >= 1);
    initInputValue();
    for (size_t num3 = 0; num3 < vector_InputValue1.size(); ++num3)
        appendInputValue(vector_InputValue1[num3]);
    for (size_t num1 = 0; num1 < vector_InputValue1.size(); ++num1)
      {
        vector_InputValue1[num1]->remove_reference();
      }
  }

void UnitConversionJSON::fromJSONOutputValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OutputValue of UnitConversionJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field OutputValue of UnitConversionJSON has too few elements.");
    std::vector< MeasuredAmountJSON * > vector_OutputValue1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MeasuredAmountJSON *convert_classy = MeasuredAmountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_OutputValue1[num1] = convert_classy;
      }
    assert(vector_OutputValue1.size() >= 1);
    initOutputValue();
    for (size_t num4 = 0; num4 < vector_OutputValue1.size(); ++num4)
        appendOutputValue(vector_OutputValue1[num4]);
    for (size_t num1 = 0; num1 < vector_OutputValue1.size(); ++num1)
      {
        vector_OutputValue1[num1]->remove_reference();
      }
  }

void UnitConversionJSON::fromJSONReferencePoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeReferencePointJSON *convert_classy = TypeReferencePointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setReferencePoint(convert_classy);
    convert_classy->remove_reference();
  }

UnitConversionJSON::UnitConversionJSON(void) :
        flagHasConversionType(false),
        flagHasDisplayTitle(false),
        flagHasDisplayDescription(false),
        flagHasInputValue(false),
        flagHasOutputValue(false),
        flagHasReferencePoint(false)
  {
  }

UnitConversionJSON::~UnitConversionJSON(void)
  {
    if (flagHasInputValue)
      {
        for (size_t num7 = 0; num7 < storeInputValue.size(); ++num7)
          {
            storeInputValue[num7]->remove_reference();
          }
      }
    if (flagHasOutputValue)
      {
        for (size_t num8 = 0; num8 < storeOutputValue.size(); ++num8)
          {
            storeOutputValue[num8]->remove_reference();
          }
      }
    if (flagHasReferencePoint)
      {
        storeReferencePoint->remove_reference();
      }
  }

bool UnitConversionJSON::hasConversionType(void) const
  {
    return flagHasConversionType;
  }

UnitConversionJSON::TypeConversionType UnitConversionJSON::getConversionType(void)
  {
    assert(flagHasConversionType);
    return storeConversionType;
  }

const UnitConversionJSON::TypeConversionType UnitConversionJSON::getConversionType(void) const
  {
    assert(flagHasConversionType);
    return storeConversionType;
  }

const char *UnitConversionJSON::getConversionTypeAsChars(void) const
  {
    TypeConversionType result = getConversionType();
    if (result.in_known_list)
        return stringFromConversionType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UnitConversionJSON::getConversionTypeAsString(void) const
  {
    return getConversionTypeAsChars();
  }

bool UnitConversionJSON::hasDisplayTitle(void) const
  {
    return flagHasDisplayTitle;
  }

std::string UnitConversionJSON::getDisplayTitle(void)
  {
    assert(flagHasDisplayTitle);
    return storeDisplayTitle;
  }

const std::string UnitConversionJSON::getDisplayTitle(void) const
  {
    assert(flagHasDisplayTitle);
    return storeDisplayTitle;
  }

bool UnitConversionJSON::hasDisplayDescription(void) const
  {
    return flagHasDisplayDescription;
  }

std::string UnitConversionJSON::getDisplayDescription(void)
  {
    assert(flagHasDisplayDescription);
    return storeDisplayDescription;
  }

const std::string UnitConversionJSON::getDisplayDescription(void) const
  {
    assert(flagHasDisplayDescription);
    return storeDisplayDescription;
  }

bool UnitConversionJSON::hasInputValue(void) const
  {
    return flagHasInputValue;
  }

size_t UnitConversionJSON::countOfInputValue(void) const
  {
    assert(flagHasInputValue);
    return storeInputValue.size();
  }

MeasuredAmountJSON * UnitConversionJSON::elementOfInputValue(size_t element_num)
  {
    assert(flagHasInputValue);
    return storeInputValue[element_num];
  }

const MeasuredAmountJSON * UnitConversionJSON::elementOfInputValue(size_t element_num) const
  {
    assert(flagHasInputValue);
    return storeInputValue[element_num];
  }

std::vector< MeasuredAmountJSON * > UnitConversionJSON::getInputValue(void)
  {
    assert(flagHasInputValue);
    return storeInputValue;
  }

const std::vector< MeasuredAmountJSON * > UnitConversionJSON::getInputValue(void) const
  {
    assert(flagHasInputValue);
    return storeInputValue;
  }

bool UnitConversionJSON::hasOutputValue(void) const
  {
    return flagHasOutputValue;
  }

size_t UnitConversionJSON::countOfOutputValue(void) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue.size();
  }

MeasuredAmountJSON * UnitConversionJSON::elementOfOutputValue(size_t element_num)
  {
    assert(flagHasOutputValue);
    return storeOutputValue[element_num];
  }

const MeasuredAmountJSON * UnitConversionJSON::elementOfOutputValue(size_t element_num) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue[element_num];
  }

std::vector< MeasuredAmountJSON * > UnitConversionJSON::getOutputValue(void)
  {
    assert(flagHasOutputValue);
    return storeOutputValue;
  }

const std::vector< MeasuredAmountJSON * > UnitConversionJSON::getOutputValue(void) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue;
  }

bool UnitConversionJSON::hasReferencePoint(void) const
  {
    return flagHasReferencePoint;
  }

UnitConversionJSON::TypeReferencePointJSON * UnitConversionJSON::getReferencePoint(void)
  {
    assert(flagHasReferencePoint);
    return storeReferencePoint;
  }

const UnitConversionJSON::TypeReferencePointJSON * UnitConversionJSON::getReferencePoint(void) const
  {
    assert(flagHasReferencePoint);
    return storeReferencePoint;
  }

UnitConversionJSON::TypeReferencePointJSON *UnitConversionJSON::TypeReferencePointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeReferencePointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeReferencePointJSON>, TypeReferencePointJSON *, bool> generator("Type TypeReferencePoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
UnitConversionJSON *UnitConversionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitConversionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitConversionJSON>, UnitConversionJSON *, bool> generator("Type UnitConversion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
