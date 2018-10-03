/* file "UnitsValue_PlannerPrecipitationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitsValue_PlannerPrecipitationJSON.h"

#include "UnitsValue_PlannerPrecipitationJSON.h"


UnitsValue_PlannerPrecipitationJSON::UnitsValue_PlannerPrecipitationJSON(const UnitsValue_PlannerPrecipitationJSON &)
  {
    assert(false);
  }

UnitsValue_PlannerPrecipitationJSON &UnitsValue_PlannerPrecipitationJSON::operator=(const UnitsValue_PlannerPrecipitationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitsValue_PlannerPrecipitationJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of UnitsValue_PlannerPrecipitationJSON is not a string.");
    setFormat(std::string(json_string->getData()));
  }

void UnitsValue_PlannerPrecipitationJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of UnitsValue_PlannerPrecipitationJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void UnitsValue_PlannerPrecipitationJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of UnitsValue_PlannerPrecipitationJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void UnitsValue_PlannerPrecipitationJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of UnitsValue_PlannerPrecipitationJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void UnitsValue_PlannerPrecipitationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of UnitsValue_PlannerPrecipitationJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

UnitsValue_PlannerPrecipitationJSON::UnitsValue_PlannerPrecipitationJSON(void) :
        flagHasFormat(false),
        flagHasUnits(false),
        flagHasWrittenUnits(false),
        flagHasSpokenUnits(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UnitsValue_PlannerPrecipitationJSON::~UnitsValue_PlannerPrecipitationJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitsValue_PlannerPrecipitationJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

std::string UnitsValue_PlannerPrecipitationJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const std::string UnitsValue_PlannerPrecipitationJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

bool UnitsValue_PlannerPrecipitationJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string UnitsValue_PlannerPrecipitationJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string UnitsValue_PlannerPrecipitationJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool UnitsValue_PlannerPrecipitationJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string UnitsValue_PlannerPrecipitationJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string UnitsValue_PlannerPrecipitationJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool UnitsValue_PlannerPrecipitationJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string UnitsValue_PlannerPrecipitationJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string UnitsValue_PlannerPrecipitationJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool UnitsValue_PlannerPrecipitationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double UnitsValue_PlannerPrecipitationJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double UnitsValue_PlannerPrecipitationJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string UnitsValue_PlannerPrecipitationJSON::getValueAsText(void) const
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

UnitsValue_PlannerPrecipitationJSON *UnitsValue_PlannerPrecipitationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitsValue_PlannerPrecipitationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitsValue_PlannerPrecipitationJSON>, UnitsValue_PlannerPrecipitationJSON *, bool> generator("Type UnitsValue_PlannerPrecipitation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
