/* file "WhatsInDrinkInterQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhatsInDrinkInterQueryStateJSON.h"

#include "WhatsInDrinkInterQueryStateJSON.h"


WhatsInDrinkInterQueryStateJSON::WhatsInDrinkInterQueryStateJSON(const WhatsInDrinkInterQueryStateJSON &)
  {
    assert(false);
  }

WhatsInDrinkInterQueryStateJSON &WhatsInDrinkInterQueryStateJSON::operator=(const WhatsInDrinkInterQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WhatsInDrinkInterQueryStateJSON::fromJSONDrinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Drinks of WhatsInDrinkInterQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Drinks of WhatsInDrinkInterQueryStateJSON has too few elements.");
    std::vector< std::string > vector_Drinks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Drinks of WhatsInDrinkInterQueryStateJSON is not a string.");
        vector_Drinks1[num1] = std::string(json_string->getData());
      }
    assert(vector_Drinks1.size() >= 1);
    initDrinks();
    for (size_t num2 = 0; num2 < vector_Drinks1.size(); ++num2)
        appendDrinks(vector_Drinks1[num2]);
    for (size_t num1 = 0; num1 < vector_Drinks1.size(); ++num1)
      {
      }
  }

WhatsInDrinkInterQueryStateJSON::WhatsInDrinkInterQueryStateJSON(void) :
        flagHasDrinks(false)
  {
    extraIndex = create_string_index();
  }

WhatsInDrinkInterQueryStateJSON::~WhatsInDrinkInterQueryStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WhatsInDrinkInterQueryStateJSON::hasDrinks(void) const
  {
    return flagHasDrinks;
  }

size_t WhatsInDrinkInterQueryStateJSON::countOfDrinks(void) const
  {
    assert(flagHasDrinks);
    return storeDrinks.size();
  }

std::string WhatsInDrinkInterQueryStateJSON::elementOfDrinks(size_t element_num)
  {
    assert(flagHasDrinks);
    return storeDrinks[element_num];
  }

const std::string WhatsInDrinkInterQueryStateJSON::elementOfDrinks(size_t element_num) const
  {
    assert(flagHasDrinks);
    return storeDrinks[element_num];
  }

std::vector< std::string > WhatsInDrinkInterQueryStateJSON::getDrinks(void)
  {
    assert(flagHasDrinks);
    return storeDrinks;
  }

const std::vector< std::string > WhatsInDrinkInterQueryStateJSON::getDrinks(void) const
  {
    assert(flagHasDrinks);
    return storeDrinks;
  }

WhatsInDrinkInterQueryStateJSON *WhatsInDrinkInterQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhatsInDrinkInterQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhatsInDrinkInterQueryStateJSON>, WhatsInDrinkInterQueryStateJSON *, bool> generator("Type WhatsInDrinkInterQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
