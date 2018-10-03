/* file "FlightStatsAirportJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsAirportJSON.h"

#include "FlightStatsAirportJSON.h"


FlightStatsAirportJSON::FlightStatsAirportJSON(const FlightStatsAirportJSON &)
  {
    assert(false);
  }

FlightStatsAirportJSON &FlightStatsAirportJSON::operator=(const FlightStatsAirportJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsAirportJSON::fromJSONiata(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field iata of FlightStatsAirportJSON is not a string.");
    setiata(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONicao(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field icao of FlightStatsAirportJSON is not a string.");
    seticao(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of FlightStatsAirportJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONstreet1(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field street1 of FlightStatsAirportJSON is not a string.");
    setstreet1(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONstreet2(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field street2 of FlightStatsAirportJSON is not a string.");
    setstreet2(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONcity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field city of FlightStatsAirportJSON is not a string.");
    setcity(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONstateCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field stateCode of FlightStatsAirportJSON is not a string.");
    setstateCode(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONpostalCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field postalCode of FlightStatsAirportJSON is not a string.");
    setpostalCode(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONcountryCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field countryCode of FlightStatsAirportJSON is not a string.");
    setcountryCode(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONcountryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field countryName of FlightStatsAirportJSON is not a string.");
    setcountryName(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONregionName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field regionName of FlightStatsAirportJSON is not a string.");
    setregionName(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONtimeZoneRegionName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field timeZoneRegionName of FlightStatsAirportJSON is not a string.");
    settimeZoneRegionName(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONlocalTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field localTime of FlightStatsAirportJSON is not a string.");
    setlocalTime(std::string(json_string->getData()));
  }

void FlightStatsAirportJSON::fromJSONutcOffsetHours(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field utcOffsetHours of FlightStatsAirportJSON is not a number.");
          }
      }
    setutcOffsetHoursText(the_rational_text);
  }

void FlightStatsAirportJSON::fromJSONlatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field latitude of FlightStatsAirportJSON is not a number.");
          }
      }
    setlatitudeText(the_rational_text);
  }

void FlightStatsAirportJSON::fromJSONlongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field longitude of FlightStatsAirportJSON is not a number.");
          }
      }
    setlongitudeText(the_rational_text);
  }

FlightStatsAirportJSON::FlightStatsAirportJSON(void) :
        flagHasiata(false),
        flagHasicao(false),
        flagHasname(false),
        flagHasstreet1(false),
        flagHasstreet2(false),
        flagHascity(false),
        flagHasstateCode(false),
        flagHaspostalCode(false),
        flagHascountryCode(false),
        flagHascountryName(false),
        flagHasregionName(false),
        flagHastimeZoneRegionName(false),
        flagHaslocalTime(false),
        flagHasutcOffsetHours(false),
        flagHaslatitude(false),
        flagHaslongitude(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsAirportJSON::~FlightStatsAirportJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsAirportJSON::hasiata(void) const
  {
    return flagHasiata;
  }

std::string FlightStatsAirportJSON::getiata(void)
  {
    assert(flagHasiata);
    return storeiata;
  }

const std::string FlightStatsAirportJSON::getiata(void) const
  {
    assert(flagHasiata);
    return storeiata;
  }

bool FlightStatsAirportJSON::hasicao(void) const
  {
    return flagHasicao;
  }

std::string FlightStatsAirportJSON::geticao(void)
  {
    assert(flagHasicao);
    return storeicao;
  }

const std::string FlightStatsAirportJSON::geticao(void) const
  {
    assert(flagHasicao);
    return storeicao;
  }

bool FlightStatsAirportJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string FlightStatsAirportJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string FlightStatsAirportJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool FlightStatsAirportJSON::hasstreet1(void) const
  {
    return flagHasstreet1;
  }

std::string FlightStatsAirportJSON::getstreet1(void)
  {
    assert(flagHasstreet1);
    return storestreet1;
  }

const std::string FlightStatsAirportJSON::getstreet1(void) const
  {
    assert(flagHasstreet1);
    return storestreet1;
  }

bool FlightStatsAirportJSON::hasstreet2(void) const
  {
    return flagHasstreet2;
  }

std::string FlightStatsAirportJSON::getstreet2(void)
  {
    assert(flagHasstreet2);
    return storestreet2;
  }

const std::string FlightStatsAirportJSON::getstreet2(void) const
  {
    assert(flagHasstreet2);
    return storestreet2;
  }

bool FlightStatsAirportJSON::hascity(void) const
  {
    return flagHascity;
  }

std::string FlightStatsAirportJSON::getcity(void)
  {
    assert(flagHascity);
    return storecity;
  }

const std::string FlightStatsAirportJSON::getcity(void) const
  {
    assert(flagHascity);
    return storecity;
  }

bool FlightStatsAirportJSON::hasstateCode(void) const
  {
    return flagHasstateCode;
  }

std::string FlightStatsAirportJSON::getstateCode(void)
  {
    assert(flagHasstateCode);
    return storestateCode;
  }

const std::string FlightStatsAirportJSON::getstateCode(void) const
  {
    assert(flagHasstateCode);
    return storestateCode;
  }

bool FlightStatsAirportJSON::haspostalCode(void) const
  {
    return flagHaspostalCode;
  }

std::string FlightStatsAirportJSON::getpostalCode(void)
  {
    assert(flagHaspostalCode);
    return storepostalCode;
  }

const std::string FlightStatsAirportJSON::getpostalCode(void) const
  {
    assert(flagHaspostalCode);
    return storepostalCode;
  }

bool FlightStatsAirportJSON::hascountryCode(void) const
  {
    return flagHascountryCode;
  }

std::string FlightStatsAirportJSON::getcountryCode(void)
  {
    assert(flagHascountryCode);
    return storecountryCode;
  }

const std::string FlightStatsAirportJSON::getcountryCode(void) const
  {
    assert(flagHascountryCode);
    return storecountryCode;
  }

bool FlightStatsAirportJSON::hascountryName(void) const
  {
    return flagHascountryName;
  }

std::string FlightStatsAirportJSON::getcountryName(void)
  {
    assert(flagHascountryName);
    return storecountryName;
  }

const std::string FlightStatsAirportJSON::getcountryName(void) const
  {
    assert(flagHascountryName);
    return storecountryName;
  }

bool FlightStatsAirportJSON::hasregionName(void) const
  {
    return flagHasregionName;
  }

std::string FlightStatsAirportJSON::getregionName(void)
  {
    assert(flagHasregionName);
    return storeregionName;
  }

const std::string FlightStatsAirportJSON::getregionName(void) const
  {
    assert(flagHasregionName);
    return storeregionName;
  }

bool FlightStatsAirportJSON::hastimeZoneRegionName(void) const
  {
    return flagHastimeZoneRegionName;
  }

std::string FlightStatsAirportJSON::gettimeZoneRegionName(void)
  {
    assert(flagHastimeZoneRegionName);
    return storetimeZoneRegionName;
  }

const std::string FlightStatsAirportJSON::gettimeZoneRegionName(void) const
  {
    assert(flagHastimeZoneRegionName);
    return storetimeZoneRegionName;
  }

bool FlightStatsAirportJSON::haslocalTime(void) const
  {
    return flagHaslocalTime;
  }

std::string FlightStatsAirportJSON::getlocalTime(void)
  {
    assert(flagHaslocalTime);
    return storelocalTime;
  }

const std::string FlightStatsAirportJSON::getlocalTime(void) const
  {
    assert(flagHaslocalTime);
    return storelocalTime;
  }

bool FlightStatsAirportJSON::hasutcOffsetHours(void) const
  {
    return flagHasutcOffsetHours;
  }

double FlightStatsAirportJSON::getutcOffsetHours(void)
  {
    assert(flagHasutcOffsetHours);
    if (textStoreutcOffsetHours != "")
      {
        return atof(textStoreutcOffsetHours.c_str());
      }
    return storeutcOffsetHours;
  }

const double FlightStatsAirportJSON::getutcOffsetHours(void) const
  {
    assert(flagHasutcOffsetHours);
    if (textStoreutcOffsetHours != "")
      {
        return atof(textStoreutcOffsetHours.c_str());
      }
    return storeutcOffsetHours;
  }

std::string FlightStatsAirportJSON::getutcOffsetHoursAsText(void) const
  {
    assert(flagHasutcOffsetHours);
    if (textStoreutcOffsetHours == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeutcOffsetHours);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreutcOffsetHours);
      }
  }

bool FlightStatsAirportJSON::haslatitude(void) const
  {
    return flagHaslatitude;
  }

double FlightStatsAirportJSON::getlatitude(void)
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

const double FlightStatsAirportJSON::getlatitude(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

std::string FlightStatsAirportJSON::getlatitudeAsText(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelatitude);
      }
  }

bool FlightStatsAirportJSON::haslongitude(void) const
  {
    return flagHaslongitude;
  }

double FlightStatsAirportJSON::getlongitude(void)
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

const double FlightStatsAirportJSON::getlongitude(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

std::string FlightStatsAirportJSON::getlongitudeAsText(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelongitude);
      }
  }

FlightStatsAirportJSON *FlightStatsAirportJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsAirportJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsAirportJSON>, FlightStatsAirportJSON *, bool> generator("Type FlightStatsAirport", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
