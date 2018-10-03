/* file "UserCurrentLocationIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserCurrentLocationIntentJSON.h"

#include "UserCurrentLocationIntentJSON.h"


UserCurrentLocationIntentJSON::UserCurrentLocationIntentJSON(const UserCurrentLocationIntentJSON &)
  {
    assert(false);
  }

UserCurrentLocationIntentJSON &UserCurrentLocationIntentJSON::operator=(const UserCurrentLocationIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserCurrentLocationIntentJSON::extraLabelToJSON(void) const
  {
    JSONStringValue *generated_string_Label = new JSONStringValue(storeLabel.c_str());
    return generated_string_Label;
  }

void UserCurrentLocationIntentJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of UserCurrentLocationIntentJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

UserCurrentLocationIntentJSON::UserCurrentLocationIntentJSON(void) :
        flagHasLabel(false)
  {
    extraIndex = create_string_index();
  }

UserCurrentLocationIntentJSON::~UserCurrentLocationIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserCurrentLocationIntentJSON::getLocationIntentKind(void) const
  {
    return "UserCurrentLocation";
  }

bool UserCurrentLocationIntentJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string UserCurrentLocationIntentJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string UserCurrentLocationIntentJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

UserCurrentLocationIntentJSON *UserCurrentLocationIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserCurrentLocationIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserCurrentLocationIntentJSON>, UserCurrentLocationIntentJSON *, bool> generator("Type UserCurrentLocationIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
