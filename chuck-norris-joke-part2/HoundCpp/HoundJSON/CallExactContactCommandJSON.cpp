/* file "CallExactContactCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CallExactContactCommandJSON.h"

#include "CallExactContactCommandJSON.h"


CallExactContactCommandJSON::CallExactContactCommandJSON(const CallExactContactCommandJSON &)
  {
    assert(false);
  }

CallExactContactCommandJSON &CallExactContactCommandJSON::operator=(const CallExactContactCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CallExactContactCommandJSON::extraNumberToJSON(void) const
  {
    JSONStringValue *generated_string_Number = new JSONStringValue(storeNumber.c_str());
    return generated_string_Number;
  }

JSONValue *CallExactContactCommandJSON::extraContactsToJSON(void) const
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

void CallExactContactCommandJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of CallExactContactCommandJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

void CallExactContactCommandJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of CallExactContactCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Contacts of CallExactContactCommandJSON has too few elements.");
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

CallExactContactCommandJSON::CallExactContactCommandJSON(void) :
        flagHasNumber(false),
        flagHasContacts(false)
  {
    extraIndex = create_string_index();
  }

CallExactContactCommandJSON::~CallExactContactCommandJSON(void)
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

const char *CallExactContactCommandJSON::getPhoneCommandKind(void) const
  {
    return "CallExactContact";
  }

bool CallExactContactCommandJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string CallExactContactCommandJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string CallExactContactCommandJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

bool CallExactContactCommandJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t CallExactContactCommandJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

OneContactJSON * CallExactContactCommandJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const OneContactJSON * CallExactContactCommandJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< OneContactJSON * > CallExactContactCommandJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< OneContactJSON * > CallExactContactCommandJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

CallExactContactCommandJSON *CallExactContactCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CallExactContactCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CallExactContactCommandJSON>, CallExactContactCommandJSON *, bool> generator("Type CallExactContactCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
