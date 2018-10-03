/* file "SportsGameSchedulesScoresInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameSchedulesScoresInformationNuggetJSON.h"

#include "SportsGameSchedulesScoresInformationNuggetJSON.h"


SportsGameSchedulesScoresInformationNuggetJSON::SportsGameSchedulesScoresInformationNuggetJSON(const SportsGameSchedulesScoresInformationNuggetJSON &)
  {
    assert(false);
  }

SportsGameSchedulesScoresInformationNuggetJSON &SportsGameSchedulesScoresInformationNuggetJSON::operator=(const SportsGameSchedulesScoresInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsGameSchedulesScoresInformationNuggetJSON::extraQueryDataToJSON(void) const
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

JSONValue *SportsGameSchedulesScoresInformationNuggetJSON::extraGamesToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Games = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeGames.size(); ++num2)
      {
        JSONValueHandler handler_Games;
        storeGames[num2]->write_as_json(&handler_Games);
        handler_Games.result->add_reference();
        generated_array_2_Games->appendComponent(handler_Games.result);
        handler_Games.result->remove_reference();
      }
    return generated_array_2_Games;
  }

void SportsGameSchedulesScoresInformationNuggetJSON::fromJSONQueryData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryData of SportsGameSchedulesScoresInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field QueryData of SportsGameSchedulesScoresInformationNuggetJSON has too few elements.");
    std::vector< SportsGameSchedulesScoresQueryDataJSON * > vector_QueryData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsGameSchedulesScoresQueryDataJSON *convert_classy = SportsGameSchedulesScoresQueryDataJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryData1[num1] = convert_classy;
      }
    assert(vector_QueryData1.size() >= 1);
    initQueryData();
    for (size_t num3 = 0; num3 < vector_QueryData1.size(); ++num3)
        appendQueryData(vector_QueryData1[num3]);
    for (size_t num1 = 0; num1 < vector_QueryData1.size(); ++num1)
      {
        vector_QueryData1[num1]->remove_reference();
      }
  }

void SportsGameSchedulesScoresInformationNuggetJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Games of SportsGameSchedulesScoresInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Games of SportsGameSchedulesScoresInformationNuggetJSON has too few elements.");
    std::vector< SportsGameJSON * > vector_Games1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsGameJSON *convert_classy = SportsGameJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Games1[num1] = convert_classy;
      }
    assert(vector_Games1.size() >= 1);
    initGames();
    for (size_t num4 = 0; num4 < vector_Games1.size(); ++num4)
        appendGames(vector_Games1[num4]);
    for (size_t num1 = 0; num1 < vector_Games1.size(); ++num1)
      {
        vector_Games1[num1]->remove_reference();
      }
  }

SportsGameSchedulesScoresInformationNuggetJSON::SportsGameSchedulesScoresInformationNuggetJSON(void) :
        flagHasQueryData(false),
        flagHasGames(false)
  {
    extraIndex = create_string_index();
  }

SportsGameSchedulesScoresInformationNuggetJSON::~SportsGameSchedulesScoresInformationNuggetJSON(void)
  {
    if (flagHasQueryData)
      {
        for (size_t num7 = 0; num7 < storeQueryData.size(); ++num7)
          {
            storeQueryData[num7]->remove_reference();
          }
      }
    if (flagHasGames)
      {
        for (size_t num8 = 0; num8 < storeGames.size(); ++num8)
          {
            storeGames[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsGameSchedulesScoresInformationNuggetJSON::getSportsNuggetKind(void) const
  {
    return "SportsGameSchedulesScores";
  }

bool SportsGameSchedulesScoresInformationNuggetJSON::hasQueryData(void) const
  {
    return flagHasQueryData;
  }

size_t SportsGameSchedulesScoresInformationNuggetJSON::countOfQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData.size();
  }

SportsGameSchedulesScoresQueryDataJSON * SportsGameSchedulesScoresInformationNuggetJSON::elementOfQueryData(size_t element_num)
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

const SportsGameSchedulesScoresQueryDataJSON * SportsGameSchedulesScoresInformationNuggetJSON::elementOfQueryData(size_t element_num) const
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

std::vector< SportsGameSchedulesScoresQueryDataJSON * > SportsGameSchedulesScoresInformationNuggetJSON::getQueryData(void)
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

const std::vector< SportsGameSchedulesScoresQueryDataJSON * > SportsGameSchedulesScoresInformationNuggetJSON::getQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

bool SportsGameSchedulesScoresInformationNuggetJSON::hasGames(void) const
  {
    return flagHasGames;
  }

size_t SportsGameSchedulesScoresInformationNuggetJSON::countOfGames(void) const
  {
    assert(flagHasGames);
    return storeGames.size();
  }

SportsGameJSON * SportsGameSchedulesScoresInformationNuggetJSON::elementOfGames(size_t element_num)
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

const SportsGameJSON * SportsGameSchedulesScoresInformationNuggetJSON::elementOfGames(size_t element_num) const
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

std::vector< SportsGameJSON * > SportsGameSchedulesScoresInformationNuggetJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const std::vector< SportsGameJSON * > SportsGameSchedulesScoresInformationNuggetJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

SportsGameSchedulesScoresInformationNuggetJSON *SportsGameSchedulesScoresInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameSchedulesScoresInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresInformationNuggetJSON>, SportsGameSchedulesScoresInformationNuggetJSON *, bool> generator("Type SportsGameSchedulesScoresInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
