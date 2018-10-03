/* file "ValidEmailJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ValidEmailJSON.h"

#include "ValidEmailJSON.h"


ValidEmailJSON::ValidEmailJSON(const ValidEmailJSON &)
  {
    assert(false);
  }

ValidEmailJSON &ValidEmailJSON::operator=(const ValidEmailJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ValidEmailJSON::fromJSONContactName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactName of ValidEmailJSON is not a string.");
    setContactName(std::string(json_string->getData()));
  }

void ValidEmailJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of ValidEmailJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void ValidEmailJSON::fromJSONContactID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactID of ValidEmailJSON is not a string.");
    setContactID(std::string(json_string->getData()));
  }

void ValidEmailJSON::fromJSONEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Email of ValidEmailJSON is not a string.");
    setEmail(std::string(json_string->getData()));
  }

ValidEmailJSON::ValidEmailJSON(void) :
        flagHasContactName(false),
        flagHasLabel(false),
        flagHasContactID(false),
        flagHasEmail(false)
  {
    extraIndex = create_string_index();
  }

ValidEmailJSON::~ValidEmailJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ValidEmailJSON::hasContactName(void) const
  {
    return flagHasContactName;
  }

std::string ValidEmailJSON::getContactName(void)
  {
    assert(flagHasContactName);
    return storeContactName;
  }

const std::string ValidEmailJSON::getContactName(void) const
  {
    assert(flagHasContactName);
    return storeContactName;
  }

bool ValidEmailJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string ValidEmailJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string ValidEmailJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool ValidEmailJSON::hasContactID(void) const
  {
    return flagHasContactID;
  }

std::string ValidEmailJSON::getContactID(void)
  {
    assert(flagHasContactID);
    return storeContactID;
  }

const std::string ValidEmailJSON::getContactID(void) const
  {
    assert(flagHasContactID);
    return storeContactID;
  }

bool ValidEmailJSON::hasEmail(void) const
  {
    return flagHasEmail;
  }

std::string ValidEmailJSON::getEmail(void)
  {
    assert(flagHasEmail);
    return storeEmail;
  }

const std::string ValidEmailJSON::getEmail(void) const
  {
    assert(flagHasEmail);
    return storeEmail;
  }

ValidEmailJSON *ValidEmailJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ValidEmailJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ValidEmailJSON>, ValidEmailJSON *, bool> generator("Type ValidEmail", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
