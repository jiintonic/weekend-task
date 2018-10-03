/* file "IconJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IconJSON.h"

#include "IconJSON.h"


IconJSON::TypeValue IconJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ngry") == 0)
                return Value_Angry;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "offee") == 0)
                return Value_Coffee;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "appy") == 0)
                return Value_Happy;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "eutral") == 0)
                return Value_Neutral;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ad") == 0)
                return Value_Sad;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *IconJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_Neutral:
            return "Neutral";
        case Value_Happy:
            return "Happy";
        case Value_Sad:
            return "Sad";
        case Value_Angry:
            return "Angry";
        case Value_Coffee:
            return "Coffee";
        default:
            assert(false);
            return NULL;
      }
  }

IconJSON::IconJSON(const IconJSON &)
  {
    assert(false);
  }

IconJSON &IconJSON::operator=(const IconJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void IconJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of IconJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ngry") == 0)
                  {
                    the_enum = Value_Angry;
                    goto enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "offee") == 0)
                  {
                    the_enum = Value_Coffee;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "appy") == 0)
                  {
                    the_enum = Value_Happy;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "eutral") == 0)
                  {
                    the_enum = Value_Neutral;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ad") == 0)
                  {
                    the_enum = Value_Sad;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of IconJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

IconJSON::IconJSON(void) :
        flagHasValue(false)
  {
  }

IconJSON::IconJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

IconJSON::IconJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

IconJSON::IconJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

IconJSON::~IconJSON(void)
  {
  }

bool IconJSON::hasValue(void) const
  {
    return flagHasValue;
  }

IconJSON::TypeValue IconJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const IconJSON::TypeValue IconJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *IconJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string IconJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

IconJSON *IconJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IconJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IconJSON>, IconJSON *, bool> generator("Type Icon", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
