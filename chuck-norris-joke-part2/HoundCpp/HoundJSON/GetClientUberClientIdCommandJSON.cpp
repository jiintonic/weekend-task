/* file "GetClientUberClientIdCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GetClientUberClientIdCommandJSON.h"

#include "GetClientUberClientIdCommandJSON.h"


GetClientUberClientIdCommandJSON::GetClientUberClientIdCommandJSON(const GetClientUberClientIdCommandJSON &)
  {
    assert(false);
  }

GetClientUberClientIdCommandJSON &GetClientUberClientIdCommandJSON::operator=(const GetClientUberClientIdCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GetClientUberClientIdCommandJSON::extraUberClientIdToJSON(void) const
  {
    JSONStringValue *generated_string_UberClientId = new JSONStringValue(storeUberClientId.c_str());
    return generated_string_UberClientId;
  }

void GetClientUberClientIdCommandJSON::fromJSONUberClientId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UberClientId of GetClientUberClientIdCommandJSON is not a string.");
    setUberClientId(std::string(json_string->getData()));
  }

GetClientUberClientIdCommandJSON::GetClientUberClientIdCommandJSON(void) :
        flagHasUberClientId(false)
  {
    extraIndex = create_string_index();
  }

GetClientUberClientIdCommandJSON::~GetClientUberClientIdCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GetClientUberClientIdCommandJSON::getUberCommandKind(void) const
  {
    return "GetClientUberClientId";
  }

bool GetClientUberClientIdCommandJSON::hasUberClientId(void) const
  {
    return flagHasUberClientId;
  }

std::string GetClientUberClientIdCommandJSON::getUberClientId(void)
  {
    assert(flagHasUberClientId);
    return storeUberClientId;
  }

const std::string GetClientUberClientIdCommandJSON::getUberClientId(void) const
  {
    assert(flagHasUberClientId);
    return storeUberClientId;
  }

GetClientUberClientIdCommandJSON *GetClientUberClientIdCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GetClientUberClientIdCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GetClientUberClientIdCommandJSON>, GetClientUberClientIdCommandJSON *, bool> generator("Type GetClientUberClientIdCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
