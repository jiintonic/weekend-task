/* file "HangmanStartGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HangmanStartGameCommandJSON.h"

#include "HangmanStartGameCommandJSON.h"


HangmanStartGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

HangmanStartGameCommandJSON::TypeNativeDataJSON &HangmanStartGameCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HangmanStartGameCommandJSON::TypeNativeDataJSON::fromJSONBoard(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Board of TypeNativeDataJSON is not a string.");
    setBoard(std::string(json_string->getData()));
  }

void HangmanStartGameCommandJSON::TypeNativeDataJSON::fromJSONSolutionLength(JSONValue *json_value, bool ignore_extras)
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

void HangmanStartGameCommandJSON::TypeNativeDataJSON::fromJSONScoreImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ScoreImageURL of TypeNativeDataJSON is not a string.");
    setScoreImageURL(std::string(json_string->getData()));
  }

void HangmanStartGameCommandJSON::TypeNativeDataJSON::fromJSONNumberRemainingGuesses(JSONValue *json_value, bool ignore_extras)
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

void HangmanStartGameCommandJSON::TypeNativeDataJSON::fromJSONTimeElapsedSeconds(JSONValue *json_value, bool ignore_extras)
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

HangmanStartGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasBoard(false),
        flagHasSolutionLength(false),
        flagHasScoreImageURL(false),
        flagHasNumberRemainingGuesses(false),
        flagHasTimeElapsedSeconds(false)
  {
    extraIndex = create_string_index();
  }

HangmanStartGameCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HangmanStartGameCommandJSON::TypeNativeDataJSON::hasBoard(void) const
  {
    return flagHasBoard;
  }

std::string HangmanStartGameCommandJSON::TypeNativeDataJSON::getBoard(void)
  {
    assert(flagHasBoard);
    return storeBoard;
  }

const std::string HangmanStartGameCommandJSON::TypeNativeDataJSON::getBoard(void) const
  {
    assert(flagHasBoard);
    return storeBoard;
  }

bool HangmanStartGameCommandJSON::TypeNativeDataJSON::hasSolutionLength(void) const
  {
    return flagHasSolutionLength;
  }

OInteger HangmanStartGameCommandJSON::TypeNativeDataJSON::getSolutionLength(void)
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

const OInteger HangmanStartGameCommandJSON::TypeNativeDataJSON::getSolutionLength(void) const
  {
    assert(flagHasSolutionLength);
    return storeSolutionLength;
  }

bool HangmanStartGameCommandJSON::TypeNativeDataJSON::hasScoreImageURL(void) const
  {
    return flagHasScoreImageURL;
  }

std::string HangmanStartGameCommandJSON::TypeNativeDataJSON::getScoreImageURL(void)
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

const std::string HangmanStartGameCommandJSON::TypeNativeDataJSON::getScoreImageURL(void) const
  {
    assert(flagHasScoreImageURL);
    return storeScoreImageURL;
  }

bool HangmanStartGameCommandJSON::TypeNativeDataJSON::hasNumberRemainingGuesses(void) const
  {
    return flagHasNumberRemainingGuesses;
  }

OInteger HangmanStartGameCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void)
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

const OInteger HangmanStartGameCommandJSON::TypeNativeDataJSON::getNumberRemainingGuesses(void) const
  {
    assert(flagHasNumberRemainingGuesses);
    return storeNumberRemainingGuesses;
  }

bool HangmanStartGameCommandJSON::TypeNativeDataJSON::hasTimeElapsedSeconds(void) const
  {
    return flagHasTimeElapsedSeconds;
  }

OInteger HangmanStartGameCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void)
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

const OInteger HangmanStartGameCommandJSON::TypeNativeDataJSON::getTimeElapsedSeconds(void) const
  {
    assert(flagHasTimeElapsedSeconds);
    return storeTimeElapsedSeconds;
  }

HangmanStartGameCommandJSON::HangmanStartGameCommandJSON(const HangmanStartGameCommandJSON &)
  {
    assert(false);
  }

HangmanStartGameCommandJSON &HangmanStartGameCommandJSON::operator=(const HangmanStartGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HangmanStartGameCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void HangmanStartGameCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

HangmanStartGameCommandJSON::HangmanStartGameCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

HangmanStartGameCommandJSON::~HangmanStartGameCommandJSON(void)
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

const char *HangmanStartGameCommandJSON::getHangmanCommandKind(void) const
  {
    return "HangmanStartGameCommand";
  }

bool HangmanStartGameCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

HangmanStartGameCommandJSON::TypeNativeDataJSON * HangmanStartGameCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const HangmanStartGameCommandJSON::TypeNativeDataJSON * HangmanStartGameCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char HangmanStartGameCommandJSON::TypeNativeDataJSON::Generator::lowerBoundSolutionLength[] = "1";
char HangmanStartGameCommandJSON::TypeNativeDataJSON::Generator::lowerBoundTimeElapsedSeconds[] = "0";
HangmanStartGameCommandJSON::TypeNativeDataJSON *HangmanStartGameCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HangmanStartGameCommandJSON *HangmanStartGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HangmanStartGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HangmanStartGameCommandJSON>, HangmanStartGameCommandJSON *, bool> generator("Type HangmanStartGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
