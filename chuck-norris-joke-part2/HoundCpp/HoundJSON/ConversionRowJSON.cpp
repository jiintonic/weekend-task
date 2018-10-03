/* file "ConversionRowJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ConversionRowJSON.h"

#include "ConversionRowJSON.h"


ConversionRowJSON::ConversionRowJSON(const ConversionRowJSON &)
  {
    assert(false);
  }

ConversionRowJSON &ConversionRowJSON::operator=(const ConversionRowJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ConversionRowJSON::fromJSONStringToConvert(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StringToConvert of ConversionRowJSON is not a string.");
    setStringToConvert(std::string(json_string->getData()));
  }

void ConversionRowJSON::fromJSONInputBaseSmallName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InputBaseSmallName of ConversionRowJSON is not a string.");
    setInputBaseSmallName(std::string(json_string->getData()));
  }

void ConversionRowJSON::fromJSONInputBaseFullName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InputBaseFullName of ConversionRowJSON is not a string.");
    setInputBaseFullName(std::string(json_string->getData()));
  }

void ConversionRowJSON::fromJSONBaseSmallName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BaseSmallName of ConversionRowJSON is not a string.");
    setBaseSmallName(std::string(json_string->getData()));
  }

void ConversionRowJSON::fromJSONBaseFullName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BaseFullName of ConversionRowJSON is not a string.");
    setBaseFullName(std::string(json_string->getData()));
  }

void ConversionRowJSON::fromJSONConvertedNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConvertedNumber of ConversionRowJSON is not a string.");
    setConvertedNumber(std::string(json_string->getData()));
  }

void ConversionRowJSON::fromJSONConvertedNumberSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConvertedNumberSpoken of ConversionRowJSON is not a string.");
    setConvertedNumberSpoken(std::string(json_string->getData()));
  }

ConversionRowJSON::ConversionRowJSON(void) :
        flagHasStringToConvert(false),
        flagHasInputBaseSmallName(false),
        flagHasInputBaseFullName(false),
        flagHasBaseSmallName(false),
        flagHasBaseFullName(false),
        flagHasConvertedNumber(false),
        flagHasConvertedNumberSpoken(false)
  {
  }

ConversionRowJSON::~ConversionRowJSON(void)
  {
  }

bool ConversionRowJSON::hasStringToConvert(void) const
  {
    return flagHasStringToConvert;
  }

std::string ConversionRowJSON::getStringToConvert(void)
  {
    assert(flagHasStringToConvert);
    return storeStringToConvert;
  }

const std::string ConversionRowJSON::getStringToConvert(void) const
  {
    assert(flagHasStringToConvert);
    return storeStringToConvert;
  }

bool ConversionRowJSON::hasInputBaseSmallName(void) const
  {
    return flagHasInputBaseSmallName;
  }

std::string ConversionRowJSON::getInputBaseSmallName(void)
  {
    assert(flagHasInputBaseSmallName);
    return storeInputBaseSmallName;
  }

const std::string ConversionRowJSON::getInputBaseSmallName(void) const
  {
    assert(flagHasInputBaseSmallName);
    return storeInputBaseSmallName;
  }

bool ConversionRowJSON::hasInputBaseFullName(void) const
  {
    return flagHasInputBaseFullName;
  }

std::string ConversionRowJSON::getInputBaseFullName(void)
  {
    assert(flagHasInputBaseFullName);
    return storeInputBaseFullName;
  }

const std::string ConversionRowJSON::getInputBaseFullName(void) const
  {
    assert(flagHasInputBaseFullName);
    return storeInputBaseFullName;
  }

bool ConversionRowJSON::hasBaseSmallName(void) const
  {
    return flagHasBaseSmallName;
  }

std::string ConversionRowJSON::getBaseSmallName(void)
  {
    assert(flagHasBaseSmallName);
    return storeBaseSmallName;
  }

const std::string ConversionRowJSON::getBaseSmallName(void) const
  {
    assert(flagHasBaseSmallName);
    return storeBaseSmallName;
  }

bool ConversionRowJSON::hasBaseFullName(void) const
  {
    return flagHasBaseFullName;
  }

std::string ConversionRowJSON::getBaseFullName(void)
  {
    assert(flagHasBaseFullName);
    return storeBaseFullName;
  }

const std::string ConversionRowJSON::getBaseFullName(void) const
  {
    assert(flagHasBaseFullName);
    return storeBaseFullName;
  }

bool ConversionRowJSON::hasConvertedNumber(void) const
  {
    return flagHasConvertedNumber;
  }

std::string ConversionRowJSON::getConvertedNumber(void)
  {
    assert(flagHasConvertedNumber);
    return storeConvertedNumber;
  }

const std::string ConversionRowJSON::getConvertedNumber(void) const
  {
    assert(flagHasConvertedNumber);
    return storeConvertedNumber;
  }

bool ConversionRowJSON::hasConvertedNumberSpoken(void) const
  {
    return flagHasConvertedNumberSpoken;
  }

std::string ConversionRowJSON::getConvertedNumberSpoken(void)
  {
    assert(flagHasConvertedNumberSpoken);
    return storeConvertedNumberSpoken;
  }

const std::string ConversionRowJSON::getConvertedNumberSpoken(void) const
  {
    assert(flagHasConvertedNumberSpoken);
    return storeConvertedNumberSpoken;
  }

ConversionRowJSON *ConversionRowJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ConversionRowJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ConversionRowJSON>, ConversionRowJSON *, bool> generator("Type ConversionRow", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
