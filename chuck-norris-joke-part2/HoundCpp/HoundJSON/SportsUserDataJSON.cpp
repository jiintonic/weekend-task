/* file "SportsUserDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsUserDataJSON.h"

#include "SportsUserDataJSON.h"


SportsUserDataJSON::SportsUserDataJSON(const SportsUserDataJSON &)
  {
    assert(false);
  }

SportsUserDataJSON &SportsUserDataJSON::operator=(const SportsUserDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsUserDataJSON::fromJSONNow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNow(convert_classy);
    convert_classy->remove_reference();
  }

void SportsUserDataJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of SportsUserDataJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void SportsUserDataJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of SportsUserDataJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

SportsUserDataJSON::SportsUserDataJSON(void) :
        flagHasNow(false),
        flagHasLatitude(false),
        flagHasLongitude(false)
  {
    extraIndex = create_string_index();
  }

SportsUserDataJSON::~SportsUserDataJSON(void)
  {
    if (flagHasNow)
      {
        storeNow->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsUserDataJSON::hasNow(void) const
  {
    return flagHasNow;
  }

DateAndOrTimeJSON * SportsUserDataJSON::getNow(void)
  {
    assert(flagHasNow);
    return storeNow;
  }

const DateAndOrTimeJSON * SportsUserDataJSON::getNow(void) const
  {
    assert(flagHasNow);
    return storeNow;
  }

bool SportsUserDataJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double SportsUserDataJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double SportsUserDataJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string SportsUserDataJSON::getLatitudeAsText(void) const
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

bool SportsUserDataJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double SportsUserDataJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double SportsUserDataJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string SportsUserDataJSON::getLongitudeAsText(void) const
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

SportsUserDataJSON *SportsUserDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsUserDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsUserDataJSON>, SportsUserDataJSON *, bool> generator("Type SportsUserData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
