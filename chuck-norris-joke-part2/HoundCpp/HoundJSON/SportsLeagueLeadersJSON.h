/* file "SportsLeagueLeadersJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUELEADERSJSON_H
#define SPORTSLEAGUELEADERSJSON_H

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
#include <string>
#include "OInteger.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsStatsTypeJSON.h"
#include "SportsSeasonResolvedJSON.h"
#include "SportsTeamOrPlayerJSON.h"
#include "SportsSportImageJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueLeadersJSON : public ReferenceCounted
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
    class TypeLeadersJSON : public ReferenceCounted
      {
      private:
        bool flagHasTeamOrPlayer;
        SportsTeamOrPlayerJSON * storeTeamOrPlayer;
        bool flagHasRank;
        OInteger storeRank;
        bool flagHasValue;
        std::string storeValue;
        bool flagHasValueNumeric;
        double storeValueNumeric;
        std::string textStoreValueNumeric;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeLeadersJSON(const TypeLeadersJSON &);
        TypeLeadersJSON & operator=(const TypeLeadersJSON &other);

        void  fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONValueNumeric(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeLeadersJSON(void);
        virtual ~TypeLeadersJSON(void);
        bool  hasTeamOrPlayer(void) const;
        SportsTeamOrPlayerJSON *  getTeamOrPlayer(void);
        const SportsTeamOrPlayerJSON *  getTeamOrPlayer(void) const;
        SportsTeamOrPlayerJSON::TypeValue  getTeamOrPlayerValue(void);
        const SportsTeamOrPlayerJSON::TypeValue  getTeamOrPlayerValue(void) const;
        bool  hasRank(void) const;
        OInteger  getRank(void);
        const OInteger  getRank(void) const;
        bool  hasValue(void) const;
        std::string  getValue(void);
        const std::string  getValue(void) const;
        bool  hasValueNumeric(void) const;
        double  getValueNumeric(void);
        const double  getValueNumeric(void) const;
        std::string  getValueNumericAsText(void) const;

        virtual size_t extraTypeLeadersComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeLeadersComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeLeadersComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeLeadersComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeLeadersLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeLeadersLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setTeamOrPlayer(SportsTeamOrPlayerJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTeamOrPlayer)
              {
                storeTeamOrPlayer->remove_reference();
              }
            flagHasTeamOrPlayer = true;
            storeTeamOrPlayer = new_value;
          }
        void setTeamOrPlayer(SportsTeamOrPlayerJSON::TypeValue new_value)
          {
            setTeamOrPlayer(new SportsTeamOrPlayerJSON(new_value));
          }
        void unsetTeamOrPlayer(void)
          {
            if (flagHasTeamOrPlayer)
              {
                storeTeamOrPlayer->remove_reference();
              }
            flagHasTeamOrPlayer = false;
          }
        void setRank(OInteger new_value)
          {
            flagHasRank = true;
            if (new_value < 1)
                throw("The value for field Rank of TypeLeadersJSON is less than the lower bound (1) for that field.");
            storeRank = new_value;
          }
        void unsetRank(void)
          {
            flagHasRank = false;
          }
        void setValue(std::string new_value)
          {
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }
        void setValueNumeric(double new_value)
          {
            flagHasValueNumeric = true;
            storeValueNumeric = new_value;
            textStoreValueNumeric = "";
          }
        void setValueNumericText(std::string new_value)
          {
            flagHasValueNumeric = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field ValueNumeric of TypeLeadersJSON is not a valid number.");
            textStoreValueNumeric = new_value;
          }
        void unsetValueNumeric(void)
          {
            flagHasValueNumeric = false;
          }

        virtual void extraTypeLeadersAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeLeadersSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeLeadersLookup(key);
            if (old_field == NULL)
              {
                extraTypeLeadersAppendPair(key, new_component);
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
            assert(flagHasTeamOrPlayer);
            handler->start_pair("TeamOrPlayer");
            storeTeamOrPlayer->write_as_json(handler);
            assert(flagHasRank);
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
            assert(flagHasValue);
            handler->start_pair("Value");
            handler->string_value(storeValue);
            if (flagHasValueNumeric)
              {
                handler->start_pair("ValueNumeric");
                if (textStoreValueNumeric != "")
                    handler->number_value(textStoreValueNumeric.c_str());
                else if (((double)(long int)storeValueNumeric) == storeValueNumeric)
                    handler->number_value((long int)storeValueNumeric);
                else
                    handler->number_value(storeValueNumeric);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTeamOrPlayer()))
              {
                return "When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.";
              }
            if (!(hasRank()))
              {
                return "When parsing the object for %what%, the \"Rank\" field was missing.";
              }
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeLeadersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeLeadersJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeLeadersJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLeadersJSON>, TypeLeadersJSON *, bool> generator("Type TypeLeaders", ignore_extras);
                parse_json_value(text, "Text for TypeLeadersJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeLeadersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeLeadersJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLeadersJSON>, TypeLeadersJSON *, bool> generator("Type TypeLeaders", ignore_extras);
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
            JSONHoldingGenerator<SportsTeamOrPlayerJSON::Generator, RCHandle<SportsTeamOrPlayerJSON>, SportsTeamOrPlayerJSON *, bool > fieldGeneratorTeamOrPlayer;
            static char lowerBoundRank[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorValue;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValueNumeric;
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
                TypeLeadersJSON *result = new TypeLeadersJSON();
                assert(result != NULL);
                RCHandle<TypeLeadersJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeLeadersAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeLeadersJSON *result)
              {
                if (fieldGeneratorTeamOrPlayer.have_value)
                  {
                    result->setTeamOrPlayer(fieldGeneratorTeamOrPlayer.value.referenced());
                    fieldGeneratorTeamOrPlayer.have_value = false;
                  }
                else if (!(result->hasTeamOrPlayer()))
                  {
                    error("When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.");
                  }
                if (fieldGeneratorRank.have_value)
                  {
                    result->setRank(fieldGeneratorRank.value);
                    fieldGeneratorRank.have_value = false;
                  }
                else if (!(result->hasRank()))
                  {
                    error("When parsing the object for %what%, the \"Rank\" field was missing.");
                  }
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
                if (fieldGeneratorValueNumeric.have_value)
                  {
                    result->setValueNumericText(fieldGeneratorValueNumeric.value);
                    fieldGeneratorValueNumeric.have_value = false;
                  }
              }
            virtual void handle_result(TypeLeadersJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'R':
                        if (strcmp(&(field_name[1]), "ank") == 0)
                            return &fieldGeneratorRank;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "eamOrPlayer") == 0)
                            return &fieldGeneratorTeamOrPlayer;
                        break;
                    case 'V':
                        if (strncmp(&(field_name[1]), "alue", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 0:
                                    return &fieldGeneratorValue;
                                case 'N':
                                    if (strcmp(&(field_name[6]), "umeric") == 0)
                                        return &fieldGeneratorValueNumeric;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTeamOrPlayer("field \"TeamOrPlayer\" of the TypeLeaders class", ignore_extras), fieldGeneratorRank("field \"Rank\" of the TypeLeaders class"), fieldGeneratorValue("field \"Value\" of the TypeLeaders class"), fieldGeneratorValueNumeric("field \"ValueNumeric\" of the TypeLeaders class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeLeaders class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTeamOrPlayer.reset();
                fieldGeneratorRank.reset();
                fieldGeneratorValue.reset();
                fieldGeneratorValueNumeric.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasLeague;
    SportsLeagueCodeJSON * storeLeague;
    bool flagHasDivision;
    SportsLeagueDivisionJSON * storeDivision;
    bool flagHasStatistic;
    SportsStatsTypeJSON * storeStatistic;
    bool flagHasSeason;
    SportsSeasonResolvedJSON * storeSeason;
    bool flagHasTeamsOrPlayers;
    TypeTeamsOrPlayers storeTeamsOrPlayers;
    bool flagHasLeaders;
    std::vector< TypeLeadersJSON * > storeLeaders;
    bool flagHasSportImage;
    SportsSportImageJSON * storeSportImage;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeagueLeadersJSON(const SportsLeagueLeadersJSON &);
    SportsLeagueLeadersJSON & operator=(const SportsLeagueLeadersJSON &other);

    void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatistic(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeamsOrPlayers(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeaders(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSportImage(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueLeadersJSON(void);
    virtual ~SportsLeagueLeadersJSON(void);
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
    bool  hasStatistic(void) const;
    SportsStatsTypeJSON *  getStatistic(void);
    const SportsStatsTypeJSON *  getStatistic(void) const;
    SportsStatsTypeJSON::TypeValue  getStatisticValue(void);
    const SportsStatsTypeJSON::TypeValue  getStatisticValue(void) const;
    const char * getStatisticAsChars(void) const;
    std::string  getStatisticAsString(void) const;
    bool  hasSeason(void) const;
    SportsSeasonResolvedJSON *  getSeason(void);
    const SportsSeasonResolvedJSON *  getSeason(void) const;
    bool  hasTeamsOrPlayers(void) const;
    TypeTeamsOrPlayers  getTeamsOrPlayers(void);
    const TypeTeamsOrPlayers  getTeamsOrPlayers(void) const;
    const char * getTeamsOrPlayersAsChars(void) const;
    std::string  getTeamsOrPlayersAsString(void) const;
    bool  hasLeaders(void) const;
    size_t  countOfLeaders(void) const;
    TypeLeadersJSON *  elementOfLeaders(size_t element_num);
    const TypeLeadersJSON *  elementOfLeaders(size_t element_num) const;
    std::vector< TypeLeadersJSON * >  getLeaders(void);
    const std::vector< TypeLeadersJSON * >  getLeaders(void) const;
    bool  hasSportImage(void) const;
    SportsSportImageJSON *  getSportImage(void);
    const SportsSportImageJSON *  getSportImage(void) const;

    virtual size_t extraSportsLeagueLeadersComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeagueLeadersComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeagueLeadersComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeagueLeadersComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeagueLeadersLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeagueLeadersLookup(const char *field_name) const
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
    void setStatistic(SportsStatsTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStatistic)
          {
            storeStatistic->remove_reference();
          }
        flagHasStatistic = true;
        storeStatistic = new_value;
      }
    void setStatistic(SportsStatsTypeJSON::TypeValue new_value)
      {
        setStatistic(new SportsStatsTypeJSON(new_value));
      }
    void setStatistic(const char *chars)
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
        setStatistic(new_value);
      }
    void setStatistic(std::string the_string)
      {
        setStatistic(the_string.c_str());
      }
    void unsetStatistic(void)
      {
        if (flagHasStatistic)
          {
            storeStatistic->remove_reference();
          }
        flagHasStatistic = false;
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
    void initLeaders(void)
      {
        if (flagHasLeaders)
          {
            for (size_t num2 = 0; num2 < storeLeaders.size(); ++num2)
              {
                storeLeaders[num2]->remove_reference();
              }
          }
        flagHasLeaders = true;
        storeLeaders.clear();
      }
    void appendLeaders(TypeLeadersJSON * to_append)
      {
        if (!flagHasLeaders)
          {
            flagHasLeaders = true;
            storeLeaders.clear();
          }
        assert(flagHasLeaders);
        to_append->add_reference();
        storeLeaders.push_back(to_append);
      }
    void unsetLeaders(void)
      {
        if (flagHasLeaders)
          {
            for (size_t num3 = 0; num3 < storeLeaders.size(); ++num3)
              {
                storeLeaders[num3]->remove_reference();
              }
          }
        flagHasLeaders = false;
        storeLeaders.clear();
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

    virtual void extraSportsLeagueLeadersAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeagueLeadersSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeagueLeadersLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeagueLeadersAppendPair(key, new_component);
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
        assert(flagHasStatistic);
        handler->start_pair("Statistic");
        storeStatistic->write_as_json(handler);
        assert(flagHasSeason);
        handler->start_pair("Season");
        storeSeason->write_as_json(handler);
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
        if (flagHasLeaders)
          {
            handler->start_pair("Leaders");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeLeaders.size(); ++num1)
              {
                storeLeaders[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSportImage)
          {
            handler->start_pair("SportImage");
            storeSportImage->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLeague()))
          {
            return "When parsing the object for %what%, the \"League\" field was missing.";
          }
        if (!(hasStatistic()))
          {
            return "When parsing the object for %what%, the \"Statistic\" field was missing.";
          }
        if (!(hasSeason()))
          {
            return "When parsing the object for %what%, the \"Season\" field was missing.";
          }
        if (!(hasTeamsOrPlayers()))
          {
            return "When parsing the object for %what%, the \"TeamsOrPlayers\" field was missing.";
          }
        return NULL;
      }

    static SportsLeagueLeadersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueLeadersJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueLeadersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersJSON>, SportsLeagueLeadersJSON *, bool> generator("Type SportsLeagueLeaders", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueLeadersJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueLeadersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueLeadersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersJSON>, SportsLeagueLeadersJSON *, bool> generator("Type SportsLeagueLeaders", ignore_extras);
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
        JSONHoldingGenerator<SportsStatsTypeJSON::Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool > fieldGeneratorStatistic;
        JSONHoldingGenerator<SportsSeasonResolvedJSON::Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool > fieldGeneratorSeason;
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
        JSONHoldingArrayGenerator<TypeLeadersJSON::Generator, RCHandle<TypeLeadersJSON>, TypeLeadersJSON *, bool > fieldGeneratorLeaders;
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
            SportsLeagueLeadersJSON *result = new SportsLeagueLeadersJSON();
            assert(result != NULL);
            RCHandle<SportsLeagueLeadersJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeagueLeadersAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsLeagueLeadersJSON *result)
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
            if (fieldGeneratorStatistic.have_value)
              {
                result->setStatistic(fieldGeneratorStatistic.value.referenced());
                fieldGeneratorStatistic.have_value = false;
              }
            else if (!(result->hasStatistic()))
              {
                error("When parsing the object for %what%, the \"Statistic\" field was missing.");
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            else if (!(result->hasSeason()))
              {
                error("When parsing the object for %what%, the \"Season\" field was missing.");
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
            if (fieldGeneratorLeaders.have_value)
              {
                result->initLeaders();
                size_t count = fieldGeneratorLeaders.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLeaders(fieldGeneratorLeaders.value[num].referenced());
                  }
                fieldGeneratorLeaders.value.clear();
                fieldGeneratorLeaders.have_value = false;
              }
            if (fieldGeneratorSportImage.have_value)
              {
                result->setSportImage(fieldGeneratorSportImage.value.referenced());
                fieldGeneratorSportImage.have_value = false;
              }
          }
        virtual void handle_result(SportsLeagueLeadersJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ivision") == 0)
                        return &fieldGeneratorDivision;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "ea", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'd':
                                if (strcmp(&(field_name[4]), "ers") == 0)
                                    return &fieldGeneratorLeaders;
                                break;
                            case 'g':
                                if (strcmp(&(field_name[4]), "ue") == 0)
                                    return &fieldGeneratorLeague;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ason") == 0)
                                return &fieldGeneratorSeason;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "ortImage") == 0)
                                return &fieldGeneratorSportImage;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "atistic") == 0)
                                return &fieldGeneratorStatistic;
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
        Generator(bool ignore_extras = false) : fieldGeneratorLeague("field \"League\" of the SportsLeagueLeaders class", ignore_extras), fieldGeneratorDivision("field \"Division\" of the SportsLeagueLeaders class", ignore_extras), fieldGeneratorStatistic("field \"Statistic\" of the SportsLeagueLeaders class", ignore_extras), fieldGeneratorSeason("field \"Season\" of the SportsLeagueLeaders class", ignore_extras), fieldGeneratorTeamsOrPlayers("field \"TeamsOrPlayers\" of the SportsLeagueLeaders class"), fieldGeneratorLeaders("field \"Leaders\" of the SportsLeagueLeaders class", ignore_extras), fieldGeneratorSportImage("field \"SportImage\" of the SportsLeagueLeaders class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeagueLeaders class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLeague.reset();
            fieldGeneratorDivision.reset();
            fieldGeneratorStatistic.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorTeamsOrPlayers.reset();
            fieldGeneratorLeaders.reset();
            fieldGeneratorSportImage.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUELEADERSJSON_H */
