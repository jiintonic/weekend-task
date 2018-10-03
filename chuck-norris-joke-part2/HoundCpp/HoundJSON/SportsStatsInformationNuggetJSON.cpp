/* file "SportsStatsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStatsInformationNuggetJSON.h"

#include "SportsStatsInformationNuggetJSON.h"


SportsStatsInformationNuggetJSON::SportsStatsInformationNuggetJSON(const SportsStatsInformationNuggetJSON &)
  {
    assert(false);
  }

SportsStatsInformationNuggetJSON &SportsStatsInformationNuggetJSON::operator=(const SportsStatsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsStatsInformationNuggetJSON::extraQueryDataToJSON(void) const
  {
    JSONArrayValue *generated_array_1_QueryData = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeQueryData.size(); ++num1)
      {
        JSONValueHandler handler_QueryData;
        storeQueryData[num1]->write_as_json(&handler_QueryData);
        handler_QueryData.result->add_reference();
        generated_array_1_QueryData->appendComponent(handler_QueryData.result);
        handler_QueryData.result->remove_reference();
      }
    return generated_array_1_QueryData;
  }

void SportsStatsInformationNuggetJSON::fromJSONQueryData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryData of SportsStatsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsStatsQueryDataJSON * > vector_QueryData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsStatsQueryDataJSON *convert_classy = SportsStatsQueryDataJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryData1[num1] = convert_classy;
      }
    initQueryData();
    for (size_t num2 = 0; num2 < vector_QueryData1.size(); ++num2)
        appendQueryData(vector_QueryData1[num2]);
    for (size_t num1 = 0; num1 < vector_QueryData1.size(); ++num1)
      {
        vector_QueryData1[num1]->remove_reference();
      }
  }

SportsStatsInformationNuggetJSON::SportsStatsInformationNuggetJSON(void) :
        flagHasQueryData(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsInformationNuggetJSON::~SportsStatsInformationNuggetJSON(void)
  {
    if (flagHasQueryData)
      {
        for (size_t num4 = 0; num4 < storeQueryData.size(); ++num4)
          {
            storeQueryData[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsStatsInformationNuggetJSON::getSportsNuggetKind(void) const
  {
    return "SportsStats";
  }

bool SportsStatsInformationNuggetJSON::hasQueryData(void) const
  {
    return flagHasQueryData;
  }

size_t SportsStatsInformationNuggetJSON::countOfQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData.size();
  }

SportsStatsQueryDataJSON * SportsStatsInformationNuggetJSON::elementOfQueryData(size_t element_num)
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

const SportsStatsQueryDataJSON * SportsStatsInformationNuggetJSON::elementOfQueryData(size_t element_num) const
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

std::vector< SportsStatsQueryDataJSON * > SportsStatsInformationNuggetJSON::getQueryData(void)
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

const std::vector< SportsStatsQueryDataJSON * > SportsStatsInformationNuggetJSON::getQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

SportsStatsInformationNuggetJSON *SportsStatsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStatsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStatsInformationNuggetJSON>, SportsStatsInformationNuggetJSON *, bool> generator("Type SportsStatsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
