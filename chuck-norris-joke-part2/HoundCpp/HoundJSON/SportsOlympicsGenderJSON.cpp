/* file "SportsOlympicsGenderJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsGenderJSON.h"

#include "SportsOlympicsGenderJSON.h"


SportsOlympicsGenderJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsGenderJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsGenderJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsGenderJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsGenderJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsGenderJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsGenderJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsGenderJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsGenderJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsGenderJSON::TypeValueKnownValues SportsOlympicsGenderJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "emale") == 0)
                return Value_Female;
            break;
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "le") == 0)
                        return Value_Male;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "xed") == 0)
                        return Value_Mixed;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsGenderJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Female:
            return "Female";
        case Value_Male:
            return "Male";
        case Value_Mixed:
            return "Mixed";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsGenderJSON::SportsOlympicsGenderJSON(const SportsOlympicsGenderJSON &)
  {
    assert(false);
  }

SportsOlympicsGenderJSON &SportsOlympicsGenderJSON::operator=(const SportsOlympicsGenderJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsGenderJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsGenderJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "emale") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Female;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "le") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Male;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "xed") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Mixed;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

SportsOlympicsGenderJSON::SportsOlympicsGenderJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsGenderJSON::SportsOlympicsGenderJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsGenderJSON::SportsOlympicsGenderJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsOlympicsGenderJSON::SportsOlympicsGenderJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsOlympicsGenderJSON::SportsOlympicsGenderJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsGenderJSON::~SportsOlympicsGenderJSON(void)
  {
  }

bool SportsOlympicsGenderJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsGenderJSON::TypeValue SportsOlympicsGenderJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsGenderJSON::TypeValue SportsOlympicsGenderJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsGenderJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsGenderJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsGenderJSON *SportsOlympicsGenderJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsGenderJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGenderJSON>, SportsOlympicsGenderJSON *, bool> generator("Type SportsOlympicsGender", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
