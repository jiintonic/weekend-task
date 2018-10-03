/* file "ClientListMatchJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientListMatchJSON.h"

#include "ClientListMatchJSON.h"


ClientListMatchJSON::ClientListMatchJSON(const ClientListMatchJSON &)
  {
    assert(false);
  }

ClientListMatchJSON &ClientListMatchJSON::operator=(const ClientListMatchJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ClientListMatchJSON::extraListExpressionToJSON(void) const
  {
    JSONStringValue *generated_string_ListExpression = new JSONStringValue(storeListExpression.c_str());
    return generated_string_ListExpression;
  }

void ClientListMatchJSON::fromJSONListExpression(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ListExpression of ClientListMatchJSON is not a string.");
    setListExpression(std::string(json_string->getData()));
  }

ClientListMatchJSON::ClientListMatchJSON(void) :
        flagHasListExpression(false)
  {
    extraIndex = create_string_index();
  }

ClientListMatchJSON::~ClientListMatchJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ClientListMatchJSON::hasListExpression(void) const
  {
    return flagHasListExpression;
  }

std::string ClientListMatchJSON::getListExpression(void)
  {
    assert(flagHasListExpression);
    return storeListExpression;
  }

const std::string ClientListMatchJSON::getListExpression(void) const
  {
    assert(flagHasListExpression);
    return storeListExpression;
  }

ClientListMatchJSON *ClientListMatchJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientListMatchJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientListMatchJSON>, ClientListMatchJSON *, bool> generator("Type ClientListMatch", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
