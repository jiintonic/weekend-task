/* file "FlightSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSpecJSON.h"

#include "FlightSpecJSON.h"


FlightSpecJSON::FlightSpecJSON(const FlightSpecJSON &)
  {
    assert(false);
  }

FlightSpecJSON &FlightSpecJSON::operator=(const FlightSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSpecJSON::fromJSONNextFlight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field NextFlight of FlightSpecJSON is not true for false.");
          }
      }
    setNextFlight(the_bool);
  }

void FlightSpecJSON::fromJSONAirline(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AirlineJSON *convert_classy = AirlineJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirline(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONAdditionalAirlineMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AdditionalAirlineMatches of FlightSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AirlineJSON * > vector_AdditionalAirlineMatches1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AirlineJSON *convert_classy = AirlineJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AdditionalAirlineMatches1[num1] = convert_classy;
      }
    initAdditionalAirlineMatches();
    for (size_t num3 = 0; num3 < vector_AdditionalAirlineMatches1.size(); ++num3)
        appendAdditionalAirlineMatches(vector_AdditionalAirlineMatches1[num3]);
    for (size_t num1 = 0; num1 < vector_AdditionalAirlineMatches1.size(); ++num1)
      {
        vector_AdditionalAirlineMatches1[num1]->remove_reference();
      }
  }

void FlightSpecJSON::fromJSONFlightNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FlightNumber of FlightSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FlightNumber of FlightSpecJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setFlightNumber(extracted_integer);
  }

void FlightSpecJSON::fromJSONDepartureLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDepartureLocation(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONDestinationLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationLocation(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONTypeOfLastLocationFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DepartureOrArrivalJSON *convert_classy = DepartureOrArrivalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTypeOfLastLocationFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONDepartureDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDepartureDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONArrivalDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArrivalDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONEitherDepartureOrArrivalDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEitherDepartureOrArrivalDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONTypeOfLastDateTimeRangeFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DepartureOrArrivalJSON *convert_classy = DepartureOrArrivalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTypeOfLastDateTimeRangeFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONRequestedFlightAttributes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequestedFlightAttributes of FlightSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field RequestedFlightAttributes of FlightSpecJSON has too few elements.");
    std::vector< FlightAttributeJSON * > vector_RequestedFlightAttributes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightAttributeJSON *convert_classy = FlightAttributeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RequestedFlightAttributes1[num1] = convert_classy;
      }
    assert(vector_RequestedFlightAttributes1.size() >= 1);
    initRequestedFlightAttributes();
    for (size_t num4 = 0; num4 < vector_RequestedFlightAttributes1.size(); ++num4)
        appendRequestedFlightAttributes(vector_RequestedFlightAttributes1[num4]);
    for (size_t num1 = 0; num1 < vector_RequestedFlightAttributes1.size(); ++num1)
      {
        vector_RequestedFlightAttributes1[num1]->remove_reference();
      }
  }

void FlightSpecJSON::fromJSONDepartureTimeFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimeFormatJSON *convert_classy = FlightTimeFormatJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDepartureTimeFormat(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONArrivalTimeFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimeFormatJSON *convert_classy = FlightTimeFormatJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArrivalTimeFormat(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSpecJSON::fromJSONSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Spoken of FlightSpecJSON is not a string.");
    setSpoken(std::string(json_string->getData()));
  }

void FlightSpecJSON::fromJSONWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Written of FlightSpecJSON is not a string.");
    setWritten(std::string(json_string->getData()));
  }

void FlightSpecJSON::fromJSONModeInteractionDisabled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field ModeInteractionDisabled of FlightSpecJSON is not true for false.");
          }
      }
    setModeInteractionDisabled(the_bool);
  }

FlightSpecJSON::FlightSpecJSON(void) :
        flagHasNextFlight(false),
        flagHasAirline(false),
        flagHasAdditionalAirlineMatches(false),
        flagHasFlightNumber(false),
        flagHasDepartureLocation(false),
        flagHasDestinationLocation(false),
        flagHasTypeOfLastLocationFilter(false),
        flagHasDepartureDateTimeRange(false),
        flagHasArrivalDateTimeRange(false),
        flagHasEitherDepartureOrArrivalDateTimeRange(false),
        flagHasTypeOfLastDateTimeRangeFilter(false),
        flagHasRequestedFlightAttributes(false),
        flagHasDepartureTimeFormat(false),
        flagHasArrivalTimeFormat(false),
        flagHasSpoken(false),
        flagHasWritten(false),
        flagHasModeInteractionDisabled(false)
  {
    extraIndex = create_string_index();
  }

FlightSpecJSON::~FlightSpecJSON(void)
  {
    if (flagHasAirline)
      {
        storeAirline->remove_reference();
      }
    if (flagHasAdditionalAirlineMatches)
      {
        for (size_t num7 = 0; num7 < storeAdditionalAirlineMatches.size(); ++num7)
          {
            storeAdditionalAirlineMatches[num7]->remove_reference();
          }
      }
    if (flagHasDepartureLocation)
      {
        storeDepartureLocation->remove_reference();
      }
    if (flagHasDestinationLocation)
      {
        storeDestinationLocation->remove_reference();
      }
    if (flagHasTypeOfLastLocationFilter)
      {
        storeTypeOfLastLocationFilter->remove_reference();
      }
    if (flagHasDepartureDateTimeRange)
      {
        storeDepartureDateTimeRange->remove_reference();
      }
    if (flagHasArrivalDateTimeRange)
      {
        storeArrivalDateTimeRange->remove_reference();
      }
    if (flagHasEitherDepartureOrArrivalDateTimeRange)
      {
        storeEitherDepartureOrArrivalDateTimeRange->remove_reference();
      }
    if (flagHasTypeOfLastDateTimeRangeFilter)
      {
        storeTypeOfLastDateTimeRangeFilter->remove_reference();
      }
    if (flagHasRequestedFlightAttributes)
      {
        for (size_t num8 = 0; num8 < storeRequestedFlightAttributes.size(); ++num8)
          {
            storeRequestedFlightAttributes[num8]->remove_reference();
          }
      }
    if (flagHasDepartureTimeFormat)
      {
        storeDepartureTimeFormat->remove_reference();
      }
    if (flagHasArrivalTimeFormat)
      {
        storeArrivalTimeFormat->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightSpecJSON::hasNextFlight(void) const
  {
    return flagHasNextFlight;
  }

bool FlightSpecJSON::getNextFlight(void)
  {
    assert(flagHasNextFlight);
    return storeNextFlight;
  }

const bool FlightSpecJSON::getNextFlight(void) const
  {
    assert(flagHasNextFlight);
    return storeNextFlight;
  }

bool FlightSpecJSON::hasAirline(void) const
  {
    return flagHasAirline;
  }

AirlineJSON * FlightSpecJSON::getAirline(void)
  {
    assert(flagHasAirline);
    return storeAirline;
  }

const AirlineJSON * FlightSpecJSON::getAirline(void) const
  {
    assert(flagHasAirline);
    return storeAirline;
  }

bool FlightSpecJSON::hasAdditionalAirlineMatches(void) const
  {
    return flagHasAdditionalAirlineMatches;
  }

size_t FlightSpecJSON::countOfAdditionalAirlineMatches(void) const
  {
    assert(flagHasAdditionalAirlineMatches);
    return storeAdditionalAirlineMatches.size();
  }

AirlineJSON * FlightSpecJSON::elementOfAdditionalAirlineMatches(size_t element_num)
  {
    assert(flagHasAdditionalAirlineMatches);
    return storeAdditionalAirlineMatches[element_num];
  }

const AirlineJSON * FlightSpecJSON::elementOfAdditionalAirlineMatches(size_t element_num) const
  {
    assert(flagHasAdditionalAirlineMatches);
    return storeAdditionalAirlineMatches[element_num];
  }

std::vector< AirlineJSON * > FlightSpecJSON::getAdditionalAirlineMatches(void)
  {
    assert(flagHasAdditionalAirlineMatches);
    return storeAdditionalAirlineMatches;
  }

const std::vector< AirlineJSON * > FlightSpecJSON::getAdditionalAirlineMatches(void) const
  {
    assert(flagHasAdditionalAirlineMatches);
    return storeAdditionalAirlineMatches;
  }

bool FlightSpecJSON::hasFlightNumber(void) const
  {
    return flagHasFlightNumber;
  }

uint16_t FlightSpecJSON::getFlightNumber(void)
  {
    assert(flagHasFlightNumber);
    return storeFlightNumber;
  }

const uint16_t FlightSpecJSON::getFlightNumber(void) const
  {
    assert(flagHasFlightNumber);
    return storeFlightNumber;
  }

bool FlightSpecJSON::hasDepartureLocation(void) const
  {
    return flagHasDepartureLocation;
  }

FlightTravelLocationJSON * FlightSpecJSON::getDepartureLocation(void)
  {
    assert(flagHasDepartureLocation);
    return storeDepartureLocation;
  }

const FlightTravelLocationJSON * FlightSpecJSON::getDepartureLocation(void) const
  {
    assert(flagHasDepartureLocation);
    return storeDepartureLocation;
  }

bool FlightSpecJSON::hasDestinationLocation(void) const
  {
    return flagHasDestinationLocation;
  }

FlightTravelLocationJSON * FlightSpecJSON::getDestinationLocation(void)
  {
    assert(flagHasDestinationLocation);
    return storeDestinationLocation;
  }

const FlightTravelLocationJSON * FlightSpecJSON::getDestinationLocation(void) const
  {
    assert(flagHasDestinationLocation);
    return storeDestinationLocation;
  }

bool FlightSpecJSON::hasTypeOfLastLocationFilter(void) const
  {
    return flagHasTypeOfLastLocationFilter;
  }

DepartureOrArrivalJSON * FlightSpecJSON::getTypeOfLastLocationFilter(void)
  {
    assert(flagHasTypeOfLastLocationFilter);
    return storeTypeOfLastLocationFilter;
  }

const DepartureOrArrivalJSON * FlightSpecJSON::getTypeOfLastLocationFilter(void) const
  {
    assert(flagHasTypeOfLastLocationFilter);
    return storeTypeOfLastLocationFilter;
  }

DepartureOrArrivalJSON::TypeValue FlightSpecJSON::getTypeOfLastLocationFilterValue(void)
  {
    return getTypeOfLastLocationFilter()->getValue();
  }

const DepartureOrArrivalJSON::TypeValue FlightSpecJSON::getTypeOfLastLocationFilterValue(void) const
  {
    return getTypeOfLastLocationFilter()->getValue();
  }

const char *FlightSpecJSON::getTypeOfLastLocationFilterAsChars(void) const
  {
    return getTypeOfLastLocationFilter()->getValueAsChars();
  }

std::string FlightSpecJSON::getTypeOfLastLocationFilterAsString(void) const
  {
    return getTypeOfLastLocationFilter()->getValueAsString();
  }

bool FlightSpecJSON::hasDepartureDateTimeRange(void) const
  {
    return flagHasDepartureDateTimeRange;
  }

DateTimeRangeSpecJSON * FlightSpecJSON::getDepartureDateTimeRange(void)
  {
    assert(flagHasDepartureDateTimeRange);
    return storeDepartureDateTimeRange;
  }

const DateTimeRangeSpecJSON * FlightSpecJSON::getDepartureDateTimeRange(void) const
  {
    assert(flagHasDepartureDateTimeRange);
    return storeDepartureDateTimeRange;
  }

bool FlightSpecJSON::hasArrivalDateTimeRange(void) const
  {
    return flagHasArrivalDateTimeRange;
  }

DateTimeRangeSpecJSON * FlightSpecJSON::getArrivalDateTimeRange(void)
  {
    assert(flagHasArrivalDateTimeRange);
    return storeArrivalDateTimeRange;
  }

const DateTimeRangeSpecJSON * FlightSpecJSON::getArrivalDateTimeRange(void) const
  {
    assert(flagHasArrivalDateTimeRange);
    return storeArrivalDateTimeRange;
  }

bool FlightSpecJSON::hasEitherDepartureOrArrivalDateTimeRange(void) const
  {
    return flagHasEitherDepartureOrArrivalDateTimeRange;
  }

DateTimeRangeSpecJSON * FlightSpecJSON::getEitherDepartureOrArrivalDateTimeRange(void)
  {
    assert(flagHasEitherDepartureOrArrivalDateTimeRange);
    return storeEitherDepartureOrArrivalDateTimeRange;
  }

const DateTimeRangeSpecJSON * FlightSpecJSON::getEitherDepartureOrArrivalDateTimeRange(void) const
  {
    assert(flagHasEitherDepartureOrArrivalDateTimeRange);
    return storeEitherDepartureOrArrivalDateTimeRange;
  }

bool FlightSpecJSON::hasTypeOfLastDateTimeRangeFilter(void) const
  {
    return flagHasTypeOfLastDateTimeRangeFilter;
  }

DepartureOrArrivalJSON * FlightSpecJSON::getTypeOfLastDateTimeRangeFilter(void)
  {
    assert(flagHasTypeOfLastDateTimeRangeFilter);
    return storeTypeOfLastDateTimeRangeFilter;
  }

const DepartureOrArrivalJSON * FlightSpecJSON::getTypeOfLastDateTimeRangeFilter(void) const
  {
    assert(flagHasTypeOfLastDateTimeRangeFilter);
    return storeTypeOfLastDateTimeRangeFilter;
  }

DepartureOrArrivalJSON::TypeValue FlightSpecJSON::getTypeOfLastDateTimeRangeFilterValue(void)
  {
    return getTypeOfLastDateTimeRangeFilter()->getValue();
  }

const DepartureOrArrivalJSON::TypeValue FlightSpecJSON::getTypeOfLastDateTimeRangeFilterValue(void) const
  {
    return getTypeOfLastDateTimeRangeFilter()->getValue();
  }

const char *FlightSpecJSON::getTypeOfLastDateTimeRangeFilterAsChars(void) const
  {
    return getTypeOfLastDateTimeRangeFilter()->getValueAsChars();
  }

std::string FlightSpecJSON::getTypeOfLastDateTimeRangeFilterAsString(void) const
  {
    return getTypeOfLastDateTimeRangeFilter()->getValueAsString();
  }

bool FlightSpecJSON::hasRequestedFlightAttributes(void) const
  {
    return flagHasRequestedFlightAttributes;
  }

size_t FlightSpecJSON::countOfRequestedFlightAttributes(void) const
  {
    assert(flagHasRequestedFlightAttributes);
    return storeRequestedFlightAttributes.size();
  }

FlightAttributeJSON * FlightSpecJSON::elementOfRequestedFlightAttributes(size_t element_num)
  {
    assert(flagHasRequestedFlightAttributes);
    return storeRequestedFlightAttributes[element_num];
  }

const FlightAttributeJSON * FlightSpecJSON::elementOfRequestedFlightAttributes(size_t element_num) const
  {
    assert(flagHasRequestedFlightAttributes);
    return storeRequestedFlightAttributes[element_num];
  }

std::vector< FlightAttributeJSON * > FlightSpecJSON::getRequestedFlightAttributes(void)
  {
    assert(flagHasRequestedFlightAttributes);
    return storeRequestedFlightAttributes;
  }

const std::vector< FlightAttributeJSON * > FlightSpecJSON::getRequestedFlightAttributes(void) const
  {
    assert(flagHasRequestedFlightAttributes);
    return storeRequestedFlightAttributes;
  }

bool FlightSpecJSON::hasDepartureTimeFormat(void) const
  {
    return flagHasDepartureTimeFormat;
  }

FlightTimeFormatJSON * FlightSpecJSON::getDepartureTimeFormat(void)
  {
    assert(flagHasDepartureTimeFormat);
    return storeDepartureTimeFormat;
  }

const FlightTimeFormatJSON * FlightSpecJSON::getDepartureTimeFormat(void) const
  {
    assert(flagHasDepartureTimeFormat);
    return storeDepartureTimeFormat;
  }

bool FlightSpecJSON::hasArrivalTimeFormat(void) const
  {
    return flagHasArrivalTimeFormat;
  }

FlightTimeFormatJSON * FlightSpecJSON::getArrivalTimeFormat(void)
  {
    assert(flagHasArrivalTimeFormat);
    return storeArrivalTimeFormat;
  }

const FlightTimeFormatJSON * FlightSpecJSON::getArrivalTimeFormat(void) const
  {
    assert(flagHasArrivalTimeFormat);
    return storeArrivalTimeFormat;
  }

bool FlightSpecJSON::hasSpoken(void) const
  {
    return flagHasSpoken;
  }

std::string FlightSpecJSON::getSpoken(void)
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

const std::string FlightSpecJSON::getSpoken(void) const
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

bool FlightSpecJSON::hasWritten(void) const
  {
    return flagHasWritten;
  }

std::string FlightSpecJSON::getWritten(void)
  {
    assert(flagHasWritten);
    return storeWritten;
  }

const std::string FlightSpecJSON::getWritten(void) const
  {
    assert(flagHasWritten);
    return storeWritten;
  }

bool FlightSpecJSON::hasModeInteractionDisabled(void) const
  {
    return flagHasModeInteractionDisabled;
  }

bool FlightSpecJSON::getModeInteractionDisabled(void)
  {
    assert(flagHasModeInteractionDisabled);
    return storeModeInteractionDisabled;
  }

const bool FlightSpecJSON::getModeInteractionDisabled(void) const
  {
    assert(flagHasModeInteractionDisabled);
    return storeModeInteractionDisabled;
  }

FlightSpecJSON *FlightSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSpecJSON>, FlightSpecJSON *, bool> generator("Type FlightSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
