/* file "DisambiguatePhoneNumberJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguatePhoneNumberJSON.h"

#include "DisambiguatePhoneNumberJSON.h"


DisambiguatePhoneNumberJSON::DisambiguatePhoneNumberJSON(const DisambiguatePhoneNumberJSON &)
  {
    assert(false);
  }

DisambiguatePhoneNumberJSON &DisambiguatePhoneNumberJSON::operator=(const DisambiguatePhoneNumberJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguatePhoneNumberJSON::fromJSONContactQueryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactQueryName of DisambiguatePhoneNumberJSON is not a string.");
    setContactQueryName(std::string(json_string->getData()));
  }

void DisambiguatePhoneNumberJSON::fromJSONDisambiguationCandidates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguationCandidates of DisambiguatePhoneNumberJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< PhoneNumberDisambiguationCandidateJSON * > vector_DisambiguationCandidates1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        PhoneNumberDisambiguationCandidateJSON *convert_classy = PhoneNumberDisambiguationCandidateJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DisambiguationCandidates1[num1] = convert_classy;
      }
    initDisambiguationCandidates();
    for (size_t num2 = 0; num2 < vector_DisambiguationCandidates1.size(); ++num2)
        appendDisambiguationCandidates(vector_DisambiguationCandidates1[num2]);
    for (size_t num1 = 0; num1 < vector_DisambiguationCandidates1.size(); ++num1)
      {
        vector_DisambiguationCandidates1[num1]->remove_reference();
      }
  }

DisambiguatePhoneNumberJSON::DisambiguatePhoneNumberJSON(void) :
        flagHasContactQueryName(false),
        flagHasDisambiguationCandidates(false)
  {
  }

DisambiguatePhoneNumberJSON::~DisambiguatePhoneNumberJSON(void)
  {
    if (flagHasDisambiguationCandidates)
      {
        for (size_t num4 = 0; num4 < storeDisambiguationCandidates.size(); ++num4)
          {
            storeDisambiguationCandidates[num4]->remove_reference();
          }
      }
  }

bool DisambiguatePhoneNumberJSON::hasContactQueryName(void) const
  {
    return flagHasContactQueryName;
  }

std::string DisambiguatePhoneNumberJSON::getContactQueryName(void)
  {
    assert(flagHasContactQueryName);
    return storeContactQueryName;
  }

const std::string DisambiguatePhoneNumberJSON::getContactQueryName(void) const
  {
    assert(flagHasContactQueryName);
    return storeContactQueryName;
  }

bool DisambiguatePhoneNumberJSON::hasDisambiguationCandidates(void) const
  {
    return flagHasDisambiguationCandidates;
  }

size_t DisambiguatePhoneNumberJSON::countOfDisambiguationCandidates(void) const
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates.size();
  }

PhoneNumberDisambiguationCandidateJSON * DisambiguatePhoneNumberJSON::elementOfDisambiguationCandidates(size_t element_num)
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates[element_num];
  }

const PhoneNumberDisambiguationCandidateJSON * DisambiguatePhoneNumberJSON::elementOfDisambiguationCandidates(size_t element_num) const
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates[element_num];
  }

std::vector< PhoneNumberDisambiguationCandidateJSON * > DisambiguatePhoneNumberJSON::getDisambiguationCandidates(void)
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates;
  }

const std::vector< PhoneNumberDisambiguationCandidateJSON * > DisambiguatePhoneNumberJSON::getDisambiguationCandidates(void) const
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates;
  }

DisambiguatePhoneNumberJSON *DisambiguatePhoneNumberJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguatePhoneNumberJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguatePhoneNumberJSON>, DisambiguatePhoneNumberJSON *, bool> generator("Type DisambiguatePhoneNumber", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
