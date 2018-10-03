/* file "EmailContactResultActionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailContactResultActionJSON.h"

#include "EmailContactResultActionJSON.h"


EmailContactResultActionJSON::TypeValue EmailContactResultActionJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "DD") == 0)
                return Value_ADD;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "EMOVE") == 0)
                return Value_REMOVE;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "NSPECIFIED") == 0)
                return Value_UNSPECIFIED;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *EmailContactResultActionJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_ADD:
            return "ADD";
        case Value_REMOVE:
            return "REMOVE";
        case Value_UNSPECIFIED:
            return "UNSPECIFIED";
        default:
            assert(false);
            return NULL;
      }
  }

EmailContactResultActionJSON::EmailContactResultActionJSON(const EmailContactResultActionJSON &)
  {
    assert(false);
  }

EmailContactResultActionJSON &EmailContactResultActionJSON::operator=(const EmailContactResultActionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailContactResultActionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of EmailContactResultActionJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "DD") == 0)
                  {
                    the_enum = Value_ADD;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "EMOVE") == 0)
                  {
                    the_enum = Value_REMOVE;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "NSPECIFIED") == 0)
                  {
                    the_enum = Value_UNSPECIFIED;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of EmailContactResultActionJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

EmailContactResultActionJSON::EmailContactResultActionJSON(void) :
        flagHasValue(false)
  {
  }

EmailContactResultActionJSON::EmailContactResultActionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

EmailContactResultActionJSON::EmailContactResultActionJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

EmailContactResultActionJSON::EmailContactResultActionJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

EmailContactResultActionJSON::~EmailContactResultActionJSON(void)
  {
  }

bool EmailContactResultActionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

EmailContactResultActionJSON::TypeValue EmailContactResultActionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const EmailContactResultActionJSON::TypeValue EmailContactResultActionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *EmailContactResultActionJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string EmailContactResultActionJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

EmailContactResultActionJSON *EmailContactResultActionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailContactResultActionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailContactResultActionJSON>, EmailContactResultActionJSON *, bool> generator("Type EmailContactResultAction", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
