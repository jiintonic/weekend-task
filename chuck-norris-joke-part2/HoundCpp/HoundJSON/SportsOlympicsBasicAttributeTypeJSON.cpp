/* file "SportsOlympicsBasicAttributeTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeTypeJSON.h"

#include "SportsOlympicsBasicAttributeTypeJSON.h"


SportsOlympicsBasicAttributeTypeJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsBasicAttributeTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsBasicAttributeTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsBasicAttributeTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsBasicAttributeTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsBasicAttributeTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsBasicAttributeTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsBasicAttributeTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsBasicAttributeTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsBasicAttributeTypeJSON::TypeValueKnownValues SportsOlympicsBasicAttributeTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "losingCeremonyDate") == 0)
                return Value_ClosingCeremonyDate;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "ate") == 0)
                return Value_Date;
            break;
        case 'G':
            if (strncmp(&(chars[1]), "amesIn", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case 'L':
                        if (strcmp(&(chars[8]), "ocation") == 0)
                            return Value_GamesInLocation;
                        break;
                    case 'Y':
                        if (strcmp(&(chars[8]), "ear") == 0)
                            return Value_GamesInYear;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ocation") == 0)
                return Value_Location;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "peningCeremonyDate") == 0)
                return Value_OpeningCeremonyDate;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsBasicAttributeTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Location:
            return "Location";
        case Value_Date:
            return "Date";
        case Value_OpeningCeremonyDate:
            return "OpeningCeremonyDate";
        case Value_ClosingCeremonyDate:
            return "ClosingCeremonyDate";
        case Value_GamesInLocation:
            return "GamesInLocation";
        case Value_GamesInYear:
            return "GamesInYear";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsBasicAttributeTypeJSON::SportsOlympicsBasicAttributeTypeJSON(const SportsOlympicsBasicAttributeTypeJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeTypeJSON &SportsOlympicsBasicAttributeTypeJSON::operator=(const SportsOlympicsBasicAttributeTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsBasicAttributeTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsBasicAttributeTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "losingCeremonyDate") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ClosingCeremonyDate;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ate") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Date;
                    goto open_enum_is_done;
                  }
            break;
        case 'G':
            if (strncmp(&(json_string->getData()[1]), "amesIn", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case 'L':
                        if (strcmp(&(json_string->getData()[8]), "ocation") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_GamesInLocation;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'Y':
                        if (strcmp(&(json_string->getData()[8]), "ear") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_GamesInYear;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ocation") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Location;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "peningCeremonyDate") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_OpeningCeremonyDate;
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

SportsOlympicsBasicAttributeTypeJSON::SportsOlympicsBasicAttributeTypeJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsBasicAttributeTypeJSON::SportsOlympicsBasicAttributeTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsBasicAttributeTypeJSON::SportsOlympicsBasicAttributeTypeJSON(const char *init_value) :
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

SportsOlympicsBasicAttributeTypeJSON::SportsOlympicsBasicAttributeTypeJSON(std::string init_value) :
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

SportsOlympicsBasicAttributeTypeJSON::SportsOlympicsBasicAttributeTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsBasicAttributeTypeJSON::~SportsOlympicsBasicAttributeTypeJSON(void)
  {
  }

bool SportsOlympicsBasicAttributeTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsBasicAttributeTypeJSON::TypeValue SportsOlympicsBasicAttributeTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsBasicAttributeTypeJSON::TypeValue SportsOlympicsBasicAttributeTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsBasicAttributeTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsBasicAttributeTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsBasicAttributeTypeJSON *SportsOlympicsBasicAttributeTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeTypeJSON>, SportsOlympicsBasicAttributeTypeJSON *, bool> generator("Type SportsOlympicsBasicAttributeType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
