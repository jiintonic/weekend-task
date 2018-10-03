/* file "EmailJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailJSON.h"

#include "EmailJSON.h"


EmailJSON::EmailJSON(const EmailJSON &)
  {
    assert(false);
  }

EmailJSON &EmailJSON::operator=(const EmailJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailJSON::fromJSONTo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailAddressFieldJSON *convert_classy = EmailAddressFieldJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTo(convert_classy);
    convert_classy->remove_reference();
  }

void EmailJSON::fromJSONCc(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailAddressFieldJSON *convert_classy = EmailAddressFieldJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCc(convert_classy);
    convert_classy->remove_reference();
  }

void EmailJSON::fromJSONBcc(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailAddressFieldJSON *convert_classy = EmailAddressFieldJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBcc(convert_classy);
    convert_classy->remove_reference();
  }

void EmailJSON::fromJSONRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Recipients of EmailJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactResultJSON * > vector_Recipients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
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

void EmailJSON::fromJSONSpokenSubject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenSubject of EmailJSON is not a string.");
    setSpokenSubject(std::string(json_string->getData()));
  }

void EmailJSON::fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenBody of EmailJSON is not a string.");
    setSpokenBody(std::string(json_string->getData()));
  }

void EmailJSON::fromJSONSubject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Subject of EmailJSON is not a string.");
    setSubject(std::string(json_string->getData()));
  }

void EmailJSON::fromJSONBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Body of EmailJSON is not a string.");
    setBody(std::string(json_string->getData()));
  }

EmailJSON::EmailJSON(void) :
        flagHasTo(false),
        flagHasCc(false),
        flagHasBcc(false),
        flagHasRecipients(false),
        flagHasSpokenSubject(false),
        flagHasSpokenBody(false),
        flagHasSubject(false),
        flagHasBody(false)
  {
  }

EmailJSON::~EmailJSON(void)
  {
    if (flagHasTo)
      {
        storeTo->remove_reference();
      }
    if (flagHasCc)
      {
        storeCc->remove_reference();
      }
    if (flagHasBcc)
      {
        storeBcc->remove_reference();
      }
    if (flagHasRecipients)
      {
        for (size_t num4 = 0; num4 < storeRecipients.size(); ++num4)
          {
            storeRecipients[num4]->remove_reference();
          }
      }
  }

bool EmailJSON::hasTo(void) const
  {
    return flagHasTo;
  }

EmailAddressFieldJSON * EmailJSON::getTo(void)
  {
    assert(flagHasTo);
    return storeTo;
  }

const EmailAddressFieldJSON * EmailJSON::getTo(void) const
  {
    assert(flagHasTo);
    return storeTo;
  }

bool EmailJSON::hasCc(void) const
  {
    return flagHasCc;
  }

EmailAddressFieldJSON * EmailJSON::getCc(void)
  {
    assert(flagHasCc);
    return storeCc;
  }

const EmailAddressFieldJSON * EmailJSON::getCc(void) const
  {
    assert(flagHasCc);
    return storeCc;
  }

bool EmailJSON::hasBcc(void) const
  {
    return flagHasBcc;
  }

EmailAddressFieldJSON * EmailJSON::getBcc(void)
  {
    assert(flagHasBcc);
    return storeBcc;
  }

const EmailAddressFieldJSON * EmailJSON::getBcc(void) const
  {
    assert(flagHasBcc);
    return storeBcc;
  }

bool EmailJSON::hasRecipients(void) const
  {
    return flagHasRecipients;
  }

size_t EmailJSON::countOfRecipients(void) const
  {
    assert(flagHasRecipients);
    return storeRecipients.size();
  }

EmailContactResultJSON * EmailJSON::elementOfRecipients(size_t element_num)
  {
    assert(flagHasRecipients);
    return storeRecipients[element_num];
  }

const EmailContactResultJSON * EmailJSON::elementOfRecipients(size_t element_num) const
  {
    assert(flagHasRecipients);
    return storeRecipients[element_num];
  }

std::vector< EmailContactResultJSON * > EmailJSON::getRecipients(void)
  {
    assert(flagHasRecipients);
    return storeRecipients;
  }

const std::vector< EmailContactResultJSON * > EmailJSON::getRecipients(void) const
  {
    assert(flagHasRecipients);
    return storeRecipients;
  }

bool EmailJSON::hasSpokenSubject(void) const
  {
    return flagHasSpokenSubject;
  }

std::string EmailJSON::getSpokenSubject(void)
  {
    assert(flagHasSpokenSubject);
    return storeSpokenSubject;
  }

const std::string EmailJSON::getSpokenSubject(void) const
  {
    assert(flagHasSpokenSubject);
    return storeSpokenSubject;
  }

bool EmailJSON::hasSpokenBody(void) const
  {
    return flagHasSpokenBody;
  }

std::string EmailJSON::getSpokenBody(void)
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

const std::string EmailJSON::getSpokenBody(void) const
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

bool EmailJSON::hasSubject(void) const
  {
    return flagHasSubject;
  }

std::string EmailJSON::getSubject(void)
  {
    assert(flagHasSubject);
    return storeSubject;
  }

const std::string EmailJSON::getSubject(void) const
  {
    assert(flagHasSubject);
    return storeSubject;
  }

bool EmailJSON::hasBody(void) const
  {
    return flagHasBody;
  }

std::string EmailJSON::getBody(void)
  {
    assert(flagHasBody);
    return storeBody;
  }

const std::string EmailJSON::getBody(void) const
  {
    assert(flagHasBody);
    return storeBody;
  }

EmailJSON *EmailJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailJSON>, EmailJSON *, bool> generator("Type Email", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
