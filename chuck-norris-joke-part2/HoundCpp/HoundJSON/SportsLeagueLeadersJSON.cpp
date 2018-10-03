/* file "SportsLeagueLeadersJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsLeagueLeadersJSON.h"

#include "SportsLeagueLeadersJSON.h"


SportsLeagueLeadersJSON::TypeTeamsOrPlayers::TypeTeamsOrPlayers(void)
  {
  }

SportsLeagueLeadersJSON::TypeTeamsOrPlayers::TypeTeamsOrPlayers(const TypeTeamsOrPlayers &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsLeagueLeadersJSON::TypeTeamsOrPlayers::TypeTeamsOrPlayers(TypeTeamsOrPlayersKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsLeagueLeadersJSON::TypeTeamsOrPlayers::operator==(const TypeTeamsOrPlayers &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsLeagueLeadersJSON::TypeTeamsOrPlayers::operator!=(const TypeTeamsOrPlayers &other) const
  {
    return !(operator==(other));
  }

bool SportsLeagueLeadersJSON::TypeTeamsOrPlayers::operator<(const TypeTeamsOrPlayers &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsLeagueLeadersJSON::TypeTeamsOrPlayers::operator>(const TypeTeamsOrPlayers &other) const
  {
    return other.operator<(*this);
  }

bool SportsLeagueLeadersJSON::TypeTeamsOrPlayers::operator>=(const TypeTeamsOrPlayers &other) const
  {
    return !(operator<(other));
  }

bool SportsLeagueLeadersJSON::TypeTeamsOrPlayers::operator<=(const TypeTeamsOrPlayers &other) const
  {
    return !(other.operator<(*this));
  }

SportsLeagueLeadersJSON::TypeTeamsOrPlayersKnownValues SportsLeagueLeadersJSON::stringToTeamsOrPlayers(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strcmp(&(chars[1]), "layers") == 0)
                return TeamsOrPlayers_Players;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "eams") == 0)
                return TeamsOrPlayers_Teams;
            break;
        default:
            break;
      }
    return TeamsOrPlayers__none;
  }

const char *SportsLeagueLeadersJSON::stringFromTeamsOrPlayers(TypeTeamsOrPlayersKnownValues the_enum)
  {
    switch (the_enum)
      {
        case TeamsOrPlayers_Teams:
            return "Teams";
        case TeamsOrPlayers_Players:
            return "Players";
        default:
            assert(false);
            return NULL;
      }
  }

SportsLeagueLeadersJSON::TypeLeadersJSON::TypeLeadersJSON(const TypeLeadersJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersJSON::TypeLeadersJSON &SportsLeagueLeadersJSON::TypeLeadersJSON::operator=(const TypeLeadersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersJSON::TypeLeadersJSON::fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamOrPlayerJSON *convert_classy = SportsTeamOrPlayerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeamOrPlayer(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersJSON::TypeLeadersJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of TypeLeadersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of TypeLeadersJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsLeagueLeadersJSON::TypeLeadersJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of TypeLeadersJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

void SportsLeagueLeadersJSON::TypeLeadersJSON::fromJSONValueNumeric(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field ValueNumeric of TypeLeadersJSON is not a number.");
          }
      }
    setValueNumericText(the_rational_text);
  }

SportsLeagueLeadersJSON::TypeLeadersJSON::TypeLeadersJSON(void) :
        flagHasTeamOrPlayer(false),
        flagHasRank(false),
        flagHasValue(false),
        flagHasValueNumeric(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersJSON::TypeLeadersJSON::~TypeLeadersJSON(void)
  {
    if (flagHasTeamOrPlayer)
      {
        storeTeamOrPlayer->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersJSON::TypeLeadersJSON::hasTeamOrPlayer(void) const
  {
    return flagHasTeamOrPlayer;
  }

SportsTeamOrPlayerJSON * SportsLeagueLeadersJSON::TypeLeadersJSON::getTeamOrPlayer(void)
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

const SportsTeamOrPlayerJSON * SportsLeagueLeadersJSON::TypeLeadersJSON::getTeamOrPlayer(void) const
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

SportsTeamOrPlayerJSON::TypeValue SportsLeagueLeadersJSON::TypeLeadersJSON::getTeamOrPlayerValue(void)
  {
    return getTeamOrPlayer()->getValue();
  }

const SportsTeamOrPlayerJSON::TypeValue SportsLeagueLeadersJSON::TypeLeadersJSON::getTeamOrPlayerValue(void) const
  {
    return getTeamOrPlayer()->getValue();
  }

bool SportsLeagueLeadersJSON::TypeLeadersJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsLeagueLeadersJSON::TypeLeadersJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsLeagueLeadersJSON::TypeLeadersJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsLeagueLeadersJSON::TypeLeadersJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string SportsLeagueLeadersJSON::TypeLeadersJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string SportsLeagueLeadersJSON::TypeLeadersJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool SportsLeagueLeadersJSON::TypeLeadersJSON::hasValueNumeric(void) const
  {
    return flagHasValueNumeric;
  }

double SportsLeagueLeadersJSON::TypeLeadersJSON::getValueNumeric(void)
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric != "")
      {
        return atof(textStoreValueNumeric.c_str());
      }
    return storeValueNumeric;
  }

const double SportsLeagueLeadersJSON::TypeLeadersJSON::getValueNumeric(void) const
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric != "")
      {
        return atof(textStoreValueNumeric.c_str());
      }
    return storeValueNumeric;
  }

std::string SportsLeagueLeadersJSON::TypeLeadersJSON::getValueNumericAsText(void) const
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValueNumeric);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValueNumeric);
      }
  }

SportsLeagueLeadersJSON::SportsLeagueLeadersJSON(const SportsLeagueLeadersJSON &)
  {
    assert(false);
  }

SportsLeagueLeadersJSON &SportsLeagueLeadersJSON::operator=(const SportsLeagueLeadersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsLeagueLeadersJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersJSON::fromJSONStatistic(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStatsTypeJSON *convert_classy = SportsStatsTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStatistic(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsLeagueLeadersJSON::fromJSONTeamsOrPlayers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamsOrPlayers of SportsLeagueLeadersJSON is not a string.");
    TypeTeamsOrPlayers the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layers") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TeamsOrPlayers_Players;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "eams") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = TeamsOrPlayers_Teams;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setTeamsOrPlayers(the_open_enum);
  }

void SportsLeagueLeadersJSON::fromJSONLeaders(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Leaders of SportsLeagueLeadersJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeLeadersJSON * > vector_Leaders1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeLeadersJSON *convert_classy = TypeLeadersJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Leaders1[num1] = convert_classy;
      }
    initLeaders();
    for (size_t num2 = 0; num2 < vector_Leaders1.size(); ++num2)
        appendLeaders(vector_Leaders1[num2]);
    for (size_t num1 = 0; num1 < vector_Leaders1.size(); ++num1)
      {
        vector_Leaders1[num1]->remove_reference();
      }
  }

void SportsLeagueLeadersJSON::fromJSONSportImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSportImageJSON *convert_classy = SportsSportImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportImage(convert_classy);
    convert_classy->remove_reference();
  }

SportsLeagueLeadersJSON::SportsLeagueLeadersJSON(void) :
        flagHasLeague(false),
        flagHasDivision(false),
        flagHasStatistic(false),
        flagHasSeason(false),
        flagHasTeamsOrPlayers(false),
        flagHasLeaders(false),
        flagHasSportImage(false)
  {
    extraIndex = create_string_index();
  }

SportsLeagueLeadersJSON::~SportsLeagueLeadersJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasStatistic)
      {
        storeStatistic->remove_reference();
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasLeaders)
      {
        for (size_t num4 = 0; num4 < storeLeaders.size(); ++num4)
          {
            storeLeaders[num4]->remove_reference();
          }
      }
    if (flagHasSportImage)
      {
        storeSportImage->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsLeagueLeadersJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsLeagueLeadersJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsLeagueLeadersJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsLeagueLeadersJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsLeagueLeadersJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsLeagueLeadersJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsLeagueLeadersJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsLeagueLeadersJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsLeagueLeadersJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsLeagueLeadersJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsLeagueLeadersJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsLeagueLeadersJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsLeagueLeadersJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsLeagueLeadersJSON::hasStatistic(void) const
  {
    return flagHasStatistic;
  }

SportsStatsTypeJSON * SportsLeagueLeadersJSON::getStatistic(void)
  {
    assert(flagHasStatistic);
    return storeStatistic;
  }

const SportsStatsTypeJSON * SportsLeagueLeadersJSON::getStatistic(void) const
  {
    assert(flagHasStatistic);
    return storeStatistic;
  }

SportsStatsTypeJSON::TypeValue SportsLeagueLeadersJSON::getStatisticValue(void)
  {
    return getStatistic()->getValue();
  }

const SportsStatsTypeJSON::TypeValue SportsLeagueLeadersJSON::getStatisticValue(void) const
  {
    return getStatistic()->getValue();
  }

const char *SportsLeagueLeadersJSON::getStatisticAsChars(void) const
  {
    return getStatistic()->getValueAsChars();
  }

std::string SportsLeagueLeadersJSON::getStatisticAsString(void) const
  {
    return getStatistic()->getValueAsString();
  }

bool SportsLeagueLeadersJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonResolvedJSON * SportsLeagueLeadersJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonResolvedJSON * SportsLeagueLeadersJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsLeagueLeadersJSON::hasTeamsOrPlayers(void) const
  {
    return flagHasTeamsOrPlayers;
  }

SportsLeagueLeadersJSON::TypeTeamsOrPlayers SportsLeagueLeadersJSON::getTeamsOrPlayers(void)
  {
    assert(flagHasTeamsOrPlayers);
    return storeTeamsOrPlayers;
  }

const SportsLeagueLeadersJSON::TypeTeamsOrPlayers SportsLeagueLeadersJSON::getTeamsOrPlayers(void) const
  {
    assert(flagHasTeamsOrPlayers);
    return storeTeamsOrPlayers;
  }

const char *SportsLeagueLeadersJSON::getTeamsOrPlayersAsChars(void) const
  {
    TypeTeamsOrPlayers result = getTeamsOrPlayers();
    if (result.in_known_list)
        return stringFromTeamsOrPlayers(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsLeagueLeadersJSON::getTeamsOrPlayersAsString(void) const
  {
    return getTeamsOrPlayersAsChars();
  }

bool SportsLeagueLeadersJSON::hasLeaders(void) const
  {
    return flagHasLeaders;
  }

size_t SportsLeagueLeadersJSON::countOfLeaders(void) const
  {
    assert(flagHasLeaders);
    return storeLeaders.size();
  }

SportsLeagueLeadersJSON::TypeLeadersJSON * SportsLeagueLeadersJSON::elementOfLeaders(size_t element_num)
  {
    assert(flagHasLeaders);
    return storeLeaders[element_num];
  }

const SportsLeagueLeadersJSON::TypeLeadersJSON * SportsLeagueLeadersJSON::elementOfLeaders(size_t element_num) const
  {
    assert(flagHasLeaders);
    return storeLeaders[element_num];
  }

std::vector< SportsLeagueLeadersJSON::TypeLeadersJSON * > SportsLeagueLeadersJSON::getLeaders(void)
  {
    assert(flagHasLeaders);
    return storeLeaders;
  }

const std::vector< SportsLeagueLeadersJSON::TypeLeadersJSON * > SportsLeagueLeadersJSON::getLeaders(void) const
  {
    assert(flagHasLeaders);
    return storeLeaders;
  }

bool SportsLeagueLeadersJSON::hasSportImage(void) const
  {
    return flagHasSportImage;
  }

SportsSportImageJSON * SportsLeagueLeadersJSON::getSportImage(void)
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

const SportsSportImageJSON * SportsLeagueLeadersJSON::getSportImage(void) const
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

char SportsLeagueLeadersJSON::TypeLeadersJSON::Generator::lowerBoundRank[] = "1";
SportsLeagueLeadersJSON::TypeLeadersJSON *SportsLeagueLeadersJSON::TypeLeadersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLeadersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLeadersJSON>, TypeLeadersJSON *, bool> generator("Type TypeLeaders", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsLeagueLeadersJSON *SportsLeagueLeadersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsLeagueLeadersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersJSON>, SportsLeagueLeadersJSON *, bool> generator("Type SportsLeagueLeaders", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
