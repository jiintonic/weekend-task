/* file "GetUberServerTokenJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GetUberServerTokenJSON.h"

#include "GetUberServerTokenJSON.h"


GetUberServerTokenJSON::GetUberServerTokenJSON(const GetUberServerTokenJSON &)
  {
    assert(false);
  }

GetUberServerTokenJSON &GetUberServerTokenJSON::operator=(const GetUberServerTokenJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GetUberServerTokenJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of GetUberServerTokenJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

GetUberServerTokenJSON::GetUberServerTokenJSON(void) :
        flagHasValue(false)
  {
  }

GetUberServerTokenJSON::GetUberServerTokenJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

GetUberServerTokenJSON::~GetUberServerTokenJSON(void)
  {
  }

bool GetUberServerTokenJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool GetUberServerTokenJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool GetUberServerTokenJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

GetUberServerTokenJSON *GetUberServerTokenJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GetUberServerTokenJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GetUberServerTokenJSON>, GetUberServerTokenJSON *, bool> generator("Type GetUberServerToken", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
