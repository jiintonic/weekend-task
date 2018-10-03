/* file "SportsSeriesStatusNewJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsSeriesStatusNewJSON.h"

#include "SportsSeriesStatusNewJSON.h"


SportsSeriesStatusNewJSON::TypeStatus::TypeStatus(void)
  {
  }

SportsSeriesStatusNewJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsSeriesStatusNewJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsSeriesStatusNewJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsSeriesStatusNewJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool SportsSeriesStatusNewJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsSeriesStatusNewJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool SportsSeriesStatusNewJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool SportsSeriesStatusNewJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

SportsSeriesStatusNewJSON::TypeStatusKnownValues SportsSeriesStatusNewJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "omplete") == 0)
                return Status_Complete;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ngoing") == 0)
                return Status_Ongoing;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "pcoming") == 0)
                return Status_Upcoming;
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *SportsSeriesStatusNewJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_Upcoming:
            return "Upcoming";
        case Status_Ongoing:
            return "Ongoing";
        case Status_Complete:
            return "Complete";
        default:
            assert(false);
            return NULL;
      }
  }

SportsSeriesStatusNewJSON::SportsSeriesStatusNewJSON(const SportsSeriesStatusNewJSON &)
  {
    assert(false);
  }

SportsSeriesStatusNewJSON &SportsSeriesStatusNewJSON::operator=(const SportsSeriesStatusNewJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsSeriesStatusNewJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of SportsSeriesStatusNewJSON is not a string.");
    TypeStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "omplete") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_Complete;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ngoing") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_Ongoing;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "pcoming") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_Upcoming;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setStatus(the_open_enum);
  }

void SportsSeriesStatusNewJSON::fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSpecialGameType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsSeriesStatusNewJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsSeriesStatusNewJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Teams of SportsSeriesStatusNewJSON has too few elements.");
    std::vector< SportsTeamNewJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 2);
    initTeams();
    for (size_t num5 = 0; num5 < vector_Teams1.size(); ++num5)
        appendTeams(vector_Teams1[num5]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsSeriesStatusNewJSON::fromJSONScore(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Score of SportsSeriesStatusNewJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Score of SportsSeriesStatusNewJSON has too few elements.");
    std::vector< OInteger > vector_Score1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field Score of SportsSeriesStatusNewJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field Score of SportsSeriesStatusNewJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_Score1[num1] = extracted_integer;
      }
    assert(vector_Score1.size() >= 2);
    initScore();
    for (size_t num6 = 0; num6 < vector_Score1.size(); ++num6)
        appendScore(vector_Score1[num6]);
    for (size_t num1 = 0; num1 < vector_Score1.size(); ++num1)
      {
      }
  }

void SportsSeriesStatusNewJSON::fromJSONSoccerAwayGoals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SoccerAwayGoals of SportsSeriesStatusNewJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field SoccerAwayGoals of SportsSeriesStatusNewJSON has too few elements.");
    std::vector< OInteger > vector_SoccerAwayGoals1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field SoccerAwayGoals of SportsSeriesStatusNewJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field SoccerAwayGoals of SportsSeriesStatusNewJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_SoccerAwayGoals1[num1] = extracted_integer;
      }
    assert(vector_SoccerAwayGoals1.size() >= 2);
    initSoccerAwayGoals();
    for (size_t num7 = 0; num7 < vector_SoccerAwayGoals1.size(); ++num7)
        appendSoccerAwayGoals(vector_SoccerAwayGoals1[num7]);
    for (size_t num1 = 0; num1 < vector_SoccerAwayGoals1.size(); ++num1)
      {
      }
  }

void SportsSeriesStatusNewJSON::fromJSONGamesIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GamesIndices of SportsSeriesStatusNewJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field GamesIndices of SportsSeriesStatusNewJSON has too few elements.");
    std::vector< OInteger > vector_GamesIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field GamesIndices of SportsSeriesStatusNewJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field GamesIndices of SportsSeriesStatusNewJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_GamesIndices1[num1] = extracted_integer;
      }
    assert(vector_GamesIndices1.size() >= 1);
    initGamesIndices();
    for (size_t num8 = 0; num8 < vector_GamesIndices1.size(); ++num8)
        appendGamesIndices(vector_GamesIndices1[num8]);
    for (size_t num1 = 0; num1 < vector_GamesIndices1.size(); ++num1)
      {
      }
  }

SportsSeriesStatusNewJSON::SportsSeriesStatusNewJSON(void) :
        flagHasStatus(false),
        flagHasSpecialGameType(false),
        flagHasTeams(false),
        flagHasScore(false),
        flagHasSoccerAwayGoals(false),
        flagHasGamesIndices(false)
  {
    extraIndex = create_string_index();
  }

SportsSeriesStatusNewJSON::~SportsSeriesStatusNewJSON(void)
  {
    if (flagHasSpecialGameType)
      {
        storeSpecialGameType->remove_reference();
      }
    if (flagHasTeams)
      {
        for (size_t num4 = 0; num4 < storeTeams.size(); ++num4)
          {
            storeTeams[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsSeriesStatusNewJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

SportsSeriesStatusNewJSON::TypeStatus SportsSeriesStatusNewJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const SportsSeriesStatusNewJSON::TypeStatus SportsSeriesStatusNewJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *SportsSeriesStatusNewJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsSeriesStatusNewJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

bool SportsSeriesStatusNewJSON::hasSpecialGameType(void) const
  {
    return flagHasSpecialGameType;
  }

SportsPlayoffSpecialGameJSON * SportsSeriesStatusNewJSON::getSpecialGameType(void)
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

const SportsPlayoffSpecialGameJSON * SportsSeriesStatusNewJSON::getSpecialGameType(void) const
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsSeriesStatusNewJSON::getSpecialGameTypeValue(void)
  {
    return getSpecialGameType()->getValue();
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsSeriesStatusNewJSON::getSpecialGameTypeValue(void) const
  {
    return getSpecialGameType()->getValue();
  }

const char *SportsSeriesStatusNewJSON::getSpecialGameTypeAsChars(void) const
  {
    return getSpecialGameType()->getValueAsChars();
  }

std::string SportsSeriesStatusNewJSON::getSpecialGameTypeAsString(void) const
  {
    return getSpecialGameType()->getValueAsString();
  }

bool SportsSeriesStatusNewJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsSeriesStatusNewJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamNewJSON * SportsSeriesStatusNewJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamNewJSON * SportsSeriesStatusNewJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamNewJSON * > SportsSeriesStatusNewJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamNewJSON * > SportsSeriesStatusNewJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsSeriesStatusNewJSON::hasScore(void) const
  {
    return flagHasScore;
  }

size_t SportsSeriesStatusNewJSON::countOfScore(void) const
  {
    assert(flagHasScore);
    return storeScore.size();
  }

OInteger SportsSeriesStatusNewJSON::elementOfScore(size_t element_num)
  {
    assert(flagHasScore);
    return storeScore[element_num];
  }

const OInteger SportsSeriesStatusNewJSON::elementOfScore(size_t element_num) const
  {
    assert(flagHasScore);
    return storeScore[element_num];
  }

std::vector< OInteger > SportsSeriesStatusNewJSON::getScore(void)
  {
    assert(flagHasScore);
    return storeScore;
  }

const std::vector< OInteger > SportsSeriesStatusNewJSON::getScore(void) const
  {
    assert(flagHasScore);
    return storeScore;
  }

bool SportsSeriesStatusNewJSON::hasSoccerAwayGoals(void) const
  {
    return flagHasSoccerAwayGoals;
  }

size_t SportsSeriesStatusNewJSON::countOfSoccerAwayGoals(void) const
  {
    assert(flagHasSoccerAwayGoals);
    return storeSoccerAwayGoals.size();
  }

OInteger SportsSeriesStatusNewJSON::elementOfSoccerAwayGoals(size_t element_num)
  {
    assert(flagHasSoccerAwayGoals);
    return storeSoccerAwayGoals[element_num];
  }

const OInteger SportsSeriesStatusNewJSON::elementOfSoccerAwayGoals(size_t element_num) const
  {
    assert(flagHasSoccerAwayGoals);
    return storeSoccerAwayGoals[element_num];
  }

std::vector< OInteger > SportsSeriesStatusNewJSON::getSoccerAwayGoals(void)
  {
    assert(flagHasSoccerAwayGoals);
    return storeSoccerAwayGoals;
  }

const std::vector< OInteger > SportsSeriesStatusNewJSON::getSoccerAwayGoals(void) const
  {
    assert(flagHasSoccerAwayGoals);
    return storeSoccerAwayGoals;
  }

bool SportsSeriesStatusNewJSON::hasGamesIndices(void) const
  {
    return flagHasGamesIndices;
  }

size_t SportsSeriesStatusNewJSON::countOfGamesIndices(void) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices.size();
  }

OInteger SportsSeriesStatusNewJSON::elementOfGamesIndices(size_t element_num)
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices[element_num];
  }

const OInteger SportsSeriesStatusNewJSON::elementOfGamesIndices(size_t element_num) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices[element_num];
  }

std::vector< OInteger > SportsSeriesStatusNewJSON::getGamesIndices(void)
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices;
  }

const std::vector< OInteger > SportsSeriesStatusNewJSON::getGamesIndices(void) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices;
  }

char SportsSeriesStatusNewJSON::Generator::lowerBoundScore[] = "0";
char SportsSeriesStatusNewJSON::Generator::lowerBoundSoccerAwayGoals[] = "0";
char SportsSeriesStatusNewJSON::Generator::lowerBoundGamesIndices[] = "0";
SportsSeriesStatusNewJSON *SportsSeriesStatusNewJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsSeriesStatusNewJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsSeriesStatusNewJSON>, SportsSeriesStatusNewJSON *, bool> generator("Type SportsSeriesStatusNew", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
