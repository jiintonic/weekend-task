/* file "SportsLeagueControlJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueControlJSON.h"

#include "SportsLeagueControlJSON.h"


SportsLeagueControlJSON::SportsLeagueControlJSON(const SportsLeagueControlJSON &)
  {
    assert(false);
  }

SportsLeagueControlJSON &SportsLeagueControlJSON::operator=(const SportsLeagueControlJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueControlJSON::fromJSONEnabledLeagues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EnabledLeagues of SportsLeagueControlJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EnabledLeagues of SportsLeagueControlJSON has too few elements.");
    std::vector< SportsLeagueCodeJSON * > vector_EnabledLeagues1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_EnabledLeagues1[num1] = convert_classy;
      }
    assert(vector_EnabledLeagues1.size() >= 1);
    initEnabledLeagues();
    for (size_t num3 = 0; num3 < vector_EnabledLeagues1.size(); ++num3)
        appendEnabledLeagues(vector_EnabledLeagues1[num3]);
    for (size_t num1 = 0; num1 < vector_EnabledLeagues1.size(); ++num1)
      {
        vector_EnabledLeagues1[num1]->remove_reference();
      }
  }

void SportsLeagueControlJSON::fromJSONPreferredLeagues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PreferredLeagues of SportsLeagueControlJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PreferredLeagues of SportsLeagueControlJSON has too few elements.");
    std::vector< SportsLeagueCodeJSON * > vector_PreferredLeagues1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PreferredLeagues1[num1] = convert_classy;
      }
    assert(vector_PreferredLeagues1.size() >= 1);
    initPreferredLeagues();
    for (size_t num4 = 0; num4 < vector_PreferredLeagues1.size(); ++num4)
        appendPreferredLeagues(vector_PreferredLeagues1[num4]);
    for (size_t num1 = 0; num1 < vector_PreferredLeagues1.size(); ++num1)
      {
        vector_PreferredLeagues1[num1]->remove_reference();
      }
  }

SportsLeagueControlJSON::SportsLeagueControlJSON(void) :
        flagHasEnabledLeagues(false),
        flagHasPreferredLeagues(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueControlJSON::~SportsLeagueControlJSON(void)
  {
    if (flagHasEnabledLeagues)
      {
        for (size_t num7 = 0; num7 < storeEnabledLeagues.size(); ++num7)
          {
            storeEnabledLeagues[num7]->remove_reference();
          }
      }
    if (flagHasPreferredLeagues)
      {
        for (size_t num8 = 0; num8 < storePreferredLeagues.size(); ++num8)
          {
            storePreferredLeagues[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueControlJSON::hasEnabledLeagues(void) const
  {
    return flagHasEnabledLeagues;
  }

size_t SportsLeagueControlJSON::countOfEnabledLeagues(void) const
  {
    assert(flagHasEnabledLeagues);
    return storeEnabledLeagues.size();
  }

SportsLeagueCodeJSON * SportsLeagueControlJSON::elementOfEnabledLeagues(size_t element_num)
  {
    assert(flagHasEnabledLeagues);
    return storeEnabledLeagues[element_num];
  }

const SportsLeagueCodeJSON * SportsLeagueControlJSON::elementOfEnabledLeagues(size_t element_num) const
  {
    assert(flagHasEnabledLeagues);
    return storeEnabledLeagues[element_num];
  }

std::vector< SportsLeagueCodeJSON * > SportsLeagueControlJSON::getEnabledLeagues(void)
  {
    assert(flagHasEnabledLeagues);
    return storeEnabledLeagues;
  }

const std::vector< SportsLeagueCodeJSON * > SportsLeagueControlJSON::getEnabledLeagues(void) const
  {
    assert(flagHasEnabledLeagues);
    return storeEnabledLeagues;
  }

bool SportsLeagueControlJSON::hasPreferredLeagues(void) const
  {
    return flagHasPreferredLeagues;
  }

size_t SportsLeagueControlJSON::countOfPreferredLeagues(void) const
  {
    assert(flagHasPreferredLeagues);
    return storePreferredLeagues.size();
  }

SportsLeagueCodeJSON * SportsLeagueControlJSON::elementOfPreferredLeagues(size_t element_num)
  {
    assert(flagHasPreferredLeagues);
    return storePreferredLeagues[element_num];
  }

const SportsLeagueCodeJSON * SportsLeagueControlJSON::elementOfPreferredLeagues(size_t element_num) const
  {
    assert(flagHasPreferredLeagues);
    return storePreferredLeagues[element_num];
  }

std::vector< SportsLeagueCodeJSON * > SportsLeagueControlJSON::getPreferredLeagues(void)
  {
    assert(flagHasPreferredLeagues);
    return storePreferredLeagues;
  }

const std::vector< SportsLeagueCodeJSON * > SportsLeagueControlJSON::getPreferredLeagues(void) const
  {
    assert(flagHasPreferredLeagues);
    return storePreferredLeagues;
  }

SportsLeagueControlJSON *SportsLeagueControlJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueControlJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueControlJSON>, SportsLeagueControlJSON *, bool> generator("Type SportsLeagueControl", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
