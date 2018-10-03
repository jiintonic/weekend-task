/* file "SportsPlayoffTriviaInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYOFFTRIVIAINFORMATIONNUGGETJSON_H
#define SPORTSPLAYOFFTRIVIAINFORMATIONNUGGETJSON_H

#pragma interface

#include "SportsInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsPlayoffTriviaInputDataJSON.h"
#include "SportsPlayoffTriviaRanksJSON.h"
#include "SportsGameJSON.h"
#include "SportsSeriesStatusNewJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayoffTriviaInformationNuggetJSON : public SportsInformationNuggetJSON
  {
  private:
    bool flagHasQueryData;
    std::vector< SportsPlayoffTriviaInputDataJSON * > storeQueryData;
    bool flagHasIsSingleGame;
    bool storeIsSingleGame;
    bool flagHasRankResult;
    OInteger storeRankResult;
    bool flagHasRanks;
    std::vector< SportsPlayoffTriviaRanksJSON * > storeRanks;
    bool flagHasGames;
    std::vector< SportsGameJSON * > storeGames;
    bool flagHasSeries;
    std::vector< SportsSeriesStatusNewJSON * > storeSeries;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayoffTriviaInformationNuggetJSON(const SportsPlayoffTriviaInformationNuggetJSON &);
    SportsPlayoffTriviaInformationNuggetJSON & operator=(const SportsPlayoffTriviaInformationNuggetJSON &other);

    JSONValue * extraQueryDataToJSON(void) const;
    JSONValue * extraIsSingleGameToJSON(void) const;
    JSONValue * extraRankResultToJSON(void) const;
    JSONValue * extraRanksToJSON(void) const;
    JSONValue * extraGamesToJSON(void) const;
    JSONValue * extraSeriesToJSON(void) const;

    void  fromJSONQueryData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSingleGame(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRankResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRanks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeries(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayoffTriviaInformationNuggetJSON(void);
    virtual ~SportsPlayoffTriviaInformationNuggetJSON(void);
    const char * getSportsNuggetKind(void) const;
    bool  hasQueryData(void) const;
    size_t  countOfQueryData(void) const;
    SportsPlayoffTriviaInputDataJSON *  elementOfQueryData(size_t element_num);
    const SportsPlayoffTriviaInputDataJSON *  elementOfQueryData(size_t element_num) const;
    std::vector< SportsPlayoffTriviaInputDataJSON * >  getQueryData(void);
    const std::vector< SportsPlayoffTriviaInputDataJSON * >  getQueryData(void) const;
    bool  hasIsSingleGame(void) const;
    bool  getIsSingleGame(void);
    const bool  getIsSingleGame(void) const;
    bool  hasRankResult(void) const;
    OInteger  getRankResult(void);
    const OInteger  getRankResult(void) const;
    bool  hasRanks(void) const;
    size_t  countOfRanks(void) const;
    SportsPlayoffTriviaRanksJSON *  elementOfRanks(size_t element_num);
    const SportsPlayoffTriviaRanksJSON *  elementOfRanks(size_t element_num) const;
    std::vector< SportsPlayoffTriviaRanksJSON * >  getRanks(void);
    const std::vector< SportsPlayoffTriviaRanksJSON * >  getRanks(void) const;
    bool  hasGames(void) const;
    size_t  countOfGames(void) const;
    SportsGameJSON *  elementOfGames(size_t element_num);
    const SportsGameJSON *  elementOfGames(size_t element_num) const;
    std::vector< SportsGameJSON * >  getGames(void);
    const std::vector< SportsGameJSON * >  getGames(void) const;
    bool  hasSeries(void) const;
    size_t  countOfSeries(void) const;
    SportsSeriesStatusNewJSON *  elementOfSeries(size_t element_num);
    const SportsSeriesStatusNewJSON *  elementOfSeries(size_t element_num) const;
    std::vector< SportsSeriesStatusNewJSON * >  getSeries(void);
    const std::vector< SportsSeriesStatusNewJSON * >  getSeries(void) const;

    virtual size_t extraSportsPlayoffTriviaInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayoffTriviaInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayoffTriviaInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayoffTriviaInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayoffTriviaInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayoffTriviaInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasQueryData)
            ++result;
        if (flagHasIsSingleGame)
            ++result;
        if (flagHasRankResult)
            ++result;
        if (flagHasRanks)
            ++result;
        if (flagHasGames)
            ++result;
        if (flagHasSeries)
            ++result;
        result += extraSportsPlayoffTriviaInformationNuggetComponentCount();
        return result;
      }
    const char *extraSportsInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return "QueryData";
            --remainder;
          }
        if (flagHasIsSingleGame)
          {
            if (remainder == 0)
                return "IsSingleGame";
            --remainder;
          }
        if (flagHasRankResult)
          {
            if (remainder == 0)
                return "RankResult";
            --remainder;
          }
        if (flagHasRanks)
          {
            if (remainder == 0)
                return "Ranks";
            --remainder;
          }
        if (flagHasGames)
          {
            if (remainder == 0)
                return "Games";
            --remainder;
          }
        if (flagHasSeries)
          {
            if (remainder == 0)
                return "Series";
            --remainder;
          }
        return extraSportsPlayoffTriviaInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return extraQueryDataToJSON();
            --remainder;
          }
        if (flagHasIsSingleGame)
          {
            if (remainder == 0)
                return extraIsSingleGameToJSON();
            --remainder;
          }
        if (flagHasRankResult)
          {
            if (remainder == 0)
                return extraRankResultToJSON();
            --remainder;
          }
        if (flagHasRanks)
          {
            if (remainder == 0)
                return extraRanksToJSON();
            --remainder;
          }
        if (flagHasGames)
          {
            if (remainder == 0)
                return extraGamesToJSON();
            --remainder;
          }
        if (flagHasSeries)
          {
            if (remainder == 0)
                return extraSeriesToJSON();
            --remainder;
          }
        return extraSportsPlayoffTriviaInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return extraQueryDataToJSON();
            --remainder;
          }
        if (flagHasIsSingleGame)
          {
            if (remainder == 0)
                return extraIsSingleGameToJSON();
            --remainder;
          }
        if (flagHasRankResult)
          {
            if (remainder == 0)
                return extraRankResultToJSON();
            --remainder;
          }
        if (flagHasRanks)
          {
            if (remainder == 0)
                return extraRanksToJSON();
            --remainder;
          }
        if (flagHasGames)
          {
            if (remainder == 0)
                return extraGamesToJSON();
            --remainder;
          }
        if (flagHasSeries)
          {
            if (remainder == 0)
                return extraSeriesToJSON();
            --remainder;
          }
        return extraSportsPlayoffTriviaInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraSportsInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ames") == 0)
                    return (flagHasGames ? extraGamesToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "sSingleGame") == 0)
                    return (flagHasIsSingleGame ? extraIsSingleGameToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryData") == 0)
                    return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "ank", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'R':
                            if (strcmp(&(field_name[5]), "esult") == 0)
                                return (flagHasRankResult ? extraRankResultToJSON() : NULL);
                            break;
                        case 's':
                            if (field_name[5] == 0)
                                return (flagHasRanks ? extraRanksToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "eries") == 0)
                    return (flagHasSeries ? extraSeriesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsPlayoffTriviaInformationNuggetLookup(field_name);
      }
    const JSONValue *extraSportsInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ames") == 0)
                    return (flagHasGames ? extraGamesToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "sSingleGame") == 0)
                    return (flagHasIsSingleGame ? extraIsSingleGameToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryData") == 0)
                    return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "ank", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'R':
                            if (strcmp(&(field_name[5]), "esult") == 0)
                                return (flagHasRankResult ? extraRankResultToJSON() : NULL);
                            break;
                        case 's':
                            if (field_name[5] == 0)
                                return (flagHasRanks ? extraRanksToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "eries") == 0)
                    return (flagHasSeries ? extraSeriesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsPlayoffTriviaInformationNuggetLookup(field_name);
      }

    void initQueryData(void)
      {
        if (flagHasQueryData)
          {
            for (size_t num5 = 0; num5 < storeQueryData.size(); ++num5)
              {
                storeQueryData[num5]->remove_reference();
              }
          }
        flagHasQueryData = true;
        storeQueryData.clear();
      }
    void appendQueryData(SportsPlayoffTriviaInputDataJSON * to_append)
      {
        if (!flagHasQueryData)
          {
            flagHasQueryData = true;
            storeQueryData.clear();
          }
        assert(flagHasQueryData);
        to_append->add_reference();
        storeQueryData.push_back(to_append);
      }
    void unsetQueryData(void)
      {
        if (flagHasQueryData)
          {
            for (size_t num6 = 0; num6 < storeQueryData.size(); ++num6)
              {
                storeQueryData[num6]->remove_reference();
              }
          }
        flagHasQueryData = false;
        storeQueryData.clear();
      }
    void setIsSingleGame(bool new_value)
      {
        flagHasIsSingleGame = true;
        storeIsSingleGame = new_value;
      }
    void unsetIsSingleGame(void)
      {
        flagHasIsSingleGame = false;
      }
    void setRankResult(OInteger new_value)
      {
        flagHasRankResult = true;
        if (new_value < -1)
            throw("The value for field RankResult of SportsPlayoffTriviaInformationNuggetJSON is less than the lower bound (-1) for that field.");
        storeRankResult = new_value;
      }
    void unsetRankResult(void)
      {
        flagHasRankResult = false;
      }
    void initRanks(void)
      {
        if (flagHasRanks)
          {
            for (size_t num7 = 0; num7 < storeRanks.size(); ++num7)
              {
                storeRanks[num7]->remove_reference();
              }
          }
        flagHasRanks = true;
        storeRanks.clear();
      }
    void appendRanks(SportsPlayoffTriviaRanksJSON * to_append)
      {
        if (!flagHasRanks)
          {
            flagHasRanks = true;
            storeRanks.clear();
          }
        assert(flagHasRanks);
        to_append->add_reference();
        storeRanks.push_back(to_append);
      }
    void unsetRanks(void)
      {
        if (flagHasRanks)
          {
            for (size_t num8 = 0; num8 < storeRanks.size(); ++num8)
              {
                storeRanks[num8]->remove_reference();
              }
          }
        flagHasRanks = false;
        storeRanks.clear();
      }
    void initGames(void)
      {
        if (flagHasGames)
          {
            for (size_t num9 = 0; num9 < storeGames.size(); ++num9)
              {
                storeGames[num9]->remove_reference();
              }
          }
        flagHasGames = true;
        storeGames.clear();
      }
    void appendGames(SportsGameJSON * to_append)
      {
        if (!flagHasGames)
          {
            flagHasGames = true;
            storeGames.clear();
          }
        assert(flagHasGames);
        to_append->add_reference();
        storeGames.push_back(to_append);
      }
    void unsetGames(void)
      {
        if (flagHasGames)
          {
            for (size_t num10 = 0; num10 < storeGames.size(); ++num10)
              {
                storeGames[num10]->remove_reference();
              }
          }
        flagHasGames = false;
        storeGames.clear();
      }
    void initSeries(void)
      {
        if (flagHasSeries)
          {
            for (size_t num11 = 0; num11 < storeSeries.size(); ++num11)
              {
                storeSeries[num11]->remove_reference();
              }
          }
        flagHasSeries = true;
        storeSeries.clear();
      }
    void appendSeries(SportsSeriesStatusNewJSON * to_append)
      {
        if (!flagHasSeries)
          {
            flagHasSeries = true;
            storeSeries.clear();
          }
        assert(flagHasSeries);
        to_append->add_reference();
        storeSeries.push_back(to_append);
      }
    void unsetSeries(void)
      {
        if (flagHasSeries)
          {
            for (size_t num12 = 0; num12 < storeSeries.size(); ++num12)
              {
                storeSeries[num12]->remove_reference();
              }
          }
        flagHasSeries = false;
        storeSeries.clear();
      }

    virtual void extraSportsPlayoffTriviaInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayoffTriviaInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayoffTriviaInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayoffTriviaInformationNuggetAppendPair(key, new_component);
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
    void extraSportsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'G':
                if (strcmp(&(key[1]), "ames") == 0)
                    {
                    fromJSONGames(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "sSingleGame") == 0)
                    {
                    fromJSONIsSingleGame(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryData") == 0)
                    {
                    fromJSONQueryData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strncmp(&(key[1]), "ank", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'R':
                            if (strcmp(&(key[5]), "esult") == 0)
                                {
                                fromJSONRankResult(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (key[5] == 0)
                                {
                                fromJSONRanks(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(key[1]), "eries") == 0)
                    {
                    fromJSONSeries(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsPlayoffTriviaInformationNuggetAppendPair(key, new_component);
      }
    void extraSportsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'G':
                if (strcmp(&(key[1]), "ames") == 0)
                    {
                    fromJSONGames(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "sSingleGame") == 0)
                    {
                    fromJSONIsSingleGame(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryData") == 0)
                    {
                    fromJSONQueryData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strncmp(&(key[1]), "ank", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'R':
                            if (strcmp(&(key[5]), "esult") == 0)
                                {
                                fromJSONRankResult(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (key[5] == 0)
                                {
                                fromJSONRanks(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(key[1]), "eries") == 0)
                    {
                    fromJSONSeries(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsPlayoffTriviaInformationNuggetSetField(key, new_component);
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
        SportsInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasQueryData);
        handler->start_pair("QueryData");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeQueryData.size(); ++num1)
          {
            storeQueryData[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasIsSingleGame)
          {
            handler->start_pair("IsSingleGame");
            handler->boolean_value(storeIsSingleGame);
          }
        if (flagHasRankResult)
          {
            handler->start_pair("RankResult");
            handler->number_value(storeRankResult.get_o_integer());
          }
        if (flagHasRanks)
          {
            handler->start_pair("Ranks");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeRanks.size(); ++num2)
              {
                storeRanks[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasGames)
          {
            handler->start_pair("Games");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeGames.size(); ++num3)
              {
                storeGames[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSeries)
          {
            handler->start_pair("Series");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeSeries.size(); ++num4)
              {
                storeSeries[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryData()))
          {
            return "When parsing the object for %what%, the \"QueryData\" field was missing.";
          }
        return NULL;
      }

    static SportsPlayoffTriviaInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayoffTriviaInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayoffTriviaInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaInformationNuggetJSON>, SportsPlayoffTriviaInformationNuggetJSON *, bool> generator("Type SportsPlayoffTriviaInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsPlayoffTriviaInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayoffTriviaInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayoffTriviaInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaInformationNuggetJSON>, SportsPlayoffTriviaInformationNuggetJSON *, bool> generator("Type SportsPlayoffTriviaInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<SportsPlayoffTriviaInputDataJSON::Generator, RCHandle<SportsPlayoffTriviaInputDataJSON>, SportsPlayoffTriviaInputDataJSON *, bool > fieldGeneratorQueryData;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsSingleGame;
        static char lowerBoundRankResult[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRankResult>, OInteger, o_integer > fieldGeneratorRankResult;
        JSONHoldingArrayGenerator<SportsPlayoffTriviaRanksJSON::Generator, RCHandle<SportsPlayoffTriviaRanksJSON>, SportsPlayoffTriviaRanksJSON *, bool > fieldGeneratorRanks;
        JSONHoldingArrayGenerator<SportsGameJSON::Generator, RCHandle<SportsGameJSON>, SportsGameJSON *, bool > fieldGeneratorGames;
        JSONHoldingArrayGenerator<SportsSeriesStatusNewJSON::Generator, RCHandle<SportsSeriesStatusNewJSON>, SportsSeriesStatusNewJSON *, bool > fieldGeneratorSeries;
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
            if (!(strcmp(getSportsInformationNuggetJSONKey().c_str(), "SportsPlayoffTrivia") == 0))
                throw("The key field has a value other than `SportsPlayoffTrivia'.");
            SportsPlayoffTriviaInformationNuggetJSON *result = new SportsPlayoffTriviaInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SportsPlayoffTriviaInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayoffTriviaInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsInformationNuggetJSON *new_result)
          {
            handle_result((SportsPlayoffTriviaInformationNuggetJSON *)new_result);
          }
        void finish(SportsPlayoffTriviaInformationNuggetJSON *result)
          {
            if (fieldGeneratorQueryData.have_value)
              {
                result->initQueryData();
                size_t count = fieldGeneratorQueryData.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryData(fieldGeneratorQueryData.value[num].referenced());
                  }
                fieldGeneratorQueryData.value.clear();
                fieldGeneratorQueryData.have_value = false;
              }
            else if (!(result->hasQueryData()))
              {
                error("When parsing the object for %what%, the \"QueryData\" field was missing.");
              }
            if (fieldGeneratorIsSingleGame.have_value)
              {
                result->setIsSingleGame(fieldGeneratorIsSingleGame.value);
                fieldGeneratorIsSingleGame.have_value = false;
              }
            if (fieldGeneratorRankResult.have_value)
              {
                result->setRankResult(fieldGeneratorRankResult.value);
                fieldGeneratorRankResult.have_value = false;
              }
            if (fieldGeneratorRanks.have_value)
              {
                result->initRanks();
                size_t count = fieldGeneratorRanks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRanks(fieldGeneratorRanks.value[num].referenced());
                  }
                fieldGeneratorRanks.value.clear();
                fieldGeneratorRanks.have_value = false;
              }
            if (fieldGeneratorGames.have_value)
              {
                result->initGames();
                size_t count = fieldGeneratorGames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGames(fieldGeneratorGames.value[num].referenced());
                  }
                fieldGeneratorGames.value.clear();
                fieldGeneratorGames.have_value = false;
              }
            if (fieldGeneratorSeries.have_value)
              {
                result->initSeries();
                size_t count = fieldGeneratorSeries.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSeries(fieldGeneratorSeries.value[num].referenced());
                  }
                fieldGeneratorSeries.value.clear();
                fieldGeneratorSeries.have_value = false;
              }
            SportsInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsPlayoffTriviaInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "ames") == 0)
                        return &fieldGeneratorGames;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sSingleGame") == 0)
                        return &fieldGeneratorIsSingleGame;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryData") == 0)
                        return &fieldGeneratorQueryData;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "ank", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'R':
                                if (strcmp(&(field_name[5]), "esult") == 0)
                                    return &fieldGeneratorRankResult;
                                break;
                            case 's':
                                if (field_name[5] == 0)
                                    return &fieldGeneratorRanks;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "eries") == 0)
                        return &fieldGeneratorSeries;
                    break;
                default:
                    break;
              }
            return SportsInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryData("field \"QueryData\" of the SportsPlayoffTriviaInformationNugget class", ignore_extras), fieldGeneratorIsSingleGame("field \"IsSingleGame\" of the SportsPlayoffTriviaInformationNugget class"), fieldGeneratorRankResult("field \"RankResult\" of the SportsPlayoffTriviaInformationNugget class"), fieldGeneratorRanks("field \"Ranks\" of the SportsPlayoffTriviaInformationNugget class", ignore_extras), fieldGeneratorGames("field \"Games\" of the SportsPlayoffTriviaInformationNugget class", ignore_extras), fieldGeneratorSeries("field \"Series\" of the SportsPlayoffTriviaInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayoffTriviaInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryData.reset();
            fieldGeneratorIsSingleGame.reset();
            fieldGeneratorRankResult.reset();
            fieldGeneratorRanks.reset();
            fieldGeneratorGames.reset();
            fieldGeneratorSeries.reset();
            SportsInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYOFFTRIVIAINFORMATIONNUGGETJSON_H */
