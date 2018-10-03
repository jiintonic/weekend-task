/* file "SportsLeagueLeadersQueryDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUELEADERSQUERYDATAJSON_H
#define SPORTSLEAGUELEADERSQUERYDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsStatsTypeJSON.h"
#include "SportsSeasonResolvedJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueLeadersQueryDataJSON : public ReferenceCounted
  {
  public:
    enum TypeTeamsOrPlayersKnownValues
      {
        TeamsOrPlayers_Teams,
        TeamsOrPlayers_Players,
        TeamsOrPlayers__none
      };
    struct TypeTeamsOrPlayers
      {
        bool in_known_list;
        std::string string_value;
        TypeTeamsOrPlayersKnownValues list_value;

        TypeTeamsOrPlayers(void);
        TypeTeamsOrPlayers(const TypeTeamsOrPlayers &other);
        TypeTeamsOrPlayers(TypeTeamsOrPlayersKnownValues other);
        bool  operator==(const TypeTeamsOrPlayers &other) const;
        bool  operator!=(const TypeTeamsOrPlayers &other) const;
        bool  operator<(const TypeTeamsOrPlayers &other) const;
        bool  operator>(const TypeTeamsOrPlayers &other) const;
        bool  operator>=(const TypeTeamsOrPlayers &other) const;
        bool  operator<=(const TypeTeamsOrPlayers &other) const;

      };

    static TypeTeamsOrPlayersKnownValues  stringToTeamsOrPlayers(const char *chars);
    static const char * stringFromTeamsOrPlayers(TypeTeamsOrPlayersKnownValues the_enum);
    class TypeLeagueLeadersIndicesJSON : public ReferenceCounted
      {
      private:
        bool flagHasLeagueLeadersIndex;
        OInteger storeLeagueLeadersIndex;
        bool flagHasTeamOrPlayerIndices;
        std::vector< OInteger > storeTeamOrPlayerIndices;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeLeagueLeadersIndicesJSON(const TypeLeagueLeadersIndicesJSON &);
        TypeLeagueLeadersIndicesJSON & operator=(const TypeLeagueLeadersIndicesJSON &other);

        void  fromJSONLeagueLeadersIndex(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeamOrPlayerIndices(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeLeagueLeadersIndicesJSON(void);
        virtual ~TypeLeagueLeadersIndicesJSON(void);
        bool  hasLeagueLeadersIndex(void) const;
        OInteger  getLeagueLeadersIndex(void);
        const OInteger  getLeagueLeadersIndex(void) const;
        bool  hasTeamOrPlayerIndices(void) const;
        size_t  countOfTeamOrPlayerIndices(void) const;
        OInteger  elementOfTeamOrPlayerIndices(size_t element_num);
        const OInteger  elementOfTeamOrPlayerIndices(size_t element_num) const;
        std::vector< OInteger >  getTeamOrPlayerIndices(void);
        const std::vector< OInteger >  getTeamOrPlayerIndices(void) const;

        virtual size_t extraTypeLeagueLeadersIndicesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeLeagueLeadersIndicesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeLeagueLeadersIndicesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeLeagueLeadersIndicesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeLeagueLeadersIndicesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeLeagueLeadersIndicesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setLeagueLeadersIndex(OInteger new_value)
          {
            flagHasLeagueLeadersIndex = true;
            if (new_value < 0)
                throw("The value for field LeagueLeadersIndex of TypeLeagueLeadersIndicesJSON is less than the lower bound (0) for that field.");
            storeLeagueLeadersIndex = new_value;
          }
        void unsetLeagueLeadersIndex(void)
          {
            flagHasLeagueLeadersIndex = false;
          }
        void initTeamOrPlayerIndices(void)
          {
            flagHasTeamOrPlayerIndices = true;
            storeTeamOrPlayerIndices.clear();
          }
        void appendTeamOrPlayerIndices(OInteger to_append)
          {
            if (!flagHasTeamOrPlayerIndices)
              {
                flagHasTeamOrPlayerIndices = true;
                storeTeamOrPlayerIndices.clear();
              }
            assert(flagHasTeamOrPlayerIndices);
            storeTeamOrPlayerIndices.push_back(to_append);
          }
        void unsetTeamOrPlayerIndices(void)
          {
            flagHasTeamOrPlayerIndices = false;
            storeTeamOrPlayerIndices.clear();
          }

        virtual void extraTypeLeagueLeadersIndicesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeLeagueLeadersIndicesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeLeagueLeadersIndicesLookup(key);
            if (old_field == NULL)
              {
                extraTypeLeagueLeadersIndicesAppendPair(key, new_component);
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
            if (flagHasLeagueLeadersIndex)
              {
                handler->start_pair("LeagueLeadersIndex");
                handler->number_value(storeLeagueLeadersIndex.get_o_integer());
              }
            if (flagHasTeamOrPlayerIndices)
              {
                handler->start_pair("TeamOrPlayerIndices");
                assert(storeTeamOrPlayerIndices.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeTeamOrPlayerIndices.size(); ++num1)
                  {
                    handler->number_value(storeTeamOrPlayerIndices[num1].get_o_integer());
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeLeagueLeadersIndicesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeLeagueLeadersIndicesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeLeagueLeadersIndicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLeagueLeadersIndicesJSON>, TypeLeagueLeadersIndicesJSON *, bool> generator("Type TypeLeagueLeadersIndices", ignore_extras);
                parse_json_value(text, "Text for TypeLeagueLeadersIndicesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeLeagueLeadersIndicesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeLeagueLeadersIndicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLeagueLeadersIndicesJSON>, TypeLeagueLeadersIndicesJSON *, bool> generator("Type TypeLeagueLeadersIndices", ignore_extras);
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
            static char lowerBoundLeagueLeadersIndex[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLeagueLeadersIndex>, OInteger, o_integer > fieldGeneratorLeagueLeadersIndex;
            static char lowerBoundTeamOrPlayerIndices[];
            JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTeamOrPlayerIndices>, OInteger, o_integer > fieldGeneratorTeamOrPlayerIndices;
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
                TypeLeagueLeadersIndicesJSON *result = new TypeLeagueLeadersIndicesJSON();
                assert(result != NULL);
                RCHandle<TypeLeagueLeadersIndicesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeLeagueLeadersIndicesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeLeagueLeadersIndicesJSON *result)
              {
                if (fieldGeneratorLeagueLeadersIndex.have_value)
                  {
                    result->setLeagueLeadersIndex(fieldGeneratorLeagueLeadersIndex.value);
                    fieldGeneratorLeagueLeadersIndex.have_value = false;
                  }
                if (fieldGeneratorTeamOrPlayerIndices.have_value)
                  {
                    result->initTeamOrPlayerIndices();
                    size_t count = fieldGeneratorTeamOrPlayerIndices.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendTeamOrPlayerIndices(fieldGeneratorTeamOrPlayerIndices.value[num]);
                      }
                    fieldGeneratorTeamOrPlayerIndices.value.clear();
                    fieldGeneratorTeamOrPlayerIndices.have_value = false;
                  }
              }
            virtual void handle_result(TypeLeagueLeadersIndicesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "eagueLeadersIndex") == 0)
                            return &fieldGeneratorLeagueLeadersIndex;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "eamOrPlayerIndices") == 0)
                            return &fieldGeneratorTeamOrPlayerIndices;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorLeagueLeadersIndex("field \"LeagueLeadersIndex\" of the TypeLeagueLeadersIndices class"), fieldGeneratorTeamOrPlayerIndices("field \"TeamOrPlayerIndices\" of the TypeLeagueLeadersIndices class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeLeagueLeadersIndices class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLeagueLeadersIndex.reset();
                fieldGeneratorTeamOrPlayerIndices.reset();
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
    bool flagHasLeague;
    SportsLeagueCodeJSON * storeLeague;
    bool flagHasDivision;
    SportsLeagueDivisionJSON * storeDivision;
    bool flagHasTeamsOrPlayers;
    TypeTeamsOrPlayers storeTeamsOrPlayers;
    bool flagHasStatistics;
    std::vector< SportsStatsTypeJSON * > storeStatistics;
    bool flagHasRank;
    OInteger storeRank;
    bool flagHasSeason;
    SportsSeasonResolvedJSON * storeSeason;
    bool flagHasLeagueLeadersIndices;
    std::vector< TypeLeagueLeadersIndicesJSON * > storeLeagueLeadersIndices;
    bool flagHasError;
    TypeError storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeagueLeadersQueryDataJSON(const SportsLeagueLeadersQueryDataJSON &);
    SportsLeagueLeadersQueryDataJSON & operator=(const SportsLeagueLeadersQueryDataJSON &other);

    void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeamsOrPlayers(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatistics(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeagueLeadersIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueLeadersQueryDataJSON(void);
    virtual ~SportsLeagueLeadersQueryDataJSON(void);
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
    bool  hasTeamsOrPlayers(void) const;
    TypeTeamsOrPlayers  getTeamsOrPlayers(void);
    const TypeTeamsOrPlayers  getTeamsOrPlayers(void) const;
    const char * getTeamsOrPlayersAsChars(void) const;
    std::string  getTeamsOrPlayersAsString(void) const;
    bool  hasStatistics(void) const;
    size_t  countOfStatistics(void) const;
    SportsStatsTypeJSON *  elementOfStatistics(size_t element_num);
    const SportsStatsTypeJSON *  elementOfStatistics(size_t element_num) const;
    std::vector< SportsStatsTypeJSON * >  getStatistics(void);
    const std::vector< SportsStatsTypeJSON * >  getStatistics(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;
    bool  hasSeason(void) const;
    SportsSeasonResolvedJSON *  getSeason(void);
    const SportsSeasonResolvedJSON *  getSeason(void) const;
    bool  hasLeagueLeadersIndices(void) const;
    size_t  countOfLeagueLeadersIndices(void) const;
    TypeLeagueLeadersIndicesJSON *  elementOfLeagueLeadersIndices(size_t element_num);
    const TypeLeagueLeadersIndicesJSON *  elementOfLeagueLeadersIndices(size_t element_num) const;
    std::vector< TypeLeagueLeadersIndicesJSON * >  getLeagueLeadersIndices(void);
    const std::vector< TypeLeagueLeadersIndicesJSON * >  getLeagueLeadersIndices(void) const;
    bool  hasError(void) const;
    TypeError  getError(void);
    const TypeError  getError(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsLeagueLeadersQueryDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeagueLeadersQueryDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeagueLeadersQueryDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeagueLeadersQueryDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeagueLeadersQueryDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeagueLeadersQueryDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setTeamsOrPlayers(TypeTeamsOrPlayers new_value)
      {
        flagHasTeamsOrPlayers = true;
        storeTeamsOrPlayers = new_value;
      }
    void setTeamsOrPlayers(const char *chars)
      {
        TypeTeamsOrPlayersKnownValues known = stringToTeamsOrPlayers(chars);
        TypeTeamsOrPlayers new_value;
        if (known == TeamsOrPlayers__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setTeamsOrPlayers(new_value);
      }
    void setTeamsOrPlayers(std::string the_string)
      {
        setTeamsOrPlayers(the_string.c_str());
      }
    void setTeamsOrPlayers(TypeTeamsOrPlayersKnownValues new_value)
      {
        TypeTeamsOrPlayers new_full_value;
        assert(new_value != TeamsOrPlayers__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setTeamsOrPlayers(new_full_value);
      }
    void unsetTeamsOrPlayers(void)
      {
        flagHasTeamsOrPlayers = false;
      }
    void initStatistics(void)
      {
        if (flagHasStatistics)
          {
            for (size_t num3 = 0; num3 < storeStatistics.size(); ++num3)
              {
                storeStatistics[num3]->remove_reference();
              }
          }
        flagHasStatistics = true;
        storeStatistics.clear();
      }
    void appendStatistics(SportsStatsTypeJSON * to_append)
      {
        if (!flagHasStatistics)
          {
            flagHasStatistics = true;
            storeStatistics.clear();
          }
        assert(flagHasStatistics);
        to_append->add_reference();
        storeStatistics.push_back(to_append);
      }
    void appendStatistics(SportsStatsTypeJSON::TypeValue new_value)
      {
        appendStatistics(new SportsStatsTypeJSON(new_value));
      }
    void appendStatistics(const char *chars)
      {
        SportsStatsTypeJSON::TypeValueKnownValues known = SportsStatsTypeJSON::stringToValue(chars);
        SportsStatsTypeJSON::TypeValue new_value;
        if (known == SportsStatsTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendStatistics(new_value);
      }
    void appendStatistics(std::string the_string)
      {
        appendStatistics(the_string.c_str());
      }
    void unsetStatistics(void)
      {
        if (flagHasStatistics)
          {
            for (size_t num4 = 0; num4 < storeStatistics.size(); ++num4)
              {
                storeStatistics[num4]->remove_reference();
              }
          }
        flagHasStatistics = false;
        storeStatistics.clear();
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < 1)
            throw("The value for field Rank of SportsLeagueLeadersQueryDataJSON is less than the lower bound (1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
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
    void initLeagueLeadersIndices(void)
      {
        if (flagHasLeagueLeadersIndices)
          {
            for (size_t num5 = 0; num5 < storeLeagueLeadersIndices.size(); ++num5)
              {
                storeLeagueLeadersIndices[num5]->remove_reference();
              }
          }
        flagHasLeagueLeadersIndices = true;
        storeLeagueLeadersIndices.clear();
      }
    void appendLeagueLeadersIndices(TypeLeagueLeadersIndicesJSON * to_append)
      {
        if (!flagHasLeagueLeadersIndices)
          {
            flagHasLeagueLeadersIndices = true;
            storeLeagueLeadersIndices.clear();
          }
        assert(flagHasLeagueLeadersIndices);
        to_append->add_reference();
        storeLeagueLeadersIndices.push_back(to_append);
      }
    void unsetLeagueLeadersIndices(void)
      {
        if (flagHasLeagueLeadersIndices)
          {
            for (size_t num6 = 0; num6 < storeLeagueLeadersIndices.size(); ++num6)
              {
                storeLeagueLeadersIndices[num6]->remove_reference();
              }
          }
        flagHasLeagueLeadersIndices = false;
        storeLeagueLeadersIndices.clear();
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

    virtual void extraSportsLeagueLeadersQueryDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeagueLeadersQueryDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeagueLeadersQueryDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeagueLeadersQueryDataAppendPair(key, new_component);
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
        assert(flagHasLeague);
        handler->start_pair("League");
        storeLeague->write_as_json(handler);
        if (flagHasDivision)
          {
            handler->start_pair("Division");
            storeDivision->write_as_json(handler);
          }
        assert(flagHasTeamsOrPlayers);
        handler->start_pair("TeamsOrPlayers");
        if (storeTeamsOrPlayers.in_known_list)
          {
            switch (storeTeamsOrPlayers.list_value)
              {
                case TeamsOrPlayers_Teams:
                    handler->string_value("Teams");
                    break;
                case TeamsOrPlayers_Players:
                    handler->string_value("Players");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeTeamsOrPlayers.string_value);
          }
        assert(flagHasStatistics);
        handler->start_pair("Statistics");
        assert(storeStatistics.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeStatistics.size(); ++num1)
          {
            storeStatistics[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
        if (flagHasSeason)
          {
            handler->start_pair("Season");
            storeSeason->write_as_json(handler);
          }
        if (flagHasLeagueLeadersIndices)
          {
            handler->start_pair("LeagueLeadersIndices");
            assert(storeLeagueLeadersIndices.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeLeagueLeadersIndices.size(); ++num2)
              {
                storeLeagueLeadersIndices[num2]->write_as_json(handler);
              }
            handler->finish_array();
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
        if (!(hasLeague()))
          {
            return "When parsing the object for %what%, the \"League\" field was missing.";
          }
        if (!(hasTeamsOrPlayers()))
          {
            return "When parsing the object for %what%, the \"TeamsOrPlayers\" field was missing.";
          }
        if (!(hasStatistics()))
          {
            return "When parsing the object for %what%, the \"Statistics\" field was missing.";
          }
        return NULL;
      }

    static SportsLeagueLeadersQueryDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueLeadersQueryDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueLeadersQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersQueryDataJSON>, SportsLeagueLeadersQueryDataJSON *, bool> generator("Type SportsLeagueLeadersQueryData", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueLeadersQueryDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueLeadersQueryDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueLeadersQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersQueryDataJSON>, SportsLeagueLeadersQueryDataJSON *, bool> generator("Type SportsLeagueLeadersQueryData", ignore_extras);
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
        JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
        JSONHoldingGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorDivision;
    class FieldGeneratorTeamsOrPlayers : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTeamsOrPlayers(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTeamsOrPlayers(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTeamsOrPlayersKnownValues known = stringToTeamsOrPlayers(result);
                TypeTeamsOrPlayers new_value;
                if (known == TeamsOrPlayers__none)
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
            virtual void handle_result(TypeTeamsOrPlayers result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTeamsOrPlayers, TypeTeamsOrPlayers, TypeTeamsOrPlayers > fieldGeneratorTeamsOrPlayers;
        JSONHoldingArrayGenerator<SportsStatsTypeJSON::Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool > fieldGeneratorStatistics;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
        JSONHoldingGenerator<SportsSeasonResolvedJSON::Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool > fieldGeneratorSeason;
        JSONHoldingArrayGenerator<TypeLeagueLeadersIndicesJSON::Generator, RCHandle<TypeLeagueLeadersIndicesJSON>, TypeLeagueLeadersIndicesJSON *, bool > fieldGeneratorLeagueLeadersIndices;
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
            SportsLeagueLeadersQueryDataJSON *result = new SportsLeagueLeadersQueryDataJSON();
            assert(result != NULL);
            RCHandle<SportsLeagueLeadersQueryDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeagueLeadersQueryDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsLeagueLeadersQueryDataJSON *result)
          {
            if (fieldGeneratorLeague.have_value)
              {
                result->setLeague(fieldGeneratorLeague.value.referenced());
                fieldGeneratorLeague.have_value = false;
              }
            else if (!(result->hasLeague()))
              {
                error("When parsing the object for %what%, the \"League\" field was missing.");
              }
            if (fieldGeneratorDivision.have_value)
              {
                result->setDivision(fieldGeneratorDivision.value.referenced());
                fieldGeneratorDivision.have_value = false;
              }
            if (fieldGeneratorTeamsOrPlayers.have_value)
              {
                result->setTeamsOrPlayers(fieldGeneratorTeamsOrPlayers.value);
                fieldGeneratorTeamsOrPlayers.have_value = false;
              }
            else if (!(result->hasTeamsOrPlayers()))
              {
                error("When parsing the object for %what%, the \"TeamsOrPlayers\" field was missing.");
              }
            if (fieldGeneratorStatistics.have_value)
              {
                result->initStatistics();
                size_t count = fieldGeneratorStatistics.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStatistics(fieldGeneratorStatistics.value[num].referenced());
                  }
                fieldGeneratorStatistics.value.clear();
                fieldGeneratorStatistics.have_value = false;
              }
            else if (!(result->hasStatistics()))
              {
                error("When parsing the object for %what%, the \"Statistics\" field was missing.");
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            if (fieldGeneratorLeagueLeadersIndices.have_value)
              {
                result->initLeagueLeadersIndices();
                size_t count = fieldGeneratorLeagueLeadersIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLeagueLeadersIndices(fieldGeneratorLeagueLeadersIndices.value[num].referenced());
                  }
                fieldGeneratorLeagueLeadersIndices.value.clear();
                fieldGeneratorLeagueLeadersIndices.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value);
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsLeagueLeadersQueryDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ivision") == 0)
                        return &fieldGeneratorDivision;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "eague", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 0:
                                return &fieldGeneratorLeague;
                            case 'L':
                                if (strcmp(&(field_name[7]), "eadersIndices") == 0)
                                    return &fieldGeneratorLeagueLeadersIndices;
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
                            if (strcmp(&(field_name[2]), "ason") == 0)
                                return &fieldGeneratorSeason;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "atistics") == 0)
                                return &fieldGeneratorStatistics;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "eamsOrPlayers") == 0)
                        return &fieldGeneratorTeamsOrPlayers;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLeague("field \"League\" of the SportsLeagueLeadersQueryData class", ignore_extras), fieldGeneratorDivision("field \"Division\" of the SportsLeagueLeadersQueryData class", ignore_extras), fieldGeneratorTeamsOrPlayers("field \"TeamsOrPlayers\" of the SportsLeagueLeadersQueryData class"), fieldGeneratorStatistics("field \"Statistics\" of the SportsLeagueLeadersQueryData class", ignore_extras), fieldGeneratorRank("field \"Rank\" of the SportsLeagueLeadersQueryData class"), fieldGeneratorSeason("field \"Season\" of the SportsLeagueLeadersQueryData class", ignore_extras), fieldGeneratorLeagueLeadersIndices("field \"LeagueLeadersIndices\" of the SportsLeagueLeadersQueryData class", ignore_extras), fieldGeneratorError("field \"Error\" of the SportsLeagueLeadersQueryData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeagueLeadersQueryData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLeague.reset();
            fieldGeneratorDivision.reset();
            fieldGeneratorTeamsOrPlayers.reset();
            fieldGeneratorStatistics.reset();
            fieldGeneratorRank.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorLeagueLeadersIndices.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUELEADERSQUERYDATAJSON_H */
