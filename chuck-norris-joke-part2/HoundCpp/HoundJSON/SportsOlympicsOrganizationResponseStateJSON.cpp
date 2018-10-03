/* file "SportsOlympicsOrganizationResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsOrganizationResponseStateJSON.h"

#include "SportsOlympicsOrganizationResponseStateJSON.h"


SportsOlympicsOrganizationResponseStateJSON::SportsOlympicsOrganizationResponseStateJSON(const SportsOlympicsOrganizationResponseStateJSON &)
  {
    assert(false);
  }

SportsOlympicsOrganizationResponseStateJSON &SportsOlympicsOrganizationResponseStateJSON::operator=(const SportsOlympicsOrganizationResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsOrganizationResponseStateJSON::fromJSONOrganizations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Organizations of SportsOlympicsOrganizationResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Organizations of SportsOlympicsOrganizationResponseStateJSON has too few elements.");
    std::vector< std::string > vector_Organizations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Organizations of SportsOlympicsOrganizationResponseStateJSON is not a string.");
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

void SportsOlympicsOrganizationResponseStateJSON::fromJSONOrganizationsNotFound(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OrganizationsNotFound of SportsOlympicsOrganizationResponseStateJSON is not true for false.");
          }
      }
    setOrganizationsNotFound(the_bool);
  }

SportsOlympicsOrganizationResponseStateJSON::SportsOlympicsOrganizationResponseStateJSON(void) :
        flagHasOrganizations(false),
        flagHasOrganizationsNotFound(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsOrganizationResponseStateJSON::~SportsOlympicsOrganizationResponseStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsOrganizationResponseStateJSON::hasOrganizations(void) const
  {
    return flagHasOrganizations;
  }

size_t SportsOlympicsOrganizationResponseStateJSON::countOfOrganizations(void) const
  {
    assert(flagHasOrganizations);
    return storeOrganizations.size();
  }

std::string SportsOlympicsOrganizationResponseStateJSON::elementOfOrganizations(size_t element_num)
  {
    assert(flagHasOrganizations);
    return storeOrganizations[element_num];
  }

const std::string SportsOlympicsOrganizationResponseStateJSON::elementOfOrganizations(size_t element_num) const
  {
    assert(flagHasOrganizations);
    return storeOrganizations[element_num];
  }

std::vector< std::string > SportsOlympicsOrganizationResponseStateJSON::getOrganizations(void)
  {
    assert(flagHasOrganizations);
    return storeOrganizations;
  }

const std::vector< std::string > SportsOlympicsOrganizationResponseStateJSON::getOrganizations(void) const
  {
    assert(flagHasOrganizations);
    return storeOrganizations;
  }

bool SportsOlympicsOrganizationResponseStateJSON::hasOrganizationsNotFound(void) const
  {
    return flagHasOrganizationsNotFound;
  }

bool SportsOlympicsOrganizationResponseStateJSON::getOrganizationsNotFound(void)
  {
    assert(flagHasOrganizationsNotFound);
    return storeOrganizationsNotFound;
  }

const bool SportsOlympicsOrganizationResponseStateJSON::getOrganizationsNotFound(void) const
  {
    assert(flagHasOrganizationsNotFound);
    return storeOrganizationsNotFound;
  }

SportsOlympicsOrganizationResponseStateJSON *SportsOlympicsOrganizationResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsOrganizationResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsOrganizationResponseStateJSON>, SportsOlympicsOrganizationResponseStateJSON *, bool> generator("Type SportsOlympicsOrganizationResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
