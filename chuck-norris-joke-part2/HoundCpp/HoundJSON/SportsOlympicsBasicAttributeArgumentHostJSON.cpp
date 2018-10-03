/* file "SportsOlympicsBasicAttributeArgumentHostJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeArgumentHostJSON.h"

#include "SportsOlympicsBasicAttributeArgumentHostJSON.h"


SportsOlympicsBasicAttributeArgumentHostJSON::SportsOlympicsBasicAttributeArgumentHostJSON(const SportsOlympicsBasicAttributeArgumentHostJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeArgumentHostJSON &SportsOlympicsBasicAttributeArgumentHostJSON::operator=(const SportsOlympicsBasicAttributeArgumentHostJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsBasicAttributeArgumentHostJSON::extraHostsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Hosts = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeHosts.size(); ++num1)
      {
        JSONValueHandler handler_Hosts;
        storeHosts[num1]->write_as_json(&handler_Hosts);
        handler_Hosts.result->add_reference();
        generated_array_1_Hosts->appendComponent(handler_Hosts.result);
        handler_Hosts.result->remove_reference();
      }
    return generated_array_1_Hosts;
  }

void SportsOlympicsBasicAttributeArgumentHostJSON::fromJSONHosts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Hosts of SportsOlympicsBasicAttributeArgumentHostJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Hosts of SportsOlympicsBasicAttributeArgumentHostJSON has too few elements.");
    std::vector< SportsOlympicsGamesCodeJSON * > vector_Hosts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsGamesCodeJSON *convert_classy = SportsOlympicsGamesCodeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Hosts1[num1] = convert_classy;
      }
    assert(vector_Hosts1.size() >= 1);
    initHosts();
    for (size_t num2 = 0; num2 < vector_Hosts1.size(); ++num2)
        appendHosts(vector_Hosts1[num2]);
    for (size_t num1 = 0; num1 < vector_Hosts1.size(); ++num1)
      {
        vector_Hosts1[num1]->remove_reference();
      }
  }

SportsOlympicsBasicAttributeArgumentHostJSON::SportsOlympicsBasicAttributeArgumentHostJSON(void) :
        flagHasHosts(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeArgumentHostJSON::~SportsOlympicsBasicAttributeArgumentHostJSON(void)
  {
    if (flagHasHosts)
      {
        for (size_t num4 = 0; num4 < storeHosts.size(); ++num4)
          {
            storeHosts[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsBasicAttributeArgumentHostJSON::getSportsOlympicsBasicAttributeArgumentKind(void) const
  {
    return "Host";
  }

bool SportsOlympicsBasicAttributeArgumentHostJSON::hasHosts(void) const
  {
    return flagHasHosts;
  }

size_t SportsOlympicsBasicAttributeArgumentHostJSON::countOfHosts(void) const
  {
    assert(flagHasHosts);
    return storeHosts.size();
  }

SportsOlympicsGamesCodeJSON * SportsOlympicsBasicAttributeArgumentHostJSON::elementOfHosts(size_t element_num)
  {
    assert(flagHasHosts);
    return storeHosts[element_num];
  }

const SportsOlympicsGamesCodeJSON * SportsOlympicsBasicAttributeArgumentHostJSON::elementOfHosts(size_t element_num) const
  {
    assert(flagHasHosts);
    return storeHosts[element_num];
  }

std::vector< SportsOlympicsGamesCodeJSON * > SportsOlympicsBasicAttributeArgumentHostJSON::getHosts(void)
  {
    assert(flagHasHosts);
    return storeHosts;
  }

const std::vector< SportsOlympicsGamesCodeJSON * > SportsOlympicsBasicAttributeArgumentHostJSON::getHosts(void) const
  {
    assert(flagHasHosts);
    return storeHosts;
  }

SportsOlympicsBasicAttributeArgumentHostJSON *SportsOlympicsBasicAttributeArgumentHostJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeArgumentHostJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentHostJSON>, SportsOlympicsBasicAttributeArgumentHostJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentHost", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
