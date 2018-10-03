/* file "UnitsValue_IceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitsValue_IceJSON.h"

#include "UnitsValue_IceJSON.h"


UnitsValue_IceJSON::UnitsValue_IceJSON(const UnitsValue_IceJSON &)
  {
    assert(false);
  }

UnitsValue_IceJSON &UnitsValue_IceJSON::operator=(const UnitsValue_IceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitsValue_IceJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of UnitsValue_IceJSON is not a string.");
    setFormat(std::string(json_string->getData()));
  }

void UnitsValue_IceJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of UnitsValue_IceJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void UnitsValue_IceJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of UnitsValue_IceJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void UnitsValue_IceJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of UnitsValue_IceJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void UnitsValue_IceJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of UnitsValue_IceJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

UnitsValue_IceJSON::UnitsValue_IceJSON(void) :
        flagHasFormat(false),
        flagHasUnits(false),
        flagHasWrittenUnits(false),
        flagHasSpokenUnits(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UnitsValue_IceJSON::~UnitsValue_IceJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitsValue_IceJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

std::string UnitsValue_IceJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const std::string UnitsValue_IceJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

bool UnitsValue_IceJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string UnitsValue_IceJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string UnitsValue_IceJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool UnitsValue_IceJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string UnitsValue_IceJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string UnitsValue_IceJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool UnitsValue_IceJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string UnitsValue_IceJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string UnitsValue_IceJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool UnitsValue_IceJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double UnitsValue_IceJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double UnitsValue_IceJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string UnitsValue_IceJSON::getValueAsText(void) const
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

UnitsValue_IceJSON *UnitsValue_IceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitsValue_IceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitsValue_IceJSON>, UnitsValue_IceJSON *, bool> generator("Type UnitsValue_Ice", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
