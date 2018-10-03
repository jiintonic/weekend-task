/* file "UnitsValue_TemperatureJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitsValue_TemperatureJSON.h"

#include "UnitsValue_TemperatureJSON.h"


UnitsValue_TemperatureJSON::UnitsValue_TemperatureJSON(const UnitsValue_TemperatureJSON &)
  {
    assert(false);
  }

UnitsValue_TemperatureJSON &UnitsValue_TemperatureJSON::operator=(const UnitsValue_TemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitsValue_TemperatureJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of UnitsValue_TemperatureJSON is not a string.");
    setFormat(std::string(json_string->getData()));
  }

void UnitsValue_TemperatureJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of UnitsValue_TemperatureJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void UnitsValue_TemperatureJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of UnitsValue_TemperatureJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void UnitsValue_TemperatureJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of UnitsValue_TemperatureJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void UnitsValue_TemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of UnitsValue_TemperatureJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of UnitsValue_TemperatureJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setValue(extracted_integer);
  }

UnitsValue_TemperatureJSON::UnitsValue_TemperatureJSON(void) :
        flagHasFormat(false),
        flagHasUnits(false),
        flagHasWrittenUnits(false),
        flagHasSpokenUnits(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UnitsValue_TemperatureJSON::~UnitsValue_TemperatureJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitsValue_TemperatureJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

std::string UnitsValue_TemperatureJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const std::string UnitsValue_TemperatureJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

bool UnitsValue_TemperatureJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string UnitsValue_TemperatureJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string UnitsValue_TemperatureJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool UnitsValue_TemperatureJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string UnitsValue_TemperatureJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string UnitsValue_TemperatureJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool UnitsValue_TemperatureJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string UnitsValue_TemperatureJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string UnitsValue_TemperatureJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool UnitsValue_TemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

OInteger UnitsValue_TemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const OInteger UnitsValue_TemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

UnitsValue_TemperatureJSON *UnitsValue_TemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitsValue_TemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitsValue_TemperatureJSON>, UnitsValue_TemperatureJSON *, bool> generator("Type UnitsValue_Temperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
