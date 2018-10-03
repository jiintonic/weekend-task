/* file "CollateMusicEntitiesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CollateMusicEntitiesJSON.h"

#include "CollateMusicEntitiesJSON.h"


CollateMusicEntitiesJSON::CollateMusicEntitiesJSON(const CollateMusicEntitiesJSON &)
  {
    assert(false);
  }

CollateMusicEntitiesJSON &CollateMusicEntitiesJSON::operator=(const CollateMusicEntitiesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CollateMusicEntitiesJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of CollateMusicEntitiesJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

CollateMusicEntitiesJSON::CollateMusicEntitiesJSON(void) :
        flagHasValue(false)
  {
  }

CollateMusicEntitiesJSON::CollateMusicEntitiesJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

CollateMusicEntitiesJSON::~CollateMusicEntitiesJSON(void)
  {
  }

bool CollateMusicEntitiesJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool CollateMusicEntitiesJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool CollateMusicEntitiesJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CollateMusicEntitiesJSON *CollateMusicEntitiesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CollateMusicEntitiesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CollateMusicEntitiesJSON>, CollateMusicEntitiesJSON *, bool> generator("Type CollateMusicEntities", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
