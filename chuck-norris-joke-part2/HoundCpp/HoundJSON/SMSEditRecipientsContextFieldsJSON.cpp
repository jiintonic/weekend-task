/* file "SMSEditRecipientsContextFieldsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSEditRecipientsContextFieldsJSON.h"

#include "SMSEditRecipientsContextFieldsJSON.h"


SMSEditRecipientsContextFieldsJSON::SMSEditRecipientsContextFieldsJSON(const SMSEditRecipientsContextFieldsJSON &)
  {
    assert(false);
  }

SMSEditRecipientsContextFieldsJSON &SMSEditRecipientsContextFieldsJSON::operator=(const SMSEditRecipientsContextFieldsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSEditRecipientsContextFieldsJSON::fromJSONAddRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSRecipientsJSON *convert_classy = SMSRecipientsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAddRecipients(convert_classy);
    convert_classy->remove_reference();
  }

void SMSEditRecipientsContextFieldsJSON::fromJSONRemoveRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSRecipientsJSON *convert_classy = SMSRecipientsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRemoveRecipients(convert_classy);
    convert_classy->remove_reference();
  }

SMSEditRecipientsContextFieldsJSON::SMSEditRecipientsContextFieldsJSON(void) :
        flagHasAddRecipients(false),
        flagHasRemoveRecipients(false)
  {
    extraIndex = create_string_index();
  }

SMSEditRecipientsContextFieldsJSON::~SMSEditRecipientsContextFieldsJSON(void)
  {
    if (flagHasAddRecipients)
      {
        storeAddRecipients->remove_reference();
      }
    if (flagHasRemoveRecipients)
      {
        storeRemoveRecipients->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSEditRecipientsContextFieldsJSON::hasAddRecipients(void) const
  {
    return flagHasAddRecipients;
  }

SMSRecipientsJSON * SMSEditRecipientsContextFieldsJSON::getAddRecipients(void)
  {
    assert(flagHasAddRecipients);
    return storeAddRecipients;
  }

const SMSRecipientsJSON * SMSEditRecipientsContextFieldsJSON::getAddRecipients(void) const
  {
    assert(flagHasAddRecipients);
    return storeAddRecipients;
  }

bool SMSEditRecipientsContextFieldsJSON::hasRemoveRecipients(void) const
  {
    return flagHasRemoveRecipients;
  }

SMSRecipientsJSON * SMSEditRecipientsContextFieldsJSON::getRemoveRecipients(void)
  {
    assert(flagHasRemoveRecipients);
    return storeRemoveRecipients;
  }

const SMSRecipientsJSON * SMSEditRecipientsContextFieldsJSON::getRemoveRecipients(void) const
  {
    assert(flagHasRemoveRecipients);
    return storeRemoveRecipients;
  }

SMSEditRecipientsContextFieldsJSON *SMSEditRecipientsContextFieldsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSEditRecipientsContextFieldsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSEditRecipientsContextFieldsJSON>, SMSEditRecipientsContextFieldsJSON *, bool> generator("Type SMSEditRecipientsContextFields", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
