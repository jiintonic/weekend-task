/* file "ClientRepeatCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientRepeatCommandJSON.h"

#include "ClientRepeatCommandJSON.h"
#include "SMSDisambiguateChoiceNotUnderstoodCommandJSON.h"
#include "SMSNoNumberResponseNotUnderstoodCommandJSON.h"


ClientRepeatCommandJSON::ClientRepeatCommandJSON(const ClientRepeatCommandJSON &)
  {
    assert(false);
  }

ClientRepeatCommandJSON &ClientRepeatCommandJSON::operator=(const ClientRepeatCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ClientRepeatCommandJSON::ClientRepeatCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ClientRepeatCommandJSON::~ClientRepeatCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientRepeatCommandJSON::getClientCommandKind(void) const
  {
    return "ClientRepeatCommand";
  }

ClientRepeatCommandJSON *ClientRepeatCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientRepeatCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientRepeatCommandJSON>, ClientRepeatCommandJSON *, bool> generator("Type ClientRepeatCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
