/* file "SMSDisambiguateOriginJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSDisambiguateOriginJSON.h"

#include "SMSDisambiguateOriginJSON.h"


SMSDisambiguateOriginJSON::TypeValue SMSDisambiguateOriginJSON::stringToValue(const char *chars)
  {
    if (strncmp(chars, "SMS", 3) == 0)
      {
        switch ((unsigned char)(chars[3]))
          {
            case 'C':
                if (strcmp(&(chars[4]), "reate") == 0)
                    return Value_SMSCreate;
                break;
            case 'E':
                if (strcmp(&(chars[4]), "ditRecipients") == 0)
                    return Value_SMSEditRecipients;
                break;
            default:
                break;
          }
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *SMSDisambiguateOriginJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_SMSCreate:
            return "SMSCreate";
        case Value_SMSEditRecipients:
            return "SMSEditRecipients";
        default:
            assert(false);
            return NULL;
      }
  }

SMSDisambiguateOriginJSON::SMSDisambiguateOriginJSON(const SMSDisambiguateOriginJSON &)
  {
    assert(false);
  }

SMSDisambiguateOriginJSON &SMSDisambiguateOriginJSON::operator=(const SMSDisambiguateOriginJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSDisambiguateOriginJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SMSDisambiguateOriginJSON is not a string.");
    TypeValue the_enum;
    if (strncmp(json_string->getData(), "SMS", 3) == 0)
      {
        switch ((unsigned char)(json_string->getData()[3]))
          {
            case 'C':
                if (strcmp(&(json_string->getData()[4]), "reate") == 0)
                      {
                        the_enum = Value_SMSCreate;
                        goto enum_is_done;
                      }
                break;
            case 'E':
                if (strcmp(&(json_string->getData()[4]), "ditRecipients") == 0)
                      {
                        the_enum = Value_SMSEditRecipients;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field Value of SMSDisambiguateOriginJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

SMSDisambiguateOriginJSON::SMSDisambiguateOriginJSON(void) :
        flagHasValue(false)
  {
  }

SMSDisambiguateOriginJSON::SMSDisambiguateOriginJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SMSDisambiguateOriginJSON::SMSDisambiguateOriginJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

SMSDisambiguateOriginJSON::SMSDisambiguateOriginJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

SMSDisambiguateOriginJSON::~SMSDisambiguateOriginJSON(void)
  {
  }

bool SMSDisambiguateOriginJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SMSDisambiguateOriginJSON::TypeValue SMSDisambiguateOriginJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SMSDisambiguateOriginJSON::TypeValue SMSDisambiguateOriginJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SMSDisambiguateOriginJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string SMSDisambiguateOriginJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

SMSDisambiguateOriginJSON *SMSDisambiguateOriginJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSDisambiguateOriginJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguateOriginJSON>, SMSDisambiguateOriginJSON *, bool> generator("Type SMSDisambiguateOrigin", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
