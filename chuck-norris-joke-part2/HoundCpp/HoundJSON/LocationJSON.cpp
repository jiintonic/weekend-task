/* file "LocationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocationJSON.h"

#include "LocationJSON.h"


LocationJSON::LocationJSON(const LocationJSON &)
  {
    assert(false);
  }

LocationJSON &LocationJSON::operator=(const LocationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocationJSON::fromJSONCountryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CountryName of LocationJSON is not a string.");
    setCountryName(std::string(json_string->getData()));
  }

void LocationJSON::fromJSONPostalCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PostalCode of LocationJSON is not a string.");
    setPostalCode(std::string(json_string->getData()));
  }

void LocationJSON::fromJSONCityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CityName of LocationJSON is not a string.");
    setCityName(std::string(json_string->getData()));
  }

void LocationJSON::fromJSONStateAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StateAbbreviation of LocationJSON is not a string.");
    setStateAbbreviation(std::string(json_string->getData()));
  }

void LocationJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of LocationJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void LocationJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of LocationJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

LocationJSON::LocationJSON(void) :
        flagHasCountryName(false),
        flagHasPostalCode(false),
        flagHasCityName(false),
        flagHasStateAbbreviation(false),
        flagHasLatitude(false),
        flagHasLongitude(false)
  {
    extraIndex = create_string_index();
  }

LocationJSON::~LocationJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocationJSON::hasCountryName(void) const
  {
    return flagHasCountryName;
  }

std::string LocationJSON::getCountryName(void)
  {
    assert(flagHasCountryName);
    return storeCountryName;
  }

const std::string LocationJSON::getCountryName(void) const
  {
    assert(flagHasCountryName);
    return storeCountryName;
  }

bool LocationJSON::hasPostalCode(void) const
  {
    return flagHasPostalCode;
  }

std::string LocationJSON::getPostalCode(void)
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

const std::string LocationJSON::getPostalCode(void) const
  {
    assert(flagHasPostalCode);
    return storePostalCode;
  }

bool LocationJSON::hasCityName(void) const
  {
    return flagHasCityName;
  }

std::string LocationJSON::getCityName(void)
  {
    assert(flagHasCityName);
    return storeCityName;
  }

const std::string LocationJSON::getCityName(void) const
  {
    assert(flagHasCityName);
    return storeCityName;
  }

bool LocationJSON::hasStateAbbreviation(void) const
  {
    return flagHasStateAbbreviation;
  }

std::string LocationJSON::getStateAbbreviation(void)
  {
    assert(flagHasStateAbbreviation);
    return storeStateAbbreviation;
  }

const std::string LocationJSON::getStateAbbreviation(void) const
  {
    assert(flagHasStateAbbreviation);
    return storeStateAbbreviation;
  }

bool LocationJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double LocationJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double LocationJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string LocationJSON::getLatitudeAsText(void) const
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

bool LocationJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double LocationJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double LocationJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string LocationJSON::getLongitudeAsText(void) const
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

LocationJSON *LocationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocationJSON>, LocationJSON *, bool> generator("Type Location", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
