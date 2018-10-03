/* file "ValidPhoneNumberJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ValidPhoneNumberJSON.h"

#include "ValidPhoneNumberJSON.h"


ValidPhoneNumberJSON::ValidPhoneNumberJSON(const ValidPhoneNumberJSON &)
  {
    assert(false);
  }

ValidPhoneNumberJSON &ValidPhoneNumberJSON::operator=(const ValidPhoneNumberJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ValidPhoneNumberJSON::fromJSONContactName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactName of ValidPhoneNumberJSON is not a string.");
    setContactName(std::string(json_string->getData()));
  }

void ValidPhoneNumberJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of ValidPhoneNumberJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void ValidPhoneNumberJSON::fromJSONContactID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactID of ValidPhoneNumberJSON is not a string.");
    setContactID(std::string(json_string->getData()));
  }

void ValidPhoneNumberJSON::fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PhoneNumber of ValidPhoneNumberJSON is not a string.");
    setPhoneNumber(std::string(json_string->getData()));
  }

ValidPhoneNumberJSON::ValidPhoneNumberJSON(void) :
        flagHasContactName(false),
        flagHasLabel(false),
        flagHasContactID(false),
        flagHasPhoneNumber(false)
  {
    extraIndex = create_string_index();
  }

ValidPhoneNumberJSON::~ValidPhoneNumberJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ValidPhoneNumberJSON::hasContactName(void) const
  {
    return flagHasContactName;
  }

std::string ValidPhoneNumberJSON::getContactName(void)
  {
    assert(flagHasContactName);
    return storeContactName;
  }

const std::string ValidPhoneNumberJSON::getContactName(void) const
  {
    assert(flagHasContactName);
    return storeContactName;
  }

bool ValidPhoneNumberJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string ValidPhoneNumberJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string ValidPhoneNumberJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool ValidPhoneNumberJSON::hasContactID(void) const
  {
    return flagHasContactID;
  }

std::string ValidPhoneNumberJSON::getContactID(void)
  {
    assert(flagHasContactID);
    return storeContactID;
  }

const std::string ValidPhoneNumberJSON::getContactID(void) const
  {
    assert(flagHasContactID);
    return storeContactID;
  }

bool ValidPhoneNumberJSON::hasPhoneNumber(void) const
  {
    return flagHasPhoneNumber;
  }

std::string ValidPhoneNumberJSON::getPhoneNumber(void)
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

const std::string ValidPhoneNumberJSON::getPhoneNumber(void) const
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

ValidPhoneNumberJSON *ValidPhoneNumberJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ValidPhoneNumberJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ValidPhoneNumberJSON>, ValidPhoneNumberJSON *, bool> generator("Type ValidPhoneNumber", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
