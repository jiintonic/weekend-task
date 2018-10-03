/* file "SportsPlayersResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayersResponseStateJSON.h"

#include "SportsPlayersResponseStateJSON.h"


SportsPlayersResponseStateJSON::TypePlayersJSON::TypePlayersJSON(const TypePlayersJSON &)
  {
    assert(false);
  }

SportsPlayersResponseStateJSON::TypePlayersJSON &SportsPlayersResponseStateJSON::TypePlayersJSON::operator=(const TypePlayersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayersResponseStateJSON::TypePlayersJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of TypePlayersJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void SportsPlayersResponseStateJSON::TypePlayersJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

SportsPlayersResponseStateJSON::TypePlayersJSON::TypePlayersJSON(void) :
        flagHasID(false),
        flagHasLeague(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayersResponseStateJSON::TypePlayersJSON::~TypePlayersJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayersResponseStateJSON::TypePlayersJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsPlayersResponseStateJSON::TypePlayersJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsPlayersResponseStateJSON::TypePlayersJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool SportsPlayersResponseStateJSON::TypePlayersJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsPlayersResponseStateJSON::TypePlayersJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsPlayersResponseStateJSON::TypePlayersJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsPlayersResponseStateJSON::TypePlayersJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsPlayersResponseStateJSON::TypePlayersJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsPlayersResponseStateJSON::TypePlayersJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsPlayersResponseStateJSON::TypePlayersJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

SportsPlayersResponseStateJSON::SportsPlayersResponseStateJSON(const SportsPlayersResponseStateJSON &)
  {
    assert(false);
  }

SportsPlayersResponseStateJSON &SportsPlayersResponseStateJSON::operator=(const SportsPlayersResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayersResponseStateJSON::fromJSONPlayers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Players of SportsPlayersResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Players of SportsPlayersResponseStateJSON has too few elements.");
    std::vector< TypePlayersJSON * > vector_Players1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePlayersJSON *convert_classy = TypePlayersJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Players1[num1] = convert_classy;
      }
    assert(vector_Players1.size() >= 1);
    initPlayers();
    for (size_t num2 = 0; num2 < vector_Players1.size(); ++num2)
        appendPlayers(vector_Players1[num2]);
    for (size_t num1 = 0; num1 < vector_Players1.size(); ++num1)
      {
        vector_Players1[num1]->remove_reference();
      }
  }

SportsPlayersResponseStateJSON::SportsPlayersResponseStateJSON(void) :
        flagHasPlayers(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayersResponseStateJSON::~SportsPlayersResponseStateJSON(void)
  {
    if (flagHasPlayers)
      {
        for (size_t num4 = 0; num4 < storePlayers.size(); ++num4)
          {
            storePlayers[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayersResponseStateJSON::hasPlayers(void) const
  {
    return flagHasPlayers;
  }

size_t SportsPlayersResponseStateJSON::countOfPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers.size();
  }

SportsPlayersResponseStateJSON::TypePlayersJSON * SportsPlayersResponseStateJSON::elementOfPlayers(size_t element_num)
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

const SportsPlayersResponseStateJSON::TypePlayersJSON * SportsPlayersResponseStateJSON::elementOfPlayers(size_t element_num) const
  {
    assert(flagHasPlayers);
    return storePlayers[element_num];
  }

std::vector< SportsPlayersResponseStateJSON::TypePlayersJSON * > SportsPlayersResponseStateJSON::getPlayers(void)
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

const std::vector< SportsPlayersResponseStateJSON::TypePlayersJSON * > SportsPlayersResponseStateJSON::getPlayers(void) const
  {
    assert(flagHasPlayers);
    return storePlayers;
  }

SportsPlayersResponseStateJSON::TypePlayersJSON *SportsPlayersResponseStateJSON::TypePlayersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePlayersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool> generator("Type TypePlayers", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsPlayersResponseStateJSON *SportsPlayersResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayersResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayersResponseStateJSON>, SportsPlayersResponseStateJSON *, bool> generator("Type SportsPlayersResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
