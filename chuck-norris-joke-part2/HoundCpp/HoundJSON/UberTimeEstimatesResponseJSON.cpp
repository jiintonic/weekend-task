/* file "UberTimeEstimatesResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberTimeEstimatesResponseJSON.h"

#include "UberTimeEstimatesResponseJSON.h"


UberTimeEstimatesResponseJSON::UberTimeEstimatesResponseJSON(const UberTimeEstimatesResponseJSON &)
  {
    assert(false);
  }

UberTimeEstimatesResponseJSON &UberTimeEstimatesResponseJSON::operator=(const UberTimeEstimatesResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberTimeEstimatesResponseJSON::fromJSONtimes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field times of UberTimeEstimatesResponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UberTimeEstimateDetailsJSON * > vector_times1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UberTimeEstimateDetailsJSON *convert_classy = UberTimeEstimateDetailsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_times1[num1] = convert_classy;
      }
    inittimes();
    for (size_t num2 = 0; num2 < vector_times1.size(); ++num2)
        appendtimes(vector_times1[num2]);
    for (size_t num1 = 0; num1 < vector_times1.size(); ++num1)
      {
        vector_times1[num1]->remove_reference();
      }
  }

UberTimeEstimatesResponseJSON::UberTimeEstimatesResponseJSON(void) :
        flagHastimes(false)
  {
    extraIndex = create_string_index();
  }

UberTimeEstimatesResponseJSON::~UberTimeEstimatesResponseJSON(void)
  {
    if (flagHastimes)
      {
        for (size_t num4 = 0; num4 < storetimes.size(); ++num4)
          {
            storetimes[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberTimeEstimatesResponseJSON::hastimes(void) const
  {
    return flagHastimes;
  }

size_t UberTimeEstimatesResponseJSON::countOftimes(void) const
  {
    assert(flagHastimes);
    return storetimes.size();
  }

UberTimeEstimateDetailsJSON * UberTimeEstimatesResponseJSON::elementOftimes(size_t element_num)
  {
    assert(flagHastimes);
    return storetimes[element_num];
  }

const UberTimeEstimateDetailsJSON * UberTimeEstimatesResponseJSON::elementOftimes(size_t element_num) const
  {
    assert(flagHastimes);
    return storetimes[element_num];
  }

std::vector< UberTimeEstimateDetailsJSON * > UberTimeEstimatesResponseJSON::gettimes(void)
  {
    assert(flagHastimes);
    return storetimes;
  }

const std::vector< UberTimeEstimateDetailsJSON * > UberTimeEstimatesResponseJSON::gettimes(void) const
  {
    assert(flagHastimes);
    return storetimes;
  }

UberTimeEstimatesResponseJSON *UberTimeEstimatesResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberTimeEstimatesResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberTimeEstimatesResponseJSON>, UberTimeEstimatesResponseJSON *, bool> generator("Type UberTimeEstimatesResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
