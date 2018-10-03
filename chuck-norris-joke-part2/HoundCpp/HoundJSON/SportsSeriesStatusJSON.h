/* file "SportsSeriesStatusJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSERIESSTATUSJSON_H
#define SPORTSSERIESSTATUSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsPlayoffSpecialGameJSON.h"
#include "SportsTeamJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsSeriesStatusJSON : public ReferenceCounted
  {
  private:
    bool flagHasSeriesResult;
    bool storeSeriesResult;
    bool flagHasSeriesComplete;
    bool storeSeriesComplete;
    bool flagHasSeriesName;
    SportsPlayoffSpecialGameJSON * storeSeriesName;
    bool flagHasTeams;
    std::vector< SportsTeamJSON * > storeTeams;
    bool flagHasAwayGoals;
    std::vector< OInteger > storeAwayGoals;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsSeriesStatusJSON(const SportsSeriesStatusJSON &);
    SportsSeriesStatusJSON & operator=(const SportsSeriesStatusJSON &other);

    void  fromJSONSeriesResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeriesComplete(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeriesName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAwayGoals(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsSeriesStatusJSON(void);
    virtual ~SportsSeriesStatusJSON(void);
    bool  hasSeriesResult(void) const;
    bool  getSeriesResult(void);
    const bool  getSeriesResult(void) const;
    bool  hasSeriesComplete(void) const;
    bool  getSeriesComplete(void);
    const bool  getSeriesComplete(void) const;
    bool  hasSeriesName(void) const;
    SportsPlayoffSpecialGameJSON *  getSeriesName(void);
    const SportsPlayoffSpecialGameJSON *  getSeriesName(void) const;
    SportsPlayoffSpecialGameJSON::TypeValue  getSeriesNameValue(void);
    const SportsPlayoffSpecialGameJSON::TypeValue  getSeriesNameValue(void) const;
    const char * getSeriesNameAsChars(void) const;
    std::string  getSeriesNameAsString(void) const;
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamJSON *  elementOfTeams(size_t element_num);
    const SportsTeamJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamJSON * >  getTeams(void);
    const std::vector< SportsTeamJSON * >  getTeams(void) const;
    bool  hasAwayGoals(void) const;
    size_t  countOfAwayGoals(void) const;
    OInteger  elementOfAwayGoals(size_t element_num);
    const OInteger  elementOfAwayGoals(size_t element_num) const;
    std::vector< OInteger >  getAwayGoals(void);
    const std::vector< OInteger >  getAwayGoals(void) const;

    virtual size_t extraSportsSeriesStatusComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsSeriesStatusComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsSeriesStatusComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsSeriesStatusComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsSeriesStatusLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsSeriesStatusLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSeriesResult(bool new_value)
      {
        flagHasSeriesResult = true;
        storeSeriesResult = new_value;
      }
    void unsetSeriesResult(void)
      {
        flagHasSeriesResult = false;
      }
    void setSeriesComplete(bool new_value)
      {
        flagHasSeriesComplete = true;
        storeSeriesComplete = new_value;
      }
    void unsetSeriesComplete(void)
      {
        flagHasSeriesComplete = false;
      }
    void setSeriesName(SportsPlayoffSpecialGameJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeriesName)
          {
            storeSeriesName->remove_reference();
          }
        flagHasSeriesName = true;
        storeSeriesName = new_value;
      }
    void setSeriesName(SportsPlayoffSpecialGameJSON::TypeValue new_value)
      {
        setSeriesName(new SportsPlayoffSpecialGameJSON(new_value));
      }
    void setSeriesName(const char *chars)
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
        setSeriesName(new_value);
      }
    void setSeriesName(std::string the_string)
      {
        setSeriesName(the_string.c_str());
      }
    void unsetSeriesName(void)
      {
        if (flagHasSeriesName)
          {
            storeSeriesName->remove_reference();
          }
        flagHasSeriesName = false;
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
    void appendTeams(SportsTeamJSON * to_append)
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
    void initAwayGoals(void)
      {
        flagHasAwayGoals = true;
        storeAwayGoals.clear();
      }
    void appendAwayGoals(OInteger to_append)
      {
        if (!flagHasAwayGoals)
          {
            flagHasAwayGoals = true;
            storeAwayGoals.clear();
          }
        assert(flagHasAwayGoals);
        storeAwayGoals.push_back(to_append);
      }
    void unsetAwayGoals(void)
      {
        flagHasAwayGoals = false;
        storeAwayGoals.clear();
      }

    virtual void extraSportsSeriesStatusAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsSeriesStatusSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsSeriesStatusLookup(key);
        if (old_field == NULL)
          {
            extraSportsSeriesStatusAppendPair(key, new_component);
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

    virtual void write_as_json(JSONHandler *handler) const
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
        if (flagHasSeriesResult)
          {
            handler->start_pair("SeriesResult");
            handler->boolean_value(storeSeriesResult);
          }
        if (flagHasSeriesComplete)
          {
            handler->start_pair("SeriesComplete");
            handler->boolean_value(storeSeriesComplete);
          }
        if (flagHasSeriesName)
          {
            handler->start_pair("SeriesName");
            storeSeriesName->write_as_json(handler);
          }
        if (flagHasTeams)
          {
            handler->start_pair("Teams");
            assert(storeTeams.size() >= 2);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
              {
                storeTeams[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAwayGoals)
          {
            handler->start_pair("AwayGoals");
            assert(storeAwayGoals.size() >= 2);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeAwayGoals.size(); ++num2)
              {
                handler->number_value(storeAwayGoals[num2].get_o_integer());
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsSeriesStatusJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsSeriesStatusJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsSeriesStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeriesStatusJSON>, SportsSeriesStatusJSON *, bool> generator("Type SportsSeriesStatus", ignore_extras);
            parse_json_value(text, "Text for SportsSeriesStatusJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsSeriesStatusJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsSeriesStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeriesStatusJSON>, SportsSeriesStatusJSON *, bool> generator("Type SportsSeriesStatus", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSeriesResult;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSeriesComplete;
        JSONHoldingGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorSeriesName;
        JSONHoldingArrayGenerator<SportsTeamJSON::Generator, RCHandle<SportsTeamJSON>, SportsTeamJSON *, bool > fieldGeneratorTeams;
        static char lowerBoundAwayGoals[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAwayGoals>, OInteger, o_integer > fieldGeneratorAwayGoals;
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
            SportsSeriesStatusJSON *result = new SportsSeriesStatusJSON();
            assert(result != NULL);
            RCHandle<SportsSeriesStatusJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsSeriesStatusAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsSeriesStatusJSON *result)
          {
            if (fieldGeneratorSeriesResult.have_value)
              {
                result->setSeriesResult(fieldGeneratorSeriesResult.value);
                fieldGeneratorSeriesResult.have_value = false;
              }
            if (fieldGeneratorSeriesComplete.have_value)
              {
                result->setSeriesComplete(fieldGeneratorSeriesComplete.value);
                fieldGeneratorSeriesComplete.have_value = false;
              }
            if (fieldGeneratorSeriesName.have_value)
              {
                result->setSeriesName(fieldGeneratorSeriesName.value.referenced());
                fieldGeneratorSeriesName.have_value = false;
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
            if (fieldGeneratorAwayGoals.have_value)
              {
                result->initAwayGoals();
                size_t count = fieldGeneratorAwayGoals.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAwayGoals(fieldGeneratorAwayGoals.value[num]);
                  }
                fieldGeneratorAwayGoals.value.clear();
                fieldGeneratorAwayGoals.have_value = false;
              }
          }
        virtual void handle_result(SportsSeriesStatusJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "wayGoals") == 0)
                        return &fieldGeneratorAwayGoals;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "eries", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[7]), "omplete") == 0)
                                    return &fieldGeneratorSeriesComplete;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[7]), "ame") == 0)
                                    return &fieldGeneratorSeriesName;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[7]), "esult") == 0)
                                    return &fieldGeneratorSeriesResult;
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
        Generator(bool ignore_extras = false) : fieldGeneratorSeriesResult("field \"SeriesResult\" of the SportsSeriesStatus class"), fieldGeneratorSeriesComplete("field \"SeriesComplete\" of the SportsSeriesStatus class"), fieldGeneratorSeriesName("field \"SeriesName\" of the SportsSeriesStatus class", ignore_extras), fieldGeneratorTeams("field \"Teams\" of the SportsSeriesStatus class", ignore_extras), fieldGeneratorAwayGoals("field \"AwayGoals\" of the SportsSeriesStatus class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsSeriesStatus class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSeriesResult.reset();
            fieldGeneratorSeriesComplete.reset();
            fieldGeneratorSeriesName.reset();
            fieldGeneratorTeams.reset();
            fieldGeneratorAwayGoals.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSERIESSTATUSJSON_H */
