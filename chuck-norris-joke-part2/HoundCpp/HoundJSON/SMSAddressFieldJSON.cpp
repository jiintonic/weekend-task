/* file "SMSAddressFieldJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSAddressFieldJSON.h"

#include "SMSAddressFieldJSON.h"


SMSAddressFieldJSON::SMSAddressFieldJSON(const SMSAddressFieldJSON &)
  {
    assert(false);
  }

SMSAddressFieldJSON &SMSAddressFieldJSON::operator=(const SMSAddressFieldJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSAddressFieldJSON::fromJSONMissingPhoneNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MissingPhoneNumbers of SMSAddressFieldJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_MissingPhoneNumbers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field MissingPhoneNumbers of SMSAddressFieldJSON is not a string.");
        vector_MissingPhoneNumbers1[num1] = std::string(json_string->getData());
      }
    initMissingPhoneNumbers();
    for (size_t num4 = 0; num4 < vector_MissingPhoneNumbers1.size(); ++num4)
        appendMissingPhoneNumbers(vector_MissingPhoneNumbers1[num4]);
    for (size_t num1 = 0; num1 < vector_MissingPhoneNumbers1.size(); ++num1)
      {
      }
  }

void SMSAddressFieldJSON::fromJSONDisambiguatePhoneNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguatePhoneNumbers of SMSAddressFieldJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DisambiguatePhoneNumberJSON * > vector_DisambiguatePhoneNumbers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DisambiguatePhoneNumberJSON *convert_classy = DisambiguatePhoneNumberJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DisambiguatePhoneNumbers1[num1] = convert_classy;
      }
    initDisambiguatePhoneNumbers();
    for (size_t num5 = 0; num5 < vector_DisambiguatePhoneNumbers1.size(); ++num5)
        appendDisambiguatePhoneNumbers(vector_DisambiguatePhoneNumbers1[num5]);
    for (size_t num1 = 0; num1 < vector_DisambiguatePhoneNumbers1.size(); ++num1)
      {
        vector_DisambiguatePhoneNumbers1[num1]->remove_reference();
      }
  }

void SMSAddressFieldJSON::fromJSONValidPhoneNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ValidPhoneNumbers of SMSAddressFieldJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< ValidPhoneNumberJSON * > vector_ValidPhoneNumbers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ValidPhoneNumberJSON *convert_classy = ValidPhoneNumberJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ValidPhoneNumbers1[num1] = convert_classy;
      }
    initValidPhoneNumbers();
    for (size_t num6 = 0; num6 < vector_ValidPhoneNumbers1.size(); ++num6)
        appendValidPhoneNumbers(vector_ValidPhoneNumbers1[num6]);
    for (size_t num1 = 0; num1 < vector_ValidPhoneNumbers1.size(); ++num1)
      {
        vector_ValidPhoneNumbers1[num1]->remove_reference();
      }
  }

SMSAddressFieldJSON::SMSAddressFieldJSON(void) :
        flagHasMissingPhoneNumbers(false),
        flagHasDisambiguatePhoneNumbers(false),
        flagHasValidPhoneNumbers(false)
  {
  }

SMSAddressFieldJSON::~SMSAddressFieldJSON(void)
  {
    if (flagHasDisambiguatePhoneNumbers)
      {
        for (size_t num7 = 0; num7 < storeDisambiguatePhoneNumbers.size(); ++num7)
          {
            storeDisambiguatePhoneNumbers[num7]->remove_reference();
          }
      }
    if (flagHasValidPhoneNumbers)
      {
        for (size_t num8 = 0; num8 < storeValidPhoneNumbers.size(); ++num8)
          {
            storeValidPhoneNumbers[num8]->remove_reference();
          }
      }
  }

bool SMSAddressFieldJSON::hasMissingPhoneNumbers(void) const
  {
    return flagHasMissingPhoneNumbers;
  }

size_t SMSAddressFieldJSON::countOfMissingPhoneNumbers(void) const
  {
    assert(flagHasMissingPhoneNumbers);
    return storeMissingPhoneNumbers.size();
  }

std::string SMSAddressFieldJSON::elementOfMissingPhoneNumbers(size_t element_num)
  {
    assert(flagHasMissingPhoneNumbers);
    return storeMissingPhoneNumbers[element_num];
  }

const std::string SMSAddressFieldJSON::elementOfMissingPhoneNumbers(size_t element_num) const
  {
    assert(flagHasMissingPhoneNumbers);
    return storeMissingPhoneNumbers[element_num];
  }

std::vector< std::string > SMSAddressFieldJSON::getMissingPhoneNumbers(void)
  {
    assert(flagHasMissingPhoneNumbers);
    return storeMissingPhoneNumbers;
  }

const std::vector< std::string > SMSAddressFieldJSON::getMissingPhoneNumbers(void) const
  {
    assert(flagHasMissingPhoneNumbers);
    return storeMissingPhoneNumbers;
  }

bool SMSAddressFieldJSON::hasDisambiguatePhoneNumbers(void) const
  {
    return flagHasDisambiguatePhoneNumbers;
  }

size_t SMSAddressFieldJSON::countOfDisambiguatePhoneNumbers(void) const
  {
    assert(flagHasDisambiguatePhoneNumbers);
    return storeDisambiguatePhoneNumbers.size();
  }

DisambiguatePhoneNumberJSON * SMSAddressFieldJSON::elementOfDisambiguatePhoneNumbers(size_t element_num)
  {
    assert(flagHasDisambiguatePhoneNumbers);
    return storeDisambiguatePhoneNumbers[element_num];
  }

const DisambiguatePhoneNumberJSON * SMSAddressFieldJSON::elementOfDisambiguatePhoneNumbers(size_t element_num) const
  {
    assert(flagHasDisambiguatePhoneNumbers);
    return storeDisambiguatePhoneNumbers[element_num];
  }

std::vector< DisambiguatePhoneNumberJSON * > SMSAddressFieldJSON::getDisambiguatePhoneNumbers(void)
  {
    assert(flagHasDisambiguatePhoneNumbers);
    return storeDisambiguatePhoneNumbers;
  }

const std::vector< DisambiguatePhoneNumberJSON * > SMSAddressFieldJSON::getDisambiguatePhoneNumbers(void) const
  {
    assert(flagHasDisambiguatePhoneNumbers);
    return storeDisambiguatePhoneNumbers;
  }

bool SMSAddressFieldJSON::hasValidPhoneNumbers(void) const
  {
    return flagHasValidPhoneNumbers;
  }

size_t SMSAddressFieldJSON::countOfValidPhoneNumbers(void) const
  {
    assert(flagHasValidPhoneNumbers);
    return storeValidPhoneNumbers.size();
  }

ValidPhoneNumberJSON * SMSAddressFieldJSON::elementOfValidPhoneNumbers(size_t element_num)
  {
    assert(flagHasValidPhoneNumbers);
    return storeValidPhoneNumbers[element_num];
  }

const ValidPhoneNumberJSON * SMSAddressFieldJSON::elementOfValidPhoneNumbers(size_t element_num) const
  {
    assert(flagHasValidPhoneNumbers);
    return storeValidPhoneNumbers[element_num];
  }

std::vector< ValidPhoneNumberJSON * > SMSAddressFieldJSON::getValidPhoneNumbers(void)
  {
    assert(flagHasValidPhoneNumbers);
    return storeValidPhoneNumbers;
  }

const std::vector< ValidPhoneNumberJSON * > SMSAddressFieldJSON::getValidPhoneNumbers(void) const
  {
    assert(flagHasValidPhoneNumbers);
    return storeValidPhoneNumbers;
  }

SMSAddressFieldJSON *SMSAddressFieldJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSAddressFieldJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSAddressFieldJSON>, SMSAddressFieldJSON *, bool> generator("Type SMSAddressField", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
