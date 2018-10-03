/* file "SportsOlympicsMedalStandingsQueryTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsQueryTypeJSON.h"

#include "SportsOlympicsMedalStandingsQueryTypeJSON.h"


SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsMedalStandingsQueryTypeJSON::TypeValueKnownValues SportsOlympicsMedalStandingsQueryTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'O':
            if (strncmp(&(chars[1]), "rganization", 11) == 0)
              {
                switch ((unsigned char)(chars[12]))
                  {
                    case 'M':
                        if (strcmp(&(chars[13]), "edalCount") == 0)
                            return Value_OrganizationMedalCount;
                        break;
                    case 'R':
                        if (strcmp(&(chars[13]), "ank") == 0)
                            return Value_OrganizationRank;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "howStandings") == 0)
                return Value_ShowStandings;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "hichOrganizationInRank") == 0)
                return Value_WhichOrganizationInRank;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsMedalStandingsQueryTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_ShowStandings:
            return "ShowStandings";
        case Value_OrganizationRank:
            return "OrganizationRank";
        case Value_OrganizationMedalCount:
            return "OrganizationMedalCount";
        case Value_WhichOrganizationInRank:
            return "WhichOrganizationInRank";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsMedalStandingsQueryTypeJSON::SportsOlympicsMedalStandingsQueryTypeJSON(const SportsOlympicsMedalStandingsQueryTypeJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsQueryTypeJSON &SportsOlympicsMedalStandingsQueryTypeJSON::operator=(const SportsOlympicsMedalStandingsQueryTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalStandingsQueryTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsMedalStandingsQueryTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'O':
            if (strncmp(&(json_string->getData()[1]), "rganization", 11) == 0)
              {
                switch ((unsigned char)(json_string->getData()[12]))
                  {
                    case 'M':
                        if (strcmp(&(json_string->getData()[13]), "edalCount") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_OrganizationMedalCount;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strcmp(&(json_string->getData()[13]), "ank") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_OrganizationRank;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "howStandings") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ShowStandings;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "hichOrganizationInRank") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_WhichOrganizationInRank;
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

SportsOlympicsMedalStandingsQueryTypeJSON::SportsOlympicsMedalStandingsQueryTypeJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsMedalStandingsQueryTypeJSON::SportsOlympicsMedalStandingsQueryTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsMedalStandingsQueryTypeJSON::SportsOlympicsMedalStandingsQueryTypeJSON(const char *init_value) :
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

SportsOlympicsMedalStandingsQueryTypeJSON::SportsOlympicsMedalStandingsQueryTypeJSON(std::string init_value) :
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

SportsOlympicsMedalStandingsQueryTypeJSON::SportsOlympicsMedalStandingsQueryTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsMedalStandingsQueryTypeJSON::~SportsOlympicsMedalStandingsQueryTypeJSON(void)
  {
  }

bool SportsOlympicsMedalStandingsQueryTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue SportsOlympicsMedalStandingsQueryTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue SportsOlympicsMedalStandingsQueryTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsMedalStandingsQueryTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsMedalStandingsQueryTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsMedalStandingsQueryTypeJSON *SportsOlympicsMedalStandingsQueryTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsQueryTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsQueryTypeJSON>, SportsOlympicsMedalStandingsQueryTypeJSON *, bool> generator("Type SportsOlympicsMedalStandingsQueryType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
