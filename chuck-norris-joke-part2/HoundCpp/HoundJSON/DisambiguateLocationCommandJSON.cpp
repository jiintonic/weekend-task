/* file "DisambiguateLocationCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateLocationCommandJSON.h"

#include "DisambiguateLocationCommandJSON.h"


DisambiguateLocationCommandJSON::DisambiguateLocationCommandJSON(const DisambiguateLocationCommandJSON &)
  {
    assert(false);
  }

DisambiguateLocationCommandJSON &DisambiguateLocationCommandJSON::operator=(const DisambiguateLocationCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DisambiguateLocationCommandJSON::extraAmbiguousLocationsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_AmbiguousLocations = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeAmbiguousLocations.size(); ++num1)
      {
        JSONValueHandler handler_AmbiguousLocations;
        storeAmbiguousLocations[num1]->write_as_json(&handler_AmbiguousLocations);
        handler_AmbiguousLocations.result->add_reference();
        generated_array_1_AmbiguousLocations->appendComponent(handler_AmbiguousLocations.result);
        handler_AmbiguousLocations.result->remove_reference();
      }
    return generated_array_1_AmbiguousLocations;
  }

JSONValue *DisambiguateLocationCommandJSON::extraActionOnSelectionToJSON(void) const
  {
    JSONValueHandler handler_ActionOnSelection;
    storeActionOnSelection->write_as_json(&handler_ActionOnSelection);
    handler_ActionOnSelection.result->add_reference();
    return handler_ActionOnSelection.result;
  }

void DisambiguateLocationCommandJSON::fromJSONAmbiguousLocations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmbiguousLocations of DisambiguateLocationCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field AmbiguousLocations of DisambiguateLocationCommandJSON has too few elements.");
    std::vector< MapLocationJSON * > vector_AmbiguousLocations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmbiguousLocations1[num1] = convert_classy;
      }
    assert(vector_AmbiguousLocations1.size() >= 2);
    initAmbiguousLocations();
    for (size_t num2 = 0; num2 < vector_AmbiguousLocations1.size(); ++num2)
        appendAmbiguousLocations(vector_AmbiguousLocations1[num2]);
    for (size_t num1 = 0; num1 < vector_AmbiguousLocations1.size(); ++num1)
      {
        vector_AmbiguousLocations1[num1]->remove_reference();
      }
  }

void DisambiguateLocationCommandJSON::fromJSONActionOnSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DisambiguateLocationActionOnSelectionJSON *convert_classy = DisambiguateLocationActionOnSelectionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionOnSelection(convert_classy);
    convert_classy->remove_reference();
  }

DisambiguateLocationCommandJSON::DisambiguateLocationCommandJSON(void) :
        flagHasAmbiguousLocations(false),
        flagHasActionOnSelection(false)
  {
    extraIndex = create_string_index();
  }

DisambiguateLocationCommandJSON::~DisambiguateLocationCommandJSON(void)
  {
    if (flagHasAmbiguousLocations)
      {
        for (size_t num4 = 0; num4 < storeAmbiguousLocations.size(); ++num4)
          {
            storeAmbiguousLocations[num4]->remove_reference();
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

const char *DisambiguateLocationCommandJSON::getCommandKind(void) const
  {
    return "DisambiguateLocationCommand";
  }

bool DisambiguateLocationCommandJSON::hasAmbiguousLocations(void) const
  {
    return flagHasAmbiguousLocations;
  }

size_t DisambiguateLocationCommandJSON::countOfAmbiguousLocations(void) const
  {
    assert(flagHasAmbiguousLocations);
    return storeAmbiguousLocations.size();
  }

MapLocationJSON * DisambiguateLocationCommandJSON::elementOfAmbiguousLocations(size_t element_num)
  {
    assert(flagHasAmbiguousLocations);
    return storeAmbiguousLocations[element_num];
  }

const MapLocationJSON * DisambiguateLocationCommandJSON::elementOfAmbiguousLocations(size_t element_num) const
  {
    assert(flagHasAmbiguousLocations);
    return storeAmbiguousLocations[element_num];
  }

std::vector< MapLocationJSON * > DisambiguateLocationCommandJSON::getAmbiguousLocations(void)
  {
    assert(flagHasAmbiguousLocations);
    return storeAmbiguousLocations;
  }

const std::vector< MapLocationJSON * > DisambiguateLocationCommandJSON::getAmbiguousLocations(void) const
  {
    assert(flagHasAmbiguousLocations);
    return storeAmbiguousLocations;
  }

bool DisambiguateLocationCommandJSON::hasActionOnSelection(void) const
  {
    return flagHasActionOnSelection;
  }

DisambiguateLocationActionOnSelectionJSON * DisambiguateLocationCommandJSON::getActionOnSelection(void)
  {
    assert(flagHasActionOnSelection);
    return storeActionOnSelection;
  }

const DisambiguateLocationActionOnSelectionJSON * DisambiguateLocationCommandJSON::getActionOnSelection(void) const
  {
    assert(flagHasActionOnSelection);
    return storeActionOnSelection;
  }

DisambiguateLocationActionOnSelectionJSON::TypeValue DisambiguateLocationCommandJSON::getActionOnSelectionValue(void)
  {
    return getActionOnSelection()->getValue();
  }

const DisambiguateLocationActionOnSelectionJSON::TypeValue DisambiguateLocationCommandJSON::getActionOnSelectionValue(void) const
  {
    return getActionOnSelection()->getValue();
  }

const char *DisambiguateLocationCommandJSON::getActionOnSelectionAsChars(void) const
  {
    return getActionOnSelection()->getValueAsChars();
  }

std::string DisambiguateLocationCommandJSON::getActionOnSelectionAsString(void) const
  {
    return getActionOnSelection()->getValueAsString();
  }

DisambiguateLocationCommandJSON *DisambiguateLocationCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateLocationCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateLocationCommandJSON>, DisambiguateLocationCommandJSON *, bool> generator("Type DisambiguateLocationCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
