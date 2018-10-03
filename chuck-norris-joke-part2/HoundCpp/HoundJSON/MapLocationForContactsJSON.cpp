/* file "MapLocationForContactsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MapLocationForContactsJSON.h"

#include "MapLocationForContactsJSON.h"


MapLocationForContactsJSON::MapLocationForContactsJSON(const MapLocationForContactsJSON &)
  {
    assert(false);
  }

MapLocationForContactsJSON &MapLocationForContactsJSON::operator=(const MapLocationForContactsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MapLocationForContactsJSON::fromJSONAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Address of MapLocationForContactsJSON is not a string.");
    setAddress(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONStreetNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StreetNumber of MapLocationForContactsJSON is not a string.");
    setStreetNumber(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONStreetSecondaryNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StreetSecondaryNumber of MapLocationForContactsJSON is not a string.");
    setStreetSecondaryNumber(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONStreetName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StreetName of MapLocationForContactsJSON is not a string.");
    setStreetName(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field City of MapLocationForContactsJSON is not a string.");
    setCity(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONAdmin2(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Admin2 of MapLocationForContactsJSON is not a string.");
    setAdmin2(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONAdmin1(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Admin1 of MapLocationForContactsJSON is not a string.");
    setAdmin1(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Country of MapLocationForContactsJSON is not a string.");
    setCountry(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONCountryCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CountryCode of MapLocationForContactsJSON is not a string.");
    setCountryCode(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONPostalCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PostalCode of MapLocationForContactsJSON is not a string.");
    setPostalCode(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONIATA(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field IATA of MapLocationForContactsJSON is not a string.");
    setIATA(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONICAO(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ICAO of MapLocationForContactsJSON is not a string.");
    setICAO(std::string(json_string->getData()));
  }

void MapLocationForContactsJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of MapLocationForContactsJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void MapLocationForContactsJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of MapLocationForContactsJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

void MapLocationForContactsJSON::fromJSONReferenceDatum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ReferenceDatum of MapLocationForContactsJSON is not a string.");
    setReferenceDatum(std::string(json_string->getData()));
  }

MapLocationForContactsJSON::MapLocationForContactsJSON(void) :
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
        flagHasLatitude(false),
        flagHasLongitude(false),
        flagHasReferenceDatum(false)
  {
    storeReferenceDatum = "WGS84";
    extraIndex = create_string_index();
  }

MapLocationForContactsJSON::~MapLocationForContactsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MapLocationForContactsJSON::hasAddress(void) const
  {
    return flagHasAddress;
  }

std::string MapLocationForContactsJSON::getAddress(void)
  {
    assert(flagHasAddress);
    return storeAddress;
  }

const std::string MapLocationForContactsJSON::getAddress(void) const
  {
    assert(flagHasAddress);
    return storeAddress;
  }

bool MapLocationForContactsJSON::hasStreetNumber(void) const
  {
    return flagHasStreetNumber;
  }

std::string MapLocationForContactsJSON::getStreetNumber(void)
  {
    assert(flagHasStreetNumber);
    return storeStreetNumber;
  }

const std::string MapLocationForContactsJSON::getStreetNumber(void) const
  {
    assert(flagHasStreetNumber);
    return storeStreetNumber;
  }

bool MapLocationForContactsJSON::hasStreetSecondaryNumber(void) const
  {
    return flagHasStreetSecondaryNumber;
  }

std::string MapLocationForContactsJSON::getStreetSecondaryNumber(void)
  {
    assert(flagHasStreetSecondaryNumber);
    return storeStreetSecondaryNumber;
  }

const std::string MapLocationForContactsJSON::getStreetSecondaryNumber(void) const
  {
    assert(flagHasStreetSecondaryNumber);
    return storeStreetSecondaryNumber;
  }

bool MapLocationForContactsJSON::hasStreetName(void) const
  {
    return flagHasStreetName;
  }

std::string MapLocationForContactsJSON::getStreetName(void)
  {
    assert(flagHasStreetName);
    return storeStreetName;
  }

const std::string MapLocationForContactsJSON::getStreetName(void) const
  {
    assert(flagHasStreetName);
    return storeStreetName;
  }

bool MapLocationForContactsJSON::hasCity(void) const
  {
    return flagHasCity;
  }

std::string MapLocationForContactsJSON::getCity(void)
  {
    assert(flagHasCity);
    return storeCity;
  }

const std::string MapLocationForContactsJSON::getCity(void) const
  {
    assert(flagHasCity);
    return storeCity;
  }

bool MapLocationForContactsJSON::hasAdmin2(void) const
  {
    return flagHasAdmin2;
  }

std::string MapLocationForContactsJSON::getAdmin2(void)
  {
    assert(flagHasAdmin2);
    return storeAdmin2;
  }

const std::string MapLocationForContactsJSON::getAdmin2(void) const
  {
    assert(flagHasAdmin2);
    return storeAdmin2;
  }

bool MapLocationForContactsJSON::hasAdmin1(void) const
  {
    return flagHasAdmin1;
  }

std::string MapLocationForContactsJSON::getAdmin1(void)
  {
    assert(flagHasAdmin1);
    return storeAdmin1;
  }

const std::string MapLocationForContactsJSON::getAdmin1(void) const
  {
    assert(flagHasAdmin1);
    return storeAdmin1;
  }

bool MapLocationForContactsJSON::hasCountry(void) const
  {
    return flagHasCountry;
  }

std::string MapLocationForContactsJSON::getCountry(void)
  {
    assert(flagHasCountry);
    return storeCountry;
  }

const std::string MapLocationForContactsJSON::getCountry(void) const
  {
    assert(flagHasCountry);
    return storeCountry;
  }

bool MapLocationForContactsJSON::hasCountryCode(void) const
  {
    return flagHasCountryCode;
  }

std::string MapLocationForContactsJSON::getCountryCode(void)
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

const std::string MapLocationForContactsJSON::getCountryCode(void) const
  {
    assert(flagHasCountryCode);
    return storeCountryCode;
  }

bool MapLocationForContactsJSON::hasPostalCode(void) const
  {
    return flagHasPostalCode;
  }

std::string MapLocationForContactsJSON::getPostalCode(void)
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

const std::string MapLocationForContactsJSON::getPostalCode(void) const
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

bool MapLocationForContactsJSON::hasIATA(void) const
  {
    return flagHasIATA;
  }

std::string MapLocationForContactsJSON::getIATA(void)
  {
    assert(flagHasIATA);
    return storeIATA;
  }

const std::string MapLocationForContactsJSON::getIATA(void) const
  {
    assert(flagHasIATA);
    return storeIATA;
  }

bool MapLocationForContactsJSON::hasICAO(void) const
  {
    return flagHasICAO;
  }

std::string MapLocationForContactsJSON::getICAO(void)
  {
    assert(flagHasICAO);
    return storeICAO;
  }

const std::string MapLocationForContactsJSON::getICAO(void) const
  {
    assert(flagHasICAO);
    return storeICAO;
  }

bool MapLocationForContactsJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double MapLocationForContactsJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double MapLocationForContactsJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string MapLocationForContactsJSON::getLatitudeAsText(void) const
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

bool MapLocationForContactsJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double MapLocationForContactsJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double MapLocationForContactsJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string MapLocationForContactsJSON::getLongitudeAsText(void) const
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

bool MapLocationForContactsJSON::hasReferenceDatum(void) const
  {
    return flagHasReferenceDatum;
  }

std::string MapLocationForContactsJSON::getReferenceDatum(void)
  {
    return storeReferenceDatum;
  }

const std::string MapLocationForContactsJSON::getReferenceDatum(void) const
  {
    return storeReferenceDatum;
  }

MapLocationForContactsJSON *MapLocationForContactsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MapLocationForContactsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MapLocationForContactsJSON>, MapLocationForContactsJSON *, bool> generator("Type MapLocationForContacts", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
