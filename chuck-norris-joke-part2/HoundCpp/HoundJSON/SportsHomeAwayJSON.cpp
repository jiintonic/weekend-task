/* file "SportsHomeAwayJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsHomeAwayJSON.h"

#include "SportsHomeAwayJSON.h"


SportsHomeAwayJSON::TypeValue::TypeValue(void)
  {
  }

SportsHomeAwayJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsHomeAwayJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsHomeAwayJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsHomeAwayJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsHomeAwayJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsHomeAwayJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsHomeAwayJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsHomeAwayJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsHomeAwayJSON::TypeValueKnownValues SportsHomeAwayJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "way") == 0)
                return Value_Away;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ome") == 0)
                return Value_Home;
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

const char *SportsHomeAwayJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Home:
            return "Home";
        case Value_Away:
            return "Away";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

SportsHomeAwayJSON::SportsHomeAwayJSON(const SportsHomeAwayJSON &)
  {
    assert(false);
  }

SportsHomeAwayJSON &SportsHomeAwayJSON::operator=(const SportsHomeAwayJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsHomeAwayJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsHomeAwayJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "way") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Away;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ome") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Home;
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

SportsHomeAwayJSON::SportsHomeAwayJSON(void) :
        flagHasValue(false)
  {
  }

SportsHomeAwayJSON::SportsHomeAwayJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsHomeAwayJSON::SportsHomeAwayJSON(const char *init_value) :
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

SportsHomeAwayJSON::SportsHomeAwayJSON(std::string init_value) :
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

SportsHomeAwayJSON::SportsHomeAwayJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsHomeAwayJSON::~SportsHomeAwayJSON(void)
  {
  }

bool SportsHomeAwayJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsHomeAwayJSON::TypeValue SportsHomeAwayJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsHomeAwayJSON::TypeValue SportsHomeAwayJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsHomeAwayJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsHomeAwayJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsHomeAwayJSON *SportsHomeAwayJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsHomeAwayJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsHomeAwayJSON>, SportsHomeAwayJSON *, bool> generator("Type SportsHomeAway", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
