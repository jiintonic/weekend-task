/* file "RememberUserNameNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RememberUserNameNuggetJSON.h"

#include "RememberUserNameNuggetJSON.h"


RememberUserNameNuggetJSON::RememberUserNameNuggetJSON(const RememberUserNameNuggetJSON &)
  {
    assert(false);
  }

RememberUserNameNuggetJSON &RememberUserNameNuggetJSON::operator=(const RememberUserNameNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RememberUserNameNuggetJSON::extraNameToJSON(void) const
  {
    JSONStringValue *generated_string_Name = new JSONStringValue(storeName.c_str());
    return generated_string_Name;
  }

void RememberUserNameNuggetJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of RememberUserNameNuggetJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

RememberUserNameNuggetJSON::RememberUserNameNuggetJSON(void) :
        flagHasName(false)
  {
    extraIndex = create_string_index();
  }

RememberUserNameNuggetJSON::~RememberUserNameNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RememberUserNameNuggetJSON::getUserMemoryNuggetKind(void) const
  {
    return "RememberUserName";
  }

bool RememberUserNameNuggetJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string RememberUserNameNuggetJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string RememberUserNameNuggetJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

RememberUserNameNuggetJSON *RememberUserNameNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RememberUserNameNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RememberUserNameNuggetJSON>, RememberUserNameNuggetJSON *, bool> generator("Type RememberUserNameNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
