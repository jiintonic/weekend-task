/* file "ClientGoBackCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientGoBackCommandJSON.h"

#include "ClientGoBackCommandJSON.h"


ClientGoBackCommandJSON::ClientGoBackCommandJSON(const ClientGoBackCommandJSON &)
  {
    assert(false);
  }

ClientGoBackCommandJSON &ClientGoBackCommandJSON::operator=(const ClientGoBackCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ClientGoBackCommandJSON::ClientGoBackCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ClientGoBackCommandJSON::~ClientGoBackCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientGoBackCommandJSON::getClientCommandKind(void) const
  {
    return "ClientGoBackCommand";
  }

ClientGoBackCommandJSON *ClientGoBackCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientGoBackCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientGoBackCommandJSON>, ClientGoBackCommandJSON *, bool> generator("Type ClientGoBackCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
