/* file "ShowMapInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowMapInformationNuggetJSON.h"

#include "ShowMapInformationNuggetJSON.h"


ShowMapInformationNuggetJSON::ShowMapInformationNuggetJSON(const ShowMapInformationNuggetJSON &)
  {
    assert(false);
  }

ShowMapInformationNuggetJSON &ShowMapInformationNuggetJSON::operator=(const ShowMapInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowMapInformationNuggetJSON::extraMapLocationSpecsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_MapLocationSpecs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeMapLocationSpecs.size(); ++num1)
      {
        JSONValueHandler handler_MapLocationSpecs;
        storeMapLocationSpecs[num1]->write_as_json(&handler_MapLocationSpecs);
        handler_MapLocationSpecs.result->add_reference();
        generated_array_1_MapLocationSpecs->appendComponent(handler_MapLocationSpecs.result);
        handler_MapLocationSpecs.result->remove_reference();
      }
    return generated_array_1_MapLocationSpecs;
  }

JSONValue *ShowMapInformationNuggetJSON::extraRequestedCoordinatesToJSON(void) const
  {
    JSONValue *generated_boolean_RequestedCoordinates = (storeRequestedCoordinates ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RequestedCoordinates;
  }

void ShowMapInformationNuggetJSON::fromJSONMapLocationSpecs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MapLocationSpecs of ShowMapInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field MapLocationSpecs of ShowMapInformationNuggetJSON has too few elements.");
    std::vector< MapLocationJSON * > vector_MapLocationSpecs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MapLocationSpecs1[num1] = convert_classy;
      }
    assert(vector_MapLocationSpecs1.size() >= 1);
    initMapLocationSpecs();
    for (size_t num2 = 0; num2 < vector_MapLocationSpecs1.size(); ++num2)
        appendMapLocationSpecs(vector_MapLocationSpecs1[num2]);
    for (size_t num1 = 0; num1 < vector_MapLocationSpecs1.size(); ++num1)
      {
        vector_MapLocationSpecs1[num1]->remove_reference();
      }
  }

void ShowMapInformationNuggetJSON::fromJSONRequestedCoordinates(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestedCoordinates of ShowMapInformationNuggetJSON is not true for false.");
          }
      }
    setRequestedCoordinates(the_bool);
  }

ShowMapInformationNuggetJSON::ShowMapInformationNuggetJSON(void) :
        flagHasMapLocationSpecs(false),
        flagHasRequestedCoordinates(false)
  {
    extraIndex = create_string_index();
  }

ShowMapInformationNuggetJSON::~ShowMapInformationNuggetJSON(void)
  {
    if (flagHasMapLocationSpecs)
      {
        for (size_t num4 = 0; num4 < storeMapLocationSpecs.size(); ++num4)
          {
            storeMapLocationSpecs[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowMapInformationNuggetJSON::getMapNuggetKind(void) const
  {
    return "ShowMap";
  }

bool ShowMapInformationNuggetJSON::hasMapLocationSpecs(void) const
  {
    return flagHasMapLocationSpecs;
  }

size_t ShowMapInformationNuggetJSON::countOfMapLocationSpecs(void) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs.size();
  }

MapLocationJSON * ShowMapInformationNuggetJSON::elementOfMapLocationSpecs(size_t element_num)
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs[element_num];
  }

const MapLocationJSON * ShowMapInformationNuggetJSON::elementOfMapLocationSpecs(size_t element_num) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs[element_num];
  }

std::vector< MapLocationJSON * > ShowMapInformationNuggetJSON::getMapLocationSpecs(void)
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs;
  }

const std::vector< MapLocationJSON * > ShowMapInformationNuggetJSON::getMapLocationSpecs(void) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs;
  }

bool ShowMapInformationNuggetJSON::hasRequestedCoordinates(void) const
  {
    return flagHasRequestedCoordinates;
  }

bool ShowMapInformationNuggetJSON::getRequestedCoordinates(void)
  {
    assert(flagHasRequestedCoordinates);
    return storeRequestedCoordinates;
  }

const bool ShowMapInformationNuggetJSON::getRequestedCoordinates(void) const
  {
    assert(flagHasRequestedCoordinates);
    return storeRequestedCoordinates;
  }

ShowMapInformationNuggetJSON *ShowMapInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowMapInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowMapInformationNuggetJSON>, ShowMapInformationNuggetJSON *, bool> generator("Type ShowMapInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
