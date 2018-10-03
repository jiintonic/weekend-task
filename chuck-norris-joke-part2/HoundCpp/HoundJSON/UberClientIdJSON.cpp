/* file "UberClientIdJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberClientIdJSON.h"

#include "UberClientIdJSON.h"


UberClientIdJSON::UberClientIdJSON(const UberClientIdJSON &)
  {
    assert(false);
  }

UberClientIdJSON &UberClientIdJSON::operator=(const UberClientIdJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberClientIdJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of UberClientIdJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

UberClientIdJSON::UberClientIdJSON(void) :
        flagHasValue(false)
  {
  }

UberClientIdJSON::UberClientIdJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

UberClientIdJSON::~UberClientIdJSON(void)
  {
  }

bool UberClientIdJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string UberClientIdJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string UberClientIdJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

UberClientIdJSON *UberClientIdJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberClientIdJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberClientIdJSON>, UberClientIdJSON *, bool> generator("Type UberClientId", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
