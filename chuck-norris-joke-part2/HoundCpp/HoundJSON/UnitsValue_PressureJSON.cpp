/* file "UnitsValue_PressureJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitsValue_PressureJSON.h"

#include "UnitsValue_PressureJSON.h"


UnitsValue_PressureJSON::UnitsValue_PressureJSON(const UnitsValue_PressureJSON &)
  {
    assert(false);
  }

UnitsValue_PressureJSON &UnitsValue_PressureJSON::operator=(const UnitsValue_PressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitsValue_PressureJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of UnitsValue_PressureJSON is not a string.");
    setFormat(std::string(json_string->getData()));
  }

void UnitsValue_PressureJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of UnitsValue_PressureJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void UnitsValue_PressureJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of UnitsValue_PressureJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void UnitsValue_PressureJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of UnitsValue_PressureJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void UnitsValue_PressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of UnitsValue_PressureJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

UnitsValue_PressureJSON::UnitsValue_PressureJSON(void) :
        flagHasFormat(false),
        flagHasUnits(false),
        flagHasWrittenUnits(false),
        flagHasSpokenUnits(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UnitsValue_PressureJSON::~UnitsValue_PressureJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitsValue_PressureJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

std::string UnitsValue_PressureJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const std::string UnitsValue_PressureJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

bool UnitsValue_PressureJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string UnitsValue_PressureJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string UnitsValue_PressureJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool UnitsValue_PressureJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string UnitsValue_PressureJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string UnitsValue_PressureJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool UnitsValue_PressureJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string UnitsValue_PressureJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string UnitsValue_PressureJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool UnitsValue_PressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double UnitsValue_PressureJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double UnitsValue_PressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string UnitsValue_PressureJSON::getValueAsText(void) const
  {
    assert(flagHasValue);
    if (textStoreValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValue);
      }
  }

UnitsValue_PressureJSON *UnitsValue_PressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitsValue_PressureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitsValue_PressureJSON>, UnitsValue_PressureJSON *, bool> generator("Type UnitsValue_Pressure", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
