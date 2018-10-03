/* file "SportsTeamsResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsTeamsResponseStateJSON.h"

#include "SportsTeamsResponseStateJSON.h"


SportsTeamsResponseStateJSON::SportsTeamsResponseStateJSON(const SportsTeamsResponseStateJSON &)
  {
    assert(false);
  }

SportsTeamsResponseStateJSON &SportsTeamsResponseStateJSON::operator=(const SportsTeamsResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsTeamsResponseStateJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsTeamsResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Teams of SportsTeamsResponseStateJSON has too few elements.");
    std::vector< SportsTeamNewJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 1);
    initTeams();
    for (size_t num2 = 0; num2 < vector_Teams1.size(); ++num2)
        appendTeams(vector_Teams1[num2]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

SportsTeamsResponseStateJSON::SportsTeamsResponseStateJSON(void) :
        flagHasTeams(false)
  {
    extraIndex = create_string_index();
  }

SportsTeamsResponseStateJSON::~SportsTeamsResponseStateJSON(void)
  {
    if (flagHasTeams)
      {
        for (size_t num4 = 0; num4 < storeTeams.size(); ++num4)
          {
            storeTeams[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsTeamsResponseStateJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsTeamsResponseStateJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamNewJSON * SportsTeamsResponseStateJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamNewJSON * SportsTeamsResponseStateJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamNewJSON * > SportsTeamsResponseStateJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamNewJSON * > SportsTeamsResponseStateJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

SportsTeamsResponseStateJSON *SportsTeamsResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsTeamsResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsTeamsResponseStateJSON>, SportsTeamsResponseStateJSON *, bool> generator("Type SportsTeamsResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
