/* file "SportsSeasonsResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsSeasonsResponseStateJSON.h"

#include "SportsSeasonsResponseStateJSON.h"


SportsSeasonsResponseStateJSON::SportsSeasonsResponseStateJSON(const SportsSeasonsResponseStateJSON &)
  {
    assert(false);
  }

SportsSeasonsResponseStateJSON &SportsSeasonsResponseStateJSON::operator=(const SportsSeasonsResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsSeasonsResponseStateJSON::fromJSONSeasons(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Seasons of SportsSeasonsResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Seasons of SportsSeasonsResponseStateJSON has too few elements.");
    std::vector< SportsSeasonResolvedJSON * > vector_Seasons1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Seasons1[num1] = convert_classy;
      }
    assert(vector_Seasons1.size() >= 1);
    initSeasons();
    for (size_t num2 = 0; num2 < vector_Seasons1.size(); ++num2)
        appendSeasons(vector_Seasons1[num2]);
    for (size_t num1 = 0; num1 < vector_Seasons1.size(); ++num1)
      {
        vector_Seasons1[num1]->remove_reference();
      }
  }

SportsSeasonsResponseStateJSON::SportsSeasonsResponseStateJSON(void) :
        flagHasSeasons(false)
  {
    extraIndex = create_string_index();
  }

SportsSeasonsResponseStateJSON::~SportsSeasonsResponseStateJSON(void)
  {
    if (flagHasSeasons)
      {
        for (size_t num4 = 0; num4 < storeSeasons.size(); ++num4)
          {
            storeSeasons[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsSeasonsResponseStateJSON::hasSeasons(void) const
  {
    return flagHasSeasons;
  }

size_t SportsSeasonsResponseStateJSON::countOfSeasons(void) const
  {
    assert(flagHasSeasons);
    return storeSeasons.size();
  }

SportsSeasonResolvedJSON * SportsSeasonsResponseStateJSON::elementOfSeasons(size_t element_num)
  {
    assert(flagHasSeasons);
    return storeSeasons[element_num];
  }

const SportsSeasonResolvedJSON * SportsSeasonsResponseStateJSON::elementOfSeasons(size_t element_num) const
  {
    assert(flagHasSeasons);
    return storeSeasons[element_num];
  }

std::vector< SportsSeasonResolvedJSON * > SportsSeasonsResponseStateJSON::getSeasons(void)
  {
    assert(flagHasSeasons);
    return storeSeasons;
  }

const std::vector< SportsSeasonResolvedJSON * > SportsSeasonsResponseStateJSON::getSeasons(void) const
  {
    assert(flagHasSeasons);
    return storeSeasons;
  }

SportsSeasonsResponseStateJSON *SportsSeasonsResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsSeasonsResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsSeasonsResponseStateJSON>, SportsSeasonsResponseStateJSON *, bool> generator("Type SportsSeasonsResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
