/* file "EmailAddressFieldJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailAddressFieldJSON.h"

#include "EmailAddressFieldJSON.h"


EmailAddressFieldJSON::EmailAddressFieldJSON(const EmailAddressFieldJSON &)
  {
    assert(false);
  }

EmailAddressFieldJSON &EmailAddressFieldJSON::operator=(const EmailAddressFieldJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailAddressFieldJSON::fromJSONMissingEmails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MissingEmails of EmailAddressFieldJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_MissingEmails1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field MissingEmails of EmailAddressFieldJSON is not a string.");
        vector_MissingEmails1[num1] = std::string(json_string->getData());
      }
    initMissingEmails();
    for (size_t num4 = 0; num4 < vector_MissingEmails1.size(); ++num4)
        appendMissingEmails(vector_MissingEmails1[num4]);
    for (size_t num1 = 0; num1 < vector_MissingEmails1.size(); ++num1)
      {
      }
  }

void EmailAddressFieldJSON::fromJSONDisambiguateEmails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguateEmails of EmailAddressFieldJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DisambiguateEmailJSON * > vector_DisambiguateEmails1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DisambiguateEmailJSON *convert_classy = DisambiguateEmailJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DisambiguateEmails1[num1] = convert_classy;
      }
    initDisambiguateEmails();
    for (size_t num5 = 0; num5 < vector_DisambiguateEmails1.size(); ++num5)
        appendDisambiguateEmails(vector_DisambiguateEmails1[num5]);
    for (size_t num1 = 0; num1 < vector_DisambiguateEmails1.size(); ++num1)
      {
        vector_DisambiguateEmails1[num1]->remove_reference();
      }
  }

void EmailAddressFieldJSON::fromJSONValidEmails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ValidEmails of EmailAddressFieldJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< ValidEmailJSON * > vector_ValidEmails1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ValidEmailJSON *convert_classy = ValidEmailJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ValidEmails1[num1] = convert_classy;
      }
    initValidEmails();
    for (size_t num6 = 0; num6 < vector_ValidEmails1.size(); ++num6)
        appendValidEmails(vector_ValidEmails1[num6]);
    for (size_t num1 = 0; num1 < vector_ValidEmails1.size(); ++num1)
      {
        vector_ValidEmails1[num1]->remove_reference();
      }
  }

EmailAddressFieldJSON::EmailAddressFieldJSON(void) :
        flagHasMissingEmails(false),
        flagHasDisambiguateEmails(false),
        flagHasValidEmails(false)
  {
  }

EmailAddressFieldJSON::~EmailAddressFieldJSON(void)
  {
    if (flagHasDisambiguateEmails)
      {
        for (size_t num7 = 0; num7 < storeDisambiguateEmails.size(); ++num7)
          {
            storeDisambiguateEmails[num7]->remove_reference();
          }
      }
    if (flagHasValidEmails)
      {
        for (size_t num8 = 0; num8 < storeValidEmails.size(); ++num8)
          {
            storeValidEmails[num8]->remove_reference();
          }
      }
  }

bool EmailAddressFieldJSON::hasMissingEmails(void) const
  {
    return flagHasMissingEmails;
  }

size_t EmailAddressFieldJSON::countOfMissingEmails(void) const
  {
    assert(flagHasMissingEmails);
    return storeMissingEmails.size();
  }

std::string EmailAddressFieldJSON::elementOfMissingEmails(size_t element_num)
  {
    assert(flagHasMissingEmails);
    return storeMissingEmails[element_num];
  }

const std::string EmailAddressFieldJSON::elementOfMissingEmails(size_t element_num) const
  {
    assert(flagHasMissingEmails);
    return storeMissingEmails[element_num];
  }

std::vector< std::string > EmailAddressFieldJSON::getMissingEmails(void)
  {
    assert(flagHasMissingEmails);
    return storeMissingEmails;
  }

const std::vector< std::string > EmailAddressFieldJSON::getMissingEmails(void) const
  {
    assert(flagHasMissingEmails);
    return storeMissingEmails;
  }

bool EmailAddressFieldJSON::hasDisambiguateEmails(void) const
  {
    return flagHasDisambiguateEmails;
  }

size_t EmailAddressFieldJSON::countOfDisambiguateEmails(void) const
  {
    assert(flagHasDisambiguateEmails);
    return storeDisambiguateEmails.size();
  }

DisambiguateEmailJSON * EmailAddressFieldJSON::elementOfDisambiguateEmails(size_t element_num)
  {
    assert(flagHasDisambiguateEmails);
    return storeDisambiguateEmails[element_num];
  }

const DisambiguateEmailJSON * EmailAddressFieldJSON::elementOfDisambiguateEmails(size_t element_num) const
  {
    assert(flagHasDisambiguateEmails);
    return storeDisambiguateEmails[element_num];
  }

std::vector< DisambiguateEmailJSON * > EmailAddressFieldJSON::getDisambiguateEmails(void)
  {
    assert(flagHasDisambiguateEmails);
    return storeDisambiguateEmails;
  }

const std::vector< DisambiguateEmailJSON * > EmailAddressFieldJSON::getDisambiguateEmails(void) const
  {
    assert(flagHasDisambiguateEmails);
    return storeDisambiguateEmails;
  }

bool EmailAddressFieldJSON::hasValidEmails(void) const
  {
    return flagHasValidEmails;
  }

size_t EmailAddressFieldJSON::countOfValidEmails(void) const
  {
    assert(flagHasValidEmails);
    return storeValidEmails.size();
  }

ValidEmailJSON * EmailAddressFieldJSON::elementOfValidEmails(size_t element_num)
  {
    assert(flagHasValidEmails);
    return storeValidEmails[element_num];
  }

const ValidEmailJSON * EmailAddressFieldJSON::elementOfValidEmails(size_t element_num) const
  {
    assert(flagHasValidEmails);
    return storeValidEmails[element_num];
  }

std::vector< ValidEmailJSON * > EmailAddressFieldJSON::getValidEmails(void)
  {
    assert(flagHasValidEmails);
    return storeValidEmails;
  }

const std::vector< ValidEmailJSON * > EmailAddressFieldJSON::getValidEmails(void) const
  {
    assert(flagHasValidEmails);
    return storeValidEmails;
  }

EmailAddressFieldJSON *EmailAddressFieldJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailAddressFieldJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailAddressFieldJSON>, EmailAddressFieldJSON *, bool> generator("Type EmailAddressField", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
