/* file "UserNameJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserNameJSON.h"

#include "UserNameJSON.h"


UserNameJSON::UserNameJSON(const UserNameJSON &)
  {
    assert(false);
  }

UserNameJSON &UserNameJSON::operator=(const UserNameJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UserNameJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of UserNameJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void UserNameJSON::fromJSONSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenName of UserNameJSON is not a string.");
    setSpokenName(std::string(json_string->getData()));
  }

UserNameJSON::UserNameJSON(void) :
        flagHasName(false),
        flagHasSpokenName(false)
  {
    extraIndex = create_string_index();
  }

UserNameJSON::~UserNameJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UserNameJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string UserNameJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string UserNameJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool UserNameJSON::hasSpokenName(void) const
  {
    return flagHasSpokenName;
  }

std::string UserNameJSON::getSpokenName(void)
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

const std::string UserNameJSON::getSpokenName(void) const
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

UserNameJSON *UserNameJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserNameJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserNameJSON>, UserNameJSON *, bool> generator("Type UserName", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
