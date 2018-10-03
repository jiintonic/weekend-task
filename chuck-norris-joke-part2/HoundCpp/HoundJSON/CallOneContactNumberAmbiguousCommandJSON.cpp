/* file "CallOneContactNumberAmbiguousCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CallOneContactNumberAmbiguousCommandJSON.h"

#include "CallOneContactNumberAmbiguousCommandJSON.h"


CallOneContactNumberAmbiguousCommandJSON::CallOneContactNumberAmbiguousCommandJSON(const CallOneContactNumberAmbiguousCommandJSON &)
  {
    assert(false);
  }

CallOneContactNumberAmbiguousCommandJSON &CallOneContactNumberAmbiguousCommandJSON::operator=(const CallOneContactNumberAmbiguousCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CallOneContactNumberAmbiguousCommandJSON::extraChoicesToJSON(void) const
  {
    JSONValueHandler handler_Choices;
    storeChoices->write_as_json(&handler_Choices);
    handler_Choices.result->add_reference();
    return handler_Choices.result;
  }

void CallOneContactNumberAmbiguousCommandJSON::fromJSONChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ContactNumberChoicesJSON *convert_classy = ContactNumberChoicesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setChoices(convert_classy);
    convert_classy->remove_reference();
  }

CallOneContactNumberAmbiguousCommandJSON::CallOneContactNumberAmbiguousCommandJSON(void) :
        flagHasChoices(false)
  {
    extraIndex = create_string_index();
  }

CallOneContactNumberAmbiguousCommandJSON::~CallOneContactNumberAmbiguousCommandJSON(void)
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

const char *CallOneContactNumberAmbiguousCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "CallOneContactNumberAmbiguous";
  }

bool CallOneContactNumberAmbiguousCommandJSON::hasChoices(void) const
  {
    return flagHasChoices;
  }

ContactNumberChoicesJSON * CallOneContactNumberAmbiguousCommandJSON::getChoices(void)
  {
    assert(flagHasChoices);
    return storeChoices;
  }

const ContactNumberChoicesJSON * CallOneContactNumberAmbiguousCommandJSON::getChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices;
  }

CallOneContactNumberAmbiguousCommandJSON *CallOneContactNumberAmbiguousCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CallOneContactNumberAmbiguousCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CallOneContactNumberAmbiguousCommandJSON>, CallOneContactNumberAmbiguousCommandJSON *, bool> generator("Type CallOneContactNumberAmbiguousCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
