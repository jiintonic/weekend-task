/* file "SportsOlympicsEventSchedulesAndResultsQueryTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsQueryTypeJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsQueryTypeJSON.h"


SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValueKnownValues SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strcmp(&(chars[1]), "edalWinners") == 0)
                return Value_MedalWinners;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "esults") == 0)
                return Value_Results;
            break;
        case 'S':
            if (strncmp(&(chars[1]), "chedules", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 0:
                        return Value_Schedules;
                    case 'O':
                        if (strcmp(&(chars[10]), "rResults") == 0)
                            return Value_SchedulesOrResults;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Schedules:
            return "Schedules";
        case Value_SchedulesOrResults:
            return "SchedulesOrResults";
        case Value_Results:
            return "Results";
        case Value_MedalWinners:
            return "MedalWinners";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON &SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::operator=(const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsEventSchedulesAndResultsQueryTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "edalWinners") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_MedalWinners;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "esults") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Results;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "chedules", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Schedules;
                            goto open_enum_is_done;
                          }
                    case 'O':
                        if (strcmp(&(json_string->getData()[10]), "rResults") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_SchedulesOrResults;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
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

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(const char *init_value) :
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

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(std::string init_value) :
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

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::~SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(void)
  {
  }

bool SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryTypeJSON>, SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
