/* file "SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON.h"


SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON(const SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON &SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::operator=(const SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::extraQueryComponentsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_QueryComponents = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeQueryComponents.size(); ++num1)
      {
        JSONValueHandler handler_QueryComponents;
        storeQueryComponents[num1]->write_as_json(&handler_QueryComponents);
        handler_QueryComponents.result->add_reference();
        generated_array_1_QueryComponents->appendComponent(handler_QueryComponents.result);
        handler_QueryComponents.result->remove_reference();
      }
    return generated_array_1_QueryComponents;
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::extraQueryResultsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_QueryResults = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeQueryResults.size(); ++num2)
      {
        JSONValueHandler handler_QueryResults;
        storeQueryResults[num2]->write_as_json(&handler_QueryResults);
        handler_QueryResults.result->add_reference();
        generated_array_2_QueryResults->appendComponent(handler_QueryResults.result);
        handler_QueryResults.result->remove_reference();
      }
    return generated_array_2_QueryResults;
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::extraEventInstancesToJSON(void) const
  {
    JSONArrayValue *generated_array_3_EventInstances = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeEventInstances.size(); ++num3)
      {
        JSONValueHandler handler_EventInstances;
        storeEventInstances[num3]->write_as_json(&handler_EventInstances);
        handler_EventInstances.result->add_reference();
        generated_array_3_EventInstances->appendComponent(handler_EventInstances.result);
        handler_EventInstances.result->remove_reference();
      }
    return generated_array_3_EventInstances;
  }

void SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::fromJSONQueryComponents(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryComponents of SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field QueryComponents of SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON has too few elements.");
    std::vector< SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * > vector_QueryComponents1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryComponents1[num1] = convert_classy;
      }
    assert(vector_QueryComponents1.size() >= 1);
    initQueryComponents();
    for (size_t num4 = 0; num4 < vector_QueryComponents1.size(); ++num4)
        appendQueryComponents(vector_QueryComponents1[num4]);
    for (size_t num1 = 0; num1 < vector_QueryComponents1.size(); ++num1)
      {
        vector_QueryComponents1[num1]->remove_reference();
      }
  }

void SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::fromJSONQueryResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryResults of SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field QueryResults of SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON has too few elements.");
    std::vector< SportsOlympicsEventSchedulesAndResultsQueryResultJSON * > vector_QueryResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventSchedulesAndResultsQueryResultJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsQueryResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryResults1[num1] = convert_classy;
      }
    assert(vector_QueryResults1.size() >= 1);
    initQueryResults();
    for (size_t num5 = 0; num5 < vector_QueryResults1.size(); ++num5)
        appendQueryResults(vector_QueryResults1[num5]);
    for (size_t num1 = 0; num1 < vector_QueryResults1.size(); ++num1)
      {
        vector_QueryResults1[num1]->remove_reference();
      }
  }

void SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::fromJSONEventInstances(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventInstances of SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceJSON * > vector_EventInstances1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventSchedulesAndResultsInstanceJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsInstanceJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_EventInstances1[num1] = convert_classy;
      }
    initEventInstances();
    for (size_t num6 = 0; num6 < vector_EventInstances1.size(); ++num6)
        appendEventInstances(vector_EventInstances1[num6]);
    for (size_t num1 = 0; num1 < vector_EventInstances1.size(); ++num1)
      {
        vector_EventInstances1[num1]->remove_reference();
      }
  }

SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON(void) :
        flagHasQueryComponents(false),
        flagHasQueryResults(false),
        flagHasEventInstances(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::~SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON(void)
  {
    if (flagHasQueryComponents)
      {
        for (size_t num10 = 0; num10 < storeQueryComponents.size(); ++num10)
          {
            storeQueryComponents[num10]->remove_reference();
          }
      }
    if (flagHasQueryResults)
      {
        for (size_t num11 = 0; num11 < storeQueryResults.size(); ++num11)
          {
            storeQueryResults[num11]->remove_reference();
          }
      }
    if (flagHasEventInstances)
      {
        for (size_t num12 = 0; num12 < storeEventInstances.size(); ++num12)
          {
            storeEventInstances[num12]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::getSportsOlympicsInformationNuggetKind(void) const
  {
    return "SportsOlympicsEventSchedulesAndResultsInformationNugget";
  }

bool SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::hasQueryComponents(void) const
  {
    return flagHasQueryComponents;
  }

size_t SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::countOfQueryComponents(void) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents.size();
  }

SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::elementOfQueryComponents(size_t element_num)
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents[element_num];
  }

const SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::elementOfQueryComponents(size_t element_num) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents[element_num];
  }

std::vector< SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * > SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::getQueryComponents(void)
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents;
  }

const std::vector< SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * > SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::getQueryComponents(void) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents;
  }

bool SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::hasQueryResults(void) const
  {
    return flagHasQueryResults;
  }

size_t SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::countOfQueryResults(void) const
  {
    assert(flagHasQueryResults);
    return storeQueryResults.size();
  }

SportsOlympicsEventSchedulesAndResultsQueryResultJSON * SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::elementOfQueryResults(size_t element_num)
  {
    assert(flagHasQueryResults);
    return storeQueryResults[element_num];
  }

const SportsOlympicsEventSchedulesAndResultsQueryResultJSON * SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::elementOfQueryResults(size_t element_num) const
  {
    assert(flagHasQueryResults);
    return storeQueryResults[element_num];
  }

std::vector< SportsOlympicsEventSchedulesAndResultsQueryResultJSON * > SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::getQueryResults(void)
  {
    assert(flagHasQueryResults);
    return storeQueryResults;
  }

const std::vector< SportsOlympicsEventSchedulesAndResultsQueryResultJSON * > SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::getQueryResults(void) const
  {
    assert(flagHasQueryResults);
    return storeQueryResults;
  }

bool SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::hasEventInstances(void) const
  {
    return flagHasEventInstances;
  }

size_t SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::countOfEventInstances(void) const
  {
    assert(flagHasEventInstances);
    return storeEventInstances.size();
  }

SportsOlympicsEventSchedulesAndResultsInstanceJSON * SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::elementOfEventInstances(size_t element_num)
  {
    assert(flagHasEventInstances);
    return storeEventInstances[element_num];
  }

const SportsOlympicsEventSchedulesAndResultsInstanceJSON * SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::elementOfEventInstances(size_t element_num) const
  {
    assert(flagHasEventInstances);
    return storeEventInstances[element_num];
  }

std::vector< SportsOlympicsEventSchedulesAndResultsInstanceJSON * > SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::getEventInstances(void)
  {
    assert(flagHasEventInstances);
    return storeEventInstances;
  }

const std::vector< SportsOlympicsEventSchedulesAndResultsInstanceJSON * > SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::getEventInstances(void) const
  {
    assert(flagHasEventInstances);
    return storeEventInstances;
  }

SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON>, SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
