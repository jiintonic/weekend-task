/* file "SportsOlympicsMedalStandingsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsInformationNuggetJSON.h"

#include "SportsOlympicsMedalStandingsInformationNuggetJSON.h"


SportsOlympicsMedalStandingsInformationNuggetJSON::SportsOlympicsMedalStandingsInformationNuggetJSON(const SportsOlympicsMedalStandingsInformationNuggetJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsInformationNuggetJSON &SportsOlympicsMedalStandingsInformationNuggetJSON::operator=(const SportsOlympicsMedalStandingsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsMedalStandingsInformationNuggetJSON::extraQueryComponentsToJSON(void) const
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

JSONValue *SportsOlympicsMedalStandingsInformationNuggetJSON::extraMedalStandingsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_MedalStandings = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeMedalStandings.size(); ++num2)
      {
        JSONValueHandler handler_MedalStandings;
        storeMedalStandings[num2]->write_as_json(&handler_MedalStandings);
        handler_MedalStandings.result->add_reference();
        generated_array_2_MedalStandings->appendComponent(handler_MedalStandings.result);
        handler_MedalStandings.result->remove_reference();
      }
    return generated_array_2_MedalStandings;
  }

void SportsOlympicsMedalStandingsInformationNuggetJSON::fromJSONQueryComponents(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryComponents of SportsOlympicsMedalStandingsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsMedalStandingsQueryComponentJSON * > vector_QueryComponents1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsMedalStandingsQueryComponentJSON *convert_classy = SportsOlympicsMedalStandingsQueryComponentJSON::from_json(json_array1->component(num1), ignore_extras);
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

void SportsOlympicsMedalStandingsInformationNuggetJSON::fromJSONMedalStandings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MedalStandings of SportsOlympicsMedalStandingsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsMedalStandingsJSON * > vector_MedalStandings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsMedalStandingsJSON *convert_classy = SportsOlympicsMedalStandingsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MedalStandings1[num1] = convert_classy;
      }
    initMedalStandings();
    for (size_t num4 = 0; num4 < vector_MedalStandings1.size(); ++num4)
        appendMedalStandings(vector_MedalStandings1[num4]);
    for (size_t num1 = 0; num1 < vector_MedalStandings1.size(); ++num1)
      {
        vector_MedalStandings1[num1]->remove_reference();
      }
  }

SportsOlympicsMedalStandingsInformationNuggetJSON::SportsOlympicsMedalStandingsInformationNuggetJSON(void) :
        flagHasQueryComponents(false),
        flagHasMedalStandings(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsMedalStandingsInformationNuggetJSON::~SportsOlympicsMedalStandingsInformationNuggetJSON(void)
  {
    if (flagHasQueryComponents)
      {
        for (size_t num7 = 0; num7 < storeQueryComponents.size(); ++num7)
          {
            storeQueryComponents[num7]->remove_reference();
          }
      }
    if (flagHasMedalStandings)
      {
        for (size_t num8 = 0; num8 < storeMedalStandings.size(); ++num8)
          {
            storeMedalStandings[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsMedalStandingsInformationNuggetJSON::getSportsOlympicsInformationNuggetKind(void) const
  {
    return "SportsOlympicsMedalStandingsInformationNugget";
  }

bool SportsOlympicsMedalStandingsInformationNuggetJSON::hasQueryComponents(void) const
  {
    return flagHasQueryComponents;
  }

size_t SportsOlympicsMedalStandingsInformationNuggetJSON::countOfQueryComponents(void) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents.size();
  }

SportsOlympicsMedalStandingsQueryComponentJSON * SportsOlympicsMedalStandingsInformationNuggetJSON::elementOfQueryComponents(size_t element_num)
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents[element_num];
  }

const SportsOlympicsMedalStandingsQueryComponentJSON * SportsOlympicsMedalStandingsInformationNuggetJSON::elementOfQueryComponents(size_t element_num) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents[element_num];
  }

std::vector< SportsOlympicsMedalStandingsQueryComponentJSON * > SportsOlympicsMedalStandingsInformationNuggetJSON::getQueryComponents(void)
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents;
  }

const std::vector< SportsOlympicsMedalStandingsQueryComponentJSON * > SportsOlympicsMedalStandingsInformationNuggetJSON::getQueryComponents(void) const
  {
    assert(flagHasQueryComponents);
    return storeQueryComponents;
  }

bool SportsOlympicsMedalStandingsInformationNuggetJSON::hasMedalStandings(void) const
  {
    return flagHasMedalStandings;
  }

size_t SportsOlympicsMedalStandingsInformationNuggetJSON::countOfMedalStandings(void) const
  {
    assert(flagHasMedalStandings);
    return storeMedalStandings.size();
  }

SportsOlympicsMedalStandingsJSON * SportsOlympicsMedalStandingsInformationNuggetJSON::elementOfMedalStandings(size_t element_num)
  {
    assert(flagHasMedalStandings);
    return storeMedalStandings[element_num];
  }

const SportsOlympicsMedalStandingsJSON * SportsOlympicsMedalStandingsInformationNuggetJSON::elementOfMedalStandings(size_t element_num) const
  {
    assert(flagHasMedalStandings);
    return storeMedalStandings[element_num];
  }

std::vector< SportsOlympicsMedalStandingsJSON * > SportsOlympicsMedalStandingsInformationNuggetJSON::getMedalStandings(void)
  {
    assert(flagHasMedalStandings);
    return storeMedalStandings;
  }

const std::vector< SportsOlympicsMedalStandingsJSON * > SportsOlympicsMedalStandingsInformationNuggetJSON::getMedalStandings(void) const
  {
    assert(flagHasMedalStandings);
    return storeMedalStandings;
  }

SportsOlympicsMedalStandingsInformationNuggetJSON *SportsOlympicsMedalStandingsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsInformationNuggetJSON>, SportsOlympicsMedalStandingsInformationNuggetJSON *, bool> generator("Type SportsOlympicsMedalStandingsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
