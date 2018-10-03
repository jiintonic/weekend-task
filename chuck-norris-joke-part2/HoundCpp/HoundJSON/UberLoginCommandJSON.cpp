/* file "UberLoginCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberLoginCommandJSON.h"

#include "UberLoginCommandJSON.h"


UberLoginCommandJSON::UberLoginCommandJSON(const UberLoginCommandJSON &)
  {
    assert(false);
  }

UberLoginCommandJSON &UberLoginCommandJSON::operator=(const UberLoginCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberLoginCommandJSON::extraPleaseLoginResponseToJSON(void) const
  {
    JSONValueHandler handler_PleaseLoginResponse;
    storePleaseLoginResponse->write_as_json(&handler_PleaseLoginResponse);
    handler_PleaseLoginResponse.result->add_reference();
    return handler_PleaseLoginResponse.result;
  }

void UberLoginCommandJSON::fromJSONPleaseLoginResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPleaseLoginResponse(convert_classy);
    convert_classy->remove_reference();
  }

UberLoginCommandJSON::UberLoginCommandJSON(void) :
        flagHasPleaseLoginResponse(false)
  {
    extraIndex = create_string_index();
  }

UberLoginCommandJSON::~UberLoginCommandJSON(void)
  {
    if (flagHasPleaseLoginResponse)
      {
        storePleaseLoginResponse->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberLoginCommandJSON::getUberCommandKind(void) const
  {
    return "UberLogin";
  }

bool UberLoginCommandJSON::hasPleaseLoginResponse(void) const
  {
    return flagHasPleaseLoginResponse;
  }

DynamicResponseJSON * UberLoginCommandJSON::getPleaseLoginResponse(void)
  {
    assert(flagHasPleaseLoginResponse);
    return storePleaseLoginResponse;
  }

const DynamicResponseJSON * UberLoginCommandJSON::getPleaseLoginResponse(void) const
  {
    assert(flagHasPleaseLoginResponse);
    return storePleaseLoginResponse;
  }

UberLoginCommandJSON *UberLoginCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberLoginCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberLoginCommandJSON>, UberLoginCommandJSON *, bool> generator("Type UberLoginCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
