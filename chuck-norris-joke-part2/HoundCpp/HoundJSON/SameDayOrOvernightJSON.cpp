/* file "SameDayOrOvernightJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SameDayOrOvernightJSON.h"

#include "SameDayOrOvernightJSON.h"


SameDayOrOvernightJSON::TypeValue::TypeValue(void)
  {
  }

SameDayOrOvernightJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SameDayOrOvernightJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SameDayOrOvernightJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SameDayOrOvernightJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SameDayOrOvernightJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SameDayOrOvernightJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SameDayOrOvernightJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SameDayOrOvernightJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SameDayOrOvernightJSON::TypeValueKnownValues SameDayOrOvernightJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'I':
            if (strcmp(&(chars[1]), "ncludeAll") == 0)
                return Value_IncludeAll;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "vernight") == 0)
                return Value_Overnight;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ameDay") == 0)
                return Value_SameDay;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SameDayOrOvernightJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_SameDay:
            return "SameDay";
        case Value_Overnight:
            return "Overnight";
        case Value_IncludeAll:
            return "IncludeAll";
        default:
            assert(false);
            return NULL;
      }
  }

SameDayOrOvernightJSON::SameDayOrOvernightJSON(const SameDayOrOvernightJSON &)
  {
    assert(false);
  }

SameDayOrOvernightJSON &SameDayOrOvernightJSON::operator=(const SameDayOrOvernightJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SameDayOrOvernightJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SameDayOrOvernightJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "ncludeAll") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_IncludeAll;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "vernight") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Overnight;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ameDay") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_SameDay;
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

SameDayOrOvernightJSON::SameDayOrOvernightJSON(void) :
        flagHasValue(false)
  {
  }

SameDayOrOvernightJSON::SameDayOrOvernightJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SameDayOrOvernightJSON::SameDayOrOvernightJSON(const char *init_value) :
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

SameDayOrOvernightJSON::SameDayOrOvernightJSON(std::string init_value) :
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

SameDayOrOvernightJSON::SameDayOrOvernightJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SameDayOrOvernightJSON::~SameDayOrOvernightJSON(void)
  {
  }

bool SameDayOrOvernightJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SameDayOrOvernightJSON::TypeValue SameDayOrOvernightJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SameDayOrOvernightJSON::TypeValue SameDayOrOvernightJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SameDayOrOvernightJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SameDayOrOvernightJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SameDayOrOvernightJSON *SameDayOrOvernightJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SameDayOrOvernightJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SameDayOrOvernightJSON>, SameDayOrOvernightJSON *, bool> generator("Type SameDayOrOvernight", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
