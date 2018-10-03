/* file "UberApiErrorPromoFailedJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorPromoFailedJSON.h"

#include "UberApiErrorPromoFailedJSON.h"


UberApiErrorPromoFailedJSON::UberApiErrorPromoFailedJSON(const UberApiErrorPromoFailedJSON &)
  {
    assert(false);
  }

UberApiErrorPromoFailedJSON &UberApiErrorPromoFailedJSON::operator=(const UberApiErrorPromoFailedJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberApiErrorPromoFailedJSON::extraCodeToJSON(void) const
  {
    JSONStringValue *generated_string_Code = new JSONStringValue(storeCode.c_str());
    return generated_string_Code;
  }

void UberApiErrorPromoFailedJSON::fromJSONCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Code of UberApiErrorPromoFailedJSON is not a string.");
    setCode(std::string(json_string->getData()));
  }

UberApiErrorPromoFailedJSON::UberApiErrorPromoFailedJSON(void) :
        flagHasCode(false)
  {
    extraIndex = create_string_index();
  }

UberApiErrorPromoFailedJSON::~UberApiErrorPromoFailedJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberApiErrorPromoFailedJSON::hasCode(void) const
  {
    return flagHasCode;
  }

std::string UberApiErrorPromoFailedJSON::getCode(void)
  {
    assert(flagHasCode);
    return storeCode;
  }

const std::string UberApiErrorPromoFailedJSON::getCode(void) const
  {
    assert(flagHasCode);
    return storeCode;
  }

UberApiErrorPromoFailedJSON *UberApiErrorPromoFailedJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorPromoFailedJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorPromoFailedJSON>, UberApiErrorPromoFailedJSON *, bool> generator("Type UberApiErrorPromoFailed", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
