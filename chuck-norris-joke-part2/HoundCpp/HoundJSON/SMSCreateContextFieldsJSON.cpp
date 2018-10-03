/* file "SMSCreateContextFieldsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSCreateContextFieldsJSON.h"

#include "SMSCreateContextFieldsJSON.h"


SMSCreateContextFieldsJSON::SMSCreateContextFieldsJSON(const SMSCreateContextFieldsJSON &)
  {
    assert(false);
  }

SMSCreateContextFieldsJSON &SMSCreateContextFieldsJSON::operator=(const SMSCreateContextFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSCreateContextFieldsJSON::fromJSONNewRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSRecipientsJSON *convert_classy = SMSRecipientsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNewRecipients(convert_classy);
    convert_classy->remove_reference();
  }

void SMSCreateContextFieldsJSON::fromJSONNewBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewBody of SMSCreateContextFieldsJSON is not a string.");
    setNewBody(std::string(json_string->getData()));
  }

void SMSCreateContextFieldsJSON::fromJSONClearExistingSMS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field ClearExistingSMS of SMSCreateContextFieldsJSON is not true for false.");
          }
      }
    setClearExistingSMS(the_bool);
  }

SMSCreateContextFieldsJSON::SMSCreateContextFieldsJSON(void) :
        flagHasNewRecipients(false),
        flagHasNewBody(false),
        flagHasClearExistingSMS(false)
  {
    extraIndex = create_string_index();
  }

SMSCreateContextFieldsJSON::~SMSCreateContextFieldsJSON(void)
  {
    if (flagHasNewRecipients)
      {
        storeNewRecipients->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSCreateContextFieldsJSON::hasNewRecipients(void) const
  {
    return flagHasNewRecipients;
  }

SMSRecipientsJSON * SMSCreateContextFieldsJSON::getNewRecipients(void)
  {
    assert(flagHasNewRecipients);
    return storeNewRecipients;
  }

const SMSRecipientsJSON * SMSCreateContextFieldsJSON::getNewRecipients(void) const
  {
    assert(flagHasNewRecipients);
    return storeNewRecipients;
  }

bool SMSCreateContextFieldsJSON::hasNewBody(void) const
  {
    return flagHasNewBody;
  }

std::string SMSCreateContextFieldsJSON::getNewBody(void)
  {
    assert(flagHasNewBody);
    return storeNewBody;
  }

const std::string SMSCreateContextFieldsJSON::getNewBody(void) const
  {
    assert(flagHasNewBody);
    return storeNewBody;
  }

bool SMSCreateContextFieldsJSON::hasClearExistingSMS(void) const
  {
    return flagHasClearExistingSMS;
  }

bool SMSCreateContextFieldsJSON::getClearExistingSMS(void)
  {
    assert(flagHasClearExistingSMS);
    return storeClearExistingSMS;
  }

const bool SMSCreateContextFieldsJSON::getClearExistingSMS(void) const
  {
    assert(flagHasClearExistingSMS);
    return storeClearExistingSMS;
  }

SMSCreateContextFieldsJSON *SMSCreateContextFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSCreateContextFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSCreateContextFieldsJSON>, SMSCreateContextFieldsJSON *, bool> generator("Type SMSCreateContextFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
