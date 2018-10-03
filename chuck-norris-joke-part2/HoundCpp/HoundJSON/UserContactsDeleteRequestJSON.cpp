/* file "UserContactsDeleteRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsDeleteRequestJSON.h"

#include "UserContactsDeleteRequestJSON.h"


UserContactsDeleteRequestJSON::UserContactsDeleteRequestJSON(const UserContactsDeleteRequestJSON &)
  {
    assert(false);
  }

UserContactsDeleteRequestJSON &UserContactsDeleteRequestJSON::operator=(const UserContactsDeleteRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserContactsDeleteRequestJSON::extraKeyFieldNameToJSON(void) const
  {
    JSONStringValue *generated_string_KeyFieldName = new JSONStringValue(storeKeyFieldName.c_str());
    return generated_string_KeyFieldName;
  }

JSONValue *UserContactsDeleteRequestJSON::extraMatchValueToJSON(void) const
  {
    storeMatchValue->add_reference();
    return storeMatchValue;
  }

void UserContactsDeleteRequestJSON::fromJSONKeyFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field KeyFieldName of UserContactsDeleteRequestJSON is not a string.");
    setKeyFieldName(std::string(json_string->getData()));
  }

void UserContactsDeleteRequestJSON::fromJSONMatchValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setMatchValue(json_value);
  }

UserContactsDeleteRequestJSON::UserContactsDeleteRequestJSON(void) :
        flagHasKeyFieldName(false),
        flagHasMatchValue(false)
  {
    extraIndex = create_string_index();
  }

UserContactsDeleteRequestJSON::~UserContactsDeleteRequestJSON(void)
  {
    if (flagHasMatchValue)
      {
        storeMatchValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserContactsDeleteRequestJSON::getRequestKind(void) const
  {
    return "Delete";
  }

bool UserContactsDeleteRequestJSON::hasKeyFieldName(void) const
  {
    return flagHasKeyFieldName;
  }

std::string UserContactsDeleteRequestJSON::getKeyFieldName(void)
  {
    assert(flagHasKeyFieldName);
    return storeKeyFieldName;
  }

const std::string UserContactsDeleteRequestJSON::getKeyFieldName(void) const
  {
    assert(flagHasKeyFieldName);
    return storeKeyFieldName;
  }

bool UserContactsDeleteRequestJSON::hasMatchValue(void) const
  {
    return flagHasMatchValue;
  }

JSONValue * UserContactsDeleteRequestJSON::getMatchValue(void)
  {
    assert(flagHasMatchValue);
    return storeMatchValue;
  }

const JSONValue * UserContactsDeleteRequestJSON::getMatchValue(void) const
  {
    assert(flagHasMatchValue);
    return storeMatchValue;
  }

UserContactsDeleteRequestJSON *UserContactsDeleteRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsDeleteRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsDeleteRequestJSON>, UserContactsDeleteRequestJSON *, bool> generator("Type UserContactsDeleteRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
