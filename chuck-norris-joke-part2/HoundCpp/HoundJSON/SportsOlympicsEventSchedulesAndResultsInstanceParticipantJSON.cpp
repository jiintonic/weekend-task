/* file "SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON.h"


SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON(const SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON &SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::operator=(const SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::fromJSONAthletes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Athletes of SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON is not an array.");
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

void SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::fromJSONOrganization(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsOrganizationJSON *convert_classy = SportsOlympicsOrganizationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOrganization(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON(void) :
        flagHasAthletes(false),
        flagHasOrganization(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::~SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON(void)
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

bool SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::hasAthletes(void) const
  {
    return flagHasAthletes;
  }

size_t SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::countOfAthletes(void) const
  {
    assert(flagHasAthletes);
    return storeAthletes.size();
  }

SportsOlympicsAthleteJSON * SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::elementOfAthletes(size_t element_num)
  {
    assert(flagHasAthletes);
    return storeAthletes[element_num];
  }

const SportsOlympicsAthleteJSON * SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::elementOfAthletes(size_t element_num) const
  {
    assert(flagHasAthletes);
    return storeAthletes[element_num];
  }

std::vector< SportsOlympicsAthleteJSON * > SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::getAthletes(void)
  {
    assert(flagHasAthletes);
    return storeAthletes;
  }

const std::vector< SportsOlympicsAthleteJSON * > SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::getAthletes(void) const
  {
    assert(flagHasAthletes);
    return storeAthletes;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::hasOrganization(void) const
  {
    return flagHasOrganization;
  }

SportsOlympicsOrganizationJSON * SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::getOrganization(void)
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

const SportsOlympicsOrganizationJSON * SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::getOrganization(void) const
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON>, SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInstanceParticipant", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
