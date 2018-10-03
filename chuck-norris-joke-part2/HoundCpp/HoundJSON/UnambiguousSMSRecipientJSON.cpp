/* file "UnambiguousSMSRecipientJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnambiguousSMSRecipientJSON.h"

#include "UnambiguousSMSRecipientJSON.h"


UnambiguousSMSRecipientJSON::UnambiguousSMSRecipientJSON(const UnambiguousSMSRecipientJSON &)
  {
    assert(false);
  }

UnambiguousSMSRecipientJSON &UnambiguousSMSRecipientJSON::operator=(const UnambiguousSMSRecipientJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnambiguousSMSRecipientJSON::fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PhoneNumber of UnambiguousSMSRecipientJSON is not a string.");
    setPhoneNumber(std::string(json_string->getData()));
  }

void UnambiguousSMSRecipientJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of UnambiguousSMSRecipientJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OneContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Contacts1[num1] = convert_classy;
      }
    initContacts();
    for (size_t num2 = 0; num2 < vector_Contacts1.size(); ++num2)
        appendContacts(vector_Contacts1[num2]);
    for (size_t num1 = 0; num1 < vector_Contacts1.size(); ++num1)
      {
        vector_Contacts1[num1]->remove_reference();
      }
  }

void UnambiguousSMSRecipientJSON::fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserWrittenName of UnambiguousSMSRecipientJSON is not a string.");
    setToUserWrittenName(std::string(json_string->getData()));
  }

void UnambiguousSMSRecipientJSON::fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserSpokenName of UnambiguousSMSRecipientJSON is not a string.");
    setToUserSpokenName(std::string(json_string->getData()));
  }

UnambiguousSMSRecipientJSON::UnambiguousSMSRecipientJSON(void) :
        flagHasPhoneNumber(false),
        flagHasContacts(false),
        flagHasToUserWrittenName(false),
        flagHasToUserSpokenName(false)
  {
    extraIndex = create_string_index();
  }

UnambiguousSMSRecipientJSON::~UnambiguousSMSRecipientJSON(void)
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

bool UnambiguousSMSRecipientJSON::hasPhoneNumber(void) const
  {
    return flagHasPhoneNumber;
  }

std::string UnambiguousSMSRecipientJSON::getPhoneNumber(void)
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

const std::string UnambiguousSMSRecipientJSON::getPhoneNumber(void) const
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

bool UnambiguousSMSRecipientJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t UnambiguousSMSRecipientJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

OneContactJSON * UnambiguousSMSRecipientJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const OneContactJSON * UnambiguousSMSRecipientJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< OneContactJSON * > UnambiguousSMSRecipientJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< OneContactJSON * > UnambiguousSMSRecipientJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

bool UnambiguousSMSRecipientJSON::hasToUserWrittenName(void) const
  {
    return flagHasToUserWrittenName;
  }

std::string UnambiguousSMSRecipientJSON::getToUserWrittenName(void)
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

const std::string UnambiguousSMSRecipientJSON::getToUserWrittenName(void) const
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

bool UnambiguousSMSRecipientJSON::hasToUserSpokenName(void) const
  {
    return flagHasToUserSpokenName;
  }

std::string UnambiguousSMSRecipientJSON::getToUserSpokenName(void)
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

const std::string UnambiguousSMSRecipientJSON::getToUserSpokenName(void) const
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

UnambiguousSMSRecipientJSON *UnambiguousSMSRecipientJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnambiguousSMSRecipientJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool> generator("Type UnambiguousSMSRecipient", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
