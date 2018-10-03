/* file "ClientNoActionCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientNoActionCommandJSON.h"

#include "ClientNoActionCommandJSON.h"


ClientNoActionCommandJSON::ClientNoActionCommandJSON(const ClientNoActionCommandJSON &)
  {
    assert(false);
  }

ClientNoActionCommandJSON &ClientNoActionCommandJSON::operator=(const ClientNoActionCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ClientNoActionCommandJSON::ClientNoActionCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ClientNoActionCommandJSON::~ClientNoActionCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientNoActionCommandJSON::getClientCommandKind(void) const
  {
    return "ClientNoActionCommand";
  }

ClientNoActionCommandJSON *ClientNoActionCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientNoActionCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientNoActionCommandJSON>, ClientNoActionCommandJSON *, bool> generator("Type ClientNoActionCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
