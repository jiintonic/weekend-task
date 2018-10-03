/* file "FlightSeatPreferencesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSeatPreferencesJSON.h"

#include "FlightSeatPreferencesJSON.h"


FlightSeatPreferencesJSON::FlightSeatPreferencesJSON(const FlightSeatPreferencesJSON &)
  {
    assert(false);
  }

FlightSeatPreferencesJSON &FlightSeatPreferencesJSON::operator=(const FlightSeatPreferencesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSeatPreferencesJSON::fromJSONIncludes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Includes of FlightSeatPreferencesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Includes of FlightSeatPreferencesJSON has too few elements.");
    std::vector< FlightSeatTypeJSON * > vector_Includes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSeatTypeJSON *convert_classy = FlightSeatTypeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Includes1[num1] = convert_classy;
      }
    assert(vector_Includes1.size() >= 1);
    initIncludes();
    for (size_t num3 = 0; num3 < vector_Includes1.size(); ++num3)
        appendIncludes(vector_Includes1[num3]);
    for (size_t num1 = 0; num1 < vector_Includes1.size(); ++num1)
      {
        vector_Includes1[num1]->remove_reference();
      }
  }

void FlightSeatPreferencesJSON::fromJSONExcludes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Excludes of FlightSeatPreferencesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Excludes of FlightSeatPreferencesJSON has too few elements.");
    std::vector< FlightSeatTypeJSON * > vector_Excludes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSeatTypeJSON *convert_classy = FlightSeatTypeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Excludes1[num1] = convert_classy;
      }
    assert(vector_Excludes1.size() >= 1);
    initExcludes();
    for (size_t num4 = 0; num4 < vector_Excludes1.size(); ++num4)
        appendExcludes(vector_Excludes1[num4]);
    for (size_t num1 = 0; num1 < vector_Excludes1.size(); ++num1)
      {
        vector_Excludes1[num1]->remove_reference();
      }
  }

void FlightSeatPreferencesJSON::fromJSONDefaultForOthers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IncludeExcludeStateJSON *convert_classy = IncludeExcludeStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDefaultForOthers(convert_classy);
    convert_classy->remove_reference();
  }

FlightSeatPreferencesJSON::FlightSeatPreferencesJSON(void) :
        flagHasIncludes(false),
        flagHasExcludes(false),
        flagHasDefaultForOthers(false)
  {
    extraIndex = create_string_index();
  }

FlightSeatPreferencesJSON::~FlightSeatPreferencesJSON(void)
  {
    if (flagHasIncludes)
      {
        for (size_t num7 = 0; num7 < storeIncludes.size(); ++num7)
          {
            storeIncludes[num7]->remove_reference();
          }
      }
    if (flagHasExcludes)
      {
        for (size_t num8 = 0; num8 < storeExcludes.size(); ++num8)
          {
            storeExcludes[num8]->remove_reference();
          }
      }
    if (flagHasDefaultForOthers)
      {
        storeDefaultForOthers->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightSeatPreferencesJSON::hasIncludes(void) const
  {
    return flagHasIncludes;
  }

size_t FlightSeatPreferencesJSON::countOfIncludes(void) const
  {
    assert(flagHasIncludes);
    return storeIncludes.size();
  }

FlightSeatTypeJSON * FlightSeatPreferencesJSON::elementOfIncludes(size_t element_num)
  {
    assert(flagHasIncludes);
    return storeIncludes[element_num];
  }

const FlightSeatTypeJSON * FlightSeatPreferencesJSON::elementOfIncludes(size_t element_num) const
  {
    assert(flagHasIncludes);
    return storeIncludes[element_num];
  }

std::vector< FlightSeatTypeJSON * > FlightSeatPreferencesJSON::getIncludes(void)
  {
    assert(flagHasIncludes);
    return storeIncludes;
  }

const std::vector< FlightSeatTypeJSON * > FlightSeatPreferencesJSON::getIncludes(void) const
  {
    assert(flagHasIncludes);
    return storeIncludes;
  }

bool FlightSeatPreferencesJSON::hasExcludes(void) const
  {
    return flagHasExcludes;
  }

size_t FlightSeatPreferencesJSON::countOfExcludes(void) const
  {
    assert(flagHasExcludes);
    return storeExcludes.size();
  }

FlightSeatTypeJSON * FlightSeatPreferencesJSON::elementOfExcludes(size_t element_num)
  {
    assert(flagHasExcludes);
    return storeExcludes[element_num];
  }

const FlightSeatTypeJSON * FlightSeatPreferencesJSON::elementOfExcludes(size_t element_num) const
  {
    assert(flagHasExcludes);
    return storeExcludes[element_num];
  }

std::vector< FlightSeatTypeJSON * > FlightSeatPreferencesJSON::getExcludes(void)
  {
    assert(flagHasExcludes);
    return storeExcludes;
  }

const std::vector< FlightSeatTypeJSON * > FlightSeatPreferencesJSON::getExcludes(void) const
  {
    assert(flagHasExcludes);
    return storeExcludes;
  }

bool FlightSeatPreferencesJSON::hasDefaultForOthers(void) const
  {
    return flagHasDefaultForOthers;
  }

IncludeExcludeStateJSON * FlightSeatPreferencesJSON::getDefaultForOthers(void)
  {
    assert(flagHasDefaultForOthers);
    return storeDefaultForOthers;
  }

const IncludeExcludeStateJSON * FlightSeatPreferencesJSON::getDefaultForOthers(void) const
  {
    assert(flagHasDefaultForOthers);
    return storeDefaultForOthers;
  }

IncludeExcludeStateJSON::TypeValue FlightSeatPreferencesJSON::getDefaultForOthersValue(void)
  {
    return getDefaultForOthers()->getValue();
  }

const IncludeExcludeStateJSON::TypeValue FlightSeatPreferencesJSON::getDefaultForOthersValue(void) const
  {
    return getDefaultForOthers()->getValue();
  }

const char *FlightSeatPreferencesJSON::getDefaultForOthersAsChars(void) const
  {
    return getDefaultForOthers()->getValueAsChars();
  }

std::string FlightSeatPreferencesJSON::getDefaultForOthersAsString(void) const
  {
    return getDefaultForOthers()->getValueAsString();
  }

FlightSeatPreferencesJSON *FlightSeatPreferencesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSeatPreferencesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSeatPreferencesJSON>, FlightSeatPreferencesJSON *, bool> generator("Type FlightSeatPreferences", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
