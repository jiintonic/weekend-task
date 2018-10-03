/* file "ClientStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientStateJSON.h"

#include "ClientStateJSON.h"


ClientStateJSON::ClientStateJSON(const ClientStateJSON &)
  {
    assert(false);
  }

ClientStateJSON &ClientStateJSON::operator=(const ClientStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ClientStateJSON::fromJSONVerticalState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientVerticalStateJSON *convert_classy = ClientVerticalStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVerticalState(convert_classy);
    convert_classy->remove_reference();
  }

ClientStateJSON::ClientStateJSON(void) :
        flagHasVerticalState(false)
  {
    extraIndex = create_string_index();
  }

ClientStateJSON::~ClientStateJSON(void)
  {
    if (flagHasVerticalState)
      {
        storeVerticalState->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ClientStateJSON::hasVerticalState(void) const
  {
    return flagHasVerticalState;
  }

ClientVerticalStateJSON * ClientStateJSON::getVerticalState(void)
  {
    assert(flagHasVerticalState);
    return storeVerticalState;
  }

const ClientVerticalStateJSON * ClientStateJSON::getVerticalState(void) const
  {
    assert(flagHasVerticalState);
    return storeVerticalState;
  }

ClientStateJSON *ClientStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientStateJSON>, ClientStateJSON *, bool> generator("Type ClientState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
