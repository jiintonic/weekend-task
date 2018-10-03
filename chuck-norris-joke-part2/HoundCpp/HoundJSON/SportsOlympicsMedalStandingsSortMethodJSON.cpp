/* file "SportsOlympicsMedalStandingsSortMethodJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsSortMethodJSON.h"

#include "SportsOlympicsMedalStandingsSortMethodJSON.h"


SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsMedalStandingsSortMethodJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsMedalStandingsSortMethodJSON::TypeValueKnownValues SportsOlympicsMedalStandingsSortMethodJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "ronzeMedals") == 0)
                return Value_BronzeMedals;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "efaultIOC") == 0)
                return Value_DefaultIOC;
            break;
        case 'G':
            if (strcmp(&(chars[1]), "oldMedals") == 0)
                return Value_GoldMedals;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ilverMedals") == 0)
                return Value_SilverMedals;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "otalMedals") == 0)
                return Value_TotalMedals;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsMedalStandingsSortMethodJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_DefaultIOC:
            return "DefaultIOC";
        case Value_TotalMedals:
            return "TotalMedals";
        case Value_GoldMedals:
            return "GoldMedals";
        case Value_SilverMedals:
            return "SilverMedals";
        case Value_BronzeMedals:
            return "BronzeMedals";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsMedalStandingsSortMethodJSON::SportsOlympicsMedalStandingsSortMethodJSON(const SportsOlympicsMedalStandingsSortMethodJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsSortMethodJSON &SportsOlympicsMedalStandingsSortMethodJSON::operator=(const SportsOlympicsMedalStandingsSortMethodJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalStandingsSortMethodJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsMedalStandingsSortMethodJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "ronzeMedals") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_BronzeMedals;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "efaultIOC") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_DefaultIOC;
                    goto open_enum_is_done;
                  }
            break;
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "oldMedals") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_GoldMedals;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ilverMedals") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_SilverMedals;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "otalMedals") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_TotalMedals;
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

SportsOlympicsMedalStandingsSortMethodJSON::SportsOlympicsMedalStandingsSortMethodJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsMedalStandingsSortMethodJSON::SportsOlympicsMedalStandingsSortMethodJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsMedalStandingsSortMethodJSON::SportsOlympicsMedalStandingsSortMethodJSON(const char *init_value) :
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

SportsOlympicsMedalStandingsSortMethodJSON::SportsOlympicsMedalStandingsSortMethodJSON(std::string init_value) :
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

SportsOlympicsMedalStandingsSortMethodJSON::SportsOlympicsMedalStandingsSortMethodJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsMedalStandingsSortMethodJSON::~SportsOlympicsMedalStandingsSortMethodJSON(void)
  {
  }

bool SportsOlympicsMedalStandingsSortMethodJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsSortMethodJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsSortMethodJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsMedalStandingsSortMethodJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsMedalStandingsSortMethodJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsMedalStandingsSortMethodJSON *SportsOlympicsMedalStandingsSortMethodJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsSortMethodJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsSortMethodJSON>, SportsOlympicsMedalStandingsSortMethodJSON *, bool> generator("Type SportsOlympicsMedalStandingsSortMethod", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
