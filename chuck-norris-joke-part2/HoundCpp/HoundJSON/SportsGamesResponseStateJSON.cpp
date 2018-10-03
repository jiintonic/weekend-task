/* file "SportsGamesResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGamesResponseStateJSON.h"

#include "SportsGamesResponseStateJSON.h"


SportsGamesResponseStateJSON::SportsGamesResponseStateJSON(const SportsGamesResponseStateJSON &)
  {
    assert(false);
  }

SportsGamesResponseStateJSON &SportsGamesResponseStateJSON::operator=(const SportsGamesResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGamesResponseStateJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Games of SportsGamesResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Games of SportsGamesResponseStateJSON has too few elements.");
    std::vector< SportsGameJSON * > vector_Games1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsGameJSON *convert_classy = SportsGameJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Games1[num1] = convert_classy;
      }
    assert(vector_Games1.size() >= 1);
    initGames();
    for (size_t num2 = 0; num2 < vector_Games1.size(); ++num2)
        appendGames(vector_Games1[num2]);
    for (size_t num1 = 0; num1 < vector_Games1.size(); ++num1)
      {
        vector_Games1[num1]->remove_reference();
      }
  }

SportsGamesResponseStateJSON::SportsGamesResponseStateJSON(void) :
        flagHasGames(false)
  {
    extraIndex = create_string_index();
  }

SportsGamesResponseStateJSON::~SportsGamesResponseStateJSON(void)
  {
    if (flagHasGames)
      {
        for (size_t num4 = 0; num4 < storeGames.size(); ++num4)
          {
            storeGames[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsGamesResponseStateJSON::hasGames(void) const
  {
    return flagHasGames;
  }

size_t SportsGamesResponseStateJSON::countOfGames(void) const
  {
    assert(flagHasGames);
    return storeGames.size();
  }

SportsGameJSON * SportsGamesResponseStateJSON::elementOfGames(size_t element_num)
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

const SportsGameJSON * SportsGamesResponseStateJSON::elementOfGames(size_t element_num) const
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

std::vector< SportsGameJSON * > SportsGamesResponseStateJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const std::vector< SportsGameJSON * > SportsGamesResponseStateJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

SportsGamesResponseStateJSON *SportsGamesResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGamesResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGamesResponseStateJSON>, SportsGamesResponseStateJSON *, bool> generator("Type SportsGamesResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
