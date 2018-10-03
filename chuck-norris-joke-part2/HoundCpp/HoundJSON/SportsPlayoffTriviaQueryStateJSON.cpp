/* file "SportsPlayoffTriviaQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffTriviaQueryStateJSON.h"

#include "SportsPlayoffTriviaQueryStateJSON.h"


SportsPlayoffTriviaQueryStateJSON::SportsPlayoffTriviaQueryStateJSON(const SportsPlayoffTriviaQueryStateJSON &)
  {
    assert(false);
  }

SportsPlayoffTriviaQueryStateJSON &SportsPlayoffTriviaQueryStateJSON::operator=(const SportsPlayoffTriviaQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffTriviaQueryStateJSON::fromJSONQueryData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffTriviaInputDataJSON *convert_classy = SportsPlayoffTriviaInputDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQueryData(convert_classy);
    convert_classy->remove_reference();
  }

SportsPlayoffTriviaQueryStateJSON::SportsPlayoffTriviaQueryStateJSON(void) :
        flagHasQueryData(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffTriviaQueryStateJSON::~SportsPlayoffTriviaQueryStateJSON(void)
  {
    if (flagHasQueryData)
      {
        storeQueryData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayoffTriviaQueryStateJSON::hasQueryData(void) const
  {
    return flagHasQueryData;
  }

SportsPlayoffTriviaInputDataJSON * SportsPlayoffTriviaQueryStateJSON::getQueryData(void)
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

const SportsPlayoffTriviaInputDataJSON * SportsPlayoffTriviaQueryStateJSON::getQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

SportsPlayoffTriviaQueryStateJSON *SportsPlayoffTriviaQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffTriviaQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaQueryStateJSON>, SportsPlayoffTriviaQueryStateJSON *, bool> generator("Type SportsPlayoffTriviaQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
