/* file "ClientMatchInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientMatchInformationNuggetJSON.h"

#include "ClientMatchInformationNuggetJSON.h"


ClientMatchInformationNuggetJSON::ClientMatchInformationNuggetJSON(const ClientMatchInformationNuggetJSON &)
  {
    assert(false);
  }

ClientMatchInformationNuggetJSON &ClientMatchInformationNuggetJSON::operator=(const ClientMatchInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ClientMatchInformationNuggetJSON::extraResultToJSON(void) const
  {
    storeResult->add_reference();
    return storeResult;
  }

JSONValue *ClientMatchInformationNuggetJSON::extraMatchedItemToJSON(void) const
  {
    JSONValueHandler handler_MatchedItem;
    storeMatchedItem->write_as_json(&handler_MatchedItem);
    handler_MatchedItem.result->add_reference();
    return handler_MatchedItem.result;
  }

void ClientMatchInformationNuggetJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setResult(json_value);
  }

void ClientMatchInformationNuggetJSON::fromJSONMatchedItem(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientMatchJSON *convert_classy = ClientMatchJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMatchedItem(convert_classy);
    convert_classy->remove_reference();
  }

ClientMatchInformationNuggetJSON::ClientMatchInformationNuggetJSON(void) :
        flagHasResult(false),
        flagHasMatchedItem(false)
  {
    extraIndex = create_string_index();
  }

ClientMatchInformationNuggetJSON::~ClientMatchInformationNuggetJSON(void)
  {
    if (flagHasResult)
      {
        storeResult->remove_reference();
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

const char *ClientMatchInformationNuggetJSON::getNuggetKind(void) const
  {
    return "ClientMatch";
  }

bool ClientMatchInformationNuggetJSON::hasResult(void) const
  {
    return flagHasResult;
  }

JSONValue * ClientMatchInformationNuggetJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const JSONValue * ClientMatchInformationNuggetJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

bool ClientMatchInformationNuggetJSON::hasMatchedItem(void) const
  {
    return flagHasMatchedItem;
  }

ClientMatchJSON * ClientMatchInformationNuggetJSON::getMatchedItem(void)
  {
    assert(flagHasMatchedItem);
    return storeMatchedItem;
  }

const ClientMatchJSON * ClientMatchInformationNuggetJSON::getMatchedItem(void) const
  {
    assert(flagHasMatchedItem);
    return storeMatchedItem;
  }

ClientMatchInformationNuggetJSON *ClientMatchInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientMatchInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientMatchInformationNuggetJSON>, ClientMatchInformationNuggetJSON *, bool> generator("Type ClientMatchInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
