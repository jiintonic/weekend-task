/* file "SportsInputDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSINPUTDATAJSON_H
#define SPORTSINPUTDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsTeamJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "MapLocationJSON.h"
#include "SportsPlayoffSpecialGameContainerJSON.h"
#include "SportsTournamentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsInputDataJSON : public ReferenceCounted
  {
  public:
    enum TypeQueryTypeKnownValues
      {
        QueryType_Unknown,
        QueryType_Score,
        QueryType_Schedule,
        QueryType_Location,
        QueryType_ScoreOrSchedule,
        QueryType_BroadcastNetwork,
        QueryType__none
      };
    struct TypeQueryType
      {
        bool in_known_list;
        std::string string_value;
        TypeQueryTypeKnownValues list_value;

        TypeQueryType(void);
        TypeQueryType(const TypeQueryType &other);
        TypeQueryType(TypeQueryTypeKnownValues other);
        bool  operator==(const TypeQueryType &other) const;
        bool  operator!=(const TypeQueryType &other) const;
        bool  operator<(const TypeQueryType &other) const;
        bool  operator>(const TypeQueryType &other) const;
        bool  operator>=(const TypeQueryType &other) const;
        bool  operator<=(const TypeQueryType &other) const;

      };

    static TypeQueryTypeKnownValues  stringToQueryType(const char *chars);
    static const char * stringFromQueryType(TypeQueryTypeKnownValues the_enum);
    enum TypeSportsGroupKnownValues
      {
        SportsGroup_MLB,
        SportsGroup_NBA,
        SportsGroup_NFL,
        SportsGroup_NHL,
        SportsGroup_NCAAMB,
        SportsGroup_NCAAFB,
        SportsGroup_Basketball,
        SportsGroup_Football,
        SportsGroup_NCAA,
        SportsGroup_Soccer,
        SportsGroup_SoccerFootball,
        SportsGroup_MLS,
        SportsGroup_CFL,
        SportsGroup_SoccerUEFAChampionsLeague,
        SportsGroup_SoccerPrimeraDivision,
        SportsGroup_SoccerPremierLeague,
        SportsGroup_SoccerSerieA,
        SportsGroup_SoccerLigue1,
        SportsGroup_SoccerBundesliga,
        SportsGroup_SoccerEredivisie,
        SportsGroup_SoccerFirstDivisionA,
        SportsGroup_SoccerSuperLig,
        SportsGroup_SoccerSuperLeague,
        SportsGroup_SoccerPremierLeagueRUS,
        SportsGroup_SoccerPremierLeagueUKR,
        SportsGroup_SoccerPrimeiraLiga,
        SportsGroup_SoccerUEFASuperCup,
        SportsGroup_SoccerEuropaLeague,
        SportsGroup_SoccerYouthLeague,
        SportsGroup__none
      };
    struct TypeSportsGroup
      {
        bool in_known_list;
        std::string string_value;
        TypeSportsGroupKnownValues list_value;

        TypeSportsGroup(void);
        TypeSportsGroup(const TypeSportsGroup &other);
        TypeSportsGroup(TypeSportsGroupKnownValues other);
        bool  operator==(const TypeSportsGroup &other) const;
        bool  operator!=(const TypeSportsGroup &other) const;
        bool  operator<(const TypeSportsGroup &other) const;
        bool  operator>(const TypeSportsGroup &other) const;
        bool  operator>=(const TypeSportsGroup &other) const;
        bool  operator<=(const TypeSportsGroup &other) const;

      };

    static TypeSportsGroupKnownValues  stringToSportsGroup(const char *chars);
    static const char * stringFromSportsGroup(TypeSportsGroupKnownValues the_enum);
    enum TypeHA
      {
        HA_Unknown,
        HA_Home,
        HA_Away
      };

    static TypeHA  stringToHA(const char *chars);
    static const char * stringFromHA(TypeHA the_enum);
    enum TypeWinOrLose
      {
        WinOrLose_Win,
        WinOrLose_Lose,
        WinOrLose_Tie,
        WinOrLose_Unknown
      };

    static TypeWinOrLose  stringToWinOrLose(const char *chars);
    static const char * stringFromWinOrLose(TypeWinOrLose the_enum);

  private:
    bool flagHasQueryType;
    TypeQueryType storeQueryType;
    bool flagHasTeams;
    std::vector< SportsTeamJSON * > storeTeams;
    bool flagHasSportsGroup;
    TypeSportsGroup storeSportsGroup;
    bool flagHasStartDateAndOrTimeSpecInput;
    DateAndOrTimeSpecJSON * storeStartDateAndOrTimeSpecInput;
    bool flagHasEndDateAndOrTimeSpecInput;
    DateAndOrTimeSpecJSON * storeEndDateAndOrTimeSpecInput;
    bool flagHasSearchLocation;
    MapLocationJSON * storeSearchLocation;
    bool flagHasHA;
    TypeHA storeHA;
    bool flagHasIsPlayoffsSpecialGame;
    bool storeIsPlayoffsSpecialGame;
    bool flagHasPlayoffSpecialGame;
    std::vector< SportsPlayoffSpecialGameContainerJSON * > storePlayoffSpecialGame;
    bool flagHasPlayoffGameNumber;
    OInteger storePlayoffGameNumber;
    bool flagHasTournament;
    std::vector< SportsTournamentJSON * > storeTournament;
    bool flagHasWinOrLose;
    TypeWinOrLose storeWinOrLose;
    bool flagHasMentionedGame;
    bool storeMentionedGame;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsInputDataJSON(const SportsInputDataJSON &);
    SportsInputDataJSON & operator=(const SportsInputDataJSON &other);

    void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSportsGroup(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndOrTimeSpecInput(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndOrTimeSpecInput(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSearchLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHA(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsPlayoffsSpecialGame(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayoffSpecialGame(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayoffGameNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTournament(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWinOrLose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMentionedGame(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsInputDataJSON(void);
    virtual ~SportsInputDataJSON(void);
    bool  hasQueryType(void) const;
    TypeQueryType  getQueryType(void);
    const TypeQueryType  getQueryType(void) const;
    const char * getQueryTypeAsChars(void) const;
    std::string  getQueryTypeAsString(void) const;
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamJSON *  elementOfTeams(size_t element_num);
    const SportsTeamJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamJSON * >  getTeams(void);
    const std::vector< SportsTeamJSON * >  getTeams(void) const;
    bool  hasSportsGroup(void) const;
    TypeSportsGroup  getSportsGroup(void);
    const TypeSportsGroup  getSportsGroup(void) const;
    const char * getSportsGroupAsChars(void) const;
    std::string  getSportsGroupAsString(void) const;
    bool  hasStartDateAndOrTimeSpecInput(void) const;
    DateAndOrTimeSpecJSON *  getStartDateAndOrTimeSpecInput(void);
    const DateAndOrTimeSpecJSON *  getStartDateAndOrTimeSpecInput(void) const;
    bool  hasEndDateAndOrTimeSpecInput(void) const;
    DateAndOrTimeSpecJSON *  getEndDateAndOrTimeSpecInput(void);
    const DateAndOrTimeSpecJSON *  getEndDateAndOrTimeSpecInput(void) const;
    bool  hasSearchLocation(void) const;
    MapLocationJSON *  getSearchLocation(void);
    const MapLocationJSON *  getSearchLocation(void) const;
    bool  hasHA(void) const;
    TypeHA  getHA(void);
    const TypeHA  getHA(void) const;
    const char * getHAAsChars(void) const;
    std::string  getHAAsString(void) const;
    bool  hasIsPlayoffsSpecialGame(void) const;
    bool  getIsPlayoffsSpecialGame(void);
    const bool  getIsPlayoffsSpecialGame(void) const;
    bool  hasPlayoffSpecialGame(void) const;
    size_t  countOfPlayoffSpecialGame(void) const;
    SportsPlayoffSpecialGameContainerJSON *  elementOfPlayoffSpecialGame(size_t element_num);
    const SportsPlayoffSpecialGameContainerJSON *  elementOfPlayoffSpecialGame(size_t element_num) const;
    std::vector< SportsPlayoffSpecialGameContainerJSON * >  getPlayoffSpecialGame(void);
    const std::vector< SportsPlayoffSpecialGameContainerJSON * >  getPlayoffSpecialGame(void) const;
    bool  hasPlayoffGameNumber(void) const;
    OInteger  getPlayoffGameNumber(void);
    const OInteger  getPlayoffGameNumber(void) const;
    bool  hasTournament(void) const;
    size_t  countOfTournament(void) const;
    SportsTournamentJSON *  elementOfTournament(size_t element_num);
    const SportsTournamentJSON *  elementOfTournament(size_t element_num) const;
    std::vector< SportsTournamentJSON * >  getTournament(void);
    const std::vector< SportsTournamentJSON * >  getTournament(void) const;
    bool  hasWinOrLose(void) const;
    TypeWinOrLose  getWinOrLose(void);
    const TypeWinOrLose  getWinOrLose(void) const;
    const char * getWinOrLoseAsChars(void) const;
    std::string  getWinOrLoseAsString(void) const;
    bool  hasMentionedGame(void) const;
    bool  getMentionedGame(void);
    const bool  getMentionedGame(void) const;

    virtual size_t extraSportsInputDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsInputDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsInputDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsInputDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsInputDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsInputDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryType(TypeQueryType new_value)
      {
        flagHasQueryType = true;
        storeQueryType = new_value;
      }
    void setQueryType(const char *chars)
      {
        TypeQueryTypeKnownValues known = stringToQueryType(chars);
        TypeQueryType new_value;
        if (known == QueryType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setQueryType(new_value);
      }
    void setQueryType(std::string the_string)
      {
        setQueryType(the_string.c_str());
      }
    void setQueryType(TypeQueryTypeKnownValues new_value)
      {
        TypeQueryType new_full_value;
        assert(new_value != QueryType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setQueryType(new_full_value);
      }
    void unsetQueryType(void)
      {
        flagHasQueryType = false;
      }
    void initTeams(void)
      {
        if (flagHasTeams)
          {
            for (size_t num4 = 0; num4 < storeTeams.size(); ++num4)
              {
                storeTeams[num4]->remove_reference();
              }
          }
        flagHasTeams = true;
        storeTeams.clear();
      }
    void appendTeams(SportsTeamJSON * to_append)
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
            for (size_t num5 = 0; num5 < storeTeams.size(); ++num5)
              {
                storeTeams[num5]->remove_reference();
              }
          }
        flagHasTeams = false;
        storeTeams.clear();
      }
    void setSportsGroup(TypeSportsGroup new_value)
      {
        flagHasSportsGroup = true;
        storeSportsGroup = new_value;
      }
    void setSportsGroup(const char *chars)
      {
        TypeSportsGroupKnownValues known = stringToSportsGroup(chars);
        TypeSportsGroup new_value;
        if (known == SportsGroup__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSportsGroup(new_value);
      }
    void setSportsGroup(std::string the_string)
      {
        setSportsGroup(the_string.c_str());
      }
    void setSportsGroup(TypeSportsGroupKnownValues new_value)
      {
        TypeSportsGroup new_full_value;
        assert(new_value != SportsGroup__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setSportsGroup(new_full_value);
      }
    void unsetSportsGroup(void)
      {
        flagHasSportsGroup = false;
      }
    void setStartDateAndOrTimeSpecInput(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndOrTimeSpecInput)
          {
            storeStartDateAndOrTimeSpecInput->remove_reference();
          }
        flagHasStartDateAndOrTimeSpecInput = true;
        storeStartDateAndOrTimeSpecInput = new_value;
      }
    void unsetStartDateAndOrTimeSpecInput(void)
      {
        if (flagHasStartDateAndOrTimeSpecInput)
          {
            storeStartDateAndOrTimeSpecInput->remove_reference();
          }
        flagHasStartDateAndOrTimeSpecInput = false;
      }
    void setEndDateAndOrTimeSpecInput(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndOrTimeSpecInput)
          {
            storeEndDateAndOrTimeSpecInput->remove_reference();
          }
        flagHasEndDateAndOrTimeSpecInput = true;
        storeEndDateAndOrTimeSpecInput = new_value;
      }
    void unsetEndDateAndOrTimeSpecInput(void)
      {
        if (flagHasEndDateAndOrTimeSpecInput)
          {
            storeEndDateAndOrTimeSpecInput->remove_reference();
          }
        flagHasEndDateAndOrTimeSpecInput = false;
      }
    void setSearchLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSearchLocation)
          {
            storeSearchLocation->remove_reference();
          }
        flagHasSearchLocation = true;
        storeSearchLocation = new_value;
      }
    void unsetSearchLocation(void)
      {
        if (flagHasSearchLocation)
          {
            storeSearchLocation->remove_reference();
          }
        flagHasSearchLocation = false;
      }
    void setHA(TypeHA new_value)
      {
        flagHasHA = true;
        storeHA = new_value;
      }
    void setHA(const char *chars)
      {
        setHA(stringToHA(chars));
      }
    void setHA(std::string the_string)
      {
        setHA(stringToHA(the_string.c_str()));
      }
    void unsetHA(void)
      {
        flagHasHA = false;
      }
    void setIsPlayoffsSpecialGame(bool new_value)
      {
        flagHasIsPlayoffsSpecialGame = true;
        storeIsPlayoffsSpecialGame = new_value;
      }
    void unsetIsPlayoffsSpecialGame(void)
      {
        flagHasIsPlayoffsSpecialGame = false;
      }
    void initPlayoffSpecialGame(void)
      {
        if (flagHasPlayoffSpecialGame)
          {
            for (size_t num6 = 0; num6 < storePlayoffSpecialGame.size(); ++num6)
              {
                storePlayoffSpecialGame[num6]->remove_reference();
              }
          }
        flagHasPlayoffSpecialGame = true;
        storePlayoffSpecialGame.clear();
      }
    void appendPlayoffSpecialGame(SportsPlayoffSpecialGameContainerJSON * to_append)
      {
        if (!flagHasPlayoffSpecialGame)
          {
            flagHasPlayoffSpecialGame = true;
            storePlayoffSpecialGame.clear();
          }
        assert(flagHasPlayoffSpecialGame);
        to_append->add_reference();
        storePlayoffSpecialGame.push_back(to_append);
      }
    void unsetPlayoffSpecialGame(void)
      {
        if (flagHasPlayoffSpecialGame)
          {
            for (size_t num7 = 0; num7 < storePlayoffSpecialGame.size(); ++num7)
              {
                storePlayoffSpecialGame[num7]->remove_reference();
              }
          }
        flagHasPlayoffSpecialGame = false;
        storePlayoffSpecialGame.clear();
      }
    void setPlayoffGameNumber(OInteger new_value)
      {
        flagHasPlayoffGameNumber = true;
        if (new_value < 1)
            throw("The value for field PlayoffGameNumber of SportsInputDataJSON is less than the lower bound (1) for that field.");
        storePlayoffGameNumber = new_value;
      }
    void unsetPlayoffGameNumber(void)
      {
        flagHasPlayoffGameNumber = false;
      }
    void initTournament(void)
      {
        if (flagHasTournament)
          {
            for (size_t num8 = 0; num8 < storeTournament.size(); ++num8)
              {
                storeTournament[num8]->remove_reference();
              }
          }
        flagHasTournament = true;
        storeTournament.clear();
      }
    void appendTournament(SportsTournamentJSON * to_append)
      {
        if (!flagHasTournament)
          {
            flagHasTournament = true;
            storeTournament.clear();
          }
        assert(flagHasTournament);
        to_append->add_reference();
        storeTournament.push_back(to_append);
      }
    void unsetTournament(void)
      {
        if (flagHasTournament)
          {
            for (size_t num9 = 0; num9 < storeTournament.size(); ++num9)
              {
                storeTournament[num9]->remove_reference();
              }
          }
        flagHasTournament = false;
        storeTournament.clear();
      }
    void setWinOrLose(TypeWinOrLose new_value)
      {
        flagHasWinOrLose = true;
        storeWinOrLose = new_value;
      }
    void setWinOrLose(const char *chars)
      {
        setWinOrLose(stringToWinOrLose(chars));
      }
    void setWinOrLose(std::string the_string)
      {
        setWinOrLose(stringToWinOrLose(the_string.c_str()));
      }
    void unsetWinOrLose(void)
      {
        flagHasWinOrLose = false;
      }
    void setMentionedGame(bool new_value)
      {
        flagHasMentionedGame = true;
        storeMentionedGame = new_value;
      }
    void unsetMentionedGame(void)
      {
        flagHasMentionedGame = false;
      }

    virtual void extraSportsInputDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsInputDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsInputDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsInputDataAppendPair(key, new_component);
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
        assert(flagHasQueryType);
        handler->start_pair("QueryType");
        if (storeQueryType.in_known_list)
          {
            switch (storeQueryType.list_value)
              {
                case QueryType_Unknown:
                    handler->string_value("Unknown");
                    break;
                case QueryType_Score:
                    handler->string_value("Score");
                    break;
                case QueryType_Schedule:
                    handler->string_value("Schedule");
                    break;
                case QueryType_Location:
                    handler->string_value("Location");
                    break;
                case QueryType_ScoreOrSchedule:
                    handler->string_value("ScoreOrSchedule");
                    break;
                case QueryType_BroadcastNetwork:
                    handler->string_value("BroadcastNetwork");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeQueryType.string_value);
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
        if (flagHasSportsGroup)
          {
            handler->start_pair("SportsGroup");
            if (storeSportsGroup.in_known_list)
              {
                switch (storeSportsGroup.list_value)
                  {
                    case SportsGroup_MLB:
                        handler->string_value("MLB");
                        break;
                    case SportsGroup_NBA:
                        handler->string_value("NBA");
                        break;
                    case SportsGroup_NFL:
                        handler->string_value("NFL");
                        break;
                    case SportsGroup_NHL:
                        handler->string_value("NHL");
                        break;
                    case SportsGroup_NCAAMB:
                        handler->string_value("NCAAMB");
                        break;
                    case SportsGroup_NCAAFB:
                        handler->string_value("NCAAFB");
                        break;
                    case SportsGroup_Basketball:
                        handler->string_value("Basketball");
                        break;
                    case SportsGroup_Football:
                        handler->string_value("Football");
                        break;
                    case SportsGroup_NCAA:
                        handler->string_value("NCAA");
                        break;
                    case SportsGroup_Soccer:
                        handler->string_value("Soccer");
                        break;
                    case SportsGroup_SoccerFootball:
                        handler->string_value("SoccerFootball");
                        break;
                    case SportsGroup_MLS:
                        handler->string_value("MLS");
                        break;
                    case SportsGroup_CFL:
                        handler->string_value("CFL");
                        break;
                    case SportsGroup_SoccerUEFAChampionsLeague:
                        handler->string_value("SoccerUEFAChampionsLeague");
                        break;
                    case SportsGroup_SoccerPrimeraDivision:
                        handler->string_value("SoccerPrimeraDivision");
                        break;
                    case SportsGroup_SoccerPremierLeague:
                        handler->string_value("SoccerPremierLeague");
                        break;
                    case SportsGroup_SoccerSerieA:
                        handler->string_value("SoccerSerieA");
                        break;
                    case SportsGroup_SoccerLigue1:
                        handler->string_value("SoccerLigue1");
                        break;
                    case SportsGroup_SoccerBundesliga:
                        handler->string_value("SoccerBundesliga");
                        break;
                    case SportsGroup_SoccerEredivisie:
                        handler->string_value("SoccerEredivisie");
                        break;
                    case SportsGroup_SoccerFirstDivisionA:
                        handler->string_value("SoccerFirstDivisionA");
                        break;
                    case SportsGroup_SoccerSuperLig:
                        handler->string_value("SoccerSuperLig");
                        break;
                    case SportsGroup_SoccerSuperLeague:
                        handler->string_value("SoccerSuperLeague");
                        break;
                    case SportsGroup_SoccerPremierLeagueRUS:
                        handler->string_value("SoccerPremierLeagueRUS");
                        break;
                    case SportsGroup_SoccerPremierLeagueUKR:
                        handler->string_value("SoccerPremierLeagueUKR");
                        break;
                    case SportsGroup_SoccerPrimeiraLiga:
                        handler->string_value("SoccerPrimeiraLiga");
                        break;
                    case SportsGroup_SoccerUEFASuperCup:
                        handler->string_value("SoccerUEFASuperCup");
                        break;
                    case SportsGroup_SoccerEuropaLeague:
                        handler->string_value("SoccerEuropaLeague");
                        break;
                    case SportsGroup_SoccerYouthLeague:
                        handler->string_value("SoccerYouthLeague");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeSportsGroup.string_value);
              }
          }
        if (flagHasStartDateAndOrTimeSpecInput)
          {
            handler->start_pair("StartDateAndOrTimeSpecInput");
            storeStartDateAndOrTimeSpecInput->write_as_json(handler);
          }
        if (flagHasEndDateAndOrTimeSpecInput)
          {
            handler->start_pair("EndDateAndOrTimeSpecInput");
            storeEndDateAndOrTimeSpecInput->write_as_json(handler);
          }
        if (flagHasSearchLocation)
          {
            handler->start_pair("SearchLocation");
            storeSearchLocation->write_as_json(handler);
          }
        if (flagHasHA)
          {
            handler->start_pair("HA");
            switch (storeHA)
              {
                case HA_Unknown:
                    handler->string_value("Unknown");
                    break;
                case HA_Home:
                    handler->string_value("Home");
                    break;
                case HA_Away:
                    handler->string_value("Away");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasIsPlayoffsSpecialGame)
          {
            handler->start_pair("IsPlayoffsSpecialGame");
            handler->boolean_value(storeIsPlayoffsSpecialGame);
          }
        if (flagHasPlayoffSpecialGame)
          {
            handler->start_pair("PlayoffSpecialGame");
            assert(storePlayoffSpecialGame.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storePlayoffSpecialGame.size(); ++num2)
              {
                storePlayoffSpecialGame[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasPlayoffGameNumber)
          {
            handler->start_pair("PlayoffGameNumber");
            handler->number_value(storePlayoffGameNumber.get_o_integer());
          }
        if (flagHasTournament)
          {
            handler->start_pair("Tournament");
            assert(storeTournament.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeTournament.size(); ++num3)
              {
                storeTournament[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasWinOrLose)
          {
            handler->start_pair("WinOrLose");
            switch (storeWinOrLose)
              {
                case WinOrLose_Win:
                    handler->string_value("Win");
                    break;
                case WinOrLose_Lose:
                    handler->string_value("Lose");
                    break;
                case WinOrLose_Tie:
                    handler->string_value("Tie");
                    break;
                case WinOrLose_Unknown:
                    handler->string_value("Unknown");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasMentionedGame)
          {
            handler->start_pair("MentionedGame");
            handler->boolean_value(storeMentionedGame);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryType()))
          {
            return "When parsing the object for %what%, the \"QueryType\" field was missing.";
          }
        return NULL;
      }

    static SportsInputDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsInputDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsInputDataJSON>, SportsInputDataJSON *, bool> generator("Type SportsInputData", ignore_extras);
            parse_json_value(text, "Text for SportsInputDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsInputDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsInputDataJSON>, SportsInputDataJSON *, bool> generator("Type SportsInputData", ignore_extras);
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
    class FieldGeneratorQueryType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQueryType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQueryType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeQueryTypeKnownValues known = stringToQueryType(result);
                TypeQueryType new_value;
                if (known == QueryType__none)
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
            virtual void handle_result(TypeQueryType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorQueryType, TypeQueryType, TypeQueryType > fieldGeneratorQueryType;
        JSONHoldingArrayGenerator<SportsTeamJSON::Generator, RCHandle<SportsTeamJSON>, SportsTeamJSON *, bool > fieldGeneratorTeams;
    class FieldGeneratorSportsGroup : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSportsGroup(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSportsGroup(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeSportsGroupKnownValues known = stringToSportsGroup(result);
                TypeSportsGroup new_value;
                if (known == SportsGroup__none)
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
            virtual void handle_result(TypeSportsGroup result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSportsGroup, TypeSportsGroup, TypeSportsGroup > fieldGeneratorSportsGroup;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorStartDateAndOrTimeSpecInput;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorEndDateAndOrTimeSpecInput;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorSearchLocation;
    class FieldGeneratorHA : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHA(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHA(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToHA(result));
              }
            virtual void handle_result(TypeHA result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHA, TypeHA, TypeHA > fieldGeneratorHA;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsPlayoffsSpecialGame;
        JSONHoldingArrayGenerator<SportsPlayoffSpecialGameContainerJSON::Generator, RCHandle<SportsPlayoffSpecialGameContainerJSON>, SportsPlayoffSpecialGameContainerJSON *, bool > fieldGeneratorPlayoffSpecialGame;
        static char lowerBoundPlayoffGameNumber[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPlayoffGameNumber>, OInteger, o_integer > fieldGeneratorPlayoffGameNumber;
        JSONHoldingArrayGenerator<SportsTournamentJSON::Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool > fieldGeneratorTournament;
    class FieldGeneratorWinOrLose : public JSONStringGenerator
          {
          protected:
            FieldGeneratorWinOrLose(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorWinOrLose(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToWinOrLose(result));
              }
            virtual void handle_result(TypeWinOrLose result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorWinOrLose, TypeWinOrLose, TypeWinOrLose > fieldGeneratorWinOrLose;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMentionedGame;
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
            SportsInputDataJSON *result = new SportsInputDataJSON();
            assert(result != NULL);
            RCHandle<SportsInputDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsInputDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsInputDataJSON *result)
          {
            if (fieldGeneratorQueryType.have_value)
              {
                result->setQueryType(fieldGeneratorQueryType.value);
                fieldGeneratorQueryType.have_value = false;
              }
            else if (!(result->hasQueryType()))
              {
                error("When parsing the object for %what%, the \"QueryType\" field was missing.");
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
            if (fieldGeneratorSportsGroup.have_value)
              {
                result->setSportsGroup(fieldGeneratorSportsGroup.value);
                fieldGeneratorSportsGroup.have_value = false;
              }
            if (fieldGeneratorStartDateAndOrTimeSpecInput.have_value)
              {
                result->setStartDateAndOrTimeSpecInput(fieldGeneratorStartDateAndOrTimeSpecInput.value.referenced());
                fieldGeneratorStartDateAndOrTimeSpecInput.have_value = false;
              }
            if (fieldGeneratorEndDateAndOrTimeSpecInput.have_value)
              {
                result->setEndDateAndOrTimeSpecInput(fieldGeneratorEndDateAndOrTimeSpecInput.value.referenced());
                fieldGeneratorEndDateAndOrTimeSpecInput.have_value = false;
              }
            if (fieldGeneratorSearchLocation.have_value)
              {
                result->setSearchLocation(fieldGeneratorSearchLocation.value.referenced());
                fieldGeneratorSearchLocation.have_value = false;
              }
            if (fieldGeneratorHA.have_value)
              {
                result->setHA(fieldGeneratorHA.value);
                fieldGeneratorHA.have_value = false;
              }
            if (fieldGeneratorIsPlayoffsSpecialGame.have_value)
              {
                result->setIsPlayoffsSpecialGame(fieldGeneratorIsPlayoffsSpecialGame.value);
                fieldGeneratorIsPlayoffsSpecialGame.have_value = false;
              }
            if (fieldGeneratorPlayoffSpecialGame.have_value)
              {
                result->initPlayoffSpecialGame();
                size_t count = fieldGeneratorPlayoffSpecialGame.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlayoffSpecialGame(fieldGeneratorPlayoffSpecialGame.value[num].referenced());
                  }
                fieldGeneratorPlayoffSpecialGame.value.clear();
                fieldGeneratorPlayoffSpecialGame.have_value = false;
              }
            if (fieldGeneratorPlayoffGameNumber.have_value)
              {
                result->setPlayoffGameNumber(fieldGeneratorPlayoffGameNumber.value);
                fieldGeneratorPlayoffGameNumber.have_value = false;
              }
            if (fieldGeneratorTournament.have_value)
              {
                result->initTournament();
                size_t count = fieldGeneratorTournament.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTournament(fieldGeneratorTournament.value[num].referenced());
                  }
                fieldGeneratorTournament.value.clear();
                fieldGeneratorTournament.have_value = false;
              }
            if (fieldGeneratorWinOrLose.have_value)
              {
                result->setWinOrLose(fieldGeneratorWinOrLose.value);
                fieldGeneratorWinOrLose.have_value = false;
              }
            if (fieldGeneratorMentionedGame.have_value)
              {
                result->setMentionedGame(fieldGeneratorMentionedGame.value);
                fieldGeneratorMentionedGame.have_value = false;
              }
          }
        virtual void handle_result(SportsInputDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ndDateAndOrTimeSpecInput") == 0)
                        return &fieldGeneratorEndDateAndOrTimeSpecInput;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "A") == 0)
                        return &fieldGeneratorHA;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sPlayoffsSpecialGame") == 0)
                        return &fieldGeneratorIsPlayoffsSpecialGame;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "entionedGame") == 0)
                        return &fieldGeneratorMentionedGame;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "layoff", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'G':
                                if (strcmp(&(field_name[8]), "ameNumber") == 0)
                                    return &fieldGeneratorPlayoffGameNumber;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "pecialGame") == 0)
                                    return &fieldGeneratorPlayoffSpecialGame;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryType") == 0)
                        return &fieldGeneratorQueryType;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "archLocation") == 0)
                                return &fieldGeneratorSearchLocation;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "ortsGroup") == 0)
                                return &fieldGeneratorSportsGroup;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "artDateAndOrTimeSpecInput") == 0)
                                return &fieldGeneratorStartDateAndOrTimeSpecInput;
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
                        default:
                            break;
                      }
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "inOrLose") == 0)
                        return &fieldGeneratorWinOrLose;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the SportsInputData class"), fieldGeneratorTeams("field \"Teams\" of the SportsInputData class", ignore_extras), fieldGeneratorSportsGroup("field \"SportsGroup\" of the SportsInputData class"), fieldGeneratorStartDateAndOrTimeSpecInput("field \"StartDateAndOrTimeSpecInput\" of the SportsInputData class", ignore_extras), fieldGeneratorEndDateAndOrTimeSpecInput("field \"EndDateAndOrTimeSpecInput\" of the SportsInputData class", ignore_extras), fieldGeneratorSearchLocation("field \"SearchLocation\" of the SportsInputData class", ignore_extras), fieldGeneratorHA("field \"HA\" of the SportsInputData class"), fieldGeneratorIsPlayoffsSpecialGame("field \"IsPlayoffsSpecialGame\" of the SportsInputData class"), fieldGeneratorPlayoffSpecialGame("field \"PlayoffSpecialGame\" of the SportsInputData class", ignore_extras), fieldGeneratorPlayoffGameNumber("field \"PlayoffGameNumber\" of the SportsInputData class"), fieldGeneratorTournament("field \"Tournament\" of the SportsInputData class", ignore_extras), fieldGeneratorWinOrLose("field \"WinOrLose\" of the SportsInputData class"), fieldGeneratorMentionedGame("field \"MentionedGame\" of the SportsInputData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsInputData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryType.reset();
            fieldGeneratorTeams.reset();
            fieldGeneratorSportsGroup.reset();
            fieldGeneratorStartDateAndOrTimeSpecInput.reset();
            fieldGeneratorEndDateAndOrTimeSpecInput.reset();
            fieldGeneratorSearchLocation.reset();
            fieldGeneratorHA.reset();
            fieldGeneratorIsPlayoffsSpecialGame.reset();
            fieldGeneratorPlayoffSpecialGame.reset();
            fieldGeneratorPlayoffGameNumber.reset();
            fieldGeneratorTournament.reset();
            fieldGeneratorWinOrLose.reset();
            fieldGeneratorMentionedGame.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSINPUTDATAJSON_H */
