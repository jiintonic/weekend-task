/* file "SportsPlayoffTriviaAPIJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffTriviaAPIJSON.h"

#include "SportsPlayoffTriviaAPIJSON.h"


SportsPlayoffTriviaAPIJSON::TypeValueJSON::TypeValueJSON(const TypeValueJSON &)
  {
    assert(false);
  }

SportsPlayoffTriviaAPIJSON::TypeValueJSON &SportsPlayoffTriviaAPIJSON::TypeValueJSON::operator=(const TypeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONTeamOneAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamOneAlias of TypeValueJSON is not a string.");
    setTeamOneAlias(std::string(json_string->getData()));
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONTeamTwoAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamTwoAlias of TypeValueJSON is not a string.");
    setTeamTwoAlias(std::string(json_string->getData()));
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONTeamOneID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamOneID of TypeValueJSON is not a string.");
    setTeamOneID(std::string(json_string->getData()));
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONTeamTwoID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamTwoID of TypeValueJSON is not a string.");
    setTeamTwoID(std::string(json_string->getData()));
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field League of TypeValueJSON is not a string.");
    setLeague(std::string(json_string->getData()));
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONPlayoff_Type(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Playoff_Type of TypeValueJSON is not a string.");
    setPlayoff_Type(std::string(json_string->getData()));
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of TypeValueJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of TypeValueJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONOutcomeCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OutcomeCount of TypeValueJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OutcomeCount of TypeValueJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOutcomeCount(extracted_integer);
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONSportsResultsScore(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsGameSchedulesScoresAPIGameJSON *convert_classy = SportsGameSchedulesScoresAPIGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportsResultsScore(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayoffTriviaAPIJSON::TypeValueJSON::fromJSONSportsTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamJSON *convert_classy = SportsTeamJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportsTeam(convert_classy);
    convert_classy->remove_reference();
  }

SportsPlayoffTriviaAPIJSON::TypeValueJSON::TypeValueJSON(void) :
        flagHasTeamOneAlias(false),
        flagHasTeamTwoAlias(false),
        flagHasTeamOneID(false),
        flagHasTeamTwoID(false),
        flagHasLeague(false),
        flagHasPlayoff_Type(false),
        flagHasYear(false),
        flagHasOutcomeCount(false),
        flagHasSportsResultsScore(false),
        flagHasSportsTeam(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffTriviaAPIJSON::TypeValueJSON::~TypeValueJSON(void)
  {
    if (flagHasSportsResultsScore)
      {
        storeSportsResultsScore->remove_reference();
      }
    if (flagHasSportsTeam)
      {
        storeSportsTeam->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasTeamOneAlias(void) const
  {
    return flagHasTeamOneAlias;
  }

std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamOneAlias(void)
  {
    assert(flagHasTeamOneAlias);
    return storeTeamOneAlias;
  }

const std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamOneAlias(void) const
  {
    assert(flagHasTeamOneAlias);
    return storeTeamOneAlias;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasTeamTwoAlias(void) const
  {
    return flagHasTeamTwoAlias;
  }

std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamTwoAlias(void)
  {
    assert(flagHasTeamTwoAlias);
    return storeTeamTwoAlias;
  }

const std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamTwoAlias(void) const
  {
    assert(flagHasTeamTwoAlias);
    return storeTeamTwoAlias;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasTeamOneID(void) const
  {
    return flagHasTeamOneID;
  }

std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamOneID(void)
  {
    assert(flagHasTeamOneID);
    return storeTeamOneID;
  }

const std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamOneID(void) const
  {
    assert(flagHasTeamOneID);
    return storeTeamOneID;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasTeamTwoID(void) const
  {
    return flagHasTeamTwoID;
  }

std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamTwoID(void)
  {
    assert(flagHasTeamTwoID);
    return storeTeamTwoID;
  }

const std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getTeamTwoID(void) const
  {
    assert(flagHasTeamTwoID);
    return storeTeamTwoID;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasPlayoff_Type(void) const
  {
    return flagHasPlayoff_Type;
  }

std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getPlayoff_Type(void)
  {
    assert(flagHasPlayoff_Type);
    return storePlayoff_Type;
  }

const std::string SportsPlayoffTriviaAPIJSON::TypeValueJSON::getPlayoff_Type(void) const
  {
    assert(flagHasPlayoff_Type);
    return storePlayoff_Type;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsPlayoffTriviaAPIJSON::TypeValueJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsPlayoffTriviaAPIJSON::TypeValueJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasOutcomeCount(void) const
  {
    return flagHasOutcomeCount;
  }

OInteger SportsPlayoffTriviaAPIJSON::TypeValueJSON::getOutcomeCount(void)
  {
    assert(flagHasOutcomeCount);
    return storeOutcomeCount;
  }

const OInteger SportsPlayoffTriviaAPIJSON::TypeValueJSON::getOutcomeCount(void) const
  {
    assert(flagHasOutcomeCount);
    return storeOutcomeCount;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasSportsResultsScore(void) const
  {
    return flagHasSportsResultsScore;
  }

SportsGameSchedulesScoresAPIGameJSON * SportsPlayoffTriviaAPIJSON::TypeValueJSON::getSportsResultsScore(void)
  {
    assert(flagHasSportsResultsScore);
    return storeSportsResultsScore;
  }

const SportsGameSchedulesScoresAPIGameJSON * SportsPlayoffTriviaAPIJSON::TypeValueJSON::getSportsResultsScore(void) const
  {
    assert(flagHasSportsResultsScore);
    return storeSportsResultsScore;
  }

bool SportsPlayoffTriviaAPIJSON::TypeValueJSON::hasSportsTeam(void) const
  {
    return flagHasSportsTeam;
  }

SportsTeamJSON * SportsPlayoffTriviaAPIJSON::TypeValueJSON::getSportsTeam(void)
  {
    assert(flagHasSportsTeam);
    return storeSportsTeam;
  }

const SportsTeamJSON * SportsPlayoffTriviaAPIJSON::TypeValueJSON::getSportsTeam(void) const
  {
    assert(flagHasSportsTeam);
    return storeSportsTeam;
  }

SportsPlayoffTriviaAPIJSON::SportsPlayoffTriviaAPIJSON(const SportsPlayoffTriviaAPIJSON &)
  {
    assert(false);
  }

SportsPlayoffTriviaAPIJSON &SportsPlayoffTriviaAPIJSON::operator=(const SportsPlayoffTriviaAPIJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffTriviaAPIJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of SportsPlayoffTriviaAPIJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeValueJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeValueJSON *convert_classy = TypeValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    initValue();
    for (size_t num2 = 0; num2 < vector_Value1.size(); ++num2)
        appendValue(vector_Value1[num2]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

SportsPlayoffTriviaAPIJSON::SportsPlayoffTriviaAPIJSON(void) :
        flagHasValue(false)
  {
  }

SportsPlayoffTriviaAPIJSON::~SportsPlayoffTriviaAPIJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool SportsPlayoffTriviaAPIJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t SportsPlayoffTriviaAPIJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

SportsPlayoffTriviaAPIJSON::TypeValueJSON * SportsPlayoffTriviaAPIJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const SportsPlayoffTriviaAPIJSON::TypeValueJSON * SportsPlayoffTriviaAPIJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< SportsPlayoffTriviaAPIJSON::TypeValueJSON * > SportsPlayoffTriviaAPIJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< SportsPlayoffTriviaAPIJSON::TypeValueJSON * > SportsPlayoffTriviaAPIJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

char SportsPlayoffTriviaAPIJSON::TypeValueJSON::Generator::lowerBoundYear[] = "0";
char SportsPlayoffTriviaAPIJSON::TypeValueJSON::Generator::lowerBoundOutcomeCount[] = "0";
SportsPlayoffTriviaAPIJSON::TypeValueJSON *SportsPlayoffTriviaAPIJSON::TypeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsPlayoffTriviaAPIJSON *SportsPlayoffTriviaAPIJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffTriviaAPIJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaAPIJSON>, SportsPlayoffTriviaAPIJSON *, bool> generator("Type SportsPlayoffTriviaAPI", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
