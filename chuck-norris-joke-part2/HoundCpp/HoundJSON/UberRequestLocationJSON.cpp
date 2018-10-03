/* file "UberRequestLocationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestLocationJSON.h"

#include "UberRequestLocationJSON.h"


UberRequestLocationJSON::UberRequestLocationJSON(const UberRequestLocationJSON &)
  {
    assert(false);
  }

UberRequestLocationJSON &UberRequestLocationJSON::operator=(const UberRequestLocationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestLocationJSON::fromJSONlatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field latitude of UberRequestLocationJSON is not a number.");
          }
      }
    setlatitudeText(the_rational_text);
  }

void UberRequestLocationJSON::fromJSONlongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field longitude of UberRequestLocationJSON is not a number.");
          }
      }
    setlongitudeText(the_rational_text);
  }

void UberRequestLocationJSON::fromJSONbearing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field bearing of UberRequestLocationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field bearing of UberRequestLocationJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setbearing(extracted_integer);
  }

UberRequestLocationJSON::UberRequestLocationJSON(void) :
        flagHaslatitude(false),
        flagHaslongitude(false),
        flagHasbearing(false)
  {
    extraIndex = create_string_index();
  }

UberRequestLocationJSON::~UberRequestLocationJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestLocationJSON::haslatitude(void) const
  {
    return flagHaslatitude;
  }

double UberRequestLocationJSON::getlatitude(void)
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

const double UberRequestLocationJSON::getlatitude(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

std::string UberRequestLocationJSON::getlatitudeAsText(void) const
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

bool UberRequestLocationJSON::haslongitude(void) const
  {
    return flagHaslongitude;
  }

double UberRequestLocationJSON::getlongitude(void)
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

const double UberRequestLocationJSON::getlongitude(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

std::string UberRequestLocationJSON::getlongitudeAsText(void) const
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

bool UberRequestLocationJSON::hasbearing(void) const
  {
    return flagHasbearing;
  }

OInteger UberRequestLocationJSON::getbearing(void)
  {
    assert(flagHasbearing);
    return storebearing;
  }

const OInteger UberRequestLocationJSON::getbearing(void) const
  {
    assert(flagHasbearing);
    return storebearing;
  }

UberRequestLocationJSON *UberRequestLocationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestLocationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestLocationJSON>, UberRequestLocationJSON *, bool> generator("Type UberRequestLocation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
