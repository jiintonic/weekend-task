/* file "SportsOlympicsBasicAttributeErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeErrorJSON.h"

#include "SportsOlympicsBasicAttributeErrorJSON.h"


SportsOlympicsBasicAttributeErrorJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsBasicAttributeErrorJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsBasicAttributeErrorJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsBasicAttributeErrorJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsBasicAttributeErrorJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsBasicAttributeErrorJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsBasicAttributeErrorJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsBasicAttributeErrorJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsBasicAttributeErrorJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsBasicAttributeErrorJSON::TypeValueKnownValues SportsOlympicsBasicAttributeErrorJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "ateUnavailable") == 0)
                return Value_DateUnavailable;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ocationUnavailable") == 0)
                return Value_LocationUnavailable;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "oGamesFound") == 0)
                return Value_NoGamesFound;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsBasicAttributeErrorJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_DateUnavailable:
            return "DateUnavailable";
        case Value_LocationUnavailable:
            return "LocationUnavailable";
        case Value_NoGamesFound:
            return "NoGamesFound";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsBasicAttributeErrorJSON::SportsOlympicsBasicAttributeErrorJSON(const SportsOlympicsBasicAttributeErrorJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeErrorJSON &SportsOlympicsBasicAttributeErrorJSON::operator=(const SportsOlympicsBasicAttributeErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsBasicAttributeErrorJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsBasicAttributeErrorJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ateUnavailable") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_DateUnavailable;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ocationUnavailable") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_LocationUnavailable;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "oGamesFound") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_NoGamesFound;
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

SportsOlympicsBasicAttributeErrorJSON::SportsOlympicsBasicAttributeErrorJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsBasicAttributeErrorJSON::SportsOlympicsBasicAttributeErrorJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsBasicAttributeErrorJSON::SportsOlympicsBasicAttributeErrorJSON(const char *init_value) :
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

SportsOlympicsBasicAttributeErrorJSON::SportsOlympicsBasicAttributeErrorJSON(std::string init_value) :
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

SportsOlympicsBasicAttributeErrorJSON::SportsOlympicsBasicAttributeErrorJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsBasicAttributeErrorJSON::~SportsOlympicsBasicAttributeErrorJSON(void)
  {
  }

bool SportsOlympicsBasicAttributeErrorJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsBasicAttributeErrorJSON::TypeValue SportsOlympicsBasicAttributeErrorJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsBasicAttributeErrorJSON::TypeValue SportsOlympicsBasicAttributeErrorJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsBasicAttributeErrorJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsBasicAttributeErrorJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsBasicAttributeErrorJSON *SportsOlympicsBasicAttributeErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeErrorJSON>, SportsOlympicsBasicAttributeErrorJSON *, bool> generator("Type SportsOlympicsBasicAttributeError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
