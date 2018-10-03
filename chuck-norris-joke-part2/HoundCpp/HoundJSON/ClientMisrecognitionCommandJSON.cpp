/* file "ClientMisrecognitionCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientMisrecognitionCommandJSON.h"

#include "ClientMisrecognitionCommandJSON.h"


ClientMisrecognitionCommandJSON::ClientMisrecognitionCommandJSON(const ClientMisrecognitionCommandJSON &)
  {
    assert(false);
  }

ClientMisrecognitionCommandJSON &ClientMisrecognitionCommandJSON::operator=(const ClientMisrecognitionCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ClientMisrecognitionCommandJSON::extraUserNameToJSON(void) const
  {
    JSONValueHandler handler_UserName;
    storeUserName->write_as_json(&handler_UserName);
    handler_UserName.result->add_reference();
    return handler_UserName.result;
  }

void ClientMisrecognitionCommandJSON::fromJSONUserName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UserNameJSON *convert_classy = UserNameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserName(convert_classy);
    convert_classy->remove_reference();
  }

ClientMisrecognitionCommandJSON::ClientMisrecognitionCommandJSON(void) :
        flagHasUserName(false)
  {
    extraIndex = create_string_index();
  }

ClientMisrecognitionCommandJSON::~ClientMisrecognitionCommandJSON(void)
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

const char *ClientMisrecognitionCommandJSON::getClientCommandKind(void) const
  {
    return "ClientMisrecognitionCommand";
  }

bool ClientMisrecognitionCommandJSON::hasUserName(void) const
  {
    return flagHasUserName;
  }

UserNameJSON * ClientMisrecognitionCommandJSON::getUserName(void)
  {
    assert(flagHasUserName);
    return storeUserName;
  }

const UserNameJSON * ClientMisrecognitionCommandJSON::getUserName(void) const
  {
    assert(flagHasUserName);
    return storeUserName;
  }

ClientMisrecognitionCommandJSON *ClientMisrecognitionCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientMisrecognitionCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientMisrecognitionCommandJSON>, ClientMisrecognitionCommandJSON *, bool> generator("Type ClientMisrecognitionCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
