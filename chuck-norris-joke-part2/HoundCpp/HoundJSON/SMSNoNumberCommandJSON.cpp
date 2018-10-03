/* file "SMSNoNumberCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSNoNumberCommandJSON.h"

#include "SMSNoNumberCommandJSON.h"


SMSNoNumberCommandJSON::SMSNoNumberCommandJSON(const SMSNoNumberCommandJSON &)
  {
    assert(false);
  }

SMSNoNumberCommandJSON &SMSNoNumberCommandJSON::operator=(const SMSNoNumberCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSNoNumberCommandJSON::extraNoNumberPersonGroupToJSON(void) const
  {
    JSONValueHandler handler_NoNumberPersonGroup;
    storeNoNumberPersonGroup->write_as_json(&handler_NoNumberPersonGroup);
    handler_NoNumberPersonGroup.result->add_reference();
    return handler_NoNumberPersonGroup.result;
  }

JSONValue *SMSNoNumberCommandJSON::extraPreviousMessageToJSON(void) const
  {
    JSONStringValue *generated_string_PreviousMessage = new JSONStringValue(storePreviousMessage.c_str());
    return generated_string_PreviousMessage;
  }

JSONValue *SMSNoNumberCommandJSON::extraSpokenBodyToJSON(void) const
  {
    JSONStringValue *generated_string_SpokenBody = new JSONStringValue(storeSpokenBody.c_str());
    return generated_string_SpokenBody;
  }

JSONValue *SMSNoNumberCommandJSON::extraWrittenBodyToJSON(void) const
  {
    JSONStringValue *generated_string_WrittenBody = new JSONStringValue(storeWrittenBody.c_str());
    return generated_string_WrittenBody;
  }

JSONValue *SMSNoNumberCommandJSON::extraErrorMessageToJSON(void) const
  {
    JSONStringValue *generated_string_ErrorMessage = new JSONStringValue(storeErrorMessage.c_str());
    return generated_string_ErrorMessage;
  }

void SMSNoNumberCommandJSON::fromJSONNoNumberPersonGroup(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PersonGroupJSON *convert_classy = PersonGroupJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoNumberPersonGroup(convert_classy);
    convert_classy->remove_reference();
  }

void SMSNoNumberCommandJSON::fromJSONPreviousMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreviousMessage of SMSNoNumberCommandJSON is not a string.");
    setPreviousMessage(std::string(json_string->getData()));
  }

void SMSNoNumberCommandJSON::fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenBody of SMSNoNumberCommandJSON is not a string.");
    setSpokenBody(std::string(json_string->getData()));
  }

void SMSNoNumberCommandJSON::fromJSONWrittenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenBody of SMSNoNumberCommandJSON is not a string.");
    setWrittenBody(std::string(json_string->getData()));
  }

void SMSNoNumberCommandJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of SMSNoNumberCommandJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

SMSNoNumberCommandJSON::SMSNoNumberCommandJSON(void) :
        flagHasNoNumberPersonGroup(false),
        flagHasPreviousMessage(false),
        flagHasSpokenBody(false),
        flagHasWrittenBody(false),
        flagHasErrorMessage(false)
  {
    extraIndex = create_string_index();
  }

SMSNoNumberCommandJSON::~SMSNoNumberCommandJSON(void)
  {
    if (flagHasNoNumberPersonGroup)
      {
        storeNoNumberPersonGroup->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SMSNoNumberCommandJSON::getSMSCommandKind(void) const
  {
    return "SMSNoNumberCommand";
  }

bool SMSNoNumberCommandJSON::hasNoNumberPersonGroup(void) const
  {
    return flagHasNoNumberPersonGroup;
  }

PersonGroupJSON * SMSNoNumberCommandJSON::getNoNumberPersonGroup(void)
  {
    assert(flagHasNoNumberPersonGroup);
    return storeNoNumberPersonGroup;
  }

const PersonGroupJSON * SMSNoNumberCommandJSON::getNoNumberPersonGroup(void) const
  {
    assert(flagHasNoNumberPersonGroup);
    return storeNoNumberPersonGroup;
  }

bool SMSNoNumberCommandJSON::hasPreviousMessage(void) const
  {
    return flagHasPreviousMessage;
  }

std::string SMSNoNumberCommandJSON::getPreviousMessage(void)
  {
    assert(flagHasPreviousMessage);
    return storePreviousMessage;
  }

const std::string SMSNoNumberCommandJSON::getPreviousMessage(void) const
  {
    assert(flagHasPreviousMessage);
    return storePreviousMessage;
  }

bool SMSNoNumberCommandJSON::hasSpokenBody(void) const
  {
    return flagHasSpokenBody;
  }

std::string SMSNoNumberCommandJSON::getSpokenBody(void)
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

const std::string SMSNoNumberCommandJSON::getSpokenBody(void) const
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

bool SMSNoNumberCommandJSON::hasWrittenBody(void) const
  {
    return flagHasWrittenBody;
  }

std::string SMSNoNumberCommandJSON::getWrittenBody(void)
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

const std::string SMSNoNumberCommandJSON::getWrittenBody(void) const
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

bool SMSNoNumberCommandJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string SMSNoNumberCommandJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string SMSNoNumberCommandJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

SMSNoNumberCommandJSON *SMSNoNumberCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSNoNumberCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSNoNumberCommandJSON>, SMSNoNumberCommandJSON *, bool> generator("Type SMSNoNumberCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
