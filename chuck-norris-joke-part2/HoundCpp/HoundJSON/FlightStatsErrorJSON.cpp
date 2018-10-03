/* file "FlightStatsErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsErrorJSON.h"

#include "FlightStatsErrorJSON.h"


FlightStatsErrorJSON::FlightStatsErrorJSON(const FlightStatsErrorJSON &)
  {
    assert(false);
  }

FlightStatsErrorJSON &FlightStatsErrorJSON::operator=(const FlightStatsErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsErrorJSON::fromJSONhttpStatusCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field httpStatusCode of FlightStatsErrorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field httpStatusCode of FlightStatsErrorJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    sethttpStatusCode(extracted_integer);
  }

void FlightStatsErrorJSON::fromJSONerrorCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field errorCode of FlightStatsErrorJSON is not a string.");
    seterrorCode(std::string(json_string->getData()));
  }

void FlightStatsErrorJSON::fromJSONerrorId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field errorId of FlightStatsErrorJSON is not a string.");
    seterrorId(std::string(json_string->getData()));
  }

void FlightStatsErrorJSON::fromJSONerrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field errorMessage of FlightStatsErrorJSON is not a string.");
    seterrorMessage(std::string(json_string->getData()));
  }

FlightStatsErrorJSON::FlightStatsErrorJSON(void) :
        flagHashttpStatusCode(false),
        flagHaserrorCode(false),
        flagHaserrorId(false),
        flagHaserrorMessage(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsErrorJSON::~FlightStatsErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsErrorJSON::hashttpStatusCode(void) const
  {
    return flagHashttpStatusCode;
  }

OInteger FlightStatsErrorJSON::gethttpStatusCode(void)
  {
    assert(flagHashttpStatusCode);
    return storehttpStatusCode;
  }

const OInteger FlightStatsErrorJSON::gethttpStatusCode(void) const
  {
    assert(flagHashttpStatusCode);
    return storehttpStatusCode;
  }

bool FlightStatsErrorJSON::haserrorCode(void) const
  {
    return flagHaserrorCode;
  }

std::string FlightStatsErrorJSON::geterrorCode(void)
  {
    assert(flagHaserrorCode);
    return storeerrorCode;
  }

const std::string FlightStatsErrorJSON::geterrorCode(void) const
  {
    assert(flagHaserrorCode);
    return storeerrorCode;
  }

bool FlightStatsErrorJSON::haserrorId(void) const
  {
    return flagHaserrorId;
  }

std::string FlightStatsErrorJSON::geterrorId(void)
  {
    assert(flagHaserrorId);
    return storeerrorId;
  }

const std::string FlightStatsErrorJSON::geterrorId(void) const
  {
    assert(flagHaserrorId);
    return storeerrorId;
  }

bool FlightStatsErrorJSON::haserrorMessage(void) const
  {
    return flagHaserrorMessage;
  }

std::string FlightStatsErrorJSON::geterrorMessage(void)
  {
    assert(flagHaserrorMessage);
    return storeerrorMessage;
  }

const std::string FlightStatsErrorJSON::geterrorMessage(void) const
  {
    assert(flagHaserrorMessage);
    return storeerrorMessage;
  }

FlightStatsErrorJSON *FlightStatsErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsErrorJSON>, FlightStatsErrorJSON *, bool> generator("Type FlightStatsError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
