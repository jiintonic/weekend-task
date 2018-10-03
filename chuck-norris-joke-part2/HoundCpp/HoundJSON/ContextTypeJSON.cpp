/* file "ContextTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContextTypeJSON.h"

#include "ContextTypeJSON.h"


ContextTypeJSON::TypeValue ContextTypeJSON::stringToValue(const char *chars)
  {
    if (strncmp(chars, "After", 5) == 0)
      {
        switch ((unsigned char)(chars[5]))
          {
            case 'C':
                if (strcmp(&(chars[6]), "reate") == 0)
                    return Value_AfterCreate;
                break;
            case 'E':
                if (strcmp(&(chars[6]), "ditRecipients") == 0)
                    return Value_AfterEditRecipients;
                break;
            default:
                break;
          }
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *ContextTypeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_AfterCreate:
            return "AfterCreate";
        case Value_AfterEditRecipients:
            return "AfterEditRecipients";
        default:
            assert(false);
            return NULL;
      }
  }

ContextTypeJSON::ContextTypeJSON(const ContextTypeJSON &)
  {
    assert(false);
  }

ContextTypeJSON &ContextTypeJSON::operator=(const ContextTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContextTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of ContextTypeJSON is not a string.");
    TypeValue the_enum;
    if (strncmp(json_string->getData(), "After", 5) == 0)
      {
        switch ((unsigned char)(json_string->getData()[5]))
          {
            case 'C':
                if (strcmp(&(json_string->getData()[6]), "reate") == 0)
                      {
                        the_enum = Value_AfterCreate;
                        goto enum_is_done;
                      }
                break;
            case 'E':
                if (strcmp(&(json_string->getData()[6]), "ditRecipients") == 0)
                      {
                        the_enum = Value_AfterEditRecipients;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field Value of ContextTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

ContextTypeJSON::ContextTypeJSON(void) :
        flagHasValue(false)
  {
  }

ContextTypeJSON::ContextTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

ContextTypeJSON::ContextTypeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

ContextTypeJSON::ContextTypeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

ContextTypeJSON::~ContextTypeJSON(void)
  {
  }

bool ContextTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

ContextTypeJSON::TypeValue ContextTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const ContextTypeJSON::TypeValue ContextTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *ContextTypeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string ContextTypeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

ContextTypeJSON *ContextTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContextTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContextTypeJSON>, ContextTypeJSON *, bool> generator("Type ContextType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
