/* file "PhoneDisambiguationOmitListJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PhoneDisambiguationOmitListJSON.h"

#include "PhoneDisambiguationOmitListJSON.h"


PhoneDisambiguationOmitListJSON::PhoneDisambiguationOmitListJSON(const PhoneDisambiguationOmitListJSON &)
  {
    assert(false);
  }

PhoneDisambiguationOmitListJSON &PhoneDisambiguationOmitListJSON::operator=(const PhoneDisambiguationOmitListJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PhoneDisambiguationOmitListJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of PhoneDisambiguationOmitListJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field Value of PhoneDisambiguationOmitListJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field Value of PhoneDisambiguationOmitListJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_Value1[num1] = extracted_integer;
      }
    initValue();
    for (size_t num2 = 0; num2 < vector_Value1.size(); ++num2)
        appendValue(vector_Value1[num2]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
      }
  }

PhoneDisambiguationOmitListJSON::PhoneDisambiguationOmitListJSON(void) :
        flagHasValue(false)
  {
  }

PhoneDisambiguationOmitListJSON::~PhoneDisambiguationOmitListJSON(void)
  {
  }

bool PhoneDisambiguationOmitListJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t PhoneDisambiguationOmitListJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

OInteger PhoneDisambiguationOmitListJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const OInteger PhoneDisambiguationOmitListJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< OInteger > PhoneDisambiguationOmitListJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< OInteger > PhoneDisambiguationOmitListJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

char PhoneDisambiguationOmitListJSON::lowerBoundValue[] = "0";
PhoneDisambiguationOmitListJSON *PhoneDisambiguationOmitListJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PhoneDisambiguationOmitListJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PhoneDisambiguationOmitListJSON>, PhoneDisambiguationOmitListJSON *, bool> generator("Type PhoneDisambiguationOmitList", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
