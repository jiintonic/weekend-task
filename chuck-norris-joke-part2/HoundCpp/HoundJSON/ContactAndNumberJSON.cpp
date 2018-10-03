/* file "ContactAndNumberJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContactAndNumberJSON.h"

#include "ContactAndNumberJSON.h"


ContactAndNumberJSON::ContactAndNumberJSON(const ContactAndNumberJSON &)
  {
    assert(false);
  }

ContactAndNumberJSON &ContactAndNumberJSON::operator=(const ContactAndNumberJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactAndNumberJSON::fromJSONContact(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OneContactJSON *convert_classy = OneContactJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setContact(convert_classy);
    convert_classy->remove_reference();
  }

void ContactAndNumberJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of ContactAndNumberJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

ContactAndNumberJSON::ContactAndNumberJSON(void) :
        flagHasContact(false),
        flagHasNumber(false)
  {
  }

ContactAndNumberJSON::~ContactAndNumberJSON(void)
  {
    if (flagHasContact)
      {
        storeContact->remove_reference();
      }
  }

bool ContactAndNumberJSON::hasContact(void) const
  {
    return flagHasContact;
  }

OneContactJSON * ContactAndNumberJSON::getContact(void)
  {
    assert(flagHasContact);
    return storeContact;
  }

const OneContactJSON * ContactAndNumberJSON::getContact(void) const
  {
    assert(flagHasContact);
    return storeContact;
  }

bool ContactAndNumberJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string ContactAndNumberJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string ContactAndNumberJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

ContactAndNumberJSON *ContactAndNumberJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContactAndNumberJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContactAndNumberJSON>, ContactAndNumberJSON *, bool> generator("Type ContactAndNumber", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
