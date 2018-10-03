/* file "ClientEmptyQueryCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientEmptyQueryCommandJSON.h"

#include "ClientEmptyQueryCommandJSON.h"


ClientEmptyQueryCommandJSON::ClientEmptyQueryCommandJSON(const ClientEmptyQueryCommandJSON &)
  {
    assert(false);
  }

ClientEmptyQueryCommandJSON &ClientEmptyQueryCommandJSON::operator=(const ClientEmptyQueryCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ClientEmptyQueryCommandJSON::ClientEmptyQueryCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ClientEmptyQueryCommandJSON::~ClientEmptyQueryCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientEmptyQueryCommandJSON::getClientCommandKind(void) const
  {
    return "ClientEmptyQueryCommand";
  }

ClientEmptyQueryCommandJSON *ClientEmptyQueryCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientEmptyQueryCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientEmptyQueryCommandJSON>, ClientEmptyQueryCommandJSON *, bool> generator("Type ClientEmptyQueryCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
