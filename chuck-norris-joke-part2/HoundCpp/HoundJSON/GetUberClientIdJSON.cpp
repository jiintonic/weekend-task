/* file "GetUberClientIdJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GetUberClientIdJSON.h"

#include "GetUberClientIdJSON.h"


GetUberClientIdJSON::GetUberClientIdJSON(const GetUberClientIdJSON &)
  {
    assert(false);
  }

GetUberClientIdJSON &GetUberClientIdJSON::operator=(const GetUberClientIdJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GetUberClientIdJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of GetUberClientIdJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

GetUberClientIdJSON::GetUberClientIdJSON(void) :
        flagHasValue(false)
  {
  }

GetUberClientIdJSON::GetUberClientIdJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

GetUberClientIdJSON::~GetUberClientIdJSON(void)
  {
  }

bool GetUberClientIdJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool GetUberClientIdJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool GetUberClientIdJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

GetUberClientIdJSON *GetUberClientIdJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GetUberClientIdJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GetUberClientIdJSON>, GetUberClientIdJSON *, bool> generator("Type GetUberClientId", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
