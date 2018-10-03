/* file "SportsSeasonTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsSeasonTypeJSON.h"

#include "SportsSeasonTypeJSON.h"


SportsSeasonTypeJSON::TypeValue::TypeValue(void)
  {
  }

SportsSeasonTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsSeasonTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsSeasonTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsSeasonTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsSeasonTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsSeasonTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsSeasonTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsSeasonTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsSeasonTypeJSON::TypeValueKnownValues SportsSeasonTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'R':
                    if (strcmp(&(chars[2]), "E") == 0)
                        return Value_PRE;
                    break;
                case 'S':
                    if (strcmp(&(chars[2]), "T") == 0)
                        return Value_PST;
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            if (strcmp(&(chars[1]), "EG") == 0)
                return Value_REG;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsSeasonTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_REG:
            return "REG";
        case Value_PST:
            return "PST";
        case Value_PRE:
            return "PRE";
        default:
            assert(false);
            return NULL;
      }
  }

SportsSeasonTypeJSON::SportsSeasonTypeJSON(const SportsSeasonTypeJSON &)
  {
    assert(false);
  }

SportsSeasonTypeJSON &SportsSeasonTypeJSON::operator=(const SportsSeasonTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsSeasonTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsSeasonTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'R':
                    if (strcmp(&(json_string->getData()[2]), "E") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_PRE;
                            goto open_enum_is_done;
                          }
                    break;
                case 'S':
                    if (strcmp(&(json_string->getData()[2]), "T") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_PST;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "EG") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_REG;
                    goto open_enum_is_done;
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

SportsSeasonTypeJSON::SportsSeasonTypeJSON(void) :
        flagHasValue(false)
  {
  }

SportsSeasonTypeJSON::SportsSeasonTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsSeasonTypeJSON::SportsSeasonTypeJSON(const char *init_value) :
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

SportsSeasonTypeJSON::SportsSeasonTypeJSON(std::string init_value) :
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

SportsSeasonTypeJSON::SportsSeasonTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsSeasonTypeJSON::~SportsSeasonTypeJSON(void)
  {
  }

bool SportsSeasonTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsSeasonTypeJSON::TypeValue SportsSeasonTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsSeasonTypeJSON::TypeValue SportsSeasonTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsSeasonTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsSeasonTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsSeasonTypeJSON *SportsSeasonTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsSeasonTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsSeasonTypeJSON>, SportsSeasonTypeJSON *, bool> generator("Type SportsSeasonType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
