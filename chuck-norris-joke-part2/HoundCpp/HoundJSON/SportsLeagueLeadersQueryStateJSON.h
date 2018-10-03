/* file "SportsLeagueLeadersQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUELEADERSQUERYSTATEJSON_H
#define SPORTSLEAGUELEADERSQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsStatsTypeJSON.h"
#include "SportsLeagueLeadersArgumentArrayJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueLeadersQueryStateJSON : public ReferenceCounted
  {
  public:
    class TypeQueryDataAndResultsJSON : public ReferenceCounted
      {
      public:
        enum TypeTeamOrPlayerKnownValues
          {
            TeamOrPlayer_Team,
            TeamOrPlayer_Player,
            TeamOrPlayer__none
          };
        struct TypeTeamOrPlayer
          {
            bool in_known_list;
            std::string string_value;
            TypeTeamOrPlayerKnownValues list_value;

            TypeTeamOrPlayer(void);
            TypeTeamOrPlayer(const TypeTeamOrPlayer &other);
            TypeTeamOrPlayer(TypeTeamOrPlayerKnownValues other);
            bool  operator==(const TypeTeamOrPlayer &other) const;
            bool  operator!=(const TypeTeamOrPlayer &other) const;
            bool  operator<(const TypeTeamOrPlayer &other) const;
            bool  operator>(const TypeTeamOrPlayer &other) const;
            bool  operator>=(const TypeTeamOrPlayer &other) const;
            bool  operator<=(const TypeTeamOrPlayer &other) const;

          };

        static TypeTeamOrPlayerKnownValues  stringToTeamOrPlayer(const char *chars);
        static const char * stringFromTeamOrPlayer(TypeTeamOrPlayerKnownValues the_enum);

      private:
        bool flagHasDivision;
        SportsLeagueDivisionJSON * storeDivision;
        bool flagHasLeague;
        SportsLeagueCodeJSON * storeLeague;
        bool flagHasRank;
        OInteger storeRank;
        bool flagHasStatisticType;
        SportsStatsTypeJSON * storeStatisticType;
        bool flagHasTeamOrPlayer;
        TypeTeamOrPlayer storeTeamOrPlayer;
        bool flagHasArguments;
        std::vector< SportsLeagueLeadersArgumentArrayJSON * > storeArguments;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeQueryDataAndResultsJSON(const TypeQueryDataAndResultsJSON &);
        TypeQueryDataAndResultsJSON & operator=(const TypeQueryDataAndResultsJSON &other);

        void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStatisticType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONArguments(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeQueryDataAndResultsJSON(void);
        virtual ~TypeQueryDataAndResultsJSON(void);
        bool  hasDivision(void) const;
        SportsLeagueDivisionJSON *  getDivision(void);
        const SportsLeagueDivisionJSON *  getDivision(void) const;
        SportsLeagueDivisionJSON::TypeValue  getDivisionValue(void);
        const SportsLeagueDivisionJSON::TypeValue  getDivisionValue(void) const;
        const char * getDivisionAsChars(void) const;
        std::string  getDivisionAsString(void) const;
        bool  hasLeague(void) const;
        SportsLeagueCodeJSON *  getLeague(void);
        const SportsLeagueCodeJSON *  getLeague(void) const;
        SportsLeagueCodeJSON::TypeValue  getLeagueValue(void);
        const SportsLeagueCodeJSON::TypeValue  getLeagueValue(void) const;
        const char * getLeagueAsChars(void) const;
        std::string  getLeagueAsString(void) const;
        bool  hasRank(void) const;
        OInteger  getRank(void);
        const OInteger  getRank(void) const;
        bool  hasStatisticType(void) const;
        SportsStatsTypeJSON *  getStatisticType(void);
        const SportsStatsTypeJSON *  getStatisticType(void) const;
        SportsStatsTypeJSON::TypeValue  getStatisticTypeValue(void);
        const SportsStatsTypeJSON::TypeValue  getStatisticTypeValue(void) const;
        const char * getStatisticTypeAsChars(void) const;
        std::string  getStatisticTypeAsString(void) const;
        bool  hasTeamOrPlayer(void) const;
        TypeTeamOrPlayer  getTeamOrPlayer(void);
        const TypeTeamOrPlayer  getTeamOrPlayer(void) const;
        const char * getTeamOrPlayerAsChars(void) const;
        std::string  getTeamOrPlayerAsString(void) const;
        bool  hasArguments(void) const;
        size_t  countOfArguments(void) const;
        SportsLeagueLeadersArgumentArrayJSON *  elementOfArguments(size_t element_num);
        const SportsLeagueLeadersArgumentArrayJSON *  elementOfArguments(size_t element_num) const;
        std::vector< SportsLeagueLeadersArgumentArrayJSON * >  getArguments(void);
        const std::vector< SportsLeagueLeadersArgumentArrayJSON * >  getArguments(void) const;

        virtual size_t extraTypeQueryDataAndResultsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeQueryDataAndResultsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeQueryDataAndResultsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeQueryDataAndResultsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeQueryDataAndResultsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeQueryDataAndResultsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
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
        void setRank(OInteger new_value)
          {
            flagHasRank = true;
            if (new_value < 1)
                throw("The value for field Rank of TypeQueryDataAndResultsJSON is less than the lower bound (1) for that field.");
            storeRank = new_value;
          }
        void unsetRank(void)
          {
            flagHasRank = false;
          }
        void setStatisticType(SportsStatsTypeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasStatisticType)
              {
                storeStatisticType->remove_reference();
              }
            flagHasStatisticType = true;
            storeStatisticType = new_value;
          }
        void setStatisticType(SportsStatsTypeJSON::TypeValue new_value)
          {
            setStatisticType(new SportsStatsTypeJSON(new_value));
          }
        void setStatisticType(const char *chars)
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
            setStatisticType(new_value);
          }
        void setStatisticType(std::string the_string)
          {
            setStatisticType(the_string.c_str());
          }
        void unsetStatisticType(void)
          {
            if (flagHasStatisticType)
              {
                storeStatisticType->remove_reference();
              }
            flagHasStatisticType = false;
          }
        void setTeamOrPlayer(TypeTeamOrPlayer new_value)
          {
            flagHasTeamOrPlayer = true;
            storeTeamOrPlayer = new_value;
          }
        void setTeamOrPlayer(const char *chars)
          {
            TypeTeamOrPlayerKnownValues known = stringToTeamOrPlayer(chars);
            TypeTeamOrPlayer new_value;
            if (known == TeamOrPlayer__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setTeamOrPlayer(new_value);
          }
        void setTeamOrPlayer(std::string the_string)
          {
            setTeamOrPlayer(the_string.c_str());
          }
        void setTeamOrPlayer(TypeTeamOrPlayerKnownValues new_value)
          {
            TypeTeamOrPlayer new_full_value;
            assert(new_value != TeamOrPlayer__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setTeamOrPlayer(new_full_value);
          }
        void unsetTeamOrPlayer(void)
          {
            flagHasTeamOrPlayer = false;
          }
        void initArguments(void)
          {
            if (flagHasArguments)
              {
                for (size_t num2 = 0; num2 < storeArguments.size(); ++num2)
                  {
                    storeArguments[num2]->remove_reference();
                  }
              }
            flagHasArguments = true;
            storeArguments.clear();
          }
        void appendArguments(SportsLeagueLeadersArgumentArrayJSON * to_append)
          {
            if (!flagHasArguments)
              {
                flagHasArguments = true;
                storeArguments.clear();
              }
            assert(flagHasArguments);
            to_append->add_reference();
            storeArguments.push_back(to_append);
          }
        void unsetArguments(void)
          {
            if (flagHasArguments)
              {
                for (size_t num3 = 0; num3 < storeArguments.size(); ++num3)
                  {
                    storeArguments[num3]->remove_reference();
                  }
              }
            flagHasArguments = false;
            storeArguments.clear();
          }

        virtual void extraTypeQueryDataAndResultsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeQueryDataAndResultsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeQueryDataAndResultsLookup(key);
            if (old_field == NULL)
              {
                extraTypeQueryDataAndResultsAppendPair(key, new_component);
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
            if (flagHasDivision)
              {
                handler->start_pair("Division");
                storeDivision->write_as_json(handler);
              }
            assert(flagHasLeague);
            handler->start_pair("League");
            storeLeague->write_as_json(handler);
            if (flagHasRank)
              {
                handler->start_pair("Rank");
                handler->number_value(storeRank.get_o_integer());
              }
            assert(flagHasStatisticType);
            handler->start_pair("StatisticType");
            storeStatisticType->write_as_json(handler);
            assert(flagHasTeamOrPlayer);
            handler->start_pair("TeamOrPlayer");
            if (storeTeamOrPlayer.in_known_list)
              {
                switch (storeTeamOrPlayer.list_value)
                  {
                    case TeamOrPlayer_Team:
                        handler->string_value("Team");
                        break;
                    case TeamOrPlayer_Player:
                        handler->string_value("Player");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeTeamOrPlayer.string_value);
              }
            if (flagHasArguments)
              {
                handler->start_pair("Arguments");
                assert(storeArguments.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeArguments.size(); ++num1)
                  {
                    storeArguments[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLeague()))
              {
                return "When parsing the object for %what%, the \"League\" field was missing.";
              }
            if (!(hasStatisticType()))
              {
                return "When parsing the object for %what%, the \"StatisticType\" field was missing.";
              }
            if (!(hasTeamOrPlayer()))
              {
                return "When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.";
              }
            return NULL;
          }

        static TypeQueryDataAndResultsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeQueryDataAndResultsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeQueryDataAndResultsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeQueryDataAndResultsJSON>, TypeQueryDataAndResultsJSON *, bool> generator("Type TypeQueryDataAndResults", ignore_extras);
                parse_json_value(text, "Text for TypeQueryDataAndResultsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeQueryDataAndResultsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeQueryDataAndResultsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeQueryDataAndResultsJSON>, TypeQueryDataAndResultsJSON *, bool> generator("Type TypeQueryDataAndResults", ignore_extras);
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
            JSONHoldingGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorDivision;
            JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
            static char lowerBoundRank[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
            JSONHoldingGenerator<SportsStatsTypeJSON::Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool > fieldGeneratorStatisticType;
        class FieldGeneratorTeamOrPlayer : public JSONStringGenerator
              {
              protected:
                FieldGeneratorTeamOrPlayer(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorTeamOrPlayer(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeTeamOrPlayerKnownValues known = stringToTeamOrPlayer(result);
                    TypeTeamOrPlayer new_value;
                    if (known == TeamOrPlayer__none)
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
                virtual void handle_result(TypeTeamOrPlayer result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorTeamOrPlayer, TypeTeamOrPlayer, TypeTeamOrPlayer > fieldGeneratorTeamOrPlayer;
            JSONHoldingArrayGenerator<SportsLeagueLeadersArgumentArrayJSON::Generator, RCHandle<SportsLeagueLeadersArgumentArrayJSON>, SportsLeagueLeadersArgumentArrayJSON *, bool > fieldGeneratorArguments;
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
                TypeQueryDataAndResultsJSON *result = new TypeQueryDataAndResultsJSON();
                assert(result != NULL);
                RCHandle<TypeQueryDataAndResultsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeQueryDataAndResultsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeQueryDataAndResultsJSON *result)
              {
                if (fieldGeneratorDivision.have_value)
                  {
                    result->setDivision(fieldGeneratorDivision.value.referenced());
                    fieldGeneratorDivision.have_value = false;
                  }
                if (fieldGeneratorLeague.have_value)
                  {
                    result->setLeague(fieldGeneratorLeague.value.referenced());
                    fieldGeneratorLeague.have_value = false;
                  }
                else if (!(result->hasLeague()))
                  {
                    error("When parsing the object for %what%, the \"League\" field was missing.");
                  }
                if (fieldGeneratorRank.have_value)
                  {
                    result->setRank(fieldGeneratorRank.value);
                    fieldGeneratorRank.have_value = false;
                  }
                if (fieldGeneratorStatisticType.have_value)
                  {
                    result->setStatisticType(fieldGeneratorStatisticType.value.referenced());
                    fieldGeneratorStatisticType.have_value = false;
                  }
                else if (!(result->hasStatisticType()))
                  {
                    error("When parsing the object for %what%, the \"StatisticType\" field was missing.");
                  }
                if (fieldGeneratorTeamOrPlayer.have_value)
                  {
                    result->setTeamOrPlayer(fieldGeneratorTeamOrPlayer.value);
                    fieldGeneratorTeamOrPlayer.have_value = false;
                  }
                else if (!(result->hasTeamOrPlayer()))
                  {
                    error("When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.");
                  }
                if (fieldGeneratorArguments.have_value)
                  {
                    result->initArguments();
                    size_t count = fieldGeneratorArguments.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendArguments(fieldGeneratorArguments.value[num].referenced());
                      }
                    fieldGeneratorArguments.value.clear();
                    fieldGeneratorArguments.have_value = false;
                  }
              }
            virtual void handle_result(TypeQueryDataAndResultsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "rguments") == 0)
                            return &fieldGeneratorArguments;
                        break;
                    case 'D':
                        if (strcmp(&(field_name[1]), "ivision") == 0)
                            return &fieldGeneratorDivision;
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
                        if (strcmp(&(field_name[1]), "tatisticType") == 0)
                            return &fieldGeneratorStatisticType;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "eamOrPlayer") == 0)
                            return &fieldGeneratorTeamOrPlayer;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDivision("field \"Division\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorLeague("field \"League\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorRank("field \"Rank\" of the TypeQueryDataAndResults class"), fieldGeneratorStatisticType("field \"StatisticType\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorTeamOrPlayer("field \"TeamOrPlayer\" of the TypeQueryDataAndResults class"), fieldGeneratorArguments("field \"Arguments\" of the TypeQueryDataAndResults class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeQueryDataAndResults class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDivision.reset();
                fieldGeneratorLeague.reset();
                fieldGeneratorRank.reset();
                fieldGeneratorStatisticType.reset();
                fieldGeneratorTeamOrPlayer.reset();
                fieldGeneratorArguments.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasQueryDataAndResults;
    std::vector< TypeQueryDataAndResultsJSON * > storeQueryDataAndResults;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeagueLeadersQueryStateJSON(const SportsLeagueLeadersQueryStateJSON &);
    SportsLeagueLeadersQueryStateJSON & operator=(const SportsLeagueLeadersQueryStateJSON &other);

    void  fromJSONQueryDataAndResults(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueLeadersQueryStateJSON(void);
    virtual ~SportsLeagueLeadersQueryStateJSON(void);
    bool  hasQueryDataAndResults(void) const;
    size_t  countOfQueryDataAndResults(void) const;
    TypeQueryDataAndResultsJSON *  elementOfQueryDataAndResults(size_t element_num);
    const TypeQueryDataAndResultsJSON *  elementOfQueryDataAndResults(size_t element_num) const;
    std::vector< TypeQueryDataAndResultsJSON * >  getQueryDataAndResults(void);
    const std::vector< TypeQueryDataAndResultsJSON * >  getQueryDataAndResults(void) const;

    virtual size_t extraSportsLeagueLeadersQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeagueLeadersQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeagueLeadersQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeagueLeadersQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeagueLeadersQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeagueLeadersQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initQueryDataAndResults(void)
      {
        if (flagHasQueryDataAndResults)
          {
            for (size_t num5 = 0; num5 < storeQueryDataAndResults.size(); ++num5)
              {
                storeQueryDataAndResults[num5]->remove_reference();
              }
          }
        flagHasQueryDataAndResults = true;
        storeQueryDataAndResults.clear();
      }
    void appendQueryDataAndResults(TypeQueryDataAndResultsJSON * to_append)
      {
        if (!flagHasQueryDataAndResults)
          {
            flagHasQueryDataAndResults = true;
            storeQueryDataAndResults.clear();
          }
        assert(flagHasQueryDataAndResults);
        to_append->add_reference();
        storeQueryDataAndResults.push_back(to_append);
      }
    void unsetQueryDataAndResults(void)
      {
        if (flagHasQueryDataAndResults)
          {
            for (size_t num6 = 0; num6 < storeQueryDataAndResults.size(); ++num6)
              {
                storeQueryDataAndResults[num6]->remove_reference();
              }
          }
        flagHasQueryDataAndResults = false;
        storeQueryDataAndResults.clear();
      }

    virtual void extraSportsLeagueLeadersQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeagueLeadersQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeagueLeadersQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeagueLeadersQueryStateAppendPair(key, new_component);
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
        if (flagHasQueryDataAndResults)
          {
            handler->start_pair("QueryDataAndResults");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeQueryDataAndResults.size(); ++num1)
              {
                storeQueryDataAndResults[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsLeagueLeadersQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueLeadersQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueLeadersQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersQueryStateJSON>, SportsLeagueLeadersQueryStateJSON *, bool> generator("Type SportsLeagueLeadersQueryState", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueLeadersQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueLeadersQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueLeadersQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersQueryStateJSON>, SportsLeagueLeadersQueryStateJSON *, bool> generator("Type SportsLeagueLeadersQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeQueryDataAndResultsJSON::Generator, RCHandle<TypeQueryDataAndResultsJSON>, TypeQueryDataAndResultsJSON *, bool > fieldGeneratorQueryDataAndResults;
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
            SportsLeagueLeadersQueryStateJSON *result = new SportsLeagueLeadersQueryStateJSON();
            assert(result != NULL);
            RCHandle<SportsLeagueLeadersQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeagueLeadersQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsLeagueLeadersQueryStateJSON *result)
          {
            if (fieldGeneratorQueryDataAndResults.have_value)
              {
                result->initQueryDataAndResults();
                size_t count = fieldGeneratorQueryDataAndResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryDataAndResults(fieldGeneratorQueryDataAndResults.value[num].referenced());
                  }
                fieldGeneratorQueryDataAndResults.value.clear();
                fieldGeneratorQueryDataAndResults.have_value = false;
              }
          }
        virtual void handle_result(SportsLeagueLeadersQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "QueryDataAndResults") == 0)
                return &fieldGeneratorQueryDataAndResults;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryDataAndResults("field \"QueryDataAndResults\" of the SportsLeagueLeadersQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeagueLeadersQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryDataAndResults.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUELEADERSQUERYSTATEJSON_H */
