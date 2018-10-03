/* file "SportsStandingsAPIJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsAPIJSON.h"

#include "SportsStandingsAPIJSON.h"


SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::TypeTeamJSON(const TypeTeamJSON &)
  {
    assert(false);
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON &SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::operator=(const TypeTeamJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of TypeTeamJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::fromJSONAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Alias of TypeTeamJSON is not a string.");
    setAlias(std::string(json_string->getData()));
  }

void SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of TypeTeamJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::TypeTeamJSON(void) :
        flagHasID(false),
        flagHasAlias(false),
        flagHasName(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::~TypeTeamJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::hasAlias(void) const
  {
    return flagHasAlias;
  }

std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::getAlias(void)
  {
    assert(flagHasAlias);
    return storeAlias;
  }

const std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::getAlias(void) const
  {
    assert(flagHasAlias);
    return storeAlias;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamsJSON(const TypeTeamsJSON &)
  {
    assert(false);
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON &SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::operator=(const TypeTeamsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::fromJSONTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeTeamJSON *convert_classy = TypeTeamJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeam(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::fromJSONStandingsData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsStandingsDataJSON *convert_classy = SportsStandingsDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStandingsData(convert_classy);
    convert_classy->remove_reference();
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamsJSON(void) :
        flagHasTeam(false),
        flagHasStandingsData(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::~TypeTeamsJSON(void)
  {
    if (flagHasTeam)
      {
        storeTeam->remove_reference();
      }
    if (flagHasStandingsData)
      {
        storeStandingsData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::hasTeam(void) const
  {
    return flagHasTeam;
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON * SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::getTeam(void)
  {
    assert(flagHasTeam);
    return storeTeam;
  }

const SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON * SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::getTeam(void) const
  {
    assert(flagHasTeam);
    return storeTeam;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::hasStandingsData(void) const
  {
    return flagHasStandingsData;
  }

SportsStandingsDataJSON * SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::getStandingsData(void)
  {
    assert(flagHasStandingsData);
    return storeStandingsData;
  }

const SportsStandingsDataJSON * SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::getStandingsData(void) const
  {
    assert(flagHasStandingsData);
    return storeStandingsData;
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeDivisionsJSON(const TypeDivisionsJSON &)
  {
    assert(false);
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON &SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::operator=(const TypeDivisionsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Division of TypeDivisionsJSON is not a string.");
    setDivision(std::string(json_string->getData()));
  }

void SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of TypeDivisionsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Teams of TypeDivisionsJSON has too few elements.");
    std::vector< TypeTeamsJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeTeamsJSON *convert_classy = TypeTeamsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 1);
    initTeams();
    for (size_t num4 = 0; num4 < vector_Teams1.size(); ++num4)
        appendTeams(vector_Teams1[num4]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeDivisionsJSON(void) :
        flagHasDivision(false),
        flagHasTeams(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::~TypeDivisionsJSON(void)
  {
    if (flagHasTeams)
      {
        for (size_t num10 = 0; num10 < storeTeams.size(); ++num10)
          {
            storeTeams[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const std::string SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON * SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON * SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON * > SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON * > SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeValueJSON(const TypeValueJSON &)
  {
    assert(false);
  }

SportsStandingsAPIJSON::TypeValueJSON &SportsStandingsAPIJSON::TypeValueJSON::operator=(const TypeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
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

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field League of TypeValueJSON is not a string.");
    setLeague(std::string(json_string->getData()));
  }

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONTournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Tournament of TypeValueJSON is not a string.");
    setTournament(std::string(json_string->getData()));
  }

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONDivisionParent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivisionParent(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONWildCard(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field WildCard of TypeValueJSON is not true for false.");
          }
      }
    setWildCard(the_bool);
  }

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONConference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field Conference of TypeValueJSON is not true for false.");
          }
      }
    setConference(the_bool);
  }

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONDivisional(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field Divisional of TypeValueJSON is not true for false.");
          }
      }
    setDivisional(the_bool);
  }

void SportsStandingsAPIJSON::TypeValueJSON::fromJSONDivisions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Divisions of TypeValueJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Divisions of TypeValueJSON has too few elements.");
    std::vector< TypeDivisionsJSON * > vector_Divisions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeDivisionsJSON *convert_classy = TypeDivisionsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Divisions1[num1] = convert_classy;
      }
    assert(vector_Divisions1.size() >= 1);
    initDivisions();
    for (size_t num5 = 0; num5 < vector_Divisions1.size(); ++num5)
        appendDivisions(vector_Divisions1[num5]);
    for (size_t num1 = 0; num1 < vector_Divisions1.size(); ++num1)
      {
        vector_Divisions1[num1]->remove_reference();
      }
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeValueJSON(void) :
        flagHasYear(false),
        flagHasLeague(false),
        flagHasTournament(false),
        flagHasDivisionParent(false),
        flagHasWildCard(false),
        flagHasConference(false),
        flagHasDivisional(false),
        flagHasDivisions(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsAPIJSON::TypeValueJSON::~TypeValueJSON(void)
  {
    if (flagHasDivisionParent)
      {
        storeDivisionParent->remove_reference();
      }
    if (flagHasDivisions)
      {
        for (size_t num13 = 0; num13 < storeDivisions.size(); ++num13)
          {
            storeDivisions[num13]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsStandingsAPIJSON::TypeValueJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsStandingsAPIJSON::TypeValueJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

std::string SportsStandingsAPIJSON::TypeValueJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const std::string SportsStandingsAPIJSON::TypeValueJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasTournament(void) const
  {
    return flagHasTournament;
  }

std::string SportsStandingsAPIJSON::TypeValueJSON::getTournament(void)
  {
    assert(flagHasTournament);
    return storeTournament;
  }

const std::string SportsStandingsAPIJSON::TypeValueJSON::getTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasDivisionParent(void) const
  {
    return flagHasDivisionParent;
  }

SportsLeagueDivisionJSON * SportsStandingsAPIJSON::TypeValueJSON::getDivisionParent(void)
  {
    assert(flagHasDivisionParent);
    return storeDivisionParent;
  }

const SportsLeagueDivisionJSON * SportsStandingsAPIJSON::TypeValueJSON::getDivisionParent(void) const
  {
    assert(flagHasDivisionParent);
    return storeDivisionParent;
  }

SportsLeagueDivisionJSON::TypeValue SportsStandingsAPIJSON::TypeValueJSON::getDivisionParentValue(void)
  {
    return getDivisionParent()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsStandingsAPIJSON::TypeValueJSON::getDivisionParentValue(void) const
  {
    return getDivisionParent()->getValue();
  }

const char *SportsStandingsAPIJSON::TypeValueJSON::getDivisionParentAsChars(void) const
  {
    return getDivisionParent()->getValueAsChars();
  }

std::string SportsStandingsAPIJSON::TypeValueJSON::getDivisionParentAsString(void) const
  {
    return getDivisionParent()->getValueAsString();
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasWildCard(void) const
  {
    return flagHasWildCard;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::getWildCard(void)
  {
    assert(flagHasWildCard);
    return storeWildCard;
  }

const bool SportsStandingsAPIJSON::TypeValueJSON::getWildCard(void) const
  {
    assert(flagHasWildCard);
    return storeWildCard;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasConference(void) const
  {
    return flagHasConference;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::getConference(void)
  {
    assert(flagHasConference);
    return storeConference;
  }

const bool SportsStandingsAPIJSON::TypeValueJSON::getConference(void) const
  {
    assert(flagHasConference);
    return storeConference;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasDivisional(void) const
  {
    return flagHasDivisional;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::getDivisional(void)
  {
    assert(flagHasDivisional);
    return storeDivisional;
  }

const bool SportsStandingsAPIJSON::TypeValueJSON::getDivisional(void) const
  {
    assert(flagHasDivisional);
    return storeDivisional;
  }

bool SportsStandingsAPIJSON::TypeValueJSON::hasDivisions(void) const
  {
    return flagHasDivisions;
  }

size_t SportsStandingsAPIJSON::TypeValueJSON::countOfDivisions(void) const
  {
    assert(flagHasDivisions);
    return storeDivisions.size();
  }

SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON * SportsStandingsAPIJSON::TypeValueJSON::elementOfDivisions(size_t element_num)
  {
    assert(flagHasDivisions);
    return storeDivisions[element_num];
  }

const SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON * SportsStandingsAPIJSON::TypeValueJSON::elementOfDivisions(size_t element_num) const
  {
    assert(flagHasDivisions);
    return storeDivisions[element_num];
  }

std::vector< SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON * > SportsStandingsAPIJSON::TypeValueJSON::getDivisions(void)
  {
    assert(flagHasDivisions);
    return storeDivisions;
  }

const std::vector< SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON * > SportsStandingsAPIJSON::TypeValueJSON::getDivisions(void) const
  {
    assert(flagHasDivisions);
    return storeDivisions;
  }

SportsStandingsAPIJSON::SportsStandingsAPIJSON(const SportsStandingsAPIJSON &)
  {
    assert(false);
  }

SportsStandingsAPIJSON &SportsStandingsAPIJSON::operator=(const SportsStandingsAPIJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsAPIJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of SportsStandingsAPIJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeValueJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeValueJSON *convert_classy = TypeValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    initValue();
    for (size_t num6 = 0; num6 < vector_Value1.size(); ++num6)
        appendValue(vector_Value1[num6]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

SportsStandingsAPIJSON::SportsStandingsAPIJSON(void) :
        flagHasValue(false)
  {
  }

SportsStandingsAPIJSON::~SportsStandingsAPIJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num16 = 0; num16 < storeValue.size(); ++num16)
          {
            storeValue[num16]->remove_reference();
          }
      }
  }

bool SportsStandingsAPIJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t SportsStandingsAPIJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

SportsStandingsAPIJSON::TypeValueJSON * SportsStandingsAPIJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const SportsStandingsAPIJSON::TypeValueJSON * SportsStandingsAPIJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< SportsStandingsAPIJSON::TypeValueJSON * > SportsStandingsAPIJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< SportsStandingsAPIJSON::TypeValueJSON * > SportsStandingsAPIJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

char SportsStandingsAPIJSON::TypeValueJSON::Generator::lowerBoundYear[] = "0";
SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON *SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::TypeTeamJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTeamJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTeamJSON>, TypeTeamJSON *, bool> generator("Type TypeTeam", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON *SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::TypeTeamsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTeamsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool> generator("Type TypeTeams", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON *SportsStandingsAPIJSON::TypeValueJSON::TypeDivisionsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDivisionsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool> generator("Type TypeDivisions", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStandingsAPIJSON::TypeValueJSON *SportsStandingsAPIJSON::TypeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SportsStandingsAPIJSON *SportsStandingsAPIJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsAPIJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsAPIJSON>, SportsStandingsAPIJSON *, bool> generator("Type SportsStandingsAPI", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
