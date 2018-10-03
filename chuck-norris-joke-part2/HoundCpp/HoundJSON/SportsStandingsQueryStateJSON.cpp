/* file "SportsStandingsQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsQueryStateJSON.h"

#include "SportsStandingsQueryStateJSON.h"


SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::TypeQueryDataAndResultsJSON(const TypeQueryDataAndResultsJSON &)
  {
    assert(false);
  }

SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON &SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::operator=(const TypeQueryDataAndResultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStandingsQueryTypeJSON *convert_classy = SportsStandingsQueryTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQueryType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeam(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONTeamComparison(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeamComparison(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of TypeQueryDataAndResultsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of TypeQueryDataAndResultsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONArguments(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Arguments of TypeQueryDataAndResultsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Arguments of TypeQueryDataAndResultsJSON has too few elements.");
    std::vector< SportsStandingsArgumentArrayJSON * > vector_Arguments1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsStandingsArgumentArrayJSON *convert_classy = SportsStandingsArgumentArrayJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Arguments1[num1] = convert_classy;
      }
    assert(vector_Arguments1.size() >= 1);
    initArguments();
    for (size_t num3 = 0; num3 < vector_Arguments1.size(); ++num3)
        appendArguments(vector_Arguments1[num3]);
    for (size_t num1 = 0; num1 < vector_Arguments1.size(); ++num1)
      {
        vector_Arguments1[num1]->remove_reference();
      }
  }

SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::TypeQueryDataAndResultsJSON(void) :
        flagHasQueryType(false),
        flagHasDivision(false),
        flagHasLeague(false),
        flagHasTeam(false),
        flagHasTeamComparison(false),
        flagHasRank(false),
        flagHasArguments(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::~TypeQueryDataAndResultsJSON(void)
  {
    if (flagHasQueryType)
      {
        storeQueryType->remove_reference();
      }
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasTeam)
      {
        storeTeam->remove_reference();
      }
    if (flagHasTeamComparison)
      {
        storeTeamComparison->remove_reference();
      }
    if (flagHasArguments)
      {
        for (size_t num7 = 0; num7 < storeArguments.size(); ++num7)
          {
            storeArguments[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

SportsStandingsQueryTypeJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const SportsStandingsQueryTypeJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

SportsStandingsQueryTypeJSON::TypeValue SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getQueryTypeValue(void)
  {
    return getQueryType()->getValue();
  }

const SportsStandingsQueryTypeJSON::TypeValue SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getQueryTypeValue(void) const
  {
    return getQueryType()->getValue();
  }

const char *SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getQueryTypeAsChars(void) const
  {
    return getQueryType()->getValueAsChars();
  }

std::string SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getQueryTypeAsString(void) const
  {
    return getQueryType()->getValueAsString();
  }

bool SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::hasTeam(void) const
  {
    return flagHasTeam;
  }

SportsTeamNewJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getTeam(void)
  {
    assert(flagHasTeam);
    return storeTeam;
  }

const SportsTeamNewJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getTeam(void) const
  {
    assert(flagHasTeam);
    return storeTeam;
  }

bool SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::hasTeamComparison(void) const
  {
    return flagHasTeamComparison;
  }

SportsTeamNewJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getTeamComparison(void)
  {
    assert(flagHasTeamComparison);
    return storeTeamComparison;
  }

const SportsTeamNewJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getTeamComparison(void) const
  {
    assert(flagHasTeamComparison);
    return storeTeamComparison;
  }

bool SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::hasArguments(void) const
  {
    return flagHasArguments;
  }

size_t SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::countOfArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments.size();
  }

SportsStandingsArgumentArrayJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::elementOfArguments(size_t element_num)
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

const SportsStandingsArgumentArrayJSON * SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::elementOfArguments(size_t element_num) const
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

std::vector< SportsStandingsArgumentArrayJSON * > SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getArguments(void)
  {
    assert(flagHasArguments);
    return storeArguments;
  }

const std::vector< SportsStandingsArgumentArrayJSON * > SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::getArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments;
  }

SportsStandingsQueryStateJSON::SportsStandingsQueryStateJSON(const SportsStandingsQueryStateJSON &)
  {
    assert(false);
  }

SportsStandingsQueryStateJSON &SportsStandingsQueryStateJSON::operator=(const SportsStandingsQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsQueryStateJSON::fromJSONQueryDataAndResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryDataAndResults of SportsStandingsQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeQueryDataAndResultsJSON * > vector_QueryDataAndResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeQueryDataAndResultsJSON *convert_classy = TypeQueryDataAndResultsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryDataAndResults1[num1] = convert_classy;
      }
    initQueryDataAndResults();
    for (size_t num4 = 0; num4 < vector_QueryDataAndResults1.size(); ++num4)
        appendQueryDataAndResults(vector_QueryDataAndResults1[num4]);
    for (size_t num1 = 0; num1 < vector_QueryDataAndResults1.size(); ++num1)
      {
        vector_QueryDataAndResults1[num1]->remove_reference();
      }
  }

SportsStandingsQueryStateJSON::SportsStandingsQueryStateJSON(void) :
        flagHasQueryDataAndResults(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsQueryStateJSON::~SportsStandingsQueryStateJSON(void)
  {
    if (flagHasQueryDataAndResults)
      {
        for (size_t num10 = 0; num10 < storeQueryDataAndResults.size(); ++num10)
          {
            storeQueryDataAndResults[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsQueryStateJSON::hasQueryDataAndResults(void) const
  {
    return flagHasQueryDataAndResults;
  }

size_t SportsStandingsQueryStateJSON::countOfQueryDataAndResults(void) const
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults.size();
  }

SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON * SportsStandingsQueryStateJSON::elementOfQueryDataAndResults(size_t element_num)
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults[element_num];
  }

const SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON * SportsStandingsQueryStateJSON::elementOfQueryDataAndResults(size_t element_num) const
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults[element_num];
  }

std::vector< SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON * > SportsStandingsQueryStateJSON::getQueryDataAndResults(void)
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults;
  }

const std::vector< SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON * > SportsStandingsQueryStateJSON::getQueryDataAndResults(void) const
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults;
  }

char SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::Generator::lowerBoundRank[] = "1";
SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON *SportsStandingsQueryStateJSON::TypeQueryDataAndResultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeQueryDataAndResultsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeQueryDataAndResultsJSON>, TypeQueryDataAndResultsJSON *, bool> generator("Type TypeQueryDataAndResults", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStandingsQueryStateJSON *SportsStandingsQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsQueryStateJSON>, SportsStandingsQueryStateJSON *, bool> generator("Type SportsStandingsQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
