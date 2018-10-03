/* file "PhoneNumberDisambiguationCandidateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PhoneNumberDisambiguationCandidateJSON.h"

#include "PhoneNumberDisambiguationCandidateJSON.h"


PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::TypePhoneNumbersJSON(const TypePhoneNumbersJSON &)
  {
    assert(false);
  }

PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON &PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::operator=(const TypePhoneNumbersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TypePhoneNumbersJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of TypePhoneNumbersJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::TypePhoneNumbersJSON(void) :
        flagHasLabel(false),
        flagHasNumber(false)
  {
  }

PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::~TypePhoneNumbersJSON(void)
  {
  }

bool PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

PhoneNumberDisambiguationCandidateJSON::PhoneNumberDisambiguationCandidateJSON(const PhoneNumberDisambiguationCandidateJSON &)
  {
    assert(false);
  }

PhoneNumberDisambiguationCandidateJSON &PhoneNumberDisambiguationCandidateJSON::operator=(const PhoneNumberDisambiguationCandidateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PhoneNumberDisambiguationCandidateJSON::fromJSONContactName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactName of PhoneNumberDisambiguationCandidateJSON is not a string.");
    setContactName(std::string(json_string->getData()));
  }

void PhoneNumberDisambiguationCandidateJSON::fromJSONContactID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactID of PhoneNumberDisambiguationCandidateJSON is not a string.");
    setContactID(std::string(json_string->getData()));
  }

void PhoneNumberDisambiguationCandidateJSON::fromJSONPhoneNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PhoneNumbers of PhoneNumberDisambiguationCandidateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypePhoneNumbersJSON * > vector_PhoneNumbers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePhoneNumbersJSON *convert_classy = TypePhoneNumbersJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PhoneNumbers1[num1] = convert_classy;
      }
    initPhoneNumbers();
    for (size_t num2 = 0; num2 < vector_PhoneNumbers1.size(); ++num2)
        appendPhoneNumbers(vector_PhoneNumbers1[num2]);
    for (size_t num1 = 0; num1 < vector_PhoneNumbers1.size(); ++num1)
      {
        vector_PhoneNumbers1[num1]->remove_reference();
      }
  }

PhoneNumberDisambiguationCandidateJSON::PhoneNumberDisambiguationCandidateJSON(void) :
        flagHasContactName(false),
        flagHasContactID(false),
        flagHasPhoneNumbers(false)
  {
  }

PhoneNumberDisambiguationCandidateJSON::~PhoneNumberDisambiguationCandidateJSON(void)
  {
    if (flagHasPhoneNumbers)
      {
        for (size_t num4 = 0; num4 < storePhoneNumbers.size(); ++num4)
          {
            storePhoneNumbers[num4]->remove_reference();
          }
      }
  }

bool PhoneNumberDisambiguationCandidateJSON::hasContactName(void) const
  {
    return flagHasContactName;
  }

std::string PhoneNumberDisambiguationCandidateJSON::getContactName(void)
  {
    assert(flagHasContactName);
    return storeContactName;
  }

const std::string PhoneNumberDisambiguationCandidateJSON::getContactName(void) const
  {
    assert(flagHasContactName);
    return storeContactName;
  }

bool PhoneNumberDisambiguationCandidateJSON::hasContactID(void) const
  {
    return flagHasContactID;
  }

std::string PhoneNumberDisambiguationCandidateJSON::getContactID(void)
  {
    assert(flagHasContactID);
    return storeContactID;
  }

const std::string PhoneNumberDisambiguationCandidateJSON::getContactID(void) const
  {
    assert(flagHasContactID);
    return storeContactID;
  }

bool PhoneNumberDisambiguationCandidateJSON::hasPhoneNumbers(void) const
  {
    return flagHasPhoneNumbers;
  }

size_t PhoneNumberDisambiguationCandidateJSON::countOfPhoneNumbers(void) const
  {
    assert(flagHasPhoneNumbers);
    return storePhoneNumbers.size();
  }

PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON * PhoneNumberDisambiguationCandidateJSON::elementOfPhoneNumbers(size_t element_num)
  {
    assert(flagHasPhoneNumbers);
    return storePhoneNumbers[element_num];
  }

const PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON * PhoneNumberDisambiguationCandidateJSON::elementOfPhoneNumbers(size_t element_num) const
  {
    assert(flagHasPhoneNumbers);
    return storePhoneNumbers[element_num];
  }

std::vector< PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON * > PhoneNumberDisambiguationCandidateJSON::getPhoneNumbers(void)
  {
    assert(flagHasPhoneNumbers);
    return storePhoneNumbers;
  }

const std::vector< PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON * > PhoneNumberDisambiguationCandidateJSON::getPhoneNumbers(void) const
  {
    assert(flagHasPhoneNumbers);
    return storePhoneNumbers;
  }

PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON *PhoneNumberDisambiguationCandidateJSON::TypePhoneNumbersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePhoneNumbersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePhoneNumbersJSON>, TypePhoneNumbersJSON *, bool> generator("Type TypePhoneNumbers", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PhoneNumberDisambiguationCandidateJSON *PhoneNumberDisambiguationCandidateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PhoneNumberDisambiguationCandidateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PhoneNumberDisambiguationCandidateJSON>, PhoneNumberDisambiguationCandidateJSON *, bool> generator("Type PhoneNumberDisambiguationCandidate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
