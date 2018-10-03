/* file "SportsPlayersInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayersInformationNuggetJSON.h"

#include "SportsPlayersInformationNuggetJSON.h"


SportsPlayersInformationNuggetJSON::SportsPlayersInformationNuggetJSON(const SportsPlayersInformationNuggetJSON &)
  {
    assert(false);
  }

SportsPlayersInformationNuggetJSON &SportsPlayersInformationNuggetJSON::operator=(const SportsPlayersInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsPlayersInformationNuggetJSON::extraQueryDataToJSON(void) const
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

JSONValue *SportsPlayersInformationNuggetJSON::extraPlayersToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Players = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storePlayers.size(); ++num2)
      {
        JSONValueHandler handler_Players;
        storePlayers[num2]->write_as_json(&handler_Players);
        handler_Players.result->add_reference();
        generated_array_2_Players->appendComponent(handler_Players.result);
        handler_Players.result->remove_reference();
      }
    return generated_array_2_Players;
  }

void SportsPlayersInformationNuggetJSON::fromJSONQueryData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryData of SportsPlayersInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field QueryData of SportsPlayersInformationNuggetJSON has too few elements.");
    std::vector< SportsPlayersQueryDataJSON * > vector_QueryData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayersQueryDataJSON *convert_classy = SportsPlayersQueryDataJSON::from_json(json_array1->component(num1), ignore_extras);
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

void SportsPlayersInformationNuggetJSON::fromJSONPlayers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Players of SportsPlayersInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsPlayerJSON * > vector_Players1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayerJSON *convert_classy = SportsPlayerJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Players1[num1] = convert_classy;
      }
    initPlayers();
    for (size_t num4 = 0; num4 < vector_Players1.size(); ++num4)
        appendPlayers(vector_Players1[num4]);
    for (size_t num1 = 0; num1 < vector_Players1.size(); ++num1)
      {
        vector_Players1[num1]->remove_reference();
      }
  }

SportsPlayersInformationNuggetJSON::SportsPlayersInformationNuggetJSON(void) :
        flagHasQueryData(false),
        flagHasPlayers(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayersInformationNuggetJSON::~SportsPlayersInformationNuggetJSON(void)
  {
    if (flagHasQueryData)
      {
        for (size_t num7 = 0; num7 < storeQueryData.size(); ++num7)
          {
            storeQueryData[num7]->remove_reference();
          }
      }
    if (flagHasPlayers)
      {
        for (size_t num8 = 0; num8 < storePlayers.size(); ++num8)
          {
            storePlayers[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsPlayersInformationNuggetJSON::getSportsNuggetKind(void) const
  {
    return "SportsPlayers";
  }

bool SportsPlayersInformationNuggetJSON::hasQueryData(void) const
  {
    return flagHasQueryData;
  }

size_t SportsPlayersInformationNuggetJSON::countOfQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData.size();
  }

SportsPlayersQueryDataJSON * SportsPlayersInformationNuggetJSON::elementOfQueryData(size_t element_num)
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

const SportsPlayersQueryDataJSON * SportsPlayersInformationNuggetJSON::elementOfQueryData(size_t element_num) const
  {
    assert(flagHasQueryData);
    return storeQueryData[element_num];
  }

std::vector< SportsPlayersQueryDataJSON * > SportsPlayersInformationNuggetJSON::getQueryData(void)
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

const std::vector< SportsPlayersQueryDataJSON * > SportsPlayersInformationNuggetJSON::getQueryData(void) const
  {
    assert(flagHasQueryData);
    return storeQueryData;
  }

bool SportsPlayersInformationNuggetJSON::hasPlayers(void) const
  {
    return flagHasPlayers;
  }

size_t SportsPlayersInformationNuggetJSON::countOfPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers.size();
  }

SportsPlayerJSON * SportsPlayersInformationNuggetJSON::elementOfPlayers(size_t element_num)
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

const SportsPlayerJSON * SportsPlayersInformationNuggetJSON::elementOfPlayers(size_t element_num) const
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

std::vector< SportsPlayerJSON * > SportsPlayersInformationNuggetJSON::getPlayers(void)
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

const std::vector< SportsPlayerJSON * > SportsPlayersInformationNuggetJSON::getPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

SportsPlayersInformationNuggetJSON *SportsPlayersInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayersInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayersInformationNuggetJSON>, SportsPlayersInformationNuggetJSON *, bool> generator("Type SportsPlayersInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
