/* file "SportsPlayoffTriviaSeriesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffTriviaSeriesJSON.h"

#include "SportsPlayoffTriviaSeriesJSON.h"


SportsPlayoffTriviaSeriesJSON::SportsPlayoffTriviaSeriesJSON(const SportsPlayoffTriviaSeriesJSON &)
  {
    assert(false);
  }

SportsPlayoffTriviaSeriesJSON &SportsPlayoffTriviaSeriesJSON::operator=(const SportsPlayoffTriviaSeriesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffTriviaSeriesJSON::fromJSONSeriesGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SeriesGames of SportsPlayoffTriviaSeriesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsGameJSON * > vector_SeriesGames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsGameJSON *convert_classy = SportsGameJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SeriesGames1[num1] = convert_classy;
      }
    initSeriesGames();
    for (size_t num2 = 0; num2 < vector_SeriesGames1.size(); ++num2)
        appendSeriesGames(vector_SeriesGames1[num2]);
    for (size_t num1 = 0; num1 < vector_SeriesGames1.size(); ++num1)
      {
        vector_SeriesGames1[num1]->remove_reference();
      }
  }

void SportsPlayoffTriviaSeriesJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayoffTriviaSeriesJSON::fromJSONSeriesStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeriesStatusNewJSON *convert_classy = SportsSeriesStatusNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeriesStatus(convert_classy);
    convert_classy->remove_reference();
  }

SportsPlayoffTriviaSeriesJSON::SportsPlayoffTriviaSeriesJSON(void) :
        flagHasSeriesGames(false),
        flagHasSeason(false),
        flagHasSeriesStatus(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffTriviaSeriesJSON::~SportsPlayoffTriviaSeriesJSON(void)
  {
    if (flagHasSeriesGames)
      {
        for (size_t num4 = 0; num4 < storeSeriesGames.size(); ++num4)
          {
            storeSeriesGames[num4]->remove_reference();
          }
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasSeriesStatus)
      {
        storeSeriesStatus->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayoffTriviaSeriesJSON::hasSeriesGames(void) const
  {
    return flagHasSeriesGames;
  }

size_t SportsPlayoffTriviaSeriesJSON::countOfSeriesGames(void) const
  {
    assert(flagHasSeriesGames);
    return storeSeriesGames.size();
  }

SportsGameJSON * SportsPlayoffTriviaSeriesJSON::elementOfSeriesGames(size_t element_num)
  {
    assert(flagHasSeriesGames);
    return storeSeriesGames[element_num];
  }

const SportsGameJSON * SportsPlayoffTriviaSeriesJSON::elementOfSeriesGames(size_t element_num) const
  {
    assert(flagHasSeriesGames);
    return storeSeriesGames[element_num];
  }

std::vector< SportsGameJSON * > SportsPlayoffTriviaSeriesJSON::getSeriesGames(void)
  {
    assert(flagHasSeriesGames);
    return storeSeriesGames;
  }

const std::vector< SportsGameJSON * > SportsPlayoffTriviaSeriesJSON::getSeriesGames(void) const
  {
    assert(flagHasSeriesGames);
    return storeSeriesGames;
  }

bool SportsPlayoffTriviaSeriesJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonResolvedJSON * SportsPlayoffTriviaSeriesJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonResolvedJSON * SportsPlayoffTriviaSeriesJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsPlayoffTriviaSeriesJSON::hasSeriesStatus(void) const
  {
    return flagHasSeriesStatus;
  }

SportsSeriesStatusNewJSON * SportsPlayoffTriviaSeriesJSON::getSeriesStatus(void)
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus;
  }

const SportsSeriesStatusNewJSON * SportsPlayoffTriviaSeriesJSON::getSeriesStatus(void) const
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus;
  }

SportsPlayoffTriviaSeriesJSON *SportsPlayoffTriviaSeriesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffTriviaSeriesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaSeriesJSON>, SportsPlayoffTriviaSeriesJSON *, bool> generator("Type SportsPlayoffTriviaSeries", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
