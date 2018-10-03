/* file "UberClientDevSettingsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberClientDevSettingsJSON.h"

#include "UberClientDevSettingsJSON.h"


UberClientDevSettingsJSON::UberClientDevSettingsJSON(const UberClientDevSettingsJSON &)
  {
    assert(false);
  }

UberClientDevSettingsJSON &UberClientDevSettingsJSON::operator=(const UberClientDevSettingsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberClientDevSettingsJSON::fromJSONUseSandboxApi(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UseSandboxApi of UberClientDevSettingsJSON is not true for false.");
          }
      }
    setUseSandboxApi(the_bool);
  }

UberClientDevSettingsJSON::UberClientDevSettingsJSON(void) :
        flagHasUseSandboxApi(false)
  {
    extraIndex = create_string_index();
  }

UberClientDevSettingsJSON::~UberClientDevSettingsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberClientDevSettingsJSON::hasUseSandboxApi(void) const
  {
    return flagHasUseSandboxApi;
  }

bool UberClientDevSettingsJSON::getUseSandboxApi(void)
  {
    assert(flagHasUseSandboxApi);
    return storeUseSandboxApi;
  }

const bool UberClientDevSettingsJSON::getUseSandboxApi(void) const
  {
    assert(flagHasUseSandboxApi);
    return storeUseSandboxApi;
  }

UberClientDevSettingsJSON *UberClientDevSettingsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberClientDevSettingsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberClientDevSettingsJSON>, UberClientDevSettingsJSON *, bool> generator("Type UberClientDevSettings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
