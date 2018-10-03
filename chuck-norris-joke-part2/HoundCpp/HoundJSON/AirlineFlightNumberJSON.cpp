/* file "AirlineFlightNumberJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AirlineFlightNumberJSON.h"

#include "AirlineFlightNumberJSON.h"


AirlineFlightNumberJSON::AirlineFlightNumberJSON(const AirlineFlightNumberJSON &)
  {
    assert(false);
  }

AirlineFlightNumberJSON &AirlineFlightNumberJSON::operator=(const AirlineFlightNumberJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AirlineFlightNumberJSON::fromJSONAirline(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AirlineJSON *convert_classy = AirlineJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirline(convert_classy);
    convert_classy->remove_reference();
  }

void AirlineFlightNumberJSON::fromJSONFlightNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FlightNumber of AirlineFlightNumberJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FlightNumber of AirlineFlightNumberJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setFlightNumber(extracted_integer);
  }

AirlineFlightNumberJSON::AirlineFlightNumberJSON(void) :
        flagHasAirline(false),
        flagHasFlightNumber(false)
  {
    extraIndex = create_string_index();
  }

AirlineFlightNumberJSON::~AirlineFlightNumberJSON(void)
  {
    if (flagHasAirline)
      {
        storeAirline->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AirlineFlightNumberJSON::hasAirline(void) const
  {
    return flagHasAirline;
  }

AirlineJSON * AirlineFlightNumberJSON::getAirline(void)
  {
    assert(flagHasAirline);
    return storeAirline;
  }

const AirlineJSON * AirlineFlightNumberJSON::getAirline(void) const
  {
    assert(flagHasAirline);
    return storeAirline;
  }

bool AirlineFlightNumberJSON::hasFlightNumber(void) const
  {
    return flagHasFlightNumber;
  }

uint16_t AirlineFlightNumberJSON::getFlightNumber(void)
  {
    assert(flagHasFlightNumber);
    return storeFlightNumber;
  }

const uint16_t AirlineFlightNumberJSON::getFlightNumber(void) const
  {
    assert(flagHasFlightNumber);
    return storeFlightNumber;
  }

AirlineFlightNumberJSON *AirlineFlightNumberJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AirlineFlightNumberJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AirlineFlightNumberJSON>, AirlineFlightNumberJSON *, bool> generator("Type AirlineFlightNumber", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
