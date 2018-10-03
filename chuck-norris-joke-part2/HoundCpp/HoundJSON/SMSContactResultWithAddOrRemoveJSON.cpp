/* file "SMSContactResultWithAddOrRemoveJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSContactResultWithAddOrRemoveJSON.h"

#include "SMSContactResultWithAddOrRemoveJSON.h"


SMSContactResultWithAddOrRemoveJSON::SMSContactResultWithAddOrRemoveJSON(const SMSContactResultWithAddOrRemoveJSON &)
  {
    assert(false);
  }

SMSContactResultWithAddOrRemoveJSON &SMSContactResultWithAddOrRemoveJSON::operator=(const SMSContactResultWithAddOrRemoveJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSContactResultWithAddOrRemoveJSON::extraActionToJSON(void) const
  {
    JSONValueHandler handler_Action;
    storeAction->write_as_json(&handler_Action);
    handler_Action.result->add_reference();
    return handler_Action.result;
  }

void SMSContactResultWithAddOrRemoveJSON::fromJSONAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSContactResultActionJSON *convert_classy = SMSContactResultActionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAction(convert_classy);
    convert_classy->remove_reference();
  }

SMSContactResultWithAddOrRemoveJSON::SMSContactResultWithAddOrRemoveJSON(void) :
        flagHasAction(false)
  {
    extraIndex = create_string_index();
  }

SMSContactResultWithAddOrRemoveJSON::~SMSContactResultWithAddOrRemoveJSON(void)
  {
    if (flagHasAction)
      {
        storeAction->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSContactResultWithAddOrRemoveJSON::hasAction(void) const
  {
    return flagHasAction;
  }

SMSContactResultActionJSON * SMSContactResultWithAddOrRemoveJSON::getAction(void)
  {
    assert(flagHasAction);
    return storeAction;
  }

const SMSContactResultActionJSON * SMSContactResultWithAddOrRemoveJSON::getAction(void) const
  {
    assert(flagHasAction);
    return storeAction;
  }

SMSContactResultActionJSON::TypeValue SMSContactResultWithAddOrRemoveJSON::getActionValue(void)
  {
    return getAction()->getValue();
  }

const SMSContactResultActionJSON::TypeValue SMSContactResultWithAddOrRemoveJSON::getActionValue(void) const
  {
    return getAction()->getValue();
  }

const char *SMSContactResultWithAddOrRemoveJSON::getActionAsChars(void) const
  {
    return getAction()->getValueAsChars();
  }

std::string SMSContactResultWithAddOrRemoveJSON::getActionAsString(void) const
  {
    return getAction()->getValueAsString();
  }

SMSContactResultWithAddOrRemoveJSON *SMSContactResultWithAddOrRemoveJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSContactResultWithAddOrRemoveJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSContactResultWithAddOrRemoveJSON>, SMSContactResultWithAddOrRemoveJSON *, bool> generator("Type SMSContactResultWithAddOrRemove", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
