/* file "LocalResultBusinessHoursJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalResultBusinessHoursJSON.h"

#include "LocalResultBusinessHoursJSON.h"


LocalResultBusinessHoursJSON::LocalResultBusinessHoursJSON(const LocalResultBusinessHoursJSON &)
  {
    assert(false);
  }

LocalResultBusinessHoursJSON &LocalResultBusinessHoursJSON::operator=(const LocalResultBusinessHoursJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultBusinessHoursJSON::fromJSONStartTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint32_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartTime of LocalResultBusinessHoursJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartTime of LocalResultBusinessHoursJSON is not an integer.");
          }
        extracted_integer = (uint32_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint32_t)(json_integer->getUnsignedLongInt())    ;
      }
    setStartTime(extracted_integer);
  }

void LocalResultBusinessHoursJSON::fromJSONEndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint32_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EndTime of LocalResultBusinessHoursJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EndTime of LocalResultBusinessHoursJSON is not an integer.");
          }
        extracted_integer = (uint32_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint32_t)(json_integer->getUnsignedLongInt())    ;
      }
    setEndTime(extracted_integer);
  }

LocalResultBusinessHoursJSON::LocalResultBusinessHoursJSON(void) :
        flagHasStartTime(false),
        flagHasEndTime(false)
  {
  }

LocalResultBusinessHoursJSON::~LocalResultBusinessHoursJSON(void)
  {
  }

bool LocalResultBusinessHoursJSON::hasStartTime(void) const
  {
    return flagHasStartTime;
  }

uint32_t LocalResultBusinessHoursJSON::getStartTime(void)
  {
    assert(flagHasStartTime);
    return storeStartTime;
  }

const uint32_t LocalResultBusinessHoursJSON::getStartTime(void) const
  {
    assert(flagHasStartTime);
    return storeStartTime;
  }

bool LocalResultBusinessHoursJSON::hasEndTime(void) const
  {
    return flagHasEndTime;
  }

uint32_t LocalResultBusinessHoursJSON::getEndTime(void)
  {
    assert(flagHasEndTime);
    return storeEndTime;
  }

const uint32_t LocalResultBusinessHoursJSON::getEndTime(void) const
  {
    assert(flagHasEndTime);
    return storeEndTime;
  }

LocalResultBusinessHoursJSON *LocalResultBusinessHoursJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalResultBusinessHoursJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool> generator("Type LocalResultBusinessHours", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
