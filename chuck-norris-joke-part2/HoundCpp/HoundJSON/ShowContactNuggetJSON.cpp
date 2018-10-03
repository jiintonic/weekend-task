/* file "ShowContactNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowContactNuggetJSON.h"

#include "ShowContactNuggetJSON.h"


ShowContactNuggetJSON::TypeRequestedFieldsJSON::TypeField ShowContactNuggetJSON::TypeRequestedFieldsJSON::stringToField(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "mail") == 0)
                return Field_Email;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "hone") == 0)
                return Field_Phone;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "treet") == 0)
                return Field_Street;
            break;
        default:
            break;
      }
    throw("The value for field `Field' is not one of the legal values.");
  }

const char *ShowContactNuggetJSON::TypeRequestedFieldsJSON::stringFromField(TypeField the_enum)
  {
    switch (the_enum)
      {
        case Field_Phone:
            return "Phone";
        case Field_Email:
            return "Email";
        case Field_Street:
            return "Street";
        default:
            assert(false);
            return NULL;
      }
  }

ShowContactNuggetJSON::TypeRequestedFieldsJSON::TypeRequestedFieldsJSON(const TypeRequestedFieldsJSON &)
  {
    assert(false);
  }

ShowContactNuggetJSON::TypeRequestedFieldsJSON &ShowContactNuggetJSON::TypeRequestedFieldsJSON::operator=(const TypeRequestedFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowContactNuggetJSON::TypeRequestedFieldsJSON::fromJSONField(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Field of TypeRequestedFieldsJSON is not a string.");
    TypeField the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "mail") == 0)
                  {
                    the_enum = Field_Email;
                    goto enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "hone") == 0)
                  {
                    the_enum = Field_Phone;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "treet") == 0)
                  {
                    the_enum = Field_Street;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Field of TypeRequestedFieldsJSON is not one of the legal strings.");
  enum_is_done:;
    setField(the_enum);
  }

void ShowContactNuggetJSON::TypeRequestedFieldsJSON::fromJSONCategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Category of TypeRequestedFieldsJSON is not a string.");
    setCategory(std::string(json_string->getData()));
  }

ShowContactNuggetJSON::TypeRequestedFieldsJSON::TypeRequestedFieldsJSON(void) :
        flagHasField(false),
        flagHasCategory(false)
  {
    extraIndex = create_string_index();
  }

ShowContactNuggetJSON::TypeRequestedFieldsJSON::~TypeRequestedFieldsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ShowContactNuggetJSON::TypeRequestedFieldsJSON::hasField(void) const
  {
    return flagHasField;
  }

ShowContactNuggetJSON::TypeRequestedFieldsJSON::TypeField ShowContactNuggetJSON::TypeRequestedFieldsJSON::getField(void)
  {
    assert(flagHasField);
    return storeField;
  }

const ShowContactNuggetJSON::TypeRequestedFieldsJSON::TypeField ShowContactNuggetJSON::TypeRequestedFieldsJSON::getField(void) const
  {
    assert(flagHasField);
    return storeField;
  }

const char *ShowContactNuggetJSON::TypeRequestedFieldsJSON::getFieldAsChars(void) const
  {
    return stringFromField(getField());
  }

std::string ShowContactNuggetJSON::TypeRequestedFieldsJSON::getFieldAsString(void) const
  {
    return stringFromField(getField());
  }

bool ShowContactNuggetJSON::TypeRequestedFieldsJSON::hasCategory(void) const
  {
    return flagHasCategory;
  }

std::string ShowContactNuggetJSON::TypeRequestedFieldsJSON::getCategory(void)
  {
    assert(flagHasCategory);
    return storeCategory;
  }

const std::string ShowContactNuggetJSON::TypeRequestedFieldsJSON::getCategory(void) const
  {
    assert(flagHasCategory);
    return storeCategory;
  }

ShowContactNuggetJSON::ShowContactNuggetJSON(const ShowContactNuggetJSON &)
  {
    assert(false);
  }

ShowContactNuggetJSON &ShowContactNuggetJSON::operator=(const ShowContactNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowContactNuggetJSON::extraContactsToJSON(void) const
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

JSONValue *ShowContactNuggetJSON::extraRequestedFieldsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_RequestedFields = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeRequestedFields.size(); ++num2)
      {
        JSONValueHandler handler_RequestedFields;
        storeRequestedFields[num2]->write_as_json(&handler_RequestedFields);
        handler_RequestedFields.result->add_reference();
        generated_array_2_RequestedFields->appendComponent(handler_RequestedFields.result);
        handler_RequestedFields.result->remove_reference();
      }
    return generated_array_2_RequestedFields;
  }

void ShowContactNuggetJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of ShowContactNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Contacts of ShowContactNuggetJSON has too few elements.");
    std::vector< OneContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Contacts1[num1] = convert_classy;
      }
    assert(vector_Contacts1.size() >= 1);
    initContacts();
    for (size_t num3 = 0; num3 < vector_Contacts1.size(); ++num3)
        appendContacts(vector_Contacts1[num3]);
    for (size_t num1 = 0; num1 < vector_Contacts1.size(); ++num1)
      {
        vector_Contacts1[num1]->remove_reference();
      }
  }

void ShowContactNuggetJSON::fromJSONRequestedFields(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequestedFields of ShowContactNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field RequestedFields of ShowContactNuggetJSON has too few elements.");
    std::vector< TypeRequestedFieldsJSON * > vector_RequestedFields1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeRequestedFieldsJSON *convert_classy = TypeRequestedFieldsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RequestedFields1[num1] = convert_classy;
      }
    assert(vector_RequestedFields1.size() >= 1);
    initRequestedFields();
    for (size_t num4 = 0; num4 < vector_RequestedFields1.size(); ++num4)
        appendRequestedFields(vector_RequestedFields1[num4]);
    for (size_t num1 = 0; num1 < vector_RequestedFields1.size(); ++num1)
      {
        vector_RequestedFields1[num1]->remove_reference();
      }
  }

ShowContactNuggetJSON::ShowContactNuggetJSON(void) :
        flagHasContacts(false),
        flagHasRequestedFields(false)
  {
    extraIndex = create_string_index();
  }

ShowContactNuggetJSON::~ShowContactNuggetJSON(void)
  {
    if (flagHasContacts)
      {
        for (size_t num7 = 0; num7 < storeContacts.size(); ++num7)
          {
            storeContacts[num7]->remove_reference();
          }
      }
    if (flagHasRequestedFields)
      {
        for (size_t num8 = 0; num8 < storeRequestedFields.size(); ++num8)
          {
            storeRequestedFields[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowContactNuggetJSON::getNuggetKind(void) const
  {
    return "ShowContact";
  }

bool ShowContactNuggetJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t ShowContactNuggetJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

OneContactJSON * ShowContactNuggetJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const OneContactJSON * ShowContactNuggetJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< OneContactJSON * > ShowContactNuggetJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< OneContactJSON * > ShowContactNuggetJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

bool ShowContactNuggetJSON::hasRequestedFields(void) const
  {
    return flagHasRequestedFields;
  }

size_t ShowContactNuggetJSON::countOfRequestedFields(void) const
  {
    assert(flagHasRequestedFields);
    return storeRequestedFields.size();
  }

ShowContactNuggetJSON::TypeRequestedFieldsJSON * ShowContactNuggetJSON::elementOfRequestedFields(size_t element_num)
  {
    assert(flagHasRequestedFields);
    return storeRequestedFields[element_num];
  }

const ShowContactNuggetJSON::TypeRequestedFieldsJSON * ShowContactNuggetJSON::elementOfRequestedFields(size_t element_num) const
  {
    assert(flagHasRequestedFields);
    return storeRequestedFields[element_num];
  }

std::vector< ShowContactNuggetJSON::TypeRequestedFieldsJSON * > ShowContactNuggetJSON::getRequestedFields(void)
  {
    assert(flagHasRequestedFields);
    return storeRequestedFields;
  }

const std::vector< ShowContactNuggetJSON::TypeRequestedFieldsJSON * > ShowContactNuggetJSON::getRequestedFields(void) const
  {
    assert(flagHasRequestedFields);
    return storeRequestedFields;
  }

ShowContactNuggetJSON::TypeRequestedFieldsJSON *ShowContactNuggetJSON::TypeRequestedFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeRequestedFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeRequestedFieldsJSON>, TypeRequestedFieldsJSON *, bool> generator("Type TypeRequestedFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowContactNuggetJSON *ShowContactNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowContactNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowContactNuggetJSON>, ShowContactNuggetJSON *, bool> generator("Type ShowContactNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
