/* file "EmotionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmotionJSON.h"

#include "EmotionJSON.h"


EmotionJSON::TypeValue EmotionJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ngry") == 0)
                return Value_Angry;
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

const char *EmotionJSON::stringFromValue(TypeValue the_enum)
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
        default:
            assert(false);
            return NULL;
      }
  }

EmotionJSON::EmotionJSON(const EmotionJSON &)
  {
    assert(false);
  }

EmotionJSON &EmotionJSON::operator=(const EmotionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmotionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of EmotionJSON is not a string.");
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
    throw("The value for field Value of EmotionJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

EmotionJSON::EmotionJSON(void) :
        flagHasValue(false)
  {
  }

EmotionJSON::EmotionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

EmotionJSON::EmotionJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

EmotionJSON::EmotionJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

EmotionJSON::~EmotionJSON(void)
  {
  }

bool EmotionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

EmotionJSON::TypeValue EmotionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const EmotionJSON::TypeValue EmotionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *EmotionJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string EmotionJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

EmotionJSON *EmotionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmotionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmotionJSON>, EmotionJSON *, bool> generator("Type Emotion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
