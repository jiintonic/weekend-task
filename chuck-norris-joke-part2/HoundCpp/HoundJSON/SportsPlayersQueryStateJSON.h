/* file "SportsPlayersQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYERSQUERYSTATEJSON_H
#define SPORTSPLAYERSQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "SportsTeamNewJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsPlayerDetailJSON.h"
#include "SportsPlayerPositionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayersQueryStateJSON : public ReferenceCounted
  {
  public:
    class TypePlayerRequestsJSON : public ReferenceCounted
      {
      public:
        enum TypeQueryIntentKnownValues
          {
            QueryIntent_Unknown,
            QueryIntent_PlayerInfo,
            QueryIntent_Who,
            QueryIntent__none
          };
        struct TypeQueryIntent
          {
            bool in_known_list;
            std::string string_value;
            TypeQueryIntentKnownValues list_value;

            TypeQueryIntent(void);
            TypeQueryIntent(const TypeQueryIntent &other);
            TypeQueryIntent(TypeQueryIntentKnownValues other);
            bool  operator==(const TypeQueryIntent &other) const;
            bool  operator!=(const TypeQueryIntent &other) const;
            bool  operator<(const TypeQueryIntent &other) const;
            bool  operator>(const TypeQueryIntent &other) const;
            bool  operator>=(const TypeQueryIntent &other) const;
            bool  operator<=(const TypeQueryIntent &other) const;

          };

        static TypeQueryIntentKnownValues  stringToQueryIntent(const char *chars);
        static const char * stringFromQueryIntent(TypeQueryIntentKnownValues the_enum);
        class TypePlayersJSON : public ReferenceCounted
          {
          private:
            bool flagHasID;
            std::string storeID;
            bool flagHasLeague;
            SportsLeagueCodeJSON * storeLeague;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypePlayersJSON(const TypePlayersJSON &);
            TypePlayersJSON & operator=(const TypePlayersJSON &other);

            void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypePlayersJSON(void);
            virtual ~TypePlayersJSON(void);
            bool  hasID(void) const;
            std::string  getID(void);
            const std::string  getID(void) const;
            bool  hasLeague(void) const;
            SportsLeagueCodeJSON *  getLeague(void);
            const SportsLeagueCodeJSON *  getLeague(void) const;
            SportsLeagueCodeJSON::TypeValue  getLeagueValue(void);
            const SportsLeagueCodeJSON::TypeValue  getLeagueValue(void) const;
            const char * getLeagueAsChars(void) const;
            std::string  getLeagueAsString(void) const;

            virtual size_t extraTypePlayersComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypePlayersComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypePlayersComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypePlayersComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypePlayersLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypePlayersLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
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

            virtual void extraTypePlayersAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypePlayersSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypePlayersLookup(key);
                if (old_field == NULL)
                  {
                    extraTypePlayersAppendPair(key, new_component);
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
                assert(flagHasID);
                handler->start_pair("ID");
                handler->string_value(storeID);
                assert(flagHasLeague);
                handler->start_pair("League");
                storeLeague->write_as_json(handler);
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasID()))
                  {
                    return "When parsing the object for %what%, the \"ID\" field was missing.";
                  }
                if (!(hasLeague()))
                  {
                    return "When parsing the object for %what%, the \"League\" field was missing.";
                  }
                return NULL;
              }

            static TypePlayersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypePlayersJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypePlayersJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool> generator("Type TypePlayers", ignore_extras);
                    parse_json_value(text, "Text for TypePlayersJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypePlayersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypePlayersJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool> generator("Type TypePlayers", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
                JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
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
                    TypePlayersJSON *result = new TypePlayersJSON();
                    assert(result != NULL);
                    RCHandle<TypePlayersJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypePlayersAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypePlayersJSON *result)
                  {
                    if (fieldGeneratorID.have_value)
                      {
                        result->setID(fieldGeneratorID.value);
                        fieldGeneratorID.have_value = false;
                      }
                    else if (!(result->hasID()))
                      {
                        error("When parsing the object for %what%, the \"ID\" field was missing.");
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
                  }
                virtual void handle_result(TypePlayersJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[1]), "D") == 0)
                                return &fieldGeneratorID;
                            break;
                        case 'L':
                            if (strcmp(&(field_name[1]), "eague") == 0)
                                return &fieldGeneratorLeague;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the TypePlayers class"), fieldGeneratorLeague("field \"League\" of the TypePlayers class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypePlayers class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorID.reset();
                    fieldGeneratorLeague.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };
        enum TypeQueryErrorKnownValues
          {
            QueryError_None,
            QueryError_TooManyPlayers,
            QueryError__none
          };
        struct TypeQueryError
          {
            bool in_known_list;
            std::string string_value;
            TypeQueryErrorKnownValues list_value;

            TypeQueryError(void);
            TypeQueryError(const TypeQueryError &other);
            TypeQueryError(TypeQueryErrorKnownValues other);
            bool  operator==(const TypeQueryError &other) const;
            bool  operator!=(const TypeQueryError &other) const;
            bool  operator<(const TypeQueryError &other) const;
            bool  operator>(const TypeQueryError &other) const;
            bool  operator>=(const TypeQueryError &other) const;
            bool  operator<=(const TypeQueryError &other) const;

          };

        static TypeQueryErrorKnownValues  stringToQueryError(const char *chars);
        static const char * stringFromQueryError(TypeQueryErrorKnownValues the_enum);

      private:
        bool flagHasQueryIntent;
        TypeQueryIntent storeQueryIntent;
        bool flagHasTeams;
        std::vector< SportsTeamNewJSON * > storeTeams;
        bool flagHasPlayers;
        std::vector< TypePlayersJSON * > storePlayers;
        bool flagHasPlayerDetails;
        std::vector< SportsPlayerDetailJSON * > storePlayerDetails;
        bool flagHasPlayerPositions;
        std::vector< SportsPlayerPositionJSON * > storePlayerPositions;
        bool flagHasJerseyNumber;
        OInteger storeJerseyNumber;
        bool flagHasQueryGroupNumber;
        OInteger storeQueryGroupNumber;
        bool flagHasQueryError;
        TypeQueryError storeQueryError;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePlayerRequestsJSON(const TypePlayerRequestsJSON &);
        TypePlayerRequestsJSON & operator=(const TypePlayerRequestsJSON &other);

        void  fromJSONQueryIntent(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPlayers(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPlayerDetails(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPlayerPositions(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONJerseyNumber(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONQueryGroupNumber(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONQueryError(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePlayerRequestsJSON(void);
        virtual ~TypePlayerRequestsJSON(void);
        bool  hasQueryIntent(void) const;
        TypeQueryIntent  getQueryIntent(void);
        const TypeQueryIntent  getQueryIntent(void) const;
        const char * getQueryIntentAsChars(void) const;
        std::string  getQueryIntentAsString(void) const;
        bool  hasTeams(void) const;
        size_t  countOfTeams(void) const;
        SportsTeamNewJSON *  elementOfTeams(size_t element_num);
        const SportsTeamNewJSON *  elementOfTeams(size_t element_num) const;
        std::vector< SportsTeamNewJSON * >  getTeams(void);
        const std::vector< SportsTeamNewJSON * >  getTeams(void) const;
        bool  hasPlayers(void) const;
        size_t  countOfPlayers(void) const;
        TypePlayersJSON *  elementOfPlayers(size_t element_num);
        const TypePlayersJSON *  elementOfPlayers(size_t element_num) const;
        std::vector< TypePlayersJSON * >  getPlayers(void);
        const std::vector< TypePlayersJSON * >  getPlayers(void) const;
        bool  hasPlayerDetails(void) const;
        size_t  countOfPlayerDetails(void) const;
        SportsPlayerDetailJSON *  elementOfPlayerDetails(size_t element_num);
        const SportsPlayerDetailJSON *  elementOfPlayerDetails(size_t element_num) const;
        std::vector< SportsPlayerDetailJSON * >  getPlayerDetails(void);
        const std::vector< SportsPlayerDetailJSON * >  getPlayerDetails(void) const;
        bool  hasPlayerPositions(void) const;
        size_t  countOfPlayerPositions(void) const;
        SportsPlayerPositionJSON *  elementOfPlayerPositions(size_t element_num);
        const SportsPlayerPositionJSON *  elementOfPlayerPositions(size_t element_num) const;
        std::vector< SportsPlayerPositionJSON * >  getPlayerPositions(void);
        const std::vector< SportsPlayerPositionJSON * >  getPlayerPositions(void) const;
        bool  hasJerseyNumber(void) const;
        OInteger  getJerseyNumber(void);
        const OInteger  getJerseyNumber(void) const;
        bool  hasQueryGroupNumber(void) const;
        OInteger  getQueryGroupNumber(void);
        const OInteger  getQueryGroupNumber(void) const;
        bool  hasQueryError(void) const;
        TypeQueryError  getQueryError(void);
        const TypeQueryError  getQueryError(void) const;
        const char * getQueryErrorAsChars(void) const;
        std::string  getQueryErrorAsString(void) const;

        virtual size_t extraTypePlayerRequestsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePlayerRequestsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePlayerRequestsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePlayerRequestsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePlayerRequestsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePlayerRequestsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setQueryIntent(TypeQueryIntent new_value)
          {
            flagHasQueryIntent = true;
            storeQueryIntent = new_value;
          }
        void setQueryIntent(const char *chars)
          {
            TypeQueryIntentKnownValues known = stringToQueryIntent(chars);
            TypeQueryIntent new_value;
            if (known == QueryIntent__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setQueryIntent(new_value);
          }
        void setQueryIntent(std::string the_string)
          {
            setQueryIntent(the_string.c_str());
          }
        void setQueryIntent(TypeQueryIntentKnownValues new_value)
          {
            TypeQueryIntent new_full_value;
            assert(new_value != QueryIntent__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setQueryIntent(new_full_value);
          }
        void unsetQueryIntent(void)
          {
            flagHasQueryIntent = false;
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
        void initPlayers(void)
          {
            if (flagHasPlayers)
              {
                for (size_t num7 = 0; num7 < storePlayers.size(); ++num7)
                  {
                    storePlayers[num7]->remove_reference();
                  }
              }
            flagHasPlayers = true;
            storePlayers.clear();
          }
        void appendPlayers(TypePlayersJSON * to_append)
          {
            if (!flagHasPlayers)
              {
                flagHasPlayers = true;
                storePlayers.clear();
              }
            assert(flagHasPlayers);
            to_append->add_reference();
            storePlayers.push_back(to_append);
          }
        void unsetPlayers(void)
          {
            if (flagHasPlayers)
              {
                for (size_t num8 = 0; num8 < storePlayers.size(); ++num8)
                  {
                    storePlayers[num8]->remove_reference();
                  }
              }
            flagHasPlayers = false;
            storePlayers.clear();
          }
        void initPlayerDetails(void)
          {
            if (flagHasPlayerDetails)
              {
                for (size_t num9 = 0; num9 < storePlayerDetails.size(); ++num9)
                  {
                    storePlayerDetails[num9]->remove_reference();
                  }
              }
            flagHasPlayerDetails = true;
            storePlayerDetails.clear();
          }
        void appendPlayerDetails(SportsPlayerDetailJSON * to_append)
          {
            if (!flagHasPlayerDetails)
              {
                flagHasPlayerDetails = true;
                storePlayerDetails.clear();
              }
            assert(flagHasPlayerDetails);
            to_append->add_reference();
            storePlayerDetails.push_back(to_append);
          }
        void appendPlayerDetails(SportsPlayerDetailJSON::TypeValue new_value)
          {
            appendPlayerDetails(new SportsPlayerDetailJSON(new_value));
          }
        void appendPlayerDetails(const char *chars)
          {
            SportsPlayerDetailJSON::TypeValueKnownValues known = SportsPlayerDetailJSON::stringToValue(chars);
            SportsPlayerDetailJSON::TypeValue new_value;
            if (known == SportsPlayerDetailJSON::Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            appendPlayerDetails(new_value);
          }
        void appendPlayerDetails(std::string the_string)
          {
            appendPlayerDetails(the_string.c_str());
          }
        void unsetPlayerDetails(void)
          {
            if (flagHasPlayerDetails)
              {
                for (size_t num10 = 0; num10 < storePlayerDetails.size(); ++num10)
                  {
                    storePlayerDetails[num10]->remove_reference();
                  }
              }
            flagHasPlayerDetails = false;
            storePlayerDetails.clear();
          }
        void initPlayerPositions(void)
          {
            if (flagHasPlayerPositions)
              {
                for (size_t num11 = 0; num11 < storePlayerPositions.size(); ++num11)
                  {
                    storePlayerPositions[num11]->remove_reference();
                  }
              }
            flagHasPlayerPositions = true;
            storePlayerPositions.clear();
          }
        void appendPlayerPositions(SportsPlayerPositionJSON * to_append)
          {
            if (!flagHasPlayerPositions)
              {
                flagHasPlayerPositions = true;
                storePlayerPositions.clear();
              }
            assert(flagHasPlayerPositions);
            to_append->add_reference();
            storePlayerPositions.push_back(to_append);
          }
        void appendPlayerPositions(SportsPlayerPositionJSON::TypeValue new_value)
          {
            appendPlayerPositions(new SportsPlayerPositionJSON(new_value));
          }
        void appendPlayerPositions(const char *chars)
          {
            SportsPlayerPositionJSON::TypeValueKnownValues known = SportsPlayerPositionJSON::stringToValue(chars);
            SportsPlayerPositionJSON::TypeValue new_value;
            if (known == SportsPlayerPositionJSON::Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            appendPlayerPositions(new_value);
          }
        void appendPlayerPositions(std::string the_string)
          {
            appendPlayerPositions(the_string.c_str());
          }
        void unsetPlayerPositions(void)
          {
            if (flagHasPlayerPositions)
              {
                for (size_t num12 = 0; num12 < storePlayerPositions.size(); ++num12)
                  {
                    storePlayerPositions[num12]->remove_reference();
                  }
              }
            flagHasPlayerPositions = false;
            storePlayerPositions.clear();
          }
        void setJerseyNumber(OInteger new_value)
          {
            flagHasJerseyNumber = true;
            if (new_value < 0)
                throw("The value for field JerseyNumber of TypePlayerRequestsJSON is less than the lower bound (0) for that field.");
            storeJerseyNumber = new_value;
          }
        void unsetJerseyNumber(void)
          {
            flagHasJerseyNumber = false;
          }
        void setQueryGroupNumber(OInteger new_value)
          {
            flagHasQueryGroupNumber = true;
            if (new_value < 0)
                throw("The value for field QueryGroupNumber of TypePlayerRequestsJSON is less than the lower bound (0) for that field.");
            storeQueryGroupNumber = new_value;
          }
        void unsetQueryGroupNumber(void)
          {
            flagHasQueryGroupNumber = false;
          }
        void setQueryError(TypeQueryError new_value)
          {
            flagHasQueryError = true;
            storeQueryError = new_value;
          }
        void setQueryError(const char *chars)
          {
            TypeQueryErrorKnownValues known = stringToQueryError(chars);
            TypeQueryError new_value;
            if (known == QueryError__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setQueryError(new_value);
          }
        void setQueryError(std::string the_string)
          {
            setQueryError(the_string.c_str());
          }
        void setQueryError(TypeQueryErrorKnownValues new_value)
          {
            TypeQueryError new_full_value;
            assert(new_value != QueryError__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setQueryError(new_full_value);
          }
        void unsetQueryError(void)
          {
            flagHasQueryError = false;
          }

        virtual void extraTypePlayerRequestsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePlayerRequestsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePlayerRequestsLookup(key);
            if (old_field == NULL)
              {
                extraTypePlayerRequestsAppendPair(key, new_component);
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
            assert(flagHasQueryIntent);
            handler->start_pair("QueryIntent");
            if (storeQueryIntent.in_known_list)
              {
                switch (storeQueryIntent.list_value)
                  {
                    case QueryIntent_Unknown:
                        handler->string_value("Unknown");
                        break;
                    case QueryIntent_PlayerInfo:
                        handler->string_value("PlayerInfo");
                        break;
                    case QueryIntent_Who:
                        handler->string_value("Who");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeQueryIntent.string_value);
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
            if (flagHasPlayers)
              {
                handler->start_pair("Players");
                assert(storePlayers.size() >= 1);
                handler->start_array();
                for (size_t num2 = 0; num2 < storePlayers.size(); ++num2)
                  {
                    storePlayers[num2]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasPlayerDetails)
              {
                handler->start_pair("PlayerDetails");
                assert(storePlayerDetails.size() >= 1);
                handler->start_array();
                for (size_t num3 = 0; num3 < storePlayerDetails.size(); ++num3)
                  {
                    storePlayerDetails[num3]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasPlayerPositions)
              {
                handler->start_pair("PlayerPositions");
                assert(storePlayerPositions.size() >= 1);
                handler->start_array();
                for (size_t num4 = 0; num4 < storePlayerPositions.size(); ++num4)
                  {
                    storePlayerPositions[num4]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasJerseyNumber)
              {
                handler->start_pair("JerseyNumber");
                handler->number_value(storeJerseyNumber.get_o_integer());
              }
            if (flagHasQueryGroupNumber)
              {
                handler->start_pair("QueryGroupNumber");
                handler->number_value(storeQueryGroupNumber.get_o_integer());
              }
            if (flagHasQueryError)
              {
                handler->start_pair("QueryError");
                if (storeQueryError.in_known_list)
                  {
                    switch (storeQueryError.list_value)
                      {
                        case QueryError_None:
                            handler->string_value("None");
                            break;
                        case QueryError_TooManyPlayers:
                            handler->string_value("TooManyPlayers");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeQueryError.string_value);
                  }
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasQueryIntent()))
              {
                return "When parsing the object for %what%, the \"QueryIntent\" field was missing.";
              }
            return NULL;
          }

        static TypePlayerRequestsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePlayerRequestsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePlayerRequestsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePlayerRequestsJSON>, TypePlayerRequestsJSON *, bool> generator("Type TypePlayerRequests", ignore_extras);
                parse_json_value(text, "Text for TypePlayerRequestsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePlayerRequestsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePlayerRequestsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePlayerRequestsJSON>, TypePlayerRequestsJSON *, bool> generator("Type TypePlayerRequests", ignore_extras);
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
        class FieldGeneratorQueryIntent : public JSONStringGenerator
              {
              protected:
                FieldGeneratorQueryIntent(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorQueryIntent(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeQueryIntentKnownValues known = stringToQueryIntent(result);
                    TypeQueryIntent new_value;
                    if (known == QueryIntent__none)
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
                virtual void handle_result(TypeQueryIntent result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorQueryIntent, TypeQueryIntent, TypeQueryIntent > fieldGeneratorQueryIntent;
            JSONHoldingArrayGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeams;
            JSONHoldingArrayGenerator<TypePlayersJSON::Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool > fieldGeneratorPlayers;
            JSONHoldingArrayGenerator<SportsPlayerDetailJSON::Generator, RCHandle<SportsPlayerDetailJSON>, SportsPlayerDetailJSON *, bool > fieldGeneratorPlayerDetails;
            JSONHoldingArrayGenerator<SportsPlayerPositionJSON::Generator, RCHandle<SportsPlayerPositionJSON>, SportsPlayerPositionJSON *, bool > fieldGeneratorPlayerPositions;
            static char lowerBoundJerseyNumber[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundJerseyNumber>, OInteger, o_integer > fieldGeneratorJerseyNumber;
            static char lowerBoundQueryGroupNumber[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundQueryGroupNumber>, OInteger, o_integer > fieldGeneratorQueryGroupNumber;
        class FieldGeneratorQueryError : public JSONStringGenerator
              {
              protected:
                FieldGeneratorQueryError(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorQueryError(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeQueryErrorKnownValues known = stringToQueryError(result);
                    TypeQueryError new_value;
                    if (known == QueryError__none)
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
                virtual void handle_result(TypeQueryError result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorQueryError, TypeQueryError, TypeQueryError > fieldGeneratorQueryError;
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
                TypePlayerRequestsJSON *result = new TypePlayerRequestsJSON();
                assert(result != NULL);
                RCHandle<TypePlayerRequestsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePlayerRequestsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePlayerRequestsJSON *result)
              {
                if (fieldGeneratorQueryIntent.have_value)
                  {
                    result->setQueryIntent(fieldGeneratorQueryIntent.value);
                    fieldGeneratorQueryIntent.have_value = false;
                  }
                else if (!(result->hasQueryIntent()))
                  {
                    error("When parsing the object for %what%, the \"QueryIntent\" field was missing.");
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
                if (fieldGeneratorPlayers.have_value)
                  {
                    result->initPlayers();
                    size_t count = fieldGeneratorPlayers.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendPlayers(fieldGeneratorPlayers.value[num].referenced());
                      }
                    fieldGeneratorPlayers.value.clear();
                    fieldGeneratorPlayers.have_value = false;
                  }
                if (fieldGeneratorPlayerDetails.have_value)
                  {
                    result->initPlayerDetails();
                    size_t count = fieldGeneratorPlayerDetails.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendPlayerDetails(fieldGeneratorPlayerDetails.value[num].referenced());
                      }
                    fieldGeneratorPlayerDetails.value.clear();
                    fieldGeneratorPlayerDetails.have_value = false;
                  }
                if (fieldGeneratorPlayerPositions.have_value)
                  {
                    result->initPlayerPositions();
                    size_t count = fieldGeneratorPlayerPositions.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendPlayerPositions(fieldGeneratorPlayerPositions.value[num].referenced());
                      }
                    fieldGeneratorPlayerPositions.value.clear();
                    fieldGeneratorPlayerPositions.have_value = false;
                  }
                if (fieldGeneratorJerseyNumber.have_value)
                  {
                    result->setJerseyNumber(fieldGeneratorJerseyNumber.value);
                    fieldGeneratorJerseyNumber.have_value = false;
                  }
                if (fieldGeneratorQueryGroupNumber.have_value)
                  {
                    result->setQueryGroupNumber(fieldGeneratorQueryGroupNumber.value);
                    fieldGeneratorQueryGroupNumber.have_value = false;
                  }
                if (fieldGeneratorQueryError.have_value)
                  {
                    result->setQueryError(fieldGeneratorQueryError.value);
                    fieldGeneratorQueryError.have_value = false;
                  }
              }
            virtual void handle_result(TypePlayerRequestsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'J':
                        if (strcmp(&(field_name[1]), "erseyNumber") == 0)
                            return &fieldGeneratorJerseyNumber;
                        break;
                    case 'P':
                        if (strncmp(&(field_name[1]), "layer", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[7]), "etails") == 0)
                                        return &fieldGeneratorPlayerDetails;
                                    break;
                                case 'P':
                                    if (strcmp(&(field_name[7]), "ositions") == 0)
                                        return &fieldGeneratorPlayerPositions;
                                    break;
                                case 's':
                                    if (field_name[7] == 0)
                                        return &fieldGeneratorPlayers;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Q':
                        if (strncmp(&(field_name[1]), "uery", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[6]), "rror") == 0)
                                        return &fieldGeneratorQueryError;
                                    break;
                                case 'G':
                                    if (strcmp(&(field_name[6]), "roupNumber") == 0)
                                        return &fieldGeneratorQueryGroupNumber;
                                    break;
                                case 'I':
                                    if (strcmp(&(field_name[6]), "ntent") == 0)
                                        return &fieldGeneratorQueryIntent;
                                    break;
                                default:
                                    break;
                              }
                          }
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
            Generator(bool ignore_extras = false) : fieldGeneratorQueryIntent("field \"QueryIntent\" of the TypePlayerRequests class"), fieldGeneratorTeams("field \"Teams\" of the TypePlayerRequests class", ignore_extras), fieldGeneratorPlayers("field \"Players\" of the TypePlayerRequests class", ignore_extras), fieldGeneratorPlayerDetails("field \"PlayerDetails\" of the TypePlayerRequests class", ignore_extras), fieldGeneratorPlayerPositions("field \"PlayerPositions\" of the TypePlayerRequests class", ignore_extras), fieldGeneratorJerseyNumber("field \"JerseyNumber\" of the TypePlayerRequests class"), fieldGeneratorQueryGroupNumber("field \"QueryGroupNumber\" of the TypePlayerRequests class"), fieldGeneratorQueryError("field \"QueryError\" of the TypePlayerRequests class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePlayerRequests class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorQueryIntent.reset();
                fieldGeneratorTeams.reset();
                fieldGeneratorPlayers.reset();
                fieldGeneratorPlayerDetails.reset();
                fieldGeneratorPlayerPositions.reset();
                fieldGeneratorJerseyNumber.reset();
                fieldGeneratorQueryGroupNumber.reset();
                fieldGeneratorQueryError.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasPlayerRequests;
    std::vector< TypePlayerRequestsJSON * > storePlayerRequests;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayersQueryStateJSON(const SportsPlayersQueryStateJSON &);
    SportsPlayersQueryStateJSON & operator=(const SportsPlayersQueryStateJSON &other);

    void  fromJSONPlayerRequests(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayersQueryStateJSON(void);
    virtual ~SportsPlayersQueryStateJSON(void);
    bool  hasPlayerRequests(void) const;
    size_t  countOfPlayerRequests(void) const;
    TypePlayerRequestsJSON *  elementOfPlayerRequests(size_t element_num);
    const TypePlayerRequestsJSON *  elementOfPlayerRequests(size_t element_num) const;
    std::vector< TypePlayerRequestsJSON * >  getPlayerRequests(void);
    const std::vector< TypePlayerRequestsJSON * >  getPlayerRequests(void) const;

    virtual size_t extraSportsPlayersQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayersQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayersQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayersQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayersQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayersQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initPlayerRequests(void)
      {
        if (flagHasPlayerRequests)
          {
            for (size_t num14 = 0; num14 < storePlayerRequests.size(); ++num14)
              {
                storePlayerRequests[num14]->remove_reference();
              }
          }
        flagHasPlayerRequests = true;
        storePlayerRequests.clear();
      }
    void appendPlayerRequests(TypePlayerRequestsJSON * to_append)
      {
        if (!flagHasPlayerRequests)
          {
            flagHasPlayerRequests = true;
            storePlayerRequests.clear();
          }
        assert(flagHasPlayerRequests);
        to_append->add_reference();
        storePlayerRequests.push_back(to_append);
      }
    void unsetPlayerRequests(void)
      {
        if (flagHasPlayerRequests)
          {
            for (size_t num15 = 0; num15 < storePlayerRequests.size(); ++num15)
              {
                storePlayerRequests[num15]->remove_reference();
              }
          }
        flagHasPlayerRequests = false;
        storePlayerRequests.clear();
      }

    virtual void extraSportsPlayersQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayersQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayersQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayersQueryStateAppendPair(key, new_component);
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
        if (flagHasPlayerRequests)
          {
            handler->start_pair("PlayerRequests");
            assert(storePlayerRequests.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePlayerRequests.size(); ++num1)
              {
                storePlayerRequests[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsPlayersQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayersQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayersQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayersQueryStateJSON>, SportsPlayersQueryStateJSON *, bool> generator("Type SportsPlayersQueryState", ignore_extras);
            parse_json_value(text, "Text for SportsPlayersQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayersQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayersQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayersQueryStateJSON>, SportsPlayersQueryStateJSON *, bool> generator("Type SportsPlayersQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<TypePlayerRequestsJSON::Generator, RCHandle<TypePlayerRequestsJSON>, TypePlayerRequestsJSON *, bool > fieldGeneratorPlayerRequests;
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
            SportsPlayersQueryStateJSON *result = new SportsPlayersQueryStateJSON();
            assert(result != NULL);
            RCHandle<SportsPlayersQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayersQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayersQueryStateJSON *result)
          {
            if (fieldGeneratorPlayerRequests.have_value)
              {
                result->initPlayerRequests();
                size_t count = fieldGeneratorPlayerRequests.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlayerRequests(fieldGeneratorPlayerRequests.value[num].referenced());
                  }
                fieldGeneratorPlayerRequests.value.clear();
                fieldGeneratorPlayerRequests.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayersQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "PlayerRequests") == 0)
                return &fieldGeneratorPlayerRequests;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPlayerRequests("field \"PlayerRequests\" of the SportsPlayersQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayersQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPlayerRequests.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYERSQUERYSTATEJSON_H */
