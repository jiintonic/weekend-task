/* file "StockMarketCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockMarketCommandJSON.h"

#include "StockMarketCommandJSON.h"


StockMarketCommandJSON::StockMarketCommandJSON(const StockMarketCommandJSON &)
  {
    assert(false);
  }

StockMarketCommandJSON &StockMarketCommandJSON::operator=(const StockMarketCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *StockMarketCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void StockMarketCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockMarketNativeDataJSON *convert_classy = StockMarketNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

StockMarketCommandJSON::StockMarketCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

StockMarketCommandJSON::~StockMarketCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *StockMarketCommandJSON::getCommandKind(void) const
  {
    return "StockMarketCommand";
  }

bool StockMarketCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

StockMarketNativeDataJSON * StockMarketCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const StockMarketNativeDataJSON * StockMarketCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

StockMarketCommandJSON *StockMarketCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockMarketCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockMarketCommandJSON>, StockMarketCommandJSON *, bool> generator("Type StockMarketCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
