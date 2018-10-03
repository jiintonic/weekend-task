/* file "SportsStandingsQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTANDINGSQUERYSTATEJSON_H
#define SPORTSSTANDINGSQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsStandingsQueryTypeJSON.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "SportsTeamNewJSON.h"
#include "SportsTeamNewJSON.h"
#include "SportsStandingsArgumentArrayJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStandingsQueryStateJSON : public ReferenceCounted
  {
  public:
    class TypeQueryDataAndResultsJSON : public ReferenceCounted
      {
      private:
        bool flagHasQueryType;
        SportsStandingsQueryTypeJSON * storeQueryType;
        bool flagHasDivision;
        SportsLeagueDivisionJSON * storeDivision;
        bool flagHasLeague;
        SportsLeagueCodeJSON * storeLeague;
        bool flagHasTeam;
        SportsTeamNewJSON * storeTeam;
        bool flagHasTeamComparison;
        SportsTeamNewJSON * storeTeamComparison;
        bool flagHasRank;
        OInteger storeRank;
        bool flagHasArguments;
        std::vector< SportsStandingsArgumentArrayJSON * > storeArguments;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeQueryDataAndResultsJSON(const TypeQueryDataAndResultsJSON &);
        TypeQueryDataAndResultsJSON & operator=(const TypeQueryDataAndResultsJSON &other);

        void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeam(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeamComparison(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONArguments(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeQueryDataAndResultsJSON(void);
        virtual ~TypeQueryDataAndResultsJSON(void);
        bool  hasQueryType(void) const;
        SportsStandingsQueryTypeJSON *  getQueryType(void);
        const SportsStandingsQueryTypeJSON *  getQueryType(void) const;
        SportsStandingsQueryTypeJSON::TypeValue  getQueryTypeValue(void);
        const SportsStandingsQueryTypeJSON::TypeValue  getQueryTypeValue(void) const;
        const char * getQueryTypeAsChars(void) const;
        std::string  getQueryTypeAsString(void) const;
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
        bool  hasTeam(void) const;
        SportsTeamNewJSON *  getTeam(void);
        const SportsTeamNewJSON *  getTeam(void) const;
        bool  hasTeamComparison(void) const;
        SportsTeamNewJSON *  getTeamComparison(void);
        const SportsTeamNewJSON *  getTeamComparison(void) const;
        bool  hasRank(void) const;
        OInteger  getRank(void);
        const OInteger  getRank(void) const;
        bool  hasArguments(void) const;
        size_t  countOfArguments(void) const;
        SportsStandingsArgumentArrayJSON *  elementOfArguments(size_t element_num);
        const SportsStandingsArgumentArrayJSON *  elementOfArguments(size_t element_num) const;
        std::vector< SportsStandingsArgumentArrayJSON * >  getArguments(void);
        const std::vector< SportsStandingsArgumentArrayJSON * >  getArguments(void) const;

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

        void setQueryType(SportsStandingsQueryTypeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasQueryType)
              {
                storeQueryType->remove_reference();
              }
            flagHasQueryType = true;
            storeQueryType = new_value;
          }
        void setQueryType(SportsStandingsQueryTypeJSON::TypeValue new_value)
          {
            setQueryType(new SportsStandingsQueryTypeJSON(new_value));
          }
        void setQueryType(const char *chars)
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
            setQueryType(new_value);
          }
        void setQueryType(std::string the_string)
          {
            setQueryType(the_string.c_str());
          }
        void unsetQueryType(void)
          {
            if (flagHasQueryType)
              {
                storeQueryType->remove_reference();
              }
            flagHasQueryType = false;
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
        void setTeamComparison(SportsTeamNewJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTeamComparison)
              {
                storeTeamComparison->remove_reference();
              }
            flagHasTeamComparison = true;
            storeTeamComparison = new_value;
          }
        void unsetTeamComparison(void)
          {
            if (flagHasTeamComparison)
              {
                storeTeamComparison->remove_reference();
              }
            flagHasTeamComparison = false;
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
        void appendArguments(SportsStandingsArgumentArrayJSON * to_append)
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
            assert(flagHasQueryType);
            handler->start_pair("QueryType");
            storeQueryType->write_as_json(handler);
            if (flagHasDivision)
              {
                handler->start_pair("Division");
                storeDivision->write_as_json(handler);
              }
            if (flagHasLeague)
              {
                handler->start_pair("League");
                storeLeague->write_as_json(handler);
              }
            if (flagHasTeam)
              {
                handler->start_pair("Team");
                storeTeam->write_as_json(handler);
              }
            if (flagHasTeamComparison)
              {
                handler->start_pair("TeamComparison");
                storeTeamComparison->write_as_json(handler);
              }
            if (flagHasRank)
              {
                handler->start_pair("Rank");
                handler->number_value(storeRank.get_o_integer());
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
            if (!(hasQueryType()))
              {
                return "When parsing the object for %what%, the \"QueryType\" field was missing.";
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
            JSONHoldingGenerator<SportsStandingsQueryTypeJSON::Generator, RCHandle<SportsStandingsQueryTypeJSON>, SportsStandingsQueryTypeJSON *, bool > fieldGeneratorQueryType;
            JSONHoldingGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorDivision;
            JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
            JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeam;
            JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeamComparison;
            static char lowerBoundRank[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
            JSONHoldingArrayGenerator<SportsStandingsArgumentArrayJSON::Generator, RCHandle<SportsStandingsArgumentArrayJSON>, SportsStandingsArgumentArrayJSON *, bool > fieldGeneratorArguments;
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
                if (fieldGeneratorQueryType.have_value)
                  {
                    result->setQueryType(fieldGeneratorQueryType.value.referenced());
                    fieldGeneratorQueryType.have_value = false;
                  }
                else if (!(result->hasQueryType()))
                  {
                    error("When parsing the object for %what%, the \"QueryType\" field was missing.");
                  }
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
                if (fieldGeneratorTeam.have_value)
                  {
                    result->setTeam(fieldGeneratorTeam.value.referenced());
                    fieldGeneratorTeam.have_value = false;
                  }
                if (fieldGeneratorTeamComparison.have_value)
                  {
                    result->setTeamComparison(fieldGeneratorTeamComparison.value.referenced());
                    fieldGeneratorTeamComparison.have_value = false;
                  }
                if (fieldGeneratorRank.have_value)
                  {
                    result->setRank(fieldGeneratorRank.value);
                    fieldGeneratorRank.have_value = false;
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
                    case 'Q':
                        if (strcmp(&(field_name[1]), "ueryType") == 0)
                            return &fieldGeneratorQueryType;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "ank") == 0)
                            return &fieldGeneratorRank;
                        break;
                    case 'T':
                        if (strncmp(&(field_name[1]), "eam", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[4]))
                              {
                                case 0:
                                    return &fieldGeneratorTeam;
                                case 'C':
                                    if (strcmp(&(field_name[5]), "omparison") == 0)
                                        return &fieldGeneratorTeamComparison;
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
            Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorDivision("field \"Division\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorLeague("field \"League\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorTeam("field \"Team\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorTeamComparison("field \"TeamComparison\" of the TypeQueryDataAndResults class", ignore_extras), fieldGeneratorRank("field \"Rank\" of the TypeQueryDataAndResults class"), fieldGeneratorArguments("field \"Arguments\" of the TypeQueryDataAndResults class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeQueryDataAndResults class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorQueryType.reset();
                fieldGeneratorDivision.reset();
                fieldGeneratorLeague.reset();
                fieldGeneratorTeam.reset();
                fieldGeneratorTeamComparison.reset();
                fieldGeneratorRank.reset();
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

    SportsStandingsQueryStateJSON(const SportsStandingsQueryStateJSON &);
    SportsStandingsQueryStateJSON & operator=(const SportsStandingsQueryStateJSON &other);

    void  fromJSONQueryDataAndResults(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStandingsQueryStateJSON(void);
    virtual ~SportsStandingsQueryStateJSON(void);
    bool  hasQueryDataAndResults(void) const;
    size_t  countOfQueryDataAndResults(void) const;
    TypeQueryDataAndResultsJSON *  elementOfQueryDataAndResults(size_t element_num);
    const TypeQueryDataAndResultsJSON *  elementOfQueryDataAndResults(size_t element_num) const;
    std::vector< TypeQueryDataAndResultsJSON * >  getQueryDataAndResults(void);
    const std::vector< TypeQueryDataAndResultsJSON * >  getQueryDataAndResults(void) const;

    virtual size_t extraSportsStandingsQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStandingsQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStandingsQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStandingsQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStandingsQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStandingsQueryStateLookup(const char *field_name) const
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

    virtual void extraSportsStandingsQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStandingsQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStandingsQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsStandingsQueryStateAppendPair(key, new_component);
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

    static SportsStandingsQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStandingsQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStandingsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsQueryStateJSON>, SportsStandingsQueryStateJSON *, bool> generator("Type SportsStandingsQueryState", ignore_extras);
            parse_json_value(text, "Text for SportsStandingsQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStandingsQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStandingsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsQueryStateJSON>, SportsStandingsQueryStateJSON *, bool> generator("Type SportsStandingsQueryState", ignore_extras);
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
            SportsStandingsQueryStateJSON *result = new SportsStandingsQueryStateJSON();
            assert(result != NULL);
            RCHandle<SportsStandingsQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStandingsQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStandingsQueryStateJSON *result)
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
        virtual void handle_result(SportsStandingsQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "QueryDataAndResults") == 0)
                return &fieldGeneratorQueryDataAndResults;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryDataAndResults("field \"QueryDataAndResults\" of the SportsStandingsQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStandingsQueryState class");
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

#endif /* SPORTSSTANDINGSQUERYSTATEJSON_H */
