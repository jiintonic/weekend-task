/* file "ClientWakeupPhraseCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientWakeupPhraseCommandJSON.h"

#include "ClientWakeupPhraseCommandJSON.h"


ClientWakeupPhraseCommandJSON::ClientWakeupPhraseCommandJSON(const ClientWakeupPhraseCommandJSON &)
  {
    assert(false);
  }

ClientWakeupPhraseCommandJSON &ClientWakeupPhraseCommandJSON::operator=(const ClientWakeupPhraseCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ClientWakeupPhraseCommandJSON::extraUserNameToJSON(void) const
  {
    JSONValueHandler handler_UserName;
    storeUserName->write_as_json(&handler_UserName);
    handler_UserName.result->add_reference();
    return handler_UserName.result;
  }

void ClientWakeupPhraseCommandJSON::fromJSONUserName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UserNameJSON *convert_classy = UserNameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserName(convert_classy);
    convert_classy->remove_reference();
  }

ClientWakeupPhraseCommandJSON::ClientWakeupPhraseCommandJSON(void) :
        flagHasUserName(false)
  {
    extraIndex = create_string_index();
  }

ClientWakeupPhraseCommandJSON::~ClientWakeupPhraseCommandJSON(void)
  {
    if (flagHasUserName)
      {
        storeUserName->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ClientWakeupPhraseCommandJSON::getClientCommandKind(void) const
  {
    return "ClientWakeupPhraseCommand";
  }

bool ClientWakeupPhraseCommandJSON::hasUserName(void) const
  {
    return flagHasUserName;
  }

UserNameJSON * ClientWakeupPhraseCommandJSON::getUserName(void)
  {
    assert(flagHasUserName);
    return storeUserName;
  }

const UserNameJSON * ClientWakeupPhraseCommandJSON::getUserName(void) const
  {
    assert(flagHasUserName);
    return storeUserName;
  }

ClientWakeupPhraseCommandJSON *ClientWakeupPhraseCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientWakeupPhraseCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientWakeupPhraseCommandJSON>, ClientWakeupPhraseCommandJSON *, bool> generator("Type ClientWakeupPhraseCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
