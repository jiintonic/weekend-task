/* file "SportsStatsTypeAndValueJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStatsTypeAndValueJSON.h"

#include "SportsStatsTypeAndValueJSON.h"


SportsStatsTypeAndValueJSON::SportsStatsTypeAndValueJSON(const SportsStatsTypeAndValueJSON &)
  {
    assert(false);
  }

SportsStatsTypeAndValueJSON &SportsStatsTypeAndValueJSON::operator=(const SportsStatsTypeAndValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsTypeAndValueJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStatsTypeJSON *convert_classy = SportsStatsTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStatsTypeAndValueJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsStatsTypeAndValueJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

void SportsStatsTypeAndValueJSON::fromJSONValueNumeric(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ValueNumeric of SportsStatsTypeAndValueJSON is not a number.");
          }
      }
    setValueNumericText(the_rational_text);
  }

SportsStatsTypeAndValueJSON::SportsStatsTypeAndValueJSON(void) :
        flagHasType(false),
        flagHasValue(false),
        flagHasValueNumeric(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsTypeAndValueJSON::~SportsStatsTypeAndValueJSON(void)
  {
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsTypeAndValueJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsStatsTypeJSON * SportsStatsTypeAndValueJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsStatsTypeJSON * SportsStatsTypeAndValueJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsStatsTypeJSON::TypeValue SportsStatsTypeAndValueJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsStatsTypeJSON::TypeValue SportsStatsTypeAndValueJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsStatsTypeAndValueJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsStatsTypeAndValueJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

bool SportsStatsTypeAndValueJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string SportsStatsTypeAndValueJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string SportsStatsTypeAndValueJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool SportsStatsTypeAndValueJSON::hasValueNumeric(void) const
  {
    return flagHasValueNumeric;
  }

double SportsStatsTypeAndValueJSON::getValueNumeric(void)
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric != "")
      {
        return atof(textStoreValueNumeric.c_str());
      }
    return storeValueNumeric;
  }

const double SportsStatsTypeAndValueJSON::getValueNumeric(void) const
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric != "")
      {
        return atof(textStoreValueNumeric.c_str());
      }
    return storeValueNumeric;
  }

std::string SportsStatsTypeAndValueJSON::getValueNumericAsText(void) const
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValueNumeric);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValueNumeric);
      }
  }

SportsStatsTypeAndValueJSON *SportsStatsTypeAndValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStatsTypeAndValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStatsTypeAndValueJSON>, SportsStatsTypeAndValueJSON *, bool> generator("Type SportsStatsTypeAndValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
