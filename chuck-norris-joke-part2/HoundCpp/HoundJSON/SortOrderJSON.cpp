/* file "SortOrderJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SortOrderJSON.h"

#include "SortOrderJSON.h"


SortOrderJSON::TypeValue::TypeValue(void)
  {
  }

SortOrderJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SortOrderJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SortOrderJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SortOrderJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SortOrderJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SortOrderJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SortOrderJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SortOrderJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SortOrderJSON::TypeValueKnownValues SortOrderJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "scending") == 0)
                return Value_Ascending;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "escending") == 0)
                return Value_Descending;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Value_Unknown;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SortOrderJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Ascending:
            return "Ascending";
        case Value_Descending:
            return "Descending";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

SortOrderJSON::SortOrderJSON(const SortOrderJSON &)
  {
    assert(false);
  }

SortOrderJSON &SortOrderJSON::operator=(const SortOrderJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SortOrderJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SortOrderJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "scending") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Ascending;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "escending") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Descending;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Unknown;
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

SortOrderJSON::SortOrderJSON(void) :
        flagHasValue(false)
  {
  }

SortOrderJSON::SortOrderJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SortOrderJSON::SortOrderJSON(const char *init_value) :
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

SortOrderJSON::SortOrderJSON(std::string init_value) :
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

SortOrderJSON::SortOrderJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SortOrderJSON::~SortOrderJSON(void)
  {
  }

bool SortOrderJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SortOrderJSON::TypeValue SortOrderJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SortOrderJSON::TypeValue SortOrderJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SortOrderJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SortOrderJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SortOrderJSON *SortOrderJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SortOrderJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SortOrderJSON>, SortOrderJSON *, bool> generator("Type SortOrder", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
