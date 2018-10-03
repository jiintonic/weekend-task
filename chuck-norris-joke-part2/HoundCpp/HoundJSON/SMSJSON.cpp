/* file "SMSJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSJSON.h"

#include "SMSJSON.h"


SMSJSON::SMSJSON(const SMSJSON &)
  {
    assert(false);
  }

SMSJSON &SMSJSON::operator=(const SMSJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSJSON::fromJSONRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Recipients of SMSJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UnambiguousSMSRecipientJSON * > vector_Recipients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnambiguousSMSRecipientJSON *convert_classy = UnambiguousSMSRecipientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Recipients1[num1] = convert_classy;
      }
    initRecipients();
    for (size_t num2 = 0; num2 < vector_Recipients1.size(); ++num2)
        appendRecipients(vector_Recipients1[num2]);
    for (size_t num1 = 0; num1 < vector_Recipients1.size(); ++num1)
      {
        vector_Recipients1[num1]->remove_reference();
      }
  }

void SMSJSON::fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenBody of SMSJSON is not a string.");
    setSpokenBody(std::string(json_string->getData()));
  }

void SMSJSON::fromJSONWrittenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenBody of SMSJSON is not a string.");
    setWrittenBody(std::string(json_string->getData()));
  }

void SMSJSON::fromJSONBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Body of SMSJSON is not a string.");
    setBody(std::string(json_string->getData()));
  }

void SMSJSON::fromJSONTo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSAddressFieldJSON *convert_classy = SMSAddressFieldJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTo(convert_classy);
    convert_classy->remove_reference();
  }

SMSJSON::SMSJSON(void) :
        flagHasRecipients(false),
        flagHasSpokenBody(false),
        flagHasWrittenBody(false),
        flagHasBody(false),
        flagHasTo(false)
  {
    extraIndex = create_string_index();
  }

SMSJSON::~SMSJSON(void)
  {
    if (flagHasRecipients)
      {
        for (size_t num4 = 0; num4 < storeRecipients.size(); ++num4)
          {
            storeRecipients[num4]->remove_reference();
          }
      }
    if (flagHasTo)
      {
        storeTo->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSJSON::hasRecipients(void) const
  {
    return flagHasRecipients;
  }

size_t SMSJSON::countOfRecipients(void) const
  {
    assert(flagHasRecipients);
    return storeRecipients.size();
  }

UnambiguousSMSRecipientJSON * SMSJSON::elementOfRecipients(size_t element_num)
  {
    assert(flagHasRecipients);
    return storeRecipients[element_num];
  }

const UnambiguousSMSRecipientJSON * SMSJSON::elementOfRecipients(size_t element_num) const
  {
    assert(flagHasRecipients);
    return storeRecipients[element_num];
  }

std::vector< UnambiguousSMSRecipientJSON * > SMSJSON::getRecipients(void)
  {
    assert(flagHasRecipients);
    return storeRecipients;
  }

const std::vector< UnambiguousSMSRecipientJSON * > SMSJSON::getRecipients(void) const
  {
    assert(flagHasRecipients);
    return storeRecipients;
  }

bool SMSJSON::hasSpokenBody(void) const
  {
    return flagHasSpokenBody;
  }

std::string SMSJSON::getSpokenBody(void)
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

const std::string SMSJSON::getSpokenBody(void) const
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

bool SMSJSON::hasWrittenBody(void) const
  {
    return flagHasWrittenBody;
  }

std::string SMSJSON::getWrittenBody(void)
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

const std::string SMSJSON::getWrittenBody(void) const
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

bool SMSJSON::hasBody(void) const
  {
    return flagHasBody;
  }

std::string SMSJSON::getBody(void)
  {
    assert(flagHasBody);
    return storeBody;
  }

const std::string SMSJSON::getBody(void) const
  {
    assert(flagHasBody);
    return storeBody;
  }

bool SMSJSON::hasTo(void) const
  {
    return flagHasTo;
  }

SMSAddressFieldJSON * SMSJSON::getTo(void)
  {
    assert(flagHasTo);
    return storeTo;
  }

const SMSAddressFieldJSON * SMSJSON::getTo(void) const
  {
    assert(flagHasTo);
    return storeTo;
  }

SMSJSON *SMSJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSJSON>, SMSJSON *, bool> generator("Type SMS", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
