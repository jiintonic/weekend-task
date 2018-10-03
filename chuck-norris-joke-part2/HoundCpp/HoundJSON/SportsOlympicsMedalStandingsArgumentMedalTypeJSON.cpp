/* file "SportsOlympicsMedalStandingsArgumentMedalTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentMedalTypeJSON.h"

#include "SportsOlympicsMedalStandingsArgumentMedalTypeJSON.h"


SportsOlympicsMedalStandingsArgumentMedalTypeJSON::SportsOlympicsMedalStandingsArgumentMedalTypeJSON(const SportsOlympicsMedalStandingsArgumentMedalTypeJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentMedalTypeJSON &SportsOlympicsMedalStandingsArgumentMedalTypeJSON::operator=(const SportsOlympicsMedalStandingsArgumentMedalTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsArgumentMedalTypeJSON::extraMedalTypeToJSON(void) const
  {
    JSONValueHandler handler_MedalType;
    storeMedalType->write_as_json(&handler_MedalType);
    handler_MedalType.result->add_reference();
    return handler_MedalType.result;
  }

void SportsOlympicsMedalStandingsArgumentMedalTypeJSON::fromJSONMedalType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalJSON *convert_classy = SportsOlympicsMedalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMedalType(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsMedalStandingsArgumentMedalTypeJSON::SportsOlympicsMedalStandingsArgumentMedalTypeJSON(void) :
        flagHasMedalType(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentMedalTypeJSON::~SportsOlympicsMedalStandingsArgumentMedalTypeJSON(void)
  {
    if (flagHasMedalType)
      {
        storeMedalType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsArgumentMedalTypeJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "MedalType";
  }

bool SportsOlympicsMedalStandingsArgumentMedalTypeJSON::hasMedalType(void) const
  {
    return flagHasMedalType;
  }

SportsOlympicsMedalJSON * SportsOlympicsMedalStandingsArgumentMedalTypeJSON::getMedalType(void)
  {
    assert(flagHasMedalType);
    return storeMedalType;
  }

const SportsOlympicsMedalJSON * SportsOlympicsMedalStandingsArgumentMedalTypeJSON::getMedalType(void) const
  {
    assert(flagHasMedalType);
    return storeMedalType;
  }

SportsOlympicsMedalJSON::TypeValue SportsOlympicsMedalStandingsArgumentMedalTypeJSON::getMedalTypeValue(void)
  {
    return getMedalType()->getValue();
  }

const SportsOlympicsMedalJSON::TypeValue SportsOlympicsMedalStandingsArgumentMedalTypeJSON::getMedalTypeValue(void) const
  {
    return getMedalType()->getValue();
  }

const char *SportsOlympicsMedalStandingsArgumentMedalTypeJSON::getMedalTypeAsChars(void) const
  {
    return getMedalType()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsArgumentMedalTypeJSON::getMedalTypeAsString(void) const
  {
    return getMedalType()->getValueAsString();
  }

SportsOlympicsMedalStandingsArgumentMedalTypeJSON *SportsOlympicsMedalStandingsArgumentMedalTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentMedalTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentMedalTypeJSON>, SportsOlympicsMedalStandingsArgumentMedalTypeJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentMedalType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
