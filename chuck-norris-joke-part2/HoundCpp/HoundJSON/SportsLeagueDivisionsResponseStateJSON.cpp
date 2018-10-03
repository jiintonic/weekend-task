/* file "SportsLeagueDivisionsResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueDivisionsResponseStateJSON.h"

#include "SportsLeagueDivisionsResponseStateJSON.h"


SportsLeagueDivisionsResponseStateJSON::SportsLeagueDivisionsResponseStateJSON(const SportsLeagueDivisionsResponseStateJSON &)
  {
    assert(false);
  }

SportsLeagueDivisionsResponseStateJSON &SportsLeagueDivisionsResponseStateJSON::operator=(const SportsLeagueDivisionsResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueDivisionsResponseStateJSON::fromJSONDivisions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Divisions of SportsLeagueDivisionsResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Divisions of SportsLeagueDivisionsResponseStateJSON has too few elements.");
    std::vector< SportsLeagueDivisionJSON * > vector_Divisions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Divisions1[num1] = convert_classy;
      }
    assert(vector_Divisions1.size() >= 1);
    initDivisions();
    for (size_t num2 = 0; num2 < vector_Divisions1.size(); ++num2)
        appendDivisions(vector_Divisions1[num2]);
    for (size_t num1 = 0; num1 < vector_Divisions1.size(); ++num1)
      {
        vector_Divisions1[num1]->remove_reference();
      }
  }

SportsLeagueDivisionsResponseStateJSON::SportsLeagueDivisionsResponseStateJSON(void) :
        flagHasDivisions(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueDivisionsResponseStateJSON::~SportsLeagueDivisionsResponseStateJSON(void)
  {
    if (flagHasDivisions)
      {
        for (size_t num4 = 0; num4 < storeDivisions.size(); ++num4)
          {
            storeDivisions[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueDivisionsResponseStateJSON::hasDivisions(void) const
  {
    return flagHasDivisions;
  }

size_t SportsLeagueDivisionsResponseStateJSON::countOfDivisions(void) const
  {
    assert(flagHasDivisions);
    return storeDivisions.size();
  }

SportsLeagueDivisionJSON * SportsLeagueDivisionsResponseStateJSON::elementOfDivisions(size_t element_num)
  {
    assert(flagHasDivisions);
    return storeDivisions[element_num];
  }

const SportsLeagueDivisionJSON * SportsLeagueDivisionsResponseStateJSON::elementOfDivisions(size_t element_num) const
  {
    assert(flagHasDivisions);
    return storeDivisions[element_num];
  }

std::vector< SportsLeagueDivisionJSON * > SportsLeagueDivisionsResponseStateJSON::getDivisions(void)
  {
    assert(flagHasDivisions);
    return storeDivisions;
  }

const std::vector< SportsLeagueDivisionJSON * > SportsLeagueDivisionsResponseStateJSON::getDivisions(void) const
  {
    assert(flagHasDivisions);
    return storeDivisions;
  }

SportsLeagueDivisionsResponseStateJSON *SportsLeagueDivisionsResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueDivisionsResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueDivisionsResponseStateJSON>, SportsLeagueDivisionsResponseStateJSON *, bool> generator("Type SportsLeagueDivisionsResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
