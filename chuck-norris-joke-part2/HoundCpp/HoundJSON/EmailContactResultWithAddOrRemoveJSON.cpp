/* file "EmailContactResultWithAddOrRemoveJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailContactResultWithAddOrRemoveJSON.h"

#include "EmailContactResultWithAddOrRemoveJSON.h"


EmailContactResultWithAddOrRemoveJSON::EmailContactResultWithAddOrRemoveJSON(const EmailContactResultWithAddOrRemoveJSON &)
  {
    assert(false);
  }

EmailContactResultWithAddOrRemoveJSON &EmailContactResultWithAddOrRemoveJSON::operator=(const EmailContactResultWithAddOrRemoveJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *EmailContactResultWithAddOrRemoveJSON::extraActionToJSON(void) const
  {
    JSONValueHandler handler_Action;
    storeAction->write_as_json(&handler_Action);
    handler_Action.result->add_reference();
    return handler_Action.result;
  }

void EmailContactResultWithAddOrRemoveJSON::fromJSONAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailContactResultActionJSON *convert_classy = EmailContactResultActionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAction(convert_classy);
    convert_classy->remove_reference();
  }

EmailContactResultWithAddOrRemoveJSON::EmailContactResultWithAddOrRemoveJSON(void) :
        flagHasAction(false)
  {
    extraIndex = create_string_index();
  }

EmailContactResultWithAddOrRemoveJSON::~EmailContactResultWithAddOrRemoveJSON(void)
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

bool EmailContactResultWithAddOrRemoveJSON::hasAction(void) const
  {
    return flagHasAction;
  }

EmailContactResultActionJSON * EmailContactResultWithAddOrRemoveJSON::getAction(void)
  {
    assert(flagHasAction);
    return storeAction;
  }

const EmailContactResultActionJSON * EmailContactResultWithAddOrRemoveJSON::getAction(void) const
  {
    assert(flagHasAction);
    return storeAction;
  }

EmailContactResultActionJSON::TypeValue EmailContactResultWithAddOrRemoveJSON::getActionValue(void)
  {
    return getAction()->getValue();
  }

const EmailContactResultActionJSON::TypeValue EmailContactResultWithAddOrRemoveJSON::getActionValue(void) const
  {
    return getAction()->getValue();
  }

const char *EmailContactResultWithAddOrRemoveJSON::getActionAsChars(void) const
  {
    return getAction()->getValueAsChars();
  }

std::string EmailContactResultWithAddOrRemoveJSON::getActionAsString(void) const
  {
    return getAction()->getValueAsString();
  }

EmailContactResultWithAddOrRemoveJSON *EmailContactResultWithAddOrRemoveJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailContactResultWithAddOrRemoveJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailContactResultWithAddOrRemoveJSON>, EmailContactResultWithAddOrRemoveJSON *, bool> generator("Type EmailContactResultWithAddOrRemove", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
