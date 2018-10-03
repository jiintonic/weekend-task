/* file "NumberGuessGuessNumberCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessGuessNumberCommandJSON.h"

#include "NumberGuessGuessNumberCommandJSON.h"


NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(void)
  {
  }

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(const TypeDifficulty &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::TypeDifficulty(TypeDifficultyKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator==(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator!=(const TypeDifficulty &other) const
  {
    return !(operator==(other));
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<(const TypeDifficulty &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>(const TypeDifficulty &other) const
  {
    return other.operator<(*this);
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator>=(const TypeDifficulty &other) const
  {
    return !(operator<(other));
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty::operator<=(const TypeDifficulty &other) const
  {
    return !(other.operator<(*this));
  }

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficultyKnownValues NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::stringToDifficulty(const char *chars)
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

const char *NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::stringFromDifficulty(TypeDifficultyKnownValues the_enum)
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

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON &NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONMinimumPossibleValue(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONMaximumPossibleValue(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONLowerRangeHint(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONHigherRangeHint(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONGuessesMade(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONLastGuess(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONGuessToSolutionComparison(JSONValue *json_value, bool ignore_extras)
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

void NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::fromJSONRoundOver(JSONValue *json_value, bool ignore_extras)
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

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
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

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::TypeDifficulty NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const char *NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getDifficultyAsChars(void) const
  {
    TypeDifficulty result = getDifficulty();
    if (result.in_known_list)
        return stringFromDifficulty(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getDifficultyAsString(void) const
  {
    return getDifficultyAsChars();
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasMinimumPossibleValue(void) const
  {
    return flagHasMinimumPossibleValue;
  }

OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void)
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

const OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getMinimumPossibleValue(void) const
  {
    assert(flagHasMinimumPossibleValue);
    return storeMinimumPossibleValue;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasMaximumPossibleValue(void) const
  {
    return flagHasMaximumPossibleValue;
  }

OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void)
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

const OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getMaximumPossibleValue(void) const
  {
    assert(flagHasMaximumPossibleValue);
    return storeMaximumPossibleValue;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasLowerRangeHint(void) const
  {
    return flagHasLowerRangeHint;
  }

OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getLowerRangeHint(void)
  {
    assert(flagHasLowerRangeHint);
    return storeLowerRangeHint;
  }

const OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getLowerRangeHint(void) const
  {
    assert(flagHasLowerRangeHint);
    return storeLowerRangeHint;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasHigherRangeHint(void) const
  {
    return flagHasHigherRangeHint;
  }

OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getHigherRangeHint(void)
  {
    assert(flagHasHigherRangeHint);
    return storeHigherRangeHint;
  }

const OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getHigherRangeHint(void) const
  {
    assert(flagHasHigherRangeHint);
    return storeHigherRangeHint;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasGuessesMade(void) const
  {
    return flagHasGuessesMade;
  }

OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getGuessesMade(void)
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

const OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getGuessesMade(void) const
  {
    assert(flagHasGuessesMade);
    return storeGuessesMade;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasLastGuess(void) const
  {
    return flagHasLastGuess;
  }

OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getLastGuess(void)
  {
    assert(flagHasLastGuess);
    return storeLastGuess;
  }

const OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getLastGuess(void) const
  {
    assert(flagHasLastGuess);
    return storeLastGuess;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasGuessToSolutionComparison(void) const
  {
    return flagHasGuessToSolutionComparison;
  }

OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getGuessToSolutionComparison(void)
  {
    assert(flagHasGuessToSolutionComparison);
    return storeGuessToSolutionComparison;
  }

const OInteger NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getGuessToSolutionComparison(void) const
  {
    assert(flagHasGuessToSolutionComparison);
    return storeGuessToSolutionComparison;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::hasRoundOver(void) const
  {
    return flagHasRoundOver;
  }

bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getRoundOver(void)
  {
    assert(flagHasRoundOver);
    return storeRoundOver;
  }

const bool NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::getRoundOver(void) const
  {
    assert(flagHasRoundOver);
    return storeRoundOver;
  }

NumberGuessGuessNumberCommandJSON::NumberGuessGuessNumberCommandJSON(const NumberGuessGuessNumberCommandJSON &)
  {
    assert(false);
  }

NumberGuessGuessNumberCommandJSON &NumberGuessGuessNumberCommandJSON::operator=(const NumberGuessGuessNumberCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessGuessNumberCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void NumberGuessGuessNumberCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

NumberGuessGuessNumberCommandJSON::NumberGuessGuessNumberCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessGuessNumberCommandJSON::~NumberGuessGuessNumberCommandJSON(void)
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

const char *NumberGuessGuessNumberCommandJSON::getNumberGuessCommandKind(void) const
  {
    return "NumberGuessGuessNumberCommand";
  }

bool NumberGuessGuessNumberCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON * NumberGuessGuessNumberCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON * NumberGuessGuessNumberCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::Generator::lowerBoundGuessesMade[] = "1";
char NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::Generator::lowerBoundGuessToSolutionComparison[] = "-1";
char NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::Generator::upperBoundGuessToSolutionComparison[] = "1";
NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON *NumberGuessGuessNumberCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
NumberGuessGuessNumberCommandJSON *NumberGuessGuessNumberCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessGuessNumberCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessGuessNumberCommandJSON>, NumberGuessGuessNumberCommandJSON *, bool> generator("Type NumberGuessGuessNumberCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
