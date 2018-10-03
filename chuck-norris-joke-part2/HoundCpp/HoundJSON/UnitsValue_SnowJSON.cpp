/* file "UnitsValue_SnowJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitsValue_SnowJSON.h"

#include "UnitsValue_SnowJSON.h"


UnitsValue_SnowJSON::UnitsValue_SnowJSON(const UnitsValue_SnowJSON &)
  {
    assert(false);
  }

UnitsValue_SnowJSON &UnitsValue_SnowJSON::operator=(const UnitsValue_SnowJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitsValue_SnowJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of UnitsValue_SnowJSON is not a string.");
    setFormat(std::string(json_string->getData()));
  }

void UnitsValue_SnowJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of UnitsValue_SnowJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void UnitsValue_SnowJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of UnitsValue_SnowJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void UnitsValue_SnowJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of UnitsValue_SnowJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void UnitsValue_SnowJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of UnitsValue_SnowJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

UnitsValue_SnowJSON::UnitsValue_SnowJSON(void) :
        flagHasFormat(false),
        flagHasUnits(false),
        flagHasWrittenUnits(false),
        flagHasSpokenUnits(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UnitsValue_SnowJSON::~UnitsValue_SnowJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitsValue_SnowJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

std::string UnitsValue_SnowJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const std::string UnitsValue_SnowJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

bool UnitsValue_SnowJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string UnitsValue_SnowJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string UnitsValue_SnowJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool UnitsValue_SnowJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string UnitsValue_SnowJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string UnitsValue_SnowJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool UnitsValue_SnowJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string UnitsValue_SnowJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string UnitsValue_SnowJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool UnitsValue_SnowJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double UnitsValue_SnowJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double UnitsValue_SnowJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string UnitsValue_SnowJSON::getValueAsText(void) const
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

UnitsValue_SnowJSON *UnitsValue_SnowJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitsValue_SnowJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitsValue_SnowJSON>, UnitsValue_SnowJSON *, bool> generator("Type UnitsValue_Snow", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
