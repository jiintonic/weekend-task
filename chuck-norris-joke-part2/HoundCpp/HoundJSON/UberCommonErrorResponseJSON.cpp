/* file "UberCommonErrorResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberCommonErrorResponseJSON.h"

#include "UberCommonErrorResponseJSON.h"


UberCommonErrorResponseJSON::UberCommonErrorResponseJSON(const UberCommonErrorResponseJSON &)
  {
    assert(false);
  }

UberCommonErrorResponseJSON &UberCommonErrorResponseJSON::operator=(const UberCommonErrorResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberCommonErrorResponseJSON::fromJSONcode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field code of UberCommonErrorResponseJSON is not a string.");
    setcode(std::string(json_string->getData()));
  }

void UberCommonErrorResponseJSON::fromJSONmessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field message of UberCommonErrorResponseJSON is not a string.");
    setmessage(std::string(json_string->getData()));
  }

UberCommonErrorResponseJSON::UberCommonErrorResponseJSON(void) :
        flagHascode(false),
        flagHasmessage(false)
  {
    extraIndex = create_string_index();
  }

UberCommonErrorResponseJSON::~UberCommonErrorResponseJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberCommonErrorResponseJSON::hascode(void) const
  {
    return flagHascode;
  }

std::string UberCommonErrorResponseJSON::getcode(void)
  {
    assert(flagHascode);
    return storecode;
  }

const std::string UberCommonErrorResponseJSON::getcode(void) const
  {
    assert(flagHascode);
    return storecode;
  }

bool UberCommonErrorResponseJSON::hasmessage(void) const
  {
    return flagHasmessage;
  }

std::string UberCommonErrorResponseJSON::getmessage(void)
  {
    assert(flagHasmessage);
    return storemessage;
  }

const std::string UberCommonErrorResponseJSON::getmessage(void) const
  {
    assert(flagHasmessage);
    return storemessage;
  }

UberCommonErrorResponseJSON *UberCommonErrorResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberCommonErrorResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberCommonErrorResponseJSON>, UberCommonErrorResponseJSON *, bool> generator("Type UberCommonErrorResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
