/* file "SMSContactResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSContactResultJSON.h"

#include "SMSContactResultJSON.h"
#include "SMSContactResultWithAddOrRemoveJSON.h"


SMSContactResultJSON::TypeFieldType SMSContactResultJSON::stringToFieldType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'T':
            if (strcmp(&(chars[1]), "o") == 0)
                return FieldType_To;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return FieldType_Unknown;
            break;
        default:
            break;
      }
    throw("The value for field `FieldType' is not one of the legal values.");
  }

const char *SMSContactResultJSON::stringFromFieldType(TypeFieldType the_enum)
  {
    switch (the_enum)
      {
        case FieldType_To:
            return "To";
        case FieldType_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

SMSContactResultJSON::SMSContactResultJSON(const SMSContactResultJSON &)
  {
    assert(false);
  }

SMSContactResultJSON &SMSContactResultJSON::operator=(const SMSContactResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSContactResultJSON::extraFieldTypeToJSON(void) const
  {
    JSONStringValue *generated_string_FieldType;
    switch (storeFieldType)
      {
        case FieldType_To:
            generated_string_FieldType = new JSONStringValue("To");
            break;
        case FieldType_Unknown:
            generated_string_FieldType = new JSONStringValue("Unknown");
            break;
        default:
            assert(false);
            generated_string_FieldType = NULL;
      }
    return generated_string_FieldType;
  }

JSONValue *SMSContactResultJSON::extraContactsToJSON(void) const
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

void SMSContactResultJSON::fromJSONFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldType of SMSContactResultJSON is not a string.");
    TypeFieldType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "o") == 0)
                  {
                    the_enum = FieldType_To;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = FieldType_Unknown;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field FieldType of SMSContactResultJSON is not one of the legal strings.");
  enum_is_done:;
    setFieldType(the_enum);
  }

void SMSContactResultJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of SMSContactResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SMSContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SMSContactJSON *convert_classy = SMSContactJSON::from_json(json_array1->component(num1), ignore_extras);
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

SMSContactResultJSON::SMSContactResultJSON(void) :
        flagHasFieldType(false),
        flagHasContacts(false)
  {
    extraIndex = create_string_index();
  }

SMSContactResultJSON::~SMSContactResultJSON(void)
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

bool SMSContactResultJSON::hasFieldType(void) const
  {
    return flagHasFieldType;
  }

SMSContactResultJSON::TypeFieldType SMSContactResultJSON::getFieldType(void)
  {
    assert(flagHasFieldType);
    return storeFieldType;
  }

const SMSContactResultJSON::TypeFieldType SMSContactResultJSON::getFieldType(void) const
  {
    assert(flagHasFieldType);
    return storeFieldType;
  }

const char *SMSContactResultJSON::getFieldTypeAsChars(void) const
  {
    return stringFromFieldType(getFieldType());
  }

std::string SMSContactResultJSON::getFieldTypeAsString(void) const
  {
    return stringFromFieldType(getFieldType());
  }

bool SMSContactResultJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t SMSContactResultJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

SMSContactJSON * SMSContactResultJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const SMSContactJSON * SMSContactResultJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< SMSContactJSON * > SMSContactResultJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< SMSContactJSON * > SMSContactResultJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

SMSContactResultJSON *SMSContactResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSContactResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSContactResultJSON>, SMSContactResultJSON *, bool> generator("Type SMSContactResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
