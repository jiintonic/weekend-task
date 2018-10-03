/* file "UnitConverterQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitConverterQueryStateJSON.h"

#include "UnitConverterQueryStateJSON.h"


UnitConverterQueryStateJSON::TypeUnitConverterCommandKind UnitConverterQueryStateJSON::stringToUnitConverterCommandKind(const char *chars)
  {
    if (strcmp(chars, "UnitConverterCommand") == 0)
        return UnitConverterCommandKind_UnitConverterCommand;
    throw("The value for field `UnitConverterCommandKind' is not one of the legal values.");
  }

const char *UnitConverterQueryStateJSON::stringFromUnitConverterCommandKind(TypeUnitConverterCommandKind the_enum)
  {
    switch (the_enum)
      {
        case UnitConverterCommandKind_UnitConverterCommand:
            return "UnitConverterCommand";
        default:
            assert(false);
            return NULL;
      }
  }

UnitConverterQueryStateJSON::UnitConverterQueryStateJSON(const UnitConverterQueryStateJSON &)
  {
    assert(false);
  }

UnitConverterQueryStateJSON &UnitConverterQueryStateJSON::operator=(const UnitConverterQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitConverterQueryStateJSON::fromJSONUnitConverterCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitConverterCommandKind of UnitConverterQueryStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "UnitConverterCommand") == 0))
        throw("The value for field UnitConverterCommandKind of UnitConverterQueryStateJSON is not `UnitConverterCommand'.");
    setUnitConverterCommandKind();
  }

void UnitConverterQueryStateJSON::fromJSONInputValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InputValue of UnitConverterQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MeasuredAmountJSON * > vector_InputValue1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MeasuredAmountJSON *convert_classy = MeasuredAmountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_InputValue1[num1] = convert_classy;
      }
    initInputValue();
    for (size_t num3 = 0; num3 < vector_InputValue1.size(); ++num3)
        appendInputValue(vector_InputValue1[num3]);
    for (size_t num1 = 0; num1 < vector_InputValue1.size(); ++num1)
      {
        vector_InputValue1[num1]->remove_reference();
      }
  }

void UnitConverterQueryStateJSON::fromJSONOutputValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OutputValue of UnitConverterQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MeasuredAmountJSON * > vector_OutputValue1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MeasuredAmountJSON *convert_classy = MeasuredAmountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_OutputValue1[num1] = convert_classy;
      }
    initOutputValue();
    for (size_t num4 = 0; num4 < vector_OutputValue1.size(); ++num4)
        appendOutputValue(vector_OutputValue1[num4]);
    for (size_t num1 = 0; num1 < vector_OutputValue1.size(); ++num1)
      {
        vector_OutputValue1[num1]->remove_reference();
      }
  }

UnitConverterQueryStateJSON::UnitConverterQueryStateJSON(void) :
        flagHasUnitConverterCommandKind(false),
        flagHasInputValue(false),
        flagHasOutputValue(false)
  {
    extraIndex = create_string_index();
  }

UnitConverterQueryStateJSON::~UnitConverterQueryStateJSON(void)
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
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitConverterQueryStateJSON::hasUnitConverterCommandKind(void) const
  {
    return flagHasUnitConverterCommandKind;
  }

UnitConverterQueryStateJSON::TypeUnitConverterCommandKind UnitConverterQueryStateJSON::getUnitConverterCommandKind(void)
  {
    assert(flagHasUnitConverterCommandKind);
    return UnitConverterCommandKind_UnitConverterCommand;
  }

const UnitConverterQueryStateJSON::TypeUnitConverterCommandKind UnitConverterQueryStateJSON::getUnitConverterCommandKind(void) const
  {
    assert(flagHasUnitConverterCommandKind);
    return UnitConverterCommandKind_UnitConverterCommand;
  }

const char *UnitConverterQueryStateJSON::getUnitConverterCommandKindAsChars(void) const
  {
    return stringFromUnitConverterCommandKind(getUnitConverterCommandKind());
  }

std::string UnitConverterQueryStateJSON::getUnitConverterCommandKindAsString(void) const
  {
    return stringFromUnitConverterCommandKind(getUnitConverterCommandKind());
  }

bool UnitConverterQueryStateJSON::hasInputValue(void) const
  {
    return flagHasInputValue;
  }

size_t UnitConverterQueryStateJSON::countOfInputValue(void) const
  {
    assert(flagHasInputValue);
    return storeInputValue.size();
  }

MeasuredAmountJSON * UnitConverterQueryStateJSON::elementOfInputValue(size_t element_num)
  {
    assert(flagHasInputValue);
    return storeInputValue[element_num];
  }

const MeasuredAmountJSON * UnitConverterQueryStateJSON::elementOfInputValue(size_t element_num) const
  {
    assert(flagHasInputValue);
    return storeInputValue[element_num];
  }

std::vector< MeasuredAmountJSON * > UnitConverterQueryStateJSON::getInputValue(void)
  {
    assert(flagHasInputValue);
    return storeInputValue;
  }

const std::vector< MeasuredAmountJSON * > UnitConverterQueryStateJSON::getInputValue(void) const
  {
    assert(flagHasInputValue);
    return storeInputValue;
  }

bool UnitConverterQueryStateJSON::hasOutputValue(void) const
  {
    return flagHasOutputValue;
  }

size_t UnitConverterQueryStateJSON::countOfOutputValue(void) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue.size();
  }

MeasuredAmountJSON * UnitConverterQueryStateJSON::elementOfOutputValue(size_t element_num)
  {
    assert(flagHasOutputValue);
    return storeOutputValue[element_num];
  }

const MeasuredAmountJSON * UnitConverterQueryStateJSON::elementOfOutputValue(size_t element_num) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue[element_num];
  }

std::vector< MeasuredAmountJSON * > UnitConverterQueryStateJSON::getOutputValue(void)
  {
    assert(flagHasOutputValue);
    return storeOutputValue;
  }

const std::vector< MeasuredAmountJSON * > UnitConverterQueryStateJSON::getOutputValue(void) const
  {
    assert(flagHasOutputValue);
    return storeOutputValue;
  }

UnitConverterQueryStateJSON *UnitConverterQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitConverterQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitConverterQueryStateJSON>, UnitConverterQueryStateJSON *, bool> generator("Type UnitConverterQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
