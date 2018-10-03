/* file "SportsOlympicsMedalStandingsArgumentOrganizationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentOrganizationJSON.h"

#include "SportsOlympicsMedalStandingsArgumentOrganizationJSON.h"


SportsOlympicsMedalStandingsArgumentOrganizationJSON::SportsOlympicsMedalStandingsArgumentOrganizationJSON(const SportsOlympicsMedalStandingsArgumentOrganizationJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentOrganizationJSON &SportsOlympicsMedalStandingsArgumentOrganizationJSON::operator=(const SportsOlympicsMedalStandingsArgumentOrganizationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsArgumentOrganizationJSON::extraOrganizationsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Organizations = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeOrganizations.size(); ++num1)
      {
        JSONStringValue *generated_string_Organizations = new JSONStringValue(storeOrganizations[num1].c_str());
        generated_array_1_Organizations->appendComponent(generated_string_Organizations);
      }
    return generated_array_1_Organizations;
  }

void SportsOlympicsMedalStandingsArgumentOrganizationJSON::fromJSONOrganizations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Organizations of SportsOlympicsMedalStandingsArgumentOrganizationJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Organizations of SportsOlympicsMedalStandingsArgumentOrganizationJSON has too few elements.");
    std::vector< std::string > vector_Organizations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Organizations of SportsOlympicsMedalStandingsArgumentOrganizationJSON is not a string.");
        vector_Organizations1[num1] = std::string(json_string->getData());
      }
    assert(vector_Organizations1.size() >= 1);
    initOrganizations();
    for (size_t num2 = 0; num2 < vector_Organizations1.size(); ++num2)
        appendOrganizations(vector_Organizations1[num2]);
    for (size_t num1 = 0; num1 < vector_Organizations1.size(); ++num1)
      {
      }
  }

SportsOlympicsMedalStandingsArgumentOrganizationJSON::SportsOlympicsMedalStandingsArgumentOrganizationJSON(void) :
        flagHasOrganizations(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsArgumentOrganizationJSON::~SportsOlympicsMedalStandingsArgumentOrganizationJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsArgumentOrganizationJSON::getSportsOlympicsMedalStandingsArgumentKind(void) const
  {
    return "Organization";
  }

bool SportsOlympicsMedalStandingsArgumentOrganizationJSON::hasOrganizations(void) const
  {
    return flagHasOrganizations;
  }

size_t SportsOlympicsMedalStandingsArgumentOrganizationJSON::countOfOrganizations(void) const
  {
    assert(flagHasOrganizations);
    return storeOrganizations.size();
  }

std::string SportsOlympicsMedalStandingsArgumentOrganizationJSON::elementOfOrganizations(size_t element_num)
  {
    assert(flagHasOrganizations);
    return storeOrganizations[element_num];
  }

const std::string SportsOlympicsMedalStandingsArgumentOrganizationJSON::elementOfOrganizations(size_t element_num) const
  {
    assert(flagHasOrganizations);
    return storeOrganizations[element_num];
  }

std::vector< std::string > SportsOlympicsMedalStandingsArgumentOrganizationJSON::getOrganizations(void)
  {
    assert(flagHasOrganizations);
    return storeOrganizations;
  }

const std::vector< std::string > SportsOlympicsMedalStandingsArgumentOrganizationJSON::getOrganizations(void) const
  {
    assert(flagHasOrganizations);
    return storeOrganizations;
  }

SportsOlympicsMedalStandingsArgumentOrganizationJSON *SportsOlympicsMedalStandingsArgumentOrganizationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentOrganizationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentOrganizationJSON>, SportsOlympicsMedalStandingsArgumentOrganizationJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentOrganization", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
