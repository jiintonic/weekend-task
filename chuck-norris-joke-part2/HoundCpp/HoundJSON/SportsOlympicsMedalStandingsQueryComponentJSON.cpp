/* file "SportsOlympicsMedalStandingsQueryComponentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsQueryComponentJSON.h"

#include "SportsOlympicsMedalStandingsQueryComponentJSON.h"


SportsOlympicsMedalStandingsQueryComponentJSON::SportsOlympicsMedalStandingsQueryComponentJSON(const SportsOlympicsMedalStandingsQueryComponentJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsQueryComponentJSON &SportsOlympicsMedalStandingsQueryComponentJSON::operator=(const SportsOlympicsMedalStandingsQueryComponentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalStandingsQueryTypeJSON *convert_classy = SportsOlympicsMedalStandingsQueryTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQueryType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONOrganization(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsOrganizationJSON *convert_classy = SportsOlympicsOrganizationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOrganization(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONMedalType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalJSON *convert_classy = SportsOlympicsMedalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMedalType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsOlympicsMedalStandingsQueryComponentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsOlympicsMedalStandingsQueryComponentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONRankResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RankResult of SportsOlympicsMedalStandingsQueryComponentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RankResult of SportsOlympicsMedalStandingsQueryComponentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRankResult(extracted_integer);
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsGamesJSON *convert_classy = SportsOlympicsGamesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGames(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONSortMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalStandingsSortMethodJSON *convert_classy = SportsOlympicsMedalStandingsSortMethodJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSortMethod(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONStandingsIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StandingsIndex of SportsOlympicsMedalStandingsQueryComponentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StandingsIndex of SportsOlympicsMedalStandingsQueryComponentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStandingsIndex(extracted_integer);
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONOrganizationIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OrganizationIndices of SportsOlympicsMedalStandingsQueryComponentJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_OrganizationIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field OrganizationIndices of SportsOlympicsMedalStandingsQueryComponentJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field OrganizationIndices of SportsOlympicsMedalStandingsQueryComponentJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_OrganizationIndices1[num1] = extracted_integer;
      }
    initOrganizationIndices();
    for (size_t num2 = 0; num2 < vector_OrganizationIndices1.size(); ++num2)
        appendOrganizationIndices(vector_OrganizationIndices1[num2]);
    for (size_t num1 = 0; num1 < vector_OrganizationIndices1.size(); ++num1)
      {
      }
  }

void SportsOlympicsMedalStandingsQueryComponentJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsMedalStandingsErrorJSON *convert_classy = SportsOlympicsMedalStandingsErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setError(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsMedalStandingsQueryComponentJSON::SportsOlympicsMedalStandingsQueryComponentJSON(void) :
        flagHasQueryType(false),
        flagHasOrganization(false),
        flagHasMedalType(false),
        flagHasRank(false),
        flagHasRankResult(false),
        flagHasGames(false),
        flagHasSortMethod(false),
        flagHasStandingsIndex(false),
        flagHasOrganizationIndices(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsQueryComponentJSON::~SportsOlympicsMedalStandingsQueryComponentJSON(void)
  {
    if (flagHasQueryType)
      {
        storeQueryType->remove_reference();
      }
    if (flagHasOrganization)
      {
        storeOrganization->remove_reference();
      }
    if (flagHasMedalType)
      {
        storeMedalType->remove_reference();
      }
    if (flagHasGames)
      {
        storeGames->remove_reference();
      }
    if (flagHasSortMethod)
      {
        storeSortMethod->remove_reference();
      }
    if (flagHasError)
      {
        storeError->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

SportsOlympicsMedalStandingsQueryTypeJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const SportsOlympicsMedalStandingsQueryTypeJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getQueryTypeValue(void)
  {
    return getQueryType()->getValue();
  }

const SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getQueryTypeValue(void) const
  {
    return getQueryType()->getValue();
  }

const char *SportsOlympicsMedalStandingsQueryComponentJSON::getQueryTypeAsChars(void) const
  {
    return getQueryType()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsQueryComponentJSON::getQueryTypeAsString(void) const
  {
    return getQueryType()->getValueAsString();
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasOrganization(void) const
  {
    return flagHasOrganization;
  }

SportsOlympicsOrganizationJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getOrganization(void)
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

const SportsOlympicsOrganizationJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getOrganization(void) const
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasMedalType(void) const
  {
    return flagHasMedalType;
  }

SportsOlympicsMedalJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getMedalType(void)
  {
    assert(flagHasMedalType);
    return storeMedalType;
  }

const SportsOlympicsMedalJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getMedalType(void) const
  {
    assert(flagHasMedalType);
    return storeMedalType;
  }

SportsOlympicsMedalJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getMedalTypeValue(void)
  {
    return getMedalType()->getValue();
  }

const SportsOlympicsMedalJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getMedalTypeValue(void) const
  {
    return getMedalType()->getValue();
  }

const char *SportsOlympicsMedalStandingsQueryComponentJSON::getMedalTypeAsChars(void) const
  {
    return getMedalType()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsQueryComponentJSON::getMedalTypeAsString(void) const
  {
    return getMedalType()->getValueAsString();
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsOlympicsMedalStandingsQueryComponentJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsOlympicsMedalStandingsQueryComponentJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasRankResult(void) const
  {
    return flagHasRankResult;
  }

OInteger SportsOlympicsMedalStandingsQueryComponentJSON::getRankResult(void)
  {
    assert(flagHasRankResult);
    return storeRankResult;
  }

const OInteger SportsOlympicsMedalStandingsQueryComponentJSON::getRankResult(void) const
  {
    assert(flagHasRankResult);
    return storeRankResult;
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasGames(void) const
  {
    return flagHasGames;
  }

SportsOlympicsGamesJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const SportsOlympicsGamesJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasSortMethod(void) const
  {
    return flagHasSortMethod;
  }

SportsOlympicsMedalStandingsSortMethodJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getSortMethod(void)
  {
    assert(flagHasSortMethod);
    return storeSortMethod;
  }

const SportsOlympicsMedalStandingsSortMethodJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getSortMethod(void) const
  {
    assert(flagHasSortMethod);
    return storeSortMethod;
  }

SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getSortMethodValue(void)
  {
    return getSortMethod()->getValue();
  }

const SportsOlympicsMedalStandingsSortMethodJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getSortMethodValue(void) const
  {
    return getSortMethod()->getValue();
  }

const char *SportsOlympicsMedalStandingsQueryComponentJSON::getSortMethodAsChars(void) const
  {
    return getSortMethod()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsQueryComponentJSON::getSortMethodAsString(void) const
  {
    return getSortMethod()->getValueAsString();
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasStandingsIndex(void) const
  {
    return flagHasStandingsIndex;
  }

OInteger SportsOlympicsMedalStandingsQueryComponentJSON::getStandingsIndex(void)
  {
    assert(flagHasStandingsIndex);
    return storeStandingsIndex;
  }

const OInteger SportsOlympicsMedalStandingsQueryComponentJSON::getStandingsIndex(void) const
  {
    assert(flagHasStandingsIndex);
    return storeStandingsIndex;
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasOrganizationIndices(void) const
  {
    return flagHasOrganizationIndices;
  }

size_t SportsOlympicsMedalStandingsQueryComponentJSON::countOfOrganizationIndices(void) const
  {
    assert(flagHasOrganizationIndices);
    return storeOrganizationIndices.size();
  }

OInteger SportsOlympicsMedalStandingsQueryComponentJSON::elementOfOrganizationIndices(size_t element_num)
  {
    assert(flagHasOrganizationIndices);
    return storeOrganizationIndices[element_num];
  }

const OInteger SportsOlympicsMedalStandingsQueryComponentJSON::elementOfOrganizationIndices(size_t element_num) const
  {
    assert(flagHasOrganizationIndices);
    return storeOrganizationIndices[element_num];
  }

std::vector< OInteger > SportsOlympicsMedalStandingsQueryComponentJSON::getOrganizationIndices(void)
  {
    assert(flagHasOrganizationIndices);
    return storeOrganizationIndices;
  }

const std::vector< OInteger > SportsOlympicsMedalStandingsQueryComponentJSON::getOrganizationIndices(void) const
  {
    assert(flagHasOrganizationIndices);
    return storeOrganizationIndices;
  }

bool SportsOlympicsMedalStandingsQueryComponentJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsOlympicsMedalStandingsErrorJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsOlympicsMedalStandingsErrorJSON * SportsOlympicsMedalStandingsQueryComponentJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

SportsOlympicsMedalStandingsErrorJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getErrorValue(void)
  {
    return getError()->getValue();
  }

const SportsOlympicsMedalStandingsErrorJSON::TypeValue SportsOlympicsMedalStandingsQueryComponentJSON::getErrorValue(void) const
  {
    return getError()->getValue();
  }

const char *SportsOlympicsMedalStandingsQueryComponentJSON::getErrorAsChars(void) const
  {
    return getError()->getValueAsChars();
  }

std::string SportsOlympicsMedalStandingsQueryComponentJSON::getErrorAsString(void) const
  {
    return getError()->getValueAsString();
  }

char SportsOlympicsMedalStandingsQueryComponentJSON::Generator::lowerBoundRank[] = "1";
char SportsOlympicsMedalStandingsQueryComponentJSON::Generator::lowerBoundRankResult[] = "1";
char SportsOlympicsMedalStandingsQueryComponentJSON::Generator::lowerBoundStandingsIndex[] = "0";
char SportsOlympicsMedalStandingsQueryComponentJSON::Generator::lowerBoundOrganizationIndices[] = "0";
SportsOlympicsMedalStandingsQueryComponentJSON *SportsOlympicsMedalStandingsQueryComponentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsQueryComponentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsQueryComponentJSON>, SportsOlympicsMedalStandingsQueryComponentJSON *, bool> generator("Type SportsOlympicsMedalStandingsQueryComponent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
