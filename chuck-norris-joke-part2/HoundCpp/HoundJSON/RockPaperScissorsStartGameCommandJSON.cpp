/* file "RockPaperScissorsStartGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RockPaperScissorsStartGameCommandJSON.h"

#include "RockPaperScissorsStartGameCommandJSON.h"


RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON &RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

void RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::fromJSONMatchImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MatchImageURL of TypeNativeDataJSON is not a string.");
    setMatchImageURL(std::string(json_string->getData()));
  }

RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasGameState(false),
        flagHasMatchImageURL(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

bool RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::hasMatchImageURL(void) const
  {
    return flagHasMatchImageURL;
  }

std::string RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::getMatchImageURL(void)
  {
    assert(flagHasMatchImageURL);
    return storeMatchImageURL;
  }

const std::string RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::getMatchImageURL(void) const
  {
    assert(flagHasMatchImageURL);
    return storeMatchImageURL;
  }

RockPaperScissorsStartGameCommandJSON::RockPaperScissorsStartGameCommandJSON(const RockPaperScissorsStartGameCommandJSON &)
  {
    assert(false);
  }

RockPaperScissorsStartGameCommandJSON &RockPaperScissorsStartGameCommandJSON::operator=(const RockPaperScissorsStartGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RockPaperScissorsStartGameCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void RockPaperScissorsStartGameCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

RockPaperScissorsStartGameCommandJSON::RockPaperScissorsStartGameCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsStartGameCommandJSON::~RockPaperScissorsStartGameCommandJSON(void)
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

const char *RockPaperScissorsStartGameCommandJSON::getRockPaperScissorsCommandKind(void) const
  {
    return "RockPaperScissorsStartGameCommand";
  }

bool RockPaperScissorsStartGameCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON * RockPaperScissorsStartGameCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON * RockPaperScissorsStartGameCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON *RockPaperScissorsStartGameCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
RockPaperScissorsStartGameCommandJSON *RockPaperScissorsStartGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RockPaperScissorsStartGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsStartGameCommandJSON>, RockPaperScissorsStartGameCommandJSON *, bool> generator("Type RockPaperScissorsStartGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
