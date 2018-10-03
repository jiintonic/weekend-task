/* file "ClientMatchCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientMatchCommandJSON.h"

#include "ClientMatchCommandJSON.h"


ClientMatchCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

ClientMatchCommandJSON::TypeNativeDataJSON &ClientMatchCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ClientMatchCommandJSON::TypeNativeDataJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setResult(json_value);
  }

ClientMatchCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasResult(false)
  {
    extraIndex = create_string_index();
  }

ClientMatchCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasResult)
      {
        storeResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ClientMatchCommandJSON::TypeNativeDataJSON::hasResult(void) const
  {
    return flagHasResult;
  }

JSONValue * ClientMatchCommandJSON::TypeNativeDataJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const JSONValue * ClientMatchCommandJSON::TypeNativeDataJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

ClientMatchCommandJSON::ClientMatchCommandJSON(const ClientMatchCommandJSON &)
  {
    assert(false);
  }

ClientMatchCommandJSON &ClientMatchCommandJSON::operator=(const ClientMatchCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ClientMatchCommandJSON::extraResultToJSON(void) const
  {
    storeResult->add_reference();
    return storeResult;
  }

JSONValue *ClientMatchCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *ClientMatchCommandJSON::extraMatchedItemToJSON(void) const
  {
    JSONValueHandler handler_MatchedItem;
    storeMatchedItem->write_as_json(&handler_MatchedItem);
    handler_MatchedItem.result->add_reference();
    return handler_MatchedItem.result;
  }

void ClientMatchCommandJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setResult(json_value);
  }

void ClientMatchCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void ClientMatchCommandJSON::fromJSONMatchedItem(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientMatchJSON *convert_classy = ClientMatchJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMatchedItem(convert_classy);
    convert_classy->remove_reference();
  }

ClientMatchCommandJSON::ClientMatchCommandJSON(void) :
        flagHasResult(false),
        flagHasNativeData(false),
        flagHasMatchedItem(false)
  {
    extraIndex = create_string_index();
  }

ClientMatchCommandJSON::~ClientMatchCommandJSON(void)
  {
    if (flagHasResult)
      {
        storeResult->remove_reference();
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasMatchedItem)
      {
        storeMatchedItem->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientMatchCommandJSON::getCommandKind(void) const
  {
    return "ClientMatchCommand";
  }

bool ClientMatchCommandJSON::hasResult(void) const
  {
    return flagHasResult;
  }

JSONValue * ClientMatchCommandJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const JSONValue * ClientMatchCommandJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

bool ClientMatchCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

ClientMatchCommandJSON::TypeNativeDataJSON * ClientMatchCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const ClientMatchCommandJSON::TypeNativeDataJSON * ClientMatchCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool ClientMatchCommandJSON::hasMatchedItem(void) const
  {
    return flagHasMatchedItem;
  }

ClientMatchJSON * ClientMatchCommandJSON::getMatchedItem(void)
  {
    assert(flagHasMatchedItem);
    return storeMatchedItem;
  }

const ClientMatchJSON * ClientMatchCommandJSON::getMatchedItem(void) const
  {
    assert(flagHasMatchedItem);
    return storeMatchedItem;
  }

ClientMatchCommandJSON::TypeNativeDataJSON *ClientMatchCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ClientMatchCommandJSON *ClientMatchCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientMatchCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientMatchCommandJSON>, ClientMatchCommandJSON *, bool> generator("Type ClientMatchCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
