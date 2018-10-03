/* file "UserLocationIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserLocationIntentJSON.h"

#include "UserLocationIntentJSON.h"


UserLocationIntentJSON::UserLocationIntentJSON(const UserLocationIntentJSON &)
  {
    assert(false);
  }

UserLocationIntentJSON &UserLocationIntentJSON::operator=(const UserLocationIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserLocationIntentJSON::extraIsOwnedToJSON(void) const
  {
    JSONValue *generated_boolean_IsOwned = (storeIsOwned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsOwned;
  }

JSONValue *UserLocationIntentJSON::extraLabelToJSON(void) const
  {
    JSONStringValue *generated_string_Label = new JSONStringValue(storeLabel.c_str());
    return generated_string_Label;
  }

void UserLocationIntentJSON::fromJSONIsOwned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsOwned of UserLocationIntentJSON is not true for false.");
          }
      }
    setIsOwned(the_bool);
  }

void UserLocationIntentJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of UserLocationIntentJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

UserLocationIntentJSON::UserLocationIntentJSON(void) :
        flagHasIsOwned(false),
        flagHasLabel(false)
  {
    extraIndex = create_string_index();
  }

UserLocationIntentJSON::~UserLocationIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserLocationIntentJSON::getLocationIntentKind(void) const
  {
    return "User";
  }

bool UserLocationIntentJSON::hasIsOwned(void) const
  {
    return flagHasIsOwned;
  }

bool UserLocationIntentJSON::getIsOwned(void)
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

const bool UserLocationIntentJSON::getIsOwned(void) const
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

bool UserLocationIntentJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string UserLocationIntentJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string UserLocationIntentJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

UserLocationIntentJSON *UserLocationIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserLocationIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserLocationIntentJSON>, UserLocationIntentJSON *, bool> generator("Type UserLocationIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
