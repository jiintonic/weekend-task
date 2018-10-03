/* file "SportsStandingsQueryDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTANDINGSQUERYDATAJSON_H
#define SPORTSSTANDINGSQUERYDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsStandingsQueryTypeJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsTeamNewJSON.h"
#include "SportsTeamNewJSON.h"
#include "SportsSeasonResolvedJSON.h"
#include "SportsTournamentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStandingsQueryDataJSON : public ReferenceCounted
  {
  public:
    enum TypeGroupingKnownValues
      {
        Grouping_Divisional,
        Grouping_Conference,
        Grouping_League,
        Grouping_WildCard,
        Grouping__none
      };
    struct TypeGrouping
      {
        bool in_known_list;
        std::string string_value;
        TypeGroupingKnownValues list_value;

        TypeGrouping(void);
        TypeGrouping(const TypeGrouping &other);
        TypeGrouping(TypeGroupingKnownValues other);
        bool  operator==(const TypeGrouping &other) const;
        bool  operator!=(const TypeGrouping &other) const;
        bool  operator<(const TypeGrouping &other) const;
        bool  operator>(const TypeGrouping &other) const;
        bool  operator>=(const TypeGrouping &other) const;
        bool  operator<=(const TypeGrouping &other) const;

      };

    static TypeGroupingKnownValues  stringToGrouping(const char *chars);
    static const char * stringFromGrouping(TypeGroupingKnownValues the_enum);
    class TypeDivisionTeamIndicesJSON : public ReferenceCounted
      {
      private:
        bool flagHasDivisionIndex;
        OInteger storeDivisionIndex;
        bool flagHasTeamIndex;
        OInteger storeTeamIndex;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeDivisionTeamIndicesJSON(const TypeDivisionTeamIndicesJSON &);
        TypeDivisionTeamIndicesJSON & operator=(const TypeDivisionTeamIndicesJSON &other);

        void  fromJSONDivisionIndex(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeamIndex(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDivisionTeamIndicesJSON(void);
        virtual ~TypeDivisionTeamIndicesJSON(void);
        bool  hasDivisionIndex(void) const;
        OInteger  getDivisionIndex(void);
        const OInteger  getDivisionIndex(void) const;
        bool  hasTeamIndex(void) const;
        OInteger  getTeamIndex(void);
        const OInteger  getTeamIndex(void) const;

        virtual size_t extraTypeDivisionTeamIndicesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeDivisionTeamIndicesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeDivisionTeamIndicesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeDivisionTeamIndicesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeDivisionTeamIndicesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeDivisionTeamIndicesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setDivisionIndex(OInteger new_value)
          {
            flagHasDivisionIndex = true;
            if (new_value < 0)
                throw("The value for field DivisionIndex of TypeDivisionTeamIndicesJSON is less than the lower bound (0) for that field.");
            storeDivisionIndex = new_value;
          }
        void unsetDivisionIndex(void)
          {
            flagHasDivisionIndex = false;
          }
        void setTeamIndex(OInteger new_value)
          {
            flagHasTeamIndex = true;
            if (new_value < 0)
                throw("The value for field TeamIndex of TypeDivisionTeamIndicesJSON is less than the lower bound (0) for that field.");
            storeTeamIndex = new_value;
          }
        void unsetTeamIndex(void)
          {
            flagHasTeamIndex = false;
          }

        virtual void extraTypeDivisionTeamIndicesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeDivisionTeamIndicesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeDivisionTeamIndicesLookup(key);
            if (old_field == NULL)
              {
                extraTypeDivisionTeamIndicesAppendPair(key, new_component);
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
            assert(flagHasDivisionIndex);
            handler->start_pair("DivisionIndex");
            handler->number_value(storeDivisionIndex.get_o_integer());
            if (flagHasTeamIndex)
              {
                handler->start_pair("TeamIndex");
                handler->number_value(storeTeamIndex.get_o_integer());
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasDivisionIndex()))
              {
                return "When parsing the object for %what%, the \"DivisionIndex\" field was missing.";
              }
            return NULL;
          }

        static TypeDivisionTeamIndicesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDivisionTeamIndicesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDivisionTeamIndicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDivisionTeamIndicesJSON>, TypeDivisionTeamIndicesJSON *, bool> generator("Type TypeDivisionTeamIndices", ignore_extras);
                parse_json_value(text, "Text for TypeDivisionTeamIndicesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDivisionTeamIndicesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDivisionTeamIndicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDivisionTeamIndicesJSON>, TypeDivisionTeamIndicesJSON *, bool> generator("Type TypeDivisionTeamIndices", ignore_extras);
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
            static char lowerBoundDivisionIndex[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundDivisionIndex>, OInteger, o_integer > fieldGeneratorDivisionIndex;
            static char lowerBoundTeamIndex[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTeamIndex>, OInteger, o_integer > fieldGeneratorTeamIndex;
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
                TypeDivisionTeamIndicesJSON *result = new TypeDivisionTeamIndicesJSON();
                assert(result != NULL);
                RCHandle<TypeDivisionTeamIndicesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeDivisionTeamIndicesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeDivisionTeamIndicesJSON *result)
              {
                if (fieldGeneratorDivisionIndex.have_value)
                  {
                    result->setDivisionIndex(fieldGeneratorDivisionIndex.value);
                    fieldGeneratorDivisionIndex.have_value = false;
                  }
                else if (!(result->hasDivisionIndex()))
                  {
                    error("When parsing the object for %what%, the \"DivisionIndex\" field was missing.");
                  }
                if (fieldGeneratorTeamIndex.have_value)
                  {
                    result->setTeamIndex(fieldGeneratorTeamIndex.value);
                    fieldGeneratorTeamIndex.have_value = false;
                  }
              }
            virtual void handle_result(TypeDivisionTeamIndicesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "ivisionIndex") == 0)
                            return &fieldGeneratorDivisionIndex;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "eamIndex") == 0)
                            return &fieldGeneratorTeamIndex;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDivisionIndex("field \"DivisionIndex\" of the TypeDivisionTeamIndices class"), fieldGeneratorTeamIndex("field \"TeamIndex\" of the TypeDivisionTeamIndices class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeDivisionTeamIndices class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDivisionIndex.reset();
                fieldGeneratorTeamIndex.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    enum TypeErrorKnownValues
      {
        Error_DataUnavailable,
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
    SportsStandingsQueryTypeJSON * storeType;
    bool flagHasLeague;
    SportsLeagueCodeJSON * storeLeague;
    bool flagHasDivision;
    SportsLeagueDivisionJSON * storeDivision;
    bool flagHasTeam;
    SportsTeamNewJSON * storeTeam;
    bool flagHasTeamOther;
    SportsTeamNewJSON * storeTeamOther;
    bool flagHasRank;
    OInteger storeRank;
    bool flagHasGrouping;
    TypeGrouping storeGrouping;
    bool flagHasSeason;
    SportsSeasonResolvedJSON * storeSeason;
    bool flagHasStandingsIndex;
    OInteger storeStandingsIndex;
    bool flagHasTournament;
    SportsTournamentJSON * storeTournament;
    bool flagHasDivisionTeamIndices;
    std::vector< TypeDivisionTeamIndicesJSON * > storeDivisionTeamIndices;
    bool flagHasGamesBehindOtherTeam;
    double storeGamesBehindOtherTeam;
    std::string textStoreGamesBehindOtherTeam;
    bool flagHasGamesLeftInSeason;
    OInteger storeGamesLeftInSeason;
    bool flagHasGamesLeftInSeasonLeagueMin;
    OInteger storeGamesLeftInSeasonLeagueMin;
    bool flagHasGamesLeftInSeasonLeagueMax;
    OInteger storeGamesLeftInSeasonLeagueMax;
    bool flagHasError;
    TypeError storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStandingsQueryDataJSON(const SportsStandingsQueryDataJSON &);
    SportsStandingsQueryDataJSON & operator=(const SportsStandingsQueryDataJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeam(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeamOther(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGrouping(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStandingsIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTournament(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivisionTeamIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesBehindOtherTeam(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesLeftInSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesLeftInSeasonLeagueMin(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesLeftInSeasonLeagueMax(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStandingsQueryDataJSON(void);
    virtual ~SportsStandingsQueryDataJSON(void);
    bool  hasType(void) const;
    SportsStandingsQueryTypeJSON *  getType(void);
    const SportsStandingsQueryTypeJSON *  getType(void) const;
    SportsStandingsQueryTypeJSON::TypeValue  getTypeValue(void);
    const SportsStandingsQueryTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasLeague(void) const;
    SportsLeagueCodeJSON *  getLeague(void);
    const SportsLeagueCodeJSON *  getLeague(void) const;
    SportsLeagueCodeJSON::TypeValue  getLeagueValue(void);
    const SportsLeagueCodeJSON::TypeValue  getLeagueValue(void) const;
    const char * getLeagueAsChars(void) const;
    std::string  getLeagueAsString(void) const;
    bool  hasDivision(void) const;
    SportsLeagueDivisionJSON *  getDivision(void);
    const SportsLeagueDivisionJSON *  getDivision(void) const;
    SportsLeagueDivisionJSON::TypeValue  getDivisionValue(void);
    const SportsLeagueDivisionJSON::TypeValue  getDivisionValue(void) const;
    const char * getDivisionAsChars(void) const;
    std::string  getDivisionAsString(void) const;
    bool  hasTeam(void) const;
    SportsTeamNewJSON *  getTeam(void);
    const SportsTeamNewJSON *  getTeam(void) const;
    bool  hasTeamOther(void) const;
    SportsTeamNewJSON *  getTeamOther(void);
    const SportsTeamNewJSON *  getTeamOther(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;
    bool  hasGrouping(void) const;
    TypeGrouping  getGrouping(void);
    const TypeGrouping  getGrouping(void) const;
    const char * getGroupingAsChars(void) const;
    std::string  getGroupingAsString(void) const;
    bool  hasSeason(void) const;
    SportsSeasonResolvedJSON *  getSeason(void);
    const SportsSeasonResolvedJSON *  getSeason(void) const;
    bool  hasStandingsIndex(void) const;
    OInteger  getStandingsIndex(void);
    const OInteger  getStandingsIndex(void) const;
    bool  hasTournament(void) const;
    SportsTournamentJSON *  getTournament(void);
    const SportsTournamentJSON *  getTournament(void) const;
    bool  hasDivisionTeamIndices(void) const;
    size_t  countOfDivisionTeamIndices(void) const;
    TypeDivisionTeamIndicesJSON *  elementOfDivisionTeamIndices(size_t element_num);
    const TypeDivisionTeamIndicesJSON *  elementOfDivisionTeamIndices(size_t element_num) const;
    std::vector< TypeDivisionTeamIndicesJSON * >  getDivisionTeamIndices(void);
    const std::vector< TypeDivisionTeamIndicesJSON * >  getDivisionTeamIndices(void) const;
    bool  hasGamesBehindOtherTeam(void) const;
    double  getGamesBehindOtherTeam(void);
    const double  getGamesBehindOtherTeam(void) const;
    std::string  getGamesBehindOtherTeamAsText(void) const;
    bool  hasGamesLeftInSeason(void) const;
    OInteger  getGamesLeftInSeason(void);
    const OInteger  getGamesLeftInSeason(void) const;
    bool  hasGamesLeftInSeasonLeagueMin(void) const;
    OInteger  getGamesLeftInSeasonLeagueMin(void);
    const OInteger  getGamesLeftInSeasonLeagueMin(void) const;
    bool  hasGamesLeftInSeasonLeagueMax(void) const;
    OInteger  getGamesLeftInSeasonLeagueMax(void);
    const OInteger  getGamesLeftInSeasonLeagueMax(void) const;
    bool  hasError(void) const;
    TypeError  getError(void);
    const TypeError  getError(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsStandingsQueryDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStandingsQueryDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStandingsQueryDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStandingsQueryDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStandingsQueryDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStandingsQueryDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setType(SportsStandingsQueryTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = true;
        storeType = new_value;
      }
    void setType(SportsStandingsQueryTypeJSON::TypeValue new_value)
      {
        setType(new SportsStandingsQueryTypeJSON(new_value));
      }
    void setType(const char *chars)
      {
        SportsStandingsQueryTypeJSON::TypeValueKnownValues known = SportsStandingsQueryTypeJSON::stringToValue(chars);
        SportsStandingsQueryTypeJSON::TypeValue new_value;
        if (known == SportsStandingsQueryTypeJSON::Value__none)
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
    void unsetType(void)
      {
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = false;
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
    void setDivision(SportsLeagueDivisionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDivision)
          {
            storeDivision->remove_reference();
          }
        flagHasDivision = true;
        storeDivision = new_value;
      }
    void setDivision(SportsLeagueDivisionJSON::TypeValue new_value)
      {
        setDivision(new SportsLeagueDivisionJSON(new_value));
      }
    void setDivision(const char *chars)
      {
        SportsLeagueDivisionJSON::TypeValueKnownValues known = SportsLeagueDivisionJSON::stringToValue(chars);
        SportsLeagueDivisionJSON::TypeValue new_value;
        if (known == SportsLeagueDivisionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setDivision(new_value);
      }
    void setDivision(std::string the_string)
      {
        setDivision(the_string.c_str());
      }
    void unsetDivision(void)
      {
        if (flagHasDivision)
          {
            storeDivision->remove_reference();
          }
        flagHasDivision = false;
      }
    void setTeam(SportsTeamNewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = true;
        storeTeam = new_value;
      }
    void unsetTeam(void)
      {
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = false;
      }
    void setTeamOther(SportsTeamNewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTeamOther)
          {
            storeTeamOther->remove_reference();
          }
        flagHasTeamOther = true;
        storeTeamOther = new_value;
      }
    void unsetTeamOther(void)
      {
        if (flagHasTeamOther)
          {
            storeTeamOther->remove_reference();
          }
        flagHasTeamOther = false;
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < 1)
            throw("The value for field Rank of SportsStandingsQueryDataJSON is less than the lower bound (1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
      }
    void setGrouping(TypeGrouping new_value)
      {
        flagHasGrouping = true;
        storeGrouping = new_value;
      }
    void setGrouping(const char *chars)
      {
        TypeGroupingKnownValues known = stringToGrouping(chars);
        TypeGrouping new_value;
        if (known == Grouping__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setGrouping(new_value);
      }
    void setGrouping(std::string the_string)
      {
        setGrouping(the_string.c_str());
      }
    void setGrouping(TypeGroupingKnownValues new_value)
      {
        TypeGrouping new_full_value;
        assert(new_value != Grouping__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setGrouping(new_full_value);
      }
    void unsetGrouping(void)
      {
        flagHasGrouping = false;
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
    void setStandingsIndex(OInteger new_value)
      {
        flagHasStandingsIndex = true;
        if (new_value < 0)
            throw("The value for field StandingsIndex of SportsStandingsQueryDataJSON is less than the lower bound (0) for that field.");
        storeStandingsIndex = new_value;
      }
    void unsetStandingsIndex(void)
      {
        flagHasStandingsIndex = false;
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
    void initDivisionTeamIndices(void)
      {
        if (flagHasDivisionTeamIndices)
          {
            for (size_t num2 = 0; num2 < storeDivisionTeamIndices.size(); ++num2)
              {
                storeDivisionTeamIndices[num2]->remove_reference();
              }
          }
        flagHasDivisionTeamIndices = true;
        storeDivisionTeamIndices.clear();
      }
    void appendDivisionTeamIndices(TypeDivisionTeamIndicesJSON * to_append)
      {
        if (!flagHasDivisionTeamIndices)
          {
            flagHasDivisionTeamIndices = true;
            storeDivisionTeamIndices.clear();
          }
        assert(flagHasDivisionTeamIndices);
        to_append->add_reference();
        storeDivisionTeamIndices.push_back(to_append);
      }
    void unsetDivisionTeamIndices(void)
      {
        if (flagHasDivisionTeamIndices)
          {
            for (size_t num3 = 0; num3 < storeDivisionTeamIndices.size(); ++num3)
              {
                storeDivisionTeamIndices[num3]->remove_reference();
              }
          }
        flagHasDivisionTeamIndices = false;
        storeDivisionTeamIndices.clear();
      }
    void setGamesBehindOtherTeam(double new_value)
      {
        flagHasGamesBehindOtherTeam = true;
        storeGamesBehindOtherTeam = new_value;
        textStoreGamesBehindOtherTeam = "";
      }
    void setGamesBehindOtherTeamText(std::string new_value)
      {
        flagHasGamesBehindOtherTeam = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field GamesBehindOtherTeam of SportsStandingsQueryDataJSON is not a valid number.");
        textStoreGamesBehindOtherTeam = new_value;
      }
    void unsetGamesBehindOtherTeam(void)
      {
        flagHasGamesBehindOtherTeam = false;
      }
    void setGamesLeftInSeason(OInteger new_value)
      {
        flagHasGamesLeftInSeason = true;
        if (new_value < 0)
            throw("The value for field GamesLeftInSeason of SportsStandingsQueryDataJSON is less than the lower bound (0) for that field.");
        storeGamesLeftInSeason = new_value;
      }
    void unsetGamesLeftInSeason(void)
      {
        flagHasGamesLeftInSeason = false;
      }
    void setGamesLeftInSeasonLeagueMin(OInteger new_value)
      {
        flagHasGamesLeftInSeasonLeagueMin = true;
        if (new_value < 0)
            throw("The value for field GamesLeftInSeasonLeagueMin of SportsStandingsQueryDataJSON is less than the lower bound (0) for that field.");
        storeGamesLeftInSeasonLeagueMin = new_value;
      }
    void unsetGamesLeftInSeasonLeagueMin(void)
      {
        flagHasGamesLeftInSeasonLeagueMin = false;
      }
    void setGamesLeftInSeasonLeagueMax(OInteger new_value)
      {
        flagHasGamesLeftInSeasonLeagueMax = true;
        if (new_value < 0)
            throw("The value for field GamesLeftInSeasonLeagueMax of SportsStandingsQueryDataJSON is less than the lower bound (0) for that field.");
        storeGamesLeftInSeasonLeagueMax = new_value;
      }
    void unsetGamesLeftInSeasonLeagueMax(void)
      {
        flagHasGamesLeftInSeasonLeagueMax = false;
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

    virtual void extraSportsStandingsQueryDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStandingsQueryDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStandingsQueryDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsStandingsQueryDataAppendPair(key, new_component);
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
        storeType->write_as_json(handler);
        if (flagHasLeague)
          {
            handler->start_pair("League");
            storeLeague->write_as_json(handler);
          }
        if (flagHasDivision)
          {
            handler->start_pair("Division");
            storeDivision->write_as_json(handler);
          }
        if (flagHasTeam)
          {
            handler->start_pair("Team");
            storeTeam->write_as_json(handler);
          }
        if (flagHasTeamOther)
          {
            handler->start_pair("TeamOther");
            storeTeamOther->write_as_json(handler);
          }
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
        if (flagHasGrouping)
          {
            handler->start_pair("Grouping");
            if (storeGrouping.in_known_list)
              {
                switch (storeGrouping.list_value)
                  {
                    case Grouping_Divisional:
                        handler->string_value("Divisional");
                        break;
                    case Grouping_Conference:
                        handler->string_value("Conference");
                        break;
                    case Grouping_League:
                        handler->string_value("League");
                        break;
                    case Grouping_WildCard:
                        handler->string_value("WildCard");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeGrouping.string_value);
              }
          }
        if (flagHasSeason)
          {
            handler->start_pair("Season");
            storeSeason->write_as_json(handler);
          }
        if (flagHasStandingsIndex)
          {
            handler->start_pair("StandingsIndex");
            handler->number_value(storeStandingsIndex.get_o_integer());
          }
        if (flagHasTournament)
          {
            handler->start_pair("Tournament");
            storeTournament->write_as_json(handler);
          }
        if (flagHasDivisionTeamIndices)
          {
            handler->start_pair("DivisionTeamIndices");
            assert(storeDivisionTeamIndices.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDivisionTeamIndices.size(); ++num1)
              {
                storeDivisionTeamIndices[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasGamesBehindOtherTeam)
          {
            handler->start_pair("GamesBehindOtherTeam");
            if (textStoreGamesBehindOtherTeam != "")
                handler->number_value(textStoreGamesBehindOtherTeam.c_str());
            else if (((double)(long int)storeGamesBehindOtherTeam) == storeGamesBehindOtherTeam)
                handler->number_value((long int)storeGamesBehindOtherTeam);
            else
                handler->number_value(storeGamesBehindOtherTeam);
          }
        if (flagHasGamesLeftInSeason)
          {
            handler->start_pair("GamesLeftInSeason");
            handler->number_value(storeGamesLeftInSeason.get_o_integer());
          }
        if (flagHasGamesLeftInSeasonLeagueMin)
          {
            handler->start_pair("GamesLeftInSeasonLeagueMin");
            handler->number_value(storeGamesLeftInSeasonLeagueMin.get_o_integer());
          }
        if (flagHasGamesLeftInSeasonLeagueMax)
          {
            handler->start_pair("GamesLeftInSeasonLeagueMax");
            handler->number_value(storeGamesLeftInSeasonLeagueMax.get_o_integer());
          }
        if (flagHasError)
          {
            handler->start_pair("Error");
            if (storeError.in_known_list)
              {
                switch (storeError.list_value)
                  {
                    case Error_DataUnavailable:
                        handler->string_value("DataUnavailable");
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

    static SportsStandingsQueryDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStandingsQueryDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStandingsQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsQueryDataJSON>, SportsStandingsQueryDataJSON *, bool> generator("Type SportsStandingsQueryData", ignore_extras);
            parse_json_value(text, "Text for SportsStandingsQueryDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStandingsQueryDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStandingsQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsQueryDataJSON>, SportsStandingsQueryDataJSON *, bool> generator("Type SportsStandingsQueryData", ignore_extras);
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
        JSONHoldingGenerator<SportsStandingsQueryTypeJSON::Generator, RCHandle<SportsStandingsQueryTypeJSON>, SportsStandingsQueryTypeJSON *, bool > fieldGeneratorType;
        JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
        JSONHoldingGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorDivision;
        JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeam;
        JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeamOther;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
    class FieldGeneratorGrouping : public JSONStringGenerator
          {
          protected:
            FieldGeneratorGrouping(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorGrouping(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeGroupingKnownValues known = stringToGrouping(result);
                TypeGrouping new_value;
                if (known == Grouping__none)
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
            virtual void handle_result(TypeGrouping result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorGrouping, TypeGrouping, TypeGrouping > fieldGeneratorGrouping;
        JSONHoldingGenerator<SportsSeasonResolvedJSON::Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool > fieldGeneratorSeason;
        static char lowerBoundStandingsIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStandingsIndex>, OInteger, o_integer > fieldGeneratorStandingsIndex;
        JSONHoldingGenerator<SportsTournamentJSON::Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool > fieldGeneratorTournament;
        JSONHoldingArrayGenerator<TypeDivisionTeamIndicesJSON::Generator, RCHandle<TypeDivisionTeamIndicesJSON>, TypeDivisionTeamIndicesJSON *, bool > fieldGeneratorDivisionTeamIndices;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorGamesBehindOtherTeam;
        static char lowerBoundGamesLeftInSeason[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesLeftInSeason>, OInteger, o_integer > fieldGeneratorGamesLeftInSeason;
        static char lowerBoundGamesLeftInSeasonLeagueMin[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesLeftInSeasonLeagueMin>, OInteger, o_integer > fieldGeneratorGamesLeftInSeasonLeagueMin;
        static char lowerBoundGamesLeftInSeasonLeagueMax[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesLeftInSeasonLeagueMax>, OInteger, o_integer > fieldGeneratorGamesLeftInSeasonLeagueMax;
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
            SportsStandingsQueryDataJSON *result = new SportsStandingsQueryDataJSON();
            assert(result != NULL);
            RCHandle<SportsStandingsQueryDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStandingsQueryDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStandingsQueryDataJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value.referenced());
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorLeague.have_value)
              {
                result->setLeague(fieldGeneratorLeague.value.referenced());
                fieldGeneratorLeague.have_value = false;
              }
            if (fieldGeneratorDivision.have_value)
              {
                result->setDivision(fieldGeneratorDivision.value.referenced());
                fieldGeneratorDivision.have_value = false;
              }
            if (fieldGeneratorTeam.have_value)
              {
                result->setTeam(fieldGeneratorTeam.value.referenced());
                fieldGeneratorTeam.have_value = false;
              }
            if (fieldGeneratorTeamOther.have_value)
              {
                result->setTeamOther(fieldGeneratorTeamOther.value.referenced());
                fieldGeneratorTeamOther.have_value = false;
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
            if (fieldGeneratorGrouping.have_value)
              {
                result->setGrouping(fieldGeneratorGrouping.value);
                fieldGeneratorGrouping.have_value = false;
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            if (fieldGeneratorStandingsIndex.have_value)
              {
                result->setStandingsIndex(fieldGeneratorStandingsIndex.value);
                fieldGeneratorStandingsIndex.have_value = false;
              }
            if (fieldGeneratorTournament.have_value)
              {
                result->setTournament(fieldGeneratorTournament.value.referenced());
                fieldGeneratorTournament.have_value = false;
              }
            if (fieldGeneratorDivisionTeamIndices.have_value)
              {
                result->initDivisionTeamIndices();
                size_t count = fieldGeneratorDivisionTeamIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDivisionTeamIndices(fieldGeneratorDivisionTeamIndices.value[num].referenced());
                  }
                fieldGeneratorDivisionTeamIndices.value.clear();
                fieldGeneratorDivisionTeamIndices.have_value = false;
              }
            if (fieldGeneratorGamesBehindOtherTeam.have_value)
              {
                result->setGamesBehindOtherTeamText(fieldGeneratorGamesBehindOtherTeam.value);
                fieldGeneratorGamesBehindOtherTeam.have_value = false;
              }
            if (fieldGeneratorGamesLeftInSeason.have_value)
              {
                result->setGamesLeftInSeason(fieldGeneratorGamesLeftInSeason.value);
                fieldGeneratorGamesLeftInSeason.have_value = false;
              }
            if (fieldGeneratorGamesLeftInSeasonLeagueMin.have_value)
              {
                result->setGamesLeftInSeasonLeagueMin(fieldGeneratorGamesLeftInSeasonLeagueMin.value);
                fieldGeneratorGamesLeftInSeasonLeagueMin.have_value = false;
              }
            if (fieldGeneratorGamesLeftInSeasonLeagueMax.have_value)
              {
                result->setGamesLeftInSeasonLeagueMax(fieldGeneratorGamesLeftInSeasonLeagueMax.value);
                fieldGeneratorGamesLeftInSeasonLeagueMax.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value);
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsStandingsQueryDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "ivision", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 0:
                                return &fieldGeneratorDivision;
                            case 'T':
                                if (strcmp(&(field_name[9]), "eamIndices") == 0)
                                    return &fieldGeneratorDivisionTeamIndices;
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
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "mes", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'B':
                                        if (strcmp(&(field_name[6]), "ehindOtherTeam") == 0)
                                            return &fieldGeneratorGamesBehindOtherTeam;
                                        break;
                                    case 'L':
                                        if (strncmp(&(field_name[6]), "eftInSeason", 11) == 0)
                                          {
                                            switch ((unsigned char)(field_name[17]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorGamesLeftInSeason;
                                                case 'L':
                                                    if (strncmp(&(field_name[18]), "eagueM", 6) == 0)
                                                      {
                                                        switch ((unsigned char)(field_name[24]))
                                                          {
                                                            case 'a':
                                                                if (strcmp(&(field_name[25]), "x") == 0)
                                                                    return &fieldGeneratorGamesLeftInSeasonLeagueMax;
                                                                break;
                                                            case 'i':
                                                                if (strcmp(&(field_name[25]), "n") == 0)
                                                                    return &fieldGeneratorGamesLeftInSeasonLeagueMin;
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
                              }
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "ouping") == 0)
                                return &fieldGeneratorGrouping;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "eague") == 0)
                        return &fieldGeneratorLeague;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ank") == 0)
                        return &fieldGeneratorRank;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ason") == 0)
                                return &fieldGeneratorSeason;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "andingsIndex") == 0)
                                return &fieldGeneratorStandingsIndex;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strncmp(&(field_name[2]), "am", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 0:
                                        return &fieldGeneratorTeam;
                                    case 'O':
                                        if (strcmp(&(field_name[5]), "ther") == 0)
                                            return &fieldGeneratorTeamOther;
                                        break;
                                    default:
                                        break;
                                  }
                              }
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
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorLeague("field \"League\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorDivision("field \"Division\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorTeam("field \"Team\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorTeamOther("field \"TeamOther\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorRank("field \"Rank\" of the SportsStandingsQueryData class"), fieldGeneratorGrouping("field \"Grouping\" of the SportsStandingsQueryData class"), fieldGeneratorSeason("field \"Season\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorStandingsIndex("field \"StandingsIndex\" of the SportsStandingsQueryData class"), fieldGeneratorTournament("field \"Tournament\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorDivisionTeamIndices("field \"DivisionTeamIndices\" of the SportsStandingsQueryData class", ignore_extras), fieldGeneratorGamesBehindOtherTeam("field \"GamesBehindOtherTeam\" of the SportsStandingsQueryData class"), fieldGeneratorGamesLeftInSeason("field \"GamesLeftInSeason\" of the SportsStandingsQueryData class"), fieldGeneratorGamesLeftInSeasonLeagueMin("field \"GamesLeftInSeasonLeagueMin\" of the SportsStandingsQueryData class"), fieldGeneratorGamesLeftInSeasonLeagueMax("field \"GamesLeftInSeasonLeagueMax\" of the SportsStandingsQueryData class"), fieldGeneratorError("field \"Error\" of the SportsStandingsQueryData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStandingsQueryData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorLeague.reset();
            fieldGeneratorDivision.reset();
            fieldGeneratorTeam.reset();
            fieldGeneratorTeamOther.reset();
            fieldGeneratorRank.reset();
            fieldGeneratorGrouping.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorStandingsIndex.reset();
            fieldGeneratorTournament.reset();
            fieldGeneratorDivisionTeamIndices.reset();
            fieldGeneratorGamesBehindOtherTeam.reset();
            fieldGeneratorGamesLeftInSeason.reset();
            fieldGeneratorGamesLeftInSeasonLeagueMin.reset();
            fieldGeneratorGamesLeftInSeasonLeagueMax.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTANDINGSQUERYDATAJSON_H */
