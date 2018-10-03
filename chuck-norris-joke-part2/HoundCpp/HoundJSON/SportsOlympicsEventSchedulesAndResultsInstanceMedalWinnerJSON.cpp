/* file "SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON.h"


SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON(const SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON &SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::operator=(const SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::fromJSONAthletes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Athletes of SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsAthleteJSON * > vector_Athletes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsAthleteJSON *convert_classy = SportsOlympicsAthleteJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Athletes1[num1] = convert_classy;
      }
    initAthletes();
    for (size_t num2 = 0; num2 < vector_Athletes1.size(); ++num2)
        appendAthletes(vector_Athletes1[num2]);
    for (size_t num1 = 0; num1 < vector_Athletes1.size(); ++num1)
      {
        vector_Athletes1[num1]->remove_reference();
      }
  }

void SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::fromJSONOrganization(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsOrganizationJSON *convert_classy = SportsOlympicsOrganizationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOrganization(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON(void) :
        flagHasAthletes(false),
        flagHasOrganization(false),
        flagHasRank(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::~SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON(void)
  {
    if (flagHasAthletes)
      {
        for (size_t num4 = 0; num4 < storeAthletes.size(); ++num4)
          {
            storeAthletes[num4]->remove_reference();
          }
      }
    if (flagHasOrganization)
      {
        storeOrganization->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::hasAthletes(void) const
  {
    return flagHasAthletes;
  }

size_t SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::countOfAthletes(void) const
  {
    assert(flagHasAthletes);
    return storeAthletes.size();
  }

SportsOlympicsAthleteJSON * SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::elementOfAthletes(size_t element_num)
  {
    assert(flagHasAthletes);
    return storeAthletes[element_num];
  }

const SportsOlympicsAthleteJSON * SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::elementOfAthletes(size_t element_num) const
  {
    assert(flagHasAthletes);
    return storeAthletes[element_num];
  }

std::vector< SportsOlympicsAthleteJSON * > SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::getAthletes(void)
  {
    assert(flagHasAthletes);
    return storeAthletes;
  }

const std::vector< SportsOlympicsAthleteJSON * > SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::getAthletes(void) const
  {
    assert(flagHasAthletes);
    return storeAthletes;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::hasOrganization(void) const
  {
    return flagHasOrganization;
  }

SportsOlympicsOrganizationJSON * SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::getOrganization(void)
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

const SportsOlympicsOrganizationJSON * SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::getOrganization(void) const
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

char SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::Generator::lowerBoundRank[] = "1";
SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON *SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON>, SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInstanceMedalWinner", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
