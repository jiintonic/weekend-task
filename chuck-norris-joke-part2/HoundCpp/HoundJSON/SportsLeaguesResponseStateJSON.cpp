/* file "SportsLeaguesResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeaguesResponseStateJSON.h"

#include "SportsLeaguesResponseStateJSON.h"


SportsLeaguesResponseStateJSON::SportsLeaguesResponseStateJSON(const SportsLeaguesResponseStateJSON &)
  {
    assert(false);
  }

SportsLeaguesResponseStateJSON &SportsLeaguesResponseStateJSON::operator=(const SportsLeaguesResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeaguesResponseStateJSON::fromJSONLeagues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Leagues of SportsLeaguesResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Leagues of SportsLeaguesResponseStateJSON has too few elements.");
    std::vector< SportsLeagueCodeJSON * > vector_Leagues1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Leagues1[num1] = convert_classy;
      }
    assert(vector_Leagues1.size() >= 1);
    initLeagues();
    for (size_t num2 = 0; num2 < vector_Leagues1.size(); ++num2)
        appendLeagues(vector_Leagues1[num2]);
    for (size_t num1 = 0; num1 < vector_Leagues1.size(); ++num1)
      {
        vector_Leagues1[num1]->remove_reference();
      }
  }

SportsLeaguesResponseStateJSON::SportsLeaguesResponseStateJSON(void) :
        flagHasLeagues(false)
  {
    extraIndex = create_string_index();
  }

SportsLeaguesResponseStateJSON::~SportsLeaguesResponseStateJSON(void)
  {
    if (flagHasLeagues)
      {
        for (size_t num4 = 0; num4 < storeLeagues.size(); ++num4)
          {
            storeLeagues[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeaguesResponseStateJSON::hasLeagues(void) const
  {
    return flagHasLeagues;
  }

size_t SportsLeaguesResponseStateJSON::countOfLeagues(void) const
  {
    assert(flagHasLeagues);
    return storeLeagues.size();
  }

SportsLeagueCodeJSON * SportsLeaguesResponseStateJSON::elementOfLeagues(size_t element_num)
  {
    assert(flagHasLeagues);
    return storeLeagues[element_num];
  }

const SportsLeagueCodeJSON * SportsLeaguesResponseStateJSON::elementOfLeagues(size_t element_num) const
  {
    assert(flagHasLeagues);
    return storeLeagues[element_num];
  }

std::vector< SportsLeagueCodeJSON * > SportsLeaguesResponseStateJSON::getLeagues(void)
  {
    assert(flagHasLeagues);
    return storeLeagues;
  }

const std::vector< SportsLeagueCodeJSON * > SportsLeaguesResponseStateJSON::getLeagues(void) const
  {
    assert(flagHasLeagues);
    return storeLeagues;
  }

SportsLeaguesResponseStateJSON *SportsLeaguesResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeaguesResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeaguesResponseStateJSON>, SportsLeaguesResponseStateJSON *, bool> generator("Type SportsLeaguesResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
