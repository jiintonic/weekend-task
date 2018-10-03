/* file "DisambiguateLocationQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateLocationQueryStateJSON.h"

#include "DisambiguateLocationQueryStateJSON.h"


DisambiguateLocationQueryStateJSON::DisambiguateLocationQueryStateJSON(const DisambiguateLocationQueryStateJSON &)
  {
    assert(false);
  }

DisambiguateLocationQueryStateJSON &DisambiguateLocationQueryStateJSON::operator=(const DisambiguateLocationQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateLocationQueryStateJSON::fromJSONMapLocations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MapLocations of DisambiguateLocationQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field MapLocations of DisambiguateLocationQueryStateJSON has too few elements.");
    std::vector< MapLocationJSON * > vector_MapLocations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MapLocations1[num1] = convert_classy;
      }
    assert(vector_MapLocations1.size() >= 2);
    initMapLocations();
    for (size_t num2 = 0; num2 < vector_MapLocations1.size(); ++num2)
        appendMapLocations(vector_MapLocations1[num2]);
    for (size_t num1 = 0; num1 < vector_MapLocations1.size(); ++num1)
      {
        vector_MapLocations1[num1]->remove_reference();
      }
  }

void DisambiguateLocationQueryStateJSON::fromJSONActionOnSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DisambiguateLocationActionOnSelectionJSON *convert_classy = DisambiguateLocationActionOnSelectionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionOnSelection(convert_classy);
    convert_classy->remove_reference();
  }

DisambiguateLocationQueryStateJSON::DisambiguateLocationQueryStateJSON(void) :
        flagHasMapLocations(false),
        flagHasActionOnSelection(false)
  {
    extraIndex = create_string_index();
  }

DisambiguateLocationQueryStateJSON::~DisambiguateLocationQueryStateJSON(void)
  {
    if (flagHasMapLocations)
      {
        for (size_t num4 = 0; num4 < storeMapLocations.size(); ++num4)
          {
            storeMapLocations[num4]->remove_reference();
          }
      }
    if (flagHasActionOnSelection)
      {
        storeActionOnSelection->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DisambiguateLocationQueryStateJSON::hasMapLocations(void) const
  {
    return flagHasMapLocations;
  }

size_t DisambiguateLocationQueryStateJSON::countOfMapLocations(void) const
  {
    assert(flagHasMapLocations);
    return storeMapLocations.size();
  }

MapLocationJSON * DisambiguateLocationQueryStateJSON::elementOfMapLocations(size_t element_num)
  {
    assert(flagHasMapLocations);
    return storeMapLocations[element_num];
  }

const MapLocationJSON * DisambiguateLocationQueryStateJSON::elementOfMapLocations(size_t element_num) const
  {
    assert(flagHasMapLocations);
    return storeMapLocations[element_num];
  }

std::vector< MapLocationJSON * > DisambiguateLocationQueryStateJSON::getMapLocations(void)
  {
    assert(flagHasMapLocations);
    return storeMapLocations;
  }

const std::vector< MapLocationJSON * > DisambiguateLocationQueryStateJSON::getMapLocations(void) const
  {
    assert(flagHasMapLocations);
    return storeMapLocations;
  }

bool DisambiguateLocationQueryStateJSON::hasActionOnSelection(void) const
  {
    return flagHasActionOnSelection;
  }

DisambiguateLocationActionOnSelectionJSON * DisambiguateLocationQueryStateJSON::getActionOnSelection(void)
  {
    assert(flagHasActionOnSelection);
    return storeActionOnSelection;
  }

const DisambiguateLocationActionOnSelectionJSON * DisambiguateLocationQueryStateJSON::getActionOnSelection(void) const
  {
    assert(flagHasActionOnSelection);
    return storeActionOnSelection;
  }

DisambiguateLocationActionOnSelectionJSON::TypeValue DisambiguateLocationQueryStateJSON::getActionOnSelectionValue(void)
  {
    return getActionOnSelection()->getValue();
  }

const DisambiguateLocationActionOnSelectionJSON::TypeValue DisambiguateLocationQueryStateJSON::getActionOnSelectionValue(void) const
  {
    return getActionOnSelection()->getValue();
  }

const char *DisambiguateLocationQueryStateJSON::getActionOnSelectionAsChars(void) const
  {
    return getActionOnSelection()->getValueAsChars();
  }

std::string DisambiguateLocationQueryStateJSON::getActionOnSelectionAsString(void) const
  {
    return getActionOnSelection()->getValueAsString();
  }

DisambiguateLocationQueryStateJSON *DisambiguateLocationQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateLocationQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateLocationQueryStateJSON>, DisambiguateLocationQueryStateJSON *, bool> generator("Type DisambiguateLocationQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
