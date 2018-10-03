/* file "ClientSilentAudioCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientSilentAudioCommandJSON.h"

#include "ClientSilentAudioCommandJSON.h"


ClientSilentAudioCommandJSON::ClientSilentAudioCommandJSON(const ClientSilentAudioCommandJSON &)
  {
    assert(false);
  }

ClientSilentAudioCommandJSON &ClientSilentAudioCommandJSON::operator=(const ClientSilentAudioCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ClientSilentAudioCommandJSON::ClientSilentAudioCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ClientSilentAudioCommandJSON::~ClientSilentAudioCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientSilentAudioCommandJSON::getClientCommandKind(void) const
  {
    return "ClientSilentAudioCommand";
  }

ClientSilentAudioCommandJSON *ClientSilentAudioCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientSilentAudioCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientSilentAudioCommandJSON>, ClientSilentAudioCommandJSON *, bool> generator("Type ClientSilentAudioCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
