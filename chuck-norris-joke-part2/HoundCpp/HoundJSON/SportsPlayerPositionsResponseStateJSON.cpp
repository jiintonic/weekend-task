/* file "SportsPlayerPositionsResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayerPositionsResponseStateJSON.h"

#include "SportsPlayerPositionsResponseStateJSON.h"


SportsPlayerPositionsResponseStateJSON::SportsPlayerPositionsResponseStateJSON(const SportsPlayerPositionsResponseStateJSON &)
  {
    assert(false);
  }

SportsPlayerPositionsResponseStateJSON &SportsPlayerPositionsResponseStateJSON::operator=(const SportsPlayerPositionsResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayerPositionsResponseStateJSON::fromJSONPlayerPositions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlayerPositions of SportsPlayerPositionsResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PlayerPositions of SportsPlayerPositionsResponseStateJSON has too few elements.");
    std::vector< SportsPlayerPositionJSON * > vector_PlayerPositions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayerPositionJSON *convert_classy = SportsPlayerPositionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PlayerPositions1[num1] = convert_classy;
      }
    assert(vector_PlayerPositions1.size() >= 1);
    initPlayerPositions();
    for (size_t num2 = 0; num2 < vector_PlayerPositions1.size(); ++num2)
        appendPlayerPositions(vector_PlayerPositions1[num2]);
    for (size_t num1 = 0; num1 < vector_PlayerPositions1.size(); ++num1)
      {
        vector_PlayerPositions1[num1]->remove_reference();
      }
  }

SportsPlayerPositionsResponseStateJSON::SportsPlayerPositionsResponseStateJSON(void) :
        flagHasPlayerPositions(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayerPositionsResponseStateJSON::~SportsPlayerPositionsResponseStateJSON(void)
  {
    if (flagHasPlayerPositions)
      {
        for (size_t num4 = 0; num4 < storePlayerPositions.size(); ++num4)
          {
            storePlayerPositions[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayerPositionsResponseStateJSON::hasPlayerPositions(void) const
  {
    return flagHasPlayerPositions;
  }

size_t SportsPlayerPositionsResponseStateJSON::countOfPlayerPositions(void) const
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions.size();
  }

SportsPlayerPositionJSON * SportsPlayerPositionsResponseStateJSON::elementOfPlayerPositions(size_t element_num)
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions[element_num];
  }

const SportsPlayerPositionJSON * SportsPlayerPositionsResponseStateJSON::elementOfPlayerPositions(size_t element_num) const
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions[element_num];
  }

std::vector< SportsPlayerPositionJSON * > SportsPlayerPositionsResponseStateJSON::getPlayerPositions(void)
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions;
  }

const std::vector< SportsPlayerPositionJSON * > SportsPlayerPositionsResponseStateJSON::getPlayerPositions(void) const
  {
    assert(flagHasPlayerPositions);
    return storePlayerPositions;
  }

SportsPlayerPositionsResponseStateJSON *SportsPlayerPositionsResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayerPositionsResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayerPositionsResponseStateJSON>, SportsPlayerPositionsResponseStateJSON *, bool> generator("Type SportsPlayerPositionsResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
