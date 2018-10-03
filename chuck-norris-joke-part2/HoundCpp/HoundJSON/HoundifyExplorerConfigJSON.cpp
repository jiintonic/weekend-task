/* file "HoundifyExplorerConfigJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HoundifyExplorerConfigJSON.h"

#include "HoundifyExplorerConfigJSON.h"


HoundifyExplorerConfigJSON::HoundifyExplorerConfigJSON(const HoundifyExplorerConfigJSON &)
  {
    assert(false);
  }

HoundifyExplorerConfigJSON &HoundifyExplorerConfigJSON::operator=(const HoundifyExplorerConfigJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundifyExplorerConfigJSON::fromJSONProfiles(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Profiles of HoundifyExplorerConfigJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Profiles of HoundifyExplorerConfigJSON has too few elements.");
    std::vector< HoundifyExplorerProfileJSON * > vector_Profiles1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HoundifyExplorerProfileJSON *convert_classy = HoundifyExplorerProfileJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Profiles1[num1] = convert_classy;
      }
    assert(vector_Profiles1.size() >= 1);
    initProfiles();
    for (size_t num2 = 0; num2 < vector_Profiles1.size(); ++num2)
        appendProfiles(vector_Profiles1[num2]);
    for (size_t num1 = 0; num1 < vector_Profiles1.size(); ++num1)
      {
        vector_Profiles1[num1]->remove_reference();
      }
  }

void HoundifyExplorerConfigJSON::fromJSONDefaultProfile(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DefaultProfile of HoundifyExplorerConfigJSON is not a string.");
    setDefaultProfile(std::string(json_string->getData()));
  }

HoundifyExplorerConfigJSON::HoundifyExplorerConfigJSON(void) :
        flagHasProfiles(false),
        flagHasDefaultProfile(false)
  {
    extraIndex = create_string_index();
  }

HoundifyExplorerConfigJSON::~HoundifyExplorerConfigJSON(void)
  {
    if (flagHasProfiles)
      {
        for (size_t num4 = 0; num4 < storeProfiles.size(); ++num4)
          {
            storeProfiles[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundifyExplorerConfigJSON::hasProfiles(void) const
  {
    return flagHasProfiles;
  }

size_t HoundifyExplorerConfigJSON::countOfProfiles(void) const
  {
    assert(flagHasProfiles);
    return storeProfiles.size();
  }

HoundifyExplorerProfileJSON * HoundifyExplorerConfigJSON::elementOfProfiles(size_t element_num)
  {
    assert(flagHasProfiles);
    return storeProfiles[element_num];
  }

const HoundifyExplorerProfileJSON * HoundifyExplorerConfigJSON::elementOfProfiles(size_t element_num) const
  {
    assert(flagHasProfiles);
    return storeProfiles[element_num];
  }

std::vector< HoundifyExplorerProfileJSON * > HoundifyExplorerConfigJSON::getProfiles(void)
  {
    assert(flagHasProfiles);
    return storeProfiles;
  }

const std::vector< HoundifyExplorerProfileJSON * > HoundifyExplorerConfigJSON::getProfiles(void) const
  {
    assert(flagHasProfiles);
    return storeProfiles;
  }

bool HoundifyExplorerConfigJSON::hasDefaultProfile(void) const
  {
    return flagHasDefaultProfile;
  }

std::string HoundifyExplorerConfigJSON::getDefaultProfile(void)
  {
    assert(flagHasDefaultProfile);
    return storeDefaultProfile;
  }

const std::string HoundifyExplorerConfigJSON::getDefaultProfile(void) const
  {
    assert(flagHasDefaultProfile);
    return storeDefaultProfile;
  }

HoundifyExplorerConfigJSON *HoundifyExplorerConfigJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HoundifyExplorerConfigJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HoundifyExplorerConfigJSON>, HoundifyExplorerConfigJSON *, bool> generator("Type HoundifyExplorerConfig", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
