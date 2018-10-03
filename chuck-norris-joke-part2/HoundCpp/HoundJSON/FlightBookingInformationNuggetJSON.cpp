/* file "FlightBookingInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightBookingInformationNuggetJSON.h"

#include "FlightBookingInformationNuggetJSON.h"


FlightBookingInformationNuggetJSON::FlightBookingInformationNuggetJSON(const FlightBookingInformationNuggetJSON &)
  {
    assert(false);
  }

FlightBookingInformationNuggetJSON &FlightBookingInformationNuggetJSON::operator=(const FlightBookingInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FlightBookingInformationNuggetJSON::extraFlightBookingSearchSpecToJSON(void) const
  {
    JSONValueHandler handler_FlightBookingSearchSpec;
    storeFlightBookingSearchSpec->write_as_json(&handler_FlightBookingSearchSpec);
    handler_FlightBookingSearchSpec.result->add_reference();
    return handler_FlightBookingSearchSpec.result;
  }

JSONValue *FlightBookingInformationNuggetJSON::extraCurrentDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_CurrentDateAndTime;
    storeCurrentDateAndTime->write_as_json(&handler_CurrentDateAndTime);
    handler_CurrentDateAndTime.result->add_reference();
    return handler_CurrentDateAndTime.result;
  }

JSONValue *FlightBookingInformationNuggetJSON::extraFlightProductsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_FlightProducts = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeFlightProducts.size(); ++num1)
      {
        JSONValueHandler handler_FlightProducts;
        storeFlightProducts[num1]->write_as_json(&handler_FlightProducts);
        handler_FlightProducts.result->add_reference();
        generated_array_1_FlightProducts->appendComponent(handler_FlightProducts.result);
        handler_FlightProducts.result->remove_reference();
      }
    return generated_array_1_FlightProducts;
  }

JSONValue *FlightBookingInformationNuggetJSON::extraFlightSegmentsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_FlightSegments = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeFlightSegments.size(); ++num2)
      {
        JSONValueHandler handler_FlightSegments;
        storeFlightSegments[num2]->write_as_json(&handler_FlightSegments);
        handler_FlightSegments.result->add_reference();
        generated_array_2_FlightSegments->appendComponent(handler_FlightSegments.result);
        handler_FlightSegments.result->remove_reference();
      }
    return generated_array_2_FlightSegments;
  }

void FlightBookingInformationNuggetJSON::fromJSONFlightBookingSearchSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightBookingSearchSpecJSON *convert_classy = FlightBookingSearchSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightBookingSearchSpec(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingInformationNuggetJSON::fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingInformationNuggetJSON::fromJSONFlightProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightProducts of FlightBookingInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightProductJSON * > vector_FlightProducts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightProductJSON *convert_classy = FlightProductJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightProducts1[num1] = convert_classy;
      }
    initFlightProducts();
    for (size_t num3 = 0; num3 < vector_FlightProducts1.size(); ++num3)
        appendFlightProducts(vector_FlightProducts1[num3]);
    for (size_t num1 = 0; num1 < vector_FlightProducts1.size(); ++num1)
      {
        vector_FlightProducts1[num1]->remove_reference();
      }
  }

void FlightBookingInformationNuggetJSON::fromJSONFlightSegments(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightSegments of FlightBookingInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightSegmentJSON * > vector_FlightSegments1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSegmentJSON *convert_classy = FlightSegmentJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightSegments1[num1] = convert_classy;
      }
    initFlightSegments();
    for (size_t num4 = 0; num4 < vector_FlightSegments1.size(); ++num4)
        appendFlightSegments(vector_FlightSegments1[num4]);
    for (size_t num1 = 0; num1 < vector_FlightSegments1.size(); ++num1)
      {
        vector_FlightSegments1[num1]->remove_reference();
      }
  }

FlightBookingInformationNuggetJSON::FlightBookingInformationNuggetJSON(void) :
        flagHasFlightBookingSearchSpec(false),
        flagHasCurrentDateAndTime(false),
        flagHasFlightProducts(false),
        flagHasFlightSegments(false)
  {
    extraIndex = create_string_index();
  }

FlightBookingInformationNuggetJSON::~FlightBookingInformationNuggetJSON(void)
  {
    if (flagHasFlightBookingSearchSpec)
      {
        storeFlightBookingSearchSpec->remove_reference();
      }
    if (flagHasCurrentDateAndTime)
      {
        storeCurrentDateAndTime->remove_reference();
      }
    if (flagHasFlightProducts)
      {
        for (size_t num7 = 0; num7 < storeFlightProducts.size(); ++num7)
          {
            storeFlightProducts[num7]->remove_reference();
          }
      }
    if (flagHasFlightSegments)
      {
        for (size_t num8 = 0; num8 < storeFlightSegments.size(); ++num8)
          {
            storeFlightSegments[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FlightBookingInformationNuggetJSON::getNuggetKind(void) const
  {
    return "FlightBooking";
  }

bool FlightBookingInformationNuggetJSON::hasFlightBookingSearchSpec(void) const
  {
    return flagHasFlightBookingSearchSpec;
  }

FlightBookingSearchSpecJSON * FlightBookingInformationNuggetJSON::getFlightBookingSearchSpec(void)
  {
    assert(flagHasFlightBookingSearchSpec);
    return storeFlightBookingSearchSpec;
  }

const FlightBookingSearchSpecJSON * FlightBookingInformationNuggetJSON::getFlightBookingSearchSpec(void) const
  {
    assert(flagHasFlightBookingSearchSpec);
    return storeFlightBookingSearchSpec;
  }

bool FlightBookingInformationNuggetJSON::hasCurrentDateAndTime(void) const
  {
    return flagHasCurrentDateAndTime;
  }

FlightTimesJSON * FlightBookingInformationNuggetJSON::getCurrentDateAndTime(void)
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

const FlightTimesJSON * FlightBookingInformationNuggetJSON::getCurrentDateAndTime(void) const
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

bool FlightBookingInformationNuggetJSON::hasFlightProducts(void) const
  {
    return flagHasFlightProducts;
  }

size_t FlightBookingInformationNuggetJSON::countOfFlightProducts(void) const
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts.size();
  }

FlightProductJSON * FlightBookingInformationNuggetJSON::elementOfFlightProducts(size_t element_num)
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts[element_num];
  }

const FlightProductJSON * FlightBookingInformationNuggetJSON::elementOfFlightProducts(size_t element_num) const
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts[element_num];
  }

std::vector< FlightProductJSON * > FlightBookingInformationNuggetJSON::getFlightProducts(void)
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts;
  }

const std::vector< FlightProductJSON * > FlightBookingInformationNuggetJSON::getFlightProducts(void) const
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts;
  }

bool FlightBookingInformationNuggetJSON::hasFlightSegments(void) const
  {
    return flagHasFlightSegments;
  }

size_t FlightBookingInformationNuggetJSON::countOfFlightSegments(void) const
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments.size();
  }

FlightSegmentJSON * FlightBookingInformationNuggetJSON::elementOfFlightSegments(size_t element_num)
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments[element_num];
  }

const FlightSegmentJSON * FlightBookingInformationNuggetJSON::elementOfFlightSegments(size_t element_num) const
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments[element_num];
  }

std::vector< FlightSegmentJSON * > FlightBookingInformationNuggetJSON::getFlightSegments(void)
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments;
  }

const std::vector< FlightSegmentJSON * > FlightBookingInformationNuggetJSON::getFlightSegments(void) const
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments;
  }

FlightBookingInformationNuggetJSON *FlightBookingInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightBookingInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightBookingInformationNuggetJSON>, FlightBookingInformationNuggetJSON *, bool> generator("Type FlightBookingInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
