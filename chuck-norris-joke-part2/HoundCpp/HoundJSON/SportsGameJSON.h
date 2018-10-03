/* file "SportsGameJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSGAMEJSON_H
#define SPORTSGAMEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "OInteger.h"
#include "SportsTeamNewJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsHomeAwayJSON.h"
#include "DateAndOrTimeJSON.h"
#include "SportsVenueNewJSON.h"
#include "SportsSeasonResolvedJSON.h"
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


class SportsGameJSON : public ReferenceCounted
  {
  public:
    enum TypeStatusKnownValues
      {
        Status_Scheduled,
        Status_InProgress,
        Status_Complete,
        Status_Delayed,
        Status_DelayedWeather,
        Status_DelayedFacility,
        Status_Postponed,
        Status_Suspended,
        Status_Canceled,
        Status_Unnecessary,
        Status_ScheduledFlex,
        Status_ScheduledTimeTBD,
        Status_Unknown,
        Status__none
      };
    struct TypeStatus
      {
        bool in_known_list;
        std::string string_value;
        TypeStatusKnownValues list_value;

        TypeStatus(void);
        TypeStatus(const TypeStatus &other);
        TypeStatus(TypeStatusKnownValues other);
        bool  operator==(const TypeStatus &other) const;
        bool  operator!=(const TypeStatus &other) const;
        bool  operator<(const TypeStatus &other) const;
        bool  operator>(const TypeStatus &other) const;
        bool  operator>=(const TypeStatus &other) const;
        bool  operator<=(const TypeStatus &other) const;

      };

    static TypeStatusKnownValues  stringToStatus(const char *chars);
    static const char * stringFromStatus(TypeStatusKnownValues the_enum);
    class TypeClockJSON : public ReferenceCounted
      {
      public:
        enum TypeCountDirectionKnownValues
          {
            CountDirection_CountDown,
            CountDirection_CountUp,
            CountDirection__none
          };
        struct TypeCountDirection
          {
            bool in_known_list;
            std::string string_value;
            TypeCountDirectionKnownValues list_value;

            TypeCountDirection(void);
            TypeCountDirection(const TypeCountDirection &other);
            TypeCountDirection(TypeCountDirectionKnownValues other);
            bool  operator==(const TypeCountDirection &other) const;
            bool  operator!=(const TypeCountDirection &other) const;
            bool  operator<(const TypeCountDirection &other) const;
            bool  operator>(const TypeCountDirection &other) const;
            bool  operator>=(const TypeCountDirection &other) const;
            bool  operator<=(const TypeCountDirection &other) const;

          };

        static TypeCountDirectionKnownValues  stringToCountDirection(const char *chars);
        static const char * stringFromCountDirection(TypeCountDirectionKnownValues the_enum);

      private:
        bool flagHasMinutes;
        OInteger storeMinutes;
        bool flagHasSeconds;
        uint8_t storeSeconds;
        bool flagHasCountDirection;
        TypeCountDirection storeCountDirection;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeClockJSON(const TypeClockJSON &);
        TypeClockJSON & operator=(const TypeClockJSON &other);

        void  fromJSONMinutes(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSeconds(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCountDirection(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeClockJSON(void);
        virtual ~TypeClockJSON(void);
        bool  hasMinutes(void) const;
        OInteger  getMinutes(void);
        const OInteger  getMinutes(void) const;
        bool  hasSeconds(void) const;
        uint8_t  getSeconds(void);
        const uint8_t  getSeconds(void) const;
        bool  hasCountDirection(void) const;
        TypeCountDirection  getCountDirection(void);
        const TypeCountDirection  getCountDirection(void) const;
        const char * getCountDirectionAsChars(void) const;
        std::string  getCountDirectionAsString(void) const;

        virtual size_t extraTypeClockComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeClockComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeClockComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeClockComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeClockLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeClockLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setMinutes(OInteger new_value)
          {
            flagHasMinutes = true;
            if (new_value < 0)
                throw("The value for field Minutes of TypeClockJSON is less than the lower bound (0) for that field.");
            storeMinutes = new_value;
          }
        void unsetMinutes(void)
          {
            flagHasMinutes = false;
          }
        void setSeconds(uint8_t new_value)
          {
            flagHasSeconds = true;
            if (new_value < 0)
                throw("The value for field Seconds of TypeClockJSON is less than the lower bound (0) for that field.");
            if (new_value > 59)
                throw("The value for field Seconds of TypeClockJSON is greater than the upper bound (59) for that field.");
            storeSeconds = new_value;
          }
        void unsetSeconds(void)
          {
            flagHasSeconds = false;
          }
        void setCountDirection(TypeCountDirection new_value)
          {
            flagHasCountDirection = true;
            storeCountDirection = new_value;
          }
        void setCountDirection(const char *chars)
          {
            TypeCountDirectionKnownValues known = stringToCountDirection(chars);
            TypeCountDirection new_value;
            if (known == CountDirection__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setCountDirection(new_value);
          }
        void setCountDirection(std::string the_string)
          {
            setCountDirection(the_string.c_str());
          }
        void setCountDirection(TypeCountDirectionKnownValues new_value)
          {
            TypeCountDirection new_full_value;
            assert(new_value != CountDirection__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setCountDirection(new_full_value);
          }
        void unsetCountDirection(void)
          {
            flagHasCountDirection = false;
          }

        virtual void extraTypeClockAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeClockSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeClockLookup(key);
            if (old_field == NULL)
              {
                extraTypeClockAppendPair(key, new_component);
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
            assert(flagHasMinutes);
            handler->start_pair("Minutes");
            handler->number_value(storeMinutes.get_o_integer());
            assert(flagHasSeconds);
            handler->start_pair("Seconds");
            handler->number_value(storeSeconds);
            if (flagHasCountDirection)
              {
                handler->start_pair("CountDirection");
                if (storeCountDirection.in_known_list)
                  {
                    switch (storeCountDirection.list_value)
                      {
                        case CountDirection_CountDown:
                            handler->string_value("CountDown");
                            break;
                        case CountDirection_CountUp:
                            handler->string_value("CountUp");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeCountDirection.string_value);
                  }
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasMinutes()))
              {
                return "When parsing the object for %what%, the \"Minutes\" field was missing.";
              }
            if (!(hasSeconds()))
              {
                return "When parsing the object for %what%, the \"Seconds\" field was missing.";
              }
            return NULL;
          }

        static TypeClockJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeClockJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeClockJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeClockJSON>, TypeClockJSON *, bool> generator("Type TypeClock", ignore_extras);
                parse_json_value(text, "Text for TypeClockJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeClockJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeClockJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeClockJSON>, TypeClockJSON *, bool> generator("Type TypeClock", ignore_extras);
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
            static char lowerBoundMinutes[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMinutes>, OInteger, o_integer > fieldGeneratorMinutes;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 59>, uint8_t, uint8_t > fieldGeneratorSeconds;
        class FieldGeneratorCountDirection : public JSONStringGenerator
              {
              protected:
                FieldGeneratorCountDirection(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorCountDirection(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeCountDirectionKnownValues known = stringToCountDirection(result);
                    TypeCountDirection new_value;
                    if (known == CountDirection__none)
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
                virtual void handle_result(TypeCountDirection result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorCountDirection, TypeCountDirection, TypeCountDirection > fieldGeneratorCountDirection;
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
                TypeClockJSON *result = new TypeClockJSON();
                assert(result != NULL);
                RCHandle<TypeClockJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeClockAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeClockJSON *result)
              {
                if (fieldGeneratorMinutes.have_value)
                  {
                    result->setMinutes(fieldGeneratorMinutes.value);
                    fieldGeneratorMinutes.have_value = false;
                  }
                else if (!(result->hasMinutes()))
                  {
                    error("When parsing the object for %what%, the \"Minutes\" field was missing.");
                  }
                if (fieldGeneratorSeconds.have_value)
                  {
                    result->setSeconds(fieldGeneratorSeconds.value);
                    fieldGeneratorSeconds.have_value = false;
                  }
                else if (!(result->hasSeconds()))
                  {
                    error("When parsing the object for %what%, the \"Seconds\" field was missing.");
                  }
                if (fieldGeneratorCountDirection.have_value)
                  {
                    result->setCountDirection(fieldGeneratorCountDirection.value);
                    fieldGeneratorCountDirection.have_value = false;
                  }
              }
            virtual void handle_result(TypeClockJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ountDirection") == 0)
                            return &fieldGeneratorCountDirection;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "inutes") == 0)
                            return &fieldGeneratorMinutes;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "econds") == 0)
                            return &fieldGeneratorSeconds;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorMinutes("field \"Minutes\" of the TypeClock class"), fieldGeneratorSeconds("field \"Seconds\" of the TypeClock class"), fieldGeneratorCountDirection("field \"CountDirection\" of the TypeClock class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeClock class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorMinutes.reset();
                fieldGeneratorSeconds.reset();
                fieldGeneratorCountDirection.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    enum TypeBaseballInningHalfKnownValues
      {
        BaseballInningHalf_Top,
        BaseballInningHalf_Middle,
        BaseballInningHalf_Bottom,
        BaseballInningHalf__none
      };
    struct TypeBaseballInningHalf
      {
        bool in_known_list;
        std::string string_value;
        TypeBaseballInningHalfKnownValues list_value;

        TypeBaseballInningHalf(void);
        TypeBaseballInningHalf(const TypeBaseballInningHalf &other);
        TypeBaseballInningHalf(TypeBaseballInningHalfKnownValues other);
        bool  operator==(const TypeBaseballInningHalf &other) const;
        bool  operator!=(const TypeBaseballInningHalf &other) const;
        bool  operator<(const TypeBaseballInningHalf &other) const;
        bool  operator>(const TypeBaseballInningHalf &other) const;
        bool  operator>=(const TypeBaseballInningHalf &other) const;
        bool  operator<=(const TypeBaseballInningHalf &other) const;

      };

    static TypeBaseballInningHalfKnownValues  stringToBaseballInningHalf(const char *chars);
    static const char * stringFromBaseballInningHalf(TypeBaseballInningHalfKnownValues the_enum);

  private:
    bool flagHasTeams;
    std::vector< SportsTeamNewJSON * > storeTeams;
    bool flagHasLeague;
    SportsLeagueCodeJSON * storeLeague;
    bool flagHasScores;
    std::vector< OInteger > storeScores;
    bool flagHasHomeAway;
    std::vector< SportsHomeAwayJSON * > storeHomeAway;
    bool flagHasStartTime;
    DateAndOrTimeJSON * storeStartTime;
    bool flagHasStatus;
    TypeStatus storeStatus;
    bool flagHasPlayingPeriod;
    OInteger storePlayingPeriod;
    bool flagHasClock;
    TypeClockJSON * storeClock;
    bool flagHasBaseballInningHalf;
    TypeBaseballInningHalf storeBaseballInningHalf;
    bool flagHasVenue;
    SportsVenueNewJSON * storeVenue;
    bool flagHasBroadcastNetworks;
    std::vector< std::string > storeBroadcastNetworks;
    bool flagHasSeason;
    SportsSeasonResolvedJSON * storeSeason;
    bool flagHasSpecialGameType;
    SportsPlayoffSpecialGameJSON * storeSpecialGameType;
    bool flagHasTournament;
    SportsTournamentJSON * storeTournament;
    bool flagHasSeriesGameNumber;
    OInteger storeSeriesGameNumber;
    bool flagHasID;
    std::string storeID;
    bool flagHasSportImage;
    SportsSportImageJSON * storeSportImage;

    SportsGameJSON(const SportsGameJSON &);
    SportsGameJSON & operator=(const SportsGameJSON &other);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScores(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHomeAway(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayingPeriod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClock(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBaseballInningHalf(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVenue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBroadcastNetworks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTournament(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeriesGameNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSportImage(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsGameJSON(void);
    virtual ~SportsGameJSON(void);
    virtual const char *getSportsGameKind(void) const = 0;
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamNewJSON *  elementOfTeams(size_t element_num);
    const SportsTeamNewJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamNewJSON * >  getTeams(void);
    const std::vector< SportsTeamNewJSON * >  getTeams(void) const;
    bool  hasLeague(void) const;
    SportsLeagueCodeJSON *  getLeague(void);
    const SportsLeagueCodeJSON *  getLeague(void) const;
    SportsLeagueCodeJSON::TypeValue  getLeagueValue(void);
    const SportsLeagueCodeJSON::TypeValue  getLeagueValue(void) const;
    const char * getLeagueAsChars(void) const;
    std::string  getLeagueAsString(void) const;
    bool  hasScores(void) const;
    size_t  countOfScores(void) const;
    OInteger  elementOfScores(size_t element_num);
    const OInteger  elementOfScores(size_t element_num) const;
    std::vector< OInteger >  getScores(void);
    const std::vector< OInteger >  getScores(void) const;
    bool  hasHomeAway(void) const;
    size_t  countOfHomeAway(void) const;
    SportsHomeAwayJSON *  elementOfHomeAway(size_t element_num);
    const SportsHomeAwayJSON *  elementOfHomeAway(size_t element_num) const;
    std::vector< SportsHomeAwayJSON * >  getHomeAway(void);
    const std::vector< SportsHomeAwayJSON * >  getHomeAway(void) const;
    bool  hasStartTime(void) const;
    DateAndOrTimeJSON *  getStartTime(void);
    const DateAndOrTimeJSON *  getStartTime(void) const;
    bool  hasStatus(void) const;
    TypeStatus  getStatus(void);
    const TypeStatus  getStatus(void) const;
    const char * getStatusAsChars(void) const;
    std::string  getStatusAsString(void) const;
    bool  hasPlayingPeriod(void) const;
    OInteger  getPlayingPeriod(void);
    const OInteger  getPlayingPeriod(void) const;
    bool  hasClock(void) const;
    TypeClockJSON *  getClock(void);
    const TypeClockJSON *  getClock(void) const;
    bool  hasBaseballInningHalf(void) const;
    TypeBaseballInningHalf  getBaseballInningHalf(void);
    const TypeBaseballInningHalf  getBaseballInningHalf(void) const;
    const char * getBaseballInningHalfAsChars(void) const;
    std::string  getBaseballInningHalfAsString(void) const;
    bool  hasVenue(void) const;
    SportsVenueNewJSON *  getVenue(void);
    const SportsVenueNewJSON *  getVenue(void) const;
    bool  hasBroadcastNetworks(void) const;
    size_t  countOfBroadcastNetworks(void) const;
    std::string  elementOfBroadcastNetworks(size_t element_num);
    const std::string  elementOfBroadcastNetworks(size_t element_num) const;
    std::vector< std::string >  getBroadcastNetworks(void);
    const std::vector< std::string >  getBroadcastNetworks(void) const;
    bool  hasSeason(void) const;
    SportsSeasonResolvedJSON *  getSeason(void);
    const SportsSeasonResolvedJSON *  getSeason(void) const;
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
    bool  hasSeriesGameNumber(void) const;
    OInteger  getSeriesGameNumber(void);
    const OInteger  getSeriesGameNumber(void) const;
    bool  hasID(void) const;
    std::string  getID(void);
    const std::string  getID(void) const;
    bool  hasSportImage(void) const;
    SportsSportImageJSON *  getSportImage(void);
    const SportsSportImageJSON *  getSportImage(void) const;

    virtual size_t extraSportsGameComponentCount(void) const = 0;
    virtual const char *extraSportsGameComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraSportsGameComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraSportsGameComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraSportsGameLookup(const char *field_name) = 0;
    virtual const JSONValue *extraSportsGameLookup(const char *field_name) const = 0;

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
    void initScores(void)
      {
        flagHasScores = true;
        storeScores.clear();
      }
    void appendScores(OInteger to_append)
      {
        if (!flagHasScores)
          {
            flagHasScores = true;
            storeScores.clear();
          }
        assert(flagHasScores);
        storeScores.push_back(to_append);
      }
    void unsetScores(void)
      {
        flagHasScores = false;
        storeScores.clear();
      }
    void initHomeAway(void)
      {
        if (flagHasHomeAway)
          {
            for (size_t num5 = 0; num5 < storeHomeAway.size(); ++num5)
              {
                storeHomeAway[num5]->remove_reference();
              }
          }
        flagHasHomeAway = true;
        storeHomeAway.clear();
      }
    void appendHomeAway(SportsHomeAwayJSON * to_append)
      {
        if (!flagHasHomeAway)
          {
            flagHasHomeAway = true;
            storeHomeAway.clear();
          }
        assert(flagHasHomeAway);
        to_append->add_reference();
        storeHomeAway.push_back(to_append);
      }
    void appendHomeAway(SportsHomeAwayJSON::TypeValue new_value)
      {
        appendHomeAway(new SportsHomeAwayJSON(new_value));
      }
    void appendHomeAway(const char *chars)
      {
        SportsHomeAwayJSON::TypeValueKnownValues known = SportsHomeAwayJSON::stringToValue(chars);
        SportsHomeAwayJSON::TypeValue new_value;
        if (known == SportsHomeAwayJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendHomeAway(new_value);
      }
    void appendHomeAway(std::string the_string)
      {
        appendHomeAway(the_string.c_str());
      }
    void unsetHomeAway(void)
      {
        if (flagHasHomeAway)
          {
            for (size_t num6 = 0; num6 < storeHomeAway.size(); ++num6)
              {
                storeHomeAway[num6]->remove_reference();
              }
          }
        flagHasHomeAway = false;
        storeHomeAway.clear();
      }
    void setStartTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartTime)
          {
            storeStartTime->remove_reference();
          }
        flagHasStartTime = true;
        storeStartTime = new_value;
      }
    void unsetStartTime(void)
      {
        if (flagHasStartTime)
          {
            storeStartTime->remove_reference();
          }
        flagHasStartTime = false;
      }
    void setStatus(TypeStatus new_value)
      {
        flagHasStatus = true;
        storeStatus = new_value;
      }
    void setStatus(const char *chars)
      {
        TypeStatusKnownValues known = stringToStatus(chars);
        TypeStatus new_value;
        if (known == Status__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setStatus(new_value);
      }
    void setStatus(std::string the_string)
      {
        setStatus(the_string.c_str());
      }
    void setStatus(TypeStatusKnownValues new_value)
      {
        TypeStatus new_full_value;
        assert(new_value != Status__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setStatus(new_full_value);
      }
    void unsetStatus(void)
      {
        flagHasStatus = false;
      }
    void setPlayingPeriod(OInteger new_value)
      {
        flagHasPlayingPeriod = true;
        if (new_value < 0)
            throw("The value for field PlayingPeriod of SportsGameJSON is less than the lower bound (0) for that field.");
        storePlayingPeriod = new_value;
      }
    void unsetPlayingPeriod(void)
      {
        flagHasPlayingPeriod = false;
      }
    void setClock(TypeClockJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClock)
          {
            storeClock->remove_reference();
          }
        flagHasClock = true;
        storeClock = new_value;
      }
    void unsetClock(void)
      {
        if (flagHasClock)
          {
            storeClock->remove_reference();
          }
        flagHasClock = false;
      }
    void setBaseballInningHalf(TypeBaseballInningHalf new_value)
      {
        flagHasBaseballInningHalf = true;
        storeBaseballInningHalf = new_value;
      }
    void setBaseballInningHalf(const char *chars)
      {
        TypeBaseballInningHalfKnownValues known = stringToBaseballInningHalf(chars);
        TypeBaseballInningHalf new_value;
        if (known == BaseballInningHalf__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setBaseballInningHalf(new_value);
      }
    void setBaseballInningHalf(std::string the_string)
      {
        setBaseballInningHalf(the_string.c_str());
      }
    void setBaseballInningHalf(TypeBaseballInningHalfKnownValues new_value)
      {
        TypeBaseballInningHalf new_full_value;
        assert(new_value != BaseballInningHalf__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setBaseballInningHalf(new_full_value);
      }
    void unsetBaseballInningHalf(void)
      {
        flagHasBaseballInningHalf = false;
      }
    void setVenue(SportsVenueNewJSON * new_value)
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
    void initBroadcastNetworks(void)
      {
        flagHasBroadcastNetworks = true;
        storeBroadcastNetworks.clear();
      }
    void appendBroadcastNetworks(std::string to_append)
      {
        if (!flagHasBroadcastNetworks)
          {
            flagHasBroadcastNetworks = true;
            storeBroadcastNetworks.clear();
          }
        assert(flagHasBroadcastNetworks);
        storeBroadcastNetworks.push_back(to_append);
      }
    void unsetBroadcastNetworks(void)
      {
        flagHasBroadcastNetworks = false;
        storeBroadcastNetworks.clear();
      }
    void setSeason(SportsSeasonResolvedJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = true;
        storeSeason = new_value;
      }
    void unsetSeason(void)
      {
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = false;
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
    void setSeriesGameNumber(OInteger new_value)
      {
        flagHasSeriesGameNumber = true;
        if (new_value < 1)
            throw("The value for field SeriesGameNumber of SportsGameJSON is less than the lower bound (1) for that field.");
        storeSeriesGameNumber = new_value;
      }
    void unsetSeriesGameNumber(void)
      {
        flagHasSeriesGameNumber = false;
      }
    void setID(std::string new_value)
      {
        flagHasID = true;
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
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

    virtual void extraSportsGameAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraSportsGameSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("SportsGameKind", getSportsGameKind());
        assert(flagHasTeams);
        handler->start_pair("Teams");
        assert(storeTeams.size() >= 2);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
          {
            storeTeams[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasLeague)
          {
            handler->start_pair("League");
            storeLeague->write_as_json(handler);
          }
        if (flagHasScores)
          {
            handler->start_pair("Scores");
            assert(storeScores.size() >= 2);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeScores.size(); ++num2)
              {
                handler->number_value(storeScores[num2].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasHomeAway)
          {
            handler->start_pair("HomeAway");
            assert(storeHomeAway.size() >= 2);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeHomeAway.size(); ++num3)
              {
                storeHomeAway[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasStartTime)
          {
            handler->start_pair("StartTime");
            storeStartTime->write_as_json(handler);
          }
        if (flagHasStatus)
          {
            handler->start_pair("Status");
            if (storeStatus.in_known_list)
              {
                switch (storeStatus.list_value)
                  {
                    case Status_Scheduled:
                        handler->string_value("Scheduled");
                        break;
                    case Status_InProgress:
                        handler->string_value("InProgress");
                        break;
                    case Status_Complete:
                        handler->string_value("Complete");
                        break;
                    case Status_Delayed:
                        handler->string_value("Delayed");
                        break;
                    case Status_DelayedWeather:
                        handler->string_value("DelayedWeather");
                        break;
                    case Status_DelayedFacility:
                        handler->string_value("DelayedFacility");
                        break;
                    case Status_Postponed:
                        handler->string_value("Postponed");
                        break;
                    case Status_Suspended:
                        handler->string_value("Suspended");
                        break;
                    case Status_Canceled:
                        handler->string_value("Canceled");
                        break;
                    case Status_Unnecessary:
                        handler->string_value("Unnecessary");
                        break;
                    case Status_ScheduledFlex:
                        handler->string_value("ScheduledFlex");
                        break;
                    case Status_ScheduledTimeTBD:
                        handler->string_value("ScheduledTimeTBD");
                        break;
                    case Status_Unknown:
                        handler->string_value("Unknown");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeStatus.string_value);
              }
          }
        if (flagHasPlayingPeriod)
          {
            handler->start_pair("PlayingPeriod");
            handler->number_value(storePlayingPeriod.get_o_integer());
          }
        if (flagHasClock)
          {
            handler->start_pair("Clock");
            storeClock->write_as_json(handler);
          }
        if (flagHasBaseballInningHalf)
          {
            handler->start_pair("BaseballInningHalf");
            if (storeBaseballInningHalf.in_known_list)
              {
                switch (storeBaseballInningHalf.list_value)
                  {
                    case BaseballInningHalf_Top:
                        handler->string_value("Top");
                        break;
                    case BaseballInningHalf_Middle:
                        handler->string_value("Middle");
                        break;
                    case BaseballInningHalf_Bottom:
                        handler->string_value("Bottom");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeBaseballInningHalf.string_value);
              }
          }
        if (flagHasVenue)
          {
            handler->start_pair("Venue");
            storeVenue->write_as_json(handler);
          }
        if (flagHasBroadcastNetworks)
          {
            handler->start_pair("BroadcastNetworks");
            assert(storeBroadcastNetworks.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeBroadcastNetworks.size(); ++num4)
              {
                handler->string_value(storeBroadcastNetworks[num4]);
              }
            handler->finish_array();
          }
        if (flagHasSeason)
          {
            handler->start_pair("Season");
            storeSeason->write_as_json(handler);
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
        if (flagHasSeriesGameNumber)
          {
            handler->start_pair("SeriesGameNumber");
            handler->number_value(storeSeriesGameNumber.get_o_integer());
          }
        if (flagHasID)
          {
            handler->start_pair("ID");
            handler->string_value(storeID);
          }
        if (flagHasSportImage)
          {
            handler->start_pair("SportImage");
            storeSportImage->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTeams()))
          {
            return "When parsing the object for %what%, the \"Teams\" field was missing.";
          }
        return NULL;
      }

    static SportsGameJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsGameJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsGameJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameJSON>, SportsGameJSON *, bool> generator("Type SportsGame", ignore_extras);
            parse_json_value(text, "Text for SportsGameJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsGameJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsGameJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameJSON>, SportsGameJSON *, bool> generator("Type SportsGame", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeams;
        JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
        static char lowerBoundScores[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundScores>, OInteger, o_integer > fieldGeneratorScores;
        JSONHoldingArrayGenerator<SportsHomeAwayJSON::Generator, RCHandle<SportsHomeAwayJSON>, SportsHomeAwayJSON *, bool > fieldGeneratorHomeAway;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartTime;
    class FieldGeneratorStatus : public JSONStringGenerator
          {
          protected:
            FieldGeneratorStatus(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorStatus(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeStatusKnownValues known = stringToStatus(result);
                TypeStatus new_value;
                if (known == Status__none)
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
            virtual void handle_result(TypeStatus result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorStatus, TypeStatus, TypeStatus > fieldGeneratorStatus;
        static char lowerBoundPlayingPeriod[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPlayingPeriod>, OInteger, o_integer > fieldGeneratorPlayingPeriod;
        JSONHoldingGenerator<TypeClockJSON::Generator, RCHandle<TypeClockJSON>, TypeClockJSON *, bool > fieldGeneratorClock;
    class FieldGeneratorBaseballInningHalf : public JSONStringGenerator
          {
          protected:
            FieldGeneratorBaseballInningHalf(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorBaseballInningHalf(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeBaseballInningHalfKnownValues known = stringToBaseballInningHalf(result);
                TypeBaseballInningHalf new_value;
                if (known == BaseballInningHalf__none)
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
            virtual void handle_result(TypeBaseballInningHalf result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorBaseballInningHalf, TypeBaseballInningHalf, TypeBaseballInningHalf > fieldGeneratorBaseballInningHalf;
        JSONHoldingGenerator<SportsVenueNewJSON::Generator, RCHandle<SportsVenueNewJSON>, SportsVenueNewJSON *, bool > fieldGeneratorVenue;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBroadcastNetworks;
        JSONHoldingGenerator<SportsSeasonResolvedJSON::Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool > fieldGeneratorSeason;
        JSONHoldingGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorSpecialGameType;
        JSONHoldingGenerator<SportsTournamentJSON::Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool > fieldGeneratorTournament;
        static char lowerBoundSeriesGameNumber[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSeriesGameNumber>, OInteger, o_integer > fieldGeneratorSeriesGameNumber;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
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
                throw("The `SportsGameKind' field is missing.");
            SportsGameJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<SportsGameJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsGameAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getSportsGameJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `SportsGameKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(SportsGameJSON *result)
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
            else if (!(result->hasTeams()))
              {
                error("When parsing the object for %what%, the \"Teams\" field was missing.");
              }
            if (fieldGeneratorLeague.have_value)
              {
                result->setLeague(fieldGeneratorLeague.value.referenced());
                fieldGeneratorLeague.have_value = false;
              }
            if (fieldGeneratorScores.have_value)
              {
                result->initScores();
                size_t count = fieldGeneratorScores.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendScores(fieldGeneratorScores.value[num]);
                  }
                fieldGeneratorScores.value.clear();
                fieldGeneratorScores.have_value = false;
              }
            if (fieldGeneratorHomeAway.have_value)
              {
                result->initHomeAway();
                size_t count = fieldGeneratorHomeAway.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHomeAway(fieldGeneratorHomeAway.value[num].referenced());
                  }
                fieldGeneratorHomeAway.value.clear();
                fieldGeneratorHomeAway.have_value = false;
              }
            if (fieldGeneratorStartTime.have_value)
              {
                result->setStartTime(fieldGeneratorStartTime.value.referenced());
                fieldGeneratorStartTime.have_value = false;
              }
            if (fieldGeneratorStatus.have_value)
              {
                result->setStatus(fieldGeneratorStatus.value);
                fieldGeneratorStatus.have_value = false;
              }
            if (fieldGeneratorPlayingPeriod.have_value)
              {
                result->setPlayingPeriod(fieldGeneratorPlayingPeriod.value);
                fieldGeneratorPlayingPeriod.have_value = false;
              }
            if (fieldGeneratorClock.have_value)
              {
                result->setClock(fieldGeneratorClock.value.referenced());
                fieldGeneratorClock.have_value = false;
              }
            if (fieldGeneratorBaseballInningHalf.have_value)
              {
                result->setBaseballInningHalf(fieldGeneratorBaseballInningHalf.value);
                fieldGeneratorBaseballInningHalf.have_value = false;
              }
            if (fieldGeneratorVenue.have_value)
              {
                result->setVenue(fieldGeneratorVenue.value.referenced());
                fieldGeneratorVenue.have_value = false;
              }
            if (fieldGeneratorBroadcastNetworks.have_value)
              {
                result->initBroadcastNetworks();
                size_t count = fieldGeneratorBroadcastNetworks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendBroadcastNetworks(fieldGeneratorBroadcastNetworks.value[num]);
                  }
                fieldGeneratorBroadcastNetworks.value.clear();
                fieldGeneratorBroadcastNetworks.have_value = false;
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
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
            if (fieldGeneratorSeriesGameNumber.have_value)
              {
                result->setSeriesGameNumber(fieldGeneratorSeriesGameNumber.value);
                fieldGeneratorSeriesGameNumber.have_value = false;
              }
            if (fieldGeneratorID.have_value)
              {
                result->setID(fieldGeneratorID.value);
                fieldGeneratorID.have_value = false;
              }
            if (fieldGeneratorSportImage.have_value)
              {
                result->setSportImage(fieldGeneratorSportImage.value.referenced());
                fieldGeneratorSportImage.have_value = false;
              }
          }
        virtual void handle_result(SportsGameJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "seballInningHalf") == 0)
                                return &fieldGeneratorBaseballInningHalf;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "oadcastNetworks") == 0)
                                return &fieldGeneratorBroadcastNetworks;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "lock") == 0)
                        return &fieldGeneratorClock;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "omeAway") == 0)
                        return &fieldGeneratorHomeAway;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "D") == 0)
                        return &fieldGeneratorID;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "eague") == 0)
                        return &fieldGeneratorLeague;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "layingPeriod") == 0)
                        return &fieldGeneratorPlayingPeriod;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "ores") == 0)
                                return &fieldGeneratorScores;
                            break;
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'a':
                                    if (strcmp(&(field_name[3]), "son") == 0)
                                        return &fieldGeneratorSeason;
                                    break;
                                case 'r':
                                    if (strcmp(&(field_name[3]), "iesGameNumber") == 0)
                                        return &fieldGeneratorSeriesGameNumber;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'p':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'e':
                                    if (strcmp(&(field_name[3]), "cialGameType") == 0)
                                        return &fieldGeneratorSpecialGameType;
                                    break;
                                case 'o':
                                    if (strncmp(&(field_name[3]), "rt", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[5]))
                                          {
                                            case 'I':
                                                if (strcmp(&(field_name[6]), "mage") == 0)
                                                    return &fieldGeneratorSportImage;
                                                break;
                                            case 's':
                                                if (strcmp(&(field_name[6]), "GameKind") == 0)
                                                    {
                                                    keyGenerator.reset();
                                                    return &keyGenerator;
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
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'r':
                                        if (strcmp(&(field_name[4]), "tTime") == 0)
                                            return &fieldGeneratorStartTime;
                                        break;
                                    case 't':
                                        if (strcmp(&(field_name[4]), "us") == 0)
                                            return &fieldGeneratorStatus;
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
        Generator(bool ignore_extras = false) : fieldGeneratorTeams("field \"Teams\" of the SportsGame class", ignore_extras), fieldGeneratorLeague("field \"League\" of the SportsGame class", ignore_extras), fieldGeneratorScores("field \"Scores\" of the SportsGame class"), fieldGeneratorHomeAway("field \"HomeAway\" of the SportsGame class", ignore_extras), fieldGeneratorStartTime("field \"StartTime\" of the SportsGame class", ignore_extras), fieldGeneratorStatus("field \"Status\" of the SportsGame class"), fieldGeneratorPlayingPeriod("field \"PlayingPeriod\" of the SportsGame class"), fieldGeneratorClock("field \"Clock\" of the SportsGame class", ignore_extras), fieldGeneratorBaseballInningHalf("field \"BaseballInningHalf\" of the SportsGame class"), fieldGeneratorVenue("field \"Venue\" of the SportsGame class", ignore_extras), fieldGeneratorBroadcastNetworks("field \"BroadcastNetworks\" of the SportsGame class"), fieldGeneratorSeason("field \"Season\" of the SportsGame class", ignore_extras), fieldGeneratorSpecialGameType("field \"SpecialGameType\" of the SportsGame class", ignore_extras), fieldGeneratorTournament("field \"Tournament\" of the SportsGame class", ignore_extras), fieldGeneratorSeriesGameNumber("field \"SeriesGameNumber\" of the SportsGame class"), fieldGeneratorID("field \"ID\" of the SportsGame class"), fieldGeneratorSportImage("field \"SportImage\" of the SportsGame class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"SportsGameKind\" of the SportsGame class")
          {
            set_what("the SportsGame class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTeams.reset();
            fieldGeneratorLeague.reset();
            fieldGeneratorScores.reset();
            fieldGeneratorHomeAway.reset();
            fieldGeneratorStartTime.reset();
            fieldGeneratorStatus.reset();
            fieldGeneratorPlayingPeriod.reset();
            fieldGeneratorClock.reset();
            fieldGeneratorBaseballInningHalf.reset();
            fieldGeneratorVenue.reset();
            fieldGeneratorBroadcastNetworks.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorSpecialGameType.reset();
            fieldGeneratorTournament.reset();
            fieldGeneratorSeriesGameNumber.reset();
            fieldGeneratorID.reset();
            fieldGeneratorSportImage.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SportsGameJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* SPORTSGAMEJSON_H */
