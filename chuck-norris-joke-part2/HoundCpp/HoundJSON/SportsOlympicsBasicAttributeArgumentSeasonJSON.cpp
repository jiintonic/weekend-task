/* file "SportsOlympicsBasicAttributeArgumentSeasonJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeArgumentSeasonJSON.h"

#include "SportsOlympicsBasicAttributeArgumentSeasonJSON.h"


SportsOlympicsBasicAttributeArgumentSeasonJSON::SportsOlympicsBasicAttributeArgumentSeasonJSON(const SportsOlympicsBasicAttributeArgumentSeasonJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeArgumentSeasonJSON &SportsOlympicsBasicAttributeArgumentSeasonJSON::operator=(const SportsOlympicsBasicAttributeArgumentSeasonJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsBasicAttributeArgumentSeasonJSON::extraSeasonToJSON(void) const
  {
    JSONValueHandler handler_Season;
    storeSeason->write_as_json(&handler_Season);
    handler_Season.result->add_reference();
    return handler_Season.result;
  }

void SportsOlympicsBasicAttributeArgumentSeasonJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsSeasonJSON *convert_classy = SportsOlympicsSeasonJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsBasicAttributeArgumentSeasonJSON::SportsOlympicsBasicAttributeArgumentSeasonJSON(void) :
        flagHasSeason(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeArgumentSeasonJSON::~SportsOlympicsBasicAttributeArgumentSeasonJSON(void)
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

const char *SportsOlympicsBasicAttributeArgumentSeasonJSON::getSportsOlympicsBasicAttributeArgumentKind(void) const
  {
    return "Season";
  }

bool SportsOlympicsBasicAttributeArgumentSeasonJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsOlympicsSeasonJSON * SportsOlympicsBasicAttributeArgumentSeasonJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsOlympicsSeasonJSON * SportsOlympicsBasicAttributeArgumentSeasonJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

SportsOlympicsSeasonJSON::TypeValue SportsOlympicsBasicAttributeArgumentSeasonJSON::getSeasonValue(void)
  {
    return getSeason()->getValue();
  }

const SportsOlympicsSeasonJSON::TypeValue SportsOlympicsBasicAttributeArgumentSeasonJSON::getSeasonValue(void) const
  {
    return getSeason()->getValue();
  }

const char *SportsOlympicsBasicAttributeArgumentSeasonJSON::getSeasonAsChars(void) const
  {
    return getSeason()->getValueAsChars();
  }

std::string SportsOlympicsBasicAttributeArgumentSeasonJSON::getSeasonAsString(void) const
  {
    return getSeason()->getValueAsString();
  }

SportsOlympicsBasicAttributeArgumentSeasonJSON *SportsOlympicsBasicAttributeArgumentSeasonJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeArgumentSeasonJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentSeasonJSON>, SportsOlympicsBasicAttributeArgumentSeasonJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentSeason", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
