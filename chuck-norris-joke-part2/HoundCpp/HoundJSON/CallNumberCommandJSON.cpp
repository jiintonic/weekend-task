/* file "CallNumberCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CallNumberCommandJSON.h"

#include "CallNumberCommandJSON.h"


CallNumberCommandJSON::CallNumberCommandJSON(const CallNumberCommandJSON &)
  {
    assert(false);
  }

CallNumberCommandJSON &CallNumberCommandJSON::operator=(const CallNumberCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CallNumberCommandJSON::extraNumberToJSON(void) const
  {
    JSONStringValue *generated_string_Number = new JSONStringValue(storeNumber.c_str());
    return generated_string_Number;
  }

JSONValue *CallNumberCommandJSON::extraEntityToJSON(void) const
  {
    JSONValueHandler handler_Entity;
    storeEntity->write_as_json(&handler_Entity);
    handler_Entity.result->add_reference();
    return handler_Entity.result;
  }

void CallNumberCommandJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of CallNumberCommandJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

void CallNumberCommandJSON::fromJSONEntity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PhoneableEntityJSON *convert_classy = PhoneableEntityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEntity(convert_classy);
    convert_classy->remove_reference();
  }

CallNumberCommandJSON::CallNumberCommandJSON(void) :
        flagHasNumber(false),
        flagHasEntity(false)
  {
    extraIndex = create_string_index();
  }

CallNumberCommandJSON::~CallNumberCommandJSON(void)
  {
    if (flagHasEntity)
      {
        storeEntity->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CallNumberCommandJSON::getPhoneCommandKind(void) const
  {
    return "CallNumber";
  }

bool CallNumberCommandJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string CallNumberCommandJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string CallNumberCommandJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

bool CallNumberCommandJSON::hasEntity(void) const
  {
    return flagHasEntity;
  }

PhoneableEntityJSON * CallNumberCommandJSON::getEntity(void)
  {
    assert(flagHasEntity);
    return storeEntity;
  }

const PhoneableEntityJSON * CallNumberCommandJSON::getEntity(void) const
  {
    assert(flagHasEntity);
    return storeEntity;
  }

CallNumberCommandJSON *CallNumberCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CallNumberCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CallNumberCommandJSON>, CallNumberCommandJSON *, bool> generator("Type CallNumberCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
