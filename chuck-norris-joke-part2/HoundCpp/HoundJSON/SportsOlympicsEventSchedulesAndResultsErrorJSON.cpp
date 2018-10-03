/* file "SportsOlympicsEventSchedulesAndResultsErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsErrorJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsErrorJSON.h"


SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValueKnownValues SportsOlympicsEventSchedulesAndResultsErrorJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "ataUnavailable") == 0)
                return Value_DataUnavailable;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "oOrganizationInRank") == 0)
                return Value_NoOrganizationInRank;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "cheduleUnavailable") == 0)
                return Value_ScheduleUnavailable;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsEventSchedulesAndResultsErrorJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_DataUnavailable:
            return "DataUnavailable";
        case Value_NoOrganizationInRank:
            return "NoOrganizationInRank";
        case Value_ScheduleUnavailable:
            return "ScheduleUnavailable";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::SportsOlympicsEventSchedulesAndResultsErrorJSON(const SportsOlympicsEventSchedulesAndResultsErrorJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON &SportsOlympicsEventSchedulesAndResultsErrorJSON::operator=(const SportsOlympicsEventSchedulesAndResultsErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsErrorJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsEventSchedulesAndResultsErrorJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ataUnavailable") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_DataUnavailable;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "oOrganizationInRank") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_NoOrganizationInRank;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "cheduleUnavailable") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ScheduleUnavailable;
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

SportsOlympicsEventSchedulesAndResultsErrorJSON::SportsOlympicsEventSchedulesAndResultsErrorJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::SportsOlympicsEventSchedulesAndResultsErrorJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::SportsOlympicsEventSchedulesAndResultsErrorJSON(const char *init_value) :
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

SportsOlympicsEventSchedulesAndResultsErrorJSON::SportsOlympicsEventSchedulesAndResultsErrorJSON(std::string init_value) :
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

SportsOlympicsEventSchedulesAndResultsErrorJSON::SportsOlympicsEventSchedulesAndResultsErrorJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::~SportsOlympicsEventSchedulesAndResultsErrorJSON(void)
  {
  }

bool SportsOlympicsEventSchedulesAndResultsErrorJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue SportsOlympicsEventSchedulesAndResultsErrorJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue SportsOlympicsEventSchedulesAndResultsErrorJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsEventSchedulesAndResultsErrorJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsEventSchedulesAndResultsErrorJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON *SportsOlympicsEventSchedulesAndResultsErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsErrorJSON>, SportsOlympicsEventSchedulesAndResultsErrorJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
