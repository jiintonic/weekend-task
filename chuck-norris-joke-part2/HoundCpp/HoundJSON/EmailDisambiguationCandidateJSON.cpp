/* file "EmailDisambiguationCandidateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailDisambiguationCandidateJSON.h"

#include "EmailDisambiguationCandidateJSON.h"


EmailDisambiguationCandidateJSON::TypeEmailsJSON::TypeEmailsJSON(const TypeEmailsJSON &)
  {
    assert(false);
  }

EmailDisambiguationCandidateJSON::TypeEmailsJSON &EmailDisambiguationCandidateJSON::TypeEmailsJSON::operator=(const TypeEmailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailDisambiguationCandidateJSON::TypeEmailsJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TypeEmailsJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void EmailDisambiguationCandidateJSON::TypeEmailsJSON::fromJSONEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Email of TypeEmailsJSON is not a string.");
    setEmail(std::string(json_string->getData()));
  }

EmailDisambiguationCandidateJSON::TypeEmailsJSON::TypeEmailsJSON(void) :
        flagHasLabel(false),
        flagHasEmail(false)
  {
  }

EmailDisambiguationCandidateJSON::TypeEmailsJSON::~TypeEmailsJSON(void)
  {
  }

bool EmailDisambiguationCandidateJSON::TypeEmailsJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string EmailDisambiguationCandidateJSON::TypeEmailsJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string EmailDisambiguationCandidateJSON::TypeEmailsJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool EmailDisambiguationCandidateJSON::TypeEmailsJSON::hasEmail(void) const
  {
    return flagHasEmail;
  }

std::string EmailDisambiguationCandidateJSON::TypeEmailsJSON::getEmail(void)
  {
    assert(flagHasEmail);
    return storeEmail;
  }

const std::string EmailDisambiguationCandidateJSON::TypeEmailsJSON::getEmail(void) const
  {
    assert(flagHasEmail);
    return storeEmail;
  }

EmailDisambiguationCandidateJSON::EmailDisambiguationCandidateJSON(const EmailDisambiguationCandidateJSON &)
  {
    assert(false);
  }

EmailDisambiguationCandidateJSON &EmailDisambiguationCandidateJSON::operator=(const EmailDisambiguationCandidateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailDisambiguationCandidateJSON::fromJSONContactName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactName of EmailDisambiguationCandidateJSON is not a string.");
    setContactName(std::string(json_string->getData()));
  }

void EmailDisambiguationCandidateJSON::fromJSONContactID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactID of EmailDisambiguationCandidateJSON is not a string.");
    setContactID(std::string(json_string->getData()));
  }

void EmailDisambiguationCandidateJSON::fromJSONEmails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Emails of EmailDisambiguationCandidateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeEmailsJSON * > vector_Emails1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeEmailsJSON *convert_classy = TypeEmailsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Emails1[num1] = convert_classy;
      }
    initEmails();
    for (size_t num2 = 0; num2 < vector_Emails1.size(); ++num2)
        appendEmails(vector_Emails1[num2]);
    for (size_t num1 = 0; num1 < vector_Emails1.size(); ++num1)
      {
        vector_Emails1[num1]->remove_reference();
      }
  }

EmailDisambiguationCandidateJSON::EmailDisambiguationCandidateJSON(void) :
        flagHasContactName(false),
        flagHasContactID(false),
        flagHasEmails(false)
  {
  }

EmailDisambiguationCandidateJSON::~EmailDisambiguationCandidateJSON(void)
  {
    if (flagHasEmails)
      {
        for (size_t num4 = 0; num4 < storeEmails.size(); ++num4)
          {
            storeEmails[num4]->remove_reference();
          }
      }
  }

bool EmailDisambiguationCandidateJSON::hasContactName(void) const
  {
    return flagHasContactName;
  }

std::string EmailDisambiguationCandidateJSON::getContactName(void)
  {
    assert(flagHasContactName);
    return storeContactName;
  }

const std::string EmailDisambiguationCandidateJSON::getContactName(void) const
  {
    assert(flagHasContactName);
    return storeContactName;
  }

bool EmailDisambiguationCandidateJSON::hasContactID(void) const
  {
    return flagHasContactID;
  }

std::string EmailDisambiguationCandidateJSON::getContactID(void)
  {
    assert(flagHasContactID);
    return storeContactID;
  }

const std::string EmailDisambiguationCandidateJSON::getContactID(void) const
  {
    assert(flagHasContactID);
    return storeContactID;
  }

bool EmailDisambiguationCandidateJSON::hasEmails(void) const
  {
    return flagHasEmails;
  }

size_t EmailDisambiguationCandidateJSON::countOfEmails(void) const
  {
    assert(flagHasEmails);
    return storeEmails.size();
  }

EmailDisambiguationCandidateJSON::TypeEmailsJSON * EmailDisambiguationCandidateJSON::elementOfEmails(size_t element_num)
  {
    assert(flagHasEmails);
    return storeEmails[element_num];
  }

const EmailDisambiguationCandidateJSON::TypeEmailsJSON * EmailDisambiguationCandidateJSON::elementOfEmails(size_t element_num) const
  {
    assert(flagHasEmails);
    return storeEmails[element_num];
  }

std::vector< EmailDisambiguationCandidateJSON::TypeEmailsJSON * > EmailDisambiguationCandidateJSON::getEmails(void)
  {
    assert(flagHasEmails);
    return storeEmails;
  }

const std::vector< EmailDisambiguationCandidateJSON::TypeEmailsJSON * > EmailDisambiguationCandidateJSON::getEmails(void) const
  {
    assert(flagHasEmails);
    return storeEmails;
  }

EmailDisambiguationCandidateJSON::TypeEmailsJSON *EmailDisambiguationCandidateJSON::TypeEmailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeEmailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeEmailsJSON>, TypeEmailsJSON *, bool> generator("Type TypeEmails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
EmailDisambiguationCandidateJSON *EmailDisambiguationCandidateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailDisambiguationCandidateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailDisambiguationCandidateJSON>, EmailDisambiguationCandidateJSON *, bool> generator("Type EmailDisambiguationCandidate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
