/* file "PriceRangeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PriceRangeJSON.h"

#include "PriceRangeJSON.h"


PriceRangeJSON::PriceRangeJSON(const PriceRangeJSON &)
  {
    assert(false);
  }

PriceRangeJSON &PriceRangeJSON::operator=(const PriceRangeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PriceRangeJSON::fromJSONFrom(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MonetaryAmountJSON *convert_classy = MonetaryAmountJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFrom(convert_classy);
    convert_classy->remove_reference();
  }

void PriceRangeJSON::fromJSONIsFromInclusive(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsFromInclusive of PriceRangeJSON is not true for false.");
          }
      }
    setIsFromInclusive(the_bool);
  }

void PriceRangeJSON::fromJSONTo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MonetaryAmountJSON *convert_classy = MonetaryAmountJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTo(convert_classy);
    convert_classy->remove_reference();
  }

void PriceRangeJSON::fromJSONIsToInclusive(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsToInclusive of PriceRangeJSON is not true for false.");
          }
      }
    setIsToInclusive(the_bool);
  }

PriceRangeJSON::PriceRangeJSON(void) :
        flagHasFrom(false),
        flagHasIsFromInclusive(false),
        flagHasTo(false),
        flagHasIsToInclusive(false)
  {
    extraIndex = create_string_index();
  }

PriceRangeJSON::~PriceRangeJSON(void)
  {
    if (flagHasFrom)
      {
        storeFrom->remove_reference();
      }
    if (flagHasTo)
      {
        storeTo->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool PriceRangeJSON::hasFrom(void) const
  {
    return flagHasFrom;
  }

MonetaryAmountJSON * PriceRangeJSON::getFrom(void)
  {
    assert(flagHasFrom);
    return storeFrom;
  }

const MonetaryAmountJSON * PriceRangeJSON::getFrom(void) const
  {
    assert(flagHasFrom);
    return storeFrom;
  }

bool PriceRangeJSON::hasIsFromInclusive(void) const
  {
    return flagHasIsFromInclusive;
  }

bool PriceRangeJSON::getIsFromInclusive(void)
  {
    assert(flagHasIsFromInclusive);
    return storeIsFromInclusive;
  }

const bool PriceRangeJSON::getIsFromInclusive(void) const
  {
    assert(flagHasIsFromInclusive);
    return storeIsFromInclusive;
  }

bool PriceRangeJSON::hasTo(void) const
  {
    return flagHasTo;
  }

MonetaryAmountJSON * PriceRangeJSON::getTo(void)
  {
    assert(flagHasTo);
    return storeTo;
  }

const MonetaryAmountJSON * PriceRangeJSON::getTo(void) const
  {
    assert(flagHasTo);
    return storeTo;
  }

bool PriceRangeJSON::hasIsToInclusive(void) const
  {
    return flagHasIsToInclusive;
  }

bool PriceRangeJSON::getIsToInclusive(void)
  {
    assert(flagHasIsToInclusive);
    return storeIsToInclusive;
  }

const bool PriceRangeJSON::getIsToInclusive(void) const
  {
    assert(flagHasIsToInclusive);
    return storeIsToInclusive;
  }

PriceRangeJSON *PriceRangeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PriceRangeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PriceRangeJSON>, PriceRangeJSON *, bool> generator("Type PriceRange", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
