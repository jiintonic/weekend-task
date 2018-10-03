/* file "CompoundStockAttributeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CompoundStockAttributeJSON.h"

#include "CompoundStockAttributeJSON.h"


CompoundStockAttributeJSON::CompoundStockAttributeJSON(const CompoundStockAttributeJSON &)
  {
    assert(false);
  }

CompoundStockAttributeJSON &CompoundStockAttributeJSON::operator=(const CompoundStockAttributeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CompoundStockAttributeJSON::fromJSONAttributeType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeJSON *convert_classy = StockAttributeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttributeType(convert_classy);
    convert_classy->remove_reference();
  }

void CompoundStockAttributeJSON::fromJSONStockExchangeShortName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStockExchangeShortName(convert_classy);
    convert_classy->remove_reference();
  }

void CompoundStockAttributeJSON::fromJSONStockExchangeLongName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStockExchangeLongName(convert_classy);
    convert_classy->remove_reference();
  }

void CompoundStockAttributeJSON::fromJSONStockExchangeSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStockExchangeSymbol(convert_classy);
    convert_classy->remove_reference();
  }

void CompoundStockAttributeJSON::fromJSONCountryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCountryName(convert_classy);
    convert_classy->remove_reference();
  }

void CompoundStockAttributeJSON::fromJSONDateRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateRange(convert_classy);
    convert_classy->remove_reference();
  }

CompoundStockAttributeJSON::CompoundStockAttributeJSON(void) :
        flagHasAttributeType(false),
        flagHasStockExchangeShortName(false),
        flagHasStockExchangeLongName(false),
        flagHasStockExchangeSymbol(false),
        flagHasCountryName(false),
        flagHasDateRange(false)
  {
    extraIndex = create_string_index();
  }

CompoundStockAttributeJSON::~CompoundStockAttributeJSON(void)
  {
    if (flagHasAttributeType)
      {
        storeAttributeType->remove_reference();
      }
    if (flagHasStockExchangeShortName)
      {
        storeStockExchangeShortName->remove_reference();
      }
    if (flagHasStockExchangeLongName)
      {
        storeStockExchangeLongName->remove_reference();
      }
    if (flagHasStockExchangeSymbol)
      {
        storeStockExchangeSymbol->remove_reference();
      }
    if (flagHasCountryName)
      {
        storeCountryName->remove_reference();
      }
    if (flagHasDateRange)
      {
        storeDateRange->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CompoundStockAttributeJSON::hasAttributeType(void) const
  {
    return flagHasAttributeType;
  }

StockAttributeJSON * CompoundStockAttributeJSON::getAttributeType(void)
  {
    assert(flagHasAttributeType);
    return storeAttributeType;
  }

const StockAttributeJSON * CompoundStockAttributeJSON::getAttributeType(void) const
  {
    assert(flagHasAttributeType);
    return storeAttributeType;
  }

StockAttributeJSON::TypeValue CompoundStockAttributeJSON::getAttributeTypeValue(void)
  {
    return getAttributeType()->getValue();
  }

const StockAttributeJSON::TypeValue CompoundStockAttributeJSON::getAttributeTypeValue(void) const
  {
    return getAttributeType()->getValue();
  }

const char *CompoundStockAttributeJSON::getAttributeTypeAsChars(void) const
  {
    return getAttributeType()->getValueAsChars();
  }

std::string CompoundStockAttributeJSON::getAttributeTypeAsString(void) const
  {
    return getAttributeType()->getValueAsString();
  }

bool CompoundStockAttributeJSON::hasStockExchangeShortName(void) const
  {
    return flagHasStockExchangeShortName;
  }

StockAttributeValueJSON * CompoundStockAttributeJSON::getStockExchangeShortName(void)
  {
    assert(flagHasStockExchangeShortName);
    return storeStockExchangeShortName;
  }

const StockAttributeValueJSON * CompoundStockAttributeJSON::getStockExchangeShortName(void) const
  {
    assert(flagHasStockExchangeShortName);
    return storeStockExchangeShortName;
  }

bool CompoundStockAttributeJSON::hasStockExchangeLongName(void) const
  {
    return flagHasStockExchangeLongName;
  }

StockAttributeValueJSON * CompoundStockAttributeJSON::getStockExchangeLongName(void)
  {
    assert(flagHasStockExchangeLongName);
    return storeStockExchangeLongName;
  }

const StockAttributeValueJSON * CompoundStockAttributeJSON::getStockExchangeLongName(void) const
  {
    assert(flagHasStockExchangeLongName);
    return storeStockExchangeLongName;
  }

bool CompoundStockAttributeJSON::hasStockExchangeSymbol(void) const
  {
    return flagHasStockExchangeSymbol;
  }

StockAttributeValueJSON * CompoundStockAttributeJSON::getStockExchangeSymbol(void)
  {
    assert(flagHasStockExchangeSymbol);
    return storeStockExchangeSymbol;
  }

const StockAttributeValueJSON * CompoundStockAttributeJSON::getStockExchangeSymbol(void) const
  {
    assert(flagHasStockExchangeSymbol);
    return storeStockExchangeSymbol;
  }

bool CompoundStockAttributeJSON::hasCountryName(void) const
  {
    return flagHasCountryName;
  }

StockAttributeValueJSON * CompoundStockAttributeJSON::getCountryName(void)
  {
    assert(flagHasCountryName);
    return storeCountryName;
  }

const StockAttributeValueJSON * CompoundStockAttributeJSON::getCountryName(void) const
  {
    assert(flagHasCountryName);
    return storeCountryName;
  }

bool CompoundStockAttributeJSON::hasDateRange(void) const
  {
    return flagHasDateRange;
  }

DateTimeRangeSpecJSON * CompoundStockAttributeJSON::getDateRange(void)
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

const DateTimeRangeSpecJSON * CompoundStockAttributeJSON::getDateRange(void) const
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

CompoundStockAttributeJSON *CompoundStockAttributeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CompoundStockAttributeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CompoundStockAttributeJSON>, CompoundStockAttributeJSON *, bool> generator("Type CompoundStockAttribute", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
