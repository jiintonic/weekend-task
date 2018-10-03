/* file "UberEstimatesContextJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberEstimatesContextJSON.h"

#include "UberEstimatesContextJSON.h"


UberEstimatesContextJSON::UberEstimatesContextJSON(const UberEstimatesContextJSON &)
  {
    assert(false);
  }

UberEstimatesContextJSON &UberEstimatesContextJSON::operator=(const UberEstimatesContextJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberEstimatesContextJSON::fromJSONUberEstimatesSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberEstimatesSpecJSON *convert_classy = UberEstimatesSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberEstimatesSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberEstimatesContextJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberEstimatesContextJSON::UberEstimatesContextJSON(void) :
        flagHasUberEstimatesSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberEstimatesContextJSON::~UberEstimatesContextJSON(void)
  {
    if (flagHasUberEstimatesSpec)
      {
        storeUberEstimatesSpec->remove_reference();
      }
    if (flagHasUberProducts)
      {
        storeUberProducts->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberEstimatesContextJSON::hasUberEstimatesSpec(void) const
  {
    return flagHasUberEstimatesSpec;
  }

UberEstimatesSpecJSON * UberEstimatesContextJSON::getUberEstimatesSpec(void)
  {
    assert(flagHasUberEstimatesSpec);
    return storeUberEstimatesSpec;
  }

const UberEstimatesSpecJSON * UberEstimatesContextJSON::getUberEstimatesSpec(void) const
  {
    assert(flagHasUberEstimatesSpec);
    return storeUberEstimatesSpec;
  }

bool UberEstimatesContextJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberEstimatesContextJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberEstimatesContextJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberEstimatesContextJSON *UberEstimatesContextJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberEstimatesContextJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberEstimatesContextJSON>, UberEstimatesContextJSON *, bool> generator("Type UberEstimatesContext", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
