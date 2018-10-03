/* file "SportsTournamentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsTournamentJSON.h"

#include "SportsTournamentJSON.h"


SportsTournamentJSON::TypeTournamentName::TypeTournamentName(void)
  {
  }

SportsTournamentJSON::TypeTournamentName::TypeTournamentName(const TypeTournamentName &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsTournamentJSON::TypeTournamentName::TypeTournamentName(TypeTournamentNameKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsTournamentJSON::TypeTournamentName::operator==(const TypeTournamentName &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsTournamentJSON::TypeTournamentName::operator!=(const TypeTournamentName &other) const
  {
    return !(operator==(other));
  }

bool SportsTournamentJSON::TypeTournamentName::operator<(const TypeTournamentName &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsTournamentJSON::TypeTournamentName::operator>(const TypeTournamentName &other) const
  {
    return other.operator<(*this);
  }

bool SportsTournamentJSON::TypeTournamentName::operator>=(const TypeTournamentName &other) const
  {
    return !(operator<(other));
  }

bool SportsTournamentJSON::TypeTournamentName::operator<=(const TypeTournamentName &other) const
  {
    return !(other.operator<(*this));
  }

SportsTournamentJSON::TypeTournamentNameKnownValues SportsTournamentJSON::stringToTournamentName(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'N':
            if (strncmp(&(chars[1]), "CAAMB", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'C':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'B':
                                if (strcmp(&(chars[8]), "I") == 0)
                                    return TournamentName_NCAAMBCBI;
                                break;
                            case 'I':
                                if (strcmp(&(chars[8]), "T") == 0)
                                    return TournamentName_NCAAMBCIT;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'N':
                        if (strcmp(&(chars[7]), "IT") == 0)
                            return TournamentName_NCAAMBNIT;
                        break;
                    case 'T':
                        if (strcmp(&(chars[7]), "ournament") == 0)
                            return TournamentName_NCAAMBTournament;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "occerInternationalMensWorldCup") == 0)
                return TournamentName_SoccerInternationalMensWorldCup;
            break;
        default:
            break;
      }
    return TournamentName__none;
  }

const char *SportsTournamentJSON::stringFromTournamentName(TypeTournamentNameKnownValues the_enum)
  {
    switch (the_enum)
      {
        case TournamentName_NCAAMBTournament:
            return "NCAAMBTournament";
        case TournamentName_NCAAMBCIT:
            return "NCAAMBCIT";
        case TournamentName_NCAAMBCBI:
            return "NCAAMBCBI";
        case TournamentName_NCAAMBNIT:
            return "NCAAMBNIT";
        case TournamentName_SoccerInternationalMensWorldCup:
            return "SoccerInternationalMensWorldCup";
        default:
            assert(false);
            return NULL;
      }
  }

SportsTournamentJSON::SportsTournamentJSON(const SportsTournamentJSON &)
  {
    assert(false);
  }

SportsTournamentJSON &SportsTournamentJSON::operator=(const SportsTournamentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsTournamentJSON::fromJSONTournamentName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TournamentName of SportsTournamentJSON is not a string.");
    TypeTournamentName the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "CAAMB", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'C':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'B':
                                if (strcmp(&(json_string->getData()[8]), "I") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = TournamentName_NCAAMBCBI;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'I':
                                if (strcmp(&(json_string->getData()[8]), "T") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = TournamentName_NCAAMBCIT;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'N':
                        if (strcmp(&(json_string->getData()[7]), "IT") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = TournamentName_NCAAMBNIT;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[7]), "ournament") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = TournamentName_NCAAMBTournament;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "occerInternationalMensWorldCup") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TournamentName_SoccerInternationalMensWorldCup;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setTournamentName(the_open_enum);
  }

SportsTournamentJSON::SportsTournamentJSON(void) :
        flagHasTournamentName(false)
  {
    extraIndex = create_string_index();
  }

SportsTournamentJSON::~SportsTournamentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsTournamentJSON::hasTournamentName(void) const
  {
    return flagHasTournamentName;
  }

SportsTournamentJSON::TypeTournamentName SportsTournamentJSON::getTournamentName(void)
  {
    assert(flagHasTournamentName);
    return storeTournamentName;
  }

const SportsTournamentJSON::TypeTournamentName SportsTournamentJSON::getTournamentName(void) const
  {
    assert(flagHasTournamentName);
    return storeTournamentName;
  }

const char *SportsTournamentJSON::getTournamentNameAsChars(void) const
  {
    TypeTournamentName result = getTournamentName();
    if (result.in_known_list)
        return stringFromTournamentName(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsTournamentJSON::getTournamentNameAsString(void) const
  {
    return getTournamentNameAsChars();
  }

SportsTournamentJSON *SportsTournamentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsTournamentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool> generator("Type SportsTournament", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
