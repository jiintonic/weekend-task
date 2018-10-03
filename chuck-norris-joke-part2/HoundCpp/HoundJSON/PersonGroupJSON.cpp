/* file "PersonGroupJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PersonGroupJSON.h"

#include "PersonGroupJSON.h"


PersonGroupJSON::TypePersonsJSON::TypePersonsJSON(const TypePersonsJSON &)
  {
    assert(false);
  }

PersonGroupJSON::TypePersonsJSON &PersonGroupJSON::TypePersonsJSON::operator=(const TypePersonsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PersonGroupJSON::TypePersonsJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of TypePersonsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OneContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Contacts1[num1] = convert_classy;
      }
    initContacts();
    for (size_t num3 = 0; num3 < vector_Contacts1.size(); ++num3)
        appendContacts(vector_Contacts1[num3]);
    for (size_t num1 = 0; num1 < vector_Contacts1.size(); ++num1)
      {
        vector_Contacts1[num1]->remove_reference();
      }
  }

void PersonGroupJSON::TypePersonsJSON::fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserWrittenName of TypePersonsJSON is not a string.");
    setToUserWrittenName(std::string(json_string->getData()));
  }

void PersonGroupJSON::TypePersonsJSON::fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserSpokenName of TypePersonsJSON is not a string.");
    setToUserSpokenName(std::string(json_string->getData()));
  }

PersonGroupJSON::TypePersonsJSON::TypePersonsJSON(void) :
        flagHasContacts(false),
        flagHasToUserWrittenName(false),
        flagHasToUserSpokenName(false)
  {
    extraIndex = create_string_index();
  }

PersonGroupJSON::TypePersonsJSON::~TypePersonsJSON(void)
  {
    if (flagHasContacts)
      {
        for (size_t num7 = 0; num7 < storeContacts.size(); ++num7)
          {
            storeContacts[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool PersonGroupJSON::TypePersonsJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t PersonGroupJSON::TypePersonsJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

OneContactJSON * PersonGroupJSON::TypePersonsJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const OneContactJSON * PersonGroupJSON::TypePersonsJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< OneContactJSON * > PersonGroupJSON::TypePersonsJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< OneContactJSON * > PersonGroupJSON::TypePersonsJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

bool PersonGroupJSON::TypePersonsJSON::hasToUserWrittenName(void) const
  {
    return flagHasToUserWrittenName;
  }

std::string PersonGroupJSON::TypePersonsJSON::getToUserWrittenName(void)
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

const std::string PersonGroupJSON::TypePersonsJSON::getToUserWrittenName(void) const
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

bool PersonGroupJSON::TypePersonsJSON::hasToUserSpokenName(void) const
  {
    return flagHasToUserSpokenName;
  }

std::string PersonGroupJSON::TypePersonsJSON::getToUserSpokenName(void)
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

const std::string PersonGroupJSON::TypePersonsJSON::getToUserSpokenName(void) const
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

PersonGroupJSON::PersonGroupJSON(const PersonGroupJSON &)
  {
    assert(false);
  }

PersonGroupJSON &PersonGroupJSON::operator=(const PersonGroupJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PersonGroupJSON::fromJSONPersons(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Persons of PersonGroupJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Persons of PersonGroupJSON has too few elements.");
    std::vector< TypePersonsJSON * > vector_Persons1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePersonsJSON *convert_classy = TypePersonsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Persons1[num1] = convert_classy;
      }
    assert(vector_Persons1.size() >= 1);
    initPersons();
    for (size_t num4 = 0; num4 < vector_Persons1.size(); ++num4)
        appendPersons(vector_Persons1[num4]);
    for (size_t num1 = 0; num1 < vector_Persons1.size(); ++num1)
      {
        vector_Persons1[num1]->remove_reference();
      }
  }

PersonGroupJSON::PersonGroupJSON(void) :
        flagHasPersons(false)
  {
    extraIndex = create_string_index();
  }

PersonGroupJSON::~PersonGroupJSON(void)
  {
    if (flagHasPersons)
      {
        for (size_t num10 = 0; num10 < storePersons.size(); ++num10)
          {
            storePersons[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool PersonGroupJSON::hasPersons(void) const
  {
    return flagHasPersons;
  }

size_t PersonGroupJSON::countOfPersons(void) const
  {
    assert(flagHasPersons);
    return storePersons.size();
  }

PersonGroupJSON::TypePersonsJSON * PersonGroupJSON::elementOfPersons(size_t element_num)
  {
    assert(flagHasPersons);
    return storePersons[element_num];
  }

const PersonGroupJSON::TypePersonsJSON * PersonGroupJSON::elementOfPersons(size_t element_num) const
  {
    assert(flagHasPersons);
    return storePersons[element_num];
  }

std::vector< PersonGroupJSON::TypePersonsJSON * > PersonGroupJSON::getPersons(void)
  {
    assert(flagHasPersons);
    return storePersons;
  }

const std::vector< PersonGroupJSON::TypePersonsJSON * > PersonGroupJSON::getPersons(void) const
  {
    assert(flagHasPersons);
    return storePersons;
  }

PersonGroupJSON::TypePersonsJSON *PersonGroupJSON::TypePersonsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePersonsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePersonsJSON>, TypePersonsJSON *, bool> generator("Type TypePersons", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PersonGroupJSON *PersonGroupJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PersonGroupJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PersonGroupJSON>, PersonGroupJSON *, bool> generator("Type PersonGroup", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
