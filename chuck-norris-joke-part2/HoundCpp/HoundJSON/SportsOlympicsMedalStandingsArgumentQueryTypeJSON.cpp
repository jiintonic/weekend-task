/* file "SportsOlympicsMedalStandingsArgumentQueryTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentQueryTypeJSON.h"

#include "SportsOlympicsMedalStandingsArgumentQueryTypeJSON.h"


SportsOlympicsMedalStandingsArgumentQueryTypeJSON::SportsOlympicsMedalStandingsArgumentQueryTypeJSON(const SportsOlympicsMedalStandingsArgumentQueryTypeJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentQueryTypeJSON &SportsOlympicsMedalStandingsArgumentQueryTypeJSON::operator=(const SportsOlympicsMedalStandingsArgumentQueryTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsArgumentQueryTypeJSON::extraTypeToJSON(void) const
  {
    JSONValueHandler handler_Type;
    storeType->write_as_json(&handler_Type);
    handler_Type.result->add_reference();
    return handler_Type.result;
  }

void SportsOlympicsMedalStandingsArgumentQueryTypeJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalStandingsQueryTypeJSON *convert_classy = SportsOlympicsMedalStandingsQueryTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsMedalStandingsArgumentQueryTypeJSON::SportsOlympicsMedalStandingsArgumentQueryTypeJSON(void) :
        flagHasType(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentQueryTypeJSON::~SportsOlympicsMedalStandingsArgumentQueryTypeJSON(void)
  {
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsArgumentQueryTypeJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "QueryType";
  }

bool SportsOlympicsMedalStandingsArgumentQueryTypeJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsOlympicsMedalStandingsQueryTypeJSON * SportsOlympicsMedalStandingsArgumentQueryTypeJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsOlympicsMedalStandingsQueryTypeJSON * SportsOlympicsMedalStandingsArgumentQueryTypeJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue SportsOlympicsMedalStandingsArgumentQueryTypeJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue SportsOlympicsMedalStandingsArgumentQueryTypeJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsOlympicsMedalStandingsArgumentQueryTypeJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsArgumentQueryTypeJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

SportsOlympicsMedalStandingsArgumentQueryTypeJSON *SportsOlympicsMedalStandingsArgumentQueryTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentQueryTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentQueryTypeJSON>, SportsOlympicsMedalStandingsArgumentQueryTypeJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentQueryType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
