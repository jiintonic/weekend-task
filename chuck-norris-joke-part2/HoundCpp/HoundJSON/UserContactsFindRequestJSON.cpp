/* file "UserContactsFindRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsFindRequestJSON.h"

#include "UserContactsFindRequestJSON.h"


UserContactsFindRequestJSON::UserContactsFindRequestJSON(const UserContactsFindRequestJSON &)
  {
    assert(false);
  }

UserContactsFindRequestJSON &UserContactsFindRequestJSON::operator=(const UserContactsFindRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserContactsFindRequestJSON::extraKeyFieldNameToJSON(void) const
  {
    JSONStringValue *generated_string_KeyFieldName = new JSONStringValue(storeKeyFieldName.c_str());
    return generated_string_KeyFieldName;
  }

JSONValue *UserContactsFindRequestJSON::extraMatchValueToJSON(void) const
  {
    storeMatchValue->add_reference();
    return storeMatchValue;
  }

JSONValue *UserContactsFindRequestJSON::extraFindNotMatchedToJSON(void) const
  {
    JSONValue *generated_boolean_FindNotMatched = (storeFindNotMatched ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_FindNotMatched;
  }

void UserContactsFindRequestJSON::fromJSONKeyFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field KeyFieldName of UserContactsFindRequestJSON is not a string.");
    setKeyFieldName(std::string(json_string->getData()));
  }

void UserContactsFindRequestJSON::fromJSONMatchValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setMatchValue(json_value);
  }

void UserContactsFindRequestJSON::fromJSONFindNotMatched(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FindNotMatched of UserContactsFindRequestJSON is not true for false.");
          }
      }
    setFindNotMatched(the_bool);
  }

UserContactsFindRequestJSON::UserContactsFindRequestJSON(void) :
        flagHasKeyFieldName(false),
        flagHasMatchValue(false),
        flagHasFindNotMatched(false)
  {
    extraIndex = create_string_index();
  }

UserContactsFindRequestJSON::~UserContactsFindRequestJSON(void)
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

const char *UserContactsFindRequestJSON::getRequestKind(void) const
  {
    return "Find";
  }

bool UserContactsFindRequestJSON::hasKeyFieldName(void) const
  {
    return flagHasKeyFieldName;
  }

std::string UserContactsFindRequestJSON::getKeyFieldName(void)
  {
    assert(flagHasKeyFieldName);
    return storeKeyFieldName;
  }

const std::string UserContactsFindRequestJSON::getKeyFieldName(void) const
  {
    assert(flagHasKeyFieldName);
    return storeKeyFieldName;
  }

bool UserContactsFindRequestJSON::hasMatchValue(void) const
  {
    return flagHasMatchValue;
  }

JSONValue * UserContactsFindRequestJSON::getMatchValue(void)
  {
    assert(flagHasMatchValue);
    return storeMatchValue;
  }

const JSONValue * UserContactsFindRequestJSON::getMatchValue(void) const
  {
    assert(flagHasMatchValue);
    return storeMatchValue;
  }

bool UserContactsFindRequestJSON::hasFindNotMatched(void) const
  {
    return flagHasFindNotMatched;
  }

bool UserContactsFindRequestJSON::getFindNotMatched(void)
  {
    assert(flagHasFindNotMatched);
    return storeFindNotMatched;
  }

const bool UserContactsFindRequestJSON::getFindNotMatched(void) const
  {
    assert(flagHasFindNotMatched);
    return storeFindNotMatched;
  }

UserContactsFindRequestJSON *UserContactsFindRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsFindRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsFindRequestJSON>, UserContactsFindRequestJSON *, bool> generator("Type UserContactsFindRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
