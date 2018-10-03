/* file "UserContactsModifyRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsModifyRequestJSON.h"

#include "UserContactsModifyRequestJSON.h"


UserContactsModifyRequestJSON::UserContactsModifyRequestJSON(const UserContactsModifyRequestJSON &)
  {
    assert(false);
  }

UserContactsModifyRequestJSON &UserContactsModifyRequestJSON::operator=(const UserContactsModifyRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserContactsModifyRequestJSON::extraKeyFieldNameToJSON(void) const
  {
    JSONStringValue *generated_string_KeyFieldName = new JSONStringValue(storeKeyFieldName.c_str());
    return generated_string_KeyFieldName;
  }

JSONValue *UserContactsModifyRequestJSON::extraMatchValueToJSON(void) const
  {
    storeMatchValue->add_reference();
    return storeMatchValue;
  }

JSONValue *UserContactsModifyRequestJSON::extraNewFieldDataToJSON(void) const
  {
    return storeNewFieldData;
  }

void UserContactsModifyRequestJSON::fromJSONKeyFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field KeyFieldName of UserContactsModifyRequestJSON is not a string.");
    setKeyFieldName(std::string(json_string->getData()));
  }

void UserContactsModifyRequestJSON::fromJSONMatchValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setMatchValue(json_value);
  }

void UserContactsModifyRequestJSON::fromJSONNewFieldData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field NewFieldData of UserContactsModifyRequestJSON is not an object.");
    json_value->object_value()->add_reference();
    setNewFieldData(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

UserContactsModifyRequestJSON::UserContactsModifyRequestJSON(void) :
        flagHasKeyFieldName(false),
        flagHasMatchValue(false),
        flagHasNewFieldData(false)
  {
    extraIndex = create_string_index();
  }

UserContactsModifyRequestJSON::~UserContactsModifyRequestJSON(void)
  {
    if (flagHasMatchValue)
      {
        storeMatchValue->remove_reference();
      }
    if (flagHasNewFieldData)
      {
        storeNewFieldData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserContactsModifyRequestJSON::getRequestKind(void) const
  {
    return "Modify";
  }

bool UserContactsModifyRequestJSON::hasKeyFieldName(void) const
  {
    return flagHasKeyFieldName;
  }

std::string UserContactsModifyRequestJSON::getKeyFieldName(void)
  {
    assert(flagHasKeyFieldName);
    return storeKeyFieldName;
  }

const std::string UserContactsModifyRequestJSON::getKeyFieldName(void) const
  {
    assert(flagHasKeyFieldName);
    return storeKeyFieldName;
  }

bool UserContactsModifyRequestJSON::hasMatchValue(void) const
  {
    return flagHasMatchValue;
  }

JSONValue * UserContactsModifyRequestJSON::getMatchValue(void)
  {
    assert(flagHasMatchValue);
    return storeMatchValue;
  }

const JSONValue * UserContactsModifyRequestJSON::getMatchValue(void) const
  {
    assert(flagHasMatchValue);
    return storeMatchValue;
  }

bool UserContactsModifyRequestJSON::hasNewFieldData(void) const
  {
    return flagHasNewFieldData;
  }

JSONObjectValue * UserContactsModifyRequestJSON::getNewFieldData(void)
  {
    assert(flagHasNewFieldData);
    return storeNewFieldData;
  }

const JSONObjectValue * UserContactsModifyRequestJSON::getNewFieldData(void) const
  {
    assert(flagHasNewFieldData);
    return storeNewFieldData;
  }

UserContactsModifyRequestJSON *UserContactsModifyRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsModifyRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsModifyRequestJSON>, UserContactsModifyRequestJSON *, bool> generator("Type UserContactsModifyRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
