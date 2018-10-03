/* file "SportsOlympicsAthleteGenderJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsAthleteGenderJSON.h"

#include "SportsOlympicsAthleteGenderJSON.h"


SportsOlympicsAthleteGenderJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsAthleteGenderJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsAthleteGenderJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsAthleteGenderJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsAthleteGenderJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsAthleteGenderJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsAthleteGenderJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsAthleteGenderJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsAthleteGenderJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsAthleteGenderJSON::TypeValueKnownValues SportsOlympicsAthleteGenderJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "emale") == 0)
                return Value_Female;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "ale") == 0)
                return Value_Male;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsAthleteGenderJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Female:
            return "Female";
        case Value_Male:
            return "Male";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsAthleteGenderJSON::SportsOlympicsAthleteGenderJSON(const SportsOlympicsAthleteGenderJSON &)
  {
    assert(false);
  }

SportsOlympicsAthleteGenderJSON &SportsOlympicsAthleteGenderJSON::operator=(const SportsOlympicsAthleteGenderJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAthleteGenderJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsAthleteGenderJSON is not a string.");
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
            if (strcmp(&(json_string->getData()[1]), "ale") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Male;
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

SportsOlympicsAthleteGenderJSON::SportsOlympicsAthleteGenderJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsAthleteGenderJSON::SportsOlympicsAthleteGenderJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsAthleteGenderJSON::SportsOlympicsAthleteGenderJSON(const char *init_value) :
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

SportsOlympicsAthleteGenderJSON::SportsOlympicsAthleteGenderJSON(std::string init_value) :
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

SportsOlympicsAthleteGenderJSON::SportsOlympicsAthleteGenderJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsAthleteGenderJSON::~SportsOlympicsAthleteGenderJSON(void)
  {
  }

bool SportsOlympicsAthleteGenderJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsAthleteGenderJSON::TypeValue SportsOlympicsAthleteGenderJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsAthleteGenderJSON::TypeValue SportsOlympicsAthleteGenderJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsAthleteGenderJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsAthleteGenderJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsAthleteGenderJSON *SportsOlympicsAthleteGenderJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsAthleteGenderJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAthleteGenderJSON>, SportsOlympicsAthleteGenderJSON *, bool> generator("Type SportsOlympicsAthleteGender", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
