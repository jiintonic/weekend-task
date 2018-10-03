/* file "FlightPassengerTypeCountJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightPassengerTypeCountJSON.h"

#include "FlightPassengerTypeCountJSON.h"


FlightPassengerTypeCountJSON::FlightPassengerTypeCountJSON(const FlightPassengerTypeCountJSON &)
  {
    assert(false);
  }

FlightPassengerTypeCountJSON &FlightPassengerTypeCountJSON::operator=(const FlightPassengerTypeCountJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightPassengerTypeCountJSON::fromJSONPassengerType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightPassengerTypeJSON *convert_classy = FlightPassengerTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPassengerType(convert_classy);
    convert_classy->remove_reference();
  }

void FlightPassengerTypeCountJSON::fromJSONCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Count of FlightPassengerTypeCountJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Count of FlightPassengerTypeCountJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setCount(extracted_integer);
  }

FlightPassengerTypeCountJSON::FlightPassengerTypeCountJSON(void) :
        flagHasPassengerType(false),
        flagHasCount(false)
  {
    extraIndex = create_string_index();
  }

FlightPassengerTypeCountJSON::~FlightPassengerTypeCountJSON(void)
  {
    if (flagHasPassengerType)
      {
        storePassengerType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightPassengerTypeCountJSON::hasPassengerType(void) const
  {
    return flagHasPassengerType;
  }

FlightPassengerTypeJSON * FlightPassengerTypeCountJSON::getPassengerType(void)
  {
    assert(flagHasPassengerType);
    return storePassengerType;
  }

const FlightPassengerTypeJSON * FlightPassengerTypeCountJSON::getPassengerType(void) const
  {
    assert(flagHasPassengerType);
    return storePassengerType;
  }

FlightPassengerTypeJSON::TypeValue FlightPassengerTypeCountJSON::getPassengerTypeValue(void)
  {
    return getPassengerType()->getValue();
  }

const FlightPassengerTypeJSON::TypeValue FlightPassengerTypeCountJSON::getPassengerTypeValue(void) const
  {
    return getPassengerType()->getValue();
  }

const char *FlightPassengerTypeCountJSON::getPassengerTypeAsChars(void) const
  {
    return getPassengerType()->getValueAsChars();
  }

std::string FlightPassengerTypeCountJSON::getPassengerTypeAsString(void) const
  {
    return getPassengerType()->getValueAsString();
  }

bool FlightPassengerTypeCountJSON::hasCount(void) const
  {
    return flagHasCount;
  }

OInteger FlightPassengerTypeCountJSON::getCount(void)
  {
    assert(flagHasCount);
    return storeCount;
  }

const OInteger FlightPassengerTypeCountJSON::getCount(void) const
  {
    assert(flagHasCount);
    return storeCount;
  }

char FlightPassengerTypeCountJSON::Generator::lowerBoundCount[] = "0";
FlightPassengerTypeCountJSON *FlightPassengerTypeCountJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightPassengerTypeCountJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightPassengerTypeCountJSON>, FlightPassengerTypeCountJSON *, bool> generator("Type FlightPassengerTypeCount", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
