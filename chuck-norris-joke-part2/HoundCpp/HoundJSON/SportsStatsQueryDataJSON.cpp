/* file "SportsStatsQueryDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStatsQueryDataJSON.h"

#include "SportsStatsQueryDataJSON.h"


SportsStatsQueryDataJSON::TypeCardinality::TypeCardinality(void)
  {
  }

SportsStatsQueryDataJSON::TypeCardinality::TypeCardinality(const TypeCardinality &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStatsQueryDataJSON::TypeCardinality::TypeCardinality(TypeCardinalityKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStatsQueryDataJSON::TypeCardinality::operator==(const TypeCardinality &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStatsQueryDataJSON::TypeCardinality::operator!=(const TypeCardinality &other) const
  {
    return !(operator==(other));
  }

bool SportsStatsQueryDataJSON::TypeCardinality::operator<(const TypeCardinality &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStatsQueryDataJSON::TypeCardinality::operator>(const TypeCardinality &other) const
  {
    return other.operator<(*this);
  }

bool SportsStatsQueryDataJSON::TypeCardinality::operator>=(const TypeCardinality &other) const
  {
    return !(operator<(other));
  }

bool SportsStatsQueryDataJSON::TypeCardinality::operator<=(const TypeCardinality &other) const
  {
    return !(other.operator<(*this));
  }

SportsStatsQueryDataJSON::TypeCardinalityKnownValues SportsStatsQueryDataJSON::stringToCardinality(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strcmp(&(chars[1]), "ultiple") == 0)
                return Cardinality_Multiple;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ingle") == 0)
                return Cardinality_Single;
            break;
        default:
            break;
      }
    return Cardinality__none;
  }

const char *SportsStatsQueryDataJSON::stringFromCardinality(TypeCardinalityKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Cardinality_Single:
            return "Single";
        case Cardinality_Multiple:
            return "Multiple";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStatsQueryDataJSON::TypeError::TypeError(void)
  {
  }

SportsStatsQueryDataJSON::TypeError::TypeError(const TypeError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStatsQueryDataJSON::TypeError::TypeError(TypeErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStatsQueryDataJSON::TypeError::operator==(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStatsQueryDataJSON::TypeError::operator!=(const TypeError &other) const
  {
    return !(operator==(other));
  }

bool SportsStatsQueryDataJSON::TypeError::operator<(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStatsQueryDataJSON::TypeError::operator>(const TypeError &other) const
  {
    return other.operator<(*this);
  }

bool SportsStatsQueryDataJSON::TypeError::operator>=(const TypeError &other) const
  {
    return !(operator<(other));
  }

bool SportsStatsQueryDataJSON::TypeError::operator<=(const TypeError &other) const
  {
    return !(other.operator<(*this));
  }

SportsStatsQueryDataJSON::TypeErrorKnownValues SportsStatsQueryDataJSON::stringToError(const char *chars)
  {
    if (strcmp(chars, "DataUnavailable") == 0)
        return Error_DataUnavailable;
    return Error__none;
  }

const char *SportsStatsQueryDataJSON::stringFromError(TypeErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Error_DataUnavailable:
            return "DataUnavailable";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStatsQueryDataJSON::SportsStatsQueryDataJSON(const SportsStatsQueryDataJSON &)
  {
    assert(false);
  }

SportsStatsQueryDataJSON &SportsStatsQueryDataJSON::operator=(const SportsStatsQueryDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsQueryDataJSON::fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamOrPlayerJSON *convert_classy = SportsTeamOrPlayerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeamOrPlayer(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStatsQueryDataJSON::fromJSONStatisticsTypeAndValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StatisticsTypeAndValue of SportsStatsQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsStatsTypeAndValueJSON * > vector_StatisticsTypeAndValue1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsStatsTypeAndValueJSON *convert_classy = SportsStatsTypeAndValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_StatisticsTypeAndValue1[num1] = convert_classy;
      }
    initStatisticsTypeAndValue();
    for (size_t num2 = 0; num2 < vector_StatisticsTypeAndValue1.size(); ++num2)
        appendStatisticsTypeAndValue(vector_StatisticsTypeAndValue1[num2]);
    for (size_t num1 = 0; num1 < vector_StatisticsTypeAndValue1.size(); ++num1)
      {
        vector_StatisticsTypeAndValue1[num1]->remove_reference();
      }
  }

void SportsStatsQueryDataJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStatsQueryDataJSON::fromJSONGame(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsGameJSON *convert_classy = SportsGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGame(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStatsQueryDataJSON::fromJSONCardinality(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Cardinality of SportsStatsQueryDataJSON is not a string.");
    TypeCardinality the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ultiple") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Cardinality_Multiple;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ingle") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Cardinality_Single;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setCardinality(the_open_enum);
  }

void SportsStatsQueryDataJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Error of SportsStatsQueryDataJSON is not a string.");
    TypeError the_open_enum;
    if (strcmp(json_string->getData(), "DataUnavailable") == 0)
          {
            the_open_enum.in_known_list = true;
            the_open_enum.list_value = Error_DataUnavailable;
            goto open_enum_is_done;
          }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setError(the_open_enum);
  }

SportsStatsQueryDataJSON::SportsStatsQueryDataJSON(void) :
        flagHasTeamOrPlayer(false),
        flagHasStatisticsTypeAndValue(false),
        flagHasSeason(false),
        flagHasGame(false),
        flagHasCardinality(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsQueryDataJSON::~SportsStatsQueryDataJSON(void)
  {
    if (flagHasTeamOrPlayer)
      {
        storeTeamOrPlayer->remove_reference();
      }
    if (flagHasStatisticsTypeAndValue)
      {
        for (size_t num4 = 0; num4 < storeStatisticsTypeAndValue.size(); ++num4)
          {
            storeStatisticsTypeAndValue[num4]->remove_reference();
          }
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasGame)
      {
        storeGame->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsQueryDataJSON::hasTeamOrPlayer(void) const
  {
    return flagHasTeamOrPlayer;
  }

SportsTeamOrPlayerJSON * SportsStatsQueryDataJSON::getTeamOrPlayer(void)
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

const SportsTeamOrPlayerJSON * SportsStatsQueryDataJSON::getTeamOrPlayer(void) const
  {
    assert(flagHasTeamOrPlayer);
    return storeTeamOrPlayer;
  }

SportsTeamOrPlayerJSON::TypeValue SportsStatsQueryDataJSON::getTeamOrPlayerValue(void)
  {
    return getTeamOrPlayer()->getValue();
  }

const SportsTeamOrPlayerJSON::TypeValue SportsStatsQueryDataJSON::getTeamOrPlayerValue(void) const
  {
    return getTeamOrPlayer()->getValue();
  }

bool SportsStatsQueryDataJSON::hasStatisticsTypeAndValue(void) const
  {
    return flagHasStatisticsTypeAndValue;
  }

size_t SportsStatsQueryDataJSON::countOfStatisticsTypeAndValue(void) const
  {
    assert(flagHasStatisticsTypeAndValue);
    return storeStatisticsTypeAndValue.size();
  }

SportsStatsTypeAndValueJSON * SportsStatsQueryDataJSON::elementOfStatisticsTypeAndValue(size_t element_num)
  {
    assert(flagHasStatisticsTypeAndValue);
    return storeStatisticsTypeAndValue[element_num];
  }

const SportsStatsTypeAndValueJSON * SportsStatsQueryDataJSON::elementOfStatisticsTypeAndValue(size_t element_num) const
  {
    assert(flagHasStatisticsTypeAndValue);
    return storeStatisticsTypeAndValue[element_num];
  }

std::vector< SportsStatsTypeAndValueJSON * > SportsStatsQueryDataJSON::getStatisticsTypeAndValue(void)
  {
    assert(flagHasStatisticsTypeAndValue);
    return storeStatisticsTypeAndValue;
  }

const std::vector< SportsStatsTypeAndValueJSON * > SportsStatsQueryDataJSON::getStatisticsTypeAndValue(void) const
  {
    assert(flagHasStatisticsTypeAndValue);
    return storeStatisticsTypeAndValue;
  }

bool SportsStatsQueryDataJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonResolvedJSON * SportsStatsQueryDataJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonResolvedJSON * SportsStatsQueryDataJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsStatsQueryDataJSON::hasGame(void) const
  {
    return flagHasGame;
  }

SportsGameJSON * SportsStatsQueryDataJSON::getGame(void)
  {
    assert(flagHasGame);
    return storeGame;
  }

const SportsGameJSON * SportsStatsQueryDataJSON::getGame(void) const
  {
    assert(flagHasGame);
    return storeGame;
  }

bool SportsStatsQueryDataJSON::hasCardinality(void) const
  {
    return flagHasCardinality;
  }

SportsStatsQueryDataJSON::TypeCardinality SportsStatsQueryDataJSON::getCardinality(void)
  {
    assert(flagHasCardinality);
    return storeCardinality;
  }

const SportsStatsQueryDataJSON::TypeCardinality SportsStatsQueryDataJSON::getCardinality(void) const
  {
    assert(flagHasCardinality);
    return storeCardinality;
  }

const char *SportsStatsQueryDataJSON::getCardinalityAsChars(void) const
  {
    TypeCardinality result = getCardinality();
    if (result.in_known_list)
        return stringFromCardinality(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStatsQueryDataJSON::getCardinalityAsString(void) const
  {
    return getCardinalityAsChars();
  }

bool SportsStatsQueryDataJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsStatsQueryDataJSON::TypeError SportsStatsQueryDataJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsStatsQueryDataJSON::TypeError SportsStatsQueryDataJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

const char *SportsStatsQueryDataJSON::getErrorAsChars(void) const
  {
    TypeError result = getError();
    if (result.in_known_list)
        return stringFromError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStatsQueryDataJSON::getErrorAsString(void) const
  {
    return getErrorAsChars();
  }

SportsStatsQueryDataJSON *SportsStatsQueryDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStatsQueryDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStatsQueryDataJSON>, SportsStatsQueryDataJSON *, bool> generator("Type SportsStatsQueryData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
