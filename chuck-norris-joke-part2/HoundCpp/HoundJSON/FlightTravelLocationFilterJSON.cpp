/* file "FlightTravelLocationFilterJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightTravelLocationFilterJSON.h"

#include "FlightTravelLocationFilterJSON.h"


FlightTravelLocationFilterJSON::FlightTravelLocationFilterJSON(const FlightTravelLocationFilterJSON &)
  {
    assert(false);
  }

FlightTravelLocationFilterJSON &FlightTravelLocationFilterJSON::operator=(const FlightTravelLocationFilterJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightTravelLocationFilterJSON::fromJSONIncludes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Includes of FlightTravelLocationFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Includes of FlightTravelLocationFilterJSON has too few elements.");
    std::vector< FlightTravelLocationJSON * > vector_Includes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_array1->component(num1), ignore_extras);
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

void FlightTravelLocationFilterJSON::fromJSONExcludes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Excludes of FlightTravelLocationFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Excludes of FlightTravelLocationFilterJSON has too few elements.");
    std::vector< FlightTravelLocationJSON * > vector_Excludes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_array1->component(num1), ignore_extras);
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

void FlightTravelLocationFilterJSON::fromJSONDefaultForOthers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IncludeExcludeStateJSON *convert_classy = IncludeExcludeStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDefaultForOthers(convert_classy);
    convert_classy->remove_reference();
  }

FlightTravelLocationFilterJSON::FlightTravelLocationFilterJSON(void) :
        flagHasIncludes(false),
        flagHasExcludes(false),
        flagHasDefaultForOthers(false)
  {
    extraIndex = create_string_index();
  }

FlightTravelLocationFilterJSON::~FlightTravelLocationFilterJSON(void)
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

bool FlightTravelLocationFilterJSON::hasIncludes(void) const
  {
    return flagHasIncludes;
  }

size_t FlightTravelLocationFilterJSON::countOfIncludes(void) const
  {
    assert(flagHasIncludes);
    return storeIncludes.size();
  }

FlightTravelLocationJSON * FlightTravelLocationFilterJSON::elementOfIncludes(size_t element_num)
  {
    assert(flagHasIncludes);
    return storeIncludes[element_num];
  }

const FlightTravelLocationJSON * FlightTravelLocationFilterJSON::elementOfIncludes(size_t element_num) const
  {
    assert(flagHasIncludes);
    return storeIncludes[element_num];
  }

std::vector< FlightTravelLocationJSON * > FlightTravelLocationFilterJSON::getIncludes(void)
  {
    assert(flagHasIncludes);
    return storeIncludes;
  }

const std::vector< FlightTravelLocationJSON * > FlightTravelLocationFilterJSON::getIncludes(void) const
  {
    assert(flagHasIncludes);
    return storeIncludes;
  }

bool FlightTravelLocationFilterJSON::hasExcludes(void) const
  {
    return flagHasExcludes;
  }

size_t FlightTravelLocationFilterJSON::countOfExcludes(void) const
  {
    assert(flagHasExcludes);
    return storeExcludes.size();
  }

FlightTravelLocationJSON * FlightTravelLocationFilterJSON::elementOfExcludes(size_t element_num)
  {
    assert(flagHasExcludes);
    return storeExcludes[element_num];
  }

const FlightTravelLocationJSON * FlightTravelLocationFilterJSON::elementOfExcludes(size_t element_num) const
  {
    assert(flagHasExcludes);
    return storeExcludes[element_num];
  }

std::vector< FlightTravelLocationJSON * > FlightTravelLocationFilterJSON::getExcludes(void)
  {
    assert(flagHasExcludes);
    return storeExcludes;
  }

const std::vector< FlightTravelLocationJSON * > FlightTravelLocationFilterJSON::getExcludes(void) const
  {
    assert(flagHasExcludes);
    return storeExcludes;
  }

bool FlightTravelLocationFilterJSON::hasDefaultForOthers(void) const
  {
    return flagHasDefaultForOthers;
  }

IncludeExcludeStateJSON * FlightTravelLocationFilterJSON::getDefaultForOthers(void)
  {
    assert(flagHasDefaultForOthers);
    return storeDefaultForOthers;
  }

const IncludeExcludeStateJSON * FlightTravelLocationFilterJSON::getDefaultForOthers(void) const
  {
    assert(flagHasDefaultForOthers);
    return storeDefaultForOthers;
  }

IncludeExcludeStateJSON::TypeValue FlightTravelLocationFilterJSON::getDefaultForOthersValue(void)
  {
    return getDefaultForOthers()->getValue();
  }

const IncludeExcludeStateJSON::TypeValue FlightTravelLocationFilterJSON::getDefaultForOthersValue(void) const
  {
    return getDefaultForOthers()->getValue();
  }

const char *FlightTravelLocationFilterJSON::getDefaultForOthersAsChars(void) const
  {
    return getDefaultForOthers()->getValueAsChars();
  }

std::string FlightTravelLocationFilterJSON::getDefaultForOthersAsString(void) const
  {
    return getDefaultForOthers()->getValueAsString();
  }

FlightTravelLocationFilterJSON *FlightTravelLocationFilterJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightTravelLocationFilterJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightTravelLocationFilterJSON>, FlightTravelLocationFilterJSON *, bool> generator("Type FlightTravelLocationFilter", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
