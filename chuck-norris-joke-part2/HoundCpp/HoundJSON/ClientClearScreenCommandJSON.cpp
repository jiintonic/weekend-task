/* file "ClientClearScreenCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientClearScreenCommandJSON.h"

#include "ClientClearScreenCommandJSON.h"


ClientClearScreenCommandJSON::ClientClearScreenCommandJSON(const ClientClearScreenCommandJSON &)
  {
    assert(false);
  }

ClientClearScreenCommandJSON &ClientClearScreenCommandJSON::operator=(const ClientClearScreenCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ClientClearScreenCommandJSON::ClientClearScreenCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ClientClearScreenCommandJSON::~ClientClearScreenCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientClearScreenCommandJSON::getClientCommandKind(void) const
  {
    return "ClientClearScreenCommand";
  }

ClientClearScreenCommandJSON *ClientClearScreenCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientClearScreenCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientClearScreenCommandJSON>, ClientClearScreenCommandJSON *, bool> generator("Type ClientClearScreenCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
