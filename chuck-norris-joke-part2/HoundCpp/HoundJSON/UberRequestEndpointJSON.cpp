/* file "UberRequestEndpointJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestEndpointJSON.h"

#include "UberRequestEndpointJSON.h"


UberRequestEndpointJSON::UberRequestEndpointJSON(const UberRequestEndpointJSON &)
  {
    assert(false);
  }

UberRequestEndpointJSON &UberRequestEndpointJSON::operator=(const UberRequestEndpointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestEndpointJSON::fromJSONlatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field latitude of UberRequestEndpointJSON is not a number.");
          }
      }
    setlatitudeText(the_rational_text);
  }

void UberRequestEndpointJSON::fromJSONlongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field longitude of UberRequestEndpointJSON is not a number.");
          }
      }
    setlongitudeText(the_rational_text);
  }

void UberRequestEndpointJSON::fromJSONeta(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field eta of UberRequestEndpointJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field eta of UberRequestEndpointJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    seteta(extracted_integer);
  }

UberRequestEndpointJSON::UberRequestEndpointJSON(void) :
        flagHaslatitude(false),
        flagHaslongitude(false),
        flagHaseta(false)
  {
    extraIndex = create_string_index();
  }

UberRequestEndpointJSON::~UberRequestEndpointJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestEndpointJSON::haslatitude(void) const
  {
    return flagHaslatitude;
  }

double UberRequestEndpointJSON::getlatitude(void)
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

const double UberRequestEndpointJSON::getlatitude(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

std::string UberRequestEndpointJSON::getlatitudeAsText(void) const
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

bool UberRequestEndpointJSON::haslongitude(void) const
  {
    return flagHaslongitude;
  }

double UberRequestEndpointJSON::getlongitude(void)
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

const double UberRequestEndpointJSON::getlongitude(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

std::string UberRequestEndpointJSON::getlongitudeAsText(void) const
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

bool UberRequestEndpointJSON::haseta(void) const
  {
    return flagHaseta;
  }

OInteger UberRequestEndpointJSON::geteta(void)
  {
    assert(flagHaseta);
    return storeeta;
  }

const OInteger UberRequestEndpointJSON::geteta(void) const
  {
    assert(flagHaseta);
    return storeeta;
  }

char UberRequestEndpointJSON::Generator::lowerBoundeta[] = "0";
UberRequestEndpointJSON *UberRequestEndpointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestEndpointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestEndpointJSON>, UberRequestEndpointJSON *, bool> generator("Type UberRequestEndpoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
