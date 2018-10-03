/* file "UberPriceEstimatesResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberPriceEstimatesResponseJSON.h"

#include "UberPriceEstimatesResponseJSON.h"


UberPriceEstimatesResponseJSON::UberPriceEstimatesResponseJSON(const UberPriceEstimatesResponseJSON &)
  {
    assert(false);
  }

UberPriceEstimatesResponseJSON &UberPriceEstimatesResponseJSON::operator=(const UberPriceEstimatesResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberPriceEstimatesResponseJSON::fromJSONprices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field prices of UberPriceEstimatesResponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UberPriceEstimateDetailsJSON * > vector_prices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UberPriceEstimateDetailsJSON *convert_classy = UberPriceEstimateDetailsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_prices1[num1] = convert_classy;
      }
    initprices();
    for (size_t num2 = 0; num2 < vector_prices1.size(); ++num2)
        appendprices(vector_prices1[num2]);
    for (size_t num1 = 0; num1 < vector_prices1.size(); ++num1)
      {
        vector_prices1[num1]->remove_reference();
      }
  }

UberPriceEstimatesResponseJSON::UberPriceEstimatesResponseJSON(void) :
        flagHasprices(false)
  {
    extraIndex = create_string_index();
  }

UberPriceEstimatesResponseJSON::~UberPriceEstimatesResponseJSON(void)
  {
    if (flagHasprices)
      {
        for (size_t num4 = 0; num4 < storeprices.size(); ++num4)
          {
            storeprices[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberPriceEstimatesResponseJSON::hasprices(void) const
  {
    return flagHasprices;
  }

size_t UberPriceEstimatesResponseJSON::countOfprices(void) const
  {
    assert(flagHasprices);
    return storeprices.size();
  }

UberPriceEstimateDetailsJSON * UberPriceEstimatesResponseJSON::elementOfprices(size_t element_num)
  {
    assert(flagHasprices);
    return storeprices[element_num];
  }

const UberPriceEstimateDetailsJSON * UberPriceEstimatesResponseJSON::elementOfprices(size_t element_num) const
  {
    assert(flagHasprices);
    return storeprices[element_num];
  }

std::vector< UberPriceEstimateDetailsJSON * > UberPriceEstimatesResponseJSON::getprices(void)
  {
    assert(flagHasprices);
    return storeprices;
  }

const std::vector< UberPriceEstimateDetailsJSON * > UberPriceEstimatesResponseJSON::getprices(void) const
  {
    assert(flagHasprices);
    return storeprices;
  }

UberPriceEstimatesResponseJSON *UberPriceEstimatesResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberPriceEstimatesResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberPriceEstimatesResponseJSON>, UberPriceEstimatesResponseJSON *, bool> generator("Type UberPriceEstimatesResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
