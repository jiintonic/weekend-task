/* file "CurrencyConverterCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CurrencyConverterCommandJSON.h"

#include "CurrencyConverterCommandJSON.h"


CurrencyConverterCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

CurrencyConverterCommandJSON::TypeNativeDataJSON &CurrencyConverterCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrencyConverterCommandJSON::TypeNativeDataJSON::fromJSONConversions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Conversions of TypeNativeDataJSON is not an array.");
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

CurrencyConverterCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasConversions(false)
  {
  }

CurrencyConverterCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasConversions)
      {
        for (size_t num4 = 0; num4 < storeConversions.size(); ++num4)
          {
            storeConversions[num4]->remove_reference();
          }
      }
  }

bool CurrencyConverterCommandJSON::TypeNativeDataJSON::hasConversions(void) const
  {
    return flagHasConversions;
  }

size_t CurrencyConverterCommandJSON::TypeNativeDataJSON::countOfConversions(void) const
  {
    assert(flagHasConversions);
    return storeConversions.size();
  }

CurrencyConversionJSON * CurrencyConverterCommandJSON::TypeNativeDataJSON::elementOfConversions(size_t element_num)
  {
    assert(flagHasConversions);
    return storeConversions[element_num];
  }

const CurrencyConversionJSON * CurrencyConverterCommandJSON::TypeNativeDataJSON::elementOfConversions(size_t element_num) const
  {
    assert(flagHasConversions);
    return storeConversions[element_num];
  }

std::vector< CurrencyConversionJSON * > CurrencyConverterCommandJSON::TypeNativeDataJSON::getConversions(void)
  {
    assert(flagHasConversions);
    return storeConversions;
  }

const std::vector< CurrencyConversionJSON * > CurrencyConverterCommandJSON::TypeNativeDataJSON::getConversions(void) const
  {
    assert(flagHasConversions);
    return storeConversions;
  }

CurrencyConverterCommandJSON::CurrencyConverterCommandJSON(const CurrencyConverterCommandJSON &)
  {
    assert(false);
  }

CurrencyConverterCommandJSON &CurrencyConverterCommandJSON::operator=(const CurrencyConverterCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CurrencyConverterCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void CurrencyConverterCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

CurrencyConverterCommandJSON::CurrencyConverterCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

CurrencyConverterCommandJSON::~CurrencyConverterCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CurrencyConverterCommandJSON::getCommandKind(void) const
  {
    return "CurrencyConverterCommand";
  }

bool CurrencyConverterCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

CurrencyConverterCommandJSON::TypeNativeDataJSON * CurrencyConverterCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const CurrencyConverterCommandJSON::TypeNativeDataJSON * CurrencyConverterCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

CurrencyConverterCommandJSON::TypeNativeDataJSON *CurrencyConverterCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
CurrencyConverterCommandJSON *CurrencyConverterCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CurrencyConverterCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CurrencyConverterCommandJSON>, CurrencyConverterCommandJSON *, bool> generator("Type CurrencyConverterCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
