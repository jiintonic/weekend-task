/* file "IncludeExcludeStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IncludeExcludeStateJSON.h"

#include "IncludeExcludeStateJSON.h"


IncludeExcludeStateJSON::TypeValue IncludeExcludeStateJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "xclude") == 0)
                return Value_Exclude;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nclude") == 0)
                return Value_Include;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *IncludeExcludeStateJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_Include:
            return "Include";
        case Value_Exclude:
            return "Exclude";
        default:
            assert(false);
            return NULL;
      }
  }

IncludeExcludeStateJSON::IncludeExcludeStateJSON(const IncludeExcludeStateJSON &)
  {
    assert(false);
  }

IncludeExcludeStateJSON &IncludeExcludeStateJSON::operator=(const IncludeExcludeStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void IncludeExcludeStateJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of IncludeExcludeStateJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "xclude") == 0)
                  {
                    the_enum = Value_Exclude;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nclude") == 0)
                  {
                    the_enum = Value_Include;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of IncludeExcludeStateJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

IncludeExcludeStateJSON::IncludeExcludeStateJSON(void) :
        flagHasValue(false)
  {
  }

IncludeExcludeStateJSON::IncludeExcludeStateJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

IncludeExcludeStateJSON::IncludeExcludeStateJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

IncludeExcludeStateJSON::IncludeExcludeStateJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

IncludeExcludeStateJSON::~IncludeExcludeStateJSON(void)
  {
  }

bool IncludeExcludeStateJSON::hasValue(void) const
  {
    return flagHasValue;
  }

IncludeExcludeStateJSON::TypeValue IncludeExcludeStateJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const IncludeExcludeStateJSON::TypeValue IncludeExcludeStateJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *IncludeExcludeStateJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string IncludeExcludeStateJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

IncludeExcludeStateJSON *IncludeExcludeStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IncludeExcludeStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IncludeExcludeStateJSON>, IncludeExcludeStateJSON *, bool> generator("Type IncludeExcludeState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
