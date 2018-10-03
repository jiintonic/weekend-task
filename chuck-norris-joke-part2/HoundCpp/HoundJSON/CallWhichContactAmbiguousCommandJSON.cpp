/* file "CallWhichContactAmbiguousCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CallWhichContactAmbiguousCommandJSON.h"

#include "CallWhichContactAmbiguousCommandJSON.h"


CallWhichContactAmbiguousCommandJSON::CallWhichContactAmbiguousCommandJSON(const CallWhichContactAmbiguousCommandJSON &)
  {
    assert(false);
  }

CallWhichContactAmbiguousCommandJSON &CallWhichContactAmbiguousCommandJSON::operator=(const CallWhichContactAmbiguousCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CallWhichContactAmbiguousCommandJSON::extraChoicesToJSON(void) const
  {
    JSONValueHandler handler_Choices;
    storeChoices->write_as_json(&handler_Choices);
    handler_Choices.result->add_reference();
    return handler_Choices.result;
  }

JSONValue *CallWhichContactAmbiguousCommandJSON::extraUserSpecifiedNameToJSON(void) const
  {
    JSONStringValue *generated_string_UserSpecifiedName = new JSONStringValue(storeUserSpecifiedName.c_str());
    return generated_string_UserSpecifiedName;
  }

void CallWhichContactAmbiguousCommandJSON::fromJSONChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WhichContactChoicesJSON *convert_classy = WhichContactChoicesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setChoices(convert_classy);
    convert_classy->remove_reference();
  }

void CallWhichContactAmbiguousCommandJSON::fromJSONUserSpecifiedName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UserSpecifiedName of CallWhichContactAmbiguousCommandJSON is not a string.");
    setUserSpecifiedName(std::string(json_string->getData()));
  }

CallWhichContactAmbiguousCommandJSON::CallWhichContactAmbiguousCommandJSON(void) :
        flagHasChoices(false),
        flagHasUserSpecifiedName(false)
  {
    extraIndex = create_string_index();
  }

CallWhichContactAmbiguousCommandJSON::~CallWhichContactAmbiguousCommandJSON(void)
  {
    if (flagHasChoices)
      {
        storeChoices->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CallWhichContactAmbiguousCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "CallWhichContactAmbiguous";
  }

bool CallWhichContactAmbiguousCommandJSON::hasChoices(void) const
  {
    return flagHasChoices;
  }

WhichContactChoicesJSON * CallWhichContactAmbiguousCommandJSON::getChoices(void)
  {
    assert(flagHasChoices);
    return storeChoices;
  }

const WhichContactChoicesJSON * CallWhichContactAmbiguousCommandJSON::getChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices;
  }

bool CallWhichContactAmbiguousCommandJSON::hasUserSpecifiedName(void) const
  {
    return flagHasUserSpecifiedName;
  }

std::string CallWhichContactAmbiguousCommandJSON::getUserSpecifiedName(void)
  {
    assert(flagHasUserSpecifiedName);
    return storeUserSpecifiedName;
  }

const std::string CallWhichContactAmbiguousCommandJSON::getUserSpecifiedName(void) const
  {
    assert(flagHasUserSpecifiedName);
    return storeUserSpecifiedName;
  }

CallWhichContactAmbiguousCommandJSON *CallWhichContactAmbiguousCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CallWhichContactAmbiguousCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CallWhichContactAmbiguousCommandJSON>, CallWhichContactAmbiguousCommandJSON *, bool> generator("Type CallWhichContactAmbiguousCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
