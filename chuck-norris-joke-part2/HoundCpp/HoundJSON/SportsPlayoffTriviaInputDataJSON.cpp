/* file "SportsPlayoffTriviaInputDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffTriviaInputDataJSON.h"

#include "SportsPlayoffTriviaInputDataJSON.h"


SportsPlayoffTriviaInputDataJSON::TypeType::TypeType(void)
  {
  }

SportsPlayoffTriviaInputDataJSON::TypeType::TypeType(const TypeType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayoffTriviaInputDataJSON::TypeType::TypeType(TypeTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayoffTriviaInputDataJSON::TypeType::operator==(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeType::operator!=(const TypeType &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayoffTriviaInputDataJSON::TypeType::operator<(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeType::operator>(const TypeType &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeType::operator>=(const TypeType &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayoffTriviaInputDataJSON::TypeType::operator<=(const TypeType &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayoffTriviaInputDataJSON::TypeTypeKnownValues SportsPlayoffTriviaInputDataJSON::stringToType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "ountOfOutcomesBySpecificTeam") == 0)
                return Type_CountOfOutcomesBySpecificTeam;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "eriesInformation") == 0)
                return Type_SeriesInformation;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "eamWithHighestOutcomeCount") == 0)
                return Type_TeamWithHighestOutcomeCount;
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "earOfOutcomeBySpecificTeam") == 0)
                return Type_YearOfOutcomeBySpecificTeam;
            break;
        default:
            break;
      }
    return Type__none;
  }

const char *SportsPlayoffTriviaInputDataJSON::stringFromType(TypeTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Type_CountOfOutcomesBySpecificTeam:
            return "CountOfOutcomesBySpecificTeam";
        case Type_TeamWithHighestOutcomeCount:
            return "TeamWithHighestOutcomeCount";
        case Type_YearOfOutcomeBySpecificTeam:
            return "YearOfOutcomeBySpecificTeam";
        case Type_SeriesInformation:
            return "SeriesInformation";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayoffTriviaInputDataJSON::TypeOutcome::TypeOutcome(void)
  {
  }

SportsPlayoffTriviaInputDataJSON::TypeOutcome::TypeOutcome(const TypeOutcome &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayoffTriviaInputDataJSON::TypeOutcome::TypeOutcome(TypeOutcomeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayoffTriviaInputDataJSON::TypeOutcome::operator==(const TypeOutcome &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeOutcome::operator!=(const TypeOutcome &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayoffTriviaInputDataJSON::TypeOutcome::operator<(const TypeOutcome &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeOutcome::operator>(const TypeOutcome &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeOutcome::operator>=(const TypeOutcome &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayoffTriviaInputDataJSON::TypeOutcome::operator<=(const TypeOutcome &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayoffTriviaInputDataJSON::TypeOutcomeKnownValues SportsPlayoffTriviaInputDataJSON::stringToOutcome(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ppeared") == 0)
                return Outcome_Appeared;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "aced") == 0)
                return Outcome_Faced;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ost") == 0)
                return Outcome_Lost;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "on") == 0)
                return Outcome_Won;
            break;
        default:
            break;
      }
    return Outcome__none;
  }

const char *SportsPlayoffTriviaInputDataJSON::stringFromOutcome(TypeOutcomeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Outcome_Won:
            return "Won";
        case Outcome_Lost:
            return "Lost";
        case Outcome_Appeared:
            return "Appeared";
        case Outcome_Faced:
            return "Faced";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayoffTriviaInputDataJSON::TypeError::TypeError(void)
  {
  }

SportsPlayoffTriviaInputDataJSON::TypeError::TypeError(const TypeError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayoffTriviaInputDataJSON::TypeError::TypeError(TypeErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayoffTriviaInputDataJSON::TypeError::operator==(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeError::operator!=(const TypeError &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayoffTriviaInputDataJSON::TypeError::operator<(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeError::operator>(const TypeError &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayoffTriviaInputDataJSON::TypeError::operator>=(const TypeError &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayoffTriviaInputDataJSON::TypeError::operator<=(const TypeError &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayoffTriviaInputDataJSON::TypeErrorKnownValues SportsPlayoffTriviaInputDataJSON::stringToError(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "ataIncomplete") == 0)
                return Error_DataIncomplete;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "layoffTypeUnknown") == 0)
                return Error_PlayoffTypeUnknown;
            break;
        case 'Q':
            if (strcmp(&(chars[1]), "ueryIncomplete") == 0)
                return Error_QueryIncomplete;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "eamMismatch") == 0)
                return Error_TeamMismatch;
            break;
        default:
            break;
      }
    return Error__none;
  }

const char *SportsPlayoffTriviaInputDataJSON::stringFromError(TypeErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Error_PlayoffTypeUnknown:
            return "PlayoffTypeUnknown";
        case Error_QueryIncomplete:
            return "QueryIncomplete";
        case Error_TeamMismatch:
            return "TeamMismatch";
        case Error_DataIncomplete:
            return "DataIncomplete";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayoffTriviaInputDataJSON::SportsPlayoffTriviaInputDataJSON(const SportsPlayoffTriviaInputDataJSON &)
  {
    assert(false);
  }

SportsPlayoffTriviaInputDataJSON &SportsPlayoffTriviaInputDataJSON::operator=(const SportsPlayoffTriviaInputDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of SportsPlayoffTriviaInputDataJSON is not a string.");
    TypeType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "ountOfOutcomesBySpecificTeam") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_CountOfOutcomesBySpecificTeam;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "eriesInformation") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_SeriesInformation;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "eamWithHighestOutcomeCount") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_TeamWithHighestOutcomeCount;
                    goto open_enum_is_done;
                  }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "earOfOutcomeBySpecificTeam") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_YearOfOutcomeBySpecificTeam;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setType(the_open_enum);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Outcome of SportsPlayoffTriviaInputDataJSON is not a string.");
    TypeOutcome the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ppeared") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Outcome_Appeared;
                    goto open_enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "aced") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Outcome_Faced;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ost") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Outcome_Lost;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "on") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Outcome_Won;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setOutcome(the_open_enum);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONIsPlayoffsGeneral(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsPlayoffsGeneral of SportsPlayoffTriviaInputDataJSON is not true for false.");
          }
      }
    setIsPlayoffsGeneral(the_bool);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSpecialGameType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONTournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTournamentJSON *convert_classy = SportsTournamentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTournament(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONChronologicalOrdinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ChronologicalOrdinal of SportsPlayoffTriviaInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ChronologicalOrdinal of SportsPlayoffTriviaInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setChronologicalOrdinal(extracted_integer);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsPlayoffTriviaInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsPlayoffTriviaInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONSortOrderReversed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field SortOrderReversed of SportsPlayoffTriviaInputDataJSON is not true for false.");
          }
      }
    setSortOrderReversed(the_bool);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsPlayoffTriviaInputDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Teams of SportsPlayoffTriviaInputDataJSON has too few elements.");
    std::vector< SportsTeamNewJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 1);
    initTeams();
    for (size_t num5 = 0; num5 < vector_Teams1.size(); ++num5)
        appendTeams(vector_Teams1[num5]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Season of SportsPlayoffTriviaInputDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Season of SportsPlayoffTriviaInputDataJSON has too few elements.");
    std::vector< SportsSeasonResolvedJSON * > vector_Season1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Season1[num1] = convert_classy;
      }
    assert(vector_Season1.size() >= 1);
    initSeason();
    for (size_t num6 = 0; num6 < vector_Season1.size(); ++num6)
        appendSeason(vector_Season1[num6]);
    for (size_t num1 = 0; num1 < vector_Season1.size(); ++num1)
      {
        vector_Season1[num1]->remove_reference();
      }
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONOutcomeCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OutcomeCount of SportsPlayoffTriviaInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OutcomeCount of SportsPlayoffTriviaInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOutcomeCount(extracted_integer);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Error of SportsPlayoffTriviaInputDataJSON is not a string.");
    TypeError the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ataIncomplete") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Error_DataIncomplete;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layoffTypeUnknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Error_PlayoffTypeUnknown;
                    goto open_enum_is_done;
                  }
            break;
        case 'Q':
            if (strcmp(&(json_string->getData()[1]), "ueryIncomplete") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Error_QueryIncomplete;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "eamMismatch") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Error_TeamMismatch;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setError(the_open_enum);
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONSeriesIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SeriesIndices of SportsPlayoffTriviaInputDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SeriesIndices of SportsPlayoffTriviaInputDataJSON has too few elements.");
    std::vector< OInteger > vector_SeriesIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field SeriesIndices of SportsPlayoffTriviaInputDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field SeriesIndices of SportsPlayoffTriviaInputDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_SeriesIndices1[num1] = extracted_integer;
      }
    assert(vector_SeriesIndices1.size() >= 1);
    initSeriesIndices();
    for (size_t num7 = 0; num7 < vector_SeriesIndices1.size(); ++num7)
        appendSeriesIndices(vector_SeriesIndices1[num7]);
    for (size_t num1 = 0; num1 < vector_SeriesIndices1.size(); ++num1)
      {
      }
  }

void SportsPlayoffTriviaInputDataJSON::fromJSONGamesIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GamesIndices of SportsPlayoffTriviaInputDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GamesIndices of SportsPlayoffTriviaInputDataJSON has too few elements.");
    std::vector< OInteger > vector_GamesIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field GamesIndices of SportsPlayoffTriviaInputDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field GamesIndices of SportsPlayoffTriviaInputDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_GamesIndices1[num1] = extracted_integer;
      }
    assert(vector_GamesIndices1.size() >= 1);
    initGamesIndices();
    for (size_t num8 = 0; num8 < vector_GamesIndices1.size(); ++num8)
        appendGamesIndices(vector_GamesIndices1[num8]);
    for (size_t num1 = 0; num1 < vector_GamesIndices1.size(); ++num1)
      {
      }
  }

SportsPlayoffTriviaInputDataJSON::SportsPlayoffTriviaInputDataJSON(void) :
        flagHasType(false),
        flagHasOutcome(false),
        flagHasLeague(false),
        flagHasIsPlayoffsGeneral(false),
        flagHasSpecialGameType(false),
        flagHasTournament(false),
        flagHasChronologicalOrdinal(false),
        flagHasRank(false),
        flagHasSortOrderReversed(false),
        flagHasTeams(false),
        flagHasSeason(false),
        flagHasOutcomeCount(false),
        flagHasError(false),
        flagHasSeriesIndices(false),
        flagHasGamesIndices(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffTriviaInputDataJSON::~SportsPlayoffTriviaInputDataJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasSpecialGameType)
      {
        storeSpecialGameType->remove_reference();
      }
    if (flagHasTournament)
      {
        storeTournament->remove_reference();
      }
    if (flagHasTeams)
      {
        for (size_t num7 = 0; num7 < storeTeams.size(); ++num7)
          {
            storeTeams[num7]->remove_reference();
          }
      }
    if (flagHasSeason)
      {
        for (size_t num8 = 0; num8 < storeSeason.size(); ++num8)
          {
            storeSeason[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayoffTriviaInputDataJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsPlayoffTriviaInputDataJSON::TypeType SportsPlayoffTriviaInputDataJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsPlayoffTriviaInputDataJSON::TypeType SportsPlayoffTriviaInputDataJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

const char *SportsPlayoffTriviaInputDataJSON::getTypeAsChars(void) const
  {
    TypeType result = getType();
    if (result.in_known_list)
        return stringFromType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayoffTriviaInputDataJSON::getTypeAsString(void) const
  {
    return getTypeAsChars();
  }

bool SportsPlayoffTriviaInputDataJSON::hasOutcome(void) const
  {
    return flagHasOutcome;
  }

SportsPlayoffTriviaInputDataJSON::TypeOutcome SportsPlayoffTriviaInputDataJSON::getOutcome(void)
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const SportsPlayoffTriviaInputDataJSON::TypeOutcome SportsPlayoffTriviaInputDataJSON::getOutcome(void) const
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const char *SportsPlayoffTriviaInputDataJSON::getOutcomeAsChars(void) const
  {
    TypeOutcome result = getOutcome();
    if (result.in_known_list)
        return stringFromOutcome(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayoffTriviaInputDataJSON::getOutcomeAsString(void) const
  {
    return getOutcomeAsChars();
  }

bool SportsPlayoffTriviaInputDataJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsPlayoffTriviaInputDataJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsPlayoffTriviaInputDataJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsPlayoffTriviaInputDataJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsPlayoffTriviaInputDataJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsPlayoffTriviaInputDataJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsPlayoffTriviaInputDataJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsPlayoffTriviaInputDataJSON::hasIsPlayoffsGeneral(void) const
  {
    return flagHasIsPlayoffsGeneral;
  }

bool SportsPlayoffTriviaInputDataJSON::getIsPlayoffsGeneral(void)
  {
    assert(flagHasIsPlayoffsGeneral);
    return storeIsPlayoffsGeneral;
  }

const bool SportsPlayoffTriviaInputDataJSON::getIsPlayoffsGeneral(void) const
  {
    assert(flagHasIsPlayoffsGeneral);
    return storeIsPlayoffsGeneral;
  }

bool SportsPlayoffTriviaInputDataJSON::hasSpecialGameType(void) const
  {
    return flagHasSpecialGameType;
  }

SportsPlayoffSpecialGameJSON * SportsPlayoffTriviaInputDataJSON::getSpecialGameType(void)
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

const SportsPlayoffSpecialGameJSON * SportsPlayoffTriviaInputDataJSON::getSpecialGameType(void) const
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffTriviaInputDataJSON::getSpecialGameTypeValue(void)
  {
    return getSpecialGameType()->getValue();
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffTriviaInputDataJSON::getSpecialGameTypeValue(void) const
  {
    return getSpecialGameType()->getValue();
  }

const char *SportsPlayoffTriviaInputDataJSON::getSpecialGameTypeAsChars(void) const
  {
    return getSpecialGameType()->getValueAsChars();
  }

std::string SportsPlayoffTriviaInputDataJSON::getSpecialGameTypeAsString(void) const
  {
    return getSpecialGameType()->getValueAsString();
  }

bool SportsPlayoffTriviaInputDataJSON::hasTournament(void) const
  {
    return flagHasTournament;
  }

SportsTournamentJSON * SportsPlayoffTriviaInputDataJSON::getTournament(void)
  {
    assert(flagHasTournament);
    return storeTournament;
  }

const SportsTournamentJSON * SportsPlayoffTriviaInputDataJSON::getTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament;
  }

bool SportsPlayoffTriviaInputDataJSON::hasChronologicalOrdinal(void) const
  {
    return flagHasChronologicalOrdinal;
  }

OInteger SportsPlayoffTriviaInputDataJSON::getChronologicalOrdinal(void)
  {
    assert(flagHasChronologicalOrdinal);
    return storeChronologicalOrdinal;
  }

const OInteger SportsPlayoffTriviaInputDataJSON::getChronologicalOrdinal(void) const
  {
    assert(flagHasChronologicalOrdinal);
    return storeChronologicalOrdinal;
  }

bool SportsPlayoffTriviaInputDataJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsPlayoffTriviaInputDataJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsPlayoffTriviaInputDataJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsPlayoffTriviaInputDataJSON::hasSortOrderReversed(void) const
  {
    return flagHasSortOrderReversed;
  }

bool SportsPlayoffTriviaInputDataJSON::getSortOrderReversed(void)
  {
    assert(flagHasSortOrderReversed);
    return storeSortOrderReversed;
  }

const bool SportsPlayoffTriviaInputDataJSON::getSortOrderReversed(void) const
  {
    assert(flagHasSortOrderReversed);
    return storeSortOrderReversed;
  }

bool SportsPlayoffTriviaInputDataJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsPlayoffTriviaInputDataJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamNewJSON * SportsPlayoffTriviaInputDataJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamNewJSON * SportsPlayoffTriviaInputDataJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamNewJSON * > SportsPlayoffTriviaInputDataJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamNewJSON * > SportsPlayoffTriviaInputDataJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsPlayoffTriviaInputDataJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

size_t SportsPlayoffTriviaInputDataJSON::countOfSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason.size();
  }

SportsSeasonResolvedJSON * SportsPlayoffTriviaInputDataJSON::elementOfSeason(size_t element_num)
  {
    assert(flagHasSeason);
    return storeSeason[element_num];
  }

const SportsSeasonResolvedJSON * SportsPlayoffTriviaInputDataJSON::elementOfSeason(size_t element_num) const
  {
    assert(flagHasSeason);
    return storeSeason[element_num];
  }

std::vector< SportsSeasonResolvedJSON * > SportsPlayoffTriviaInputDataJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const std::vector< SportsSeasonResolvedJSON * > SportsPlayoffTriviaInputDataJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsPlayoffTriviaInputDataJSON::hasOutcomeCount(void) const
  {
    return flagHasOutcomeCount;
  }

OInteger SportsPlayoffTriviaInputDataJSON::getOutcomeCount(void)
  {
    assert(flagHasOutcomeCount);
    return storeOutcomeCount;
  }

const OInteger SportsPlayoffTriviaInputDataJSON::getOutcomeCount(void) const
  {
    assert(flagHasOutcomeCount);
    return storeOutcomeCount;
  }

bool SportsPlayoffTriviaInputDataJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsPlayoffTriviaInputDataJSON::TypeError SportsPlayoffTriviaInputDataJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsPlayoffTriviaInputDataJSON::TypeError SportsPlayoffTriviaInputDataJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

const char *SportsPlayoffTriviaInputDataJSON::getErrorAsChars(void) const
  {
    TypeError result = getError();
    if (result.in_known_list)
        return stringFromError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayoffTriviaInputDataJSON::getErrorAsString(void) const
  {
    return getErrorAsChars();
  }

bool SportsPlayoffTriviaInputDataJSON::hasSeriesIndices(void) const
  {
    return flagHasSeriesIndices;
  }

size_t SportsPlayoffTriviaInputDataJSON::countOfSeriesIndices(void) const
  {
    assert(flagHasSeriesIndices);
    return storeSeriesIndices.size();
  }

OInteger SportsPlayoffTriviaInputDataJSON::elementOfSeriesIndices(size_t element_num)
  {
    assert(flagHasSeriesIndices);
    return storeSeriesIndices[element_num];
  }

const OInteger SportsPlayoffTriviaInputDataJSON::elementOfSeriesIndices(size_t element_num) const
  {
    assert(flagHasSeriesIndices);
    return storeSeriesIndices[element_num];
  }

std::vector< OInteger > SportsPlayoffTriviaInputDataJSON::getSeriesIndices(void)
  {
    assert(flagHasSeriesIndices);
    return storeSeriesIndices;
  }

const std::vector< OInteger > SportsPlayoffTriviaInputDataJSON::getSeriesIndices(void) const
  {
    assert(flagHasSeriesIndices);
    return storeSeriesIndices;
  }

bool SportsPlayoffTriviaInputDataJSON::hasGamesIndices(void) const
  {
    return flagHasGamesIndices;
  }

size_t SportsPlayoffTriviaInputDataJSON::countOfGamesIndices(void) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices.size();
  }

OInteger SportsPlayoffTriviaInputDataJSON::elementOfGamesIndices(size_t element_num)
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices[element_num];
  }

const OInteger SportsPlayoffTriviaInputDataJSON::elementOfGamesIndices(size_t element_num) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices[element_num];
  }

std::vector< OInteger > SportsPlayoffTriviaInputDataJSON::getGamesIndices(void)
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices;
  }

const std::vector< OInteger > SportsPlayoffTriviaInputDataJSON::getGamesIndices(void) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices;
  }

char SportsPlayoffTriviaInputDataJSON::Generator::lowerBoundRank[] = "1";
char SportsPlayoffTriviaInputDataJSON::Generator::lowerBoundOutcomeCount[] = "-1";
char SportsPlayoffTriviaInputDataJSON::Generator::lowerBoundSeriesIndices[] = "0";
char SportsPlayoffTriviaInputDataJSON::Generator::lowerBoundGamesIndices[] = "0";
SportsPlayoffTriviaInputDataJSON *SportsPlayoffTriviaInputDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffTriviaInputDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaInputDataJSON>, SportsPlayoffTriviaInputDataJSON *, bool> generator("Type SportsPlayoffTriviaInputData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
