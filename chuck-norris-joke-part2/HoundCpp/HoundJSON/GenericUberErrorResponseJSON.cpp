/* file "GenericUberErrorResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GenericUberErrorResponseJSON.h"

#include "GenericUberErrorResponseJSON.h"


GenericUberErrorResponseJSON::GenericUberErrorResponseJSON(const GenericUberErrorResponseJSON &)
  {
    assert(false);
  }

GenericUberErrorResponseJSON &GenericUberErrorResponseJSON::operator=(const GenericUberErrorResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GenericUberErrorResponseJSON::fromJSONerrors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field errors of GenericUberErrorResponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field errors of GenericUberErrorResponseJSON has too few elements.");
    std::vector< GenericUberErrorJSON * > vector_errors1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        GenericUberErrorJSON *convert_classy = GenericUberErrorJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_errors1[num1] = convert_classy;
      }
    assert(vector_errors1.size() >= 1);
    initerrors();
    for (size_t num2 = 0; num2 < vector_errors1.size(); ++num2)
        appenderrors(vector_errors1[num2]);
    for (size_t num1 = 0; num1 < vector_errors1.size(); ++num1)
      {
        vector_errors1[num1]->remove_reference();
      }
  }

GenericUberErrorResponseJSON::GenericUberErrorResponseJSON(void) :
        flagHaserrors(false)
  {
    extraIndex = create_string_index();
  }

GenericUberErrorResponseJSON::~GenericUberErrorResponseJSON(void)
  {
    if (flagHaserrors)
      {
        for (size_t num4 = 0; num4 < storeerrors.size(); ++num4)
          {
            storeerrors[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GenericUberErrorResponseJSON::haserrors(void) const
  {
    return flagHaserrors;
  }

size_t GenericUberErrorResponseJSON::countOferrors(void) const
  {
    assert(flagHaserrors);
    return storeerrors.size();
  }

GenericUberErrorJSON * GenericUberErrorResponseJSON::elementOferrors(size_t element_num)
  {
    assert(flagHaserrors);
    return storeerrors[element_num];
  }

const GenericUberErrorJSON * GenericUberErrorResponseJSON::elementOferrors(size_t element_num) const
  {
    assert(flagHaserrors);
    return storeerrors[element_num];
  }

std::vector< GenericUberErrorJSON * > GenericUberErrorResponseJSON::geterrors(void)
  {
    assert(flagHaserrors);
    return storeerrors;
  }

const std::vector< GenericUberErrorJSON * > GenericUberErrorResponseJSON::geterrors(void) const
  {
    assert(flagHaserrors);
    return storeerrors;
  }

GenericUberErrorResponseJSON *GenericUberErrorResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GenericUberErrorResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GenericUberErrorResponseJSON>, GenericUberErrorResponseJSON *, bool> generator("Type GenericUberErrorResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
