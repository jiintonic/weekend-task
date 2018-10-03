/* file "StockAttributeValueJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockAttributeValueJSON.h"

#include "StockAttributeValueJSON.h"


StockAttributeValueJSON::StockAttributeValueJSON(const StockAttributeValueJSON &)
  {
    assert(false);
  }

StockAttributeValueJSON &StockAttributeValueJSON::operator=(const StockAttributeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockAttributeValueJSON::fromJSONSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Spoken of StockAttributeValueJSON is not a string.");
    setSpoken(std::string(json_string->getData()));
  }

void StockAttributeValueJSON::fromJSONDisplay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Display of StockAttributeValueJSON is not a string.");
    setDisplay(std::string(json_string->getData()));
  }

void StockAttributeValueJSON::fromJSONTable(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Table of StockAttributeValueJSON is not a string.");
    setTable(std::string(json_string->getData()));
  }

void StockAttributeValueJSON::fromJSONNative(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Native of StockAttributeValueJSON is not a string.");
    setNative(std::string(json_string->getData()));
  }

void StockAttributeValueJSON::fromJSONRationalValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RationalValue of StockAttributeValueJSON is not a number.");
          }
      }
    setRationalValueText(the_rational_text);
  }

StockAttributeValueJSON::StockAttributeValueJSON(void) :
        flagHasSpoken(false),
        flagHasDisplay(false),
        flagHasTable(false),
        flagHasNative(false),
        flagHasRationalValue(false)
  {
    extraIndex = create_string_index();
  }

StockAttributeValueJSON::~StockAttributeValueJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockAttributeValueJSON::hasSpoken(void) const
  {
    return flagHasSpoken;
  }

std::string StockAttributeValueJSON::getSpoken(void)
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

const std::string StockAttributeValueJSON::getSpoken(void) const
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

bool StockAttributeValueJSON::hasDisplay(void) const
  {
    return flagHasDisplay;
  }

std::string StockAttributeValueJSON::getDisplay(void)
  {
    assert(flagHasDisplay);
    return storeDisplay;
  }

const std::string StockAttributeValueJSON::getDisplay(void) const
  {
    assert(flagHasDisplay);
    return storeDisplay;
  }

bool StockAttributeValueJSON::hasTable(void) const
  {
    return flagHasTable;
  }

std::string StockAttributeValueJSON::getTable(void)
  {
    assert(flagHasTable);
    return storeTable;
  }

const std::string StockAttributeValueJSON::getTable(void) const
  {
    assert(flagHasTable);
    return storeTable;
  }

bool StockAttributeValueJSON::hasNative(void) const
  {
    return flagHasNative;
  }

std::string StockAttributeValueJSON::getNative(void)
  {
    assert(flagHasNative);
    return storeNative;
  }

const std::string StockAttributeValueJSON::getNative(void) const
  {
    assert(flagHasNative);
    return storeNative;
  }

bool StockAttributeValueJSON::hasRationalValue(void) const
  {
    return flagHasRationalValue;
  }

double StockAttributeValueJSON::getRationalValue(void)
  {
    assert(flagHasRationalValue);
    if (textStoreRationalValue != "")
      {
        return atof(textStoreRationalValue.c_str());
      }
    return storeRationalValue;
  }

const double StockAttributeValueJSON::getRationalValue(void) const
  {
    assert(flagHasRationalValue);
    if (textStoreRationalValue != "")
      {
        return atof(textStoreRationalValue.c_str());
      }
    return storeRationalValue;
  }

std::string StockAttributeValueJSON::getRationalValueAsText(void) const
  {
    assert(flagHasRationalValue);
    if (textStoreRationalValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRationalValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRationalValue);
      }
  }

StockAttributeValueJSON *StockAttributeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockAttributeValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool> generator("Type StockAttributeValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
