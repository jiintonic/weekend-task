/* file "MapLocationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MapLocationJSON.h"

#include "MapLocationJSON.h"


MapLocationJSON::TypeType MapLocationJSON::stringToType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'd':
                    if (strncmp(&(chars[2]), "min", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case '1':
                                if (chars[6] == 0)
                                    return Type_Admin1;
                                break;
                            case '2':
                                if (chars[6] == 0)
                                    return Type_Admin2;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "rport") == 0)
                        return Type_Airport;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "ty") == 0)
                        return Type_City;
                    break;
                case 'o':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'n':
                            if (strcmp(&(chars[3]), "tinent") == 0)
                                return Type_Continent;
                            break;
                        case 'u':
                            if (strcmp(&(chars[3]), "ntry") == 0)
                                return Type_Country;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'H':
            if (strcmp(&(chars[1]), "otel") == 0)
                return Type_Hotel;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ther") == 0)
                return Type_Other;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "ostal Code") == 0)
                return Type_Postal_x20_Code;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "treet Address") == 0)
                return Type_Street_x20_Address;
            break;
        default:
            break;
      }
    throw("The value for field `Type' is not one of the legal values.");
  }

const char *MapLocationJSON::stringFromType(TypeType the_enum)
  {
    switch (the_enum)
      {
        case Type_Continent:
            return "Continent";
        case Type_Country:
            return "Country";
        case Type_Admin1:
            return "Admin1";
        case Type_Admin2:
            return "Admin2";
        case Type_City:
            return "City";
        case Type_Street_x20_Address:
            return "Street Address";
        case Type_Airport:
            return "Airport";
        case Type_Hotel:
            return "Hotel";
        case Type_Postal_x20_Code:
            return "Postal Code";
        case Type_Other:
            return "Other";
        default:
            assert(false);
            return NULL;
      }
  }

MapLocationJSON::TypeBoundingBoxJSON::TypeBoundingBoxJSON(const TypeBoundingBoxJSON &)
  {
    assert(false);
  }

MapLocationJSON::TypeBoundingBoxJSON &MapLocationJSON::TypeBoundingBoxJSON::operator=(const TypeBoundingBoxJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MapLocationJSON::TypeBoundingBoxJSON::fromJSONMinLat(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MinLat of TypeBoundingBoxJSON is not a number.");
          }
      }
    setMinLatText(the_rational_text);
  }

void MapLocationJSON::TypeBoundingBoxJSON::fromJSONMaxLat(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MaxLat of TypeBoundingBoxJSON is not a number.");
          }
      }
    setMaxLatText(the_rational_text);
  }

void MapLocationJSON::TypeBoundingBoxJSON::fromJSONMinLon(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MinLon of TypeBoundingBoxJSON is not a number.");
          }
      }
    setMinLonText(the_rational_text);
  }

void MapLocationJSON::TypeBoundingBoxJSON::fromJSONMaxLon(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MaxLon of TypeBoundingBoxJSON is not a number.");
          }
      }
    setMaxLonText(the_rational_text);
  }

MapLocationJSON::TypeBoundingBoxJSON::TypeBoundingBoxJSON(void) :
        flagHasMinLat(false),
        flagHasMaxLat(false),
        flagHasMinLon(false),
        flagHasMaxLon(false)
  {
  }

MapLocationJSON::TypeBoundingBoxJSON::~TypeBoundingBoxJSON(void)
  {
  }

bool MapLocationJSON::TypeBoundingBoxJSON::hasMinLat(void) const
  {
    return flagHasMinLat;
  }

double MapLocationJSON::TypeBoundingBoxJSON::getMinLat(void)
  {
    assert(flagHasMinLat);
    if (textStoreMinLat != "")
      {
        return atof(textStoreMinLat.c_str());
      }
    return storeMinLat;
  }

const double MapLocationJSON::TypeBoundingBoxJSON::getMinLat(void) const
  {
    assert(flagHasMinLat);
    if (textStoreMinLat != "")
      {
        return atof(textStoreMinLat.c_str());
      }
    return storeMinLat;
  }

std::string MapLocationJSON::TypeBoundingBoxJSON::getMinLatAsText(void) const
  {
    assert(flagHasMinLat);
    if (textStoreMinLat == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMinLat);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMinLat);
      }
  }

bool MapLocationJSON::TypeBoundingBoxJSON::hasMaxLat(void) const
  {
    return flagHasMaxLat;
  }

double MapLocationJSON::TypeBoundingBoxJSON::getMaxLat(void)
  {
    assert(flagHasMaxLat);
    if (textStoreMaxLat != "")
      {
        return atof(textStoreMaxLat.c_str());
      }
    return storeMaxLat;
  }

const double MapLocationJSON::TypeBoundingBoxJSON::getMaxLat(void) const
  {
    assert(flagHasMaxLat);
    if (textStoreMaxLat != "")
      {
        return atof(textStoreMaxLat.c_str());
      }
    return storeMaxLat;
  }

std::string MapLocationJSON::TypeBoundingBoxJSON::getMaxLatAsText(void) const
  {
    assert(flagHasMaxLat);
    if (textStoreMaxLat == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMaxLat);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMaxLat);
      }
  }

bool MapLocationJSON::TypeBoundingBoxJSON::hasMinLon(void) const
  {
    return flagHasMinLon;
  }

double MapLocationJSON::TypeBoundingBoxJSON::getMinLon(void)
  {
    assert(flagHasMinLon);
    if (textStoreMinLon != "")
      {
        return atof(textStoreMinLon.c_str());
      }
    return storeMinLon;
  }

const double MapLocationJSON::TypeBoundingBoxJSON::getMinLon(void) const
  {
    assert(flagHasMinLon);
    if (textStoreMinLon != "")
      {
        return atof(textStoreMinLon.c_str());
      }
    return storeMinLon;
  }

std::string MapLocationJSON::TypeBoundingBoxJSON::getMinLonAsText(void) const
  {
    assert(flagHasMinLon);
    if (textStoreMinLon == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMinLon);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMinLon);
      }
  }

bool MapLocationJSON::TypeBoundingBoxJSON::hasMaxLon(void) const
  {
    return flagHasMaxLon;
  }

double MapLocationJSON::TypeBoundingBoxJSON::getMaxLon(void)
  {
    assert(flagHasMaxLon);
    if (textStoreMaxLon != "")
      {
        return atof(textStoreMaxLon.c_str());
      }
    return storeMaxLon;
  }

const double MapLocationJSON::TypeBoundingBoxJSON::getMaxLon(void) const
  {
    assert(flagHasMaxLon);
    if (textStoreMaxLon != "")
      {
        return atof(textStoreMaxLon.c_str());
      }
    return storeMaxLon;
  }

std::string MapLocationJSON::TypeBoundingBoxJSON::getMaxLonAsText(void) const
  {
    assert(flagHasMaxLon);
    if (textStoreMaxLon == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMaxLon);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMaxLon);
      }
  }

MapLocationJSON::TypeLinksJSON::TypeLinksJSON(const TypeLinksJSON &)
  {
    assert(false);
  }

MapLocationJSON::TypeLinksJSON &MapLocationJSON::TypeLinksJSON::operator=(const TypeLinksJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MapLocationJSON::TypeLinksJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TypeLinksJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void MapLocationJSON::TypeLinksJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of TypeLinksJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

MapLocationJSON::TypeLinksJSON::TypeLinksJSON(void) :
        flagHasLabel(false),
        flagHasURL(false)
  {
  }

MapLocationJSON::TypeLinksJSON::~TypeLinksJSON(void)
  {
  }

bool MapLocationJSON::TypeLinksJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string MapLocationJSON::TypeLinksJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string MapLocationJSON::TypeLinksJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool MapLocationJSON::TypeLinksJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string MapLocationJSON::TypeLinksJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string MapLocationJSON::TypeLinksJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

MapLocationJSON::TypeOtherType::TypeOtherType(void)
  {
  }

MapLocationJSON::TypeOtherType::TypeOtherType(const TypeOtherType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MapLocationJSON::TypeOtherType::TypeOtherType(TypeOtherTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MapLocationJSON::TypeOtherType::operator==(const TypeOtherType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MapLocationJSON::TypeOtherType::operator!=(const TypeOtherType &other) const
  {
    return !(operator==(other));
  }

bool MapLocationJSON::TypeOtherType::operator<(const TypeOtherType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MapLocationJSON::TypeOtherType::operator>(const TypeOtherType &other) const
  {
    return other.operator<(*this);
  }

bool MapLocationJSON::TypeOtherType::operator>=(const TypeOtherType &other) const
  {
    return !(operator<(other));
  }

bool MapLocationJSON::TypeOtherType::operator<=(const TypeOtherType &other) const
  {
    return !(other.operator<(*this));
  }

MapLocationJSON::TypeOtherTypeKnownValues MapLocationJSON::stringToOtherType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'I':
            if (strncmp(&(chars[1]), "sland", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 0:
                        return OtherType_Island;
                    case 's':
                        if (chars[7] == 0)
                            return OtherType_Islands;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ocal Business") == 0)
                return OtherType_Local_x20_Business;
            break;
        default:
            break;
      }
    return OtherType__none;
  }

const char *MapLocationJSON::stringFromOtherType(TypeOtherTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case OtherType_Island:
            return "Island";
        case OtherType_Islands:
            return "Islands";
        case OtherType_Local_x20_Business:
            return "Local Business";
        default:
            assert(false);
            return NULL;
      }
  }

MapLocationJSON::MapLocationJSON(const MapLocationJSON &)
  {
    assert(false);
  }

MapLocationJSON &MapLocationJSON::operator=(const MapLocationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MapLocationJSON::fromJSONIsFictional(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsFictional of MapLocationJSON is not true for false.");
          }
      }
    setIsFictional(the_bool);
  }

void MapLocationJSON::fromJSONIsOnEarthsSurface(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsOnEarthsSurface of MapLocationJSON is not true for false.");
          }
      }
    setIsOnEarthsSurface(the_bool);
  }

void MapLocationJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of MapLocationJSON is not a string.");
    TypeType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'd':
                    if (strncmp(&(json_string->getData()[2]), "min", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case '1':
                                if (json_string->getData()[6] == 0)
                                      {
                                        the_enum = Type_Admin1;
                                        goto enum_is_done;
                                      }
                                break;
                            case '2':
                                if (json_string->getData()[6] == 0)
                                      {
                                        the_enum = Type_Admin2;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "rport") == 0)
                          {
                            the_enum = Type_Airport;
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
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ty") == 0)
                          {
                            the_enum = Type_City;
                            goto enum_is_done;
                          }
                    break;
                case 'o':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'n':
                            if (strcmp(&(json_string->getData()[3]), "tinent") == 0)
                                  {
                                    the_enum = Type_Continent;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'u':
                            if (strcmp(&(json_string->getData()[3]), "ntry") == 0)
                                  {
                                    the_enum = Type_Country;
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
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "otel") == 0)
                  {
                    the_enum = Type_Hotel;
                    goto enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ther") == 0)
                  {
                    the_enum = Type_Other;
                    goto enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "ostal Code") == 0)
                  {
                    the_enum = Type_Postal_x20_Code;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "treet Address") == 0)
                  {
                    the_enum = Type_Street_x20_Address;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Type of MapLocationJSON is not one of the legal strings.");
  enum_is_done:;
    setType(the_enum);
  }

void MapLocationJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of MapLocationJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of MapLocationJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Address of MapLocationJSON is not a string.");
    setAddress(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONStreetNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StreetNumber of MapLocationJSON is not a string.");
    setStreetNumber(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONStreetSecondaryNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StreetSecondaryNumber of MapLocationJSON is not a string.");
    setStreetSecondaryNumber(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONStreetName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StreetName of MapLocationJSON is not a string.");
    setStreetName(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field City of MapLocationJSON is not a string.");
    setCity(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONAdmin2(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Admin2 of MapLocationJSON is not a string.");
    setAdmin2(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONAdmin1(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Admin1 of MapLocationJSON is not a string.");
    setAdmin1(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Country of MapLocationJSON is not a string.");
    setCountry(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONCountryCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CountryCode of MapLocationJSON is not a string.");
    setCountryCode(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONPostalCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PostalCode of MapLocationJSON is not a string.");
    setPostalCode(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONIATA(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field IATA of MapLocationJSON is not a string.");
    setIATA(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONICAO(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ICAO of MapLocationJSON is not a string.");
    setICAO(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONGeohash(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Geohash of MapLocationJSON is not a string.");
    setGeohash(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONVerified(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Verified of MapLocationJSON is not true for false.");
          }
      }
    setVerified(the_bool);
  }

void MapLocationJSON::fromJSONHighConfidence(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HighConfidence of MapLocationJSON is not true for false.");
          }
      }
    setHighConfidence(the_bool);
  }

void MapLocationJSON::fromJSONCurrentLocation(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CurrentLocation of MapLocationJSON is not true for false.");
          }
      }
    setCurrentLocation(the_bool);
  }

void MapLocationJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of MapLocationJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void MapLocationJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of MapLocationJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

void MapLocationJSON::fromJSONCoordinatesAreApproximate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CoordinatesAreApproximate of MapLocationJSON is not true for false.");
          }
      }
    setCoordinatesAreApproximate(the_bool);
  }

void MapLocationJSON::fromJSONCoordinatesAreAdjusted(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CoordinatesAreAdjusted of MapLocationJSON is not true for false.");
          }
      }
    setCoordinatesAreAdjusted(the_bool);
  }

void MapLocationJSON::fromJSONReferenceDatum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ReferenceDatum of MapLocationJSON is not a string.");
    setReferenceDatum(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TimeZone of MapLocationJSON is not a string.");
    setTimeZone(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONRadius(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Radius of MapLocationJSON is not a number.");
          }
      }
    setRadiusText(the_rational_text);
  }

void MapLocationJSON::fromJSONBoundingBox(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeBoundingBoxJSON *convert_classy = TypeBoundingBoxJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBoundingBox(convert_classy);
    convert_classy->remove_reference();
  }

void MapLocationJSON::fromJSONLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Links of MapLocationJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeLinksJSON * > vector_Links1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeLinksJSON *convert_classy = TypeLinksJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Links1[num1] = convert_classy;
      }
    initLinks();
    for (size_t num2 = 0; num2 < vector_Links1.size(); ++num2)
        appendLinks(vector_Links1[num2]);
    for (size_t num1 = 0; num1 < vector_Links1.size(); ++num1)
      {
        vector_Links1[num1]->remove_reference();
      }
  }

void MapLocationJSON::fromJSONTypeID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TypeID of MapLocationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TypeID of MapLocationJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTypeID(extracted_integer);
  }

void MapLocationJSON::fromJSONSourceID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SourceID of MapLocationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SourceID of MapLocationJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSourceID(extracted_integer);
  }

void MapLocationJSON::fromJSONRecordID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RecordID of MapLocationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RecordID of MapLocationJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRecordID(extracted_integer);
  }

void MapLocationJSON::fromJSONRecordIDString(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RecordIDString of MapLocationJSON is not a string.");
    setRecordIDString(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONSource(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Source of MapLocationJSON is not a string.");
    setSource(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONPointOfInterestName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PointOfInterestName of MapLocationJSON is not a string.");
    setPointOfInterestName(std::string(json_string->getData()));
  }

void MapLocationJSON::fromJSONOtherType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OtherType of MapLocationJSON is not a string.");
    TypeOtherType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'I':
            if (strncmp(&(json_string->getData()[1]), "sland", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = OtherType_Island;
                            goto open_enum_is_done;
                          }
                    case 's':
                        if (json_string->getData()[7] == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = OtherType_Islands;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ocal Business") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = OtherType_Local_x20_Business;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setOtherType(the_open_enum);
  }

MapLocationJSON::MapLocationJSON(void) :
        flagHasIsFictional(false),
        flagHasIsOnEarthsSurface(false),
        flagHasType(false),
        flagHasLabel(false),
        flagHasSpokenLabel(false),
        flagHasAddress(false),
        flagHasStreetNumber(false),
        flagHasStreetSecondaryNumber(false),
        flagHasStreetName(false),
        flagHasCity(false),
        flagHasAdmin2(false),
        flagHasAdmin1(false),
        flagHasCountry(false),
        flagHasCountryCode(false),
        flagHasPostalCode(false),
        flagHasIATA(false),
        flagHasICAO(false),
        flagHasGeohash(false),
        flagHasVerified(false),
        flagHasHighConfidence(false),
        flagHasCurrentLocation(false),
        flagHasLatitude(false),
        flagHasLongitude(false),
        flagHasCoordinatesAreApproximate(false),
        flagHasCoordinatesAreAdjusted(false),
        flagHasReferenceDatum(false),
        flagHasTimeZone(false),
        flagHasRadius(false),
        flagHasBoundingBox(false),
        flagHasLinks(false),
        flagHasTypeID(false),
        flagHasSourceID(false),
        flagHasRecordID(false),
        flagHasRecordIDString(false),
        flagHasSource(false),
        flagHasPointOfInterestName(false),
        flagHasOtherType(false)
  {
    storeIsFictional = false;
    storeIsOnEarthsSurface = true;
    storeReferenceDatum = "WGS84";
    extraIndex = create_string_index();
  }

MapLocationJSON::~MapLocationJSON(void)
  {
    if (flagHasBoundingBox)
      {
        storeBoundingBox->remove_reference();
      }
    if (flagHasLinks)
      {
        for (size_t num4 = 0; num4 < storeLinks.size(); ++num4)
          {
            storeLinks[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MapLocationJSON::hasIsFictional(void) const
  {
    return flagHasIsFictional;
  }

bool MapLocationJSON::getIsFictional(void)
  {
    return storeIsFictional;
  }

const bool MapLocationJSON::getIsFictional(void) const
  {
    return storeIsFictional;
  }

bool MapLocationJSON::hasIsOnEarthsSurface(void) const
  {
    return flagHasIsOnEarthsSurface;
  }

bool MapLocationJSON::getIsOnEarthsSurface(void)
  {
    return storeIsOnEarthsSurface;
  }

const bool MapLocationJSON::getIsOnEarthsSurface(void) const
  {
    return storeIsOnEarthsSurface;
  }

bool MapLocationJSON::hasType(void) const
  {
    return flagHasType;
  }

MapLocationJSON::TypeType MapLocationJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const MapLocationJSON::TypeType MapLocationJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

const char *MapLocationJSON::getTypeAsChars(void) const
  {
    return stringFromType(getType());
  }

std::string MapLocationJSON::getTypeAsString(void) const
  {
    return stringFromType(getType());
  }

bool MapLocationJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string MapLocationJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string MapLocationJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool MapLocationJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string MapLocationJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string MapLocationJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool MapLocationJSON::hasAddress(void) const
  {
    return flagHasAddress;
  }

std::string MapLocationJSON::getAddress(void)
  {
    assert(flagHasAddress);
    return storeAddress;
  }

const std::string MapLocationJSON::getAddress(void) const
  {
    assert(flagHasAddress);
    return storeAddress;
  }

bool MapLocationJSON::hasStreetNumber(void) const
  {
    return flagHasStreetNumber;
  }

std::string MapLocationJSON::getStreetNumber(void)
  {
    assert(flagHasStreetNumber);
    return storeStreetNumber;
  }

const std::string MapLocationJSON::getStreetNumber(void) const
  {
    assert(flagHasStreetNumber);
    return storeStreetNumber;
  }

bool MapLocationJSON::hasStreetSecondaryNumber(void) const
  {
    return flagHasStreetSecondaryNumber;
  }

std::string MapLocationJSON::getStreetSecondaryNumber(void)
  {
    assert(flagHasStreetSecondaryNumber);
    return storeStreetSecondaryNumber;
  }

const std::string MapLocationJSON::getStreetSecondaryNumber(void) const
  {
    assert(flagHasStreetSecondaryNumber);
    return storeStreetSecondaryNumber;
  }

bool MapLocationJSON::hasStreetName(void) const
  {
    return flagHasStreetName;
  }

std::string MapLocationJSON::getStreetName(void)
  {
    assert(flagHasStreetName);
    return storeStreetName;
  }

const std::string MapLocationJSON::getStreetName(void) const
  {
    assert(flagHasStreetName);
    return storeStreetName;
  }

bool MapLocationJSON::hasCity(void) const
  {
    return flagHasCity;
  }

std::string MapLocationJSON::getCity(void)
  {
    assert(flagHasCity);
    return storeCity;
  }

const std::string MapLocationJSON::getCity(void) const
  {
    assert(flagHasCity);
    return storeCity;
  }

bool MapLocationJSON::hasAdmin2(void) const
  {
    return flagHasAdmin2;
  }

std::string MapLocationJSON::getAdmin2(void)
  {
    assert(flagHasAdmin2);
    return storeAdmin2;
  }

const std::string MapLocationJSON::getAdmin2(void) const
  {
    assert(flagHasAdmin2);
    return storeAdmin2;
  }

bool MapLocationJSON::hasAdmin1(void) const
  {
    return flagHasAdmin1;
  }

std::string MapLocationJSON::getAdmin1(void)
  {
    assert(flagHasAdmin1);
    return storeAdmin1;
  }

const std::string MapLocationJSON::getAdmin1(void) const
  {
    assert(flagHasAdmin1);
    return storeAdmin1;
  }

bool MapLocationJSON::hasCountry(void) const
  {
    return flagHasCountry;
  }

std::string MapLocationJSON::getCountry(void)
  {
    assert(flagHasCountry);
    return storeCountry;
  }

const std::string MapLocationJSON::getCountry(void) const
  {
    assert(flagHasCountry);
    return storeCountry;
  }

bool MapLocationJSON::hasCountryCode(void) const
  {
    return flagHasCountryCode;
  }

std::string MapLocationJSON::getCountryCode(void)
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

const std::string MapLocationJSON::getCountryCode(void) const
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

bool MapLocationJSON::hasPostalCode(void) const
  {
    return flagHasPostalCode;
  }

std::string MapLocationJSON::getPostalCode(void)
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

const std::string MapLocationJSON::getPostalCode(void) const
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

bool MapLocationJSON::hasIATA(void) const
  {
    return flagHasIATA;
  }

std::string MapLocationJSON::getIATA(void)
  {
    assert(flagHasIATA);
    return storeIATA;
  }

const std::string MapLocationJSON::getIATA(void) const
  {
    assert(flagHasIATA);
    return storeIATA;
  }

bool MapLocationJSON::hasICAO(void) const
  {
    return flagHasICAO;
  }

std::string MapLocationJSON::getICAO(void)
  {
    assert(flagHasICAO);
    return storeICAO;
  }

const std::string MapLocationJSON::getICAO(void) const
  {
    assert(flagHasICAO);
    return storeICAO;
  }

bool MapLocationJSON::hasGeohash(void) const
  {
    return flagHasGeohash;
  }

std::string MapLocationJSON::getGeohash(void)
  {
    assert(flagHasGeohash);
    return storeGeohash;
  }

const std::string MapLocationJSON::getGeohash(void) const
  {
    assert(flagHasGeohash);
    return storeGeohash;
  }

bool MapLocationJSON::hasVerified(void) const
  {
    return flagHasVerified;
  }

bool MapLocationJSON::getVerified(void)
  {
    assert(flagHasVerified);
    return storeVerified;
  }

const bool MapLocationJSON::getVerified(void) const
  {
    assert(flagHasVerified);
    return storeVerified;
  }

bool MapLocationJSON::hasHighConfidence(void) const
  {
    return flagHasHighConfidence;
  }

bool MapLocationJSON::getHighConfidence(void)
  {
    assert(flagHasHighConfidence);
    return storeHighConfidence;
  }

const bool MapLocationJSON::getHighConfidence(void) const
  {
    assert(flagHasHighConfidence);
    return storeHighConfidence;
  }

bool MapLocationJSON::hasCurrentLocation(void) const
  {
    return flagHasCurrentLocation;
  }

bool MapLocationJSON::getCurrentLocation(void)
  {
    assert(flagHasCurrentLocation);
    return storeCurrentLocation;
  }

const bool MapLocationJSON::getCurrentLocation(void) const
  {
    assert(flagHasCurrentLocation);
    return storeCurrentLocation;
  }

bool MapLocationJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double MapLocationJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double MapLocationJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string MapLocationJSON::getLatitudeAsText(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLatitude);
      }
  }

bool MapLocationJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double MapLocationJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double MapLocationJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string MapLocationJSON::getLongitudeAsText(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLongitude);
      }
  }

bool MapLocationJSON::hasCoordinatesAreApproximate(void) const
  {
    return flagHasCoordinatesAreApproximate;
  }

bool MapLocationJSON::getCoordinatesAreApproximate(void)
  {
    assert(flagHasCoordinatesAreApproximate);
    return storeCoordinatesAreApproximate;
  }

const bool MapLocationJSON::getCoordinatesAreApproximate(void) const
  {
    assert(flagHasCoordinatesAreApproximate);
    return storeCoordinatesAreApproximate;
  }

bool MapLocationJSON::hasCoordinatesAreAdjusted(void) const
  {
    return flagHasCoordinatesAreAdjusted;
  }

bool MapLocationJSON::getCoordinatesAreAdjusted(void)
  {
    assert(flagHasCoordinatesAreAdjusted);
    return storeCoordinatesAreAdjusted;
  }

const bool MapLocationJSON::getCoordinatesAreAdjusted(void) const
  {
    assert(flagHasCoordinatesAreAdjusted);
    return storeCoordinatesAreAdjusted;
  }

bool MapLocationJSON::hasReferenceDatum(void) const
  {
    return flagHasReferenceDatum;
  }

std::string MapLocationJSON::getReferenceDatum(void)
  {
    return storeReferenceDatum;
  }

const std::string MapLocationJSON::getReferenceDatum(void) const
  {
    return storeReferenceDatum;
  }

bool MapLocationJSON::hasTimeZone(void) const
  {
    return flagHasTimeZone;
  }

std::string MapLocationJSON::getTimeZone(void)
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

const std::string MapLocationJSON::getTimeZone(void) const
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

bool MapLocationJSON::hasRadius(void) const
  {
    return flagHasRadius;
  }

double MapLocationJSON::getRadius(void)
  {
    assert(flagHasRadius);
    if (textStoreRadius != "")
      {
        return atof(textStoreRadius.c_str());
      }
    return storeRadius;
  }

const double MapLocationJSON::getRadius(void) const
  {
    assert(flagHasRadius);
    if (textStoreRadius != "")
      {
        return atof(textStoreRadius.c_str());
      }
    return storeRadius;
  }

std::string MapLocationJSON::getRadiusAsText(void) const
  {
    assert(flagHasRadius);
    if (textStoreRadius == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRadius);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRadius);
      }
  }

bool MapLocationJSON::hasBoundingBox(void) const
  {
    return flagHasBoundingBox;
  }

MapLocationJSON::TypeBoundingBoxJSON * MapLocationJSON::getBoundingBox(void)
  {
    assert(flagHasBoundingBox);
    return storeBoundingBox;
  }

const MapLocationJSON::TypeBoundingBoxJSON * MapLocationJSON::getBoundingBox(void) const
  {
    assert(flagHasBoundingBox);
    return storeBoundingBox;
  }

bool MapLocationJSON::hasLinks(void) const
  {
    return flagHasLinks;
  }

size_t MapLocationJSON::countOfLinks(void) const
  {
    assert(flagHasLinks);
    return storeLinks.size();
  }

MapLocationJSON::TypeLinksJSON * MapLocationJSON::elementOfLinks(size_t element_num)
  {
    assert(flagHasLinks);
    return storeLinks[element_num];
  }

const MapLocationJSON::TypeLinksJSON * MapLocationJSON::elementOfLinks(size_t element_num) const
  {
    assert(flagHasLinks);
    return storeLinks[element_num];
  }

std::vector< MapLocationJSON::TypeLinksJSON * > MapLocationJSON::getLinks(void)
  {
    assert(flagHasLinks);
    return storeLinks;
  }

const std::vector< MapLocationJSON::TypeLinksJSON * > MapLocationJSON::getLinks(void) const
  {
    assert(flagHasLinks);
    return storeLinks;
  }

bool MapLocationJSON::hasTypeID(void) const
  {
    return flagHasTypeID;
  }

OInteger MapLocationJSON::getTypeID(void)
  {
    assert(flagHasTypeID);
    return storeTypeID;
  }

const OInteger MapLocationJSON::getTypeID(void) const
  {
    assert(flagHasTypeID);
    return storeTypeID;
  }

bool MapLocationJSON::hasSourceID(void) const
  {
    return flagHasSourceID;
  }

OInteger MapLocationJSON::getSourceID(void)
  {
    assert(flagHasSourceID);
    return storeSourceID;
  }

const OInteger MapLocationJSON::getSourceID(void) const
  {
    assert(flagHasSourceID);
    return storeSourceID;
  }

bool MapLocationJSON::hasRecordID(void) const
  {
    return flagHasRecordID;
  }

OInteger MapLocationJSON::getRecordID(void)
  {
    assert(flagHasRecordID);
    return storeRecordID;
  }

const OInteger MapLocationJSON::getRecordID(void) const
  {
    assert(flagHasRecordID);
    return storeRecordID;
  }

bool MapLocationJSON::hasRecordIDString(void) const
  {
    return flagHasRecordIDString;
  }

std::string MapLocationJSON::getRecordIDString(void)
  {
    assert(flagHasRecordIDString);
    return storeRecordIDString;
  }

const std::string MapLocationJSON::getRecordIDString(void) const
  {
    assert(flagHasRecordIDString);
    return storeRecordIDString;
  }

bool MapLocationJSON::hasSource(void) const
  {
    return flagHasSource;
  }

std::string MapLocationJSON::getSource(void)
  {
    assert(flagHasSource);
    return storeSource;
  }

const std::string MapLocationJSON::getSource(void) const
  {
    assert(flagHasSource);
    return storeSource;
  }

bool MapLocationJSON::hasPointOfInterestName(void) const
  {
    return flagHasPointOfInterestName;
  }

std::string MapLocationJSON::getPointOfInterestName(void)
  {
    assert(flagHasPointOfInterestName);
    return storePointOfInterestName;
  }

const std::string MapLocationJSON::getPointOfInterestName(void) const
  {
    assert(flagHasPointOfInterestName);
    return storePointOfInterestName;
  }

bool MapLocationJSON::hasOtherType(void) const
  {
    return flagHasOtherType;
  }

MapLocationJSON::TypeOtherType MapLocationJSON::getOtherType(void)
  {
    assert(flagHasOtherType);
    return storeOtherType;
  }

const MapLocationJSON::TypeOtherType MapLocationJSON::getOtherType(void) const
  {
    assert(flagHasOtherType);
    return storeOtherType;
  }

const char *MapLocationJSON::getOtherTypeAsChars(void) const
  {
    TypeOtherType result = getOtherType();
    if (result.in_known_list)
        return stringFromOtherType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MapLocationJSON::getOtherTypeAsString(void) const
  {
    return getOtherTypeAsChars();
  }

MapLocationJSON::TypeBoundingBoxJSON *MapLocationJSON::TypeBoundingBoxJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeBoundingBoxJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeBoundingBoxJSON>, TypeBoundingBoxJSON *, bool> generator("Type TypeBoundingBox", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
MapLocationJSON::TypeLinksJSON *MapLocationJSON::TypeLinksJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLinksJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool> generator("Type TypeLinks", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char MapLocationJSON::Generator::lowerBoundTypeID[] = "0";
char MapLocationJSON::Generator::lowerBoundSourceID[] = "0";
char MapLocationJSON::Generator::lowerBoundRecordID[] = "0";
MapLocationJSON *MapLocationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MapLocationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool> generator("Type MapLocation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
