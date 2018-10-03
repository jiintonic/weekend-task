/* file "BaseConverterInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BaseConverterInformationNuggetJSON.h"

#include "BaseConverterInformationNuggetJSON.h"


BaseConverterInformationNuggetJSON::BaseConverterInformationNuggetJSON(const BaseConverterInformationNuggetJSON &)
  {
    assert(false);
  }

BaseConverterInformationNuggetJSON &BaseConverterInformationNuggetJSON::operator=(const BaseConverterInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BaseConverterInformationNuggetJSON::extraConversionRowsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_ConversionRows = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeConversionRows.size(); ++num1)
      {
        JSONValueHandler handler_ConversionRows;
        storeConversionRows[num1]->write_as_json(&handler_ConversionRows);
        handler_ConversionRows.result->add_reference();
        generated_array_1_ConversionRows->appendComponent(handler_ConversionRows.result);
        handler_ConversionRows.result->remove_reference();
      }
    return generated_array_1_ConversionRows;
  }

JSONValue *BaseConverterInformationNuggetJSON::extraErrorMessageToJSON(void) const
  {
    JSONStringValue *generated_string_ErrorMessage = new JSONStringValue(storeErrorMessage.c_str());
    return generated_string_ErrorMessage;
  }

void BaseConverterInformationNuggetJSON::fromJSONConversionRows(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ConversionRows of BaseConverterInformationNuggetJSON is not an array.");
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

void BaseConverterInformationNuggetJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of BaseConverterInformationNuggetJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

BaseConverterInformationNuggetJSON::BaseConverterInformationNuggetJSON(void) :
        flagHasConversionRows(false),
        flagHasErrorMessage(false)
  {
    extraIndex = create_string_index();
  }

BaseConverterInformationNuggetJSON::~BaseConverterInformationNuggetJSON(void)
  {
    if (flagHasConversionRows)
      {
        for (size_t num4 = 0; num4 < storeConversionRows.size(); ++num4)
          {
            storeConversionRows[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BaseConverterInformationNuggetJSON::getNuggetKind(void) const
  {
    return "BaseConverter";
  }

bool BaseConverterInformationNuggetJSON::hasConversionRows(void) const
  {
    return flagHasConversionRows;
  }

size_t BaseConverterInformationNuggetJSON::countOfConversionRows(void) const
  {
    assert(flagHasConversionRows);
    return storeConversionRows.size();
  }

ConversionRowJSON * BaseConverterInformationNuggetJSON::elementOfConversionRows(size_t element_num)
  {
    assert(flagHasConversionRows);
    return storeConversionRows[element_num];
  }

const ConversionRowJSON * BaseConverterInformationNuggetJSON::elementOfConversionRows(size_t element_num) const
  {
    assert(flagHasConversionRows);
    return storeConversionRows[element_num];
  }

std::vector< ConversionRowJSON * > BaseConverterInformationNuggetJSON::getConversionRows(void)
  {
    assert(flagHasConversionRows);
    return storeConversionRows;
  }

const std::vector< ConversionRowJSON * > BaseConverterInformationNuggetJSON::getConversionRows(void) const
  {
    assert(flagHasConversionRows);
    return storeConversionRows;
  }

bool BaseConverterInformationNuggetJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string BaseConverterInformationNuggetJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string BaseConverterInformationNuggetJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

BaseConverterInformationNuggetJSON *BaseConverterInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BaseConverterInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BaseConverterInformationNuggetJSON>, BaseConverterInformationNuggetJSON *, bool> generator("Type BaseConverterInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
