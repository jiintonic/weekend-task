/* file "AllowContextFreeMusicSearchForPopularEntitiesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AllowContextFreeMusicSearchForPopularEntitiesJSON.h"

#include "AllowContextFreeMusicSearchForPopularEntitiesJSON.h"


AllowContextFreeMusicSearchForPopularEntitiesJSON::AllowContextFreeMusicSearchForPopularEntitiesJSON(const AllowContextFreeMusicSearchForPopularEntitiesJSON &)
  {
    assert(false);
  }

AllowContextFreeMusicSearchForPopularEntitiesJSON &AllowContextFreeMusicSearchForPopularEntitiesJSON::operator=(const AllowContextFreeMusicSearchForPopularEntitiesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AllowContextFreeMusicSearchForPopularEntitiesJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of AllowContextFreeMusicSearchForPopularEntitiesJSON is not true for false.");
          }
      }
    setValue(the_bool);
  }

AllowContextFreeMusicSearchForPopularEntitiesJSON::AllowContextFreeMusicSearchForPopularEntitiesJSON(void) :
        flagHasValue(false)
  {
  }

AllowContextFreeMusicSearchForPopularEntitiesJSON::AllowContextFreeMusicSearchForPopularEntitiesJSON(bool init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

AllowContextFreeMusicSearchForPopularEntitiesJSON::~AllowContextFreeMusicSearchForPopularEntitiesJSON(void)
  {
  }

bool AllowContextFreeMusicSearchForPopularEntitiesJSON::hasValue(void) const
  {
    return flagHasValue;
  }

bool AllowContextFreeMusicSearchForPopularEntitiesJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const bool AllowContextFreeMusicSearchForPopularEntitiesJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

AllowContextFreeMusicSearchForPopularEntitiesJSON *AllowContextFreeMusicSearchForPopularEntitiesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AllowContextFreeMusicSearchForPopularEntitiesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AllowContextFreeMusicSearchForPopularEntitiesJSON>, AllowContextFreeMusicSearchForPopularEntitiesJSON *, bool> generator("Type AllowContextFreeMusicSearchForPopularEntities", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
