/* file "SMSFieldTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSFieldTypeJSON.h"

#include "SMSFieldTypeJSON.h"


SMSFieldTypeJSON::TypeValue SMSFieldTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "llRecipients") == 0)
                return Value_AllRecipients;
            break;
        case 'B':
            if (strcmp(&(chars[1]), "ody") == 0)
                return Value_Body;
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

const char *SMSFieldTypeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_To:
            return "To";
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

SMSFieldTypeJSON::SMSFieldTypeJSON(const SMSFieldTypeJSON &)
  {
    assert(false);
  }

SMSFieldTypeJSON &SMSFieldTypeJSON::operator=(const SMSFieldTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSFieldTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SMSFieldTypeJSON is not a string.");
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
            if (strcmp(&(json_string->getData()[1]), "ody") == 0)
                  {
                    the_enum = Value_Body;
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
    throw("The value for field Value of SMSFieldTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

SMSFieldTypeJSON::SMSFieldTypeJSON(void) :
        flagHasValue(false)
  {
  }

SMSFieldTypeJSON::SMSFieldTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SMSFieldTypeJSON::SMSFieldTypeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

SMSFieldTypeJSON::SMSFieldTypeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

SMSFieldTypeJSON::~SMSFieldTypeJSON(void)
  {
  }

bool SMSFieldTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SMSFieldTypeJSON::TypeValue SMSFieldTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SMSFieldTypeJSON::TypeValue SMSFieldTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SMSFieldTypeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string SMSFieldTypeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

SMSFieldTypeJSON *SMSFieldTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSFieldTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSFieldTypeJSON>, SMSFieldTypeJSON *, bool> generator("Type SMSFieldType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
