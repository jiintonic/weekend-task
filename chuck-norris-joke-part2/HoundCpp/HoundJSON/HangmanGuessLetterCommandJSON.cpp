/* file "HangmanGuessLetterCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HangmanGuessLetterCommandJSON.h"

#include "HangmanGuessLetterCommandJSON.h"


HangmanGuessLetterCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

HangmanGuessLetterCommandJSON::TypeNativeDataJSON &HangmanGuessLetterCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONBoard(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Board of TypeNativeDataJSON is not a string.");
    setBoard(std::string(json_string->getData()));
  }

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONSolutionLength(JSONValue *json_value, bool ignore_extras)
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

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONScoreImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ScoreImageURL of TypeNativeDataJSON is not a string.");
    setScoreImageURL(std::string(json_string->getData()));
  }

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONTimeElapsedSeconds(JSONValue *json_value, bool ignore_extras)
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

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONPreviousGuesses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreviousGuesses of TypeNativeDataJSON is not a string.");
    setPreviousGuesses(std::string(json_string->getData()));
  }

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONNumberIncorrectGuessesMade(JSONValue *json_value, bool ignore_extras)
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

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONNumberRemainingGuesses(JSONValue *json_value, bool ignore_extras)
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

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONLastLetterGuess(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastLetterGuess of TypeNativeDataJSON is not a string.");
    setLastLetterGuess(std::string(json_string->getData()));
  }

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONLastLetterGuessFrequency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LastLetterGuessFrequency of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LastLetterGuessFrequency of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLastLetterGuessFrequency(extracted_integer);
  }

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONLetterWasAlreadyGuessed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field LetterWasAlreadyGuessed of TypeNativeDataJSON is not true for false.");
          }
      }
    setLetterWasAlreadyGuessed(the_bool);
  }

void HangmanGuessLetterCommandJSON::TypeNativeDataJSON::fromJSONIsGameOver(JSONValue *json_value, bool ignore_extras)
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

HangmanGuessLetterCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasBoard(false),
        flagHasSolutionLength(false),
        flagHasScoreImageURL(false),
        flagHasTimeElapsedSeconds(false),
        flagHasPreviousGuesses(false),
        flagHasNumberIncorrectGuessesMade(false),
        flagHasNumberRemainingGuesses(false),
        flagHasLastLetterGuess(false),
        flagHasLastLetterGuessFrequency(false),
        flagHasLetterWasAlreadyGuessed(false),
        flagHasIsGameOver(false)
  {
    extraIndex = create_string_index();
  }

HangmanGuessLetterCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasBoard(void) const
  {
    return flagHasBoard;
  }

std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getBoard(void)
  {
    assert(flagHasBoard);
    return storeBoard;
  }

const std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getBoard(void) const
  {
    assert(flagHasBoard);
    return storeBoard;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasSolutionLength(void) const
  {
    return flagHasSolutionLength;
  }

OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getSolutionLength(void)
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

const OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getSolutionLength(void) const
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasScoreImageURL(void) const
  {
    return flagHasScoreImageURL;
  }

std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getScoreImageURL(void)
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

const std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getScoreImageURL(void) const
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasTimeElapsedSeconds(void) const
  {
    return flagHasTimeElapsedSeconds;
  }

OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void)
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

const OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void) const
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasPreviousGuesses(void) const
  {
    return flagHasPreviousGuesses;
  }

std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getPreviousGuesses(void)
  {
    assert(flagHasPreviousGuesses);
    return storePreviousGuesses;
  }

const std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getPreviousGuesses(void) const
  {
    assert(flagHasPreviousGuesses);
    return storePreviousGuesses;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasNumberIncorrectGuessesMade(void) const
  {
    return flagHasNumberIncorrectGuessesMade;
  }

OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getNumberIncorrectGuessesMade(void)
  {
    assert(flagHasNumberIncorrectGuessesMade);
    return storeNumberIncorrectGuessesMade;
  }

const OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getNumberIncorrectGuessesMade(void) const
  {
    assert(flagHasNumberIncorrectGuessesMade);
    return storeNumberIncorrectGuessesMade;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasNumberRemainingGuesses(void) const
  {
    return flagHasNumberRemainingGuesses;
  }

OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void)
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

const OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void) const
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasLastLetterGuess(void) const
  {
    return flagHasLastLetterGuess;
  }

std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getLastLetterGuess(void)
  {
    assert(flagHasLastLetterGuess);
    return storeLastLetterGuess;
  }

const std::string HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getLastLetterGuess(void) const
  {
    assert(flagHasLastLetterGuess);
    return storeLastLetterGuess;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasLastLetterGuessFrequency(void) const
  {
    return flagHasLastLetterGuessFrequency;
  }

OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getLastLetterGuessFrequency(void)
  {
    assert(flagHasLastLetterGuessFrequency);
    return storeLastLetterGuessFrequency;
  }

const OInteger HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getLastLetterGuessFrequency(void) const
  {
    assert(flagHasLastLetterGuessFrequency);
    return storeLastLetterGuessFrequency;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasLetterWasAlreadyGuessed(void) const
  {
    return flagHasLetterWasAlreadyGuessed;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getLetterWasAlreadyGuessed(void)
  {
    assert(flagHasLetterWasAlreadyGuessed);
    return storeLetterWasAlreadyGuessed;
  }

const bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getLetterWasAlreadyGuessed(void) const
  {
    assert(flagHasLetterWasAlreadyGuessed);
    return storeLetterWasAlreadyGuessed;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::hasIsGameOver(void) const
  {
    return flagHasIsGameOver;
  }

bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getIsGameOver(void)
  {
    assert(flagHasIsGameOver);
    return storeIsGameOver;
  }

const bool HangmanGuessLetterCommandJSON::TypeNativeDataJSON::getIsGameOver(void) const
  {
    assert(flagHasIsGameOver);
    return storeIsGameOver;
  }

HangmanGuessLetterCommandJSON::HangmanGuessLetterCommandJSON(const HangmanGuessLetterCommandJSON &)
  {
    assert(false);
  }

HangmanGuessLetterCommandJSON &HangmanGuessLetterCommandJSON::operator=(const HangmanGuessLetterCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HangmanGuessLetterCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void HangmanGuessLetterCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

HangmanGuessLetterCommandJSON::HangmanGuessLetterCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

HangmanGuessLetterCommandJSON::~HangmanGuessLetterCommandJSON(void)
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

const char *HangmanGuessLetterCommandJSON::getHangmanCommandKind(void) const
  {
    return "HangmanGuessLetterCommand";
  }

bool HangmanGuessLetterCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

HangmanGuessLetterCommandJSON::TypeNativeDataJSON * HangmanGuessLetterCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const HangmanGuessLetterCommandJSON::TypeNativeDataJSON * HangmanGuessLetterCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char HangmanGuessLetterCommandJSON::TypeNativeDataJSON::Generator::lowerBoundSolutionLength[] = "1";
char HangmanGuessLetterCommandJSON::TypeNativeDataJSON::Generator::lowerBoundTimeElapsedSeconds[] = "0";
char HangmanGuessLetterCommandJSON::TypeNativeDataJSON::Generator::lowerBoundLastLetterGuessFrequency[] = "0";
HangmanGuessLetterCommandJSON::TypeNativeDataJSON *HangmanGuessLetterCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HangmanGuessLetterCommandJSON *HangmanGuessLetterCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HangmanGuessLetterCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HangmanGuessLetterCommandJSON>, HangmanGuessLetterCommandJSON *, bool> generator("Type HangmanGuessLetterCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
