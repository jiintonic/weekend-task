/* file "StockQueryBlockJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockQueryBlockJSON.h"

#include "StockQueryBlockJSON.h"


StockQueryBlockJSON::StockQueryBlockJSON(const StockQueryBlockJSON &)
  {
    assert(false);
  }

StockQueryBlockJSON &StockQueryBlockJSON::operator=(const StockQueryBlockJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockQueryBlockJSON::fromJSONOldConversation(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OldConversation of StockQueryBlockJSON is not true for false.");
          }
      }
    setOldConversation(the_bool);
  }

void StockQueryBlockJSON::fromJSONRequestedAttributes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequestedAttributes of StockQueryBlockJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< CompoundStockAttributeJSON * > vector_RequestedAttributes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CompoundStockAttributeJSON *convert_classy = CompoundStockAttributeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RequestedAttributes1[num1] = convert_classy;
      }
    initRequestedAttributes();
    for (size_t num4 = 0; num4 < vector_RequestedAttributes1.size(); ++num4)
        appendRequestedAttributes(vector_RequestedAttributes1[num4]);
    for (size_t num1 = 0; num1 < vector_RequestedAttributes1.size(); ++num1)
      {
        vector_RequestedAttributes1[num1]->remove_reference();
      }
  }

void StockQueryBlockJSON::fromJSONRequestedListings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequestedListings of StockQueryBlockJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockRequestedListingJSON * > vector_RequestedListings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockRequestedListingJSON *convert_classy = StockRequestedListingJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RequestedListings1[num1] = convert_classy;
      }
    initRequestedListings();
    for (size_t num5 = 0; num5 < vector_RequestedListings1.size(); ++num5)
        appendRequestedListings(vector_RequestedListings1[num5]);
    for (size_t num1 = 0; num1 < vector_RequestedListings1.size(); ++num1)
      {
        vector_RequestedListings1[num1]->remove_reference();
      }
  }

void StockQueryBlockJSON::fromJSONInvalidListings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InvalidListings of StockQueryBlockJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockInvalidListingJSON * > vector_InvalidListings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockInvalidListingJSON *convert_classy = StockInvalidListingJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_InvalidListings1[num1] = convert_classy;
      }
    initInvalidListings();
    for (size_t num6 = 0; num6 < vector_InvalidListings1.size(); ++num6)
        appendInvalidListings(vector_InvalidListings1[num6]);
    for (size_t num1 = 0; num1 < vector_InvalidListings1.size(); ++num1)
      {
        vector_InvalidListings1[num1]->remove_reference();
      }
  }

void StockQueryBlockJSON::fromJSONGeneralMarketQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GeneralMarketQuery of StockQueryBlockJSON is not true for false.");
          }
      }
    setGeneralMarketQuery(the_bool);
  }

StockQueryBlockJSON::StockQueryBlockJSON(void) :
        flagHasOldConversation(false),
        flagHasRequestedAttributes(false),
        flagHasRequestedListings(false),
        flagHasInvalidListings(false),
        flagHasGeneralMarketQuery(false)
  {
    extraIndex = create_string_index();
  }

StockQueryBlockJSON::~StockQueryBlockJSON(void)
  {
    if (flagHasRequestedAttributes)
      {
        for (size_t num10 = 0; num10 < storeRequestedAttributes.size(); ++num10)
          {
            storeRequestedAttributes[num10]->remove_reference();
          }
      }
    if (flagHasRequestedListings)
      {
        for (size_t num11 = 0; num11 < storeRequestedListings.size(); ++num11)
          {
            storeRequestedListings[num11]->remove_reference();
          }
      }
    if (flagHasInvalidListings)
      {
        for (size_t num12 = 0; num12 < storeInvalidListings.size(); ++num12)
          {
            storeInvalidListings[num12]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockQueryBlockJSON::hasOldConversation(void) const
  {
    return flagHasOldConversation;
  }

bool StockQueryBlockJSON::getOldConversation(void)
  {
    assert(flagHasOldConversation);
    return storeOldConversation;
  }

const bool StockQueryBlockJSON::getOldConversation(void) const
  {
    assert(flagHasOldConversation);
    return storeOldConversation;
  }

bool StockQueryBlockJSON::hasRequestedAttributes(void) const
  {
    return flagHasRequestedAttributes;
  }

size_t StockQueryBlockJSON::countOfRequestedAttributes(void) const
  {
    assert(flagHasRequestedAttributes);
    return storeRequestedAttributes.size();
  }

CompoundStockAttributeJSON * StockQueryBlockJSON::elementOfRequestedAttributes(size_t element_num)
  {
    assert(flagHasRequestedAttributes);
    return storeRequestedAttributes[element_num];
  }

const CompoundStockAttributeJSON * StockQueryBlockJSON::elementOfRequestedAttributes(size_t element_num) const
  {
    assert(flagHasRequestedAttributes);
    return storeRequestedAttributes[element_num];
  }

std::vector< CompoundStockAttributeJSON * > StockQueryBlockJSON::getRequestedAttributes(void)
  {
    assert(flagHasRequestedAttributes);
    return storeRequestedAttributes;
  }

const std::vector< CompoundStockAttributeJSON * > StockQueryBlockJSON::getRequestedAttributes(void) const
  {
    assert(flagHasRequestedAttributes);
    return storeRequestedAttributes;
  }

bool StockQueryBlockJSON::hasRequestedListings(void) const
  {
    return flagHasRequestedListings;
  }

size_t StockQueryBlockJSON::countOfRequestedListings(void) const
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings.size();
  }

StockRequestedListingJSON * StockQueryBlockJSON::elementOfRequestedListings(size_t element_num)
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings[element_num];
  }

const StockRequestedListingJSON * StockQueryBlockJSON::elementOfRequestedListings(size_t element_num) const
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings[element_num];
  }

std::vector< StockRequestedListingJSON * > StockQueryBlockJSON::getRequestedListings(void)
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings;
  }

const std::vector< StockRequestedListingJSON * > StockQueryBlockJSON::getRequestedListings(void) const
  {
    assert(flagHasRequestedListings);
    return storeRequestedListings;
  }

bool StockQueryBlockJSON::hasInvalidListings(void) const
  {
    return flagHasInvalidListings;
  }

size_t StockQueryBlockJSON::countOfInvalidListings(void) const
  {
    assert(flagHasInvalidListings);
    return storeInvalidListings.size();
  }

StockInvalidListingJSON * StockQueryBlockJSON::elementOfInvalidListings(size_t element_num)
  {
    assert(flagHasInvalidListings);
    return storeInvalidListings[element_num];
  }

const StockInvalidListingJSON * StockQueryBlockJSON::elementOfInvalidListings(size_t element_num) const
  {
    assert(flagHasInvalidListings);
    return storeInvalidListings[element_num];
  }

std::vector< StockInvalidListingJSON * > StockQueryBlockJSON::getInvalidListings(void)
  {
    assert(flagHasInvalidListings);
    return storeInvalidListings;
  }

const std::vector< StockInvalidListingJSON * > StockQueryBlockJSON::getInvalidListings(void) const
  {
    assert(flagHasInvalidListings);
    return storeInvalidListings;
  }

bool StockQueryBlockJSON::hasGeneralMarketQuery(void) const
  {
    return flagHasGeneralMarketQuery;
  }

bool StockQueryBlockJSON::getGeneralMarketQuery(void)
  {
    assert(flagHasGeneralMarketQuery);
    return storeGeneralMarketQuery;
  }

const bool StockQueryBlockJSON::getGeneralMarketQuery(void) const
  {
    assert(flagHasGeneralMarketQuery);
    return storeGeneralMarketQuery;
  }

StockQueryBlockJSON *StockQueryBlockJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockQueryBlockJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockQueryBlockJSON>, StockQueryBlockJSON *, bool> generator("Type StockQueryBlock", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
