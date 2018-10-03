/* file "SportsOlympicsOrganizationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsOrganizationJSON.h"

#include "SportsOlympicsOrganizationJSON.h"


SportsOlympicsOrganizationJSON::SportsOlympicsOrganizationJSON(const SportsOlympicsOrganizationJSON &)
  {
    assert(false);
  }

SportsOlympicsOrganizationJSON &SportsOlympicsOrganizationJSON::operator=(const SportsOlympicsOrganizationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsOrganizationJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of SportsOlympicsOrganizationJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void SportsOlympicsOrganizationJSON::fromJSONAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Alias of SportsOlympicsOrganizationJSON is not a string.");
    setAlias(std::string(json_string->getData()));
  }

SportsOlympicsOrganizationJSON::SportsOlympicsOrganizationJSON(void) :
        flagHasName(false),
        flagHasAlias(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsOrganizationJSON::~SportsOlympicsOrganizationJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsOrganizationJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string SportsOlympicsOrganizationJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string SportsOlympicsOrganizationJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool SportsOlympicsOrganizationJSON::hasAlias(void) const
  {
    return flagHasAlias;
  }

std::string SportsOlympicsOrganizationJSON::getAlias(void)
  {
    assert(flagHasAlias);
    return storeAlias;
  }

const std::string SportsOlympicsOrganizationJSON::getAlias(void) const
  {
    assert(flagHasAlias);
    return storeAlias;
  }

SportsOlympicsOrganizationJSON *SportsOlympicsOrganizationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsOrganizationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsOrganizationJSON>, SportsOlympicsOrganizationJSON *, bool> generator("Type SportsOlympicsOrganization", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
