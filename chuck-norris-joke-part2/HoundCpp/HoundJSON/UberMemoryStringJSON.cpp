/* file "UberMemoryStringJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberMemoryStringJSON.h"

#include "UberMemoryStringJSON.h"


UberMemoryStringJSON::UberMemoryStringJSON(const UberMemoryStringJSON &)
  {
    assert(false);
  }

UberMemoryStringJSON &UberMemoryStringJSON::operator=(const UberMemoryStringJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberMemoryStringJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of UberMemoryStringJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

UberMemoryStringJSON::UberMemoryStringJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

UberMemoryStringJSON::~UberMemoryStringJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberMemoryStringJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string UberMemoryStringJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string UberMemoryStringJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

UberMemoryStringJSON *UberMemoryStringJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberMemoryStringJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberMemoryStringJSON>, UberMemoryStringJSON *, bool> generator("Type UberMemoryString", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
