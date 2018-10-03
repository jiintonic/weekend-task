/* file "NumberGuessNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessNotUnderstoodCommandJSON.h"

#include "NumberGuessNotUnderstoodCommandJSON.h"


NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(void)
  {
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(const TypeDifficulty &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(TypeDifficultyKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator==(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator!=(const TypeDifficulty &other) const
  {
    return !(operator==(other));
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>(const TypeDifficulty &other) const
  {
    return other.operator<(*this);
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>=(const TypeDifficulty &other) const
  {
    return !(operator<(other));
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<=(const TypeDifficulty &other) const
  {
    return !(other.operator<(*this));
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficultyKnownValues NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::stringToDifficulty(const char *chars)
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

const char *NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::stringFromDifficulty(TypeDifficultyKnownValues the_enum)
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

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON &NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONMinimumPossibleValue(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONMaximumPossibleValue(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONLowerRangeHint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LowerRangeHint of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LowerRangeHint of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLowerRangeHint(extracted_integer);
  }

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONHigherRangeHint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HigherRangeHint of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HigherRangeHint of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHigherRangeHint(extracted_integer);
  }

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONGuessesMade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessesMade of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessesMade of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessesMade(extracted_integer);
  }

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONLastGuess(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LastGuess of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LastGuess of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLastGuess(extracted_integer);
  }

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONGuessToSolutionComparison(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessToSolutionComparison of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessToSolutionComparison of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessToSolutionComparison(extracted_integer);
  }

void NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONRoundOver(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RoundOver of TypeNativeDataJSON is not true for false.");
          }
      }
    setRoundOver(the_bool);
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasDifficulty(false),
        flagHasMinimumPossibleValue(false),
        flagHasMaximumPossibleValue(false),
        flagHasLowerRangeHint(false),
        flagHasHigherRangeHint(false),
        flagHasGameState(false),
        flagHasGuessesMade(false),
        flagHasLastGuess(false),
        flagHasGuessToSolutionComparison(false),
        flagHasRoundOver(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const char *NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getDifficultyAsChars(void) const
  {
    TypeDifficulty result = getDifficulty();
    if (result.in_known_list)
        return stringFromDifficulty(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getDifficultyAsString(void) const
  {
    return getDifficultyAsChars();
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasMinimumPossibleValue(void) const
  {
    return flagHasMinimumPossibleValue;
  }

OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void)
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

const OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void) const
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasMaximumPossibleValue(void) const
  {
    return flagHasMaximumPossibleValue;
  }

OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void)
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

const OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void) const
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasLowerRangeHint(void) const
  {
    return flagHasLowerRangeHint;
  }

OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getLowerRangeHint(void)
  {
    assert(flagHasLowerRangeHint);
    return storeLowerRangeHint;
  }

const OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getLowerRangeHint(void) const
  {
    assert(flagHasLowerRangeHint);
    return storeLowerRangeHint;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasHigherRangeHint(void) const
  {
    return flagHasHigherRangeHint;
  }

OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getHigherRangeHint(void)
  {
    assert(flagHasHigherRangeHint);
    return storeHigherRangeHint;
  }

const OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getHigherRangeHint(void) const
  {
    assert(flagHasHigherRangeHint);
    return storeHigherRangeHint;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasGuessesMade(void) const
  {
    return flagHasGuessesMade;
  }

OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getGuessesMade(void)
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

const OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getGuessesMade(void) const
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasLastGuess(void) const
  {
    return flagHasLastGuess;
  }

OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getLastGuess(void)
  {
    assert(flagHasLastGuess);
    return storeLastGuess;
  }

const OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getLastGuess(void) const
  {
    assert(flagHasLastGuess);
    return storeLastGuess;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasGuessToSolutionComparison(void) const
  {
    return flagHasGuessToSolutionComparison;
  }

OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getGuessToSolutionComparison(void)
  {
    assert(flagHasGuessToSolutionComparison);
    return storeGuessToSolutionComparison;
  }

const OInteger NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getGuessToSolutionComparison(void) const
  {
    assert(flagHasGuessToSolutionComparison);
    return storeGuessToSolutionComparison;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::hasRoundOver(void) const
  {
    return flagHasRoundOver;
  }

bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getRoundOver(void)
  {
    assert(flagHasRoundOver);
    return storeRoundOver;
  }

const bool NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::getRoundOver(void) const
  {
    assert(flagHasRoundOver);
    return storeRoundOver;
  }

NumberGuessNotUnderstoodCommandJSON::NumberGuessNotUnderstoodCommandJSON(const NumberGuessNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

NumberGuessNotUnderstoodCommandJSON &NumberGuessNotUnderstoodCommandJSON::operator=(const NumberGuessNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void NumberGuessNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

NumberGuessNotUnderstoodCommandJSON::NumberGuessNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessNotUnderstoodCommandJSON::~NumberGuessNotUnderstoodCommandJSON(void)
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

const char *NumberGuessNotUnderstoodCommandJSON::getNumberGuessCommandKind(void) const
  {
    return "NumberGuessNotUnderstoodCommand";
  }

bool NumberGuessNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON * NumberGuessNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON * NumberGuessNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::Generator::lowerBoundGuessesMade[] = "0";
char NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::Generator::lowerBoundGuessToSolutionComparison[] = "-1";
char NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::Generator::upperBoundGuessToSolutionComparison[] = "1";
NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON *NumberGuessNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
NumberGuessNotUnderstoodCommandJSON *NumberGuessNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessNotUnderstoodCommandJSON>, NumberGuessNotUnderstoodCommandJSON *, bool> generator("Type NumberGuessNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
