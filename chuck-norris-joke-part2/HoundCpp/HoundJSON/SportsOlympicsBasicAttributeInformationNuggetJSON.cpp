/* file "SportsOlympicsBasicAttributeInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeInformationNuggetJSON.h"

#include "SportsOlympicsBasicAttributeInformationNuggetJSON.h"


SportsOlympicsBasicAttributeInformationNuggetJSON::SportsOlympicsBasicAttributeInformationNuggetJSON(const SportsOlympicsBasicAttributeInformationNuggetJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeInformationNuggetJSON &SportsOlympicsBasicAttributeInformationNuggetJSON::operator=(const SportsOlympicsBasicAttributeInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsBasicAttributeInformationNuggetJSON::extraQueryComponentsToJSON(void) const
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

JSONValue *SportsOlympicsBasicAttributeInformationNuggetJSON::extraGamesToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Games = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeGames.size(); ++num2)
      {
        JSONValueHandler handler_Games;
        storeGames[num2]->write_as_json(&handler_Games);
        handler_Games.result->add_reference();
        generated_array_2_Games->appendComponent(handler_Games.result);
        handler_Games.result->remove_reference();
      }
    return generated_array_2_Games;
  }

void SportsOlympicsBasicAttributeInformationNuggetJSON::fromJSONQueryComponents(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryComponents of SportsOlympicsBasicAttributeInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsBasicAttributeQueryComponentJSON * > vector_QueryComponents1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsBasicAttributeQueryComponentJSON *convert_classy = SportsOlympicsBasicAttributeQueryComponentJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryComponents1[num1] = convert_classy;
      }
    initQueryComponents();
    for (size_t num3 = 0; num3 < vector_QueryComponents1.size(); ++num3)
        appendQueryComponents(vector_QueryComponents1[num3]);
    for (size_t num1 = 0; num1 < vector_QueryComponents1.size(); ++num1)
      {
        vector_QueryComponents1[num1]->remove_reference();
      }
  }

void SportsOlympicsBasicAttributeInformationNuggetJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Games of SportsOlympicsBasicAttributeInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsGamesJSON * > vector_Games1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsGamesJSON *convert_classy = SportsOlympicsGamesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Games1[num1] = convert_classy;
      }
    initGames();
    for (size_t num4 = 0; num4 < vector_Games1.size(); ++num4)
        appendGames(vector_Games1[num4]);
    for (size_t num1 = 0; num1 < vector_Games1.size(); ++num1)
      {
        vector_Games1[num1]->remove_reference();
      }
  }

SportsOlympicsBasicAttributeInformationNuggetJSON::SportsOlympicsBasicAttributeInformationNuggetJSON(void) :
        flagHasQueryComponents(false),
        flagHasGames(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeInformationNuggetJSON::~SportsOlympicsBasicAttributeInformationNuggetJSON(void)
  {
    if (flagHasQueryComponents)
      {
        for (size_t num7 = 0; num7 < storeQueryComponents.size(); ++num7)
          {
            storeQueryComponents[num7]->remove_reference();
          }
      }
    if (flagHasGames)
      {
        for (size_t num8 = 0; num8 < storeGames.size(); ++num8)
          {
            storeGames[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsBasicAttributeInformationNuggetJSON::getSportsOlympicsInformationNuggetKind(void) const
  {
    return "SportsOlympicsBasicAttributeInformationNugget";
  }

bool SportsOlympicsBasicAttributeInformationNuggetJSON::hasQueryComponents(void) const
  {
    return flagHasQueryComponents;
  }

size_t SportsOlympicsBasicAttributeInformationNuggetJSON::countOfQueryComponents(void) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents.size();
  }

SportsOlympicsBasicAttributeQueryComponentJSON * SportsOlympicsBasicAttributeInformationNuggetJSON::elementOfQueryComponents(size_t element_num)
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents[element_num];
  }

const SportsOlympicsBasicAttributeQueryComponentJSON * SportsOlympicsBasicAttributeInformationNuggetJSON::elementOfQueryComponents(size_t element_num) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents[element_num];
  }

std::vector< SportsOlympicsBasicAttributeQueryComponentJSON * > SportsOlympicsBasicAttributeInformationNuggetJSON::getQueryComponents(void)
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents;
  }

const std::vector< SportsOlympicsBasicAttributeQueryComponentJSON * > SportsOlympicsBasicAttributeInformationNuggetJSON::getQueryComponents(void) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents;
  }

bool SportsOlympicsBasicAttributeInformationNuggetJSON::hasGames(void) const
  {
    return flagHasGames;
  }

size_t SportsOlympicsBasicAttributeInformationNuggetJSON::countOfGames(void) const
  {
    assert(flagHasGames);
    return storeGames.size();
  }

SportsOlympicsGamesJSON * SportsOlympicsBasicAttributeInformationNuggetJSON::elementOfGames(size_t element_num)
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

const SportsOlympicsGamesJSON * SportsOlympicsBasicAttributeInformationNuggetJSON::elementOfGames(size_t element_num) const
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

std::vector< SportsOlympicsGamesJSON * > SportsOlympicsBasicAttributeInformationNuggetJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const std::vector< SportsOlympicsGamesJSON * > SportsOlympicsBasicAttributeInformationNuggetJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

SportsOlympicsBasicAttributeInformationNuggetJSON *SportsOlympicsBasicAttributeInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeInformationNuggetJSON>, SportsOlympicsBasicAttributeInformationNuggetJSON *, bool> generator("Type SportsOlympicsBasicAttributeInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
