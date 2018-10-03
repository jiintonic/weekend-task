/* file "SportsStatsQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStatsQueryStateJSON.h"

#include "SportsStatsQueryStateJSON.h"


SportsStatsQueryStateJSON::TypeStatRequestsJSON::TypeStatRequestsJSON(const TypeStatRequestsJSON &)
  {
    assert(false);
  }

SportsStatsQueryStateJSON::TypeStatRequestsJSON &SportsStatsQueryStateJSON::TypeStatRequestsJSON::operator=(const TypeStatRequestsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsQueryStateJSON::TypeStatRequestsJSON::fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamOrPlayerJSON *convert_classy = SportsTeamOrPlayerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeamOrPlayer(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStatsQueryStateJSON::TypeStatRequestsJSON::fromJSONStatisticType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStatsTypeJSON *convert_classy = SportsStatsTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStatisticType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStatsQueryStateJSON::TypeStatRequestsJSON::fromJSONArguments(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Arguments of TypeStatRequestsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Arguments of TypeStatRequestsJSON has too few elements.");
    std::vector< SportsStatsArgumentArrayJSON * > vector_Arguments1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsStatsArgumentArrayJSON *convert_classy = SportsStatsArgumentArrayJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Arguments1[num1] = convert_classy;
      }
    assert(vector_Arguments1.size() >= 1);
    initArguments();
    for (size_t num3 = 0; num3 < vector_Arguments1.size(); ++num3)
        appendArguments(vector_Arguments1[num3]);
    for (size_t num1 = 0; num1 < vector_Arguments1.size(); ++num1)
      {
        vector_Arguments1[num1]->remove_reference();
      }
  }

SportsStatsQueryStateJSON::TypeStatRequestsJSON::TypeStatRequestsJSON(void) :
        flagHasTeamOrPlayer(false),
        flagHasStatisticType(false),
        flagHasArguments(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsQueryStateJSON::TypeStatRequestsJSON::~TypeStatRequestsJSON(void)
  {
    if (flagHasTeamOrPlayer)
      {
        storeTeamOrPlayer->remove_reference();
      }
    if (flagHasStatisticType)
      {
        storeStatisticType->remove_reference();
      }
    if (flagHasArguments)
      {
        for (size_t num7 = 0; num7 < storeArguments.size(); ++num7)
          {
            storeArguments[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsQueryStateJSON::TypeStatRequestsJSON::hasTeamOrPlayer(void) const
  {
    return flagHasTeamOrPlayer;
  }

SportsTeamOrPlayerJSON * SportsStatsQueryStateJSON::TypeStatRequestsJSON::getTeamOrPlayer(void)
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

const SportsTeamOrPlayerJSON * SportsStatsQueryStateJSON::TypeStatRequestsJSON::getTeamOrPlayer(void) const
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

SportsTeamOrPlayerJSON::TypeValue SportsStatsQueryStateJSON::TypeStatRequestsJSON::getTeamOrPlayerValue(void)
  {
    return getTeamOrPlayer()->getValue();
  }

const SportsTeamOrPlayerJSON::TypeValue SportsStatsQueryStateJSON::TypeStatRequestsJSON::getTeamOrPlayerValue(void) const
  {
    return getTeamOrPlayer()->getValue();
  }

bool SportsStatsQueryStateJSON::TypeStatRequestsJSON::hasStatisticType(void) const
  {
    return flagHasStatisticType;
  }

SportsStatsTypeJSON * SportsStatsQueryStateJSON::TypeStatRequestsJSON::getStatisticType(void)
  {
    assert(flagHasStatisticType);
    return storeStatisticType;
  }

const SportsStatsTypeJSON * SportsStatsQueryStateJSON::TypeStatRequestsJSON::getStatisticType(void) const
  {
    assert(flagHasStatisticType);
    return storeStatisticType;
  }

SportsStatsTypeJSON::TypeValue SportsStatsQueryStateJSON::TypeStatRequestsJSON::getStatisticTypeValue(void)
  {
    return getStatisticType()->getValue();
  }

const SportsStatsTypeJSON::TypeValue SportsStatsQueryStateJSON::TypeStatRequestsJSON::getStatisticTypeValue(void) const
  {
    return getStatisticType()->getValue();
  }

const char *SportsStatsQueryStateJSON::TypeStatRequestsJSON::getStatisticTypeAsChars(void) const
  {
    return getStatisticType()->getValueAsChars();
  }

std::string SportsStatsQueryStateJSON::TypeStatRequestsJSON::getStatisticTypeAsString(void) const
  {
    return getStatisticType()->getValueAsString();
  }

bool SportsStatsQueryStateJSON::TypeStatRequestsJSON::hasArguments(void) const
  {
    return flagHasArguments;
  }

size_t SportsStatsQueryStateJSON::TypeStatRequestsJSON::countOfArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments.size();
  }

SportsStatsArgumentArrayJSON * SportsStatsQueryStateJSON::TypeStatRequestsJSON::elementOfArguments(size_t element_num)
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

const SportsStatsArgumentArrayJSON * SportsStatsQueryStateJSON::TypeStatRequestsJSON::elementOfArguments(size_t element_num) const
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

std::vector< SportsStatsArgumentArrayJSON * > SportsStatsQueryStateJSON::TypeStatRequestsJSON::getArguments(void)
  {
    assert(flagHasArguments);
    return storeArguments;
  }

const std::vector< SportsStatsArgumentArrayJSON * > SportsStatsQueryStateJSON::TypeStatRequestsJSON::getArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments;
  }

SportsStatsQueryStateJSON::SportsStatsQueryStateJSON(const SportsStatsQueryStateJSON &)
  {
    assert(false);
  }

SportsStatsQueryStateJSON &SportsStatsQueryStateJSON::operator=(const SportsStatsQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsQueryStateJSON::fromJSONStatRequests(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StatRequests of SportsStatsQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field StatRequests of SportsStatsQueryStateJSON has too few elements.");
    std::vector< TypeStatRequestsJSON * > vector_StatRequests1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeStatRequestsJSON *convert_classy = TypeStatRequestsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_StatRequests1[num1] = convert_classy;
      }
    assert(vector_StatRequests1.size() >= 1);
    initStatRequests();
    for (size_t num4 = 0; num4 < vector_StatRequests1.size(); ++num4)
        appendStatRequests(vector_StatRequests1[num4]);
    for (size_t num1 = 0; num1 < vector_StatRequests1.size(); ++num1)
      {
        vector_StatRequests1[num1]->remove_reference();
      }
  }

SportsStatsQueryStateJSON::SportsStatsQueryStateJSON(void) :
        flagHasStatRequests(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsQueryStateJSON::~SportsStatsQueryStateJSON(void)
  {
    if (flagHasStatRequests)
      {
        for (size_t num10 = 0; num10 < storeStatRequests.size(); ++num10)
          {
            storeStatRequests[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsQueryStateJSON::hasStatRequests(void) const
  {
    return flagHasStatRequests;
  }

size_t SportsStatsQueryStateJSON::countOfStatRequests(void) const
  {
    assert(flagHasStatRequests);
    return storeStatRequests.size();
  }

SportsStatsQueryStateJSON::TypeStatRequestsJSON * SportsStatsQueryStateJSON::elementOfStatRequests(size_t element_num)
  {
    assert(flagHasStatRequests);
    return storeStatRequests[element_num];
  }

const SportsStatsQueryStateJSON::TypeStatRequestsJSON * SportsStatsQueryStateJSON::elementOfStatRequests(size_t element_num) const
  {
    assert(flagHasStatRequests);
    return storeStatRequests[element_num];
  }

std::vector< SportsStatsQueryStateJSON::TypeStatRequestsJSON * > SportsStatsQueryStateJSON::getStatRequests(void)
  {
    assert(flagHasStatRequests);
    return storeStatRequests;
  }

const std::vector< SportsStatsQueryStateJSON::TypeStatRequestsJSON * > SportsStatsQueryStateJSON::getStatRequests(void) const
  {
    assert(flagHasStatRequests);
    return storeStatRequests;
  }

SportsStatsQueryStateJSON::TypeStatRequestsJSON *SportsStatsQueryStateJSON::TypeStatRequestsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeStatRequestsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeStatRequestsJSON>, TypeStatRequestsJSON *, bool> generator("Type TypeStatRequests", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStatsQueryStateJSON *SportsStatsQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStatsQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStatsQueryStateJSON>, SportsStatsQueryStateJSON *, bool> generator("Type SportsStatsQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
