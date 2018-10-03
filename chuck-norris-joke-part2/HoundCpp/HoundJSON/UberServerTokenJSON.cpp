/* file "UberServerTokenJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberServerTokenJSON.h"

#include "UberServerTokenJSON.h"


UberServerTokenJSON::UberServerTokenJSON(const UberServerTokenJSON &)
  {
    assert(false);
  }

UberServerTokenJSON &UberServerTokenJSON::operator=(const UberServerTokenJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberServerTokenJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of UberServerTokenJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

UberServerTokenJSON::UberServerTokenJSON(void) :
        flagHasValue(false)
  {
  }

UberServerTokenJSON::UberServerTokenJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

UberServerTokenJSON::~UberServerTokenJSON(void)
  {
  }

bool UberServerTokenJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string UberServerTokenJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string UberServerTokenJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

UberServerTokenJSON *UberServerTokenJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberServerTokenJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberServerTokenJSON>, UberServerTokenJSON *, bool> generator("Type UberServerToken", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
