/* file "SportsPlayoffTriviaAPIJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYOFFTRIVIAAPIJSON_H
#define SPORTSPLAYOFFTRIVIAAPIJSON_H

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
#include "SportsGameSchedulesScoresAPIGameJSON.h"
#include "SportsTeamJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayoffTriviaAPIJSON : public ReferenceCounted
  {
  public:
    class TypeValueJSON : public ReferenceCounted
      {
      private:
        bool flagHasTeamOneAlias;
        std::string storeTeamOneAlias;
        bool flagHasTeamTwoAlias;
        std::string storeTeamTwoAlias;
        bool flagHasTeamOneID;
        std::string storeTeamOneID;
        bool flagHasTeamTwoID;
        std::string storeTeamTwoID;
        bool flagHasLeague;
        std::string storeLeague;
        bool flagHasPlayoff_Type;
        std::string storePlayoff_Type;
        bool flagHasYear;
        OInteger storeYear;
        bool flagHasOutcomeCount;
        OInteger storeOutcomeCount;
        bool flagHasSportsResultsScore;
        SportsGameSchedulesScoresAPIGameJSON * storeSportsResultsScore;
        bool flagHasSportsTeam;
        SportsTeamJSON * storeSportsTeam;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeValueJSON(const TypeValueJSON &);
        TypeValueJSON & operator=(const TypeValueJSON &other);

        void  fromJSONTeamOneAlias(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeamTwoAlias(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeamOneID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTeamTwoID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPlayoff_Type(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOutcomeCount(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSportsResultsScore(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSportsTeam(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeValueJSON(void);
        virtual ~TypeValueJSON(void);
        bool  hasTeamOneAlias(void) const;
        std::string  getTeamOneAlias(void);
        const std::string  getTeamOneAlias(void) const;
        bool  hasTeamTwoAlias(void) const;
        std::string  getTeamTwoAlias(void);
        const std::string  getTeamTwoAlias(void) const;
        bool  hasTeamOneID(void) const;
        std::string  getTeamOneID(void);
        const std::string  getTeamOneID(void) const;
        bool  hasTeamTwoID(void) const;
        std::string  getTeamTwoID(void);
        const std::string  getTeamTwoID(void) const;
        bool  hasLeague(void) const;
        std::string  getLeague(void);
        const std::string  getLeague(void) const;
        bool  hasPlayoff_Type(void) const;
        std::string  getPlayoff_Type(void);
        const std::string  getPlayoff_Type(void) const;
        bool  hasYear(void) const;
        OInteger  getYear(void);
        const OInteger  getYear(void) const;
        bool  hasOutcomeCount(void) const;
        OInteger  getOutcomeCount(void);
        const OInteger  getOutcomeCount(void) const;
        bool  hasSportsResultsScore(void) const;
        SportsGameSchedulesScoresAPIGameJSON *  getSportsResultsScore(void);
        const SportsGameSchedulesScoresAPIGameJSON *  getSportsResultsScore(void) const;
        bool  hasSportsTeam(void) const;
        SportsTeamJSON *  getSportsTeam(void);
        const SportsTeamJSON *  getSportsTeam(void) const;

        virtual size_t extraTypeValueComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeValueComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeValueComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeValueComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeValueLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeValueLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setTeamOneAlias(std::string new_value)
          {
            flagHasTeamOneAlias = true;
            storeTeamOneAlias = new_value;
          }
        void unsetTeamOneAlias(void)
          {
            flagHasTeamOneAlias = false;
          }
        void setTeamTwoAlias(std::string new_value)
          {
            flagHasTeamTwoAlias = true;
            storeTeamTwoAlias = new_value;
          }
        void unsetTeamTwoAlias(void)
          {
            flagHasTeamTwoAlias = false;
          }
        void setTeamOneID(std::string new_value)
          {
            flagHasTeamOneID = true;
            storeTeamOneID = new_value;
          }
        void unsetTeamOneID(void)
          {
            flagHasTeamOneID = false;
          }
        void setTeamTwoID(std::string new_value)
          {
            flagHasTeamTwoID = true;
            storeTeamTwoID = new_value;
          }
        void unsetTeamTwoID(void)
          {
            flagHasTeamTwoID = false;
          }
        void setLeague(std::string new_value)
          {
            flagHasLeague = true;
            storeLeague = new_value;
          }
        void unsetLeague(void)
          {
            flagHasLeague = false;
          }
        void setPlayoff_Type(std::string new_value)
          {
            flagHasPlayoff_Type = true;
            storePlayoff_Type = new_value;
          }
        void unsetPlayoff_Type(void)
          {
            flagHasPlayoff_Type = false;
          }
        void setYear(OInteger new_value)
          {
            flagHasYear = true;
            if (new_value < 0)
                throw("The value for field Year of TypeValueJSON is less than the lower bound (0) for that field.");
            storeYear = new_value;
          }
        void unsetYear(void)
          {
            flagHasYear = false;
          }
        void setOutcomeCount(OInteger new_value)
          {
            flagHasOutcomeCount = true;
            if (new_value < 0)
                throw("The value for field OutcomeCount of TypeValueJSON is less than the lower bound (0) for that field.");
            storeOutcomeCount = new_value;
          }
        void unsetOutcomeCount(void)
          {
            flagHasOutcomeCount = false;
          }
        void setSportsResultsScore(SportsGameSchedulesScoresAPIGameJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSportsResultsScore)
              {
                storeSportsResultsScore->remove_reference();
              }
            flagHasSportsResultsScore = true;
            storeSportsResultsScore = new_value;
          }
        void unsetSportsResultsScore(void)
          {
            if (flagHasSportsResultsScore)
              {
                storeSportsResultsScore->remove_reference();
              }
            flagHasSportsResultsScore = false;
          }
        void setSportsTeam(SportsTeamJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSportsTeam)
              {
                storeSportsTeam->remove_reference();
              }
            flagHasSportsTeam = true;
            storeSportsTeam = new_value;
          }
        void unsetSportsTeam(void)
          {
            if (flagHasSportsTeam)
              {
                storeSportsTeam->remove_reference();
              }
            flagHasSportsTeam = false;
          }

        virtual void extraTypeValueAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeValueSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeValueLookup(key);
            if (old_field == NULL)
              {
                extraTypeValueAppendPair(key, new_component);
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
            if (flagHasTeamOneAlias)
              {
                handler->start_pair("TeamOneAlias");
                handler->string_value(storeTeamOneAlias);
              }
            if (flagHasTeamTwoAlias)
              {
                handler->start_pair("TeamTwoAlias");
                handler->string_value(storeTeamTwoAlias);
              }
            if (flagHasTeamOneID)
              {
                handler->start_pair("TeamOneID");
                handler->string_value(storeTeamOneID);
              }
            if (flagHasTeamTwoID)
              {
                handler->start_pair("TeamTwoID");
                handler->string_value(storeTeamTwoID);
              }
            if (flagHasLeague)
              {
                handler->start_pair("League");
                handler->string_value(storeLeague);
              }
            if (flagHasPlayoff_Type)
              {
                handler->start_pair("Playoff_Type");
                handler->string_value(storePlayoff_Type);
              }
            if (flagHasYear)
              {
                handler->start_pair("Year");
                handler->number_value(storeYear.get_o_integer());
              }
            if (flagHasOutcomeCount)
              {
                handler->start_pair("OutcomeCount");
                handler->number_value(storeOutcomeCount.get_o_integer());
              }
            if (flagHasSportsResultsScore)
              {
                handler->start_pair("SportsResultsScore");
                storeSportsResultsScore->write_as_json(handler);
              }
            if (flagHasSportsTeam)
              {
                handler->start_pair("SportsTeam");
                storeSportsTeam->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeValueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeValueJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
                parse_json_value(text, "Text for TypeValueJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeValueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamOneAlias;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamTwoAlias;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamOneID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamTwoID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLeague;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPlayoff_Type;
            static char lowerBoundYear[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYear>, OInteger, o_integer > fieldGeneratorYear;
            static char lowerBoundOutcomeCount[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOutcomeCount>, OInteger, o_integer > fieldGeneratorOutcomeCount;
            JSONHoldingGenerator<SportsGameSchedulesScoresAPIGameJSON::Generator, RCHandle<SportsGameSchedulesScoresAPIGameJSON>, SportsGameSchedulesScoresAPIGameJSON *, bool > fieldGeneratorSportsResultsScore;
            JSONHoldingGenerator<SportsTeamJSON::Generator, RCHandle<SportsTeamJSON>, SportsTeamJSON *, bool > fieldGeneratorSportsTeam;
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
                TypeValueJSON *result = new TypeValueJSON();
                assert(result != NULL);
                RCHandle<TypeValueJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeValueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeValueJSON *result)
              {
                if (fieldGeneratorTeamOneAlias.have_value)
                  {
                    result->setTeamOneAlias(fieldGeneratorTeamOneAlias.value);
                    fieldGeneratorTeamOneAlias.have_value = false;
                  }
                if (fieldGeneratorTeamTwoAlias.have_value)
                  {
                    result->setTeamTwoAlias(fieldGeneratorTeamTwoAlias.value);
                    fieldGeneratorTeamTwoAlias.have_value = false;
                  }
                if (fieldGeneratorTeamOneID.have_value)
                  {
                    result->setTeamOneID(fieldGeneratorTeamOneID.value);
                    fieldGeneratorTeamOneID.have_value = false;
                  }
                if (fieldGeneratorTeamTwoID.have_value)
                  {
                    result->setTeamTwoID(fieldGeneratorTeamTwoID.value);
                    fieldGeneratorTeamTwoID.have_value = false;
                  }
                if (fieldGeneratorLeague.have_value)
                  {
                    result->setLeague(fieldGeneratorLeague.value);
                    fieldGeneratorLeague.have_value = false;
                  }
                if (fieldGeneratorPlayoff_Type.have_value)
                  {
                    result->setPlayoff_Type(fieldGeneratorPlayoff_Type.value);
                    fieldGeneratorPlayoff_Type.have_value = false;
                  }
                if (fieldGeneratorYear.have_value)
                  {
                    result->setYear(fieldGeneratorYear.value);
                    fieldGeneratorYear.have_value = false;
                  }
                if (fieldGeneratorOutcomeCount.have_value)
                  {
                    result->setOutcomeCount(fieldGeneratorOutcomeCount.value);
                    fieldGeneratorOutcomeCount.have_value = false;
                  }
                if (fieldGeneratorSportsResultsScore.have_value)
                  {
                    result->setSportsResultsScore(fieldGeneratorSportsResultsScore.value.referenced());
                    fieldGeneratorSportsResultsScore.have_value = false;
                  }
                if (fieldGeneratorSportsTeam.have_value)
                  {
                    result->setSportsTeam(fieldGeneratorSportsTeam.value.referenced());
                    fieldGeneratorSportsTeam.have_value = false;
                  }
              }
            virtual void handle_result(TypeValueJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "eague") == 0)
                            return &fieldGeneratorLeague;
                        break;
                    case 'O':
                        if (strcmp(&(field_name[1]), "utcomeCount") == 0)
                            return &fieldGeneratorOutcomeCount;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "layoff_Type") == 0)
                            return &fieldGeneratorPlayoff_Type;
                        break;
                    case 'S':
                        if (strncmp(&(field_name[1]), "ports", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[7]), "esultsScore") == 0)
                                        return &fieldGeneratorSportsResultsScore;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[7]), "eam") == 0)
                                        return &fieldGeneratorSportsTeam;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strncmp(&(field_name[1]), "eam", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[4]))
                              {
                                case 'O':
                                    if (strncmp(&(field_name[5]), "ne", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[7]))
                                          {
                                            case 'A':
                                                if (strcmp(&(field_name[8]), "lias") == 0)
                                                    return &fieldGeneratorTeamOneAlias;
                                                break;
                                            case 'I':
                                                if (strcmp(&(field_name[8]), "D") == 0)
                                                    return &fieldGeneratorTeamOneID;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'T':
                                    if (strncmp(&(field_name[5]), "wo", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[7]))
                                          {
                                            case 'A':
                                                if (strcmp(&(field_name[8]), "lias") == 0)
                                                    return &fieldGeneratorTeamTwoAlias;
                                                break;
                                            case 'I':
                                                if (strcmp(&(field_name[8]), "D") == 0)
                                                    return &fieldGeneratorTeamTwoID;
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
                    case 'Y':
                        if (strcmp(&(field_name[1]), "ear") == 0)
                            return &fieldGeneratorYear;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTeamOneAlias("field \"TeamOneAlias\" of the TypeValue class"), fieldGeneratorTeamTwoAlias("field \"TeamTwoAlias\" of the TypeValue class"), fieldGeneratorTeamOneID("field \"TeamOneID\" of the TypeValue class"), fieldGeneratorTeamTwoID("field \"TeamTwoID\" of the TypeValue class"), fieldGeneratorLeague("field \"League\" of the TypeValue class"), fieldGeneratorPlayoff_Type("field \"Playoff_Type\" of the TypeValue class"), fieldGeneratorYear("field \"Year\" of the TypeValue class"), fieldGeneratorOutcomeCount("field \"OutcomeCount\" of the TypeValue class"), fieldGeneratorSportsResultsScore("field \"SportsResultsScore\" of the TypeValue class", ignore_extras), fieldGeneratorSportsTeam("field \"SportsTeam\" of the TypeValue class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeValue class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTeamOneAlias.reset();
                fieldGeneratorTeamTwoAlias.reset();
                fieldGeneratorTeamOneID.reset();
                fieldGeneratorTeamTwoID.reset();
                fieldGeneratorLeague.reset();
                fieldGeneratorPlayoff_Type.reset();
                fieldGeneratorYear.reset();
                fieldGeneratorOutcomeCount.reset();
                fieldGeneratorSportsResultsScore.reset();
                fieldGeneratorSportsTeam.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasValue;
    std::vector< TypeValueJSON * > storeValue;

    SportsPlayoffTriviaAPIJSON(const SportsPlayoffTriviaAPIJSON &);
    SportsPlayoffTriviaAPIJSON & operator=(const SportsPlayoffTriviaAPIJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayoffTriviaAPIJSON(void);
    virtual ~SportsPlayoffTriviaAPIJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    TypeValueJSON *  elementOfValue(size_t element_num);
    const TypeValueJSON *  elementOfValue(size_t element_num) const;
    std::vector< TypeValueJSON * >  getValue(void);
    const std::vector< TypeValueJSON * >  getValue(void) const;


    void initValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num2 = 0; num2 < storeValue.size(); ++num2)
              {
                storeValue[num2]->remove_reference();
              }
          }
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(TypeValueJSON * to_append)
      {
        if (!flagHasValue)
          {
            flagHasValue = true;
            storeValue.clear();
          }
        assert(flagHasValue);
        to_append->add_reference();
        storeValue.push_back(to_append);
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num3 = 0; num3 < storeValue.size(); ++num3)
              {
                storeValue[num3]->remove_reference();
              }
          }
        flagHasValue = false;
        storeValue.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            storeValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }

    static SportsPlayoffTriviaAPIJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayoffTriviaAPIJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayoffTriviaAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaAPIJSON>, SportsPlayoffTriviaAPIJSON *, bool> generator("Type SportsPlayoffTriviaAPI", ignore_extras);
            parse_json_value(text, "Text for SportsPlayoffTriviaAPIJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayoffTriviaAPIJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayoffTriviaAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaAPIJSON>, SportsPlayoffTriviaAPIJSON *, bool> generator("Type SportsPlayoffTriviaAPI", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            SportsPlayoffTriviaAPIJSON *result = new SportsPlayoffTriviaAPIJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(SportsPlayoffTriviaAPIJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >("Type SportsPlayoffTriviaAPI", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSPLAYOFFTRIVIAAPIJSON_H */
