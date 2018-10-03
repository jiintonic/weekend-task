/* file "SportsStatsAPIJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStatsAPIJSON.h"

#include "SportsStatsAPIJSON.h"


SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::TypeValue(void)
  {
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValueKnownValues SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::stringToValue(const char *chars)
  {
    if (strcmp(chars, "Unavailable") == 0)
        return Value_Unavailable;
    return Value__none;
  }

const char *SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Unavailable:
            return "Unavailable";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::TypeSplitJSON(const TypeSplitJSON &)
  {
    assert(false);
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON &SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::operator=(const TypeSplitJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::fromJSONSplitClass(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SplitClass of TypeSplitJSON is not a string.");
    setSplitClass(std::string(json_string->getData()));
  }

void SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::fromJSONSplitValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SplitValue of TypeSplitJSON is not a string.");
    setSplitValue(std::string(json_string->getData()));
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::TypeSplitJSON(void) :
        flagHasSplitClass(false),
        flagHasSplitValue(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::~TypeSplitJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::hasSplitClass(void) const
  {
    return flagHasSplitClass;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::getSplitClass(void)
  {
    assert(flagHasSplitClass);
    return storeSplitClass;
  }

const std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::getSplitClass(void) const
  {
    assert(flagHasSplitClass);
    return storeSplitClass;
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::hasSplitValue(void) const
  {
    return flagHasSplitValue;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::getSplitValue(void)
  {
    assert(flagHasSplitValue);
    return storeSplitValue;
  }

const std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::getSplitValue(void) const
  {
    assert(flagHasSplitValue);
    return storeSplitValue;
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeStatsJSON(const TypeStatsJSON &)
  {
    assert(false);
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON &SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::operator=(const TypeStatsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of TypeStatsJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of TypeStatsJSON is not a string.");
    TypeValue the_open_enum;
    if (strcmp(json_string->getData(), "Unavailable") == 0)
          {
            the_open_enum.in_known_list = true;
            the_open_enum.list_value = Value_Unavailable;
            goto open_enum_is_done;
          }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

void SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONValueNumeric(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ValueNumeric of TypeStatsJSON is not a number.");
          }
      }
    setValueNumericText(the_rational_text);
  }

void SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonJSON *convert_classy = SportsSeasonJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::fromJSONSplit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSplitJSON *convert_classy = TypeSplitJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSplit(convert_classy);
    convert_classy->remove_reference();
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeStatsJSON(void) :
        flagHasName(false),
        flagHasValue(false),
        flagHasValueNumeric(false),
        flagHasSeason(false),
        flagHasSplit(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::~TypeStatsJSON(void)
  {
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasSplit)
      {
        storeSplit->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeValue SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::hasValueNumeric(void) const
  {
    return flagHasValueNumeric;
  }

double SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getValueNumeric(void)
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric != "")
      {
        return atof(textStoreValueNumeric.c_str());
      }
    return storeValueNumeric;
  }

const double SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getValueNumeric(void) const
  {
    assert(flagHasValueNumeric);
    if (textStoreValueNumeric != "")
      {
        return atof(textStoreValueNumeric.c_str());
      }
    return storeValueNumeric;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getValueNumericAsText(void) const
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

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonJSON * SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonJSON * SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::hasSplit(void) const
  {
    return flagHasSplit;
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON * SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getSplit(void)
  {
    assert(flagHasSplit);
    return storeSplit;
  }

const SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON * SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::getSplit(void) const
  {
    assert(flagHasSplit);
    return storeSplit;
  }

SportsStatsAPIJSON::TypeValueJSON::TypeValueJSON(const TypeValueJSON &)
  {
    assert(false);
  }

SportsStatsAPIJSON::TypeValueJSON &SportsStatsAPIJSON::TypeValueJSON::operator=(const TypeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsAPIJSON::TypeValueJSON::fromJSONTeamID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamID of TypeValueJSON is not a string.");
    setTeamID(std::string(json_string->getData()));
  }

void SportsStatsAPIJSON::TypeValueJSON::fromJSONPlayerID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PlayerID of TypeValueJSON is not a string.");
    setPlayerID(std::string(json_string->getData()));
  }

void SportsStatsAPIJSON::TypeValueJSON::fromJSONGameID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameID of TypeValueJSON is not a string.");
    setGameID(std::string(json_string->getData()));
  }

void SportsStatsAPIJSON::TypeValueJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field League of TypeValueJSON is not a string.");
    setLeague(std::string(json_string->getData()));
  }

void SportsStatsAPIJSON::TypeValueJSON::fromJSONStats(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Stats of TypeValueJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeStatsJSON * > vector_Stats1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeStatsJSON *convert_classy = TypeStatsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Stats1[num1] = convert_classy;
      }
    initStats();
    for (size_t num3 = 0; num3 < vector_Stats1.size(); ++num3)
        appendStats(vector_Stats1[num3]);
    for (size_t num1 = 0; num1 < vector_Stats1.size(); ++num1)
      {
        vector_Stats1[num1]->remove_reference();
      }
  }

SportsStatsAPIJSON::TypeValueJSON::TypeValueJSON(void) :
        flagHasTeamID(false),
        flagHasPlayerID(false),
        flagHasGameID(false),
        flagHasLeague(false),
        flagHasStats(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsAPIJSON::TypeValueJSON::~TypeValueJSON(void)
  {
    if (flagHasStats)
      {
        for (size_t num7 = 0; num7 < storeStats.size(); ++num7)
          {
            storeStats[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsAPIJSON::TypeValueJSON::hasTeamID(void) const
  {
    return flagHasTeamID;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::getTeamID(void)
  {
    assert(flagHasTeamID);
    return storeTeamID;
  }

const std::string SportsStatsAPIJSON::TypeValueJSON::getTeamID(void) const
  {
    assert(flagHasTeamID);
    return storeTeamID;
  }

bool SportsStatsAPIJSON::TypeValueJSON::hasPlayerID(void) const
  {
    return flagHasPlayerID;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::getPlayerID(void)
  {
    assert(flagHasPlayerID);
    return storePlayerID;
  }

const std::string SportsStatsAPIJSON::TypeValueJSON::getPlayerID(void) const
  {
    assert(flagHasPlayerID);
    return storePlayerID;
  }

bool SportsStatsAPIJSON::TypeValueJSON::hasGameID(void) const
  {
    return flagHasGameID;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::getGameID(void)
  {
    assert(flagHasGameID);
    return storeGameID;
  }

const std::string SportsStatsAPIJSON::TypeValueJSON::getGameID(void) const
  {
    assert(flagHasGameID);
    return storeGameID;
  }

bool SportsStatsAPIJSON::TypeValueJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

std::string SportsStatsAPIJSON::TypeValueJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const std::string SportsStatsAPIJSON::TypeValueJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

bool SportsStatsAPIJSON::TypeValueJSON::hasStats(void) const
  {
    return flagHasStats;
  }

size_t SportsStatsAPIJSON::TypeValueJSON::countOfStats(void) const
  {
    assert(flagHasStats);
    return storeStats.size();
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON * SportsStatsAPIJSON::TypeValueJSON::elementOfStats(size_t element_num)
  {
    assert(flagHasStats);
    return storeStats[element_num];
  }

const SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON * SportsStatsAPIJSON::TypeValueJSON::elementOfStats(size_t element_num) const
  {
    assert(flagHasStats);
    return storeStats[element_num];
  }

std::vector< SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON * > SportsStatsAPIJSON::TypeValueJSON::getStats(void)
  {
    assert(flagHasStats);
    return storeStats;
  }

const std::vector< SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON * > SportsStatsAPIJSON::TypeValueJSON::getStats(void) const
  {
    assert(flagHasStats);
    return storeStats;
  }

SportsStatsAPIJSON::SportsStatsAPIJSON(const SportsStatsAPIJSON &)
  {
    assert(false);
  }

SportsStatsAPIJSON &SportsStatsAPIJSON::operator=(const SportsStatsAPIJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsAPIJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of SportsStatsAPIJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeValueJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeValueJSON *convert_classy = TypeValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    initValue();
    for (size_t num4 = 0; num4 < vector_Value1.size(); ++num4)
        appendValue(vector_Value1[num4]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

SportsStatsAPIJSON::SportsStatsAPIJSON(void) :
        flagHasValue(false)
  {
  }

SportsStatsAPIJSON::~SportsStatsAPIJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num10 = 0; num10 < storeValue.size(); ++num10)
          {
            storeValue[num10]->remove_reference();
          }
      }
  }

bool SportsStatsAPIJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t SportsStatsAPIJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

SportsStatsAPIJSON::TypeValueJSON * SportsStatsAPIJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const SportsStatsAPIJSON::TypeValueJSON * SportsStatsAPIJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< SportsStatsAPIJSON::TypeValueJSON * > SportsStatsAPIJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< SportsStatsAPIJSON::TypeValueJSON * > SportsStatsAPIJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON *SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::TypeSplitJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSplitJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSplitJSON>, TypeSplitJSON *, bool> generator("Type TypeSplit", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON *SportsStatsAPIJSON::TypeValueJSON::TypeStatsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeStatsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool> generator("Type TypeStats", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsStatsAPIJSON::TypeValueJSON *SportsStatsAPIJSON::TypeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SportsStatsAPIJSON *SportsStatsAPIJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStatsAPIJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStatsAPIJSON>, SportsStatsAPIJSON *, bool> generator("Type SportsStatsAPI", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
