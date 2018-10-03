/* file "UberApiResponsesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiResponsesJSON.h"

#include "UberApiResponsesJSON.h"


UberApiResponsesJSON::UberApiResponsesJSON(const UberApiResponsesJSON &)
  {
    assert(false);
  }

UberApiResponsesJSON &UberApiResponsesJSON::operator=(const UberApiResponsesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberApiResponsesJSON::fromJSONProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberProductsResponseJSON *convert_classy = UberProductsResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setProducts(convert_classy);
    convert_classy->remove_reference();
  }

void UberApiResponsesJSON::fromJSONPickups(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberTimeEstimatesResponseJSON *convert_classy = UberTimeEstimatesResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPickups(convert_classy);
    convert_classy->remove_reference();
  }

void UberApiResponsesJSON::fromJSONPrices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberPriceEstimatesResponseJSON *convert_classy = UberPriceEstimatesResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrices(convert_classy);
    convert_classy->remove_reference();
  }

UberApiResponsesJSON::UberApiResponsesJSON(void) :
        flagHasProducts(false),
        flagHasPickups(false),
        flagHasPrices(false)
  {
    extraIndex = create_string_index();
  }

UberApiResponsesJSON::~UberApiResponsesJSON(void)
  {
    if (flagHasProducts)
      {
        storeProducts->remove_reference();
      }
    if (flagHasPickups)
      {
        storePickups->remove_reference();
      }
    if (flagHasPrices)
      {
        storePrices->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberApiResponsesJSON::hasProducts(void) const
  {
    return flagHasProducts;
  }

UberProductsResponseJSON * UberApiResponsesJSON::getProducts(void)
  {
    assert(flagHasProducts);
    return storeProducts;
  }

const UberProductsResponseJSON * UberApiResponsesJSON::getProducts(void) const
  {
    assert(flagHasProducts);
    return storeProducts;
  }

bool UberApiResponsesJSON::hasPickups(void) const
  {
    return flagHasPickups;
  }

UberTimeEstimatesResponseJSON * UberApiResponsesJSON::getPickups(void)
  {
    assert(flagHasPickups);
    return storePickups;
  }

const UberTimeEstimatesResponseJSON * UberApiResponsesJSON::getPickups(void) const
  {
    assert(flagHasPickups);
    return storePickups;
  }

bool UberApiResponsesJSON::hasPrices(void) const
  {
    return flagHasPrices;
  }

UberPriceEstimatesResponseJSON * UberApiResponsesJSON::getPrices(void)
  {
    assert(flagHasPrices);
    return storePrices;
  }

const UberPriceEstimatesResponseJSON * UberApiResponsesJSON::getPrices(void) const
  {
    assert(flagHasPrices);
    return storePrices;
  }

UberApiResponsesJSON *UberApiResponsesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiResponsesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiResponsesJSON>, UberApiResponsesJSON *, bool> generator("Type UberApiResponses", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
