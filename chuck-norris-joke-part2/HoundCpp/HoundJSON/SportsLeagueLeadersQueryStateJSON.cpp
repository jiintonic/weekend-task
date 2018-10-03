/* file "SportsLeagueLeadersQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueLeadersQueryStateJSON.h"

#include "SportsLeagueLeadersQueryStateJSON.h"


SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::TypeTeamOrPlayer(void)
  {
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::TypeTeamOrPlayer(const TypeTeamOrPlayer &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::TypeTeamOrPlayer(TypeTeamOrPlayerKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::operator==(const TypeTeamOrPlayer &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::operator!=(const TypeTeamOrPlayer &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::operator<(const TypeTeamOrPlayer &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::operator>(const TypeTeamOrPlayer &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::operator>=(const TypeTeamOrPlayer &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer::operator<=(const TypeTeamOrPlayer &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayerKnownValues SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::stringToTeamOrPlayer(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strcmp(&(chars[1]), "layer") == 0)
                return TeamOrPlayer_Player;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "eam") == 0)
                return TeamOrPlayer_Team;
            break;
        default:
            break;
      }
    return TeamOrPlayer__none;
  }

const char *SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::stringFromTeamOrPlayer(TypeTeamOrPlayerKnownValues the_enum)
  {
    switch (the_enum)
      {
        case TeamOrPlayer_Team:
            return "Team";
        case TeamOrPlayer_Player:
            return "Player";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeQueryDataAndResultsJSON(const TypeQueryDataAndResultsJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON &SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::operator=(const TypeQueryDataAndResultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of TypeQueryDataAndResultsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of TypeQueryDataAndResultsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONStatisticType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStatsTypeJSON *convert_classy = SportsStatsTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStatisticType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamOrPlayer of TypeQueryDataAndResultsJSON is not a string.");
    TypeTeamOrPlayer the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layer") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TeamOrPlayer_Player;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "eam") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TeamOrPlayer_Team;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setTeamOrPlayer(the_open_enum);
  }

void SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::fromJSONArguments(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Arguments of TypeQueryDataAndResultsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Arguments of TypeQueryDataAndResultsJSON has too few elements.");
    std::vector< SportsLeagueLeadersArgumentArrayJSON * > vector_Arguments1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsLeagueLeadersArgumentArrayJSON *convert_classy = SportsLeagueLeadersArgumentArrayJSON::from_json(json_array1->component(num1), ignore_extras);
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

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeQueryDataAndResultsJSON(void) :
        flagHasDivision(false),
        flagHasLeague(false),
        flagHasRank(false),
        flagHasStatisticType(false),
        flagHasTeamOrPlayer(false),
        flagHasArguments(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::~TypeQueryDataAndResultsJSON(void)
  {
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
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

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::hasStatisticType(void) const
  {
    return flagHasStatisticType;
  }

SportsStatsTypeJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getStatisticType(void)
  {
    assert(flagHasStatisticType);
    return storeStatisticType;
  }

const SportsStatsTypeJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getStatisticType(void) const
  {
    assert(flagHasStatisticType);
    return storeStatisticType;
  }

SportsStatsTypeJSON::TypeValue SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getStatisticTypeValue(void)
  {
    return getStatisticType()->getValue();
  }

const SportsStatsTypeJSON::TypeValue SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getStatisticTypeValue(void) const
  {
    return getStatisticType()->getValue();
  }

const char *SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getStatisticTypeAsChars(void) const
  {
    return getStatisticType()->getValueAsChars();
  }

std::string SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getStatisticTypeAsString(void) const
  {
    return getStatisticType()->getValueAsString();
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::hasTeamOrPlayer(void) const
  {
    return flagHasTeamOrPlayer;
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getTeamOrPlayer(void)
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

const SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::TypeTeamOrPlayer SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getTeamOrPlayer(void) const
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

const char *SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getTeamOrPlayerAsChars(void) const
  {
    TypeTeamOrPlayer result = getTeamOrPlayer();
    if (result.in_known_list)
        return stringFromTeamOrPlayer(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getTeamOrPlayerAsString(void) const
  {
    return getTeamOrPlayerAsChars();
  }

bool SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::hasArguments(void) const
  {
    return flagHasArguments;
  }

size_t SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::countOfArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments.size();
  }

SportsLeagueLeadersArgumentArrayJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::elementOfArguments(size_t element_num)
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

const SportsLeagueLeadersArgumentArrayJSON * SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::elementOfArguments(size_t element_num) const
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

std::vector< SportsLeagueLeadersArgumentArrayJSON * > SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getArguments(void)
  {
    assert(flagHasArguments);
    return storeArguments;
  }

const std::vector< SportsLeagueLeadersArgumentArrayJSON * > SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::getArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments;
  }

SportsLeagueLeadersQueryStateJSON::SportsLeagueLeadersQueryStateJSON(const SportsLeagueLeadersQueryStateJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersQueryStateJSON &SportsLeagueLeadersQueryStateJSON::operator=(const SportsLeagueLeadersQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersQueryStateJSON::fromJSONQueryDataAndResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryDataAndResults of SportsLeagueLeadersQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeQueryDataAndResultsJSON * > vector_QueryDataAndResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeQueryDataAndResultsJSON *convert_classy = TypeQueryDataAndResultsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_QueryDataAndResults1[num1] = convert_classy;
      }
    initQueryDataAndResults();
    for (size_t num4 = 0; num4 < vector_QueryDataAndResults1.size(); ++num4)
        appendQueryDataAndResults(vector_QueryDataAndResults1[num4]);
    for (size_t num1 = 0; num1 < vector_QueryDataAndResults1.size(); ++num1)
      {
        vector_QueryDataAndResults1[num1]->remove_reference();
      }
  }

SportsLeagueLeadersQueryStateJSON::SportsLeagueLeadersQueryStateJSON(void) :
        flagHasQueryDataAndResults(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersQueryStateJSON::~SportsLeagueLeadersQueryStateJSON(void)
  {
    if (flagHasQueryDataAndResults)
      {
        for (size_t num10 = 0; num10 < storeQueryDataAndResults.size(); ++num10)
          {
            storeQueryDataAndResults[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersQueryStateJSON::hasQueryDataAndResults(void) const
  {
    return flagHasQueryDataAndResults;
  }

size_t SportsLeagueLeadersQueryStateJSON::countOfQueryDataAndResults(void) const
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults.size();
  }

SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON * SportsLeagueLeadersQueryStateJSON::elementOfQueryDataAndResults(size_t element_num)
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults[element_num];
  }

const SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON * SportsLeagueLeadersQueryStateJSON::elementOfQueryDataAndResults(size_t element_num) const
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults[element_num];
  }

std::vector< SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON * > SportsLeagueLeadersQueryStateJSON::getQueryDataAndResults(void)
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults;
  }

const std::vector< SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON * > SportsLeagueLeadersQueryStateJSON::getQueryDataAndResults(void) const
  {
    assert(flagHasQueryDataAndResults);
    return storeQueryDataAndResults;
  }

char SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::Generator::lowerBoundRank[] = "1";
SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON *SportsLeagueLeadersQueryStateJSON::TypeQueryDataAndResultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeQueryDataAndResultsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeQueryDataAndResultsJSON>, TypeQueryDataAndResultsJSON *, bool> generator("Type TypeQueryDataAndResults", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsLeagueLeadersQueryStateJSON *SportsLeagueLeadersQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueLeadersQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersQueryStateJSON>, SportsLeagueLeadersQueryStateJSON *, bool> generator("Type SportsLeagueLeadersQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
