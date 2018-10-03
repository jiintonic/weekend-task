/* file "UberProductsContextJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberProductsContextJSON.h"

#include "UberProductsContextJSON.h"


UberProductsContextJSON::UberProductsContextJSON(const UberProductsContextJSON &)
  {
    assert(false);
  }

UberProductsContextJSON &UberProductsContextJSON::operator=(const UberProductsContextJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberProductsContextJSON::fromJSONUberProductsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberProductsSpecJSON *convert_classy = UberProductsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProductsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberProductsContextJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberProductsContextJSON::UberProductsContextJSON(void) :
        flagHasUberProductsSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberProductsContextJSON::~UberProductsContextJSON(void)
  {
    if (flagHasUberProductsSpec)
      {
        storeUberProductsSpec->remove_reference();
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

bool UberProductsContextJSON::hasUberProductsSpec(void) const
  {
    return flagHasUberProductsSpec;
  }

UberProductsSpecJSON * UberProductsContextJSON::getUberProductsSpec(void)
  {
    assert(flagHasUberProductsSpec);
    return storeUberProductsSpec;
  }

const UberProductsSpecJSON * UberProductsContextJSON::getUberProductsSpec(void) const
  {
    assert(flagHasUberProductsSpec);
    return storeUberProductsSpec;
  }

bool UberProductsContextJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberProductsContextJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberProductsContextJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberProductsContextJSON *UberProductsContextJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberProductsContextJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberProductsContextJSON>, UberProductsContextJSON *, bool> generator("Type UberProductsContext", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
