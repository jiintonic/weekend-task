/* file "ConvertToNewInformationNuggetsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ConvertToNewInformationNuggetsJSON.h"

#include "ConvertToNewInformationNuggetsJSON.h"


ConvertToNewInformationNuggetsJSON::ConvertToNewInformationNuggetsJSON(const ConvertToNewInformationNuggetsJSON &)
  {
    assert(false);
  }

ConvertToNewInformationNuggetsJSON &ConvertToNewInformationNuggetsJSON::operator=(const ConvertToNewInformationNuggetsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ConvertToNewInformationNuggetsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of ConvertToNewInformationNuggetsJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

ConvertToNewInformationNuggetsJSON::ConvertToNewInformationNuggetsJSON(void) :
        flagHasValue(false)
  {
  }

ConvertToNewInformationNuggetsJSON::ConvertToNewInformationNuggetsJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

ConvertToNewInformationNuggetsJSON::~ConvertToNewInformationNuggetsJSON(void)
  {
  }

bool ConvertToNewInformationNuggetsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool ConvertToNewInformationNuggetsJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool ConvertToNewInformationNuggetsJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ConvertToNewInformationNuggetsJSON *ConvertToNewInformationNuggetsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ConvertToNewInformationNuggetsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ConvertToNewInformationNuggetsJSON>, ConvertToNewInformationNuggetsJSON *, bool> generator("Type ConvertToNewInformationNuggets", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
