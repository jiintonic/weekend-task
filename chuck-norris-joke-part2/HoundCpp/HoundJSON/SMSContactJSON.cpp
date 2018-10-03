/* file "SMSContactJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSContactJSON.h"

#include "SMSContactJSON.h"


SMSContactJSON::SMSContactJSON(const SMSContactJSON &)
  {
    assert(false);
  }

SMSContactJSON &SMSContactJSON::operator=(const SMSContactJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSContactJSON::extraLabeledPhoneNumbersToJSON(void) const
  {
    JSONArrayValue *generated_array_1_LabeledPhoneNumbers = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeLabeledPhoneNumbers.size(); ++num1)
      {
        JSONValueHandler handler_LabeledPhoneNumbers;
        storeLabeledPhoneNumbers[num1]->write_as_json(&handler_LabeledPhoneNumbers);
        handler_LabeledPhoneNumbers.result->add_reference();
        generated_array_1_LabeledPhoneNumbers->appendComponent(handler_LabeledPhoneNumbers.result);
        handler_LabeledPhoneNumbers.result->remove_reference();
      }
    return generated_array_1_LabeledPhoneNumbers;
  }

void SMSContactJSON::fromJSONLabeledPhoneNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LabeledPhoneNumbers of SMSContactJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LabeledPhoneNumberJSON * > vector_LabeledPhoneNumbers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LabeledPhoneNumberJSON *convert_classy = LabeledPhoneNumberJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_LabeledPhoneNumbers1[num1] = convert_classy;
      }
    initLabeledPhoneNumbers();
    for (size_t num2 = 0; num2 < vector_LabeledPhoneNumbers1.size(); ++num2)
        appendLabeledPhoneNumbers(vector_LabeledPhoneNumbers1[num2]);
    for (size_t num1 = 0; num1 < vector_LabeledPhoneNumbers1.size(); ++num1)
      {
        vector_LabeledPhoneNumbers1[num1]->remove_reference();
      }
  }

SMSContactJSON::SMSContactJSON(void) :
        flagHasLabeledPhoneNumbers(false)
  {
    extraIndex = create_string_index();
  }

SMSContactJSON::~SMSContactJSON(void)
  {
    if (flagHasLabeledPhoneNumbers)
      {
        for (size_t num4 = 0; num4 < storeLabeledPhoneNumbers.size(); ++num4)
          {
            storeLabeledPhoneNumbers[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSContactJSON::hasLabeledPhoneNumbers(void) const
  {
    return flagHasLabeledPhoneNumbers;
  }

size_t SMSContactJSON::countOfLabeledPhoneNumbers(void) const
  {
    assert(flagHasLabeledPhoneNumbers);
    return storeLabeledPhoneNumbers.size();
  }

LabeledPhoneNumberJSON * SMSContactJSON::elementOfLabeledPhoneNumbers(size_t element_num)
  {
    assert(flagHasLabeledPhoneNumbers);
    return storeLabeledPhoneNumbers[element_num];
  }

const LabeledPhoneNumberJSON * SMSContactJSON::elementOfLabeledPhoneNumbers(size_t element_num) const
  {
    assert(flagHasLabeledPhoneNumbers);
    return storeLabeledPhoneNumbers[element_num];
  }

std::vector< LabeledPhoneNumberJSON * > SMSContactJSON::getLabeledPhoneNumbers(void)
  {
    assert(flagHasLabeledPhoneNumbers);
    return storeLabeledPhoneNumbers;
  }

const std::vector< LabeledPhoneNumberJSON * > SMSContactJSON::getLabeledPhoneNumbers(void) const
  {
    assert(flagHasLabeledPhoneNumbers);
    return storeLabeledPhoneNumbers;
  }

SMSContactJSON *SMSContactJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSContactJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSContactJSON>, SMSContactJSON *, bool> generator("Type SMSContact", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
