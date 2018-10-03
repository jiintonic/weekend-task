/* file "EmailContactResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailContactResultJSON.h"

#include "EmailContactResultJSON.h"
#include "EmailContactResultWithAddOrRemoveJSON.h"


EmailContactResultJSON::EmailContactResultJSON(const EmailContactResultJSON &)
  {
    assert(false);
  }

EmailContactResultJSON &EmailContactResultJSON::operator=(const EmailContactResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *EmailContactResultJSON::extraFieldTypeToJSON(void) const
  {
    JSONValueHandler handler_FieldType;
    storeFieldType->write_as_json(&handler_FieldType);
    handler_FieldType.result->add_reference();
    return handler_FieldType.result;
  }

JSONValue *EmailContactResultJSON::extraContactsToJSON(void) const
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

void EmailContactResultJSON::fromJSONFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailContactResultFieldTypeJSON *convert_classy = EmailContactResultFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFieldType(convert_classy);
    convert_classy->remove_reference();
  }

void EmailContactResultJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of EmailContactResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactJSON *convert_classy = EmailContactJSON::from_json(json_array1->component(num1), ignore_extras);
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

EmailContactResultJSON::EmailContactResultJSON(void) :
        flagHasFieldType(false),
        flagHasContacts(false)
  {
    extraIndex = create_string_index();
  }

EmailContactResultJSON::~EmailContactResultJSON(void)
  {
    if (flagHasFieldType)
      {
        storeFieldType->remove_reference();
      }
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

bool EmailContactResultJSON::hasFieldType(void) const
  {
    return flagHasFieldType;
  }

EmailContactResultFieldTypeJSON * EmailContactResultJSON::getFieldType(void)
  {
    assert(flagHasFieldType);
    return storeFieldType;
  }

const EmailContactResultFieldTypeJSON * EmailContactResultJSON::getFieldType(void) const
  {
    assert(flagHasFieldType);
    return storeFieldType;
  }

EmailContactResultFieldTypeJSON::TypeValue EmailContactResultJSON::getFieldTypeValue(void)
  {
    return getFieldType()->getValue();
  }

const EmailContactResultFieldTypeJSON::TypeValue EmailContactResultJSON::getFieldTypeValue(void) const
  {
    return getFieldType()->getValue();
  }

const char *EmailContactResultJSON::getFieldTypeAsChars(void) const
  {
    return getFieldType()->getValueAsChars();
  }

std::string EmailContactResultJSON::getFieldTypeAsString(void) const
  {
    return getFieldType()->getValueAsString();
  }

bool EmailContactResultJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t EmailContactResultJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

EmailContactJSON * EmailContactResultJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const EmailContactJSON * EmailContactResultJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< EmailContactJSON * > EmailContactResultJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< EmailContactJSON * > EmailContactResultJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

EmailContactResultJSON *EmailContactResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailContactResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool> generator("Type EmailContactResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
