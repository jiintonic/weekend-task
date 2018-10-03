/* file "StockMarketInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockMarketInformationNuggetJSON.h"

#include "StockMarketInformationNuggetJSON.h"


StockMarketInformationNuggetJSON::StockMarketInformationNuggetJSON(const StockMarketInformationNuggetJSON &)
  {
    assert(false);
  }

StockMarketInformationNuggetJSON &StockMarketInformationNuggetJSON::operator=(const StockMarketInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *StockMarketInformationNuggetJSON::extraQueryBlocksToJSON(void) const
  {
    JSONArrayValue *generated_array_1_QueryBlocks = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeQueryBlocks.size(); ++num1)
      {
        JSONValueHandler handler_QueryBlocks;
        storeQueryBlocks[num1]->write_as_json(&handler_QueryBlocks);
        handler_QueryBlocks.result->add_reference();
        generated_array_1_QueryBlocks->appendComponent(handler_QueryBlocks.result);
        handler_QueryBlocks.result->remove_reference();
      }
    return generated_array_1_QueryBlocks;
  }

JSONValue *StockMarketInformationNuggetJSON::extraInvalidDateRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_InvalidDateRequested = (storeInvalidDateRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_InvalidDateRequested;
  }

JSONValue *StockMarketInformationNuggetJSON::extraInvalidAttributeRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_InvalidAttributeRequested = (storeInvalidAttributeRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_InvalidAttributeRequested;
  }

JSONValue *StockMarketInformationNuggetJSON::extraClientLocalTimeToJSON(void) const
  {
    JSONValueHandler handler_ClientLocalTime;
    storeClientLocalTime->write_as_json(&handler_ClientLocalTime);
    handler_ClientLocalTime.result->add_reference();
    return handler_ClientLocalTime.result;
  }

void StockMarketInformationNuggetJSON::fromJSONQueryBlocks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryBlocks of StockMarketInformationNuggetJSON is not an array.");
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

void StockMarketInformationNuggetJSON::fromJSONInvalidDateRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InvalidDateRequested of StockMarketInformationNuggetJSON is not true for false.");
          }
      }
    setInvalidDateRequested(the_bool);
  }

void StockMarketInformationNuggetJSON::fromJSONInvalidAttributeRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InvalidAttributeRequested of StockMarketInformationNuggetJSON is not true for false.");
          }
      }
    setInvalidAttributeRequested(the_bool);
  }

void StockMarketInformationNuggetJSON::fromJSONClientLocalTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientLocalTime(convert_classy);
    convert_classy->remove_reference();
  }

StockMarketInformationNuggetJSON::StockMarketInformationNuggetJSON(void) :
        flagHasQueryBlocks(false),
        flagHasInvalidDateRequested(false),
        flagHasInvalidAttributeRequested(false),
        flagHasClientLocalTime(false)
  {
    extraIndex = create_string_index();
  }

StockMarketInformationNuggetJSON::~StockMarketInformationNuggetJSON(void)
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

const char *StockMarketInformationNuggetJSON::getNuggetKind(void) const
  {
    return "StockMarket";
  }

bool StockMarketInformationNuggetJSON::hasQueryBlocks(void) const
  {
    return flagHasQueryBlocks;
  }

size_t StockMarketInformationNuggetJSON::countOfQueryBlocks(void) const
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks.size();
  }

StockQueryBlockJSON * StockMarketInformationNuggetJSON::elementOfQueryBlocks(size_t element_num)
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks[element_num];
  }

const StockQueryBlockJSON * StockMarketInformationNuggetJSON::elementOfQueryBlocks(size_t element_num) const
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks[element_num];
  }

std::vector< StockQueryBlockJSON * > StockMarketInformationNuggetJSON::getQueryBlocks(void)
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks;
  }

const std::vector< StockQueryBlockJSON * > StockMarketInformationNuggetJSON::getQueryBlocks(void) const
  {
    assert(flagHasQueryBlocks);
    return storeQueryBlocks;
  }

bool StockMarketInformationNuggetJSON::hasInvalidDateRequested(void) const
  {
    return flagHasInvalidDateRequested;
  }

bool StockMarketInformationNuggetJSON::getInvalidDateRequested(void)
  {
    assert(flagHasInvalidDateRequested);
    return storeInvalidDateRequested;
  }

const bool StockMarketInformationNuggetJSON::getInvalidDateRequested(void) const
  {
    assert(flagHasInvalidDateRequested);
    return storeInvalidDateRequested;
  }

bool StockMarketInformationNuggetJSON::hasInvalidAttributeRequested(void) const
  {
    return flagHasInvalidAttributeRequested;
  }

bool StockMarketInformationNuggetJSON::getInvalidAttributeRequested(void)
  {
    assert(flagHasInvalidAttributeRequested);
    return storeInvalidAttributeRequested;
  }

const bool StockMarketInformationNuggetJSON::getInvalidAttributeRequested(void) const
  {
    assert(flagHasInvalidAttributeRequested);
    return storeInvalidAttributeRequested;
  }

bool StockMarketInformationNuggetJSON::hasClientLocalTime(void) const
  {
    return flagHasClientLocalTime;
  }

DateAndOrTimeJSON * StockMarketInformationNuggetJSON::getClientLocalTime(void)
  {
    assert(flagHasClientLocalTime);
    return storeClientLocalTime;
  }

const DateAndOrTimeJSON * StockMarketInformationNuggetJSON::getClientLocalTime(void) const
  {
    assert(flagHasClientLocalTime);
    return storeClientLocalTime;
  }

StockMarketInformationNuggetJSON *StockMarketInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockMarketInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockMarketInformationNuggetJSON>, StockMarketInformationNuggetJSON *, bool> generator("Type StockMarketInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
