/* file "EmailContactResultFieldTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailContactResultFieldTypeJSON.h"

#include "EmailContactResultFieldTypeJSON.h"


EmailContactResultFieldTypeJSON::TypeValue EmailContactResultFieldTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "cc") == 0)
                return Value_Bcc;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "c") == 0)
                return Value_Cc;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "o") == 0)
                return Value_To;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Value_Unknown;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *EmailContactResultFieldTypeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_To:
            return "To";
        case Value_Cc:
            return "Cc";
        case Value_Bcc:
            return "Bcc";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

EmailContactResultFieldTypeJSON::EmailContactResultFieldTypeJSON(const EmailContactResultFieldTypeJSON &)
  {
    assert(false);
  }

EmailContactResultFieldTypeJSON &EmailContactResultFieldTypeJSON::operator=(const EmailContactResultFieldTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailContactResultFieldTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of EmailContactResultFieldTypeJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "cc") == 0)
                  {
                    the_enum = Value_Bcc;
                    goto enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "c") == 0)
                  {
                    the_enum = Value_Cc;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "o") == 0)
                  {
                    the_enum = Value_To;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = Value_Unknown;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of EmailContactResultFieldTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

EmailContactResultFieldTypeJSON::EmailContactResultFieldTypeJSON(void) :
        flagHasValue(false)
  {
  }

EmailContactResultFieldTypeJSON::EmailContactResultFieldTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

EmailContactResultFieldTypeJSON::EmailContactResultFieldTypeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

EmailContactResultFieldTypeJSON::EmailContactResultFieldTypeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

EmailContactResultFieldTypeJSON::~EmailContactResultFieldTypeJSON(void)
  {
  }

bool EmailContactResultFieldTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

EmailContactResultFieldTypeJSON::TypeValue EmailContactResultFieldTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const EmailContactResultFieldTypeJSON::TypeValue EmailContactResultFieldTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *EmailContactResultFieldTypeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string EmailContactResultFieldTypeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

EmailContactResultFieldTypeJSON *EmailContactResultFieldTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailContactResultFieldTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailContactResultFieldTypeJSON>, EmailContactResultFieldTypeJSON *, bool> generator("Type EmailContactResultFieldType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
