/* file "SportsStandingsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsInformationNuggetJSON.h"

#include "SportsStandingsInformationNuggetJSON.h"


SportsStandingsInformationNuggetJSON::SportsStandingsInformationNuggetJSON(const SportsStandingsInformationNuggetJSON &)
  {
    assert(false);
  }

SportsStandingsInformationNuggetJSON &SportsStandingsInformationNuggetJSON::operator=(const SportsStandingsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsStandingsInformationNuggetJSON::extraQueryDataToJSON(void) const
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

JSONValue *SportsStandingsInformationNuggetJSON::extraStandingsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Standings = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeStandings.size(); ++num2)
      {
        JSONValueHandler handler_Standings;
        storeStandings[num2]->write_as_json(&handler_Standings);
        handler_Standings.result->add_reference();
        generated_array_2_Standings->appendComponent(handler_Standings.result);
        handler_Standings.result->remove_reference();
      }
    return generated_array_2_Standings;
  }

void SportsStandingsInformationNuggetJSON::fromJSONQueryData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryData of SportsStandingsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field QueryData of SportsStandingsInformationNuggetJSON has too few elements.");
    std::vector< SportsStandingsQueryDataJSON * > vector_QueryData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsStandingsQueryDataJSON *convert_classy = SportsStandingsQueryDataJSON::from_json(json_array1->component(num1), ignore_extras);
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

void SportsStandingsInformationNuggetJSON::fromJSONStandings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Standings of SportsStandingsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Standings of SportsStandingsInformationNuggetJSON has too few elements.");
    std::vector< SportsStandingsJSON * > vector_Standings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsStandingsJSON *convert_classy = SportsStandingsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Standings1[num1] = convert_classy;
      }
    assert(vector_Standings1.size() >= 1);
    initStandings();
    for (size_t num4 = 0; num4 < vector_Standings1.size(); ++num4)
        appendStandings(vector_Standings1[num4]);
    for (size_t num1 = 0; num1 < vector_Standings1.size(); ++num1)
      {
        vector_Standings1[num1]->remove_reference();
      }
  }

SportsStandingsInformationNuggetJSON::SportsStandingsInformationNuggetJSON(void) :
        flagHasQueryData(false),
        flagHasStandings(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsInformationNuggetJSON::~SportsStandingsInformationNuggetJSON(void)
  {
    if (flagHasQueryData)
      {
        for (size_t num7 = 0; num7 < storeQueryData.size(); ++num7)
          {
            storeQueryData[num7]->remove_reference();
          }
      }
    if (flagHasStandings)
      {
        for (size_t num8 = 0; num8 < storeStandings.size(); ++num8)
          {
            storeStandings[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsStandingsInformationNuggetJSON::getSportsNuggetKind(void) const
  {
    return "SportsStandings";
  }

bool SportsStandingsInformationNuggetJSON::hasQueryData(void) const
  {
    return flagHasQueryData;
  }

size_t SportsStandingsInformationNuggetJSON::countOfQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData.size();
  }

SportsStandingsQueryDataJSON * SportsStandingsInformationNuggetJSON::elementOfQueryData(size_t element_num)
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

const SportsStandingsQueryDataJSON * SportsStandingsInformationNuggetJSON::elementOfQueryData(size_t element_num) const
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

std::vector< SportsStandingsQueryDataJSON * > SportsStandingsInformationNuggetJSON::getQueryData(void)
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

const std::vector< SportsStandingsQueryDataJSON * > SportsStandingsInformationNuggetJSON::getQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

bool SportsStandingsInformationNuggetJSON::hasStandings(void) const
  {
    return flagHasStandings;
  }

size_t SportsStandingsInformationNuggetJSON::countOfStandings(void) const
  {
    assert(flagHasStandings);
    return storeStandings.size();
  }

SportsStandingsJSON * SportsStandingsInformationNuggetJSON::elementOfStandings(size_t element_num)
  {
    assert(flagHasStandings);
    return storeStandings[element_num];
  }

const SportsStandingsJSON * SportsStandingsInformationNuggetJSON::elementOfStandings(size_t element_num) const
  {
    assert(flagHasStandings);
    return storeStandings[element_num];
  }

std::vector< SportsStandingsJSON * > SportsStandingsInformationNuggetJSON::getStandings(void)
  {
    assert(flagHasStandings);
    return storeStandings;
  }

const std::vector< SportsStandingsJSON * > SportsStandingsInformationNuggetJSON::getStandings(void) const
  {
    assert(flagHasStandings);
    return storeStandings;
  }

SportsStandingsInformationNuggetJSON *SportsStandingsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsInformationNuggetJSON>, SportsStandingsInformationNuggetJSON *, bool> generator("Type SportsStandingsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
