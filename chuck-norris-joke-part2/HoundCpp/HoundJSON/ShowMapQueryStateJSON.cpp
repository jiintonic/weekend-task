/* file "ShowMapQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowMapQueryStateJSON.h"

#include "ShowMapQueryStateJSON.h"


ShowMapQueryStateJSON::ShowMapQueryStateJSON(const ShowMapQueryStateJSON &)
  {
    assert(false);
  }

ShowMapQueryStateJSON &ShowMapQueryStateJSON::operator=(const ShowMapQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowMapQueryStateJSON::fromJSONMapLocationSpecs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MapLocationSpecs of ShowMapQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field MapLocationSpecs of ShowMapQueryStateJSON has too few elements.");
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

ShowMapQueryStateJSON::ShowMapQueryStateJSON(void) :
        flagHasMapLocationSpecs(false)
  {
    extraIndex = create_string_index();
  }

ShowMapQueryStateJSON::~ShowMapQueryStateJSON(void)
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

bool ShowMapQueryStateJSON::hasMapLocationSpecs(void) const
  {
    return flagHasMapLocationSpecs;
  }

size_t ShowMapQueryStateJSON::countOfMapLocationSpecs(void) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs.size();
  }

MapLocationJSON * ShowMapQueryStateJSON::elementOfMapLocationSpecs(size_t element_num)
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs[element_num];
  }

const MapLocationJSON * ShowMapQueryStateJSON::elementOfMapLocationSpecs(size_t element_num) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs[element_num];
  }

std::vector< MapLocationJSON * > ShowMapQueryStateJSON::getMapLocationSpecs(void)
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs;
  }

const std::vector< MapLocationJSON * > ShowMapQueryStateJSON::getMapLocationSpecs(void) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs;
  }

ShowMapQueryStateJSON *ShowMapQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowMapQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowMapQueryStateJSON>, ShowMapQueryStateJSON *, bool> generator("Type ShowMapQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
