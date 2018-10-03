/* file "BaseConverterCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BaseConverterCommandJSON.h"

#include "BaseConverterCommandJSON.h"


BaseConverterCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

BaseConverterCommandJSON::TypeNativeDataJSON &BaseConverterCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BaseConverterCommandJSON::TypeNativeDataJSON::fromJSONConversionRows(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ConversionRows of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< ConversionRowJSON * > vector_ConversionRows1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ConversionRowJSON *convert_classy = ConversionRowJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ConversionRows1[num1] = convert_classy;
      }
    initConversionRows();
    for (size_t num2 = 0; num2 < vector_ConversionRows1.size(); ++num2)
        appendConversionRows(vector_ConversionRows1[num2]);
    for (size_t num1 = 0; num1 < vector_ConversionRows1.size(); ++num1)
      {
        vector_ConversionRows1[num1]->remove_reference();
      }
  }

void BaseConverterCommandJSON::TypeNativeDataJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of TypeNativeDataJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

BaseConverterCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasConversionRows(false),
        flagHasErrorMessage(false)
  {
  }

BaseConverterCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasConversionRows)
      {
        for (size_t num4 = 0; num4 < storeConversionRows.size(); ++num4)
          {
            storeConversionRows[num4]->remove_reference();
          }
      }
  }

bool BaseConverterCommandJSON::TypeNativeDataJSON::hasConversionRows(void) const
  {
    return flagHasConversionRows;
  }

size_t BaseConverterCommandJSON::TypeNativeDataJSON::countOfConversionRows(void) const
  {
    assert(flagHasConversionRows);
    return storeConversionRows.size();
  }

ConversionRowJSON * BaseConverterCommandJSON::TypeNativeDataJSON::elementOfConversionRows(size_t element_num)
  {
    assert(flagHasConversionRows);
    return storeConversionRows[element_num];
  }

const ConversionRowJSON * BaseConverterCommandJSON::TypeNativeDataJSON::elementOfConversionRows(size_t element_num) const
  {
    assert(flagHasConversionRows);
    return storeConversionRows[element_num];
  }

std::vector< ConversionRowJSON * > BaseConverterCommandJSON::TypeNativeDataJSON::getConversionRows(void)
  {
    assert(flagHasConversionRows);
    return storeConversionRows;
  }

const std::vector< ConversionRowJSON * > BaseConverterCommandJSON::TypeNativeDataJSON::getConversionRows(void) const
  {
    assert(flagHasConversionRows);
    return storeConversionRows;
  }

bool BaseConverterCommandJSON::TypeNativeDataJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string BaseConverterCommandJSON::TypeNativeDataJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string BaseConverterCommandJSON::TypeNativeDataJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

BaseConverterCommandJSON::BaseConverterCommandJSON(const BaseConverterCommandJSON &)
  {
    assert(false);
  }

BaseConverterCommandJSON &BaseConverterCommandJSON::operator=(const BaseConverterCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BaseConverterCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void BaseConverterCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

BaseConverterCommandJSON::BaseConverterCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

BaseConverterCommandJSON::~BaseConverterCommandJSON(void)
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

const char *BaseConverterCommandJSON::getCommandKind(void) const
  {
    return "BaseConverterCommand";
  }

bool BaseConverterCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

BaseConverterCommandJSON::TypeNativeDataJSON * BaseConverterCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const BaseConverterCommandJSON::TypeNativeDataJSON * BaseConverterCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

BaseConverterCommandJSON::TypeNativeDataJSON *BaseConverterCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
BaseConverterCommandJSON *BaseConverterCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BaseConverterCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BaseConverterCommandJSON>, BaseConverterCommandJSON *, bool> generator("Type BaseConverterCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
