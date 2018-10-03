/* file "SportsOlympicsSeasonJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsSeasonJSON.h"

#include "SportsOlympicsSeasonJSON.h"


SportsOlympicsSeasonJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsSeasonJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsSeasonJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsSeasonJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsSeasonJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsSeasonJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsSeasonJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsSeasonJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsSeasonJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsSeasonJSON::TypeValueKnownValues SportsOlympicsSeasonJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strcmp(&(chars[1]), "ummer") == 0)
                return Value_Summer;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "inter") == 0)
                return Value_Winter;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsSeasonJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Summer:
            return "Summer";
        case Value_Winter:
            return "Winter";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsSeasonJSON::SportsOlympicsSeasonJSON(const SportsOlympicsSeasonJSON &)
  {
    assert(false);
  }

SportsOlympicsSeasonJSON &SportsOlympicsSeasonJSON::operator=(const SportsOlympicsSeasonJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsSeasonJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsSeasonJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ummer") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Summer;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "inter") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Winter;
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

SportsOlympicsSeasonJSON::SportsOlympicsSeasonJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsSeasonJSON::SportsOlympicsSeasonJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsSeasonJSON::SportsOlympicsSeasonJSON(const char *init_value) :
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

SportsOlympicsSeasonJSON::SportsOlympicsSeasonJSON(std::string init_value) :
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

SportsOlympicsSeasonJSON::SportsOlympicsSeasonJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsSeasonJSON::~SportsOlympicsSeasonJSON(void)
  {
  }

bool SportsOlympicsSeasonJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsSeasonJSON::TypeValue SportsOlympicsSeasonJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsSeasonJSON::TypeValue SportsOlympicsSeasonJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsSeasonJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsSeasonJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsSeasonJSON *SportsOlympicsSeasonJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsSeasonJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsSeasonJSON>, SportsOlympicsSeasonJSON *, bool> generator("Type SportsOlympicsSeason", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
