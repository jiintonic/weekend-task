/* file "MonetaryAmountJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MonetaryAmountJSON.h"

#include "MonetaryAmountJSON.h"


MonetaryAmountJSON::MonetaryAmountJSON(const MonetaryAmountJSON &)
  {
    assert(false);
  }

MonetaryAmountJSON &MonetaryAmountJSON::operator=(const MonetaryAmountJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MonetaryAmountJSON::extraCurrencyCodeToJSON(void) const
  {
    JSONStringValue *generated_string_CurrencyCode = new JSONStringValue(storeCurrencyCode.c_str());
    return generated_string_CurrencyCode;
  }

void MonetaryAmountJSON::fromJSONCurrencyCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CurrencyCode of MonetaryAmountJSON is not a string.");
    setCurrencyCode(std::string(json_string->getData()));
  }

MonetaryAmountJSON::MonetaryAmountJSON(void) :
        flagHasCurrencyCode(false)
  {
    extraIndex = create_string_index();
  }

MonetaryAmountJSON::~MonetaryAmountJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MonetaryAmountJSON::hasCurrencyCode(void) const
  {
    return flagHasCurrencyCode;
  }

std::string MonetaryAmountJSON::getCurrencyCode(void)
  {
    assert(flagHasCurrencyCode);
    return storeCurrencyCode;
  }

const std::string MonetaryAmountJSON::getCurrencyCode(void) const
  {
    assert(flagHasCurrencyCode);
    return storeCurrencyCode;
  }

MonetaryAmountJSON *MonetaryAmountJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MonetaryAmountJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MonetaryAmountJSON>, MonetaryAmountJSON *, bool> generator("Type MonetaryAmount", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
