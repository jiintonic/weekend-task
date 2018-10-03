/* file "CurrencyConverterInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CurrencyConverterInformationNuggetJSON.h"

#include "CurrencyConverterInformationNuggetJSON.h"


CurrencyConverterInformationNuggetJSON::CurrencyConverterInformationNuggetJSON(const CurrencyConverterInformationNuggetJSON &)
  {
    assert(false);
  }

CurrencyConverterInformationNuggetJSON &CurrencyConverterInformationNuggetJSON::operator=(const CurrencyConverterInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CurrencyConverterInformationNuggetJSON::extraConversionsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Conversions = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeConversions.size(); ++num1)
      {
        JSONValueHandler handler_Conversions;
        storeConversions[num1]->write_as_json(&handler_Conversions);
        handler_Conversions.result->add_reference();
        generated_array_1_Conversions->appendComponent(handler_Conversions.result);
        handler_Conversions.result->remove_reference();
      }
    return generated_array_1_Conversions;
  }

void CurrencyConverterInformationNuggetJSON::fromJSONConversions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Conversions of CurrencyConverterInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< CurrencyConversionJSON * > vector_Conversions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CurrencyConversionJSON *convert_classy = CurrencyConversionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Conversions1[num1] = convert_classy;
      }
    initConversions();
    for (size_t num2 = 0; num2 < vector_Conversions1.size(); ++num2)
        appendConversions(vector_Conversions1[num2]);
    for (size_t num1 = 0; num1 < vector_Conversions1.size(); ++num1)
      {
        vector_Conversions1[num1]->remove_reference();
      }
  }

CurrencyConverterInformationNuggetJSON::CurrencyConverterInformationNuggetJSON(void) :
        flagHasConversions(false)
  {
    extraIndex = create_string_index();
  }

CurrencyConverterInformationNuggetJSON::~CurrencyConverterInformationNuggetJSON(void)
  {
    if (flagHasConversions)
      {
        for (size_t num4 = 0; num4 < storeConversions.size(); ++num4)
          {
            storeConversions[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CurrencyConverterInformationNuggetJSON::getNuggetKind(void) const
  {
    return "CurrencyConverter";
  }

bool CurrencyConverterInformationNuggetJSON::hasConversions(void) const
  {
    return flagHasConversions;
  }

size_t CurrencyConverterInformationNuggetJSON::countOfConversions(void) const
  {
    assert(flagHasConversions);
    return storeConversions.size();
  }

CurrencyConversionJSON * CurrencyConverterInformationNuggetJSON::elementOfConversions(size_t element_num)
  {
    assert(flagHasConversions);
    return storeConversions[element_num];
  }

const CurrencyConversionJSON * CurrencyConverterInformationNuggetJSON::elementOfConversions(size_t element_num) const
  {
    assert(flagHasConversions);
    return storeConversions[element_num];
  }

std::vector< CurrencyConversionJSON * > CurrencyConverterInformationNuggetJSON::getConversions(void)
  {
    assert(flagHasConversions);
    return storeConversions;
  }

const std::vector< CurrencyConversionJSON * > CurrencyConverterInformationNuggetJSON::getConversions(void) const
  {
    assert(flagHasConversions);
    return storeConversions;
  }

CurrencyConverterInformationNuggetJSON *CurrencyConverterInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CurrencyConverterInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CurrencyConverterInformationNuggetJSON>, CurrencyConverterInformationNuggetJSON *, bool> generator("Type CurrencyConverterInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
