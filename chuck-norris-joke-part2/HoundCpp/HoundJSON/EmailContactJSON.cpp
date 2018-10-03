/* file "EmailContactJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailContactJSON.h"

#include "EmailContactJSON.h"


EmailContactJSON::EmailContactJSON(const EmailContactJSON &)
  {
    assert(false);
  }

EmailContactJSON &EmailContactJSON::operator=(const EmailContactJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *EmailContactJSON::extraLabeledEmailAddressesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_LabeledEmailAddresses = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeLabeledEmailAddresses.size(); ++num1)
      {
        JSONValueHandler handler_LabeledEmailAddresses;
        storeLabeledEmailAddresses[num1]->write_as_json(&handler_LabeledEmailAddresses);
        handler_LabeledEmailAddresses.result->add_reference();
        generated_array_1_LabeledEmailAddresses->appendComponent(handler_LabeledEmailAddresses.result);
        handler_LabeledEmailAddresses.result->remove_reference();
      }
    return generated_array_1_LabeledEmailAddresses;
  }

void EmailContactJSON::fromJSONLabeledEmailAddresses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LabeledEmailAddresses of EmailContactJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LabeledEmailAddressJSON * > vector_LabeledEmailAddresses1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LabeledEmailAddressJSON *convert_classy = LabeledEmailAddressJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_LabeledEmailAddresses1[num1] = convert_classy;
      }
    initLabeledEmailAddresses();
    for (size_t num2 = 0; num2 < vector_LabeledEmailAddresses1.size(); ++num2)
        appendLabeledEmailAddresses(vector_LabeledEmailAddresses1[num2]);
    for (size_t num1 = 0; num1 < vector_LabeledEmailAddresses1.size(); ++num1)
      {
        vector_LabeledEmailAddresses1[num1]->remove_reference();
      }
  }

EmailContactJSON::EmailContactJSON(void) :
        flagHasLabeledEmailAddresses(false)
  {
    extraIndex = create_string_index();
  }

EmailContactJSON::~EmailContactJSON(void)
  {
    if (flagHasLabeledEmailAddresses)
      {
        for (size_t num4 = 0; num4 < storeLabeledEmailAddresses.size(); ++num4)
          {
            storeLabeledEmailAddresses[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool EmailContactJSON::hasLabeledEmailAddresses(void) const
  {
    return flagHasLabeledEmailAddresses;
  }

size_t EmailContactJSON::countOfLabeledEmailAddresses(void) const
  {
    assert(flagHasLabeledEmailAddresses);
    return storeLabeledEmailAddresses.size();
  }

LabeledEmailAddressJSON * EmailContactJSON::elementOfLabeledEmailAddresses(size_t element_num)
  {
    assert(flagHasLabeledEmailAddresses);
    return storeLabeledEmailAddresses[element_num];
  }

const LabeledEmailAddressJSON * EmailContactJSON::elementOfLabeledEmailAddresses(size_t element_num) const
  {
    assert(flagHasLabeledEmailAddresses);
    return storeLabeledEmailAddresses[element_num];
  }

std::vector< LabeledEmailAddressJSON * > EmailContactJSON::getLabeledEmailAddresses(void)
  {
    assert(flagHasLabeledEmailAddresses);
    return storeLabeledEmailAddresses;
  }

const std::vector< LabeledEmailAddressJSON * > EmailContactJSON::getLabeledEmailAddresses(void) const
  {
    assert(flagHasLabeledEmailAddresses);
    return storeLabeledEmailAddresses;
  }

EmailContactJSON *EmailContactJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailContactJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailContactJSON>, EmailContactJSON *, bool> generator("Type EmailContact", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
