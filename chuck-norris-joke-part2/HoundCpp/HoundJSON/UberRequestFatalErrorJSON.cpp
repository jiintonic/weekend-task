/* file "UberRequestFatalErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestFatalErrorJSON.h"

#include "UberRequestFatalErrorJSON.h"


UberRequestFatalErrorJSON::UberRequestFatalErrorJSON(const UberRequestFatalErrorJSON &)
  {
    assert(false);
  }

UberRequestFatalErrorJSON &UberRequestFatalErrorJSON::operator=(const UberRequestFatalErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestFatalErrorJSON::fromJSONErrorCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorCode of UberRequestFatalErrorJSON is not a string.");
    setErrorCode(std::string(json_string->getData()));
  }

void UberRequestFatalErrorJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of UberRequestFatalErrorJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

UberRequestFatalErrorJSON::UberRequestFatalErrorJSON(void) :
        flagHasErrorCode(false),
        flagHasErrorMessage(false)
  {
    extraIndex = create_string_index();
  }

UberRequestFatalErrorJSON::~UberRequestFatalErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestFatalErrorJSON::hasErrorCode(void) const
  {
    return flagHasErrorCode;
  }

std::string UberRequestFatalErrorJSON::getErrorCode(void)
  {
    assert(flagHasErrorCode);
    return storeErrorCode;
  }

const std::string UberRequestFatalErrorJSON::getErrorCode(void) const
  {
    assert(flagHasErrorCode);
    return storeErrorCode;
  }

bool UberRequestFatalErrorJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string UberRequestFatalErrorJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string UberRequestFatalErrorJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

UberRequestFatalErrorJSON *UberRequestFatalErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestFatalErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestFatalErrorJSON>, UberRequestFatalErrorJSON *, bool> generator("Type UberRequestFatalError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
