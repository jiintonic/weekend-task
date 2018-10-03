/* file "BaseConverterQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BaseConverterQueryStateJSON.h"

#include "BaseConverterQueryStateJSON.h"


BaseConverterQueryStateJSON::BaseConverterQueryStateJSON(const BaseConverterQueryStateJSON &)
  {
    assert(false);
  }

BaseConverterQueryStateJSON &BaseConverterQueryStateJSON::operator=(const BaseConverterQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BaseConverterQueryStateJSON::fromJSONBases(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Bases of BaseConverterQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Bases1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Bases of BaseConverterQueryStateJSON is not a string.");
        vector_Bases1[num1] = std::string(json_string->getData());
      }
    initBases();
    for (size_t num2 = 0; num2 < vector_Bases1.size(); ++num2)
        appendBases(vector_Bases1[num2]);
    for (size_t num1 = 0; num1 < vector_Bases1.size(); ++num1)
      {
      }
  }

BaseConverterQueryStateJSON::BaseConverterQueryStateJSON(void) :
        flagHasBases(false)
  {
  }

BaseConverterQueryStateJSON::~BaseConverterQueryStateJSON(void)
  {
  }

bool BaseConverterQueryStateJSON::hasBases(void) const
  {
    return flagHasBases;
  }

size_t BaseConverterQueryStateJSON::countOfBases(void) const
  {
    assert(flagHasBases);
    return storeBases.size();
  }

std::string BaseConverterQueryStateJSON::elementOfBases(size_t element_num)
  {
    assert(flagHasBases);
    return storeBases[element_num];
  }

const std::string BaseConverterQueryStateJSON::elementOfBases(size_t element_num) const
  {
    assert(flagHasBases);
    return storeBases[element_num];
  }

std::vector< std::string > BaseConverterQueryStateJSON::getBases(void)
  {
    assert(flagHasBases);
    return storeBases;
  }

const std::vector< std::string > BaseConverterQueryStateJSON::getBases(void) const
  {
    assert(flagHasBases);
    return storeBases;
  }

BaseConverterQueryStateJSON *BaseConverterQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BaseConverterQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BaseConverterQueryStateJSON>, BaseConverterQueryStateJSON *, bool> generator("Type BaseConverterQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
