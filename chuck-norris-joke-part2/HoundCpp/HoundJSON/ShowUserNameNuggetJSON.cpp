/* file "ShowUserNameNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowUserNameNuggetJSON.h"

#include "ShowUserNameNuggetJSON.h"


ShowUserNameNuggetJSON::ShowUserNameNuggetJSON(const ShowUserNameNuggetJSON &)
  {
    assert(false);
  }

ShowUserNameNuggetJSON &ShowUserNameNuggetJSON::operator=(const ShowUserNameNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowUserNameNuggetJSON::extraNameToJSON(void) const
  {
    JSONStringValue *generated_string_Name = new JSONStringValue(storeName.c_str());
    return generated_string_Name;
  }

void ShowUserNameNuggetJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of ShowUserNameNuggetJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

ShowUserNameNuggetJSON::ShowUserNameNuggetJSON(void) :
        flagHasName(false)
  {
    extraIndex = create_string_index();
  }

ShowUserNameNuggetJSON::~ShowUserNameNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowUserNameNuggetJSON::getUserMemoryNuggetKind(void) const
  {
    return "ShowUserName";
  }

bool ShowUserNameNuggetJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string ShowUserNameNuggetJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string ShowUserNameNuggetJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

ShowUserNameNuggetJSON *ShowUserNameNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowUserNameNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowUserNameNuggetJSON>, ShowUserNameNuggetJSON *, bool> generator("Type ShowUserNameNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
