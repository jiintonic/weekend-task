/* file "SportsGameSchedulesScoresQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameSchedulesScoresQueryStateJSON.h"

#include "SportsGameSchedulesScoresQueryStateJSON.h"


SportsGameSchedulesScoresQueryStateJSON::SportsGameSchedulesScoresQueryStateJSON(const SportsGameSchedulesScoresQueryStateJSON &)
  {
    assert(false);
  }

SportsGameSchedulesScoresQueryStateJSON &SportsGameSchedulesScoresQueryStateJSON::operator=(const SportsGameSchedulesScoresQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGameSchedulesScoresQueryStateJSON::fromJSONSportsInputData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsInputDataJSON *convert_classy = SportsInputDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportsInputData(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameSchedulesScoresQueryStateJSON::fromJSONResponseGameTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResponseGameTime(convert_classy);
    convert_classy->remove_reference();
  }

SportsGameSchedulesScoresQueryStateJSON::SportsGameSchedulesScoresQueryStateJSON(void) :
        flagHasSportsInputData(false),
        flagHasResponseGameTime(false)
  {
    extraIndex = create_string_index();
  }

SportsGameSchedulesScoresQueryStateJSON::~SportsGameSchedulesScoresQueryStateJSON(void)
  {
    if (flagHasSportsInputData)
      {
        storeSportsInputData->remove_reference();
      }
    if (flagHasResponseGameTime)
      {
        storeResponseGameTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsGameSchedulesScoresQueryStateJSON::hasSportsInputData(void) const
  {
    return flagHasSportsInputData;
  }

SportsInputDataJSON * SportsGameSchedulesScoresQueryStateJSON::getSportsInputData(void)
  {
    assert(flagHasSportsInputData);
    return storeSportsInputData;
  }

const SportsInputDataJSON * SportsGameSchedulesScoresQueryStateJSON::getSportsInputData(void) const
  {
    assert(flagHasSportsInputData);
    return storeSportsInputData;
  }

bool SportsGameSchedulesScoresQueryStateJSON::hasResponseGameTime(void) const
  {
    return flagHasResponseGameTime;
  }

DateAndOrTimeJSON * SportsGameSchedulesScoresQueryStateJSON::getResponseGameTime(void)
  {
    assert(flagHasResponseGameTime);
    return storeResponseGameTime;
  }

const DateAndOrTimeJSON * SportsGameSchedulesScoresQueryStateJSON::getResponseGameTime(void) const
  {
    assert(flagHasResponseGameTime);
    return storeResponseGameTime;
  }

SportsGameSchedulesScoresQueryStateJSON *SportsGameSchedulesScoresQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameSchedulesScoresQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresQueryStateJSON>, SportsGameSchedulesScoresQueryStateJSON *, bool> generator("Type SportsGameSchedulesScoresQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
