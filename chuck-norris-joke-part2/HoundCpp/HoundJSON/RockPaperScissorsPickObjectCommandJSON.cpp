/* file "RockPaperScissorsPickObjectCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RockPaperScissorsPickObjectCommandJSON.h"

#include "RockPaperScissorsPickObjectCommandJSON.h"


RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON &RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::fromJSONServerScore(JSONValue *json_value, bool ignore_extras)
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

void RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::fromJSONPlayerScore(JSONValue *json_value, bool ignore_extras)
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

void RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

void RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::fromJSONLastPlayerObject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastPlayerObject of TypeNativeDataJSON is not a string.");
    setLastPlayerObject(std::string(json_string->getData()));
  }

void RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::fromJSONLastServerObject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastServerObject of TypeNativeDataJSON is not a string.");
    setLastServerObject(std::string(json_string->getData()));
  }

void RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::fromJSONMatchImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MatchImageURL of TypeNativeDataJSON is not a string.");
    setMatchImageURL(std::string(json_string->getData()));
  }

void RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::fromJSONIsRoundOver(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRoundOver of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsRoundOver(the_bool);
  }

RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasServerScore(false),
        flagHasPlayerScore(false),
        flagHasGameState(false),
        flagHasLastPlayerObject(false),
        flagHasLastServerObject(false),
        flagHasMatchImageURL(false),
        flagHasIsRoundOver(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::hasServerScore(void) const
  {
    return flagHasServerScore;
  }

OInteger RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getServerScore(void)
  {
    assert(flagHasServerScore);
    return storeServerScore;
  }

const OInteger RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getServerScore(void) const
  {
    assert(flagHasServerScore);
    return storeServerScore;
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::hasPlayerScore(void) const
  {
    return flagHasPlayerScore;
  }

OInteger RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getPlayerScore(void)
  {
    assert(flagHasPlayerScore);
    return storePlayerScore;
  }

const OInteger RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getPlayerScore(void) const
  {
    assert(flagHasPlayerScore);
    return storePlayerScore;
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::hasLastPlayerObject(void) const
  {
    return flagHasLastPlayerObject;
  }

std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getLastPlayerObject(void)
  {
    assert(flagHasLastPlayerObject);
    return storeLastPlayerObject;
  }

const std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getLastPlayerObject(void) const
  {
    assert(flagHasLastPlayerObject);
    return storeLastPlayerObject;
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::hasLastServerObject(void) const
  {
    return flagHasLastServerObject;
  }

std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getLastServerObject(void)
  {
    assert(flagHasLastServerObject);
    return storeLastServerObject;
  }

const std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getLastServerObject(void) const
  {
    assert(flagHasLastServerObject);
    return storeLastServerObject;
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::hasMatchImageURL(void) const
  {
    return flagHasMatchImageURL;
  }

std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getMatchImageURL(void)
  {
    assert(flagHasMatchImageURL);
    return storeMatchImageURL;
  }

const std::string RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getMatchImageURL(void) const
  {
    assert(flagHasMatchImageURL);
    return storeMatchImageURL;
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::hasIsRoundOver(void) const
  {
    return flagHasIsRoundOver;
  }

bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getIsRoundOver(void)
  {
    assert(flagHasIsRoundOver);
    return storeIsRoundOver;
  }

const bool RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::getIsRoundOver(void) const
  {
    assert(flagHasIsRoundOver);
    return storeIsRoundOver;
  }

RockPaperScissorsPickObjectCommandJSON::RockPaperScissorsPickObjectCommandJSON(const RockPaperScissorsPickObjectCommandJSON &)
  {
    assert(false);
  }

RockPaperScissorsPickObjectCommandJSON &RockPaperScissorsPickObjectCommandJSON::operator=(const RockPaperScissorsPickObjectCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RockPaperScissorsPickObjectCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void RockPaperScissorsPickObjectCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

RockPaperScissorsPickObjectCommandJSON::RockPaperScissorsPickObjectCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsPickObjectCommandJSON::~RockPaperScissorsPickObjectCommandJSON(void)
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

const char *RockPaperScissorsPickObjectCommandJSON::getRockPaperScissorsCommandKind(void) const
  {
    return "RockPaperScissorsPickObjectCommand";
  }

bool RockPaperScissorsPickObjectCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON * RockPaperScissorsPickObjectCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON * RockPaperScissorsPickObjectCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::Generator::lowerBoundServerScore[] = "0";
char RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::Generator::lowerBoundPlayerScore[] = "0";
RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON *RockPaperScissorsPickObjectCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
RockPaperScissorsPickObjectCommandJSON *RockPaperScissorsPickObjectCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RockPaperScissorsPickObjectCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsPickObjectCommandJSON>, RockPaperScissorsPickObjectCommandJSON *, bool> generator("Type RockPaperScissorsPickObjectCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
