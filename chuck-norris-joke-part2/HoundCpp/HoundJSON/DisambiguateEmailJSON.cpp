/* file "DisambiguateEmailJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateEmailJSON.h"

#include "DisambiguateEmailJSON.h"


DisambiguateEmailJSON::DisambiguateEmailJSON(const DisambiguateEmailJSON &)
  {
    assert(false);
  }

DisambiguateEmailJSON &DisambiguateEmailJSON::operator=(const DisambiguateEmailJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateEmailJSON::fromJSONContactQueryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ContactQueryName of DisambiguateEmailJSON is not a string.");
    setContactQueryName(std::string(json_string->getData()));
  }

void DisambiguateEmailJSON::fromJSONDisambiguationCandidates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguationCandidates of DisambiguateEmailJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailDisambiguationCandidateJSON * > vector_DisambiguationCandidates1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailDisambiguationCandidateJSON *convert_classy = EmailDisambiguationCandidateJSON::from_json(json_array1->component(num1), ignore_extras);
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

DisambiguateEmailJSON::DisambiguateEmailJSON(void) :
        flagHasContactQueryName(false),
        flagHasDisambiguationCandidates(false)
  {
  }

DisambiguateEmailJSON::~DisambiguateEmailJSON(void)
  {
    if (flagHasDisambiguationCandidates)
      {
        for (size_t num4 = 0; num4 < storeDisambiguationCandidates.size(); ++num4)
          {
            storeDisambiguationCandidates[num4]->remove_reference();
          }
      }
  }

bool DisambiguateEmailJSON::hasContactQueryName(void) const
  {
    return flagHasContactQueryName;
  }

std::string DisambiguateEmailJSON::getContactQueryName(void)
  {
    assert(flagHasContactQueryName);
    return storeContactQueryName;
  }

const std::string DisambiguateEmailJSON::getContactQueryName(void) const
  {
    assert(flagHasContactQueryName);
    return storeContactQueryName;
  }

bool DisambiguateEmailJSON::hasDisambiguationCandidates(void) const
  {
    return flagHasDisambiguationCandidates;
  }

size_t DisambiguateEmailJSON::countOfDisambiguationCandidates(void) const
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates.size();
  }

EmailDisambiguationCandidateJSON * DisambiguateEmailJSON::elementOfDisambiguationCandidates(size_t element_num)
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates[element_num];
  }

const EmailDisambiguationCandidateJSON * DisambiguateEmailJSON::elementOfDisambiguationCandidates(size_t element_num) const
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates[element_num];
  }

std::vector< EmailDisambiguationCandidateJSON * > DisambiguateEmailJSON::getDisambiguationCandidates(void)
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates;
  }

const std::vector< EmailDisambiguationCandidateJSON * > DisambiguateEmailJSON::getDisambiguationCandidates(void) const
  {
    assert(flagHasDisambiguationCandidates);
    return storeDisambiguationCandidates;
  }

DisambiguateEmailJSON *DisambiguateEmailJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateEmailJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateEmailJSON>, DisambiguateEmailJSON *, bool> generator("Type DisambiguateEmail", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
