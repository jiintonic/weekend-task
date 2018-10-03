/* file "ClientNewSearchCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientNewSearchCommandJSON.h"

#include "ClientNewSearchCommandJSON.h"


ClientNewSearchCommandJSON::ClientNewSearchCommandJSON(const ClientNewSearchCommandJSON &)
  {
    assert(false);
  }

ClientNewSearchCommandJSON &ClientNewSearchCommandJSON::operator=(const ClientNewSearchCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ClientNewSearchCommandJSON::extraUserNameToJSON(void) const
  {
    JSONValueHandler handler_UserName;
    storeUserName->write_as_json(&handler_UserName);
    handler_UserName.result->add_reference();
    return handler_UserName.result;
  }

void ClientNewSearchCommandJSON::fromJSONUserName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UserNameJSON *convert_classy = UserNameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserName(convert_classy);
    convert_classy->remove_reference();
  }

ClientNewSearchCommandJSON::ClientNewSearchCommandJSON(void) :
        flagHasUserName(false)
  {
    extraIndex = create_string_index();
  }

ClientNewSearchCommandJSON::~ClientNewSearchCommandJSON(void)
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

const char *ClientNewSearchCommandJSON::getClientCommandKind(void) const
  {
    return "ClientNewSearchCommand";
  }

bool ClientNewSearchCommandJSON::hasUserName(void) const
  {
    return flagHasUserName;
  }

UserNameJSON * ClientNewSearchCommandJSON::getUserName(void)
  {
    assert(flagHasUserName);
    return storeUserName;
  }

const UserNameJSON * ClientNewSearchCommandJSON::getUserName(void) const
  {
    assert(flagHasUserName);
    return storeUserName;
  }

ClientNewSearchCommandJSON *ClientNewSearchCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientNewSearchCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientNewSearchCommandJSON>, ClientNewSearchCommandJSON *, bool> generator("Type ClientNewSearchCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
