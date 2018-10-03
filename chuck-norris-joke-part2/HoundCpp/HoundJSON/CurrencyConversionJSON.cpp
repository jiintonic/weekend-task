/* file "CurrencyConversionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CurrencyConversionJSON.h"

#include "CurrencyConversionJSON.h"


CurrencyConversionJSON::TypeOutputValueJSON::TypeOutputValueJSON(const TypeOutputValueJSON &)
  {
    assert(false);
  }

CurrencyConversionJSON::TypeOutputValueJSON &CurrencyConversionJSON::TypeOutputValueJSON::operator=(const TypeOutputValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrencyConversionJSON::TypeOutputValueJSON::fromJSONConvertedValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConvertedValue(convert_classy);
    convert_classy->remove_reference();
  }

void CurrencyConversionJSON::TypeOutputValueJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CurrencyConversionErrorJSON *convert_classy = CurrencyConversionErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setError(convert_classy);
    convert_classy->remove_reference();
  }

CurrencyConversionJSON::TypeOutputValueJSON::TypeOutputValueJSON(void) :
        flagHasConvertedValue(false),
        flagHasError(false)
  {
  }

CurrencyConversionJSON::TypeOutputValueJSON::~TypeOutputValueJSON(void)
  {
    if (flagHasConvertedValue)
      {
        storeConvertedValue->remove_reference();
      }
    if (flagHasError)
      {
        storeError->remove_reference();
      }
  }

bool CurrencyConversionJSON::TypeOutputValueJSON::hasConvertedValue(void) const
  {
    return flagHasConvertedValue;
  }

MoneyJSON * CurrencyConversionJSON::TypeOutputValueJSON::getConvertedValue(void)
  {
    assert(flagHasConvertedValue);
    return storeConvertedValue;
  }

const MoneyJSON * CurrencyConversionJSON::TypeOutputValueJSON::getConvertedValue(void) const
  {
    assert(flagHasConvertedValue);
    return storeConvertedValue;
  }

bool CurrencyConversionJSON::TypeOutputValueJSON::hasError(void) const
  {
    return flagHasError;
  }

CurrencyConversionErrorJSON * CurrencyConversionJSON::TypeOutputValueJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const CurrencyConversionErrorJSON * CurrencyConversionJSON::TypeOutputValueJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

CurrencyConversionJSON::CurrencyConversionJSON(const CurrencyConversionJSON &)
  {
    assert(false);
  }

CurrencyConversionJSON &CurrencyConversionJSON::operator=(const CurrencyConversionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrencyConversionJSON::fromJSONInputValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InputValue of CurrencyConversionJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field InputValue of CurrencyConversionJSON has too few elements.");
    std::vector< MoneyJSON * > vector_InputValue1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MoneyJSON *convert_classy = MoneyJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_InputValue1[num1] = convert_classy;
      }
    assert(vector_InputValue1.size() >= 1);
    initInputValue();
    for (size_t num3 = 0; num3 < vector_InputValue1.size(); ++num3)
        appendInputValue(vector_InputValue1[num3]);
    for (size_t num1 = 0; num1 < vector_InputValue1.size(); ++num1)
      {
        vector_InputValue1[num1]->remove_reference();
      }
  }

void CurrencyConversionJSON::fromJSONOutputValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OutputValue of CurrencyConversionJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field OutputValue of CurrencyConversionJSON has too few elements.");
    std::vector< TypeOutputValueJSON * > vector_OutputValue1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeOutputValueJSON *convert_classy = TypeOutputValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_OutputValue1[num1] = convert_classy;
      }
    assert(vector_OutputValue1.size() >= 1);
    initOutputValue();
    for (size_t num4 = 0; num4 < vector_OutputValue1.size(); ++num4)
        appendOutputValue(vector_OutputValue1[num4]);
    for (size_t num1 = 0; num1 < vector_OutputValue1.size(); ++num1)
      {
        vector_OutputValue1[num1]->remove_reference();
      }
  }

CurrencyConversionJSON::CurrencyConversionJSON(void) :
        flagHasInputValue(false),
        flagHasOutputValue(false)
  {
  }

CurrencyConversionJSON::~CurrencyConversionJSON(void)
  {
    if (flagHasInputValue)
      {
        for (size_t num7 = 0; num7 < storeInputValue.size(); ++num7)
          {
            storeInputValue[num7]->remove_reference();
          }
      }
    if (flagHasOutputValue)
      {
        for (size_t num8 = 0; num8 < storeOutputValue.size(); ++num8)
          {
            storeOutputValue[num8]->remove_reference();
          }
      }
  }

bool CurrencyConversionJSON::hasInputValue(void) const
  {
    return flagHasInputValue;
  }

size_t CurrencyConversionJSON::countOfInputValue(void) const
  {
    assert(flagHasInputValue);
    return storeInputValue.size();
  }

MoneyJSON * CurrencyConversionJSON::elementOfInputValue(size_t element_num)
  {
    assert(flagHasInputValue);
    return storeInputValue[element_num];
  }

const MoneyJSON * CurrencyConversionJSON::elementOfInputValue(size_t element_num) const
  {
    assert(flagHasInputValue);
    return storeInputValue[element_num];
  }

std::vector< MoneyJSON * > CurrencyConversionJSON::getInputValue(void)
  {
    assert(flagHasInputValue);
    return storeInputValue;
  }

const std::vector< MoneyJSON * > CurrencyConversionJSON::getInputValue(void) const
  {
    assert(flagHasInputValue);
    return storeInputValue;
  }

bool CurrencyConversionJSON::hasOutputValue(void) const
  {
    return flagHasOutputValue;
  }

size_t CurrencyConversionJSON::countOfOutputValue(void) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue.size();
  }

CurrencyConversionJSON::TypeOutputValueJSON * CurrencyConversionJSON::elementOfOutputValue(size_t element_num)
  {
    assert(flagHasOutputValue);
    return storeOutputValue[element_num];
  }

const CurrencyConversionJSON::TypeOutputValueJSON * CurrencyConversionJSON::elementOfOutputValue(size_t element_num) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue[element_num];
  }

std::vector< CurrencyConversionJSON::TypeOutputValueJSON * > CurrencyConversionJSON::getOutputValue(void)
  {
    assert(flagHasOutputValue);
    return storeOutputValue;
  }

const std::vector< CurrencyConversionJSON::TypeOutputValueJSON * > CurrencyConversionJSON::getOutputValue(void) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue;
  }

CurrencyConversionJSON::TypeOutputValueJSON *CurrencyConversionJSON::TypeOutputValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeOutputValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeOutputValueJSON>, TypeOutputValueJSON *, bool> generator("Type TypeOutputValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
CurrencyConversionJSON *CurrencyConversionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CurrencyConversionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CurrencyConversionJSON>, CurrencyConversionJSON *, bool> generator("Type CurrencyConversion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
