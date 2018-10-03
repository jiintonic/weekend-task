/* file "UnitsValue_VisibilityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitsValue_VisibilityJSON.h"

#include "UnitsValue_VisibilityJSON.h"


UnitsValue_VisibilityJSON::UnitsValue_VisibilityJSON(const UnitsValue_VisibilityJSON &)
  {
    assert(false);
  }

UnitsValue_VisibilityJSON &UnitsValue_VisibilityJSON::operator=(const UnitsValue_VisibilityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitsValue_VisibilityJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of UnitsValue_VisibilityJSON is not a string.");
    setFormat(std::string(json_string->getData()));
  }

void UnitsValue_VisibilityJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of UnitsValue_VisibilityJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void UnitsValue_VisibilityJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of UnitsValue_VisibilityJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void UnitsValue_VisibilityJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of UnitsValue_VisibilityJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void UnitsValue_VisibilityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of UnitsValue_VisibilityJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

UnitsValue_VisibilityJSON::UnitsValue_VisibilityJSON(void) :
        flagHasFormat(false),
        flagHasUnits(false),
        flagHasWrittenUnits(false),
        flagHasSpokenUnits(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UnitsValue_VisibilityJSON::~UnitsValue_VisibilityJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitsValue_VisibilityJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

std::string UnitsValue_VisibilityJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const std::string UnitsValue_VisibilityJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

bool UnitsValue_VisibilityJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string UnitsValue_VisibilityJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string UnitsValue_VisibilityJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool UnitsValue_VisibilityJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string UnitsValue_VisibilityJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string UnitsValue_VisibilityJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool UnitsValue_VisibilityJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string UnitsValue_VisibilityJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string UnitsValue_VisibilityJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool UnitsValue_VisibilityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double UnitsValue_VisibilityJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double UnitsValue_VisibilityJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string UnitsValue_VisibilityJSON::getValueAsText(void) const
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

UnitsValue_VisibilityJSON *UnitsValue_VisibilityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitsValue_VisibilityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitsValue_VisibilityJSON>, UnitsValue_VisibilityJSON *, bool> generator("Type UnitsValue_Visibility", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
