/* file "HangmanGuessWordCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HangmanGuessWordCommandJSON.h"

#include "HangmanGuessWordCommandJSON.h"


HangmanGuessWordCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

HangmanGuessWordCommandJSON::TypeNativeDataJSON &HangmanGuessWordCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONBoard(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Board of TypeNativeDataJSON is not a string.");
    setBoard(std::string(json_string->getData()));
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONSolutionLength(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SolutionLength of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SolutionLength of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSolutionLength(extracted_integer);
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONScoreImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ScoreImageURL of TypeNativeDataJSON is not a string.");
    setScoreImageURL(std::string(json_string->getData()));
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONTimeElapsedSeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TimeElapsedSeconds of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TimeElapsedSeconds of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTimeElapsedSeconds(extracted_integer);
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONPreviousGuesses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreviousGuesses of TypeNativeDataJSON is not a string.");
    setPreviousGuesses(std::string(json_string->getData()));
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONNumberIncorrectGuessesMade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumberIncorrectGuessesMade of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumberIncorrectGuessesMade of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumberIncorrectGuessesMade(extracted_integer);
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONNumberRemainingGuesses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumberRemainingGuesses of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumberRemainingGuesses of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumberRemainingGuesses(extracted_integer);
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONLastWordGuess(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastWordGuess of TypeNativeDataJSON is not a string.");
    setLastWordGuess(std::string(json_string->getData()));
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONCorrectWordGuessed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CorrectWordGuessed of TypeNativeDataJSON is not true for false.");
          }
      }
    setCorrectWordGuessed(the_bool);
  }

void HangmanGuessWordCommandJSON::TypeNativeDataJSON::fromJSONIsGameOver(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsGameOver of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsGameOver(the_bool);
  }

HangmanGuessWordCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasBoard(false),
        flagHasSolutionLength(false),
        flagHasScoreImageURL(false),
        flagHasTimeElapsedSeconds(false),
        flagHasPreviousGuesses(false),
        flagHasNumberIncorrectGuessesMade(false),
        flagHasNumberRemainingGuesses(false),
        flagHasLastWordGuess(false),
        flagHasCorrectWordGuessed(false),
        flagHasIsGameOver(false)
  {
    extraIndex = create_string_index();
  }

HangmanGuessWordCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasBoard(void) const
  {
    return flagHasBoard;
  }

std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getBoard(void)
  {
    assert(flagHasBoard);
    return storeBoard;
  }

const std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getBoard(void) const
  {
    assert(flagHasBoard);
    return storeBoard;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasSolutionLength(void) const
  {
    return flagHasSolutionLength;
  }

OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getSolutionLength(void)
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

const OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getSolutionLength(void) const
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasScoreImageURL(void) const
  {
    return flagHasScoreImageURL;
  }

std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getScoreImageURL(void)
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

const std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getScoreImageURL(void) const
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasTimeElapsedSeconds(void) const
  {
    return flagHasTimeElapsedSeconds;
  }

OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void)
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

const OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void) const
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasPreviousGuesses(void) const
  {
    return flagHasPreviousGuesses;
  }

std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getPreviousGuesses(void)
  {
    assert(flagHasPreviousGuesses);
    return storePreviousGuesses;
  }

const std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getPreviousGuesses(void) const
  {
    assert(flagHasPreviousGuesses);
    return storePreviousGuesses;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasNumberIncorrectGuessesMade(void) const
  {
    return flagHasNumberIncorrectGuessesMade;
  }

OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getNumberIncorrectGuessesMade(void)
  {
    assert(flagHasNumberIncorrectGuessesMade);
    return storeNumberIncorrectGuessesMade;
  }

const OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getNumberIncorrectGuessesMade(void) const
  {
    assert(flagHasNumberIncorrectGuessesMade);
    return storeNumberIncorrectGuessesMade;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasNumberRemainingGuesses(void) const
  {
    return flagHasNumberRemainingGuesses;
  }

OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void)
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

const OInteger HangmanGuessWordCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void) const
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasLastWordGuess(void) const
  {
    return flagHasLastWordGuess;
  }

std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getLastWordGuess(void)
  {
    assert(flagHasLastWordGuess);
    return storeLastWordGuess;
  }

const std::string HangmanGuessWordCommandJSON::TypeNativeDataJSON::getLastWordGuess(void) const
  {
    assert(flagHasLastWordGuess);
    return storeLastWordGuess;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasCorrectWordGuessed(void) const
  {
    return flagHasCorrectWordGuessed;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::getCorrectWordGuessed(void)
  {
    assert(flagHasCorrectWordGuessed);
    return storeCorrectWordGuessed;
  }

const bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::getCorrectWordGuessed(void) const
  {
    assert(flagHasCorrectWordGuessed);
    return storeCorrectWordGuessed;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::hasIsGameOver(void) const
  {
    return flagHasIsGameOver;
  }

bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::getIsGameOver(void)
  {
    assert(flagHasIsGameOver);
    return storeIsGameOver;
  }

const bool HangmanGuessWordCommandJSON::TypeNativeDataJSON::getIsGameOver(void) const
  {
    assert(flagHasIsGameOver);
    return storeIsGameOver;
  }

HangmanGuessWordCommandJSON::HangmanGuessWordCommandJSON(const HangmanGuessWordCommandJSON &)
  {
    assert(false);
  }

HangmanGuessWordCommandJSON &HangmanGuessWordCommandJSON::operator=(const HangmanGuessWordCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HangmanGuessWordCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void HangmanGuessWordCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

HangmanGuessWordCommandJSON::HangmanGuessWordCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

HangmanGuessWordCommandJSON::~HangmanGuessWordCommandJSON(void)
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

const char *HangmanGuessWordCommandJSON::getHangmanCommandKind(void) const
  {
    return "HangmanGuessWordCommand";
  }

bool HangmanGuessWordCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

HangmanGuessWordCommandJSON::TypeNativeDataJSON * HangmanGuessWordCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const HangmanGuessWordCommandJSON::TypeNativeDataJSON * HangmanGuessWordCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char HangmanGuessWordCommandJSON::TypeNativeDataJSON::Generator::lowerBoundSolutionLength[] = "1";
char HangmanGuessWordCommandJSON::TypeNativeDataJSON::Generator::lowerBoundTimeElapsedSeconds[] = "0";
HangmanGuessWordCommandJSON::TypeNativeDataJSON *HangmanGuessWordCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HangmanGuessWordCommandJSON *HangmanGuessWordCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HangmanGuessWordCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HangmanGuessWordCommandJSON>, HangmanGuessWordCommandJSON *, bool> generator("Type HangmanGuessWordCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
