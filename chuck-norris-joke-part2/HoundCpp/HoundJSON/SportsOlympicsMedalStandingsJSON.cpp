/* file "SportsOlympicsMedalStandingsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsJSON.h"

#include "SportsOlympicsMedalStandingsJSON.h"


SportsOlympicsMedalStandingsJSON::SportsOlympicsMedalStandingsJSON(const SportsOlympicsMedalStandingsJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsJSON &SportsOlympicsMedalStandingsJSON::operator=(const SportsOlympicsMedalStandingsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalStandingsJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsGamesJSON *convert_classy = SportsOlympicsGamesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGames(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsJSON::fromJSONStandings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Standings of SportsOlympicsMedalStandingsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsMedalStandingsOrganizationMedalCountJSON * > vector_Standings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsMedalStandingsOrganizationMedalCountJSON *convert_classy = SportsOlympicsMedalStandingsOrganizationMedalCountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Standings1[num1] = convert_classy;
      }
    initStandings();
    for (size_t num2 = 0; num2 < vector_Standings1.size(); ++num2)
        appendStandings(vector_Standings1[num2]);
    for (size_t num1 = 0; num1 < vector_Standings1.size(); ++num1)
      {
        vector_Standings1[num1]->remove_reference();
      }
  }

void SportsOlympicsMedalStandingsJSON::fromJSONSortMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalStandingsSortMethodJSON *convert_classy = SportsOlympicsMedalStandingsSortMethodJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSortMethod(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsJSON::fromJSONIsAbridged(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsAbridged of SportsOlympicsMedalStandingsJSON is not true for false.");
          }
      }
    setIsAbridged(the_bool);
  }

void SportsOlympicsMedalStandingsJSON::fromJSONAbridgedMaximumRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AbridgedMaximumRank of SportsOlympicsMedalStandingsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AbridgedMaximumRank of SportsOlympicsMedalStandingsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAbridgedMaximumRank(extracted_integer);
  }

SportsOlympicsMedalStandingsJSON::SportsOlympicsMedalStandingsJSON(void) :
        flagHasGames(false),
        flagHasStandings(false),
        flagHasSortMethod(false),
        flagHasIsAbridged(false),
        flagHasAbridgedMaximumRank(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsJSON::~SportsOlympicsMedalStandingsJSON(void)
  {
    if (flagHasGames)
      {
        storeGames->remove_reference();
      }
    if (flagHasStandings)
      {
        for (size_t num4 = 0; num4 < storeStandings.size(); ++num4)
          {
            storeStandings[num4]->remove_reference();
          }
      }
    if (flagHasSortMethod)
      {
        storeSortMethod->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsMedalStandingsJSON::hasGames(void) const
  {
    return flagHasGames;
  }

SportsOlympicsGamesJSON * SportsOlympicsMedalStandingsJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const SportsOlympicsGamesJSON * SportsOlympicsMedalStandingsJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

bool SportsOlympicsMedalStandingsJSON::hasStandings(void) const
  {
    return flagHasStandings;
  }

size_t SportsOlympicsMedalStandingsJSON::countOfStandings(void) const
  {
    assert(flagHasStandings);
    return storeStandings.size();
  }

SportsOlympicsMedalStandingsOrganizationMedalCountJSON * SportsOlympicsMedalStandingsJSON::elementOfStandings(size_t element_num)
  {
    assert(flagHasStandings);
    return storeStandings[element_num];
  }

const SportsOlympicsMedalStandingsOrganizationMedalCountJSON * SportsOlympicsMedalStandingsJSON::elementOfStandings(size_t element_num) const
  {
    assert(flagHasStandings);
    return storeStandings[element_num];
  }

std::vector< SportsOlympicsMedalStandingsOrganizationMedalCountJSON * > SportsOlympicsMedalStandingsJSON::getStandings(void)
  {
    assert(flagHasStandings);
    return storeStandings;
  }

const std::vector< SportsOlympicsMedalStandingsOrganizationMedalCountJSON * > SportsOlympicsMedalStandingsJSON::getStandings(void) const
  {
    assert(flagHasStandings);
    return storeStandings;
  }

bool SportsOlympicsMedalStandingsJSON::hasSortMethod(void) const
  {
    return flagHasSortMethod;
  }

SportsOlympicsMedalStandingsSortMethodJSON * SportsOlympicsMedalStandingsJSON::getSortMethod(void)
  {
    assert(flagHasSortMethod);
    return storeSortMethod;
  }

const SportsOlympicsMedalStandingsSortMethodJSON * SportsOlympicsMedalStandingsJSON::getSortMethod(void) const
  {
    assert(flagHasSortMethod);
    return storeSortMethod;
  }

SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsJSON::getSortMethodValue(void)
  {
    return getSortMethod()->getValue();
  }

const SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsJSON::getSortMethodValue(void) const
  {
    return getSortMethod()->getValue();
  }

const char *SportsOlympicsMedalStandingsJSON::getSortMethodAsChars(void) const
  {
    return getSortMethod()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsJSON::getSortMethodAsString(void) const
  {
    return getSortMethod()->getValueAsString();
  }

bool SportsOlympicsMedalStandingsJSON::hasIsAbridged(void) const
  {
    return flagHasIsAbridged;
  }

bool SportsOlympicsMedalStandingsJSON::getIsAbridged(void)
  {
    assert(flagHasIsAbridged);
    return storeIsAbridged;
  }

const bool SportsOlympicsMedalStandingsJSON::getIsAbridged(void) const
  {
    assert(flagHasIsAbridged);
    return storeIsAbridged;
  }

bool SportsOlympicsMedalStandingsJSON::hasAbridgedMaximumRank(void) const
  {
    return flagHasAbridgedMaximumRank;
  }

OInteger SportsOlympicsMedalStandingsJSON::getAbridgedMaximumRank(void)
  {
    assert(flagHasAbridgedMaximumRank);
    return storeAbridgedMaximumRank;
  }

const OInteger SportsOlympicsMedalStandingsJSON::getAbridgedMaximumRank(void) const
  {
    assert(flagHasAbridgedMaximumRank);
    return storeAbridgedMaximumRank;
  }

char SportsOlympicsMedalStandingsJSON::Generator::lowerBoundAbridgedMaximumRank[] = "1";
SportsOlympicsMedalStandingsJSON *SportsOlympicsMedalStandingsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsJSON>, SportsOlympicsMedalStandingsJSON *, bool> generator("Type SportsOlympicsMedalStandings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
