/* file "RockPaperScissorsNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RockPaperScissorsNotUnderstoodCommandJSON.h"

#include "RockPaperScissorsNotUnderstoodCommandJSON.h"


RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON &RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONServerScore(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ServerScore of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ServerScore of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setServerScore(extracted_integer);
  }

void RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONPlayerScore(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PlayerScore of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PlayerScore of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPlayerScore(extracted_integer);
  }

void RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

void RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONLastPlayerObject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastPlayerObject of TypeNativeDataJSON is not a string.");
    setLastPlayerObject(std::string(json_string->getData()));
  }

void RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONLastServerObject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastServerObject of TypeNativeDataJSON is not a string.");
    setLastServerObject(std::string(json_string->getData()));
  }

void RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONMatchImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MatchImageURL of TypeNativeDataJSON is not a string.");
    setMatchImageURL(std::string(json_string->getData()));
  }

RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasServerScore(false),
        flagHasPlayerScore(false),
        flagHasGameState(false),
        flagHasLastPlayerObject(false),
        flagHasLastServerObject(false),
        flagHasMatchImageURL(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::hasServerScore(void) const
  {
    return flagHasServerScore;
  }

OInteger RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getServerScore(void)
  {
    assert(flagHasServerScore);
    return storeServerScore;
  }

const OInteger RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getServerScore(void) const
  {
    assert(flagHasServerScore);
    return storeServerScore;
  }

bool RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::hasPlayerScore(void) const
  {
    return flagHasPlayerScore;
  }

OInteger RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getPlayerScore(void)
  {
    assert(flagHasPlayerScore);
    return storePlayerScore;
  }

const OInteger RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getPlayerScore(void) const
  {
    assert(flagHasPlayerScore);
    return storePlayerScore;
  }

bool RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

bool RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::hasLastPlayerObject(void) const
  {
    return flagHasLastPlayerObject;
  }

std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getLastPlayerObject(void)
  {
    assert(flagHasLastPlayerObject);
    return storeLastPlayerObject;
  }

const std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getLastPlayerObject(void) const
  {
    assert(flagHasLastPlayerObject);
    return storeLastPlayerObject;
  }

bool RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::hasLastServerObject(void) const
  {
    return flagHasLastServerObject;
  }

std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getLastServerObject(void)
  {
    assert(flagHasLastServerObject);
    return storeLastServerObject;
  }

const std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getLastServerObject(void) const
  {
    assert(flagHasLastServerObject);
    return storeLastServerObject;
  }

bool RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::hasMatchImageURL(void) const
  {
    return flagHasMatchImageURL;
  }

std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getMatchImageURL(void)
  {
    assert(flagHasMatchImageURL);
    return storeMatchImageURL;
  }

const std::string RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::getMatchImageURL(void) const
  {
    assert(flagHasMatchImageURL);
    return storeMatchImageURL;
  }

RockPaperScissorsNotUnderstoodCommandJSON::RockPaperScissorsNotUnderstoodCommandJSON(const RockPaperScissorsNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

RockPaperScissorsNotUnderstoodCommandJSON &RockPaperScissorsNotUnderstoodCommandJSON::operator=(const RockPaperScissorsNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RockPaperScissorsNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void RockPaperScissorsNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

RockPaperScissorsNotUnderstoodCommandJSON::RockPaperScissorsNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsNotUnderstoodCommandJSON::~RockPaperScissorsNotUnderstoodCommandJSON(void)
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

const char *RockPaperScissorsNotUnderstoodCommandJSON::getRockPaperScissorsCommandKind(void) const
  {
    return "RockPaperScissorsNotUnderstoodCommand";
  }

bool RockPaperScissorsNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON * RockPaperScissorsNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON * RockPaperScissorsNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::Generator::lowerBoundServerScore[] = "0";
char RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::Generator::lowerBoundPlayerScore[] = "0";
RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON *RockPaperScissorsNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
RockPaperScissorsNotUnderstoodCommandJSON *RockPaperScissorsNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RockPaperScissorsNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsNotUnderstoodCommandJSON>, RockPaperScissorsNotUnderstoodCommandJSON *, bool> generator("Type RockPaperScissorsNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
