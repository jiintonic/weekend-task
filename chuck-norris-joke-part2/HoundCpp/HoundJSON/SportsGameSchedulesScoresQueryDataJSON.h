/* file "SportsGameSchedulesScoresQueryDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSGAMESCHEDULESSCORESQUERYDATAJSON_H
#define SPORTSGAMESCHEDULESSCORESQUERYDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <stdint.h>
#include "OInteger.h"
#include "SportsTeamNewJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "MapLocationJSON.h"
#include "SportsSeasonTypeJSON.h"
#include "SportsPlayoffSpecialGameJSON.h"
#include "SportsSeriesStatusNewJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsGameSchedulesScoresQueryDataJSON : public ReferenceCounted
  {
  public:
    enum TypeTypeKnownValues
      {
        Type_Score,
        Type_Schedule,
        Type_ScoreOrSchedule,
        Type_Location,
        Type_BroadcastNetwork,
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
    enum TypeHomeAwayKnownValues
      {
        HomeAway_Home,
        HomeAway_Away,
        HomeAway__none
      };
    struct TypeHomeAway
      {
        bool in_known_list;
        std::string string_value;
        TypeHomeAwayKnownValues list_value;

        TypeHomeAway(void);
        TypeHomeAway(const TypeHomeAway &other);
        TypeHomeAway(TypeHomeAwayKnownValues other);
        bool  operator==(const TypeHomeAway &other) const;
        bool  operator!=(const TypeHomeAway &other) const;
        bool  operator<(const TypeHomeAway &other) const;
        bool  operator>(const TypeHomeAway &other) const;
        bool  operator>=(const TypeHomeAway &other) const;
        bool  operator<=(const TypeHomeAway &other) const;

      };

    static TypeHomeAwayKnownValues  stringToHomeAway(const char *chars);
    static const char * stringFromHomeAway(TypeHomeAwayKnownValues the_enum);
    enum TypeQueryGameOutcomeKnownValues
      {
        QueryGameOutcome_Won,
        QueryGameOutcome_Lost,
        QueryGameOutcome_Tied,
        QueryGameOutcome__none
      };
    struct TypeQueryGameOutcome
      {
        bool in_known_list;
        std::string string_value;
        TypeQueryGameOutcomeKnownValues list_value;

        TypeQueryGameOutcome(void);
        TypeQueryGameOutcome(const TypeQueryGameOutcome &other);
        TypeQueryGameOutcome(TypeQueryGameOutcomeKnownValues other);
        bool  operator==(const TypeQueryGameOutcome &other) const;
        bool  operator!=(const TypeQueryGameOutcome &other) const;
        bool  operator<(const TypeQueryGameOutcome &other) const;
        bool  operator>(const TypeQueryGameOutcome &other) const;
        bool  operator>=(const TypeQueryGameOutcome &other) const;
        bool  operator<=(const TypeQueryGameOutcome &other) const;

      };

    static TypeQueryGameOutcomeKnownValues  stringToQueryGameOutcome(const char *chars);
    static const char * stringFromQueryGameOutcome(TypeQueryGameOutcomeKnownValues the_enum);
    enum TypeResultTypeKnownValues
      {
        ResultType_Team,
        ResultType_Generic,
        ResultType_Series,
        ResultType_PlayoffsComplete,
        ResultType__none
      };
    struct TypeResultType
      {
        bool in_known_list;
        std::string string_value;
        TypeResultTypeKnownValues list_value;

        TypeResultType(void);
        TypeResultType(const TypeResultType &other);
        TypeResultType(TypeResultTypeKnownValues other);
        bool  operator==(const TypeResultType &other) const;
        bool  operator!=(const TypeResultType &other) const;
        bool  operator<(const TypeResultType &other) const;
        bool  operator>(const TypeResultType &other) const;
        bool  operator>=(const TypeResultType &other) const;
        bool  operator<=(const TypeResultType &other) const;

      };

    static TypeResultTypeKnownValues  stringToResultType(const char *chars);
    static const char * stringFromResultType(TypeResultTypeKnownValues the_enum);
    enum TypeErrorKnownValues
      {
        Error_NoGamesFound,
        Error_LeagueNotSupported,
        Error_LocationUnavailable,
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
    bool flagHasTeams;
    std::vector< SportsTeamNewJSON * > storeTeams;
    bool flagHasLeagues;
    std::vector< SportsLeagueCodeJSON * > storeLeagues;
    bool flagHasDateTimeRange;
    DateTimeRangeSpecJSON * storeDateTimeRange;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    bool flagHasHomeAway;
    TypeHomeAway storeHomeAway;
    bool flagHasSeasonType;
    SportsSeasonTypeJSON * storeSeasonType;
    bool flagHasSpecialGameType;
    std::vector< SportsPlayoffSpecialGameJSON * > storeSpecialGameType;
    bool flagHasSeriesGameNumber;
    OInteger storeSeriesGameNumber;
    bool flagHasQueryGameOutcome;
    TypeQueryGameOutcome storeQueryGameOutcome;
    bool flagHasQueryMentionedGame;
    bool storeQueryMentionedGame;
    bool flagHasResultType;
    TypeResultType storeResultType;
    bool flagHasSeriesStatus;
    std::vector< SportsSeriesStatusNewJSON * > storeSeriesStatus;
    bool flagHasDateTimeRangeLocationDropped;
    bool storeDateTimeRangeLocationDropped;
    bool flagHasGamesIndicesBestMatches;
    std::vector< OInteger > storeGamesIndicesBestMatches;
    bool flagHasGamesIndicesSecondaryMatches;
    std::vector< OInteger > storeGamesIndicesSecondaryMatches;
    bool flagHasGamesIndicesRecentGames;
    std::vector< OInteger > storeGamesIndicesRecentGames;
    bool flagHasGamesIndicesUpcomingGames;
    std::vector< OInteger > storeGamesIndicesUpcomingGames;
    bool flagHasInferredUserFavoriteTeamIndex;
    uint8_t storeInferredUserFavoriteTeamIndex;
    bool flagHasError;
    TypeError storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsGameSchedulesScoresQueryDataJSON(const SportsGameSchedulesScoresQueryDataJSON &);
    SportsGameSchedulesScoresQueryDataJSON & operator=(const SportsGameSchedulesScoresQueryDataJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeagues(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHomeAway(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeasonType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeriesGameNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQueryGameOutcome(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQueryMentionedGame(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeriesStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRangeLocationDropped(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesIndicesBestMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesIndicesSecondaryMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesIndicesRecentGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesIndicesUpcomingGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInferredUserFavoriteTeamIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsGameSchedulesScoresQueryDataJSON(void);
    virtual ~SportsGameSchedulesScoresQueryDataJSON(void);
    bool  hasType(void) const;
    TypeType  getType(void);
    const TypeType  getType(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamNewJSON *  elementOfTeams(size_t element_num);
    const SportsTeamNewJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamNewJSON * >  getTeams(void);
    const std::vector< SportsTeamNewJSON * >  getTeams(void) const;
    bool  hasLeagues(void) const;
    size_t  countOfLeagues(void) const;
    SportsLeagueCodeJSON *  elementOfLeagues(size_t element_num);
    const SportsLeagueCodeJSON *  elementOfLeagues(size_t element_num) const;
    std::vector< SportsLeagueCodeJSON * >  getLeagues(void);
    const std::vector< SportsLeagueCodeJSON * >  getLeagues(void) const;
    bool  hasDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getDateTimeRange(void) const;
    bool  hasLocation(void) const;
    MapLocationJSON *  getLocation(void);
    const MapLocationJSON *  getLocation(void) const;
    bool  hasHomeAway(void) const;
    TypeHomeAway  getHomeAway(void);
    const TypeHomeAway  getHomeAway(void) const;
    const char * getHomeAwayAsChars(void) const;
    std::string  getHomeAwayAsString(void) const;
    bool  hasSeasonType(void) const;
    SportsSeasonTypeJSON *  getSeasonType(void);
    const SportsSeasonTypeJSON *  getSeasonType(void) const;
    SportsSeasonTypeJSON::TypeValue  getSeasonTypeValue(void);
    const SportsSeasonTypeJSON::TypeValue  getSeasonTypeValue(void) const;
    const char * getSeasonTypeAsChars(void) const;
    std::string  getSeasonTypeAsString(void) const;
    bool  hasSpecialGameType(void) const;
    size_t  countOfSpecialGameType(void) const;
    SportsPlayoffSpecialGameJSON *  elementOfSpecialGameType(size_t element_num);
    const SportsPlayoffSpecialGameJSON *  elementOfSpecialGameType(size_t element_num) const;
    std::vector< SportsPlayoffSpecialGameJSON * >  getSpecialGameType(void);
    const std::vector< SportsPlayoffSpecialGameJSON * >  getSpecialGameType(void) const;
    bool  hasSeriesGameNumber(void) const;
    OInteger  getSeriesGameNumber(void);
    const OInteger  getSeriesGameNumber(void) const;
    bool  hasQueryGameOutcome(void) const;
    TypeQueryGameOutcome  getQueryGameOutcome(void);
    const TypeQueryGameOutcome  getQueryGameOutcome(void) const;
    const char * getQueryGameOutcomeAsChars(void) const;
    std::string  getQueryGameOutcomeAsString(void) const;
    bool  hasQueryMentionedGame(void) const;
    bool  getQueryMentionedGame(void);
    const bool  getQueryMentionedGame(void) const;
    bool  hasResultType(void) const;
    TypeResultType  getResultType(void);
    const TypeResultType  getResultType(void) const;
    const char * getResultTypeAsChars(void) const;
    std::string  getResultTypeAsString(void) const;
    bool  hasSeriesStatus(void) const;
    size_t  countOfSeriesStatus(void) const;
    SportsSeriesStatusNewJSON *  elementOfSeriesStatus(size_t element_num);
    const SportsSeriesStatusNewJSON *  elementOfSeriesStatus(size_t element_num) const;
    std::vector< SportsSeriesStatusNewJSON * >  getSeriesStatus(void);
    const std::vector< SportsSeriesStatusNewJSON * >  getSeriesStatus(void) const;
    bool  hasDateTimeRangeLocationDropped(void) const;
    bool  getDateTimeRangeLocationDropped(void);
    const bool  getDateTimeRangeLocationDropped(void) const;
    bool  hasGamesIndicesBestMatches(void) const;
    size_t  countOfGamesIndicesBestMatches(void) const;
    OInteger  elementOfGamesIndicesBestMatches(size_t element_num);
    const OInteger  elementOfGamesIndicesBestMatches(size_t element_num) const;
    std::vector< OInteger >  getGamesIndicesBestMatches(void);
    const std::vector< OInteger >  getGamesIndicesBestMatches(void) const;
    bool  hasGamesIndicesSecondaryMatches(void) const;
    size_t  countOfGamesIndicesSecondaryMatches(void) const;
    OInteger  elementOfGamesIndicesSecondaryMatches(size_t element_num);
    const OInteger  elementOfGamesIndicesSecondaryMatches(size_t element_num) const;
    std::vector< OInteger >  getGamesIndicesSecondaryMatches(void);
    const std::vector< OInteger >  getGamesIndicesSecondaryMatches(void) const;
    bool  hasGamesIndicesRecentGames(void) const;
    size_t  countOfGamesIndicesRecentGames(void) const;
    OInteger  elementOfGamesIndicesRecentGames(size_t element_num);
    const OInteger  elementOfGamesIndicesRecentGames(size_t element_num) const;
    std::vector< OInteger >  getGamesIndicesRecentGames(void);
    const std::vector< OInteger >  getGamesIndicesRecentGames(void) const;
    bool  hasGamesIndicesUpcomingGames(void) const;
    size_t  countOfGamesIndicesUpcomingGames(void) const;
    OInteger  elementOfGamesIndicesUpcomingGames(size_t element_num);
    const OInteger  elementOfGamesIndicesUpcomingGames(size_t element_num) const;
    std::vector< OInteger >  getGamesIndicesUpcomingGames(void);
    const std::vector< OInteger >  getGamesIndicesUpcomingGames(void) const;
    bool  hasInferredUserFavoriteTeamIndex(void) const;
    uint8_t  getInferredUserFavoriteTeamIndex(void);
    const uint8_t  getInferredUserFavoriteTeamIndex(void) const;
    bool  hasError(void) const;
    TypeError  getError(void);
    const TypeError  getError(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsGameSchedulesScoresQueryDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsGameSchedulesScoresQueryDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsGameSchedulesScoresQueryDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsGameSchedulesScoresQueryDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsGameSchedulesScoresQueryDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsGameSchedulesScoresQueryDataLookup(const char *field_name) const
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
    void initTeams(void)
      {
        if (flagHasTeams)
          {
            for (size_t num5 = 0; num5 < storeTeams.size(); ++num5)
              {
                storeTeams[num5]->remove_reference();
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
            for (size_t num6 = 0; num6 < storeTeams.size(); ++num6)
              {
                storeTeams[num6]->remove_reference();
              }
          }
        flagHasTeams = false;
        storeTeams.clear();
      }
    void initLeagues(void)
      {
        if (flagHasLeagues)
          {
            for (size_t num7 = 0; num7 < storeLeagues.size(); ++num7)
              {
                storeLeagues[num7]->remove_reference();
              }
          }
        flagHasLeagues = true;
        storeLeagues.clear();
      }
    void appendLeagues(SportsLeagueCodeJSON * to_append)
      {
        if (!flagHasLeagues)
          {
            flagHasLeagues = true;
            storeLeagues.clear();
          }
        assert(flagHasLeagues);
        to_append->add_reference();
        storeLeagues.push_back(to_append);
      }
    void appendLeagues(SportsLeagueCodeJSON::TypeValue new_value)
      {
        appendLeagues(new SportsLeagueCodeJSON(new_value));
      }
    void appendLeagues(const char *chars)
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
        appendLeagues(new_value);
      }
    void appendLeagues(std::string the_string)
      {
        appendLeagues(the_string.c_str());
      }
    void unsetLeagues(void)
      {
        if (flagHasLeagues)
          {
            for (size_t num8 = 0; num8 < storeLeagues.size(); ++num8)
              {
                storeLeagues[num8]->remove_reference();
              }
          }
        flagHasLeagues = false;
        storeLeagues.clear();
      }
    void setDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = true;
        storeDateTimeRange = new_value;
      }
    void unsetDateTimeRange(void)
      {
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = false;
      }
    void setLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = false;
      }
    void setHomeAway(TypeHomeAway new_value)
      {
        flagHasHomeAway = true;
        storeHomeAway = new_value;
      }
    void setHomeAway(const char *chars)
      {
        TypeHomeAwayKnownValues known = stringToHomeAway(chars);
        TypeHomeAway new_value;
        if (known == HomeAway__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setHomeAway(new_value);
      }
    void setHomeAway(std::string the_string)
      {
        setHomeAway(the_string.c_str());
      }
    void setHomeAway(TypeHomeAwayKnownValues new_value)
      {
        TypeHomeAway new_full_value;
        assert(new_value != HomeAway__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setHomeAway(new_full_value);
      }
    void unsetHomeAway(void)
      {
        flagHasHomeAway = false;
      }
    void setSeasonType(SportsSeasonTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeasonType)
          {
            storeSeasonType->remove_reference();
          }
        flagHasSeasonType = true;
        storeSeasonType = new_value;
      }
    void setSeasonType(SportsSeasonTypeJSON::TypeValue new_value)
      {
        setSeasonType(new SportsSeasonTypeJSON(new_value));
      }
    void setSeasonType(const char *chars)
      {
        SportsSeasonTypeJSON::TypeValueKnownValues known = SportsSeasonTypeJSON::stringToValue(chars);
        SportsSeasonTypeJSON::TypeValue new_value;
        if (known == SportsSeasonTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSeasonType(new_value);
      }
    void setSeasonType(std::string the_string)
      {
        setSeasonType(the_string.c_str());
      }
    void unsetSeasonType(void)
      {
        if (flagHasSeasonType)
          {
            storeSeasonType->remove_reference();
          }
        flagHasSeasonType = false;
      }
    void initSpecialGameType(void)
      {
        if (flagHasSpecialGameType)
          {
            for (size_t num9 = 0; num9 < storeSpecialGameType.size(); ++num9)
              {
                storeSpecialGameType[num9]->remove_reference();
              }
          }
        flagHasSpecialGameType = true;
        storeSpecialGameType.clear();
      }
    void appendSpecialGameType(SportsPlayoffSpecialGameJSON * to_append)
      {
        if (!flagHasSpecialGameType)
          {
            flagHasSpecialGameType = true;
            storeSpecialGameType.clear();
          }
        assert(flagHasSpecialGameType);
        to_append->add_reference();
        storeSpecialGameType.push_back(to_append);
      }
    void appendSpecialGameType(SportsPlayoffSpecialGameJSON::TypeValue new_value)
      {
        appendSpecialGameType(new SportsPlayoffSpecialGameJSON(new_value));
      }
    void appendSpecialGameType(const char *chars)
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
        appendSpecialGameType(new_value);
      }
    void appendSpecialGameType(std::string the_string)
      {
        appendSpecialGameType(the_string.c_str());
      }
    void unsetSpecialGameType(void)
      {
        if (flagHasSpecialGameType)
          {
            for (size_t num10 = 0; num10 < storeSpecialGameType.size(); ++num10)
              {
                storeSpecialGameType[num10]->remove_reference();
              }
          }
        flagHasSpecialGameType = false;
        storeSpecialGameType.clear();
      }
    void setSeriesGameNumber(OInteger new_value)
      {
        flagHasSeriesGameNumber = true;
        if (new_value < 1)
            throw("The value for field SeriesGameNumber of SportsGameSchedulesScoresQueryDataJSON is less than the lower bound (1) for that field.");
        storeSeriesGameNumber = new_value;
      }
    void unsetSeriesGameNumber(void)
      {
        flagHasSeriesGameNumber = false;
      }
    void setQueryGameOutcome(TypeQueryGameOutcome new_value)
      {
        flagHasQueryGameOutcome = true;
        storeQueryGameOutcome = new_value;
      }
    void setQueryGameOutcome(const char *chars)
      {
        TypeQueryGameOutcomeKnownValues known = stringToQueryGameOutcome(chars);
        TypeQueryGameOutcome new_value;
        if (known == QueryGameOutcome__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setQueryGameOutcome(new_value);
      }
    void setQueryGameOutcome(std::string the_string)
      {
        setQueryGameOutcome(the_string.c_str());
      }
    void setQueryGameOutcome(TypeQueryGameOutcomeKnownValues new_value)
      {
        TypeQueryGameOutcome new_full_value;
        assert(new_value != QueryGameOutcome__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setQueryGameOutcome(new_full_value);
      }
    void unsetQueryGameOutcome(void)
      {
        flagHasQueryGameOutcome = false;
      }
    void setQueryMentionedGame(bool new_value)
      {
        flagHasQueryMentionedGame = true;
        storeQueryMentionedGame = new_value;
      }
    void unsetQueryMentionedGame(void)
      {
        flagHasQueryMentionedGame = false;
      }
    void setResultType(TypeResultType new_value)
      {
        flagHasResultType = true;
        storeResultType = new_value;
      }
    void setResultType(const char *chars)
      {
        TypeResultTypeKnownValues known = stringToResultType(chars);
        TypeResultType new_value;
        if (known == ResultType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setResultType(new_value);
      }
    void setResultType(std::string the_string)
      {
        setResultType(the_string.c_str());
      }
    void setResultType(TypeResultTypeKnownValues new_value)
      {
        TypeResultType new_full_value;
        assert(new_value != ResultType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setResultType(new_full_value);
      }
    void unsetResultType(void)
      {
        flagHasResultType = false;
      }
    void initSeriesStatus(void)
      {
        if (flagHasSeriesStatus)
          {
            for (size_t num11 = 0; num11 < storeSeriesStatus.size(); ++num11)
              {
                storeSeriesStatus[num11]->remove_reference();
              }
          }
        flagHasSeriesStatus = true;
        storeSeriesStatus.clear();
      }
    void appendSeriesStatus(SportsSeriesStatusNewJSON * to_append)
      {
        if (!flagHasSeriesStatus)
          {
            flagHasSeriesStatus = true;
            storeSeriesStatus.clear();
          }
        assert(flagHasSeriesStatus);
        to_append->add_reference();
        storeSeriesStatus.push_back(to_append);
      }
    void unsetSeriesStatus(void)
      {
        if (flagHasSeriesStatus)
          {
            for (size_t num12 = 0; num12 < storeSeriesStatus.size(); ++num12)
              {
                storeSeriesStatus[num12]->remove_reference();
              }
          }
        flagHasSeriesStatus = false;
        storeSeriesStatus.clear();
      }
    void setDateTimeRangeLocationDropped(bool new_value)
      {
        flagHasDateTimeRangeLocationDropped = true;
        storeDateTimeRangeLocationDropped = new_value;
      }
    void unsetDateTimeRangeLocationDropped(void)
      {
        flagHasDateTimeRangeLocationDropped = false;
      }
    void initGamesIndicesBestMatches(void)
      {
        flagHasGamesIndicesBestMatches = true;
        storeGamesIndicesBestMatches.clear();
      }
    void appendGamesIndicesBestMatches(OInteger to_append)
      {
        if (!flagHasGamesIndicesBestMatches)
          {
            flagHasGamesIndicesBestMatches = true;
            storeGamesIndicesBestMatches.clear();
          }
        assert(flagHasGamesIndicesBestMatches);
        storeGamesIndicesBestMatches.push_back(to_append);
      }
    void unsetGamesIndicesBestMatches(void)
      {
        flagHasGamesIndicesBestMatches = false;
        storeGamesIndicesBestMatches.clear();
      }
    void initGamesIndicesSecondaryMatches(void)
      {
        flagHasGamesIndicesSecondaryMatches = true;
        storeGamesIndicesSecondaryMatches.clear();
      }
    void appendGamesIndicesSecondaryMatches(OInteger to_append)
      {
        if (!flagHasGamesIndicesSecondaryMatches)
          {
            flagHasGamesIndicesSecondaryMatches = true;
            storeGamesIndicesSecondaryMatches.clear();
          }
        assert(flagHasGamesIndicesSecondaryMatches);
        storeGamesIndicesSecondaryMatches.push_back(to_append);
      }
    void unsetGamesIndicesSecondaryMatches(void)
      {
        flagHasGamesIndicesSecondaryMatches = false;
        storeGamesIndicesSecondaryMatches.clear();
      }
    void initGamesIndicesRecentGames(void)
      {
        flagHasGamesIndicesRecentGames = true;
        storeGamesIndicesRecentGames.clear();
      }
    void appendGamesIndicesRecentGames(OInteger to_append)
      {
        if (!flagHasGamesIndicesRecentGames)
          {
            flagHasGamesIndicesRecentGames = true;
            storeGamesIndicesRecentGames.clear();
          }
        assert(flagHasGamesIndicesRecentGames);
        storeGamesIndicesRecentGames.push_back(to_append);
      }
    void unsetGamesIndicesRecentGames(void)
      {
        flagHasGamesIndicesRecentGames = false;
        storeGamesIndicesRecentGames.clear();
      }
    void initGamesIndicesUpcomingGames(void)
      {
        flagHasGamesIndicesUpcomingGames = true;
        storeGamesIndicesUpcomingGames.clear();
      }
    void appendGamesIndicesUpcomingGames(OInteger to_append)
      {
        if (!flagHasGamesIndicesUpcomingGames)
          {
            flagHasGamesIndicesUpcomingGames = true;
            storeGamesIndicesUpcomingGames.clear();
          }
        assert(flagHasGamesIndicesUpcomingGames);
        storeGamesIndicesUpcomingGames.push_back(to_append);
      }
    void unsetGamesIndicesUpcomingGames(void)
      {
        flagHasGamesIndicesUpcomingGames = false;
        storeGamesIndicesUpcomingGames.clear();
      }
    void setInferredUserFavoriteTeamIndex(uint8_t new_value)
      {
        flagHasInferredUserFavoriteTeamIndex = true;
        if (new_value < 0)
            throw("The value for field InferredUserFavoriteTeamIndex of SportsGameSchedulesScoresQueryDataJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field InferredUserFavoriteTeamIndex of SportsGameSchedulesScoresQueryDataJSON is greater than the upper bound (1) for that field.");
        storeInferredUserFavoriteTeamIndex = new_value;
      }
    void unsetInferredUserFavoriteTeamIndex(void)
      {
        flagHasInferredUserFavoriteTeamIndex = false;
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

    virtual void extraSportsGameSchedulesScoresQueryDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsGameSchedulesScoresQueryDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsGameSchedulesScoresQueryDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsGameSchedulesScoresQueryDataAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
                case Type_Score:
                    handler->string_value("Score");
                    break;
                case Type_Schedule:
                    handler->string_value("Schedule");
                    break;
                case Type_ScoreOrSchedule:
                    handler->string_value("ScoreOrSchedule");
                    break;
                case Type_Location:
                    handler->string_value("Location");
                    break;
                case Type_BroadcastNetwork:
                    handler->string_value("BroadcastNetwork");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeType.string_value);
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
        if (flagHasLeagues)
          {
            handler->start_pair("Leagues");
            assert(storeLeagues.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeLeagues.size(); ++num2)
              {
                storeLeagues[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDateTimeRange)
          {
            handler->start_pair("DateTimeRange");
            storeDateTimeRange->write_as_json(handler);
          }
        if (flagHasLocation)
          {
            handler->start_pair("Location");
            storeLocation->write_as_json(handler);
          }
        if (flagHasHomeAway)
          {
            handler->start_pair("HomeAway");
            if (storeHomeAway.in_known_list)
              {
                switch (storeHomeAway.list_value)
                  {
                    case HomeAway_Home:
                        handler->string_value("Home");
                        break;
                    case HomeAway_Away:
                        handler->string_value("Away");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeHomeAway.string_value);
              }
          }
        if (flagHasSeasonType)
          {
            handler->start_pair("SeasonType");
            storeSeasonType->write_as_json(handler);
          }
        if (flagHasSpecialGameType)
          {
            handler->start_pair("SpecialGameType");
            assert(storeSpecialGameType.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeSpecialGameType.size(); ++num3)
              {
                storeSpecialGameType[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSeriesGameNumber)
          {
            handler->start_pair("SeriesGameNumber");
            handler->number_value(storeSeriesGameNumber.get_o_integer());
          }
        if (flagHasQueryGameOutcome)
          {
            handler->start_pair("QueryGameOutcome");
            if (storeQueryGameOutcome.in_known_list)
              {
                switch (storeQueryGameOutcome.list_value)
                  {
                    case QueryGameOutcome_Won:
                        handler->string_value("Won");
                        break;
                    case QueryGameOutcome_Lost:
                        handler->string_value("Lost");
                        break;
                    case QueryGameOutcome_Tied:
                        handler->string_value("Tied");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeQueryGameOutcome.string_value);
              }
          }
        if (flagHasQueryMentionedGame)
          {
            handler->start_pair("QueryMentionedGame");
            handler->boolean_value(storeQueryMentionedGame);
          }
        if (flagHasResultType)
          {
            handler->start_pair("ResultType");
            if (storeResultType.in_known_list)
              {
                switch (storeResultType.list_value)
                  {
                    case ResultType_Team:
                        handler->string_value("Team");
                        break;
                    case ResultType_Generic:
                        handler->string_value("Generic");
                        break;
                    case ResultType_Series:
                        handler->string_value("Series");
                        break;
                    case ResultType_PlayoffsComplete:
                        handler->string_value("PlayoffsComplete");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeResultType.string_value);
              }
          }
        if (flagHasSeriesStatus)
          {
            handler->start_pair("SeriesStatus");
            assert(storeSeriesStatus.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeSeriesStatus.size(); ++num4)
              {
                storeSeriesStatus[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDateTimeRangeLocationDropped)
          {
            handler->start_pair("DateTimeRangeLocationDropped");
            handler->boolean_value(storeDateTimeRangeLocationDropped);
          }
        if (flagHasGamesIndicesBestMatches)
          {
            handler->start_pair("GamesIndicesBestMatches");
            assert(storeGamesIndicesBestMatches.size() >= 1);
            handler->start_array();
            for (size_t num5 = 0; num5 < storeGamesIndicesBestMatches.size(); ++num5)
              {
                handler->number_value(storeGamesIndicesBestMatches[num5].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasGamesIndicesSecondaryMatches)
          {
            handler->start_pair("GamesIndicesSecondaryMatches");
            assert(storeGamesIndicesSecondaryMatches.size() >= 1);
            handler->start_array();
            for (size_t num6 = 0; num6 < storeGamesIndicesSecondaryMatches.size(); ++num6)
              {
                handler->number_value(storeGamesIndicesSecondaryMatches[num6].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasGamesIndicesRecentGames)
          {
            handler->start_pair("GamesIndicesRecentGames");
            assert(storeGamesIndicesRecentGames.size() >= 1);
            handler->start_array();
            for (size_t num7 = 0; num7 < storeGamesIndicesRecentGames.size(); ++num7)
              {
                handler->number_value(storeGamesIndicesRecentGames[num7].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasGamesIndicesUpcomingGames)
          {
            handler->start_pair("GamesIndicesUpcomingGames");
            assert(storeGamesIndicesUpcomingGames.size() >= 1);
            handler->start_array();
            for (size_t num8 = 0; num8 < storeGamesIndicesUpcomingGames.size(); ++num8)
              {
                handler->number_value(storeGamesIndicesUpcomingGames[num8].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasInferredUserFavoriteTeamIndex)
          {
            handler->start_pair("InferredUserFavoriteTeamIndex");
            handler->number_value(storeInferredUserFavoriteTeamIndex);
          }
        if (flagHasError)
          {
            handler->start_pair("Error");
            if (storeError.in_known_list)
              {
                switch (storeError.list_value)
                  {
                    case Error_NoGamesFound:
                        handler->string_value("NoGamesFound");
                        break;
                    case Error_LeagueNotSupported:
                        handler->string_value("LeagueNotSupported");
                        break;
                    case Error_LocationUnavailable:
                        handler->string_value("LocationUnavailable");
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
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static SportsGameSchedulesScoresQueryDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsGameSchedulesScoresQueryDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresQueryDataJSON>, SportsGameSchedulesScoresQueryDataJSON *, bool> generator("Type SportsGameSchedulesScoresQueryData", ignore_extras);
            parse_json_value(text, "Text for SportsGameSchedulesScoresQueryDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsGameSchedulesScoresQueryDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresQueryDataJSON>, SportsGameSchedulesScoresQueryDataJSON *, bool> generator("Type SportsGameSchedulesScoresQueryData", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeams;
        JSONHoldingArrayGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeagues;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRange;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorLocation;
    class FieldGeneratorHomeAway : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHomeAway(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHomeAway(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeHomeAwayKnownValues known = stringToHomeAway(result);
                TypeHomeAway new_value;
                if (known == HomeAway__none)
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
            virtual void handle_result(TypeHomeAway result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHomeAway, TypeHomeAway, TypeHomeAway > fieldGeneratorHomeAway;
        JSONHoldingGenerator<SportsSeasonTypeJSON::Generator, RCHandle<SportsSeasonTypeJSON>, SportsSeasonTypeJSON *, bool > fieldGeneratorSeasonType;
        JSONHoldingArrayGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorSpecialGameType;
        static char lowerBoundSeriesGameNumber[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSeriesGameNumber>, OInteger, o_integer > fieldGeneratorSeriesGameNumber;
    class FieldGeneratorQueryGameOutcome : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQueryGameOutcome(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQueryGameOutcome(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeQueryGameOutcomeKnownValues known = stringToQueryGameOutcome(result);
                TypeQueryGameOutcome new_value;
                if (known == QueryGameOutcome__none)
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
            virtual void handle_result(TypeQueryGameOutcome result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorQueryGameOutcome, TypeQueryGameOutcome, TypeQueryGameOutcome > fieldGeneratorQueryGameOutcome;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorQueryMentionedGame;
    class FieldGeneratorResultType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorResultType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorResultType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeResultTypeKnownValues known = stringToResultType(result);
                TypeResultType new_value;
                if (known == ResultType__none)
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
            virtual void handle_result(TypeResultType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorResultType, TypeResultType, TypeResultType > fieldGeneratorResultType;
        JSONHoldingArrayGenerator<SportsSeriesStatusNewJSON::Generator, RCHandle<SportsSeriesStatusNewJSON>, SportsSeriesStatusNewJSON *, bool > fieldGeneratorSeriesStatus;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDateTimeRangeLocationDropped;
        static char lowerBoundGamesIndicesBestMatches[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesIndicesBestMatches>, OInteger, o_integer > fieldGeneratorGamesIndicesBestMatches;
        static char lowerBoundGamesIndicesSecondaryMatches[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesIndicesSecondaryMatches>, OInteger, o_integer > fieldGeneratorGamesIndicesSecondaryMatches;
        static char lowerBoundGamesIndicesRecentGames[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesIndicesRecentGames>, OInteger, o_integer > fieldGeneratorGamesIndicesRecentGames;
        static char lowerBoundGamesIndicesUpcomingGames[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesIndicesUpcomingGames>, OInteger, o_integer > fieldGeneratorGamesIndicesUpcomingGames;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 1>, uint8_t, uint8_t > fieldGeneratorInferredUserFavoriteTeamIndex;
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
            SportsGameSchedulesScoresQueryDataJSON *result = new SportsGameSchedulesScoresQueryDataJSON();
            assert(result != NULL);
            RCHandle<SportsGameSchedulesScoresQueryDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsGameSchedulesScoresQueryDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsGameSchedulesScoresQueryDataJSON *result)
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
            if (fieldGeneratorLeagues.have_value)
              {
                result->initLeagues();
                size_t count = fieldGeneratorLeagues.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLeagues(fieldGeneratorLeagues.value[num].referenced());
                  }
                fieldGeneratorLeagues.value.clear();
                fieldGeneratorLeagues.have_value = false;
              }
            if (fieldGeneratorDateTimeRange.have_value)
              {
                result->setDateTimeRange(fieldGeneratorDateTimeRange.value.referenced());
                fieldGeneratorDateTimeRange.have_value = false;
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value.referenced());
                fieldGeneratorLocation.have_value = false;
              }
            if (fieldGeneratorHomeAway.have_value)
              {
                result->setHomeAway(fieldGeneratorHomeAway.value);
                fieldGeneratorHomeAway.have_value = false;
              }
            if (fieldGeneratorSeasonType.have_value)
              {
                result->setSeasonType(fieldGeneratorSeasonType.value.referenced());
                fieldGeneratorSeasonType.have_value = false;
              }
            if (fieldGeneratorSpecialGameType.have_value)
              {
                result->initSpecialGameType();
                size_t count = fieldGeneratorSpecialGameType.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSpecialGameType(fieldGeneratorSpecialGameType.value[num].referenced());
                  }
                fieldGeneratorSpecialGameType.value.clear();
                fieldGeneratorSpecialGameType.have_value = false;
              }
            if (fieldGeneratorSeriesGameNumber.have_value)
              {
                result->setSeriesGameNumber(fieldGeneratorSeriesGameNumber.value);
                fieldGeneratorSeriesGameNumber.have_value = false;
              }
            if (fieldGeneratorQueryGameOutcome.have_value)
              {
                result->setQueryGameOutcome(fieldGeneratorQueryGameOutcome.value);
                fieldGeneratorQueryGameOutcome.have_value = false;
              }
            if (fieldGeneratorQueryMentionedGame.have_value)
              {
                result->setQueryMentionedGame(fieldGeneratorQueryMentionedGame.value);
                fieldGeneratorQueryMentionedGame.have_value = false;
              }
            if (fieldGeneratorResultType.have_value)
              {
                result->setResultType(fieldGeneratorResultType.value);
                fieldGeneratorResultType.have_value = false;
              }
            if (fieldGeneratorSeriesStatus.have_value)
              {
                result->initSeriesStatus();
                size_t count = fieldGeneratorSeriesStatus.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSeriesStatus(fieldGeneratorSeriesStatus.value[num].referenced());
                  }
                fieldGeneratorSeriesStatus.value.clear();
                fieldGeneratorSeriesStatus.have_value = false;
              }
            if (fieldGeneratorDateTimeRangeLocationDropped.have_value)
              {
                result->setDateTimeRangeLocationDropped(fieldGeneratorDateTimeRangeLocationDropped.value);
                fieldGeneratorDateTimeRangeLocationDropped.have_value = false;
              }
            if (fieldGeneratorGamesIndicesBestMatches.have_value)
              {
                result->initGamesIndicesBestMatches();
                size_t count = fieldGeneratorGamesIndicesBestMatches.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGamesIndicesBestMatches(fieldGeneratorGamesIndicesBestMatches.value[num]);
                  }
                fieldGeneratorGamesIndicesBestMatches.value.clear();
                fieldGeneratorGamesIndicesBestMatches.have_value = false;
              }
            if (fieldGeneratorGamesIndicesSecondaryMatches.have_value)
              {
                result->initGamesIndicesSecondaryMatches();
                size_t count = fieldGeneratorGamesIndicesSecondaryMatches.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGamesIndicesSecondaryMatches(fieldGeneratorGamesIndicesSecondaryMatches.value[num]);
                  }
                fieldGeneratorGamesIndicesSecondaryMatches.value.clear();
                fieldGeneratorGamesIndicesSecondaryMatches.have_value = false;
              }
            if (fieldGeneratorGamesIndicesRecentGames.have_value)
              {
                result->initGamesIndicesRecentGames();
                size_t count = fieldGeneratorGamesIndicesRecentGames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGamesIndicesRecentGames(fieldGeneratorGamesIndicesRecentGames.value[num]);
                  }
                fieldGeneratorGamesIndicesRecentGames.value.clear();
                fieldGeneratorGamesIndicesRecentGames.have_value = false;
              }
            if (fieldGeneratorGamesIndicesUpcomingGames.have_value)
              {
                result->initGamesIndicesUpcomingGames();
                size_t count = fieldGeneratorGamesIndicesUpcomingGames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGamesIndicesUpcomingGames(fieldGeneratorGamesIndicesUpcomingGames.value[num]);
                  }
                fieldGeneratorGamesIndicesUpcomingGames.value.clear();
                fieldGeneratorGamesIndicesUpcomingGames.have_value = false;
              }
            if (fieldGeneratorInferredUserFavoriteTeamIndex.have_value)
              {
                result->setInferredUserFavoriteTeamIndex(fieldGeneratorInferredUserFavoriteTeamIndex.value);
                fieldGeneratorInferredUserFavoriteTeamIndex.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value);
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsGameSchedulesScoresQueryDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "ateTimeRange", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 0:
                                return &fieldGeneratorDateTimeRange;
                            case 'L':
                                if (strcmp(&(field_name[14]), "ocationDropped") == 0)
                                    return &fieldGeneratorDateTimeRangeLocationDropped;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "amesIndices", 11) == 0)
                      {
                        switch ((unsigned char)(field_name[12]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[13]), "estMatches") == 0)
                                    return &fieldGeneratorGamesIndicesBestMatches;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[13]), "ecentGames") == 0)
                                    return &fieldGeneratorGamesIndicesRecentGames;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[13]), "econdaryMatches") == 0)
                                    return &fieldGeneratorGamesIndicesSecondaryMatches;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[13]), "pcomingGames") == 0)
                                    return &fieldGeneratorGamesIndicesUpcomingGames;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "omeAway") == 0)
                        return &fieldGeneratorHomeAway;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nferredUserFavoriteTeamIndex") == 0)
                        return &fieldGeneratorInferredUserFavoriteTeamIndex;
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "agues") == 0)
                                return &fieldGeneratorLeagues;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "cation") == 0)
                                return &fieldGeneratorLocation;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Q':
                    if (strncmp(&(field_name[1]), "uery", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'G':
                                if (strcmp(&(field_name[6]), "ameOutcome") == 0)
                                    return &fieldGeneratorQueryGameOutcome;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[6]), "entionedGame") == 0)
                                    return &fieldGeneratorQueryMentionedGame;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "esultType") == 0)
                        return &fieldGeneratorResultType;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'a':
                                    if (strcmp(&(field_name[3]), "sonType") == 0)
                                        return &fieldGeneratorSeasonType;
                                    break;
                                case 'r':
                                    if (strncmp(&(field_name[3]), "ies", 3) == 0)
                                      {
                                        switch ((unsigned char)(field_name[6]))
                                          {
                                            case 'G':
                                                if (strcmp(&(field_name[7]), "ameNumber") == 0)
                                                    return &fieldGeneratorSeriesGameNumber;
                                                break;
                                            case 'S':
                                                if (strcmp(&(field_name[7]), "tatus") == 0)
                                                    return &fieldGeneratorSeriesStatus;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
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
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorTeams("field \"Teams\" of the SportsGameSchedulesScoresQueryData class", ignore_extras), fieldGeneratorLeagues("field \"Leagues\" of the SportsGameSchedulesScoresQueryData class", ignore_extras), fieldGeneratorDateTimeRange("field \"DateTimeRange\" of the SportsGameSchedulesScoresQueryData class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the SportsGameSchedulesScoresQueryData class", ignore_extras), fieldGeneratorHomeAway("field \"HomeAway\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorSeasonType("field \"SeasonType\" of the SportsGameSchedulesScoresQueryData class", ignore_extras), fieldGeneratorSpecialGameType("field \"SpecialGameType\" of the SportsGameSchedulesScoresQueryData class", ignore_extras), fieldGeneratorSeriesGameNumber("field \"SeriesGameNumber\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorQueryGameOutcome("field \"QueryGameOutcome\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorQueryMentionedGame("field \"QueryMentionedGame\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorResultType("field \"ResultType\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorSeriesStatus("field \"SeriesStatus\" of the SportsGameSchedulesScoresQueryData class", ignore_extras), fieldGeneratorDateTimeRangeLocationDropped("field \"DateTimeRangeLocationDropped\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorGamesIndicesBestMatches("field \"GamesIndicesBestMatches\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorGamesIndicesSecondaryMatches("field \"GamesIndicesSecondaryMatches\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorGamesIndicesRecentGames("field \"GamesIndicesRecentGames\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorGamesIndicesUpcomingGames("field \"GamesIndicesUpcomingGames\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorInferredUserFavoriteTeamIndex("field \"InferredUserFavoriteTeamIndex\" of the SportsGameSchedulesScoresQueryData class"), fieldGeneratorError("field \"Error\" of the SportsGameSchedulesScoresQueryData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsGameSchedulesScoresQueryData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorTeams.reset();
            fieldGeneratorLeagues.reset();
            fieldGeneratorDateTimeRange.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorHomeAway.reset();
            fieldGeneratorSeasonType.reset();
            fieldGeneratorSpecialGameType.reset();
            fieldGeneratorSeriesGameNumber.reset();
            fieldGeneratorQueryGameOutcome.reset();
            fieldGeneratorQueryMentionedGame.reset();
            fieldGeneratorResultType.reset();
            fieldGeneratorSeriesStatus.reset();
            fieldGeneratorDateTimeRangeLocationDropped.reset();
            fieldGeneratorGamesIndicesBestMatches.reset();
            fieldGeneratorGamesIndicesSecondaryMatches.reset();
            fieldGeneratorGamesIndicesRecentGames.reset();
            fieldGeneratorGamesIndicesUpcomingGames.reset();
            fieldGeneratorInferredUserFavoriteTeamIndex.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSGAMESCHEDULESSCORESQUERYDATAJSON_H */
