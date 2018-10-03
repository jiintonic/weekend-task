/* file "SportsPlayoffTriviaRanksJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffTriviaRanksJSON.h"

#include "SportsPlayoffTriviaRanksJSON.h"


SportsPlayoffTriviaRanksJSON::SportsPlayoffTriviaRanksJSON(const SportsPlayoffTriviaRanksJSON &)
  {
    assert(false);
  }

SportsPlayoffTriviaRanksJSON &SportsPlayoffTriviaRanksJSON::operator=(const SportsPlayoffTriviaRanksJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffTriviaRanksJSON::fromJSONTeamsAndRanks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TeamsAndRanks of SportsPlayoffTriviaRanksJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsTeamAndRankJSON * > vector_TeamsAndRanks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamAndRankJSON *convert_classy = SportsTeamAndRankJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_TeamsAndRanks1[num1] = convert_classy;
      }
    initTeamsAndRanks();
    for (size_t num2 = 0; num2 < vector_TeamsAndRanks1.size(); ++num2)
        appendTeamsAndRanks(vector_TeamsAndRanks1[num2]);
    for (size_t num1 = 0; num1 < vector_TeamsAndRanks1.size(); ++num1)
      {
        vector_TeamsAndRanks1[num1]->remove_reference();
      }
  }

void SportsPlayoffTriviaRanksJSON::fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSpecialGameType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayoffTriviaRanksJSON::fromJSONSortOrderReversed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SortOrderReversed of SportsPlayoffTriviaRanksJSON is not true for false.");
          }
      }
    setSortOrderReversed(the_bool);
  }

SportsPlayoffTriviaRanksJSON::SportsPlayoffTriviaRanksJSON(void) :
        flagHasTeamsAndRanks(false),
        flagHasSpecialGameType(false),
        flagHasSortOrderReversed(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffTriviaRanksJSON::~SportsPlayoffTriviaRanksJSON(void)
  {
    if (flagHasTeamsAndRanks)
      {
        for (size_t num4 = 0; num4 < storeTeamsAndRanks.size(); ++num4)
          {
            storeTeamsAndRanks[num4]->remove_reference();
          }
      }
    if (flagHasSpecialGameType)
      {
        storeSpecialGameType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayoffTriviaRanksJSON::hasTeamsAndRanks(void) const
  {
    return flagHasTeamsAndRanks;
  }

size_t SportsPlayoffTriviaRanksJSON::countOfTeamsAndRanks(void) const
  {
    assert(flagHasTeamsAndRanks);
    return storeTeamsAndRanks.size();
  }

SportsTeamAndRankJSON * SportsPlayoffTriviaRanksJSON::elementOfTeamsAndRanks(size_t element_num)
  {
    assert(flagHasTeamsAndRanks);
    return storeTeamsAndRanks[element_num];
  }

const SportsTeamAndRankJSON * SportsPlayoffTriviaRanksJSON::elementOfTeamsAndRanks(size_t element_num) const
  {
    assert(flagHasTeamsAndRanks);
    return storeTeamsAndRanks[element_num];
  }

std::vector< SportsTeamAndRankJSON * > SportsPlayoffTriviaRanksJSON::getTeamsAndRanks(void)
  {
    assert(flagHasTeamsAndRanks);
    return storeTeamsAndRanks;
  }

const std::vector< SportsTeamAndRankJSON * > SportsPlayoffTriviaRanksJSON::getTeamsAndRanks(void) const
  {
    assert(flagHasTeamsAndRanks);
    return storeTeamsAndRanks;
  }

bool SportsPlayoffTriviaRanksJSON::hasSpecialGameType(void) const
  {
    return flagHasSpecialGameType;
  }

SportsPlayoffSpecialGameJSON * SportsPlayoffTriviaRanksJSON::getSpecialGameType(void)
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

const SportsPlayoffSpecialGameJSON * SportsPlayoffTriviaRanksJSON::getSpecialGameType(void) const
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffTriviaRanksJSON::getSpecialGameTypeValue(void)
  {
    return getSpecialGameType()->getValue();
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffTriviaRanksJSON::getSpecialGameTypeValue(void) const
  {
    return getSpecialGameType()->getValue();
  }

const char *SportsPlayoffTriviaRanksJSON::getSpecialGameTypeAsChars(void) const
  {
    return getSpecialGameType()->getValueAsChars();
  }

std::string SportsPlayoffTriviaRanksJSON::getSpecialGameTypeAsString(void) const
  {
    return getSpecialGameType()->getValueAsString();
  }

bool SportsPlayoffTriviaRanksJSON::hasSortOrderReversed(void) const
  {
    return flagHasSortOrderReversed;
  }

bool SportsPlayoffTriviaRanksJSON::getSortOrderReversed(void)
  {
    assert(flagHasSortOrderReversed);
    return storeSortOrderReversed;
  }

const bool SportsPlayoffTriviaRanksJSON::getSortOrderReversed(void) const
  {
    assert(flagHasSortOrderReversed);
    return storeSortOrderReversed;
  }

SportsPlayoffTriviaRanksJSON *SportsPlayoffTriviaRanksJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffTriviaRanksJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaRanksJSON>, SportsPlayoffTriviaRanksJSON *, bool> generator("Type SportsPlayoffTriviaRanks", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
