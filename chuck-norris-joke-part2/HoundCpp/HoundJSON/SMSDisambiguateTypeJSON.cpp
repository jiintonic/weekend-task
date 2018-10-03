/* file "SMSDisambiguateTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSDisambiguateTypeJSON.h"

#include "SMSDisambiguateTypeJSON.h"


SMSDisambiguateTypeJSON::TypeValue SMSDisambiguateTypeJSON::stringToValue(const char *chars)
  {
    if (strncmp(chars, "P", 1) == 0)
      {
        switch ((unsigned char)(chars[1]))
          {
            case 'e':
                if (strcmp(&(chars[2]), "rsons") == 0)
                    return Value_Persons;
                break;
            case 'h':
                if (strcmp(&(chars[2]), "oneNumbers") == 0)
                    return Value_PhoneNumbers;
                break;
            default:
                break;
          }
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *SMSDisambiguateTypeJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_Persons:
            return "Persons";
        case Value_PhoneNumbers:
            return "PhoneNumbers";
        default:
            assert(false);
            return NULL;
      }
  }

SMSDisambiguateTypeJSON::SMSDisambiguateTypeJSON(const SMSDisambiguateTypeJSON &)
  {
    assert(false);
  }

SMSDisambiguateTypeJSON &SMSDisambiguateTypeJSON::operator=(const SMSDisambiguateTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSDisambiguateTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SMSDisambiguateTypeJSON is not a string.");
    TypeValue the_enum;
    if (strncmp(json_string->getData(), "P", 1) == 0)
      {
        switch ((unsigned char)(json_string->getData()[1]))
          {
            case 'e':
                if (strcmp(&(json_string->getData()[2]), "rsons") == 0)
                      {
                        the_enum = Value_Persons;
                        goto enum_is_done;
                      }
                break;
            case 'h':
                if (strcmp(&(json_string->getData()[2]), "oneNumbers") == 0)
                      {
                        the_enum = Value_PhoneNumbers;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field Value of SMSDisambiguateTypeJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

SMSDisambiguateTypeJSON::SMSDisambiguateTypeJSON(void) :
        flagHasValue(false)
  {
  }

SMSDisambiguateTypeJSON::SMSDisambiguateTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SMSDisambiguateTypeJSON::SMSDisambiguateTypeJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

SMSDisambiguateTypeJSON::SMSDisambiguateTypeJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

SMSDisambiguateTypeJSON::~SMSDisambiguateTypeJSON(void)
  {
  }

bool SMSDisambiguateTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SMSDisambiguateTypeJSON::TypeValue SMSDisambiguateTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SMSDisambiguateTypeJSON::TypeValue SMSDisambiguateTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SMSDisambiguateTypeJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string SMSDisambiguateTypeJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

SMSDisambiguateTypeJSON *SMSDisambiguateTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSDisambiguateTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguateTypeJSON>, SMSDisambiguateTypeJSON *, bool> generator("Type SMSDisambiguateType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
