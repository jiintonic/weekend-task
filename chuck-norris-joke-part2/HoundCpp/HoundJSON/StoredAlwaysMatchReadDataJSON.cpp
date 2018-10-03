/* file "StoredAlwaysMatchReadDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredAlwaysMatchReadDataJSON.h"

#include "StoredAlwaysMatchReadDataJSON.h"


StoredAlwaysMatchReadDataJSON::StoredAlwaysMatchReadDataJSON(const StoredAlwaysMatchReadDataJSON &)
  {
    assert(false);
  }

StoredAlwaysMatchReadDataJSON &StoredAlwaysMatchReadDataJSON::operator=(const StoredAlwaysMatchReadDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StoredAlwaysMatchReadDataJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of StoredAlwaysMatchReadDataJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

StoredAlwaysMatchReadDataJSON::StoredAlwaysMatchReadDataJSON(void) :
        flagHasValue(false)
  {
  }

StoredAlwaysMatchReadDataJSON::StoredAlwaysMatchReadDataJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

StoredAlwaysMatchReadDataJSON::~StoredAlwaysMatchReadDataJSON(void)
  {
  }

bool StoredAlwaysMatchReadDataJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool StoredAlwaysMatchReadDataJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool StoredAlwaysMatchReadDataJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

StoredAlwaysMatchReadDataJSON *StoredAlwaysMatchReadDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredAlwaysMatchReadDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredAlwaysMatchReadDataJSON>, StoredAlwaysMatchReadDataJSON *, bool> generator("Type StoredAlwaysMatchReadData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
