/* file "UnitsValue_WindJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitsValue_WindJSON.h"

#include "UnitsValue_WindJSON.h"


UnitsValue_WindJSON::UnitsValue_WindJSON(const UnitsValue_WindJSON &)
  {
    assert(false);
  }

UnitsValue_WindJSON &UnitsValue_WindJSON::operator=(const UnitsValue_WindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitsValue_WindJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of UnitsValue_WindJSON is not a string.");
    setFormat(std::string(json_string->getData()));
  }

void UnitsValue_WindJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of UnitsValue_WindJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void UnitsValue_WindJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of UnitsValue_WindJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void UnitsValue_WindJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of UnitsValue_WindJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void UnitsValue_WindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of UnitsValue_WindJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of UnitsValue_WindJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setValue(extracted_integer);
  }

UnitsValue_WindJSON::UnitsValue_WindJSON(void) :
        flagHasFormat(false),
        flagHasUnits(false),
        flagHasWrittenUnits(false),
        flagHasSpokenUnits(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UnitsValue_WindJSON::~UnitsValue_WindJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitsValue_WindJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

std::string UnitsValue_WindJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const std::string UnitsValue_WindJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

bool UnitsValue_WindJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string UnitsValue_WindJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string UnitsValue_WindJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool UnitsValue_WindJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string UnitsValue_WindJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string UnitsValue_WindJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool UnitsValue_WindJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string UnitsValue_WindJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string UnitsValue_WindJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool UnitsValue_WindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

OInteger UnitsValue_WindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const OInteger UnitsValue_WindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

char UnitsValue_WindJSON::Generator::lowerBoundValue[] = "0";
UnitsValue_WindJSON *UnitsValue_WindJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitsValue_WindJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitsValue_WindJSON>, UnitsValue_WindJSON *, bool> generator("Type UnitsValue_Wind", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
