/* file "UberApiErrorRequestFailedJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberApiErrorRequestFailedJSON.h"

#include "UberApiErrorRequestFailedJSON.h"


UberApiErrorRequestFailedJSON::UberApiErrorRequestFailedJSON(const UberApiErrorRequestFailedJSON &)
  {
    assert(false);
  }

UberApiErrorRequestFailedJSON &UberApiErrorRequestFailedJSON::operator=(const UberApiErrorRequestFailedJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberApiErrorRequestFailedJSON::extraErrorsToJSON(void) const
  {
    JSONValueHandler handler_Errors;
    storeErrors->write_as_json(&handler_Errors);
    handler_Errors.result->add_reference();
    return handler_Errors.result;
  }

void UberApiErrorRequestFailedJSON::fromJSONErrors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestFatalErrorsJSON *convert_classy = UberRequestFatalErrorsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setErrors(convert_classy);
    convert_classy->remove_reference();
  }

UberApiErrorRequestFailedJSON::UberApiErrorRequestFailedJSON(void) :
        flagHasErrors(false)
  {
    extraIndex = create_string_index();
  }

UberApiErrorRequestFailedJSON::~UberApiErrorRequestFailedJSON(void)
  {
    if (flagHasErrors)
      {
        storeErrors->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberApiErrorRequestFailedJSON::hasErrors(void) const
  {
    return flagHasErrors;
  }

UberRequestFatalErrorsJSON * UberApiErrorRequestFailedJSON::getErrors(void)
  {
    assert(flagHasErrors);
    return storeErrors;
  }

const UberRequestFatalErrorsJSON * UberApiErrorRequestFailedJSON::getErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors;
  }

UberApiErrorRequestFailedJSON *UberApiErrorRequestFailedJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberApiErrorRequestFailedJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberApiErrorRequestFailedJSON>, UberApiErrorRequestFailedJSON *, bool> generator("Type UberApiErrorRequestFailed", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
