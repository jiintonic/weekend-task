/* file "EmailFieldTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailFieldTypeJSON.h"

#include "EmailFieldTypeJSON.h"


EmailFieldTypeJSON::TypeValue EmailFieldTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "llRecipients") == 0)
                return Value_AllRecipients;
            break;
        case 'B':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strcmp(&(chars[2]), "c") == 0)
                        return Value_Bcc;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "dy") == 0)
                        return Value_Body;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            if (strcmp(&(chars[1]), "c") == 0)
                return Value_Cc;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ubject") == 0)
                return Value_Subject;
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

const char *EmailFieldTypeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_To:
            return "To";
        case Value_Cc:
            return "Cc";
        case Value_Bcc:
            return "Bcc";
        case Value_Subject:
            return "Subject";
        case Value_Body:
            return "Body";
        case Value_AllRecipients:
            return "AllRecipients";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

EmailFieldTypeJSON::EmailFieldTypeJSON(const EmailFieldTypeJSON &)
  {
    assert(false);
  }

EmailFieldTypeJSON &EmailFieldTypeJSON::operator=(const EmailFieldTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailFieldTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of EmailFieldTypeJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "llRecipients") == 0)
                  {
                    the_enum = Value_AllRecipients;
                    goto enum_is_done;
                  }
            break;
        case 'B':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strcmp(&(json_string->getData()[2]), "c") == 0)
                          {
                            the_enum = Value_Bcc;
                            goto enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "dy") == 0)
                          {
                            the_enum = Value_Body;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "c") == 0)
                  {
                    the_enum = Value_Cc;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ubject") == 0)
                  {
                    the_enum = Value_Subject;
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
    throw("The value for field Value of EmailFieldTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

EmailFieldTypeJSON::EmailFieldTypeJSON(void) :
        flagHasValue(false)
  {
  }

EmailFieldTypeJSON::EmailFieldTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

EmailFieldTypeJSON::EmailFieldTypeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

EmailFieldTypeJSON::EmailFieldTypeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

EmailFieldTypeJSON::~EmailFieldTypeJSON(void)
  {
  }

bool EmailFieldTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

EmailFieldTypeJSON::TypeValue EmailFieldTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const EmailFieldTypeJSON::TypeValue EmailFieldTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *EmailFieldTypeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string EmailFieldTypeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

EmailFieldTypeJSON *EmailFieldTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailFieldTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailFieldTypeJSON>, EmailFieldTypeJSON *, bool> generator("Type EmailFieldType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
