/* file "SportsOlympicsMedalStandingsArgumentSortMethodJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentSortMethodJSON.h"

#include "SportsOlympicsMedalStandingsArgumentSortMethodJSON.h"


SportsOlympicsMedalStandingsArgumentSortMethodJSON::SportsOlympicsMedalStandingsArgumentSortMethodJSON(const SportsOlympicsMedalStandingsArgumentSortMethodJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentSortMethodJSON &SportsOlympicsMedalStandingsArgumentSortMethodJSON::operator=(const SportsOlympicsMedalStandingsArgumentSortMethodJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsArgumentSortMethodJSON::extraSortMethodToJSON(void) const
  {
    JSONValueHandler handler_SortMethod;
    storeSortMethod->write_as_json(&handler_SortMethod);
    handler_SortMethod.result->add_reference();
    return handler_SortMethod.result;
  }

void SportsOlympicsMedalStandingsArgumentSortMethodJSON::fromJSONSortMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalStandingsSortMethodJSON *convert_classy = SportsOlympicsMedalStandingsSortMethodJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSortMethod(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsMedalStandingsArgumentSortMethodJSON::SportsOlympicsMedalStandingsArgumentSortMethodJSON(void) :
        flagHasSortMethod(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentSortMethodJSON::~SportsOlympicsMedalStandingsArgumentSortMethodJSON(void)
  {
    if (flagHasSortMethod)
      {
        storeSortMethod->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsArgumentSortMethodJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "SortMethod";
  }

bool SportsOlympicsMedalStandingsArgumentSortMethodJSON::hasSortMethod(void) const
  {
    return flagHasSortMethod;
  }

SportsOlympicsMedalStandingsSortMethodJSON * SportsOlympicsMedalStandingsArgumentSortMethodJSON::getSortMethod(void)
  {
    assert(flagHasSortMethod);
    return storeSortMethod;
  }

const SportsOlympicsMedalStandingsSortMethodJSON * SportsOlympicsMedalStandingsArgumentSortMethodJSON::getSortMethod(void) const
  {
    assert(flagHasSortMethod);
    return storeSortMethod;
  }

SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsArgumentSortMethodJSON::getSortMethodValue(void)
  {
    return getSortMethod()->getValue();
  }

const SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsArgumentSortMethodJSON::getSortMethodValue(void) const
  {
    return getSortMethod()->getValue();
  }

const char *SportsOlympicsMedalStandingsArgumentSortMethodJSON::getSortMethodAsChars(void) const
  {
    return getSortMethod()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsArgumentSortMethodJSON::getSortMethodAsString(void) const
  {
    return getSortMethod()->getValueAsString();
  }

SportsOlympicsMedalStandingsArgumentSortMethodJSON *SportsOlympicsMedalStandingsArgumentSortMethodJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentSortMethodJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentSortMethodJSON>, SportsOlympicsMedalStandingsArgumentSortMethodJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentSortMethod", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
