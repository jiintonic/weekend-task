/* file "NoPhoneNumberCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NoPhoneNumberCommandJSON.h"

#include "NoPhoneNumberCommandJSON.h"


NoPhoneNumberCommandJSON::NoPhoneNumberCommandJSON(const NoPhoneNumberCommandJSON &)
  {
    assert(false);
  }

NoPhoneNumberCommandJSON &NoPhoneNumberCommandJSON::operator=(const NoPhoneNumberCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NoPhoneNumberCommandJSON::extraContactsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Contacts = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeContacts.size(); ++num1)
      {
        JSONValueHandler handler_Contacts;
        storeContacts[num1]->write_as_json(&handler_Contacts);
        handler_Contacts.result->add_reference();
        generated_array_1_Contacts->appendComponent(handler_Contacts.result);
        handler_Contacts.result->remove_reference();
      }
    return generated_array_1_Contacts;
  }

JSONValue *NoPhoneNumberCommandJSON::extraSpecifiedNameToJSON(void) const
  {
    JSONStringValue *generated_string_SpecifiedName = new JSONStringValue(storeSpecifiedName.c_str());
    return generated_string_SpecifiedName;
  }

JSONValue *NoPhoneNumberCommandJSON::extraFullNameToJSON(void) const
  {
    JSONStringValue *generated_string_FullName = new JSONStringValue(storeFullName.c_str());
    return generated_string_FullName;
  }

void NoPhoneNumberCommandJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of NoPhoneNumberCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Contacts of NoPhoneNumberCommandJSON has too few elements.");
    std::vector< OneContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Contacts1[num1] = convert_classy;
      }
    assert(vector_Contacts1.size() >= 1);
    initContacts();
    for (size_t num2 = 0; num2 < vector_Contacts1.size(); ++num2)
        appendContacts(vector_Contacts1[num2]);
    for (size_t num1 = 0; num1 < vector_Contacts1.size(); ++num1)
      {
        vector_Contacts1[num1]->remove_reference();
      }
  }

void NoPhoneNumberCommandJSON::fromJSONSpecifiedName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpecifiedName of NoPhoneNumberCommandJSON is not a string.");
    setSpecifiedName(std::string(json_string->getData()));
  }

void NoPhoneNumberCommandJSON::fromJSONFullName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FullName of NoPhoneNumberCommandJSON is not a string.");
    setFullName(std::string(json_string->getData()));
  }

NoPhoneNumberCommandJSON::NoPhoneNumberCommandJSON(void) :
        flagHasContacts(false),
        flagHasSpecifiedName(false),
        flagHasFullName(false)
  {
    extraIndex = create_string_index();
  }

NoPhoneNumberCommandJSON::~NoPhoneNumberCommandJSON(void)
  {
    if (flagHasContacts)
      {
        for (size_t num4 = 0; num4 < storeContacts.size(); ++num4)
          {
            storeContacts[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NoPhoneNumberCommandJSON::getPhoneCommandKind(void) const
  {
    return "NoPhoneNumber";
  }

bool NoPhoneNumberCommandJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t NoPhoneNumberCommandJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

OneContactJSON * NoPhoneNumberCommandJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const OneContactJSON * NoPhoneNumberCommandJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< OneContactJSON * > NoPhoneNumberCommandJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< OneContactJSON * > NoPhoneNumberCommandJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

bool NoPhoneNumberCommandJSON::hasSpecifiedName(void) const
  {
    return flagHasSpecifiedName;
  }

std::string NoPhoneNumberCommandJSON::getSpecifiedName(void)
  {
    assert(flagHasSpecifiedName);
    return storeSpecifiedName;
  }

const std::string NoPhoneNumberCommandJSON::getSpecifiedName(void) const
  {
    assert(flagHasSpecifiedName);
    return storeSpecifiedName;
  }

bool NoPhoneNumberCommandJSON::hasFullName(void) const
  {
    return flagHasFullName;
  }

std::string NoPhoneNumberCommandJSON::getFullName(void)
  {
    assert(flagHasFullName);
    return storeFullName;
  }

const std::string NoPhoneNumberCommandJSON::getFullName(void) const
  {
    assert(flagHasFullName);
    return storeFullName;
  }

NoPhoneNumberCommandJSON *NoPhoneNumberCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NoPhoneNumberCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NoPhoneNumberCommandJSON>, NoPhoneNumberCommandJSON *, bool> generator("Type NoPhoneNumberCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
