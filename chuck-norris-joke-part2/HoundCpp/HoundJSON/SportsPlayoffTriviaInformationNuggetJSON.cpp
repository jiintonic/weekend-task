/* file "SportsPlayoffTriviaInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffTriviaInformationNuggetJSON.h"

#include "SportsPlayoffTriviaInformationNuggetJSON.h"


SportsPlayoffTriviaInformationNuggetJSON::SportsPlayoffTriviaInformationNuggetJSON(const SportsPlayoffTriviaInformationNuggetJSON &)
  {
    assert(false);
  }

SportsPlayoffTriviaInformationNuggetJSON &SportsPlayoffTriviaInformationNuggetJSON::operator=(const SportsPlayoffTriviaInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsPlayoffTriviaInformationNuggetJSON::extraQueryDataToJSON(void) const
  {
    JSONArrayValue *generated_array_1_QueryData = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeQueryData.size(); ++num1)
      {
        JSONValueHandler handler_QueryData;
        storeQueryData[num1]->write_as_json(&handler_QueryData);
        handler_QueryData.result->add_reference();
        generated_array_1_QueryData->appendComponent(handler_QueryData.result);
        handler_QueryData.result->remove_reference();
      }
    return generated_array_1_QueryData;
  }

JSONValue *SportsPlayoffTriviaInformationNuggetJSON::extraIsSingleGameToJSON(void) const
  {
    JSONValue *generated_boolean_IsSingleGame = (storeIsSingleGame ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsSingleGame;
  }

JSONValue *SportsPlayoffTriviaInformationNuggetJSON::extraRankResultToJSON(void) const
  {
    JSONIntegerValue *generated_integer_RankResult = new JSONIntegerValue(storeRankResult.get_o_integer());
    return generated_integer_RankResult;
  }

JSONValue *SportsPlayoffTriviaInformationNuggetJSON::extraRanksToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Ranks = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeRanks.size(); ++num2)
      {
        JSONValueHandler handler_Ranks;
        storeRanks[num2]->write_as_json(&handler_Ranks);
        handler_Ranks.result->add_reference();
        generated_array_2_Ranks->appendComponent(handler_Ranks.result);
        handler_Ranks.result->remove_reference();
      }
    return generated_array_2_Ranks;
  }

JSONValue *SportsPlayoffTriviaInformationNuggetJSON::extraGamesToJSON(void) const
  {
    JSONArrayValue *generated_array_3_Games = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeGames.size(); ++num3)
      {
        JSONValueHandler handler_Games;
        storeGames[num3]->write_as_json(&handler_Games);
        handler_Games.result->add_reference();
        generated_array_3_Games->appendComponent(handler_Games.result);
        handler_Games.result->remove_reference();
      }
    return generated_array_3_Games;
  }

JSONValue *SportsPlayoffTriviaInformationNuggetJSON::extraSeriesToJSON(void) const
  {
    JSONArrayValue *generated_array_4_Series = new JSONArrayValue();
    for (size_t num4 = 0; num4 < storeSeries.size(); ++num4)
      {
        JSONValueHandler handler_Series;
        storeSeries[num4]->write_as_json(&handler_Series);
        handler_Series.result->add_reference();
        generated_array_4_Series->appendComponent(handler_Series.result);
        handler_Series.result->remove_reference();
      }
    return generated_array_4_Series;
  }

void SportsPlayoffTriviaInformationNuggetJSON::fromJSONQueryData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryData of SportsPlayoffTriviaInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsPlayoffTriviaInputDataJSON * > vector_QueryData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayoffTriviaInputDataJSON *convert_classy = SportsPlayoffTriviaInputDataJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryData1[num1] = convert_classy;
      }
    initQueryData();
    for (size_t num5 = 0; num5 < vector_QueryData1.size(); ++num5)
        appendQueryData(vector_QueryData1[num5]);
    for (size_t num1 = 0; num1 < vector_QueryData1.size(); ++num1)
      {
        vector_QueryData1[num1]->remove_reference();
      }
  }

void SportsPlayoffTriviaInformationNuggetJSON::fromJSONIsSingleGame(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsSingleGame of SportsPlayoffTriviaInformationNuggetJSON is not true for false.");
          }
      }
    setIsSingleGame(the_bool);
  }

void SportsPlayoffTriviaInformationNuggetJSON::fromJSONRankResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RankResult of SportsPlayoffTriviaInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RankResult of SportsPlayoffTriviaInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRankResult(extracted_integer);
  }

void SportsPlayoffTriviaInformationNuggetJSON::fromJSONRanks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Ranks of SportsPlayoffTriviaInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsPlayoffTriviaRanksJSON * > vector_Ranks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayoffTriviaRanksJSON *convert_classy = SportsPlayoffTriviaRanksJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Ranks1[num1] = convert_classy;
      }
    initRanks();
    for (size_t num6 = 0; num6 < vector_Ranks1.size(); ++num6)
        appendRanks(vector_Ranks1[num6]);
    for (size_t num1 = 0; num1 < vector_Ranks1.size(); ++num1)
      {
        vector_Ranks1[num1]->remove_reference();
      }
  }

void SportsPlayoffTriviaInformationNuggetJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Games of SportsPlayoffTriviaInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsGameJSON * > vector_Games1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsGameJSON *convert_classy = SportsGameJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Games1[num1] = convert_classy;
      }
    initGames();
    for (size_t num7 = 0; num7 < vector_Games1.size(); ++num7)
        appendGames(vector_Games1[num7]);
    for (size_t num1 = 0; num1 < vector_Games1.size(); ++num1)
      {
        vector_Games1[num1]->remove_reference();
      }
  }

void SportsPlayoffTriviaInformationNuggetJSON::fromJSONSeries(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Series of SportsPlayoffTriviaInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsSeriesStatusNewJSON * > vector_Series1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsSeriesStatusNewJSON *convert_classy = SportsSeriesStatusNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Series1[num1] = convert_classy;
      }
    initSeries();
    for (size_t num8 = 0; num8 < vector_Series1.size(); ++num8)
        appendSeries(vector_Series1[num8]);
    for (size_t num1 = 0; num1 < vector_Series1.size(); ++num1)
      {
        vector_Series1[num1]->remove_reference();
      }
  }

SportsPlayoffTriviaInformationNuggetJSON::SportsPlayoffTriviaInformationNuggetJSON(void) :
        flagHasQueryData(false),
        flagHasIsSingleGame(false),
        flagHasRankResult(false),
        flagHasRanks(false),
        flagHasGames(false),
        flagHasSeries(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffTriviaInformationNuggetJSON::~SportsPlayoffTriviaInformationNuggetJSON(void)
  {
    if (flagHasQueryData)
      {
        for (size_t num13 = 0; num13 < storeQueryData.size(); ++num13)
          {
            storeQueryData[num13]->remove_reference();
          }
      }
    if (flagHasRanks)
      {
        for (size_t num14 = 0; num14 < storeRanks.size(); ++num14)
          {
            storeRanks[num14]->remove_reference();
          }
      }
    if (flagHasGames)
      {
        for (size_t num15 = 0; num15 < storeGames.size(); ++num15)
          {
            storeGames[num15]->remove_reference();
          }
      }
    if (flagHasSeries)
      {
        for (size_t num16 = 0; num16 < storeSeries.size(); ++num16)
          {
            storeSeries[num16]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsPlayoffTriviaInformationNuggetJSON::getSportsNuggetKind(void) const
  {
    return "SportsPlayoffTrivia";
  }

bool SportsPlayoffTriviaInformationNuggetJSON::hasQueryData(void) const
  {
    return flagHasQueryData;
  }

size_t SportsPlayoffTriviaInformationNuggetJSON::countOfQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData.size();
  }

SportsPlayoffTriviaInputDataJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfQueryData(size_t element_num)
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

const SportsPlayoffTriviaInputDataJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfQueryData(size_t element_num) const
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

std::vector< SportsPlayoffTriviaInputDataJSON * > SportsPlayoffTriviaInformationNuggetJSON::getQueryData(void)
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

const std::vector< SportsPlayoffTriviaInputDataJSON * > SportsPlayoffTriviaInformationNuggetJSON::getQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

bool SportsPlayoffTriviaInformationNuggetJSON::hasIsSingleGame(void) const
  {
    return flagHasIsSingleGame;
  }

bool SportsPlayoffTriviaInformationNuggetJSON::getIsSingleGame(void)
  {
    assert(flagHasIsSingleGame);
    return storeIsSingleGame;
  }

const bool SportsPlayoffTriviaInformationNuggetJSON::getIsSingleGame(void) const
  {
    assert(flagHasIsSingleGame);
    return storeIsSingleGame;
  }

bool SportsPlayoffTriviaInformationNuggetJSON::hasRankResult(void) const
  {
    return flagHasRankResult;
  }

OInteger SportsPlayoffTriviaInformationNuggetJSON::getRankResult(void)
  {
    assert(flagHasRankResult);
    return storeRankResult;
  }

const OInteger SportsPlayoffTriviaInformationNuggetJSON::getRankResult(void) const
  {
    assert(flagHasRankResult);
    return storeRankResult;
  }

bool SportsPlayoffTriviaInformationNuggetJSON::hasRanks(void) const
  {
    return flagHasRanks;
  }

size_t SportsPlayoffTriviaInformationNuggetJSON::countOfRanks(void) const
  {
    assert(flagHasRanks);
    return storeRanks.size();
  }

SportsPlayoffTriviaRanksJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfRanks(size_t element_num)
  {
    assert(flagHasRanks);
    return storeRanks[element_num];
  }

const SportsPlayoffTriviaRanksJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfRanks(size_t element_num) const
  {
    assert(flagHasRanks);
    return storeRanks[element_num];
  }

std::vector< SportsPlayoffTriviaRanksJSON * > SportsPlayoffTriviaInformationNuggetJSON::getRanks(void)
  {
    assert(flagHasRanks);
    return storeRanks;
  }

const std::vector< SportsPlayoffTriviaRanksJSON * > SportsPlayoffTriviaInformationNuggetJSON::getRanks(void) const
  {
    assert(flagHasRanks);
    return storeRanks;
  }

bool SportsPlayoffTriviaInformationNuggetJSON::hasGames(void) const
  {
    return flagHasGames;
  }

size_t SportsPlayoffTriviaInformationNuggetJSON::countOfGames(void) const
  {
    assert(flagHasGames);
    return storeGames.size();
  }

SportsGameJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfGames(size_t element_num)
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

const SportsGameJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfGames(size_t element_num) const
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

std::vector< SportsGameJSON * > SportsPlayoffTriviaInformationNuggetJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const std::vector< SportsGameJSON * > SportsPlayoffTriviaInformationNuggetJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

bool SportsPlayoffTriviaInformationNuggetJSON::hasSeries(void) const
  {
    return flagHasSeries;
  }

size_t SportsPlayoffTriviaInformationNuggetJSON::countOfSeries(void) const
  {
    assert(flagHasSeries);
    return storeSeries.size();
  }

SportsSeriesStatusNewJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfSeries(size_t element_num)
  {
    assert(flagHasSeries);
    return storeSeries[element_num];
  }

const SportsSeriesStatusNewJSON * SportsPlayoffTriviaInformationNuggetJSON::elementOfSeries(size_t element_num) const
  {
    assert(flagHasSeries);
    return storeSeries[element_num];
  }

std::vector< SportsSeriesStatusNewJSON * > SportsPlayoffTriviaInformationNuggetJSON::getSeries(void)
  {
    assert(flagHasSeries);
    return storeSeries;
  }

const std::vector< SportsSeriesStatusNewJSON * > SportsPlayoffTriviaInformationNuggetJSON::getSeries(void) const
  {
    assert(flagHasSeries);
    return storeSeries;
  }

char SportsPlayoffTriviaInformationNuggetJSON::Generator::lowerBoundRankResult[] = "-1";
SportsPlayoffTriviaInformationNuggetJSON *SportsPlayoffTriviaInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffTriviaInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaInformationNuggetJSON>, SportsPlayoffTriviaInformationNuggetJSON *, bool> generator("Type SportsPlayoffTriviaInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
