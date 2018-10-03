/* file "SportsOlympicsAthleteJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsAthleteJSON.h"

#include "SportsOlympicsAthleteJSON.h"


SportsOlympicsAthleteJSON::SportsOlympicsAthleteJSON(const SportsOlympicsAthleteJSON &)
  {
    assert(false);
  }

SportsOlympicsAthleteJSON &SportsOlympicsAthleteJSON::operator=(const SportsOlympicsAthleteJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAthleteJSON::fromJSONFullName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FullName of SportsOlympicsAthleteJSON is not a string.");
    setFullName(std::string(json_string->getData()));
  }

void SportsOlympicsAthleteJSON::fromJSONOrganization(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsOrganizationJSON *convert_classy = SportsOlympicsOrganizationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOrganization(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAthleteJSON::fromJSONGender(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsAthleteGenderJSON *convert_classy = SportsOlympicsAthleteGenderJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGender(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsAthleteJSON::SportsOlympicsAthleteJSON(void) :
        flagHasFullName(false),
        flagHasOrganization(false),
        flagHasGender(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAthleteJSON::~SportsOlympicsAthleteJSON(void)
  {
    if (flagHasOrganization)
      {
        storeOrganization->remove_reference();
      }
    if (flagHasGender)
      {
        storeGender->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAthleteJSON::hasFullName(void) const
  {
    return flagHasFullName;
  }

std::string SportsOlympicsAthleteJSON::getFullName(void)
  {
    assert(flagHasFullName);
    return storeFullName;
  }

const std::string SportsOlympicsAthleteJSON::getFullName(void) const
  {
    assert(flagHasFullName);
    return storeFullName;
  }

bool SportsOlympicsAthleteJSON::hasOrganization(void) const
  {
    return flagHasOrganization;
  }

SportsOlympicsOrganizationJSON * SportsOlympicsAthleteJSON::getOrganization(void)
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

const SportsOlympicsOrganizationJSON * SportsOlympicsAthleteJSON::getOrganization(void) const
  {
    assert(flagHasOrganization);
    return storeOrganization;
  }

bool SportsOlympicsAthleteJSON::hasGender(void) const
  {
    return flagHasGender;
  }

SportsOlympicsAthleteGenderJSON * SportsOlympicsAthleteJSON::getGender(void)
  {
    assert(flagHasGender);
    return storeGender;
  }

const SportsOlympicsAthleteGenderJSON * SportsOlympicsAthleteJSON::getGender(void) const
  {
    assert(flagHasGender);
    return storeGender;
  }

SportsOlympicsAthleteGenderJSON::TypeValue SportsOlympicsAthleteJSON::getGenderValue(void)
  {
    return getGender()->getValue();
  }

const SportsOlympicsAthleteGenderJSON::TypeValue SportsOlympicsAthleteJSON::getGenderValue(void) const
  {
    return getGender()->getValue();
  }

const char *SportsOlympicsAthleteJSON::getGenderAsChars(void) const
  {
    return getGender()->getValueAsChars();
  }

std::string SportsOlympicsAthleteJSON::getGenderAsString(void) const
  {
    return getGender()->getValueAsString();
  }

SportsOlympicsAthleteJSON *SportsOlympicsAthleteJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsAthleteJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAthleteJSON>, SportsOlympicsAthleteJSON *, bool> generator("Type SportsOlympicsAthlete", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
