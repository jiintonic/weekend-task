/* file "SportsPlayoffTriviaInputDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYOFFTRIVIAINPUTDATAJSON_H
#define SPORTSPLAYOFFTRIVIAINPUTDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsPlayoffSpecialGameJSON.h"
#include "SportsTournamentJSON.h"
#include "SportsTeamNewJSON.h"
#include "SportsSeasonResolvedJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayoffTriviaInputDataJSON : public ReferenceCounted
  {
  public:
    enum TypeTypeKnownValues
      {
        Type_CountOfOutcomesBySpecificTeam,
        Type_TeamWithHighestOutcomeCount,
        Type_YearOfOutcomeBySpecificTeam,
        Type_SeriesInformation,
        Type__none
      };
    struct TypeType
      {
        bool in_known_list;
        std::string string_value;
        TypeTypeKnownValues list_value;

        TypeType(void);
        TypeType(const TypeType &other);
        TypeType(TypeTypeKnownValues other);
        bool  operator==(const TypeType &other) const;
        bool  operator!=(const TypeType &other) const;
        bool  operator<(const TypeType &other) const;
        bool  operator>(const TypeType &other) const;
        bool  operator>=(const TypeType &other) const;
        bool  operator<=(const TypeType &other) const;

      };

    static TypeTypeKnownValues  stringToType(const char *chars);
    static const char * stringFromType(TypeTypeKnownValues the_enum);
    enum TypeOutcomeKnownValues
      {
        Outcome_Won,
        Outcome_Lost,
        Outcome_Appeared,
        Outcome_Faced,
        Outcome__none
      };
    struct TypeOutcome
      {
        bool in_known_list;
        std::string string_value;
        TypeOutcomeKnownValues list_value;

        TypeOutcome(void);
        TypeOutcome(const TypeOutcome &other);
        TypeOutcome(TypeOutcomeKnownValues other);
        bool  operator==(const TypeOutcome &other) const;
        bool  operator!=(const TypeOutcome &other) const;
        bool  operator<(const TypeOutcome &other) const;
        bool  operator>(const TypeOutcome &other) const;
        bool  operator>=(const TypeOutcome &other) const;
        bool  operator<=(const TypeOutcome &other) const;

      };

    static TypeOutcomeKnownValues  stringToOutcome(const char *chars);
    static const char * stringFromOutcome(TypeOutcomeKnownValues the_enum);
    enum TypeErrorKnownValues
      {
        Error_PlayoffTypeUnknown,
        Error_QueryIncomplete,
        Error_TeamMismatch,
        Error_DataIncomplete,
        Error__none
      };
    struct TypeError
      {
        bool in_known_list;
        std::string string_value;
        TypeErrorKnownValues list_value;

        TypeError(void);
        TypeError(const TypeError &other);
        TypeError(TypeErrorKnownValues other);
        bool  operator==(const TypeError &other) const;
        bool  operator!=(const TypeError &other) const;
        bool  operator<(const TypeError &other) const;
        bool  operator>(const TypeError &other) const;
        bool  operator>=(const TypeError &other) const;
        bool  operator<=(const TypeError &other) const;

      };

    static TypeErrorKnownValues  stringToError(const char *chars);
    static const char * stringFromError(TypeErrorKnownValues the_enum);

  private:
    bool flagHasType;
    TypeType storeType;
    bool flagHasOutcome;
    TypeOutcome storeOutcome;
    bool flagHasLeague;
    SportsLeagueCodeJSON * storeLeague;
    bool flagHasIsPlayoffsGeneral;
    bool storeIsPlayoffsGeneral;
    bool flagHasSpecialGameType;
    SportsPlayoffSpecialGameJSON * storeSpecialGameType;
    bool flagHasTournament;
    SportsTournamentJSON * storeTournament;
    bool flagHasChronologicalOrdinal;
    OInteger storeChronologicalOrdinal;
    bool flagHasRank;
    OInteger storeRank;
    bool flagHasSortOrderReversed;
    bool storeSortOrderReversed;
    bool flagHasTeams;
    std::vector< SportsTeamNewJSON * > storeTeams;
    bool flagHasSeason;
    std::vector< SportsSeasonResolvedJSON * > storeSeason;
    bool flagHasOutcomeCount;
    OInteger storeOutcomeCount;
    bool flagHasError;
    TypeError storeError;
    bool flagHasSeriesIndices;
    std::vector< OInteger > storeSeriesIndices;
    bool flagHasGamesIndices;
    std::vector< OInteger > storeGamesIndices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayoffTriviaInputDataJSON(const SportsPlayoffTriviaInputDataJSON &);
    SportsPlayoffTriviaInputDataJSON & operator=(const SportsPlayoffTriviaInputDataJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutcome(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsPlayoffsGeneral(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTournament(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChronologicalOrdinal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortOrderReversed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutcomeCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeriesIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesIndices(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayoffTriviaInputDataJSON(void);
    virtual ~SportsPlayoffTriviaInputDataJSON(void);
    bool  hasType(void) const;
    TypeType  getType(void);
    const TypeType  getType(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasOutcome(void) const;
    TypeOutcome  getOutcome(void);
    const TypeOutcome  getOutcome(void) const;
    const char * getOutcomeAsChars(void) const;
    std::string  getOutcomeAsString(void) const;
    bool  hasLeague(void) const;
    SportsLeagueCodeJSON *  getLeague(void);
    const SportsLeagueCodeJSON *  getLeague(void) const;
    SportsLeagueCodeJSON::TypeValue  getLeagueValue(void);
    const SportsLeagueCodeJSON::TypeValue  getLeagueValue(void) const;
    const char * getLeagueAsChars(void) const;
    std::string  getLeagueAsString(void) const;
    bool  hasIsPlayoffsGeneral(void) const;
    bool  getIsPlayoffsGeneral(void);
    const bool  getIsPlayoffsGeneral(void) const;
    bool  hasSpecialGameType(void) const;
    SportsPlayoffSpecialGameJSON *  getSpecialGameType(void);
    const SportsPlayoffSpecialGameJSON *  getSpecialGameType(void) const;
    SportsPlayoffSpecialGameJSON::TypeValue  getSpecialGameTypeValue(void);
    const SportsPlayoffSpecialGameJSON::TypeValue  getSpecialGameTypeValue(void) const;
    const char * getSpecialGameTypeAsChars(void) const;
    std::string  getSpecialGameTypeAsString(void) const;
    bool  hasTournament(void) const;
    SportsTournamentJSON *  getTournament(void);
    const SportsTournamentJSON *  getTournament(void) const;
    bool  hasChronologicalOrdinal(void) const;
    OInteger  getChronologicalOrdinal(void);
    const OInteger  getChronologicalOrdinal(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;
    bool  hasSortOrderReversed(void) const;
    bool  getSortOrderReversed(void);
    const bool  getSortOrderReversed(void) const;
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamNewJSON *  elementOfTeams(size_t element_num);
    const SportsTeamNewJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamNewJSON * >  getTeams(void);
    const std::vector< SportsTeamNewJSON * >  getTeams(void) const;
    bool  hasSeason(void) const;
    size_t  countOfSeason(void) const;
    SportsSeasonResolvedJSON *  elementOfSeason(size_t element_num);
    const SportsSeasonResolvedJSON *  elementOfSeason(size_t element_num) const;
    std::vector< SportsSeasonResolvedJSON * >  getSeason(void);
    const std::vector< SportsSeasonResolvedJSON * >  getSeason(void) const;
    bool  hasOutcomeCount(void) const;
    OInteger  getOutcomeCount(void);
    const OInteger  getOutcomeCount(void) const;
    bool  hasError(void) const;
    TypeError  getError(void);
    const TypeError  getError(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;
    bool  hasSeriesIndices(void) const;
    size_t  countOfSeriesIndices(void) const;
    OInteger  elementOfSeriesIndices(size_t element_num);
    const OInteger  elementOfSeriesIndices(size_t element_num) const;
    std::vector< OInteger >  getSeriesIndices(void);
    const std::vector< OInteger >  getSeriesIndices(void) const;
    bool  hasGamesIndices(void) const;
    size_t  countOfGamesIndices(void) const;
    OInteger  elementOfGamesIndices(size_t element_num);
    const OInteger  elementOfGamesIndices(size_t element_num) const;
    std::vector< OInteger >  getGamesIndices(void);
    const std::vector< OInteger >  getGamesIndices(void) const;

    virtual size_t extraSportsPlayoffTriviaInputDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayoffTriviaInputDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayoffTriviaInputDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayoffTriviaInputDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayoffTriviaInputDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayoffTriviaInputDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setType(TypeType new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void setType(const char *chars)
      {
        TypeTypeKnownValues known = stringToType(chars);
        TypeType new_value;
        if (known == Type__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setType(new_value);
      }
    void setType(std::string the_string)
      {
        setType(the_string.c_str());
      }
    void setType(TypeTypeKnownValues new_value)
      {
        TypeType new_full_value;
        assert(new_value != Type__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setType(new_full_value);
      }
    void unsetType(void)
      {
        flagHasType = false;
      }
    void setOutcome(TypeOutcome new_value)
      {
        flagHasOutcome = true;
        storeOutcome = new_value;
      }
    void setOutcome(const char *chars)
      {
        TypeOutcomeKnownValues known = stringToOutcome(chars);
        TypeOutcome new_value;
        if (known == Outcome__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setOutcome(new_value);
      }
    void setOutcome(std::string the_string)
      {
        setOutcome(the_string.c_str());
      }
    void setOutcome(TypeOutcomeKnownValues new_value)
      {
        TypeOutcome new_full_value;
        assert(new_value != Outcome__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setOutcome(new_full_value);
      }
    void unsetOutcome(void)
      {
        flagHasOutcome = false;
      }
    void setLeague(SportsLeagueCodeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLeague)
          {
            storeLeague->remove_reference();
          }
        flagHasLeague = true;
        storeLeague = new_value;
      }
    void setLeague(SportsLeagueCodeJSON::TypeValue new_value)
      {
        setLeague(new SportsLeagueCodeJSON(new_value));
      }
    void setLeague(const char *chars)
      {
        SportsLeagueCodeJSON::TypeValueKnownValues known = SportsLeagueCodeJSON::stringToValue(chars);
        SportsLeagueCodeJSON::TypeValue new_value;
        if (known == SportsLeagueCodeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setLeague(new_value);
      }
    void setLeague(std::string the_string)
      {
        setLeague(the_string.c_str());
      }
    void unsetLeague(void)
      {
        if (flagHasLeague)
          {
            storeLeague->remove_reference();
          }
        flagHasLeague = false;
      }
    void setIsPlayoffsGeneral(bool new_value)
      {
        flagHasIsPlayoffsGeneral = true;
        storeIsPlayoffsGeneral = new_value;
      }
    void unsetIsPlayoffsGeneral(void)
      {
        flagHasIsPlayoffsGeneral = false;
      }
    void setSpecialGameType(SportsPlayoffSpecialGameJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSpecialGameType)
          {
            storeSpecialGameType->remove_reference();
          }
        flagHasSpecialGameType = true;
        storeSpecialGameType = new_value;
      }
    void setSpecialGameType(SportsPlayoffSpecialGameJSON::TypeValue new_value)
      {
        setSpecialGameType(new SportsPlayoffSpecialGameJSON(new_value));
      }
    void setSpecialGameType(const char *chars)
      {
        SportsPlayoffSpecialGameJSON::TypeValueKnownValues known = SportsPlayoffSpecialGameJSON::stringToValue(chars);
        SportsPlayoffSpecialGameJSON::TypeValue new_value;
        if (known == SportsPlayoffSpecialGameJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSpecialGameType(new_value);
      }
    void setSpecialGameType(std::string the_string)
      {
        setSpecialGameType(the_string.c_str());
      }
    void unsetSpecialGameType(void)
      {
        if (flagHasSpecialGameType)
          {
            storeSpecialGameType->remove_reference();
          }
        flagHasSpecialGameType = false;
      }
    void setTournament(SportsTournamentJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTournament)
          {
            storeTournament->remove_reference();
          }
        flagHasTournament = true;
        storeTournament = new_value;
      }
    void unsetTournament(void)
      {
        if (flagHasTournament)
          {
            storeTournament->remove_reference();
          }
        flagHasTournament = false;
      }
    void setChronologicalOrdinal(OInteger new_value)
      {
        flagHasChronologicalOrdinal = true;
        storeChronologicalOrdinal = new_value;
      }
    void unsetChronologicalOrdinal(void)
      {
        flagHasChronologicalOrdinal = false;
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < 1)
            throw("The value for field Rank of SportsPlayoffTriviaInputDataJSON is less than the lower bound (1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
      }
    void setSortOrderReversed(bool new_value)
      {
        flagHasSortOrderReversed = true;
        storeSortOrderReversed = new_value;
      }
    void unsetSortOrderReversed(void)
      {
        flagHasSortOrderReversed = false;
      }
    void initTeams(void)
      {
        if (flagHasTeams)
          {
            for (size_t num3 = 0; num3 < storeTeams.size(); ++num3)
              {
                storeTeams[num3]->remove_reference();
              }
          }
        flagHasTeams = true;
        storeTeams.clear();
      }
    void appendTeams(SportsTeamNewJSON * to_append)
      {
        if (!flagHasTeams)
          {
            flagHasTeams = true;
            storeTeams.clear();
          }
        assert(flagHasTeams);
        to_append->add_reference();
        storeTeams.push_back(to_append);
      }
    void unsetTeams(void)
      {
        if (flagHasTeams)
          {
            for (size_t num4 = 0; num4 < storeTeams.size(); ++num4)
              {
                storeTeams[num4]->remove_reference();
              }
          }
        flagHasTeams = false;
        storeTeams.clear();
      }
    void initSeason(void)
      {
        if (flagHasSeason)
          {
            for (size_t num5 = 0; num5 < storeSeason.size(); ++num5)
              {
                storeSeason[num5]->remove_reference();
              }
          }
        flagHasSeason = true;
        storeSeason.clear();
      }
    void appendSeason(SportsSeasonResolvedJSON * to_append)
      {
        if (!flagHasSeason)
          {
            flagHasSeason = true;
            storeSeason.clear();
          }
        assert(flagHasSeason);
        to_append->add_reference();
        storeSeason.push_back(to_append);
      }
    void unsetSeason(void)
      {
        if (flagHasSeason)
          {
            for (size_t num6 = 0; num6 < storeSeason.size(); ++num6)
              {
                storeSeason[num6]->remove_reference();
              }
          }
        flagHasSeason = false;
        storeSeason.clear();
      }
    void setOutcomeCount(OInteger new_value)
      {
        flagHasOutcomeCount = true;
        if (new_value < -1)
            throw("The value for field OutcomeCount of SportsPlayoffTriviaInputDataJSON is less than the lower bound (-1) for that field.");
        storeOutcomeCount = new_value;
      }
    void unsetOutcomeCount(void)
      {
        flagHasOutcomeCount = false;
      }
    void setError(TypeError new_value)
      {
        flagHasError = true;
        storeError = new_value;
      }
    void setError(const char *chars)
      {
        TypeErrorKnownValues known = stringToError(chars);
        TypeError new_value;
        if (known == Error__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setError(new_value);
      }
    void setError(std::string the_string)
      {
        setError(the_string.c_str());
      }
    void setError(TypeErrorKnownValues new_value)
      {
        TypeError new_full_value;
        assert(new_value != Error__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setError(new_full_value);
      }
    void unsetError(void)
      {
        flagHasError = false;
      }
    void initSeriesIndices(void)
      {
        flagHasSeriesIndices = true;
        storeSeriesIndices.clear();
      }
    void appendSeriesIndices(OInteger to_append)
      {
        if (!flagHasSeriesIndices)
          {
            flagHasSeriesIndices = true;
            storeSeriesIndices.clear();
          }
        assert(flagHasSeriesIndices);
        storeSeriesIndices.push_back(to_append);
      }
    void unsetSeriesIndices(void)
      {
        flagHasSeriesIndices = false;
        storeSeriesIndices.clear();
      }
    void initGamesIndices(void)
      {
        flagHasGamesIndices = true;
        storeGamesIndices.clear();
      }
    void appendGamesIndices(OInteger to_append)
      {
        if (!flagHasGamesIndices)
          {
            flagHasGamesIndices = true;
            storeGamesIndices.clear();
          }
        assert(flagHasGamesIndices);
        storeGamesIndices.push_back(to_append);
      }
    void unsetGamesIndices(void)
      {
        flagHasGamesIndices = false;
        storeGamesIndices.clear();
      }

    virtual void extraSportsPlayoffTriviaInputDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayoffTriviaInputDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayoffTriviaInputDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayoffTriviaInputDataAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasType);
        handler->start_pair("Type");
        if (storeType.in_known_list)
          {
            switch (storeType.list_value)
              {
                case Type_CountOfOutcomesBySpecificTeam:
                    handler->string_value("CountOfOutcomesBySpecificTeam");
                    break;
                case Type_TeamWithHighestOutcomeCount:
                    handler->string_value("TeamWithHighestOutcomeCount");
                    break;
                case Type_YearOfOutcomeBySpecificTeam:
                    handler->string_value("YearOfOutcomeBySpecificTeam");
                    break;
                case Type_SeriesInformation:
                    handler->string_value("SeriesInformation");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeType.string_value);
          }
        if (flagHasOutcome)
          {
            handler->start_pair("Outcome");
            if (storeOutcome.in_known_list)
              {
                switch (storeOutcome.list_value)
                  {
                    case Outcome_Won:
                        handler->string_value("Won");
                        break;
                    case Outcome_Lost:
                        handler->string_value("Lost");
                        break;
                    case Outcome_Appeared:
                        handler->string_value("Appeared");
                        break;
                    case Outcome_Faced:
                        handler->string_value("Faced");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeOutcome.string_value);
              }
          }
        if (flagHasLeague)
          {
            handler->start_pair("League");
            storeLeague->write_as_json(handler);
          }
        if (flagHasIsPlayoffsGeneral)
          {
            handler->start_pair("IsPlayoffsGeneral");
            handler->boolean_value(storeIsPlayoffsGeneral);
          }
        if (flagHasSpecialGameType)
          {
            handler->start_pair("SpecialGameType");
            storeSpecialGameType->write_as_json(handler);
          }
        if (flagHasTournament)
          {
            handler->start_pair("Tournament");
            storeTournament->write_as_json(handler);
          }
        if (flagHasChronologicalOrdinal)
          {
            handler->start_pair("ChronologicalOrdinal");
            handler->number_value(storeChronologicalOrdinal.get_o_integer());
          }
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
        if (flagHasSortOrderReversed)
          {
            handler->start_pair("SortOrderReversed");
            handler->boolean_value(storeSortOrderReversed);
          }
        if (flagHasTeams)
          {
            handler->start_pair("Teams");
            assert(storeTeams.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
              {
                storeTeams[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSeason)
          {
            handler->start_pair("Season");
            assert(storeSeason.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeSeason.size(); ++num2)
              {
                storeSeason[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasOutcomeCount)
          {
            handler->start_pair("OutcomeCount");
            handler->number_value(storeOutcomeCount.get_o_integer());
          }
        if (flagHasError)
          {
            handler->start_pair("Error");
            if (storeError.in_known_list)
              {
                switch (storeError.list_value)
                  {
                    case Error_PlayoffTypeUnknown:
                        handler->string_value("PlayoffTypeUnknown");
                        break;
                    case Error_QueryIncomplete:
                        handler->string_value("QueryIncomplete");
                        break;
                    case Error_TeamMismatch:
                        handler->string_value("TeamMismatch");
                        break;
                    case Error_DataIncomplete:
                        handler->string_value("DataIncomplete");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeError.string_value);
              }
          }
        if (flagHasSeriesIndices)
          {
            handler->start_pair("SeriesIndices");
            assert(storeSeriesIndices.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeSeriesIndices.size(); ++num3)
              {
                handler->number_value(storeSeriesIndices[num3].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasGamesIndices)
          {
            handler->start_pair("GamesIndices");
            assert(storeGamesIndices.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeGamesIndices.size(); ++num4)
              {
                handler->number_value(storeGamesIndices[num4].get_o_integer());
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static SportsPlayoffTriviaInputDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayoffTriviaInputDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayoffTriviaInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaInputDataJSON>, SportsPlayoffTriviaInputDataJSON *, bool> generator("Type SportsPlayoffTriviaInputData", ignore_extras);
            parse_json_value(text, "Text for SportsPlayoffTriviaInputDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayoffTriviaInputDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayoffTriviaInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaInputDataJSON>, SportsPlayoffTriviaInputDataJSON *, bool> generator("Type SportsPlayoffTriviaInputData", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
    class FieldGeneratorType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTypeKnownValues known = stringToType(result);
                TypeType new_value;
                if (known == Type__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorType, TypeType, TypeType > fieldGeneratorType;
    class FieldGeneratorOutcome : public JSONStringGenerator
          {
          protected:
            FieldGeneratorOutcome(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorOutcome(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeOutcomeKnownValues known = stringToOutcome(result);
                TypeOutcome new_value;
                if (known == Outcome__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeOutcome result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorOutcome, TypeOutcome, TypeOutcome > fieldGeneratorOutcome;
        JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsPlayoffsGeneral;
        JSONHoldingGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorSpecialGameType;
        JSONHoldingGenerator<SportsTournamentJSON::Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool > fieldGeneratorTournament;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorChronologicalOrdinal;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSortOrderReversed;
        JSONHoldingArrayGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeams;
        JSONHoldingArrayGenerator<SportsSeasonResolvedJSON::Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool > fieldGeneratorSeason;
        static char lowerBoundOutcomeCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOutcomeCount>, OInteger, o_integer > fieldGeneratorOutcomeCount;
    class FieldGeneratorError : public JSONStringGenerator
          {
          protected:
            FieldGeneratorError(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorError(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeErrorKnownValues known = stringToError(result);
                TypeError new_value;
                if (known == Error__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeError result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorError, TypeError, TypeError > fieldGeneratorError;
        static char lowerBoundSeriesIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSeriesIndices>, OInteger, o_integer > fieldGeneratorSeriesIndices;
        static char lowerBoundGamesIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesIndices>, OInteger, o_integer > fieldGeneratorGamesIndices;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            SportsPlayoffTriviaInputDataJSON *result = new SportsPlayoffTriviaInputDataJSON();
            assert(result != NULL);
            RCHandle<SportsPlayoffTriviaInputDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayoffTriviaInputDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayoffTriviaInputDataJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorOutcome.have_value)
              {
                result->setOutcome(fieldGeneratorOutcome.value);
                fieldGeneratorOutcome.have_value = false;
              }
            if (fieldGeneratorLeague.have_value)
              {
                result->setLeague(fieldGeneratorLeague.value.referenced());
                fieldGeneratorLeague.have_value = false;
              }
            if (fieldGeneratorIsPlayoffsGeneral.have_value)
              {
                result->setIsPlayoffsGeneral(fieldGeneratorIsPlayoffsGeneral.value);
                fieldGeneratorIsPlayoffsGeneral.have_value = false;
              }
            if (fieldGeneratorSpecialGameType.have_value)
              {
                result->setSpecialGameType(fieldGeneratorSpecialGameType.value.referenced());
                fieldGeneratorSpecialGameType.have_value = false;
              }
            if (fieldGeneratorTournament.have_value)
              {
                result->setTournament(fieldGeneratorTournament.value.referenced());
                fieldGeneratorTournament.have_value = false;
              }
            if (fieldGeneratorChronologicalOrdinal.have_value)
              {
                result->setChronologicalOrdinal(fieldGeneratorChronologicalOrdinal.value);
                fieldGeneratorChronologicalOrdinal.have_value = false;
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
            if (fieldGeneratorSortOrderReversed.have_value)
              {
                result->setSortOrderReversed(fieldGeneratorSortOrderReversed.value);
                fieldGeneratorSortOrderReversed.have_value = false;
              }
            if (fieldGeneratorTeams.have_value)
              {
                result->initTeams();
                size_t count = fieldGeneratorTeams.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTeams(fieldGeneratorTeams.value[num].referenced());
                  }
                fieldGeneratorTeams.value.clear();
                fieldGeneratorTeams.have_value = false;
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->initSeason();
                size_t count = fieldGeneratorSeason.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSeason(fieldGeneratorSeason.value[num].referenced());
                  }
                fieldGeneratorSeason.value.clear();
                fieldGeneratorSeason.have_value = false;
              }
            if (fieldGeneratorOutcomeCount.have_value)
              {
                result->setOutcomeCount(fieldGeneratorOutcomeCount.value);
                fieldGeneratorOutcomeCount.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value);
                fieldGeneratorError.have_value = false;
              }
            if (fieldGeneratorSeriesIndices.have_value)
              {
                result->initSeriesIndices();
                size_t count = fieldGeneratorSeriesIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSeriesIndices(fieldGeneratorSeriesIndices.value[num]);
                  }
                fieldGeneratorSeriesIndices.value.clear();
                fieldGeneratorSeriesIndices.have_value = false;
              }
            if (fieldGeneratorGamesIndices.have_value)
              {
                result->initGamesIndices();
                size_t count = fieldGeneratorGamesIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGamesIndices(fieldGeneratorGamesIndices.value[num]);
                  }
                fieldGeneratorGamesIndices.value.clear();
                fieldGeneratorGamesIndices.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayoffTriviaInputDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "hronologicalOrdinal") == 0)
                        return &fieldGeneratorChronologicalOrdinal;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "amesIndices") == 0)
                        return &fieldGeneratorGamesIndices;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sPlayoffsGeneral") == 0)
                        return &fieldGeneratorIsPlayoffsGeneral;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "eague") == 0)
                        return &fieldGeneratorLeague;
                    break;
                case 'O':
                    if (strncmp(&(field_name[1]), "utcome", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 0:
                                return &fieldGeneratorOutcome;
                            case 'C':
                                if (strcmp(&(field_name[8]), "ount") == 0)
                                    return &fieldGeneratorOutcomeCount;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ank") == 0)
                        return &fieldGeneratorRank;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'a':
                                    if (strcmp(&(field_name[3]), "son") == 0)
                                        return &fieldGeneratorSeason;
                                    break;
                                case 'r':
                                    if (strcmp(&(field_name[3]), "iesIndices") == 0)
                                        return &fieldGeneratorSeriesIndices;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "rtOrderReversed") == 0)
                                return &fieldGeneratorSortOrderReversed;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "ecialGameType") == 0)
                                return &fieldGeneratorSpecialGameType;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ams") == 0)
                                return &fieldGeneratorTeams;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "urnament") == 0)
                                return &fieldGeneratorTournament;
                            break;
                        case 'y':
                            if (strcmp(&(field_name[2]), "pe") == 0)
                                return &fieldGeneratorType;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorOutcome("field \"Outcome\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorLeague("field \"League\" of the SportsPlayoffTriviaInputData class", ignore_extras), fieldGeneratorIsPlayoffsGeneral("field \"IsPlayoffsGeneral\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorSpecialGameType("field \"SpecialGameType\" of the SportsPlayoffTriviaInputData class", ignore_extras), fieldGeneratorTournament("field \"Tournament\" of the SportsPlayoffTriviaInputData class", ignore_extras), fieldGeneratorChronologicalOrdinal("field \"ChronologicalOrdinal\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorRank("field \"Rank\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorSortOrderReversed("field \"SortOrderReversed\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorTeams("field \"Teams\" of the SportsPlayoffTriviaInputData class", ignore_extras), fieldGeneratorSeason("field \"Season\" of the SportsPlayoffTriviaInputData class", ignore_extras), fieldGeneratorOutcomeCount("field \"OutcomeCount\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorError("field \"Error\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorSeriesIndices("field \"SeriesIndices\" of the SportsPlayoffTriviaInputData class"), fieldGeneratorGamesIndices("field \"GamesIndices\" of the SportsPlayoffTriviaInputData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayoffTriviaInputData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorOutcome.reset();
            fieldGeneratorLeague.reset();
            fieldGeneratorIsPlayoffsGeneral.reset();
            fieldGeneratorSpecialGameType.reset();
            fieldGeneratorTournament.reset();
            fieldGeneratorChronologicalOrdinal.reset();
            fieldGeneratorRank.reset();
            fieldGeneratorSortOrderReversed.reset();
            fieldGeneratorTeams.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorOutcomeCount.reset();
            fieldGeneratorError.reset();
            fieldGeneratorSeriesIndices.reset();
            fieldGeneratorGamesIndices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYOFFTRIVIAINPUTDATAJSON_H */
