/* file "NumberGuessStartGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessStartGameCommandJSON.h"

#include "NumberGuessStartGameCommandJSON.h"


NumberGuessStartGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

NumberGuessStartGameCommandJSON::TypeNativeDataJSON &NumberGuessStartGameCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NumberGuessStartGameCommandJSON::TypeNativeDataJSON::fromJSONGameState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameState of TypeNativeDataJSON is not a string.");
    setGameState(std::string(json_string->getData()));
  }

NumberGuessStartGameCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasGameState(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessStartGameCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NumberGuessStartGameCommandJSON::TypeNativeDataJSON::hasGameState(void) const
  {
    return flagHasGameState;
  }

std::string NumberGuessStartGameCommandJSON::TypeNativeDataJSON::getGameState(void)
  {
    assert(flagHasGameState);
    return storeGameState;
  }

const std::string NumberGuessStartGameCommandJSON::TypeNativeDataJSON::getGameState(void) const
  {
    assert(flagHasGameState);
    return storeGameState;
  }

NumberGuessStartGameCommandJSON::NumberGuessStartGameCommandJSON(const NumberGuessStartGameCommandJSON &)
  {
    assert(false);
  }

NumberGuessStartGameCommandJSON &NumberGuessStartGameCommandJSON::operator=(const NumberGuessStartGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessStartGameCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void NumberGuessStartGameCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

NumberGuessStartGameCommandJSON::NumberGuessStartGameCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

NumberGuessStartGameCommandJSON::~NumberGuessStartGameCommandJSON(void)
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

const char *NumberGuessStartGameCommandJSON::getNumberGuessCommandKind(void) const
  {
    return "NumberGuessStartGameCommand";
  }

bool NumberGuessStartGameCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

NumberGuessStartGameCommandJSON::TypeNativeDataJSON * NumberGuessStartGameCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const NumberGuessStartGameCommandJSON::TypeNativeDataJSON * NumberGuessStartGameCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

NumberGuessStartGameCommandJSON::TypeNativeDataJSON *NumberGuessStartGameCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
NumberGuessStartGameCommandJSON *NumberGuessStartGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessStartGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessStartGameCommandJSON>, NumberGuessStartGameCommandJSON *, bool> generator("Type NumberGuessStartGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
