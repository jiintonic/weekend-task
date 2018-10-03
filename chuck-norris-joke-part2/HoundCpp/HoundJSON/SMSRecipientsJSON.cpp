/* file "SMSRecipientsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSRecipientsJSON.h"

#include "SMSRecipientsJSON.h"


SMSRecipientsJSON::SMSRecipientsJSON(const SMSRecipientsJSON &)
  {
    assert(false);
  }

SMSRecipientsJSON &SMSRecipientsJSON::operator=(const SMSRecipientsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSRecipientsJSON::fromJSONUnambiguousRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field UnambiguousRecipients of SMSRecipientsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UnambiguousSMSRecipientJSON * > vector_UnambiguousRecipients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnambiguousSMSRecipientJSON *convert_classy = UnambiguousSMSRecipientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_UnambiguousRecipients1[num1] = convert_classy;
      }
    initUnambiguousRecipients();
    for (size_t num6 = 0; num6 < vector_UnambiguousRecipients1.size(); ++num6)
        appendUnambiguousRecipients(vector_UnambiguousRecipients1[num6]);
    for (size_t num1 = 0; num1 < vector_UnambiguousRecipients1.size(); ++num1)
      {
        vector_UnambiguousRecipients1[num1]->remove_reference();
      }
  }

void SMSRecipientsJSON::fromJSONAmbiguousMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmbiguousMatches of SMSRecipientsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< WhichContactChoicesJSON * > vector_AmbiguousMatches1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        WhichContactChoicesJSON *convert_classy = WhichContactChoicesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmbiguousMatches1[num1] = convert_classy;
      }
    initAmbiguousMatches();
    for (size_t num7 = 0; num7 < vector_AmbiguousMatches1.size(); ++num7)
        appendAmbiguousMatches(vector_AmbiguousMatches1[num7]);
    for (size_t num1 = 0; num1 < vector_AmbiguousMatches1.size(); ++num1)
      {
        vector_AmbiguousMatches1[num1]->remove_reference();
      }
  }

void SMSRecipientsJSON::fromJSONPersonsWithAmbiguousPhoneNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PersonsWithAmbiguousPhoneNumbers of SMSRecipientsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< ContactNumberChoicesJSON * > vector_PersonsWithAmbiguousPhoneNumbers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ContactNumberChoicesJSON *convert_classy = ContactNumberChoicesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PersonsWithAmbiguousPhoneNumbers1[num1] = convert_classy;
      }
    initPersonsWithAmbiguousPhoneNumbers();
    for (size_t num8 = 0; num8 < vector_PersonsWithAmbiguousPhoneNumbers1.size(); ++num8)
        appendPersonsWithAmbiguousPhoneNumbers(vector_PersonsWithAmbiguousPhoneNumbers1[num8]);
    for (size_t num1 = 0; num1 < vector_PersonsWithAmbiguousPhoneNumbers1.size(); ++num1)
      {
        vector_PersonsWithAmbiguousPhoneNumbers1[num1]->remove_reference();
      }
  }

void SMSRecipientsJSON::fromJSONNoNumberMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NoNumberMatches of SMSRecipientsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< PersonGroupJSON * > vector_NoNumberMatches1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        PersonGroupJSON *convert_classy = PersonGroupJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NoNumberMatches1[num1] = convert_classy;
      }
    initNoNumberMatches();
    for (size_t num9 = 0; num9 < vector_NoNumberMatches1.size(); ++num9)
        appendNoNumberMatches(vector_NoNumberMatches1[num9]);
    for (size_t num1 = 0; num1 < vector_NoNumberMatches1.size(); ++num1)
      {
        vector_NoNumberMatches1[num1]->remove_reference();
      }
  }

void SMSRecipientsJSON::fromJSONContactsWithSelectedNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ContactsWithSelectedNumbers of SMSRecipientsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< ContactAndNumberJSON * > vector_ContactsWithSelectedNumbers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ContactAndNumberJSON *convert_classy = ContactAndNumberJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ContactsWithSelectedNumbers1[num1] = convert_classy;
      }
    initContactsWithSelectedNumbers();
    for (size_t num10 = 0; num10 < vector_ContactsWithSelectedNumbers1.size(); ++num10)
        appendContactsWithSelectedNumbers(vector_ContactsWithSelectedNumbers1[num10]);
    for (size_t num1 = 0; num1 < vector_ContactsWithSelectedNumbers1.size(); ++num1)
      {
        vector_ContactsWithSelectedNumbers1[num1]->remove_reference();
      }
  }

SMSRecipientsJSON::SMSRecipientsJSON(void) :
        flagHasUnambiguousRecipients(false),
        flagHasAmbiguousMatches(false),
        flagHasPersonsWithAmbiguousPhoneNumbers(false),
        flagHasNoNumberMatches(false),
        flagHasContactsWithSelectedNumbers(false)
  {
    extraIndex = create_string_index();
  }

SMSRecipientsJSON::~SMSRecipientsJSON(void)
  {
    if (flagHasUnambiguousRecipients)
      {
        for (size_t num16 = 0; num16 < storeUnambiguousRecipients.size(); ++num16)
          {
            storeUnambiguousRecipients[num16]->remove_reference();
          }
      }
    if (flagHasAmbiguousMatches)
      {
        for (size_t num17 = 0; num17 < storeAmbiguousMatches.size(); ++num17)
          {
            storeAmbiguousMatches[num17]->remove_reference();
          }
      }
    if (flagHasPersonsWithAmbiguousPhoneNumbers)
      {
        for (size_t num18 = 0; num18 < storePersonsWithAmbiguousPhoneNumbers.size(); ++num18)
          {
            storePersonsWithAmbiguousPhoneNumbers[num18]->remove_reference();
          }
      }
    if (flagHasNoNumberMatches)
      {
        for (size_t num19 = 0; num19 < storeNoNumberMatches.size(); ++num19)
          {
            storeNoNumberMatches[num19]->remove_reference();
          }
      }
    if (flagHasContactsWithSelectedNumbers)
      {
        for (size_t num20 = 0; num20 < storeContactsWithSelectedNumbers.size(); ++num20)
          {
            storeContactsWithSelectedNumbers[num20]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSRecipientsJSON::hasUnambiguousRecipients(void) const
  {
    return flagHasUnambiguousRecipients;
  }

size_t SMSRecipientsJSON::countOfUnambiguousRecipients(void) const
  {
    assert(flagHasUnambiguousRecipients);
    return storeUnambiguousRecipients.size();
  }

UnambiguousSMSRecipientJSON * SMSRecipientsJSON::elementOfUnambiguousRecipients(size_t element_num)
  {
    assert(flagHasUnambiguousRecipients);
    return storeUnambiguousRecipients[element_num];
  }

const UnambiguousSMSRecipientJSON * SMSRecipientsJSON::elementOfUnambiguousRecipients(size_t element_num) const
  {
    assert(flagHasUnambiguousRecipients);
    return storeUnambiguousRecipients[element_num];
  }

std::vector< UnambiguousSMSRecipientJSON * > SMSRecipientsJSON::getUnambiguousRecipients(void)
  {
    assert(flagHasUnambiguousRecipients);
    return storeUnambiguousRecipients;
  }

const std::vector< UnambiguousSMSRecipientJSON * > SMSRecipientsJSON::getUnambiguousRecipients(void) const
  {
    assert(flagHasUnambiguousRecipients);
    return storeUnambiguousRecipients;
  }

bool SMSRecipientsJSON::hasAmbiguousMatches(void) const
  {
    return flagHasAmbiguousMatches;
  }

size_t SMSRecipientsJSON::countOfAmbiguousMatches(void) const
  {
    assert(flagHasAmbiguousMatches);
    return storeAmbiguousMatches.size();
  }

WhichContactChoicesJSON * SMSRecipientsJSON::elementOfAmbiguousMatches(size_t element_num)
  {
    assert(flagHasAmbiguousMatches);
    return storeAmbiguousMatches[element_num];
  }

const WhichContactChoicesJSON * SMSRecipientsJSON::elementOfAmbiguousMatches(size_t element_num) const
  {
    assert(flagHasAmbiguousMatches);
    return storeAmbiguousMatches[element_num];
  }

std::vector< WhichContactChoicesJSON * > SMSRecipientsJSON::getAmbiguousMatches(void)
  {
    assert(flagHasAmbiguousMatches);
    return storeAmbiguousMatches;
  }

const std::vector< WhichContactChoicesJSON * > SMSRecipientsJSON::getAmbiguousMatches(void) const
  {
    assert(flagHasAmbiguousMatches);
    return storeAmbiguousMatches;
  }

bool SMSRecipientsJSON::hasPersonsWithAmbiguousPhoneNumbers(void) const
  {
    return flagHasPersonsWithAmbiguousPhoneNumbers;
  }

size_t SMSRecipientsJSON::countOfPersonsWithAmbiguousPhoneNumbers(void) const
  {
    assert(flagHasPersonsWithAmbiguousPhoneNumbers);
    return storePersonsWithAmbiguousPhoneNumbers.size();
  }

ContactNumberChoicesJSON * SMSRecipientsJSON::elementOfPersonsWithAmbiguousPhoneNumbers(size_t element_num)
  {
    assert(flagHasPersonsWithAmbiguousPhoneNumbers);
    return storePersonsWithAmbiguousPhoneNumbers[element_num];
  }

const ContactNumberChoicesJSON * SMSRecipientsJSON::elementOfPersonsWithAmbiguousPhoneNumbers(size_t element_num) const
  {
    assert(flagHasPersonsWithAmbiguousPhoneNumbers);
    return storePersonsWithAmbiguousPhoneNumbers[element_num];
  }

std::vector< ContactNumberChoicesJSON * > SMSRecipientsJSON::getPersonsWithAmbiguousPhoneNumbers(void)
  {
    assert(flagHasPersonsWithAmbiguousPhoneNumbers);
    return storePersonsWithAmbiguousPhoneNumbers;
  }

const std::vector< ContactNumberChoicesJSON * > SMSRecipientsJSON::getPersonsWithAmbiguousPhoneNumbers(void) const
  {
    assert(flagHasPersonsWithAmbiguousPhoneNumbers);
    return storePersonsWithAmbiguousPhoneNumbers;
  }

bool SMSRecipientsJSON::hasNoNumberMatches(void) const
  {
    return flagHasNoNumberMatches;
  }

size_t SMSRecipientsJSON::countOfNoNumberMatches(void) const
  {
    assert(flagHasNoNumberMatches);
    return storeNoNumberMatches.size();
  }

PersonGroupJSON * SMSRecipientsJSON::elementOfNoNumberMatches(size_t element_num)
  {
    assert(flagHasNoNumberMatches);
    return storeNoNumberMatches[element_num];
  }

const PersonGroupJSON * SMSRecipientsJSON::elementOfNoNumberMatches(size_t element_num) const
  {
    assert(flagHasNoNumberMatches);
    return storeNoNumberMatches[element_num];
  }

std::vector< PersonGroupJSON * > SMSRecipientsJSON::getNoNumberMatches(void)
  {
    assert(flagHasNoNumberMatches);
    return storeNoNumberMatches;
  }

const std::vector< PersonGroupJSON * > SMSRecipientsJSON::getNoNumberMatches(void) const
  {
    assert(flagHasNoNumberMatches);
    return storeNoNumberMatches;
  }

bool SMSRecipientsJSON::hasContactsWithSelectedNumbers(void) const
  {
    return flagHasContactsWithSelectedNumbers;
  }

size_t SMSRecipientsJSON::countOfContactsWithSelectedNumbers(void) const
  {
    assert(flagHasContactsWithSelectedNumbers);
    return storeContactsWithSelectedNumbers.size();
  }

ContactAndNumberJSON * SMSRecipientsJSON::elementOfContactsWithSelectedNumbers(size_t element_num)
  {
    assert(flagHasContactsWithSelectedNumbers);
    return storeContactsWithSelectedNumbers[element_num];
  }

const ContactAndNumberJSON * SMSRecipientsJSON::elementOfContactsWithSelectedNumbers(size_t element_num) const
  {
    assert(flagHasContactsWithSelectedNumbers);
    return storeContactsWithSelectedNumbers[element_num];
  }

std::vector< ContactAndNumberJSON * > SMSRecipientsJSON::getContactsWithSelectedNumbers(void)
  {
    assert(flagHasContactsWithSelectedNumbers);
    return storeContactsWithSelectedNumbers;
  }

const std::vector< ContactAndNumberJSON * > SMSRecipientsJSON::getContactsWithSelectedNumbers(void) const
  {
    assert(flagHasContactsWithSelectedNumbers);
    return storeContactsWithSelectedNumbers;
  }

SMSRecipientsJSON *SMSRecipientsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSRecipientsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSRecipientsJSON>, SMSRecipientsJSON *, bool> generator("Type SMSRecipients", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
