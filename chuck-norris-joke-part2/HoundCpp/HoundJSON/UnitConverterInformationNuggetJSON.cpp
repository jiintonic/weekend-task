/* file "UnitConverterInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitConverterInformationNuggetJSON.h"

#include "UnitConverterInformationNuggetJSON.h"


UnitConverterInformationNuggetJSON::UnitConverterInformationNuggetJSON(const UnitConverterInformationNuggetJSON &)
  {
    assert(false);
  }

UnitConverterInformationNuggetJSON &UnitConverterInformationNuggetJSON::operator=(const UnitConverterInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UnitConverterInformationNuggetJSON::extraConversionsToJSON(void) const
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

JSONValue *UnitConverterInformationNuggetJSON::extraErrorsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Errors = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeErrors.size(); ++num2)
      {
        JSONValueHandler handler_Errors;
        storeErrors[num2]->write_as_json(&handler_Errors);
        handler_Errors.result->add_reference();
        generated_array_2_Errors->appendComponent(handler_Errors.result);
        handler_Errors.result->remove_reference();
      }
    return generated_array_2_Errors;
  }

void UnitConverterInformationNuggetJSON::fromJSONConversions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Conversions of UnitConverterInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UnitConversionJSON * > vector_Conversions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnitConversionJSON *convert_classy = UnitConversionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Conversions1[num1] = convert_classy;
      }
    initConversions();
    for (size_t num3 = 0; num3 < vector_Conversions1.size(); ++num3)
        appendConversions(vector_Conversions1[num3]);
    for (size_t num1 = 0; num1 < vector_Conversions1.size(); ++num1)
      {
        vector_Conversions1[num1]->remove_reference();
      }
  }

void UnitConverterInformationNuggetJSON::fromJSONErrors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Errors of UnitConverterInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Errors of UnitConverterInformationNuggetJSON has too few elements.");
    std::vector< UnitConversionErrorJSON * > vector_Errors1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnitConversionErrorJSON *convert_classy = UnitConversionErrorJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Errors1[num1] = convert_classy;
      }
    assert(vector_Errors1.size() >= 1);
    initErrors();
    for (size_t num4 = 0; num4 < vector_Errors1.size(); ++num4)
        appendErrors(vector_Errors1[num4]);
    for (size_t num1 = 0; num1 < vector_Errors1.size(); ++num1)
      {
        vector_Errors1[num1]->remove_reference();
      }
  }

UnitConverterInformationNuggetJSON::UnitConverterInformationNuggetJSON(void) :
        flagHasConversions(false),
        flagHasErrors(false)
  {
  }

UnitConverterInformationNuggetJSON::~UnitConverterInformationNuggetJSON(void)
  {
    if (flagHasConversions)
      {
        for (size_t num7 = 0; num7 < storeConversions.size(); ++num7)
          {
            storeConversions[num7]->remove_reference();
          }
      }
    if (flagHasErrors)
      {
        for (size_t num8 = 0; num8 < storeErrors.size(); ++num8)
          {
            storeErrors[num8]->remove_reference();
          }
      }
  }

const char *UnitConverterInformationNuggetJSON::getNuggetKind(void) const
  {
    return "UnitConverter";
  }

bool UnitConverterInformationNuggetJSON::hasConversions(void) const
  {
    return flagHasConversions;
  }

size_t UnitConverterInformationNuggetJSON::countOfConversions(void) const
  {
    assert(flagHasConversions);
    return storeConversions.size();
  }

UnitConversionJSON * UnitConverterInformationNuggetJSON::elementOfConversions(size_t element_num)
  {
    assert(flagHasConversions);
    return storeConversions[element_num];
  }

const UnitConversionJSON * UnitConverterInformationNuggetJSON::elementOfConversions(size_t element_num) const
  {
    assert(flagHasConversions);
    return storeConversions[element_num];
  }

std::vector< UnitConversionJSON * > UnitConverterInformationNuggetJSON::getConversions(void)
  {
    assert(flagHasConversions);
    return storeConversions;
  }

const std::vector< UnitConversionJSON * > UnitConverterInformationNuggetJSON::getConversions(void) const
  {
    assert(flagHasConversions);
    return storeConversions;
  }

bool UnitConverterInformationNuggetJSON::hasErrors(void) const
  {
    return flagHasErrors;
  }

size_t UnitConverterInformationNuggetJSON::countOfErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors.size();
  }

UnitConversionErrorJSON * UnitConverterInformationNuggetJSON::elementOfErrors(size_t element_num)
  {
    assert(flagHasErrors);
    return storeErrors[element_num];
  }

const UnitConversionErrorJSON * UnitConverterInformationNuggetJSON::elementOfErrors(size_t element_num) const
  {
    assert(flagHasErrors);
    return storeErrors[element_num];
  }

std::vector< UnitConversionErrorJSON * > UnitConverterInformationNuggetJSON::getErrors(void)
  {
    assert(flagHasErrors);
    return storeErrors;
  }

const std::vector< UnitConversionErrorJSON * > UnitConverterInformationNuggetJSON::getErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors;
  }

UnitConverterInformationNuggetJSON *UnitConverterInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitConverterInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitConverterInformationNuggetJSON>, UnitConverterInformationNuggetJSON *, bool> generator("Type UnitConverterInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
