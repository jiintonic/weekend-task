/* file "ShowWhichContactAmbiguousCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowWhichContactAmbiguousCommandJSON.h"

#include "ShowWhichContactAmbiguousCommandJSON.h"


ShowWhichContactAmbiguousCommandJSON::ShowWhichContactAmbiguousCommandJSON(const ShowWhichContactAmbiguousCommandJSON &)
  {
    assert(false);
  }

ShowWhichContactAmbiguousCommandJSON &ShowWhichContactAmbiguousCommandJSON::operator=(const ShowWhichContactAmbiguousCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowWhichContactAmbiguousCommandJSON::extraChoicesToJSON(void) const
  {
    JSONValueHandler handler_Choices;
    storeChoices->write_as_json(&handler_Choices);
    handler_Choices.result->add_reference();
    return handler_Choices.result;
  }

JSONValue *ShowWhichContactAmbiguousCommandJSON::extraUserSpecifiedNameToJSON(void) const
  {
    JSONStringValue *generated_string_UserSpecifiedName = new JSONStringValue(storeUserSpecifiedName.c_str());
    return generated_string_UserSpecifiedName;
  }

void ShowWhichContactAmbiguousCommandJSON::fromJSONChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WhichContactChoicesJSON *convert_classy = WhichContactChoicesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setChoices(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWhichContactAmbiguousCommandJSON::fromJSONUserSpecifiedName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UserSpecifiedName of ShowWhichContactAmbiguousCommandJSON is not a string.");
    setUserSpecifiedName(std::string(json_string->getData()));
  }

ShowWhichContactAmbiguousCommandJSON::ShowWhichContactAmbiguousCommandJSON(void) :
        flagHasChoices(false),
        flagHasUserSpecifiedName(false)
  {
    extraIndex = create_string_index();
  }

ShowWhichContactAmbiguousCommandJSON::~ShowWhichContactAmbiguousCommandJSON(void)
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

const char *ShowWhichContactAmbiguousCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "ShowWhichContactAmbiguous";
  }

bool ShowWhichContactAmbiguousCommandJSON::hasChoices(void) const
  {
    return flagHasChoices;
  }

WhichContactChoicesJSON * ShowWhichContactAmbiguousCommandJSON::getChoices(void)
  {
    assert(flagHasChoices);
    return storeChoices;
  }

const WhichContactChoicesJSON * ShowWhichContactAmbiguousCommandJSON::getChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices;
  }

bool ShowWhichContactAmbiguousCommandJSON::hasUserSpecifiedName(void) const
  {
    return flagHasUserSpecifiedName;
  }

std::string ShowWhichContactAmbiguousCommandJSON::getUserSpecifiedName(void)
  {
    assert(flagHasUserSpecifiedName);
    return storeUserSpecifiedName;
  }

const std::string ShowWhichContactAmbiguousCommandJSON::getUserSpecifiedName(void) const
  {
    assert(flagHasUserSpecifiedName);
    return storeUserSpecifiedName;
  }

ShowWhichContactAmbiguousCommandJSON *ShowWhichContactAmbiguousCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowWhichContactAmbiguousCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowWhichContactAmbiguousCommandJSON>, ShowWhichContactAmbiguousCommandJSON *, bool> generator("Type ShowWhichContactAmbiguousCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
