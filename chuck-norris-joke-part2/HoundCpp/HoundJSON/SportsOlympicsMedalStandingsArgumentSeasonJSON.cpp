/* file "SportsOlympicsMedalStandingsArgumentSeasonJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentSeasonJSON.h"

#include "SportsOlympicsMedalStandingsArgumentSeasonJSON.h"


SportsOlympicsMedalStandingsArgumentSeasonJSON::SportsOlympicsMedalStandingsArgumentSeasonJSON(const SportsOlympicsMedalStandingsArgumentSeasonJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentSeasonJSON &SportsOlympicsMedalStandingsArgumentSeasonJSON::operator=(const SportsOlympicsMedalStandingsArgumentSeasonJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsArgumentSeasonJSON::extraSeasonToJSON(void) const
  {
    JSONValueHandler handler_Season;
    storeSeason->write_as_json(&handler_Season);
    handler_Season.result->add_reference();
    return handler_Season.result;
  }

void SportsOlympicsMedalStandingsArgumentSeasonJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsSeasonJSON *convert_classy = SportsOlympicsSeasonJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsMedalStandingsArgumentSeasonJSON::SportsOlympicsMedalStandingsArgumentSeasonJSON(void) :
        flagHasSeason(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentSeasonJSON::~SportsOlympicsMedalStandingsArgumentSeasonJSON(void)
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

const char *SportsOlympicsMedalStandingsArgumentSeasonJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "Season";
  }

bool SportsOlympicsMedalStandingsArgumentSeasonJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsOlympicsSeasonJSON * SportsOlympicsMedalStandingsArgumentSeasonJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsOlympicsSeasonJSON * SportsOlympicsMedalStandingsArgumentSeasonJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

SportsOlympicsSeasonJSON::TypeValue SportsOlympicsMedalStandingsArgumentSeasonJSON::getSeasonValue(void)
  {
    return getSeason()->getValue();
  }

const SportsOlympicsSeasonJSON::TypeValue SportsOlympicsMedalStandingsArgumentSeasonJSON::getSeasonValue(void) const
  {
    return getSeason()->getValue();
  }

const char *SportsOlympicsMedalStandingsArgumentSeasonJSON::getSeasonAsChars(void) const
  {
    return getSeason()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsArgumentSeasonJSON::getSeasonAsString(void) const
  {
    return getSeason()->getValueAsString();
  }

SportsOlympicsMedalStandingsArgumentSeasonJSON *SportsOlympicsMedalStandingsArgumentSeasonJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentSeasonJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentSeasonJSON>, SportsOlympicsMedalStandingsArgumentSeasonJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentSeason", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
