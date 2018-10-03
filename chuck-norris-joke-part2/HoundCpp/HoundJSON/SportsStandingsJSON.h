/* file "SportsStandingsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTANDINGSJSON_H
#define SPORTSSTANDINGSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "SportsLeagueCodeJSON.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsTournamentJSON.h"
#include "SportsSeasonResolvedJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsTeamNewJSON.h"
#include "SportsStandingsDataJSON.h"
#include "SportsSportImageJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStandingsJSON : public ReferenceCounted
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
    class TypeDivisionsJSON : public ReferenceCounted
      {
      public:
        class TypeTeamsJSON : public ReferenceCounted
          {
          private:
            bool flagHasTeam;
            SportsTeamNewJSON * storeTeam;
            bool flagHasStandingsData;
            SportsStandingsDataJSON * storeStandingsData;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeTeamsJSON(const TypeTeamsJSON &);
            TypeTeamsJSON & operator=(const TypeTeamsJSON &other);

            void  fromJSONTeam(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONStandingsData(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeTeamsJSON(void);
            virtual ~TypeTeamsJSON(void);
            bool  hasTeam(void) const;
            SportsTeamNewJSON *  getTeam(void);
            const SportsTeamNewJSON *  getTeam(void) const;
            bool  hasStandingsData(void) const;
            SportsStandingsDataJSON *  getStandingsData(void);
            const SportsStandingsDataJSON *  getStandingsData(void) const;

            virtual size_t extraTypeTeamsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeTeamsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeTeamsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeTeamsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeTeamsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeTeamsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
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
            void setStandingsData(SportsStandingsDataJSON * new_value)
              {
                new_value->add_reference();
                if (flagHasStandingsData)
                  {
                    storeStandingsData->remove_reference();
                  }
                flagHasStandingsData = true;
                storeStandingsData = new_value;
              }
            void unsetStandingsData(void)
              {
                if (flagHasStandingsData)
                  {
                    storeStandingsData->remove_reference();
                  }
                flagHasStandingsData = false;
              }

            virtual void extraTypeTeamsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeTeamsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeTeamsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeTeamsAppendPair(key, new_component);
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
                assert(flagHasTeam);
                handler->start_pair("Team");
                storeTeam->write_as_json(handler);
                assert(flagHasStandingsData);
                handler->start_pair("StandingsData");
                storeStandingsData->write_as_json(handler);
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasTeam()))
                  {
                    return "When parsing the object for %what%, the \"Team\" field was missing.";
                  }
                if (!(hasStandingsData()))
                  {
                    return "When parsing the object for %what%, the \"StandingsData\" field was missing.";
                  }
                return NULL;
              }

            static TypeTeamsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeTeamsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeTeamsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool> generator("Type TypeTeams", ignore_extras);
                    parse_json_value(text, "Text for TypeTeamsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeTeamsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeTeamsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool> generator("Type TypeTeams", ignore_extras);
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
                JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeam;
                JSONHoldingGenerator<SportsStandingsDataJSON::Generator, RCHandle<SportsStandingsDataJSON>, SportsStandingsDataJSON *, bool > fieldGeneratorStandingsData;
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
                    TypeTeamsJSON *result = new TypeTeamsJSON();
                    assert(result != NULL);
                    RCHandle<TypeTeamsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeTeamsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeTeamsJSON *result)
                  {
                    if (fieldGeneratorTeam.have_value)
                      {
                        result->setTeam(fieldGeneratorTeam.value.referenced());
                        fieldGeneratorTeam.have_value = false;
                      }
                    else if (!(result->hasTeam()))
                      {
                        error("When parsing the object for %what%, the \"Team\" field was missing.");
                      }
                    if (fieldGeneratorStandingsData.have_value)
                      {
                        result->setStandingsData(fieldGeneratorStandingsData.value.referenced());
                        fieldGeneratorStandingsData.have_value = false;
                      }
                    else if (!(result->hasStandingsData()))
                      {
                        error("When parsing the object for %what%, the \"StandingsData\" field was missing.");
                      }
                  }
                virtual void handle_result(TypeTeamsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[1]), "tandingsData") == 0)
                                return &fieldGeneratorStandingsData;
                            break;
                        case 'T':
                            if (strcmp(&(field_name[1]), "eam") == 0)
                                return &fieldGeneratorTeam;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorTeam("field \"Team\" of the TypeTeams class", ignore_extras), fieldGeneratorStandingsData("field \"StandingsData\" of the TypeTeams class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeTeams class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorTeam.reset();
                    fieldGeneratorStandingsData.reset();
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
        bool flagHasTeams;
        std::vector< TypeTeamsJSON * > storeTeams;
        bool flagHasReferencedInQuery;
        bool storeReferencedInQuery;
        bool flagHasHasDivisionGamePlayed;
        bool storeHasDivisionGamePlayed;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeDivisionsJSON(const TypeDivisionsJSON &);
        TypeDivisionsJSON & operator=(const TypeDivisionsJSON &other);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONReferencedInQuery(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONHasDivisionGamePlayed(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDivisionsJSON(void);
        virtual ~TypeDivisionsJSON(void);
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
        bool  hasTeams(void) const;
        size_t  countOfTeams(void) const;
        TypeTeamsJSON *  elementOfTeams(size_t element_num);
        const TypeTeamsJSON *  elementOfTeams(size_t element_num) const;
        std::vector< TypeTeamsJSON * >  getTeams(void);
        const std::vector< TypeTeamsJSON * >  getTeams(void) const;
        bool  hasReferencedInQuery(void) const;
        bool  getReferencedInQuery(void);
        const bool  getReferencedInQuery(void) const;
        bool  hasHasDivisionGamePlayed(void) const;
        bool  getHasDivisionGamePlayed(void);
        const bool  getHasDivisionGamePlayed(void) const;

        virtual size_t extraTypeDivisionsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeDivisionsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeDivisionsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeDivisionsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeDivisionsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeDivisionsLookup(const char *field_name) const
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
        void appendTeams(TypeTeamsJSON * to_append)
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
        void setReferencedInQuery(bool new_value)
          {
            flagHasReferencedInQuery = true;
            storeReferencedInQuery = new_value;
          }
        void unsetReferencedInQuery(void)
          {
            flagHasReferencedInQuery = false;
          }
        void setHasDivisionGamePlayed(bool new_value)
          {
            flagHasHasDivisionGamePlayed = true;
            storeHasDivisionGamePlayed = new_value;
          }
        void unsetHasDivisionGamePlayed(void)
          {
            flagHasHasDivisionGamePlayed = false;
          }

        virtual void extraTypeDivisionsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeDivisionsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeDivisionsLookup(key);
            if (old_field == NULL)
              {
                extraTypeDivisionsAppendPair(key, new_component);
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
            if (flagHasTeams)
              {
                handler->start_pair("Teams");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
                  {
                    storeTeams[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasReferencedInQuery)
              {
                handler->start_pair("ReferencedInQuery");
                handler->boolean_value(storeReferencedInQuery);
              }
            if (flagHasHasDivisionGamePlayed)
              {
                handler->start_pair("HasDivisionGamePlayed");
                handler->boolean_value(storeHasDivisionGamePlayed);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeDivisionsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDivisionsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDivisionsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool> generator("Type TypeDivisions", ignore_extras);
                parse_json_value(text, "Text for TypeDivisionsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDivisionsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDivisionsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool> generator("Type TypeDivisions", ignore_extras);
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
            JSONHoldingArrayGenerator<TypeTeamsJSON::Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool > fieldGeneratorTeams;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorReferencedInQuery;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHasDivisionGamePlayed;
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
                TypeDivisionsJSON *result = new TypeDivisionsJSON();
                assert(result != NULL);
                RCHandle<TypeDivisionsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeDivisionsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeDivisionsJSON *result)
              {
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
                if (fieldGeneratorReferencedInQuery.have_value)
                  {
                    result->setReferencedInQuery(fieldGeneratorReferencedInQuery.value);
                    fieldGeneratorReferencedInQuery.have_value = false;
                  }
                if (fieldGeneratorHasDivisionGamePlayed.have_value)
                  {
                    result->setHasDivisionGamePlayed(fieldGeneratorHasDivisionGamePlayed.value);
                    fieldGeneratorHasDivisionGamePlayed.have_value = false;
                  }
              }
            virtual void handle_result(TypeDivisionsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "ivision") == 0)
                            return &fieldGeneratorDivision;
                        break;
                    case 'H':
                        if (strcmp(&(field_name[1]), "asDivisionGamePlayed") == 0)
                            return &fieldGeneratorHasDivisionGamePlayed;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "eague") == 0)
                            return &fieldGeneratorLeague;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "eferencedInQuery") == 0)
                            return &fieldGeneratorReferencedInQuery;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "eams") == 0)
                            return &fieldGeneratorTeams;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorLeague("field \"League\" of the TypeDivisions class", ignore_extras), fieldGeneratorDivision("field \"Division\" of the TypeDivisions class", ignore_extras), fieldGeneratorTeams("field \"Teams\" of the TypeDivisions class", ignore_extras), fieldGeneratorReferencedInQuery("field \"ReferencedInQuery\" of the TypeDivisions class"), fieldGeneratorHasDivisionGamePlayed("field \"HasDivisionGamePlayed\" of the TypeDivisions class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeDivisions class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLeague.reset();
                fieldGeneratorDivision.reset();
                fieldGeneratorTeams.reset();
                fieldGeneratorReferencedInQuery.reset();
                fieldGeneratorHasDivisionGamePlayed.reset();
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
    bool flagHasTournament;
    SportsTournamentJSON * storeTournament;
    bool flagHasGrouping;
    TypeGrouping storeGrouping;
    bool flagHasSeason;
    SportsSeasonResolvedJSON * storeSeason;
    bool flagHasHasLeagueGamePlayed;
    bool storeHasLeagueGamePlayed;
    bool flagHasDivisions;
    std::vector< TypeDivisionsJSON * > storeDivisions;
    bool flagHasSportImage;
    SportsSportImageJSON * storeSportImage;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStandingsJSON(const SportsStandingsJSON &);
    SportsStandingsJSON & operator=(const SportsStandingsJSON &other);

    void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTournament(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGrouping(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHasLeagueGamePlayed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivisions(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSportImage(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStandingsJSON(void);
    virtual ~SportsStandingsJSON(void);
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
    bool  hasTournament(void) const;
    SportsTournamentJSON *  getTournament(void);
    const SportsTournamentJSON *  getTournament(void) const;
    bool  hasGrouping(void) const;
    TypeGrouping  getGrouping(void);
    const TypeGrouping  getGrouping(void) const;
    const char * getGroupingAsChars(void) const;
    std::string  getGroupingAsString(void) const;
    bool  hasSeason(void) const;
    SportsSeasonResolvedJSON *  getSeason(void);
    const SportsSeasonResolvedJSON *  getSeason(void) const;
    bool  hasHasLeagueGamePlayed(void) const;
    bool  getHasLeagueGamePlayed(void);
    const bool  getHasLeagueGamePlayed(void) const;
    bool  hasDivisions(void) const;
    size_t  countOfDivisions(void) const;
    TypeDivisionsJSON *  elementOfDivisions(size_t element_num);
    const TypeDivisionsJSON *  elementOfDivisions(size_t element_num) const;
    std::vector< TypeDivisionsJSON * >  getDivisions(void);
    const std::vector< TypeDivisionsJSON * >  getDivisions(void) const;
    bool  hasSportImage(void) const;
    SportsSportImageJSON *  getSportImage(void);
    const SportsSportImageJSON *  getSportImage(void) const;

    virtual size_t extraSportsStandingsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStandingsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStandingsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStandingsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStandingsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStandingsLookup(const char *field_name) const
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
    void setHasLeagueGamePlayed(bool new_value)
      {
        flagHasHasLeagueGamePlayed = true;
        storeHasLeagueGamePlayed = new_value;
      }
    void unsetHasLeagueGamePlayed(void)
      {
        flagHasHasLeagueGamePlayed = false;
      }
    void initDivisions(void)
      {
        if (flagHasDivisions)
          {
            for (size_t num5 = 0; num5 < storeDivisions.size(); ++num5)
              {
                storeDivisions[num5]->remove_reference();
              }
          }
        flagHasDivisions = true;
        storeDivisions.clear();
      }
    void appendDivisions(TypeDivisionsJSON * to_append)
      {
        if (!flagHasDivisions)
          {
            flagHasDivisions = true;
            storeDivisions.clear();
          }
        assert(flagHasDivisions);
        to_append->add_reference();
        storeDivisions.push_back(to_append);
      }
    void unsetDivisions(void)
      {
        if (flagHasDivisions)
          {
            for (size_t num6 = 0; num6 < storeDivisions.size(); ++num6)
              {
                storeDivisions[num6]->remove_reference();
              }
          }
        flagHasDivisions = false;
        storeDivisions.clear();
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

    virtual void extraSportsStandingsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStandingsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStandingsLookup(key);
        if (old_field == NULL)
          {
            extraSportsStandingsAppendPair(key, new_component);
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
        if (flagHasTournament)
          {
            handler->start_pair("Tournament");
            storeTournament->write_as_json(handler);
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
        assert(flagHasSeason);
        handler->start_pair("Season");
        storeSeason->write_as_json(handler);
        if (flagHasHasLeagueGamePlayed)
          {
            handler->start_pair("HasLeagueGamePlayed");
            handler->boolean_value(storeHasLeagueGamePlayed);
          }
        if (flagHasDivisions)
          {
            handler->start_pair("Divisions");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDivisions.size(); ++num1)
              {
                storeDivisions[num1]->write_as_json(handler);
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
        if (!(hasSeason()))
          {
            return "When parsing the object for %what%, the \"Season\" field was missing.";
          }
        return NULL;
      }

    static SportsStandingsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStandingsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStandingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsJSON>, SportsStandingsJSON *, bool> generator("Type SportsStandings", ignore_extras);
            parse_json_value(text, "Text for SportsStandingsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStandingsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStandingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsJSON>, SportsStandingsJSON *, bool> generator("Type SportsStandings", ignore_extras);
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
        JSONHoldingGenerator<SportsTournamentJSON::Generator, RCHandle<SportsTournamentJSON>, SportsTournamentJSON *, bool > fieldGeneratorTournament;
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHasLeagueGamePlayed;
        JSONHoldingArrayGenerator<TypeDivisionsJSON::Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool > fieldGeneratorDivisions;
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
            SportsStandingsJSON *result = new SportsStandingsJSON();
            assert(result != NULL);
            RCHandle<SportsStandingsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStandingsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStandingsJSON *result)
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
            if (fieldGeneratorTournament.have_value)
              {
                result->setTournament(fieldGeneratorTournament.value.referenced());
                fieldGeneratorTournament.have_value = false;
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
            else if (!(result->hasSeason()))
              {
                error("When parsing the object for %what%, the \"Season\" field was missing.");
              }
            if (fieldGeneratorHasLeagueGamePlayed.have_value)
              {
                result->setHasLeagueGamePlayed(fieldGeneratorHasLeagueGamePlayed.value);
                fieldGeneratorHasLeagueGamePlayed.have_value = false;
              }
            if (fieldGeneratorDivisions.have_value)
              {
                result->initDivisions();
                size_t count = fieldGeneratorDivisions.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDivisions(fieldGeneratorDivisions.value[num].referenced());
                  }
                fieldGeneratorDivisions.value.clear();
                fieldGeneratorDivisions.have_value = false;
              }
            if (fieldGeneratorSportImage.have_value)
              {
                result->setSportImage(fieldGeneratorSportImage.value.referenced());
                fieldGeneratorSportImage.have_value = false;
              }
          }
        virtual void handle_result(SportsStandingsJSON *new_result) = 0;
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
                            case 's':
                                if (field_name[9] == 0)
                                    return &fieldGeneratorDivisions;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "rouping") == 0)
                        return &fieldGeneratorGrouping;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "asLeagueGamePlayed") == 0)
                        return &fieldGeneratorHasLeagueGamePlayed;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "eague") == 0)
                        return &fieldGeneratorLeague;
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
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ournament") == 0)
                        return &fieldGeneratorTournament;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLeague("field \"League\" of the SportsStandings class", ignore_extras), fieldGeneratorDivision("field \"Division\" of the SportsStandings class", ignore_extras), fieldGeneratorTournament("field \"Tournament\" of the SportsStandings class", ignore_extras), fieldGeneratorGrouping("field \"Grouping\" of the SportsStandings class"), fieldGeneratorSeason("field \"Season\" of the SportsStandings class", ignore_extras), fieldGeneratorHasLeagueGamePlayed("field \"HasLeagueGamePlayed\" of the SportsStandings class"), fieldGeneratorDivisions("field \"Divisions\" of the SportsStandings class", ignore_extras), fieldGeneratorSportImage("field \"SportImage\" of the SportsStandings class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStandings class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLeague.reset();
            fieldGeneratorDivision.reset();
            fieldGeneratorTournament.reset();
            fieldGeneratorGrouping.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorHasLeagueGamePlayed.reset();
            fieldGeneratorDivisions.reset();
            fieldGeneratorSportImage.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTANDINGSJSON_H */
