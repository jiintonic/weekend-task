/* file "UberRequestSettingsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestSettingsJSON.h"

#include "UberRequestSettingsJSON.h"


UberRequestSettingsJSON::UberRequestSettingsJSON(const UberRequestSettingsJSON &)
  {
    assert(false);
  }

UberRequestSettingsJSON &UberRequestSettingsJSON::operator=(const UberRequestSettingsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestSettingsJSON::fromJSONRequestRedirectOnConfirmation(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestRedirectOnConfirmation of UberRequestSettingsJSON is not true for false.");
          }
      }
    setRequestRedirectOnConfirmation(the_bool);
  }

UberRequestSettingsJSON::UberRequestSettingsJSON(void) :
        flagHasRequestRedirectOnConfirmation(false)
  {
    extraIndex = create_string_index();
  }

UberRequestSettingsJSON::~UberRequestSettingsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestSettingsJSON::hasRequestRedirectOnConfirmation(void) const
  {
    return flagHasRequestRedirectOnConfirmation;
  }

bool UberRequestSettingsJSON::getRequestRedirectOnConfirmation(void)
  {
    assert(flagHasRequestRedirectOnConfirmation);
    return storeRequestRedirectOnConfirmation;
  }

const bool UberRequestSettingsJSON::getRequestRedirectOnConfirmation(void) const
  {
    assert(flagHasRequestRedirectOnConfirmation);
    return storeRequestRedirectOnConfirmation;
  }

UberRequestSettingsJSON *UberRequestSettingsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestSettingsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestSettingsJSON>, UberRequestSettingsJSON *, bool> generator("Type UberRequestSettings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
