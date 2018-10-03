/* file "SportsLeagueLeadersInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueLeadersInformationNuggetJSON.h"

#include "SportsLeagueLeadersInformationNuggetJSON.h"


SportsLeagueLeadersInformationNuggetJSON::SportsLeagueLeadersInformationNuggetJSON(const SportsLeagueLeadersInformationNuggetJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersInformationNuggetJSON &SportsLeagueLeadersInformationNuggetJSON::operator=(const SportsLeagueLeadersInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsLeagueLeadersInformationNuggetJSON::extraQueryDataToJSON(void) const
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

JSONValue *SportsLeagueLeadersInformationNuggetJSON::extraLeagueLeadersToJSON(void) const
  {
    JSONArrayValue *generated_array_2_LeagueLeaders = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeLeagueLeaders.size(); ++num2)
      {
        JSONValueHandler handler_LeagueLeaders;
        storeLeagueLeaders[num2]->write_as_json(&handler_LeagueLeaders);
        handler_LeagueLeaders.result->add_reference();
        generated_array_2_LeagueLeaders->appendComponent(handler_LeagueLeaders.result);
        handler_LeagueLeaders.result->remove_reference();
      }
    return generated_array_2_LeagueLeaders;
  }

void SportsLeagueLeadersInformationNuggetJSON::fromJSONQueryData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryData of SportsLeagueLeadersInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field QueryData of SportsLeagueLeadersInformationNuggetJSON has too few elements.");
    std::vector< SportsLeagueLeadersQueryDataJSON * > vector_QueryData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueLeadersQueryDataJSON *convert_classy = SportsLeagueLeadersQueryDataJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryData1[num1] = convert_classy;
      }
    assert(vector_QueryData1.size() >= 1);
    initQueryData();
    for (size_t num3 = 0; num3 < vector_QueryData1.size(); ++num3)
        appendQueryData(vector_QueryData1[num3]);
    for (size_t num1 = 0; num1 < vector_QueryData1.size(); ++num1)
      {
        vector_QueryData1[num1]->remove_reference();
      }
  }

void SportsLeagueLeadersInformationNuggetJSON::fromJSONLeagueLeaders(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LeagueLeaders of SportsLeagueLeadersInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field LeagueLeaders of SportsLeagueLeadersInformationNuggetJSON has too few elements.");
    std::vector< SportsLeagueLeadersJSON * > vector_LeagueLeaders1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueLeadersJSON *convert_classy = SportsLeagueLeadersJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_LeagueLeaders1[num1] = convert_classy;
      }
    assert(vector_LeagueLeaders1.size() >= 1);
    initLeagueLeaders();
    for (size_t num4 = 0; num4 < vector_LeagueLeaders1.size(); ++num4)
        appendLeagueLeaders(vector_LeagueLeaders1[num4]);
    for (size_t num1 = 0; num1 < vector_LeagueLeaders1.size(); ++num1)
      {
        vector_LeagueLeaders1[num1]->remove_reference();
      }
  }

SportsLeagueLeadersInformationNuggetJSON::SportsLeagueLeadersInformationNuggetJSON(void) :
        flagHasQueryData(false),
        flagHasLeagueLeaders(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersInformationNuggetJSON::~SportsLeagueLeadersInformationNuggetJSON(void)
  {
    if (flagHasQueryData)
      {
        for (size_t num7 = 0; num7 < storeQueryData.size(); ++num7)
          {
            storeQueryData[num7]->remove_reference();
          }
      }
    if (flagHasLeagueLeaders)
      {
        for (size_t num8 = 0; num8 < storeLeagueLeaders.size(); ++num8)
          {
            storeLeagueLeaders[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsLeagueLeadersInformationNuggetJSON::getSportsNuggetKind(void) const
  {
    return "SportsLeagueLeaders";
  }

bool SportsLeagueLeadersInformationNuggetJSON::hasQueryData(void) const
  {
    return flagHasQueryData;
  }

size_t SportsLeagueLeadersInformationNuggetJSON::countOfQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData.size();
  }

SportsLeagueLeadersQueryDataJSON * SportsLeagueLeadersInformationNuggetJSON::elementOfQueryData(size_t element_num)
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

const SportsLeagueLeadersQueryDataJSON * SportsLeagueLeadersInformationNuggetJSON::elementOfQueryData(size_t element_num) const
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

std::vector< SportsLeagueLeadersQueryDataJSON * > SportsLeagueLeadersInformationNuggetJSON::getQueryData(void)
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

const std::vector< SportsLeagueLeadersQueryDataJSON * > SportsLeagueLeadersInformationNuggetJSON::getQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

bool SportsLeagueLeadersInformationNuggetJSON::hasLeagueLeaders(void) const
  {
    return flagHasLeagueLeaders;
  }

size_t SportsLeagueLeadersInformationNuggetJSON::countOfLeagueLeaders(void) const
  {
    assert(flagHasLeagueLeaders);
    return storeLeagueLeaders.size();
  }

SportsLeagueLeadersJSON * SportsLeagueLeadersInformationNuggetJSON::elementOfLeagueLeaders(size_t element_num)
  {
    assert(flagHasLeagueLeaders);
    return storeLeagueLeaders[element_num];
  }

const SportsLeagueLeadersJSON * SportsLeagueLeadersInformationNuggetJSON::elementOfLeagueLeaders(size_t element_num) const
  {
    assert(flagHasLeagueLeaders);
    return storeLeagueLeaders[element_num];
  }

std::vector< SportsLeagueLeadersJSON * > SportsLeagueLeadersInformationNuggetJSON::getLeagueLeaders(void)
  {
    assert(flagHasLeagueLeaders);
    return storeLeagueLeaders;
  }

const std::vector< SportsLeagueLeadersJSON * > SportsLeagueLeadersInformationNuggetJSON::getLeagueLeaders(void) const
  {
    assert(flagHasLeagueLeaders);
    return storeLeagueLeaders;
  }

SportsLeagueLeadersInformationNuggetJSON *SportsLeagueLeadersInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueLeadersInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersInformationNuggetJSON>, SportsLeagueLeadersInformationNuggetJSON *, bool> generator("Type SportsLeagueLeadersInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
