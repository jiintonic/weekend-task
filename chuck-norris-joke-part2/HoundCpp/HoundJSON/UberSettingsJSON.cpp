/* file "UberSettingsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberSettingsJSON.h"

#include "UberSettingsJSON.h"


UberSettingsJSON::UberSettingsJSON(const UberSettingsJSON &)
  {
    assert(false);
  }

UberSettingsJSON &UberSettingsJSON::operator=(const UberSettingsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberSettingsJSON::fromJSONFavouriteProduct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FavouriteProduct of UberSettingsJSON is not a string.");
    setFavouriteProduct(std::string(json_string->getData()));
  }

UberSettingsJSON::UberSettingsJSON(void) :
        flagHasFavouriteProduct(false)
  {
    extraIndex = create_string_index();
  }

UberSettingsJSON::~UberSettingsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberSettingsJSON::hasFavouriteProduct(void) const
  {
    return flagHasFavouriteProduct;
  }

std::string UberSettingsJSON::getFavouriteProduct(void)
  {
    assert(flagHasFavouriteProduct);
    return storeFavouriteProduct;
  }

const std::string UberSettingsJSON::getFavouriteProduct(void) const
  {
    assert(flagHasFavouriteProduct);
    return storeFavouriteProduct;
  }

UberSettingsJSON *UberSettingsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberSettingsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberSettingsJSON>, UberSettingsJSON *, bool> generator("Type UberSettings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
