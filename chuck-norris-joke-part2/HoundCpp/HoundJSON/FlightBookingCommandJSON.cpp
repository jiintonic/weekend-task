/* file "FlightBookingCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightBookingCommandJSON.h"

#include "FlightBookingCommandJSON.h"


FlightBookingCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

FlightBookingCommandJSON::TypeNativeDataJSON &FlightBookingCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightBookingCommandJSON::TypeNativeDataJSON::fromJSONFlightBookingSearchSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightBookingSearchSpecJSON *convert_classy = FlightBookingSearchSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightBookingSearchSpec(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingCommandJSON::TypeNativeDataJSON::fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingCommandJSON::TypeNativeDataJSON::fromJSONFlightSearchProgressDetails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightSearchProgressDetailsJSON *convert_classy = FlightSearchProgressDetailsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightSearchProgressDetails(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingCommandJSON::TypeNativeDataJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of TypeNativeDataJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

void FlightBookingCommandJSON::TypeNativeDataJSON::fromJSONFlightProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightProducts of TypeNativeDataJSON is not an array.");
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

void FlightBookingCommandJSON::TypeNativeDataJSON::fromJSONFlightSegments(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightSegments of TypeNativeDataJSON is not an array.");
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

FlightBookingCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasFlightBookingSearchSpec(false),
        flagHasCurrentDateAndTime(false),
        flagHasFlightSearchProgressDetails(false),
        flagHasErrorMessage(false),
        flagHasFlightProducts(false),
        flagHasFlightSegments(false)
  {
  }

FlightBookingCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasFlightBookingSearchSpec)
      {
        storeFlightBookingSearchSpec->remove_reference();
      }
    if (flagHasCurrentDateAndTime)
      {
        storeCurrentDateAndTime->remove_reference();
      }
    if (flagHasFlightSearchProgressDetails)
      {
        storeFlightSearchProgressDetails->remove_reference();
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
  }

bool FlightBookingCommandJSON::TypeNativeDataJSON::hasFlightBookingSearchSpec(void) const
  {
    return flagHasFlightBookingSearchSpec;
  }

FlightBookingSearchSpecJSON * FlightBookingCommandJSON::TypeNativeDataJSON::getFlightBookingSearchSpec(void)
  {
    assert(flagHasFlightBookingSearchSpec);
    return storeFlightBookingSearchSpec;
  }

const FlightBookingSearchSpecJSON * FlightBookingCommandJSON::TypeNativeDataJSON::getFlightBookingSearchSpec(void) const
  {
    assert(flagHasFlightBookingSearchSpec);
    return storeFlightBookingSearchSpec;
  }

bool FlightBookingCommandJSON::TypeNativeDataJSON::hasCurrentDateAndTime(void) const
  {
    return flagHasCurrentDateAndTime;
  }

FlightTimesJSON * FlightBookingCommandJSON::TypeNativeDataJSON::getCurrentDateAndTime(void)
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

const FlightTimesJSON * FlightBookingCommandJSON::TypeNativeDataJSON::getCurrentDateAndTime(void) const
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

bool FlightBookingCommandJSON::TypeNativeDataJSON::hasFlightSearchProgressDetails(void) const
  {
    return flagHasFlightSearchProgressDetails;
  }

FlightSearchProgressDetailsJSON * FlightBookingCommandJSON::TypeNativeDataJSON::getFlightSearchProgressDetails(void)
  {
    assert(flagHasFlightSearchProgressDetails);
    return storeFlightSearchProgressDetails;
  }

const FlightSearchProgressDetailsJSON * FlightBookingCommandJSON::TypeNativeDataJSON::getFlightSearchProgressDetails(void) const
  {
    assert(flagHasFlightSearchProgressDetails);
    return storeFlightSearchProgressDetails;
  }

bool FlightBookingCommandJSON::TypeNativeDataJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string FlightBookingCommandJSON::TypeNativeDataJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string FlightBookingCommandJSON::TypeNativeDataJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

bool FlightBookingCommandJSON::TypeNativeDataJSON::hasFlightProducts(void) const
  {
    return flagHasFlightProducts;
  }

size_t FlightBookingCommandJSON::TypeNativeDataJSON::countOfFlightProducts(void) const
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts.size();
  }

FlightProductJSON * FlightBookingCommandJSON::TypeNativeDataJSON::elementOfFlightProducts(size_t element_num)
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts[element_num];
  }

const FlightProductJSON * FlightBookingCommandJSON::TypeNativeDataJSON::elementOfFlightProducts(size_t element_num) const
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts[element_num];
  }

std::vector< FlightProductJSON * > FlightBookingCommandJSON::TypeNativeDataJSON::getFlightProducts(void)
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts;
  }

const std::vector< FlightProductJSON * > FlightBookingCommandJSON::TypeNativeDataJSON::getFlightProducts(void) const
  {
    assert(flagHasFlightProducts);
    return storeFlightProducts;
  }

bool FlightBookingCommandJSON::TypeNativeDataJSON::hasFlightSegments(void) const
  {
    return flagHasFlightSegments;
  }

size_t FlightBookingCommandJSON::TypeNativeDataJSON::countOfFlightSegments(void) const
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments.size();
  }

FlightSegmentJSON * FlightBookingCommandJSON::TypeNativeDataJSON::elementOfFlightSegments(size_t element_num)
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments[element_num];
  }

const FlightSegmentJSON * FlightBookingCommandJSON::TypeNativeDataJSON::elementOfFlightSegments(size_t element_num) const
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments[element_num];
  }

std::vector< FlightSegmentJSON * > FlightBookingCommandJSON::TypeNativeDataJSON::getFlightSegments(void)
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments;
  }

const std::vector< FlightSegmentJSON * > FlightBookingCommandJSON::TypeNativeDataJSON::getFlightSegments(void) const
  {
    assert(flagHasFlightSegments);
    return storeFlightSegments;
  }

FlightBookingCommandJSON::FlightBookingCommandJSON(const FlightBookingCommandJSON &)
  {
    assert(false);
  }

FlightBookingCommandJSON &FlightBookingCommandJSON::operator=(const FlightBookingCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FlightBookingCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void FlightBookingCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

FlightBookingCommandJSON::FlightBookingCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

FlightBookingCommandJSON::~FlightBookingCommandJSON(void)
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

const char *FlightBookingCommandJSON::getCommandKind(void) const
  {
    return "FlightBookingCommand";
  }

bool FlightBookingCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

FlightBookingCommandJSON::TypeNativeDataJSON * FlightBookingCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const FlightBookingCommandJSON::TypeNativeDataJSON * FlightBookingCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

FlightBookingCommandJSON::TypeNativeDataJSON *FlightBookingCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
FlightBookingCommandJSON *FlightBookingCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightBookingCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightBookingCommandJSON>, FlightBookingCommandJSON *, bool> generator("Type FlightBookingCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
