/* file "SportsOlympicsMedalJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalJSON.h"

#include "SportsOlympicsMedalJSON.h"


SportsOlympicsMedalJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsMedalJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsMedalJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsMedalJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsMedalJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsMedalJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsMedalJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsMedalJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsMedalJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsMedalJSON::TypeValueKnownValues SportsOlympicsMedalJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "ronze") == 0)
                return Value_Bronze;
            break;
        case 'G':
            if (strcmp(&(chars[1]), "old") == 0)
                return Value_Gold;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ilver") == 0)
                return Value_Silver;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsMedalJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Gold:
            return "Gold";
        case Value_Silver:
            return "Silver";
        case Value_Bronze:
            return "Bronze";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsMedalJSON::SportsOlympicsMedalJSON(const SportsOlympicsMedalJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalJSON &SportsOlympicsMedalJSON::operator=(const SportsOlympicsMedalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsMedalJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "ronze") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Bronze;
                    goto open_enum_is_done;
                  }
            break;
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "old") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Gold;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ilver") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Silver;
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

SportsOlympicsMedalJSON::SportsOlympicsMedalJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsMedalJSON::SportsOlympicsMedalJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsMedalJSON::SportsOlympicsMedalJSON(const char *init_value) :
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

SportsOlympicsMedalJSON::SportsOlympicsMedalJSON(std::string init_value) :
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

SportsOlympicsMedalJSON::SportsOlympicsMedalJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsMedalJSON::~SportsOlympicsMedalJSON(void)
  {
  }

bool SportsOlympicsMedalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsMedalJSON::TypeValue SportsOlympicsMedalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsMedalJSON::TypeValue SportsOlympicsMedalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsMedalJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsMedalJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsMedalJSON *SportsOlympicsMedalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalJSON>, SportsOlympicsMedalJSON *, bool> generator("Type SportsOlympicsMedal", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
