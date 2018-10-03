/* file "HangmanNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HangmanNotUnderstoodCommandJSON.h"

#include "HangmanNotUnderstoodCommandJSON.h"


HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON &HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONBoard(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Board of TypeNativeDataJSON is not a string.");
    setBoard(std::string(json_string->getData()));
  }

void HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONSolutionLength(JSONValue *json_value, bool ignore_extras)
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

void HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONScoreImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ScoreImageURL of TypeNativeDataJSON is not a string.");
    setScoreImageURL(std::string(json_string->getData()));
  }

void HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONTimeElapsedSeconds(JSONValue *json_value, bool ignore_extras)
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

void HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONPreviousGuesses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreviousGuesses of TypeNativeDataJSON is not a string.");
    setPreviousGuesses(std::string(json_string->getData()));
  }

void HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONNumberIncorrectGuessesMade(JSONValue *json_value, bool ignore_extras)
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

void HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONNumberRemainingGuesses(JSONValue *json_value, bool ignore_extras)
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

HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasBoard(false),
        flagHasSolutionLength(false),
        flagHasScoreImageURL(false),
        flagHasTimeElapsedSeconds(false),
        flagHasPreviousGuesses(false),
        flagHasNumberIncorrectGuessesMade(false),
        flagHasNumberRemainingGuesses(false)
  {
    extraIndex = create_string_index();
  }

HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::hasBoard(void) const
  {
    return flagHasBoard;
  }

std::string HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getBoard(void)
  {
    assert(flagHasBoard);
    return storeBoard;
  }

const std::string HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getBoard(void) const
  {
    assert(flagHasBoard);
    return storeBoard;
  }

bool HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::hasSolutionLength(void) const
  {
    return flagHasSolutionLength;
  }

OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getSolutionLength(void)
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

const OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getSolutionLength(void) const
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

bool HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::hasScoreImageURL(void) const
  {
    return flagHasScoreImageURL;
  }

std::string HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getScoreImageURL(void)
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

const std::string HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getScoreImageURL(void) const
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

bool HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::hasTimeElapsedSeconds(void) const
  {
    return flagHasTimeElapsedSeconds;
  }

OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void)
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

const OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void) const
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

bool HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::hasPreviousGuesses(void) const
  {
    return flagHasPreviousGuesses;
  }

std::string HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getPreviousGuesses(void)
  {
    assert(flagHasPreviousGuesses);
    return storePreviousGuesses;
  }

const std::string HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getPreviousGuesses(void) const
  {
    assert(flagHasPreviousGuesses);
    return storePreviousGuesses;
  }

bool HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::hasNumberIncorrectGuessesMade(void) const
  {
    return flagHasNumberIncorrectGuessesMade;
  }

OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getNumberIncorrectGuessesMade(void)
  {
    assert(flagHasNumberIncorrectGuessesMade);
    return storeNumberIncorrectGuessesMade;
  }

const OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getNumberIncorrectGuessesMade(void) const
  {
    assert(flagHasNumberIncorrectGuessesMade);
    return storeNumberIncorrectGuessesMade;
  }

bool HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::hasNumberRemainingGuesses(void) const
  {
    return flagHasNumberRemainingGuesses;
  }

OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void)
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

const OInteger HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void) const
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

HangmanNotUnderstoodCommandJSON::HangmanNotUnderstoodCommandJSON(const HangmanNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

HangmanNotUnderstoodCommandJSON &HangmanNotUnderstoodCommandJSON::operator=(const HangmanNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HangmanNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void HangmanNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

HangmanNotUnderstoodCommandJSON::HangmanNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

HangmanNotUnderstoodCommandJSON::~HangmanNotUnderstoodCommandJSON(void)
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

const char *HangmanNotUnderstoodCommandJSON::getHangmanCommandKind(void) const
  {
    return "HangmanNotUnderstoodGameCommand";
  }

bool HangmanNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON * HangmanNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON * HangmanNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::Generator::lowerBoundSolutionLength[] = "1";
char HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::Generator::lowerBoundTimeElapsedSeconds[] = "0";
HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON *HangmanNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HangmanNotUnderstoodCommandJSON *HangmanNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HangmanNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HangmanNotUnderstoodCommandJSON>, HangmanNotUnderstoodCommandJSON *, bool> generator("Type HangmanNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
