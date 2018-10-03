/* file "SportsStandingsQueryTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsQueryTypeJSON.h"

#include "SportsStandingsQueryTypeJSON.h"


SportsStandingsQueryTypeJSON::TypeValue::TypeValue(void)
  {
  }

SportsStandingsQueryTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStandingsQueryTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStandingsQueryTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStandingsQueryTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsStandingsQueryTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStandingsQueryTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsStandingsQueryTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsStandingsQueryTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsStandingsQueryTypeJSON::TypeValueKnownValues SportsStandingsQueryTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "ivisionTeams") == 0)
                return Value_DivisionTeams;
            break;
        case 'G':
            if (strcmp(&(chars[1]), "amesLeftInRegularSeason") == 0)
                return Value_GamesLeftInRegularSeason;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eadingTeam") == 0)
                return Value_LeadingTeam;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "howStandings") == 0)
                return Value_ShowStandings;
            break;
        case 'T':
            if (strncmp(&(chars[1]), "eam", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'C':
                        if (strcmp(&(chars[5]), "linchStatus") == 0)
                            return Value_TeamClinchStatus;
                        break;
                    case 'D':
                        if (strncmp(&(chars[5]), "ivision", 7) == 0)
                          {
                            switch ((unsigned char)(chars[12]))
                              {
                                case 0:
                                    return Value_TeamDivision;
                                case 'T':
                                    if (strcmp(&(chars[13]), "eams") == 0)
                                        return Value_TeamDivisionTeams;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'G':
                        if (strcmp(&(chars[5]), "amesBehind") == 0)
                            return Value_TeamGamesBehind;
                        break;
                    case 'L':
                        if (strcmp(&(chars[5]), "astTen") == 0)
                            return Value_TeamLastTen;
                        break;
                    case 'R':
                        if (strcmp(&(chars[5]), "ank") == 0)
                            return Value_TeamRank;
                        break;
                    case 'S':
                        if (strcmp(&(chars[5]), "treak") == 0)
                            return Value_TeamStreak;
                        break;
                    case 'W':
                        if (strncmp(&(chars[5]), "in", 2) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 'n':
                                    if (strcmp(&(chars[8]), "ingPercentage") == 0)
                                        return Value_TeamWinningPercentage;
                                    break;
                                case 's':
                                    if (strcmp(&(chars[8]), "Losses") == 0)
                                        return Value_TeamWinsLosses;
                                    break;
                                default:
                                    break;
                              }
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
    return Value__none;
  }

const char *SportsStandingsQueryTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_ShowStandings:
            return "ShowStandings";
        case Value_TeamRank:
            return "TeamRank";
        case Value_TeamGamesBehind:
            return "TeamGamesBehind";
        case Value_LeadingTeam:
            return "LeadingTeam";
        case Value_TeamWinsLosses:
            return "TeamWinsLosses";
        case Value_TeamWinningPercentage:
            return "TeamWinningPercentage";
        case Value_TeamStreak:
            return "TeamStreak";
        case Value_TeamLastTen:
            return "TeamLastTen";
        case Value_TeamClinchStatus:
            return "TeamClinchStatus";
        case Value_TeamDivision:
            return "TeamDivision";
        case Value_DivisionTeams:
            return "DivisionTeams";
        case Value_GamesLeftInRegularSeason:
            return "GamesLeftInRegularSeason";
        case Value_TeamDivisionTeams:
            return "TeamDivisionTeams";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStandingsQueryTypeJSON::SportsStandingsQueryTypeJSON(const SportsStandingsQueryTypeJSON &)
  {
    assert(false);
  }

SportsStandingsQueryTypeJSON &SportsStandingsQueryTypeJSON::operator=(const SportsStandingsQueryTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsQueryTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsStandingsQueryTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ivisionTeams") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_DivisionTeams;
                    goto open_enum_is_done;
                  }
            break;
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "amesLeftInRegularSeason") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_GamesLeftInRegularSeason;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eadingTeam") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_LeadingTeam;
                    goto open_enum_is_done;
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
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "eam", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'C':
                        if (strcmp(&(json_string->getData()[5]), "linchStatus") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TeamClinchStatus;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strncmp(&(json_string->getData()[5]), "ivision", 7) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[12]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_TeamDivision;
                                        goto open_enum_is_done;
                                      }
                                case 'T':
                                    if (strcmp(&(json_string->getData()[13]), "eams") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_TeamDivisionTeams;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'G':
                        if (strcmp(&(json_string->getData()[5]), "amesBehind") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TeamGamesBehind;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[5]), "astTen") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TeamLastTen;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strcmp(&(json_string->getData()[5]), "ank") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TeamRank;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[5]), "treak") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TeamStreak;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strncmp(&(json_string->getData()[5]), "in", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 'n':
                                    if (strcmp(&(json_string->getData()[8]), "ingPercentage") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_TeamWinningPercentage;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 's':
                                    if (strcmp(&(json_string->getData()[8]), "Losses") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_TeamWinsLosses;
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

SportsStandingsQueryTypeJSON::SportsStandingsQueryTypeJSON(void) :
        flagHasValue(false)
  {
  }

SportsStandingsQueryTypeJSON::SportsStandingsQueryTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsStandingsQueryTypeJSON::SportsStandingsQueryTypeJSON(const char *init_value) :
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

SportsStandingsQueryTypeJSON::SportsStandingsQueryTypeJSON(std::string init_value) :
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

SportsStandingsQueryTypeJSON::SportsStandingsQueryTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsStandingsQueryTypeJSON::~SportsStandingsQueryTypeJSON(void)
  {
  }

bool SportsStandingsQueryTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsStandingsQueryTypeJSON::TypeValue SportsStandingsQueryTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsStandingsQueryTypeJSON::TypeValue SportsStandingsQueryTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsStandingsQueryTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStandingsQueryTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsStandingsQueryTypeJSON *SportsStandingsQueryTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsQueryTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsQueryTypeJSON>, SportsStandingsQueryTypeJSON *, bool> generator("Type SportsStandingsQueryType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
