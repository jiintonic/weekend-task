/* file "SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON(const SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON &SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::extraSeasonToJSON(void) const
  {
    JSONValueHandler handler_Season;
    storeSeason->write_as_json(&handler_Season);
    handler_Season.result->add_reference();
    return handler_Season.result;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsSeasonJSON *convert_classy = SportsOlympicsSeasonJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON(void) :
        flagHasSeason(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::~SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON(void)
  {
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "Season";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsOlympicsSeasonJSON * SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsOlympicsSeasonJSON * SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

SportsOlympicsSeasonJSON::TypeValue SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::getSeasonValue(void)
  {
    return getSeason()->getValue();
  }

const SportsOlympicsSeasonJSON::TypeValue SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::getSeasonValue(void) const
  {
    return getSeason()->getValue();
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::getSeasonAsChars(void) const
  {
    return getSeason()->getValueAsChars();
  }

std::string SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::getSeasonAsString(void) const
  {
    return getSeason()->getValueAsString();
  }

SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON>, SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentSeason", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
