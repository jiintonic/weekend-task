/* file "StockMarketConversationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockMarketConversationJSON.h"

#include "StockMarketConversationJSON.h"


StockMarketConversationJSON::StockMarketConversationJSON(const StockMarketConversationJSON &)
  {
    assert(false);
  }

StockMarketConversationJSON &StockMarketConversationJSON::operator=(const StockMarketConversationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockMarketConversationJSON::fromJSONStockAttributes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StockAttributes of StockMarketConversationJSON is not a string.");
    setStockAttributes(std::string(json_string->getData()));
  }

void StockMarketConversationJSON::fromJSONCompoundAttributes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CompoundAttributes of StockMarketConversationJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< CompoundStockAttributeJSON * > vector_CompoundAttributes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CompoundStockAttributeJSON *convert_classy = CompoundStockAttributeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_CompoundAttributes1[num1] = convert_classy;
      }
    initCompoundAttributes();
    for (size_t num4 = 0; num4 < vector_CompoundAttributes1.size(); ++num4)
        appendCompoundAttributes(vector_CompoundAttributes1[num4]);
    for (size_t num1 = 0; num1 < vector_CompoundAttributes1.size(); ++num1)
      {
        vector_CompoundAttributes1[num1]->remove_reference();
      }
  }

void StockMarketConversationJSON::fromJSONStockListings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StockListings of StockMarketConversationJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_StockListings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field StockListings of StockMarketConversationJSON is not a string.");
        vector_StockListings1[num1] = std::string(json_string->getData());
      }
    initStockListings();
    for (size_t num5 = 0; num5 < vector_StockListings1.size(); ++num5)
        appendStockListings(vector_StockListings1[num5]);
    for (size_t num1 = 0; num1 < vector_StockListings1.size(); ++num1)
      {
      }
  }

void StockMarketConversationJSON::fromJSONRequestedListings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequestedListings of StockMarketConversationJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockConversationRequestedListingJSON * > vector_RequestedListings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockConversationRequestedListingJSON *convert_classy = StockConversationRequestedListingJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RequestedListings1[num1] = convert_classy;
      }
    initRequestedListings();
    for (size_t num6 = 0; num6 < vector_RequestedListings1.size(); ++num6)
        appendRequestedListings(vector_RequestedListings1[num6]);
    for (size_t num1 = 0; num1 < vector_RequestedListings1.size(); ++num1)
      {
        vector_RequestedListings1[num1]->remove_reference();
      }
  }

void StockMarketConversationJSON::fromJSONMonetaryAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMonetaryAmount(convert_classy);
    convert_classy->remove_reference();
  }

StockMarketConversationJSON::StockMarketConversationJSON(void) :
        flagHasStockAttributes(false),
        flagHasCompoundAttributes(false),
        flagHasStockListings(false),
        flagHasRequestedListings(false),
        flagHasMonetaryAmount(false)
  {
    extraIndex = create_string_index();
  }

StockMarketConversationJSON::~StockMarketConversationJSON(void)
  {
    if (flagHasCompoundAttributes)
      {
        for (size_t num7 = 0; num7 < storeCompoundAttributes.size(); ++num7)
          {
            storeCompoundAttributes[num7]->remove_reference();
          }
      }
    if (flagHasRequestedListings)
      {
        for (size_t num8 = 0; num8 < storeRequestedListings.size(); ++num8)
          {
            storeRequestedListings[num8]->remove_reference();
          }
      }
    if (flagHasMonetaryAmount)
      {
        storeMonetaryAmount->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockMarketConversationJSON::hasStockAttributes(void) const
  {
    return flagHasStockAttributes;
  }

std::string StockMarketConversationJSON::getStockAttributes(void)
  {
    assert(flagHasStockAttributes);
    return storeStockAttributes;
  }

const std::string StockMarketConversationJSON::getStockAttributes(void) const
  {
    assert(flagHasStockAttributes);
    return storeStockAttributes;
  }

bool StockMarketConversationJSON::hasCompoundAttributes(void) const
  {
    return flagHasCompoundAttributes;
  }

size_t StockMarketConversationJSON::countOfCompoundAttributes(void) const
  {
    assert(flagHasCompoundAttributes);
    return storeCompoundAttributes.size();
  }

CompoundStockAttributeJSON * StockMarketConversationJSON::elementOfCompoundAttributes(size_t element_num)
  {
    assert(flagHasCompoundAttributes);
    return storeCompoundAttributes[element_num];
  }

const CompoundStockAttributeJSON * StockMarketConversationJSON::elementOfCompoundAttributes(size_t element_num) const
  {
    assert(flagHasCompoundAttributes);
    return storeCompoundAttributes[element_num];
  }

std::vector< CompoundStockAttributeJSON * > StockMarketConversationJSON::getCompoundAttributes(void)
  {
    assert(flagHasCompoundAttributes);
    return storeCompoundAttributes;
  }

const std::vector< CompoundStockAttributeJSON * > StockMarketConversationJSON::getCompoundAttributes(void) const
  {
    assert(flagHasCompoundAttributes);
    return storeCompoundAttributes;
  }

bool StockMarketConversationJSON::hasStockListings(void) const
  {
    return flagHasStockListings;
  }

size_t StockMarketConversationJSON::countOfStockListings(void) const
  {
    assert(flagHasStockListings);
    return storeStockListings.size();
  }

std::string StockMarketConversationJSON::elementOfStockListings(size_t element_num)
  {
    assert(flagHasStockListings);
    return storeStockListings[element_num];
  }

const std::string StockMarketConversationJSON::elementOfStockListings(size_t element_num) const
  {
    assert(flagHasStockListings);
    return storeStockListings[element_num];
  }

std::vector< std::string > StockMarketConversationJSON::getStockListings(void)
  {
    assert(flagHasStockListings);
    return storeStockListings;
  }

const std::vector< std::string > StockMarketConversationJSON::getStockListings(void) const
  {
    assert(flagHasStockListings);
    return storeStockListings;
  }

bool StockMarketConversationJSON::hasRequestedListings(void) const
  {
    return flagHasRequestedListings;
  }

size_t StockMarketConversationJSON::countOfRequestedListings(void) const
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings.size();
  }

StockConversationRequestedListingJSON * StockMarketConversationJSON::elementOfRequestedListings(size_t element_num)
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings[element_num];
  }

const StockConversationRequestedListingJSON * StockMarketConversationJSON::elementOfRequestedListings(size_t element_num) const
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings[element_num];
  }

std::vector< StockConversationRequestedListingJSON * > StockMarketConversationJSON::getRequestedListings(void)
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings;
  }

const std::vector< StockConversationRequestedListingJSON * > StockMarketConversationJSON::getRequestedListings(void) const
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings;
  }

bool StockMarketConversationJSON::hasMonetaryAmount(void) const
  {
    return flagHasMonetaryAmount;
  }

MoneyJSON * StockMarketConversationJSON::getMonetaryAmount(void)
  {
    assert(flagHasMonetaryAmount);
    return storeMonetaryAmount;
  }

const MoneyJSON * StockMarketConversationJSON::getMonetaryAmount(void) const
  {
    assert(flagHasMonetaryAmount);
    return storeMonetaryAmount;
  }

RegEx StockMarketConversationJSON::expressionStockAttributes("^([0-8]( [0-8])*)?$");
RegEx StockMarketConversationJSON::expressionStockListings("^[0-1] [0-9]+ [0-9]+ [0-1]( [0-9]+)?$");
StockMarketConversationJSON *StockMarketConversationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockMarketConversationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockMarketConversationJSON>, StockMarketConversationJSON *, bool> generator("Type StockMarketConversation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
