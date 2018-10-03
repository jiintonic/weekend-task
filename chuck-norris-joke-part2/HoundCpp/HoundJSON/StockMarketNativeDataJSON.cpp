/* file "StockMarketNativeDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockMarketNativeDataJSON.h"

#include "StockMarketNativeDataJSON.h"


StockMarketNativeDataJSON::StockMarketNativeDataJSON(const StockMarketNativeDataJSON &)
  {
    assert(false);
  }

StockMarketNativeDataJSON &StockMarketNativeDataJSON::operator=(const StockMarketNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockMarketNativeDataJSON::fromJSONQueryBlocks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryBlocks of StockMarketNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockQueryBlockJSON * > vector_QueryBlocks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockQueryBlockJSON *convert_classy = StockQueryBlockJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryBlocks1[num1] = convert_classy;
      }
    initQueryBlocks();
    for (size_t num2 = 0; num2 < vector_QueryBlocks1.size(); ++num2)
        appendQueryBlocks(vector_QueryBlocks1[num2]);
    for (size_t num1 = 0; num1 < vector_QueryBlocks1.size(); ++num1)
      {
        vector_QueryBlocks1[num1]->remove_reference();
      }
  }

void StockMarketNativeDataJSON::fromJSONInvalidDateRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field InvalidDateRequested of StockMarketNativeDataJSON is not true for false.");
          }
      }
    setInvalidDateRequested(the_bool);
  }

void StockMarketNativeDataJSON::fromJSONInvalidAttributeRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field InvalidAttributeRequested of StockMarketNativeDataJSON is not true for false.");
          }
      }
    setInvalidAttributeRequested(the_bool);
  }

void StockMarketNativeDataJSON::fromJSONClientLocalTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientLocalTime(convert_classy);
    convert_classy->remove_reference();
  }

StockMarketNativeDataJSON::StockMarketNativeDataJSON(void) :
        flagHasQueryBlocks(false),
        flagHasInvalidDateRequested(false),
        flagHasInvalidAttributeRequested(false),
        flagHasClientLocalTime(false)
  {
    extraIndex = create_string_index();
  }

StockMarketNativeDataJSON::~StockMarketNativeDataJSON(void)
  {
    if (flagHasQueryBlocks)
      {
        for (size_t num4 = 0; num4 < storeQueryBlocks.size(); ++num4)
          {
            storeQueryBlocks[num4]->remove_reference();
          }
      }
    if (flagHasClientLocalTime)
      {
        storeClientLocalTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockMarketNativeDataJSON::hasQueryBlocks(void) const
  {
    return flagHasQueryBlocks;
  }

size_t StockMarketNativeDataJSON::countOfQueryBlocks(void) const
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks.size();
  }

StockQueryBlockJSON * StockMarketNativeDataJSON::elementOfQueryBlocks(size_t element_num)
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks[element_num];
  }

const StockQueryBlockJSON * StockMarketNativeDataJSON::elementOfQueryBlocks(size_t element_num) const
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks[element_num];
  }

std::vector< StockQueryBlockJSON * > StockMarketNativeDataJSON::getQueryBlocks(void)
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks;
  }

const std::vector< StockQueryBlockJSON * > StockMarketNativeDataJSON::getQueryBlocks(void) const
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks;
  }

bool StockMarketNativeDataJSON::hasInvalidDateRequested(void) const
  {
    return flagHasInvalidDateRequested;
  }

bool StockMarketNativeDataJSON::getInvalidDateRequested(void)
  {
    assert(flagHasInvalidDateRequested);
    return storeInvalidDateRequested;
  }

const bool StockMarketNativeDataJSON::getInvalidDateRequested(void) const
  {
    assert(flagHasInvalidDateRequested);
    return storeInvalidDateRequested;
  }

bool StockMarketNativeDataJSON::hasInvalidAttributeRequested(void) const
  {
    return flagHasInvalidAttributeRequested;
  }

bool StockMarketNativeDataJSON::getInvalidAttributeRequested(void)
  {
    assert(flagHasInvalidAttributeRequested);
    return storeInvalidAttributeRequested;
  }

const bool StockMarketNativeDataJSON::getInvalidAttributeRequested(void) const
  {
    assert(flagHasInvalidAttributeRequested);
    return storeInvalidAttributeRequested;
  }

bool StockMarketNativeDataJSON::hasClientLocalTime(void) const
  {
    return flagHasClientLocalTime;
  }

DateAndOrTimeJSON * StockMarketNativeDataJSON::getClientLocalTime(void)
  {
    assert(flagHasClientLocalTime);
    return storeClientLocalTime;
  }

const DateAndOrTimeJSON * StockMarketNativeDataJSON::getClientLocalTime(void) const
  {
    assert(flagHasClientLocalTime);
    return storeClientLocalTime;
  }

StockMarketNativeDataJSON *StockMarketNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockMarketNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockMarketNativeDataJSON>, StockMarketNativeDataJSON *, bool> generator("Type StockMarketNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
