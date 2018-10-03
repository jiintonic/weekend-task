/* file "SportsSeriesStatusNewJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSERIESSTATUSNEWJSON_H
#define SPORTSSERIESSTATUSNEWJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsPlayoffSpecialGameJSON.h"
#include "SportsTeamNewJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsSeriesStatusNewJSON : public ReferenceCounted
  {
  public:
    enum TypeStatusKnownValues
      {
        Status_Upcoming,
        Status_Ongoing,
        Status_Complete,
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

  private:
    bool flagHasStatus;
    TypeStatus storeStatus;
    bool flagHasSpecialGameType;
    SportsPlayoffSpecialGameJSON * storeSpecialGameType;
    bool flagHasTeams;
    std::vector< SportsTeamNewJSON * > storeTeams;
    bool flagHasScore;
    std::vector< OInteger > storeScore;
    bool flagHasSoccerAwayGoals;
    std::vector< OInteger > storeSoccerAwayGoals;
    bool flagHasGamesIndices;
    std::vector< OInteger > storeGamesIndices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsSeriesStatusNewJSON(const SportsSeriesStatusNewJSON &);
    SportsSeriesStatusNewJSON & operator=(const SportsSeriesStatusNewJSON &other);

    void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScore(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoccerAwayGoals(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesIndices(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsSeriesStatusNewJSON(void);
    virtual ~SportsSeriesStatusNewJSON(void);
    bool  hasStatus(void) const;
    TypeStatus  getStatus(void);
    const TypeStatus  getStatus(void) const;
    const char * getStatusAsChars(void) const;
    std::string  getStatusAsString(void) const;
    bool  hasSpecialGameType(void) const;
    SportsPlayoffSpecialGameJSON *  getSpecialGameType(void);
    const SportsPlayoffSpecialGameJSON *  getSpecialGameType(void) const;
    SportsPlayoffSpecialGameJSON::TypeValue  getSpecialGameTypeValue(void);
    const SportsPlayoffSpecialGameJSON::TypeValue  getSpecialGameTypeValue(void) const;
    const char * getSpecialGameTypeAsChars(void) const;
    std::string  getSpecialGameTypeAsString(void) const;
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamNewJSON *  elementOfTeams(size_t element_num);
    const SportsTeamNewJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamNewJSON * >  getTeams(void);
    const std::vector< SportsTeamNewJSON * >  getTeams(void) const;
    bool  hasScore(void) const;
    size_t  countOfScore(void) const;
    OInteger  elementOfScore(size_t element_num);
    const OInteger  elementOfScore(size_t element_num) const;
    std::vector< OInteger >  getScore(void);
    const std::vector< OInteger >  getScore(void) const;
    bool  hasSoccerAwayGoals(void) const;
    size_t  countOfSoccerAwayGoals(void) const;
    OInteger  elementOfSoccerAwayGoals(size_t element_num);
    const OInteger  elementOfSoccerAwayGoals(size_t element_num) const;
    std::vector< OInteger >  getSoccerAwayGoals(void);
    const std::vector< OInteger >  getSoccerAwayGoals(void) const;
    bool  hasGamesIndices(void) const;
    size_t  countOfGamesIndices(void) const;
    OInteger  elementOfGamesIndices(size_t element_num);
    const OInteger  elementOfGamesIndices(size_t element_num) const;
    std::vector< OInteger >  getGamesIndices(void);
    const std::vector< OInteger >  getGamesIndices(void) const;

    virtual size_t extraSportsSeriesStatusNewComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsSeriesStatusNewComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsSeriesStatusNewComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsSeriesStatusNewComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsSeriesStatusNewLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsSeriesStatusNewLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
            for (size_t num3 = 0; num3 < storeTeams.size(); ++num3)
              {
                storeTeams[num3]->remove_reference();
              }
          }
        flagHasTeams = false;
        storeTeams.clear();
      }
    void initScore(void)
      {
        flagHasScore = true;
        storeScore.clear();
      }
    void appendScore(OInteger to_append)
      {
        if (!flagHasScore)
          {
            flagHasScore = true;
            storeScore.clear();
          }
        assert(flagHasScore);
        storeScore.push_back(to_append);
      }
    void unsetScore(void)
      {
        flagHasScore = false;
        storeScore.clear();
      }
    void initSoccerAwayGoals(void)
      {
        flagHasSoccerAwayGoals = true;
        storeSoccerAwayGoals.clear();
      }
    void appendSoccerAwayGoals(OInteger to_append)
      {
        if (!flagHasSoccerAwayGoals)
          {
            flagHasSoccerAwayGoals = true;
            storeSoccerAwayGoals.clear();
          }
        assert(flagHasSoccerAwayGoals);
        storeSoccerAwayGoals.push_back(to_append);
      }
    void unsetSoccerAwayGoals(void)
      {
        flagHasSoccerAwayGoals = false;
        storeSoccerAwayGoals.clear();
      }
    void initGamesIndices(void)
      {
        flagHasGamesIndices = true;
        storeGamesIndices.clear();
      }
    void appendGamesIndices(OInteger to_append)
      {
        if (!flagHasGamesIndices)
          {
            flagHasGamesIndices = true;
            storeGamesIndices.clear();
          }
        assert(flagHasGamesIndices);
        storeGamesIndices.push_back(to_append);
      }
    void unsetGamesIndices(void)
      {
        flagHasGamesIndices = false;
        storeGamesIndices.clear();
      }

    virtual void extraSportsSeriesStatusNewAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsSeriesStatusNewSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsSeriesStatusNewLookup(key);
        if (old_field == NULL)
          {
            extraSportsSeriesStatusNewAppendPair(key, new_component);
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
        if (flagHasStatus)
          {
            handler->start_pair("Status");
            if (storeStatus.in_known_list)
              {
                switch (storeStatus.list_value)
                  {
                    case Status_Upcoming:
                        handler->string_value("Upcoming");
                        break;
                    case Status_Ongoing:
                        handler->string_value("Ongoing");
                        break;
                    case Status_Complete:
                        handler->string_value("Complete");
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
        if (flagHasSpecialGameType)
          {
            handler->start_pair("SpecialGameType");
            storeSpecialGameType->write_as_json(handler);
          }
        assert(flagHasTeams);
        handler->start_pair("Teams");
        assert(storeTeams.size() >= 2);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
          {
            storeTeams[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasScore)
          {
            handler->start_pair("Score");
            assert(storeScore.size() >= 2);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeScore.size(); ++num2)
              {
                handler->number_value(storeScore[num2].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasSoccerAwayGoals)
          {
            handler->start_pair("SoccerAwayGoals");
            assert(storeSoccerAwayGoals.size() >= 2);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeSoccerAwayGoals.size(); ++num3)
              {
                handler->number_value(storeSoccerAwayGoals[num3].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasGamesIndices)
          {
            handler->start_pair("GamesIndices");
            assert(storeGamesIndices.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeGamesIndices.size(); ++num4)
              {
                handler->number_value(storeGamesIndices[num4].get_o_integer());
              }
            handler->finish_array();
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

    static SportsSeriesStatusNewJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsSeriesStatusNewJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsSeriesStatusNewJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeriesStatusNewJSON>, SportsSeriesStatusNewJSON *, bool> generator("Type SportsSeriesStatusNew", ignore_extras);
            parse_json_value(text, "Text for SportsSeriesStatusNewJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsSeriesStatusNewJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsSeriesStatusNewJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeriesStatusNewJSON>, SportsSeriesStatusNewJSON *, bool> generator("Type SportsSeriesStatusNew", ignore_extras);
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
        JSONHoldingGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorSpecialGameType;
        JSONHoldingArrayGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeams;
        static char lowerBoundScore[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundScore>, OInteger, o_integer > fieldGeneratorScore;
        static char lowerBoundSoccerAwayGoals[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSoccerAwayGoals>, OInteger, o_integer > fieldGeneratorSoccerAwayGoals;
        static char lowerBoundGamesIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesIndices>, OInteger, o_integer > fieldGeneratorGamesIndices;
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
            SportsSeriesStatusNewJSON *result = new SportsSeriesStatusNewJSON();
            assert(result != NULL);
            RCHandle<SportsSeriesStatusNewJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsSeriesStatusNewAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsSeriesStatusNewJSON *result)
          {
            if (fieldGeneratorStatus.have_value)
              {
                result->setStatus(fieldGeneratorStatus.value);
                fieldGeneratorStatus.have_value = false;
              }
            if (fieldGeneratorSpecialGameType.have_value)
              {
                result->setSpecialGameType(fieldGeneratorSpecialGameType.value.referenced());
                fieldGeneratorSpecialGameType.have_value = false;
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
            else if (!(result->hasTeams()))
              {
                error("When parsing the object for %what%, the \"Teams\" field was missing.");
              }
            if (fieldGeneratorScore.have_value)
              {
                result->initScore();
                size_t count = fieldGeneratorScore.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendScore(fieldGeneratorScore.value[num]);
                  }
                fieldGeneratorScore.value.clear();
                fieldGeneratorScore.have_value = false;
              }
            if (fieldGeneratorSoccerAwayGoals.have_value)
              {
                result->initSoccerAwayGoals();
                size_t count = fieldGeneratorSoccerAwayGoals.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSoccerAwayGoals(fieldGeneratorSoccerAwayGoals.value[num]);
                  }
                fieldGeneratorSoccerAwayGoals.value.clear();
                fieldGeneratorSoccerAwayGoals.have_value = false;
              }
            if (fieldGeneratorGamesIndices.have_value)
              {
                result->initGamesIndices();
                size_t count = fieldGeneratorGamesIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGamesIndices(fieldGeneratorGamesIndices.value[num]);
                  }
                fieldGeneratorGamesIndices.value.clear();
                fieldGeneratorGamesIndices.have_value = false;
              }
          }
        virtual void handle_result(SportsSeriesStatusNewJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "amesIndices") == 0)
                        return &fieldGeneratorGamesIndices;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "ore") == 0)
                                return &fieldGeneratorScore;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ccerAwayGoals") == 0)
                                return &fieldGeneratorSoccerAwayGoals;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "ecialGameType") == 0)
                                return &fieldGeneratorSpecialGameType;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "atus") == 0)
                                return &fieldGeneratorStatus;
                            break;
                        default:
                            break;
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
        Generator(bool ignore_extras = false) : fieldGeneratorStatus("field \"Status\" of the SportsSeriesStatusNew class"), fieldGeneratorSpecialGameType("field \"SpecialGameType\" of the SportsSeriesStatusNew class", ignore_extras), fieldGeneratorTeams("field \"Teams\" of the SportsSeriesStatusNew class", ignore_extras), fieldGeneratorScore("field \"Score\" of the SportsSeriesStatusNew class"), fieldGeneratorSoccerAwayGoals("field \"SoccerAwayGoals\" of the SportsSeriesStatusNew class"), fieldGeneratorGamesIndices("field \"GamesIndices\" of the SportsSeriesStatusNew class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsSeriesStatusNew class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStatus.reset();
            fieldGeneratorSpecialGameType.reset();
            fieldGeneratorTeams.reset();
            fieldGeneratorScore.reset();
            fieldGeneratorSoccerAwayGoals.reset();
            fieldGeneratorGamesIndices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSERIESSTATUSNEWJSON_H */
