/* file "SportsOlympicsEventSchedulesAndResultsQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsQueryStateJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsQueryStateJSON.h"


SportsOlympicsEventSchedulesAndResultsQueryStateJSON::SportsOlympicsEventSchedulesAndResultsQueryStateJSON(const SportsOlympicsEventSchedulesAndResultsQueryStateJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsQueryStateJSON &SportsOlympicsEventSchedulesAndResultsQueryStateJSON::operator=(const SportsOlympicsEventSchedulesAndResultsQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsQueryStateJSON::fromJSONArgumentSets(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ArgumentSets of SportsOlympicsEventSchedulesAndResultsQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ArgumentSets of SportsOlympicsEventSchedulesAndResultsQueryStateJSON has too few elements.");
    std::vector< std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > > vector_ArgumentSets1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        JSONArrayValue *json_array2 = json_array1->component(num1)->array_value();
        if (json_array2 == NULL)
            throw("The value for an element of field ArgumentSets of SportsOlympicsEventSchedulesAndResultsQueryStateJSON is not an array.");
        size_t count2 = json_array2->componentCount();
        if (count2 < 1)
            throw("The value for an element of field ArgumentSets of SportsOlympicsEventSchedulesAndResultsQueryStateJSON has too few elements.");
        std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > vector_ArgumentSets2(count2);
        for (size_t num2 = 0; num2 < count2; ++num2)
          {
            SportsOlympicsEventSchedulesAndResultsArgumentJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsArgumentJSON::from_json(json_array2->component(num2), ignore_extras);
            convert_classy->add_reference();
            vector_ArgumentSets2[num2] = convert_classy;
          }
        vector_ArgumentSets1[num1] = vector_ArgumentSets2;
      }
    assert(vector_ArgumentSets1.size() >= 1);
    initArgumentSets();
    for (size_t num2 = 0; num2 < vector_ArgumentSets1.size(); ++num2)
        appendArgumentSets(vector_ArgumentSets1[num2]);
    for (size_t num1 = 0; num1 < vector_ArgumentSets1.size(); ++num1)
      {
        for (size_t num2 = 0; num2 < vector_ArgumentSets1[num1].size(); ++num2)
          {
            vector_ArgumentSets1[num1][num2]->remove_reference();
          }
      }
  }

SportsOlympicsEventSchedulesAndResultsQueryStateJSON::SportsOlympicsEventSchedulesAndResultsQueryStateJSON(void) :
        flagHasArgumentSets(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsQueryStateJSON::~SportsOlympicsEventSchedulesAndResultsQueryStateJSON(void)
  {
    if (flagHasArgumentSets)
      {
        for (size_t num7 = 0; num7 < storeArgumentSets.size(); ++num7)
          {
            for (size_t num8 = 0; num8 < storeArgumentSets[num7].size(); ++num8)
              {
                storeArgumentSets[num7][num8]->remove_reference();
              }
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsEventSchedulesAndResultsQueryStateJSON::hasArgumentSets(void) const
  {
    return flagHasArgumentSets;
  }

size_t SportsOlympicsEventSchedulesAndResultsQueryStateJSON::countOfArgumentSets(void) const
  {
    assert(flagHasArgumentSets);
    return storeArgumentSets.size();
  }

std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > SportsOlympicsEventSchedulesAndResultsQueryStateJSON::elementOfArgumentSets(size_t element_num)
  {
    assert(flagHasArgumentSets);
    return storeArgumentSets[element_num];
  }

const std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > SportsOlympicsEventSchedulesAndResultsQueryStateJSON::elementOfArgumentSets(size_t element_num) const
  {
    assert(flagHasArgumentSets);
    return storeArgumentSets[element_num];
  }

std::vector< std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > > SportsOlympicsEventSchedulesAndResultsQueryStateJSON::getArgumentSets(void)
  {
    assert(flagHasArgumentSets);
    return storeArgumentSets;
  }

const std::vector< std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > > SportsOlympicsEventSchedulesAndResultsQueryStateJSON::getArgumentSets(void) const
  {
    assert(flagHasArgumentSets);
    return storeArgumentSets;
  }

SportsOlympicsEventSchedulesAndResultsQueryStateJSON *SportsOlympicsEventSchedulesAndResultsQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryStateJSON>, SportsOlympicsEventSchedulesAndResultsQueryStateJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
