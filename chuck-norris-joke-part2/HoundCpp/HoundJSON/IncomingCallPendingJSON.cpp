/* file "IncomingCallPendingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IncomingCallPendingJSON.h"

#include "IncomingCallPendingJSON.h"


IncomingCallPendingJSON::IncomingCallPendingJSON(const IncomingCallPendingJSON &)
  {
    assert(false);
  }

IncomingCallPendingJSON &IncomingCallPendingJSON::operator=(const IncomingCallPendingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void IncomingCallPendingJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of IncomingCallPendingJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

IncomingCallPendingJSON::IncomingCallPendingJSON(void) :
        flagHasValue(false)
  {
  }

IncomingCallPendingJSON::IncomingCallPendingJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

IncomingCallPendingJSON::~IncomingCallPendingJSON(void)
  {
  }

bool IncomingCallPendingJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool IncomingCallPendingJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool IncomingCallPendingJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

IncomingCallPendingJSON *IncomingCallPendingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IncomingCallPendingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IncomingCallPendingJSON>, IncomingCallPendingJSON *, bool> generator("Type IncomingCallPending", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
