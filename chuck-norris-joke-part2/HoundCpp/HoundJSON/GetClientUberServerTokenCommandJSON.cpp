/* file "GetClientUberServerTokenCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GetClientUberServerTokenCommandJSON.h"

#include "GetClientUberServerTokenCommandJSON.h"


GetClientUberServerTokenCommandJSON::GetClientUberServerTokenCommandJSON(const GetClientUberServerTokenCommandJSON &)
  {
    assert(false);
  }

GetClientUberServerTokenCommandJSON &GetClientUberServerTokenCommandJSON::operator=(const GetClientUberServerTokenCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GetClientUberServerTokenCommandJSON::extraUberServerTokenToJSON(void) const
  {
    JSONStringValue *generated_string_UberServerToken = new JSONStringValue(storeUberServerToken.c_str());
    return generated_string_UberServerToken;
  }

void GetClientUberServerTokenCommandJSON::fromJSONUberServerToken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UberServerToken of GetClientUberServerTokenCommandJSON is not a string.");
    setUberServerToken(std::string(json_string->getData()));
  }

GetClientUberServerTokenCommandJSON::GetClientUberServerTokenCommandJSON(void) :
        flagHasUberServerToken(false)
  {
    extraIndex = create_string_index();
  }

GetClientUberServerTokenCommandJSON::~GetClientUberServerTokenCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GetClientUberServerTokenCommandJSON::getUberCommandKind(void) const
  {
    return "GetClientUberServerToken";
  }

bool GetClientUberServerTokenCommandJSON::hasUberServerToken(void) const
  {
    return flagHasUberServerToken;
  }

std::string GetClientUberServerTokenCommandJSON::getUberServerToken(void)
  {
    assert(flagHasUberServerToken);
    return storeUberServerToken;
  }

const std::string GetClientUberServerTokenCommandJSON::getUberServerToken(void) const
  {
    assert(flagHasUberServerToken);
    return storeUberServerToken;
  }

GetClientUberServerTokenCommandJSON *GetClientUberServerTokenCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GetClientUberServerTokenCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GetClientUberServerTokenCommandJSON>, GetClientUberServerTokenCommandJSON *, bool> generator("Type GetClientUberServerTokenCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
