/* file "SportsResultScoreJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSRESULTSCOREJSON_H
#define SPORTSRESULTSCOREJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "SportsTeamJSON.h"
#include "DateAndOrTimeJSON.h"
#include "SportsVenueJSON.h"
#include "SportsPlayoffSpecialGameJSON.h"
#include "SportsTournamentJSON.h"
#include "SportsSportImageJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsResultScoreJSON : public ReferenceCounted
  {
  public:
    enum TypeGameStatusKnownValues
      {
        GameStatus_Unknown,
        GameStatus_Scheduled,
        GameStatus_InProgress,
        GameStatus_Complete,
        GameStatus_Other,
        GameStatus_Delayed,
        GameStatus_DelayedWeather,
        GameStatus_DelayedFacility,
        GameStatus_Postponed,
        GameStatus_Suspended,
        GameStatus_Canceled,
        GameStatus_Unnecessary,
        GameStatus_ScheduledFlex,
        GameStatus_ScheduledTimeTBD,
        GameStatus__none
      };
    struct TypeGameStatus
      {
        bool in_known_list;
        std::string string_value;
        TypeGameStatusKnownValues list_value;

        TypeGameStatus(void);
        TypeGameStatus(const TypeGameStatus &other);
        TypeGameStatus(TypeGameStatusKnownValues other);
        bool  operator==(const TypeGameStatus &other) const;
        bool  operator!=(const TypeGameStatus &other) const;
        bool  operator<(const TypeGameStatus &other) const;
        bool  operator>(const TypeGameStatus &other) const;
        bool  operator>=(const TypeGameStatus &other) const;
        bool  operator<=(const TypeGameStatus &other) const;

      };

    static TypeGameStatusKnownValues  stringToGameStatus(const char *chars);
    static const char * stringFromGameStatus(TypeGameStatusKnownValues the_enum);
    enum TypeSportsResultTypeKnownValues
      {
        SportsResultType_Primary,
        SportsResultType_Secondary,
        SportsResultType__none
      };
    struct TypeSportsResultType
      {
        bool in_known_list;
        std::string string_value;
        TypeSportsResultTypeKnownValues list_value;

        TypeSportsResultType(void);
        TypeSportsResultType(const TypeSportsResultType &other);
        TypeSportsResultType(TypeSportsResultTypeKnownValues other);
        bool  operator==(const TypeSportsResultType &other) const;
        bool  operator!=(const TypeSportsResultType &other) const;
        bool  operator<(const TypeSportsResultType &other) const;
        bool  operator>(const TypeSportsResultType &other) const;
        bool  operator>=(const TypeSportsResultType &other) const;
        bool  operator<=(const TypeSportsResultType &other) const;

      };

    static TypeSportsResultTypeKnownValues  stringToSportsResultType(const char *chars);
    static const char * stringFromSportsResultType(TypeSportsResultTypeKnownValues the_enum);

  private:
    bool flagHasTeams;
    std::vector< SportsTeamJSON * > storeTeams;
    bool flagHasGameStartTime;
    DateAndOrTimeJSON * storeGameStartTime;
    bool flagHasGameStatus;
    TypeGameStatus storeGameStatus;
    bool flagHasQuarterInningPeriod;
    OInteger storeQuarterInningPeriod;
    bool flagHasQuarterInningPeriodClock;
    std::string storeQuarterInningPeriodClock;
    bool flagHasVenue;
    SportsVenueJSON * storeVenue;
    bool flagHasBroadcastNetwork;
    std::string storeBroadcastNetwork;
    bool flagHasSportsResultType;
    TypeSportsResultType storeSportsResultType;
    bool flagHasPlayoffs;
    bool storePlayoffs;
    bool flagHasPlayoffGame;
    std::string storePlayoffGame;
    bool flagHasPlayoffType;
    SportsPlayoffSpecialGameJSON * storePlayoffType;
    bool flagHasTournament;
    SportsTournamentJSON * storeTournament;
    bool flagHasPreSeason;
    bool storePreSeason;
    bool flagHasGameID;
    std::string storeGameID;
    bool flagHasSportImage;
    SportsSportImageJSON * storeSportImage;

    SportsResultScoreJSON(const SportsResultScoreJSON &);
    SportsResultScoreJSON & operator=(const SportsResultScoreJSON &other);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGameStartTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGameStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuarterInningPeriod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuarterInningPeriodClock(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVenue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBroadcastNetwork(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSportsResultType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayoffs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayoffGame(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayoffType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTournament(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGameID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSportImage(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsResultScoreJSON(void);
    virtual ~SportsResultScoreJSON(void);
    virtual const char *getSportsResultScoreKind(void) const = 0;
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamJSON *  elementOfTeams(size_t element_num);
    const SportsTeamJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamJSON * >  getTeams(void);
    const std::vector< SportsTeamJSON * >  getTeams(void) const;
    bool  hasGameStartTime(void) const;
    DateAndOrTimeJSON *  getGameStartTime(void);
    const DateAndOrTimeJSON *  getGameStartTime(void) const;
    bool  hasGameStatus(void) const;
    TypeGameStatus  getGameStatus(void);
    const TypeGameStatus  getGameStatus(void) const;
    const char * getGameStatusAsChars(void) const;
    std::string  getGameStatusAsString(void) const;
    bool  hasQuarterInningPeriod(void) const;
    OInteger  getQuarterInningPeriod(void);
    const OInteger  getQuarterInningPeriod(void) const;
    bool  hasQuarterInningPeriodClock(void) const;
    std::string  getQuarterInningPeriodClock(void);
    const std::string  getQuarterInningPeriodClock(void) const;
    bool  hasVenue(void) const;
    SportsVenueJSON *  getVenue(void);
    const SportsVenueJSON *  getVenue(void) const;
    bool  hasBroadcastNetwork(void) const;
    std::string  getBroadcastNetwork(void);
    const std::string  getBroadcastNetwork(void) const;
    bool  hasSportsResultType(void) const;
    TypeSportsResultType  getSportsResultType(void);
    const TypeSportsResultType  getSportsResultType(void) const;
    const char * getSportsResultTypeAsChars(void) const;
    std::string  getSportsResultTypeAsString(void) const;
    bool  hasPlayoffs(void) const;
    bool  getPlayoffs(void);
    const bool  getPlayoffs(void) const;
    bool  hasPlayoffGame(void) const;
    std::string  getPlayoffGame(void);
    const std::string  getPlayoffGame(void) const;
    bool  hasPlayoffType(void) const;
    SportsPlayoffSpecialGameJSON *  getPlayoffType(void);
    const SportsPlayoffSpecialGameJSON *  getPlayoffType(void) const;
    SportsPlayoffSpecialGameJSON::TypeValue  getPlayoffTypeValue(void);
    const SportsPlayoffSpecialGameJSON::TypeValue  getPlayoffTypeValue(void) const;
    const char * getPlayoffTypeAsChars(void) const;
    std::string  getPlayoffTypeAsString(void) const;
    bool  hasTournament(void) const;
    SportsTournamentJSON *  getTournament(void);
    const SportsTournamentJSON *  getTournament(void) const;
    bool  hasPreSeason(void) const;
    bool  getPreSeason(void);
    const bool  getPreSeason(void) const;
    bool  hasGameID(void) const;
    std::string  getGameID(void);
    const std::string  getGameID(void) const;
    bool  hasSportImage(void) const;
    SportsSportImageJSON *  getSportImage(void);
    const SportsSportImageJSON *  getSportImage(void) const;

    virtual size_t extraSportsResultScoreComponentCount(void) const = 0;
    virtual const char *extraSportsResultScoreComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraSportsResultScoreComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraSportsResultScoreComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraSportsResultScoreLookup(const char *field_name) = 0;
    virtual const JSONValue *extraSportsResultScoreLookup(const char *field_name) const = 0;

    void initTeams(void)
      {
        if (flagHasTeams)
          {
            for (size_t num2 = 0; num2 < storeTeams.size(); ++num2)
              {
                storeTeams[num2]->remove_reference();
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
            for (size_t num3 = 0; num3 < storeTeams.size(); ++num3)
              {
                storeTeams[num3]->remove_reference();
              }
          }
        flagHasTeams = false;
        storeTeams.clear();
      }
    void setGameStartTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGameStartTime)
          {
            storeGameStartTime->remove_reference();
          }
        flagHasGameStartTime = true;
        storeGameStartTime = new_value;
      }
    void unsetGameStartTime(void)
      {
        if (flagHasGameStartTime)
          {
            storeGameStartTime->remove_reference();
          }
        flagHasGameStartTime = false;
      }
    void setGameStatus(TypeGameStatus new_value)
      {
        flagHasGameStatus = true;
        storeGameStatus = new_value;
      }
    void setGameStatus(const char *chars)
      {
        TypeGameStatusKnownValues known = stringToGameStatus(chars);
        TypeGameStatus new_value;
        if (known == GameStatus__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setGameStatus(new_value);
      }
    void setGameStatus(std::string the_string)
      {
        setGameStatus(the_string.c_str());
      }
    void setGameStatus(TypeGameStatusKnownValues new_value)
      {
        TypeGameStatus new_full_value;
        assert(new_value != GameStatus__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setGameStatus(new_full_value);
      }
    void unsetGameStatus(void)
      {
        flagHasGameStatus = false;
      }
    void setQuarterInningPeriod(OInteger new_value)
      {
        flagHasQuarterInningPeriod = true;
        if (new_value < 0)
            throw("The value for field QuarterInningPeriod of SportsResultScoreJSON is less than the lower bound (0) for that field.");
        storeQuarterInningPeriod = new_value;
      }
    void unsetQuarterInningPeriod(void)
      {
        flagHasQuarterInningPeriod = false;
      }
    void setQuarterInningPeriodClock(std::string new_value)
      {
        flagHasQuarterInningPeriodClock = true;
        storeQuarterInningPeriodClock = new_value;
      }
    void unsetQuarterInningPeriodClock(void)
      {
        flagHasQuarterInningPeriodClock = false;
      }
    void setVenue(SportsVenueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasVenue)
          {
            storeVenue->remove_reference();
          }
        flagHasVenue = true;
        storeVenue = new_value;
      }
    void unsetVenue(void)
      {
        if (flagHasVenue)
          {
            storeVenue->remove_reference();
          }
        flagHasVenue = false;
      }
    void setBroadcastNetwork(std::string new_value)
      {
        flagHasBroadcastNetwork = true;
        storeBroadcastNetwork = new_value;
      }
    void unsetBroadcastNetwork(void)
      {
        flagHasBroadcastNetwork = false;
      }
    void setSportsResultType(TypeSportsResultType new_value)
      {
        flagHasSportsResultType = true;
        storeSportsResultType = new_value;
      }
    void setSportsResultType(const char *chars)
      {
        TypeSportsResultTypeKnownValues known = stringToSportsResultType(chars);
        TypeSportsResultType new_value;
        if (known == SportsResultType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSportsResultType(new_value);
      }
    void setSportsResultType(std::string the_string)
      {
        setSportsResultType(the_string.c_str());
      }
    void setSportsResultType(TypeSportsResultTypeKnownValues new_value)
      {
        TypeSportsResultType new_full_value;
        assert(new_value != SportsResultType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setSportsResultType(new_full_value);
      }
    void unsetSportsResultType(void)
      {
        flagHasSportsResultType = false;
      }
    void setPlayoffs(bool new_value)
      {
        flagHasPlayoffs = true;
        storePlayoffs = new_value;
      }
    void unsetPlayoffs(void)
      {
        flagHasPlayoffs = false;
      }
    void setPlayoffGame(std::string new_value)
      {
        flagHasPlayoffGame = true;
        storePlayoffGame = new_value;
      }
    void unsetPlayoffGame(void)
      {
        flagHasPlayoffGame = false;
      }
    void setPlayoffType(SportsPlayoffSpecialGameJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPlayoffType)
          {
            storePlayoffType->remove_reference();
          }
        flagHasPlayoffType = true;
        storePlayoffType = new_value;
      }
    void setPlayoffType(SportsPlayoffSpecialGameJSON::TypeValue new_value)
      {
        setPlayoffType(new SportsPlayoffSpecialGameJSON(new_value));
      }
    void setPlayoffType(const char *chars)
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
        setPlayoffType(new_value);
      }
    void setPlayoffType(std::string the_string)
      {
        setPlayoffType(the_string.c_str());
      }
    void unsetPlayoffType(void)
      {
        if (flagHasPlayoffType)
          {
            storePlayoffType->remove_reference();
          }
        flagHasPlayoffType = false;
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
    void setPreSeason(bool new_value)
      {
        flagHasPreSeason = true;
        storePreSeason = new_value;
      }
    void unsetPreSeason(void)
      {
        flagHasPreSeason = false;
      }
    void setGameID(std::string new_value)
      {
        flagHasGameID = true;
        storeGameID = new_value;
      }
    void unsetGameID(void)
      {
        flagHasGameID = false;
      }
    void setSportImage(SportsSportImageJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSportImage)
          {
            storeSportImage->remove_reference();
          }
        flagHasSportImage = true;
        storeSportImage = new_value;
      }
    void unsetSportImage(void)
      {
        if (flagHasSportImage)
          {
            storeSportImage->remove_reference();
          }
        flagHasSportImage = false;
      }

    virtual void extraSportsResultScoreAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraSportsResultScoreSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("SportsResultScoreKind", getSportsResultScoreKind());
        if (flagHasTeams)
          {
            handler->start_pair("Teams");
            assert(storeTeams.size() >= 2);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
              {
                storeTeams[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasGameStartTime)
          {
            handler->start_pair("GameStartTime");
            storeGameStartTime->write_as_json(handler);
          }
        if (flagHasGameStatus)
          {
            handler->start_pair("GameStatus");
            if (storeGameStatus.in_known_list)
              {
                switch (storeGameStatus.list_value)
                  {
                    case GameStatus_Unknown:
                        handler->string_value("Unknown");
                        break;
                    case GameStatus_Scheduled:
                        handler->string_value("Scheduled");
                        break;
                    case GameStatus_InProgress:
                        handler->string_value("InProgress");
                        break;
                    case GameStatus_Complete:
                        handler->string_value("Complete");
                        break;
                    case GameStatus_Other:
                        handler->string_value("Other");
                        break;
                    case GameStatus_Delayed:
                        handler->string_value("Delayed");
                        break;
                    case GameStatus_DelayedWeather:
                        handler->string_value("DelayedWeather");
                        break;
                    case GameStatus_DelayedFacility:
                        handler->string_value("DelayedFacility");
                        break;
                    case GameStatus_Postponed:
                        handler->string_value("Postponed");
                        break;
                    case GameStatus_Suspended:
                        handler->string_value("Suspended");
                        break;
                    case GameStatus_Canceled:
                        handler->string_value("Canceled");
                        break;
                    case GameStatus_Unnecessary:
                        handler->string_value("Unnecessary");
                        break;
                    case GameStatus_ScheduledFlex:
                        handler->string_value("ScheduledFlex");
                        break;
                    case GameStatus_ScheduledTimeTBD:
                        handler->string_value("ScheduledTimeTBD");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeGameStatus.string_value);
              }
          }
        if (flagHasQuarterInningPeriod)
          {
            handler->start_pair("QuarterInningPeriod");
            handler->number_value(storeQuarterInningPeriod.get_o_integer());
          }
        if (flagHasQuarterInningPeriodClock)
          {
            handler->start_pair("QuarterInningPeriodClock");
            handler->string_value(storeQuarterInningPeriodClock);
          }
        if (flagHasVenue)
          {
            handler->start_pair("Venue");
            storeVenue->write_as_json(handler);
          }
        if (flagHasBroadcastNetwork)
          {
            handler->start_pair("BroadcastNetwork");
            handler->string_value(storeBroadcastNetwork);
          }
        if (flagHasSportsResultType)
          {
            handler->start_pair("SportsResultType");
            if (storeSportsResultType.in_known_list)
              {
                switch (storeSportsResultType.list_value)
                  {
                    case SportsResultType_Primary:
                        handler->string_value("Primary");
                        break;
                    case SportsResultType_Secondary:
                        handler->string_value("Secondary");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeSportsResultType.string_value);
              }
          }
        if (flagHasPlayoffs)
          {
            handler->start_pair("Playoffs");
            handler->boolean_value(storePlayoffs);
          }
        if (flagHasPlayoffGame)
          {
            handler->start_pair("PlayoffGame");
            handler->string_value(storePlayoffGame);
          }
        if (flagHasPlayoffType)
          {
            handler->start_pair("PlayoffType");
            storePlayoffType->write_as_json(handler);
          }
        if (flagHasTournament)
          {
            handler->start_pair("Tournament");
            storeTournament->write_as_json(handler);
          }
        if (flagHasPreSeason)
          {
            handler->start_pair("PreSeason");
            handler->boolean_value(storePreSeason);
          }
        if (flagHasGameID)
          {
            handler->start_pair("GameID");
            handler->string_value(storeGameID);
          }
        if (flagHasSportImage)
          {
            handler->start_pair("SportImage");
            storeSportImage->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsResultScoreJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsResultScoreJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsResultScoreJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsResultScoreJSON>, SportsResultScoreJSON *, bool> generator("Type SportsResultScore", ignore_extras);
            parse_json_value(text, "Text for SportsResultScoreJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsResultScoreJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsResultScoreJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsResultScoreJSON>, SportsResultScoreJSON *, bool> generator("Type SportsResultScore", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsTeamJSON::Generator, RCHandle<SportsTeamJSON>, SportsTeamJSON *, bool > fieldGeneratorTeams;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorGameStartTime;
    class FieldGeneratorGameStatus : public JSONStringGenerator
          {
          protected:
            FieldGeneratorGameStatus(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorGameStatus(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeGameStatusKnownValues known = stringToGameStatus(result);
                TypeGameStatus new_value;
                if (known == GameStatus__none)
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
            virtual void handle_result(TypeGameStatus result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorGameStatus, TypeGameStatus, TypeGameStatus > fieldGeneratorGameStatus;
        static char lowerBoundQuarterInningPeriod[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundQuarterInningPeriod>, OInteger, o_integer > fieldGeneratorQuarterInningPeriod;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorQuarterInningPeriodClock;
        JSONHoldingGenerator<SportsVenueJSON::Generator, RCHandle<SportsVenueJSON>, SportsVenueJSON *, bool > fieldGeneratorVenue;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBroadcastNetwork;
    class FieldGeneratorSportsResultType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSportsResultType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSportsResultType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeSportsResultTypeKnownValues known = stringToSportsResultType(result);
                TypeSportsResultType new_value;
                if (known == SportsResultType__none)
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
            virtual void handle_result(TypeSportsResultType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSportsResultType, TypeSportsResultType, TypeSportsResultType > fieldGeneratorSportsResultType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPlayoffs;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPlayoffGame;
        JSONHoldingGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorPlayoffType;
        JSONHoldingGenerator<SportsTournamentJSON::Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool > fieldGeneratorTournament;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPreSeason;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGameID;
        JSONHoldingGenerator<SportsSportImageJSON::Generator, RCHandle<SportsSportImageJSON>, SportsSportImageJSON *, bool > fieldGeneratorSportImage;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `SportsResultScoreKind' field is missing.");
            SportsResultScoreJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<SportsResultScoreJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsResultScoreAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getSportsResultScoreJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `SportsResultScoreKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(SportsResultScoreJSON *result)
          {
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
            if (fieldGeneratorGameStartTime.have_value)
              {
                result->setGameStartTime(fieldGeneratorGameStartTime.value.referenced());
                fieldGeneratorGameStartTime.have_value = false;
              }
            if (fieldGeneratorGameStatus.have_value)
              {
                result->setGameStatus(fieldGeneratorGameStatus.value);
                fieldGeneratorGameStatus.have_value = false;
              }
            if (fieldGeneratorQuarterInningPeriod.have_value)
              {
                result->setQuarterInningPeriod(fieldGeneratorQuarterInningPeriod.value);
                fieldGeneratorQuarterInningPeriod.have_value = false;
              }
            if (fieldGeneratorQuarterInningPeriodClock.have_value)
              {
                result->setQuarterInningPeriodClock(fieldGeneratorQuarterInningPeriodClock.value);
                fieldGeneratorQuarterInningPeriodClock.have_value = false;
              }
            if (fieldGeneratorVenue.have_value)
              {
                result->setVenue(fieldGeneratorVenue.value.referenced());
                fieldGeneratorVenue.have_value = false;
              }
            if (fieldGeneratorBroadcastNetwork.have_value)
              {
                result->setBroadcastNetwork(fieldGeneratorBroadcastNetwork.value);
                fieldGeneratorBroadcastNetwork.have_value = false;
              }
            if (fieldGeneratorSportsResultType.have_value)
              {
                result->setSportsResultType(fieldGeneratorSportsResultType.value);
                fieldGeneratorSportsResultType.have_value = false;
              }
            if (fieldGeneratorPlayoffs.have_value)
              {
                result->setPlayoffs(fieldGeneratorPlayoffs.value);
                fieldGeneratorPlayoffs.have_value = false;
              }
            if (fieldGeneratorPlayoffGame.have_value)
              {
                result->setPlayoffGame(fieldGeneratorPlayoffGame.value);
                fieldGeneratorPlayoffGame.have_value = false;
              }
            if (fieldGeneratorPlayoffType.have_value)
              {
                result->setPlayoffType(fieldGeneratorPlayoffType.value.referenced());
                fieldGeneratorPlayoffType.have_value = false;
              }
            if (fieldGeneratorTournament.have_value)
              {
                result->setTournament(fieldGeneratorTournament.value.referenced());
                fieldGeneratorTournament.have_value = false;
              }
            if (fieldGeneratorPreSeason.have_value)
              {
                result->setPreSeason(fieldGeneratorPreSeason.value);
                fieldGeneratorPreSeason.have_value = false;
              }
            if (fieldGeneratorGameID.have_value)
              {
                result->setGameID(fieldGeneratorGameID.value);
                fieldGeneratorGameID.have_value = false;
              }
            if (fieldGeneratorSportImage.have_value)
              {
                result->setSportImage(fieldGeneratorSportImage.value.referenced());
                fieldGeneratorSportImage.have_value = false;
              }
          }
        virtual void handle_result(SportsResultScoreJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "roadcastNetwork") == 0)
                        return &fieldGeneratorBroadcastNetwork;
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "ame", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[5]), "D") == 0)
                                    return &fieldGeneratorGameID;
                                break;
                            case 'S':
                                if (strncmp(&(field_name[5]), "ta", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 'r':
                                            if (strcmp(&(field_name[8]), "tTime") == 0)
                                                return &fieldGeneratorGameStartTime;
                                            break;
                                        case 't':
                                            if (strcmp(&(field_name[8]), "us") == 0)
                                                return &fieldGeneratorGameStatus;
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
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "ayoff", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'G':
                                        if (strcmp(&(field_name[8]), "ame") == 0)
                                            return &fieldGeneratorPlayoffGame;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[8]), "ype") == 0)
                                            return &fieldGeneratorPlayoffType;
                                        break;
                                    case 's':
                                        if (field_name[8] == 0)
                                            return &fieldGeneratorPlayoffs;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "eSeason") == 0)
                                return &fieldGeneratorPreSeason;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Q':
                    if (strncmp(&(field_name[1]), "uarterInningPeriod", 18) == 0)
                      {
                        switch ((unsigned char)(field_name[19]))
                          {
                            case 0:
                                return &fieldGeneratorQuarterInningPeriod;
                            case 'C':
                                if (strcmp(&(field_name[20]), "lock") == 0)
                                    return &fieldGeneratorQuarterInningPeriodClock;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "port", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[6]), "mage") == 0)
                                    return &fieldGeneratorSportImage;
                                break;
                            case 's':
                                if (strncmp(&(field_name[6]), "Result", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[12]))
                                      {
                                        case 'S':
                                            if (strcmp(&(field_name[13]), "coreKind") == 0)
                                                {
                                                keyGenerator.reset();
                                                return &keyGenerator;
                                                }
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[13]), "ype") == 0)
                                                return &fieldGeneratorSportsResultType;
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
                case 'V':
                    if (strcmp(&(field_name[1]), "enue") == 0)
                        return &fieldGeneratorVenue;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTeams("field \"Teams\" of the SportsResultScore class", ignore_extras), fieldGeneratorGameStartTime("field \"GameStartTime\" of the SportsResultScore class", ignore_extras), fieldGeneratorGameStatus("field \"GameStatus\" of the SportsResultScore class"), fieldGeneratorQuarterInningPeriod("field \"QuarterInningPeriod\" of the SportsResultScore class"), fieldGeneratorQuarterInningPeriodClock("field \"QuarterInningPeriodClock\" of the SportsResultScore class"), fieldGeneratorVenue("field \"Venue\" of the SportsResultScore class", ignore_extras), fieldGeneratorBroadcastNetwork("field \"BroadcastNetwork\" of the SportsResultScore class"), fieldGeneratorSportsResultType("field \"SportsResultType\" of the SportsResultScore class"), fieldGeneratorPlayoffs("field \"Playoffs\" of the SportsResultScore class"), fieldGeneratorPlayoffGame("field \"PlayoffGame\" of the SportsResultScore class"), fieldGeneratorPlayoffType("field \"PlayoffType\" of the SportsResultScore class", ignore_extras), fieldGeneratorTournament("field \"Tournament\" of the SportsResultScore class", ignore_extras), fieldGeneratorPreSeason("field \"PreSeason\" of the SportsResultScore class"), fieldGeneratorGameID("field \"GameID\" of the SportsResultScore class"), fieldGeneratorSportImage("field \"SportImage\" of the SportsResultScore class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"SportsResultScoreKind\" of the SportsResultScore class")
          {
            set_what("the SportsResultScore class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTeams.reset();
            fieldGeneratorGameStartTime.reset();
            fieldGeneratorGameStatus.reset();
            fieldGeneratorQuarterInningPeriod.reset();
            fieldGeneratorQuarterInningPeriodClock.reset();
            fieldGeneratorVenue.reset();
            fieldGeneratorBroadcastNetwork.reset();
            fieldGeneratorSportsResultType.reset();
            fieldGeneratorPlayoffs.reset();
            fieldGeneratorPlayoffGame.reset();
            fieldGeneratorPlayoffType.reset();
            fieldGeneratorTournament.reset();
            fieldGeneratorPreSeason.reset();
            fieldGeneratorGameID.reset();
            fieldGeneratorSportImage.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SportsResultScoreJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* SPORTSRESULTSCOREJSON_H */
