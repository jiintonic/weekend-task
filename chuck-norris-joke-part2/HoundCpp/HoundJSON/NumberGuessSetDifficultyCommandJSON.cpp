/* file "NumberGuessSetDifficultyCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessSetDifficultyCommandJSON.h"

#include "NumberGuessSetDifficultyCommandJSON.h"


NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(void)
  {
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(const TypeDifficulty &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(TypeDifficultyKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator==(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator!=(const TypeDifficulty &other) const
  {
    return !(operator==(other));
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>(const TypeDifficulty &other) const
  {
    return other.operator<(*this);
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>=(const TypeDifficulty &other) const
  {
    return !(operator<(other));
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<=(const TypeDifficulty &other) const
  {
    return !(other.operator<(*this));
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficultyKnownValues NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::stringToDifficulty(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "asy") == 0)
                return Difficulty_Easy;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ard") == 0)
                return Difficulty_Hard;
            break;
        default:
            break;
      }
    return Difficulty__none;
  }

const char *NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::stringFromDifficulty(TypeDifficultyKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Difficulty_Easy:
            return "Easy";
        case Difficulty_Hard:
            return "Hard";
        default:
            assert(false);
            return NULL;
      }
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON &NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of TypeNativeDataJSON is not a string.");
    TypeDifficulty the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "asy") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Difficulty_Easy;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ard") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Difficulty_Hard;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setDifficulty(the_open_enum);
  }

void NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::fromJSONMinimumPossibleValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinimumPossibleValue of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinimumPossibleValue of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinimumPossibleValue(extracted_integer);
  }

void NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::fromJSONMaximumPossibleValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MaximumPossibleValue of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MaximumPossibleValue of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMaximumPossibleValue(extracted_integer);
  }

void NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasDifficulty(false),
        flagHasMinimumPossibleValue(false),
        flagHasMaximumPossibleValue(false),
        flagHasGameState(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const char *NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getDifficultyAsChars(void) const
  {
    TypeDifficulty result = getDifficulty();
    if (result.in_known_list)
        return stringFromDifficulty(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getDifficultyAsString(void) const
  {
    return getDifficultyAsChars();
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::hasMinimumPossibleValue(void) const
  {
    return flagHasMinimumPossibleValue;
  }

OInteger NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void)
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

const OInteger NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void) const
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::hasMaximumPossibleValue(void) const
  {
    return flagHasMaximumPossibleValue;
  }

OInteger NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void)
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

const OInteger NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void) const
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

bool NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

NumberGuessSetDifficultyCommandJSON::NumberGuessSetDifficultyCommandJSON(const NumberGuessSetDifficultyCommandJSON &)
  {
    assert(false);
  }

NumberGuessSetDifficultyCommandJSON &NumberGuessSetDifficultyCommandJSON::operator=(const NumberGuessSetDifficultyCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessSetDifficultyCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void NumberGuessSetDifficultyCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

NumberGuessSetDifficultyCommandJSON::NumberGuessSetDifficultyCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessSetDifficultyCommandJSON::~NumberGuessSetDifficultyCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NumberGuessSetDifficultyCommandJSON::getNumberGuessCommandKind(void) const
  {
    return "NumberGuessSetDifficultyCommand";
  }

bool NumberGuessSetDifficultyCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON * NumberGuessSetDifficultyCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON * NumberGuessSetDifficultyCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON *NumberGuessSetDifficultyCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
NumberGuessSetDifficultyCommandJSON *NumberGuessSetDifficultyCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessSetDifficultyCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessSetDifficultyCommandJSON>, NumberGuessSetDifficultyCommandJSON *, bool> generator("Type NumberGuessSetDifficultyCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
