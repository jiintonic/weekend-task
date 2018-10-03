/* file "SportsPlayoffTriviaSeriesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYOFFTRIVIASERIESJSON_H
#define SPORTSPLAYOFFTRIVIASERIESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsGameJSON.h"
#include "SportsSeasonResolvedJSON.h"
#include "SportsSeriesStatusNewJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayoffTriviaSeriesJSON : public ReferenceCounted
  {
  private:
    bool flagHasSeriesGames;
    std::vector< SportsGameJSON * > storeSeriesGames;
    bool flagHasSeason;
    SportsSeasonResolvedJSON * storeSeason;
    bool flagHasSeriesStatus;
    SportsSeriesStatusNewJSON * storeSeriesStatus;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayoffTriviaSeriesJSON(const SportsPlayoffTriviaSeriesJSON &);
    SportsPlayoffTriviaSeriesJSON & operator=(const SportsPlayoffTriviaSeriesJSON &other);

    void  fromJSONSeriesGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeriesStatus(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayoffTriviaSeriesJSON(void);
    virtual ~SportsPlayoffTriviaSeriesJSON(void);
    bool  hasSeriesGames(void) const;
    size_t  countOfSeriesGames(void) const;
    SportsGameJSON *  elementOfSeriesGames(size_t element_num);
    const SportsGameJSON *  elementOfSeriesGames(size_t element_num) const;
    std::vector< SportsGameJSON * >  getSeriesGames(void);
    const std::vector< SportsGameJSON * >  getSeriesGames(void) const;
    bool  hasSeason(void) const;
    SportsSeasonResolvedJSON *  getSeason(void);
    const SportsSeasonResolvedJSON *  getSeason(void) const;
    bool  hasSeriesStatus(void) const;
    SportsSeriesStatusNewJSON *  getSeriesStatus(void);
    const SportsSeriesStatusNewJSON *  getSeriesStatus(void) const;

    virtual size_t extraSportsPlayoffTriviaSeriesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayoffTriviaSeriesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayoffTriviaSeriesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayoffTriviaSeriesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayoffTriviaSeriesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayoffTriviaSeriesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initSeriesGames(void)
      {
        if (flagHasSeriesGames)
          {
            for (size_t num2 = 0; num2 < storeSeriesGames.size(); ++num2)
              {
                storeSeriesGames[num2]->remove_reference();
              }
          }
        flagHasSeriesGames = true;
        storeSeriesGames.clear();
      }
    void appendSeriesGames(SportsGameJSON * to_append)
      {
        if (!flagHasSeriesGames)
          {
            flagHasSeriesGames = true;
            storeSeriesGames.clear();
          }
        assert(flagHasSeriesGames);
        to_append->add_reference();
        storeSeriesGames.push_back(to_append);
      }
    void unsetSeriesGames(void)
      {
        if (flagHasSeriesGames)
          {
            for (size_t num3 = 0; num3 < storeSeriesGames.size(); ++num3)
              {
                storeSeriesGames[num3]->remove_reference();
              }
          }
        flagHasSeriesGames = false;
        storeSeriesGames.clear();
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
    void setSeriesStatus(SportsSeriesStatusNewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeriesStatus)
          {
            storeSeriesStatus->remove_reference();
          }
        flagHasSeriesStatus = true;
        storeSeriesStatus = new_value;
      }
    void unsetSeriesStatus(void)
      {
        if (flagHasSeriesStatus)
          {
            storeSeriesStatus->remove_reference();
          }
        flagHasSeriesStatus = false;
      }

    virtual void extraSportsPlayoffTriviaSeriesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayoffTriviaSeriesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayoffTriviaSeriesLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayoffTriviaSeriesAppendPair(key, new_component);
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
        if (flagHasSeriesGames)
          {
            handler->start_pair("SeriesGames");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSeriesGames.size(); ++num1)
              {
                storeSeriesGames[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSeason)
          {
            handler->start_pair("Season");
            storeSeason->write_as_json(handler);
          }
        if (flagHasSeriesStatus)
          {
            handler->start_pair("SeriesStatus");
            storeSeriesStatus->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsPlayoffTriviaSeriesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayoffTriviaSeriesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayoffTriviaSeriesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaSeriesJSON>, SportsPlayoffTriviaSeriesJSON *, bool> generator("Type SportsPlayoffTriviaSeries", ignore_extras);
            parse_json_value(text, "Text for SportsPlayoffTriviaSeriesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayoffTriviaSeriesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayoffTriviaSeriesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaSeriesJSON>, SportsPlayoffTriviaSeriesJSON *, bool> generator("Type SportsPlayoffTriviaSeries", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsGameJSON::Generator, RCHandle<SportsGameJSON>, SportsGameJSON *, bool > fieldGeneratorSeriesGames;
        JSONHoldingGenerator<SportsSeasonResolvedJSON::Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool > fieldGeneratorSeason;
        JSONHoldingGenerator<SportsSeriesStatusNewJSON::Generator, RCHandle<SportsSeriesStatusNewJSON>, SportsSeriesStatusNewJSON *, bool > fieldGeneratorSeriesStatus;
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
            SportsPlayoffTriviaSeriesJSON *result = new SportsPlayoffTriviaSeriesJSON();
            assert(result != NULL);
            RCHandle<SportsPlayoffTriviaSeriesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayoffTriviaSeriesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayoffTriviaSeriesJSON *result)
          {
            if (fieldGeneratorSeriesGames.have_value)
              {
                result->initSeriesGames();
                size_t count = fieldGeneratorSeriesGames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSeriesGames(fieldGeneratorSeriesGames.value[num].referenced());
                  }
                fieldGeneratorSeriesGames.value.clear();
                fieldGeneratorSeriesGames.have_value = false;
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            if (fieldGeneratorSeriesStatus.have_value)
              {
                result->setSeriesStatus(fieldGeneratorSeriesStatus.value.referenced());
                fieldGeneratorSeriesStatus.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayoffTriviaSeriesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Se", 2) == 0)
              {
                switch ((unsigned char)(field_name[2]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[3]), "son") == 0)
                            return &fieldGeneratorSeason;
                        break;
                    case 'r':
                        if (strncmp(&(field_name[3]), "ies", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'G':
                                    if (strcmp(&(field_name[7]), "ames") == 0)
                                        return &fieldGeneratorSeriesGames;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[7]), "tatus") == 0)
                                        return &fieldGeneratorSeriesStatus;
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
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSeriesGames("field \"SeriesGames\" of the SportsPlayoffTriviaSeries class", ignore_extras), fieldGeneratorSeason("field \"Season\" of the SportsPlayoffTriviaSeries class", ignore_extras), fieldGeneratorSeriesStatus("field \"SeriesStatus\" of the SportsPlayoffTriviaSeries class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayoffTriviaSeries class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSeriesGames.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorSeriesStatus.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYOFFTRIVIASERIESJSON_H */
