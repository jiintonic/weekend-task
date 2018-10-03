/* file "CommunicationTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CommunicationTypeJSON.h"

#include "CommunicationTypeJSON.h"


CommunicationTypeJSON::TypeValue CommunicationTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "mail") == 0)
                return Value_Email;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "MS") == 0)
                return Value_SMS;
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

const char *CommunicationTypeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_Email:
            return "Email";
        case Value_SMS:
            return "SMS";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

CommunicationTypeJSON::CommunicationTypeJSON(const CommunicationTypeJSON &)
  {
    assert(false);
  }

CommunicationTypeJSON &CommunicationTypeJSON::operator=(const CommunicationTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CommunicationTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of CommunicationTypeJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "mail") == 0)
                  {
                    the_enum = Value_Email;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "MS") == 0)
                  {
                    the_enum = Value_SMS;
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
    throw("The value for field Value of CommunicationTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

CommunicationTypeJSON::CommunicationTypeJSON(void) :
        flagHasValue(false)
  {
  }

CommunicationTypeJSON::CommunicationTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

CommunicationTypeJSON::CommunicationTypeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

CommunicationTypeJSON::CommunicationTypeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

CommunicationTypeJSON::~CommunicationTypeJSON(void)
  {
  }

bool CommunicationTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

CommunicationTypeJSON::TypeValue CommunicationTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const CommunicationTypeJSON::TypeValue CommunicationTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *CommunicationTypeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string CommunicationTypeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

CommunicationTypeJSON *CommunicationTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CommunicationTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CommunicationTypeJSON>, CommunicationTypeJSON *, bool> generator("Type CommunicationType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
