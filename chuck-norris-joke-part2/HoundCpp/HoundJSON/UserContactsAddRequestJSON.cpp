/* file "UserContactsAddRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsAddRequestJSON.h"

#include "UserContactsAddRequestJSON.h"


UserContactsAddRequestJSON::UserContactsAddRequestJSON(const UserContactsAddRequestJSON &)
  {
    assert(false);
  }

UserContactsAddRequestJSON &UserContactsAddRequestJSON::operator=(const UserContactsAddRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserContactsAddRequestJSON::extraNewContactsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_NewContacts = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeNewContacts.size(); ++num1)
      {
        JSONValueHandler handler_NewContacts;
        storeNewContacts[num1]->write_as_json(&handler_NewContacts);
        handler_NewContacts.result->add_reference();
        generated_array_1_NewContacts->appendComponent(handler_NewContacts.result);
        handler_NewContacts.result->remove_reference();
      }
    return generated_array_1_NewContacts;
  }

void UserContactsAddRequestJSON::fromJSONNewContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewContacts of UserContactsAddRequestJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field NewContacts of UserContactsAddRequestJSON has too few elements.");
    std::vector< OneContactJSON * > vector_NewContacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NewContacts1[num1] = convert_classy;
      }
    assert(vector_NewContacts1.size() >= 1);
    initNewContacts();
    for (size_t num2 = 0; num2 < vector_NewContacts1.size(); ++num2)
        appendNewContacts(vector_NewContacts1[num2]);
    for (size_t num1 = 0; num1 < vector_NewContacts1.size(); ++num1)
      {
        vector_NewContacts1[num1]->remove_reference();
      }
  }

UserContactsAddRequestJSON::UserContactsAddRequestJSON(void) :
        flagHasNewContacts(false)
  {
    extraIndex = create_string_index();
  }

UserContactsAddRequestJSON::~UserContactsAddRequestJSON(void)
  {
    if (flagHasNewContacts)
      {
        for (size_t num4 = 0; num4 < storeNewContacts.size(); ++num4)
          {
            storeNewContacts[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserContactsAddRequestJSON::getRequestKind(void) const
  {
    return "Add";
  }

bool UserContactsAddRequestJSON::hasNewContacts(void) const
  {
    return flagHasNewContacts;
  }

size_t UserContactsAddRequestJSON::countOfNewContacts(void) const
  {
    assert(flagHasNewContacts);
    return storeNewContacts.size();
  }

OneContactJSON * UserContactsAddRequestJSON::elementOfNewContacts(size_t element_num)
  {
    assert(flagHasNewContacts);
    return storeNewContacts[element_num];
  }

const OneContactJSON * UserContactsAddRequestJSON::elementOfNewContacts(size_t element_num) const
  {
    assert(flagHasNewContacts);
    return storeNewContacts[element_num];
  }

std::vector< OneContactJSON * > UserContactsAddRequestJSON::getNewContacts(void)
  {
    assert(flagHasNewContacts);
    return storeNewContacts;
  }

const std::vector< OneContactJSON * > UserContactsAddRequestJSON::getNewContacts(void) const
  {
    assert(flagHasNewContacts);
    return storeNewContacts;
  }

UserContactsAddRequestJSON *UserContactsAddRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsAddRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsAddRequestJSON>, UserContactsAddRequestJSON *, bool> generator("Type UserContactsAddRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
