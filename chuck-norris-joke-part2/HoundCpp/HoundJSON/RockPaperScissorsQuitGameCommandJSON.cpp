/* file "RockPaperScissorsQuitGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RockPaperScissorsQuitGameCommandJSON.h"

#include "RockPaperScissorsQuitGameCommandJSON.h"


RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON &RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasGameState(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

RockPaperScissorsQuitGameCommandJSON::RockPaperScissorsQuitGameCommandJSON(const RockPaperScissorsQuitGameCommandJSON &)
  {
    assert(false);
  }

RockPaperScissorsQuitGameCommandJSON &RockPaperScissorsQuitGameCommandJSON::operator=(const RockPaperScissorsQuitGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RockPaperScissorsQuitGameCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void RockPaperScissorsQuitGameCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

RockPaperScissorsQuitGameCommandJSON::RockPaperScissorsQuitGameCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

RockPaperScissorsQuitGameCommandJSON::~RockPaperScissorsQuitGameCommandJSON(void)
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

const char *RockPaperScissorsQuitGameCommandJSON::getRockPaperScissorsCommandKind(void) const
  {
    return "RockPaperScissorsQuitCommand";
  }

bool RockPaperScissorsQuitGameCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON * RockPaperScissorsQuitGameCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON * RockPaperScissorsQuitGameCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON *RockPaperScissorsQuitGameCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
RockPaperScissorsQuitGameCommandJSON *RockPaperScissorsQuitGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RockPaperScissorsQuitGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsQuitGameCommandJSON>, RockPaperScissorsQuitGameCommandJSON *, bool> generator("Type RockPaperScissorsQuitGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
