/* file "FlightBookingFilterJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightBookingFilterJSON.h"

#include "FlightBookingFilterJSON.h"


FlightBookingFilterJSON::FlightBookingFilterJSON(const FlightBookingFilterJSON &)
  {
    assert(false);
  }

FlightBookingFilterJSON &FlightBookingFilterJSON::operator=(const FlightBookingFilterJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightBookingFilterJSON::fromJSONFlightSegmentFilters(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightSegmentFilters of FlightBookingFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightSegmentFilterJSON * > vector_FlightSegmentFilters1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSegmentFilterJSON *convert_classy = FlightSegmentFilterJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightSegmentFilters1[num1] = convert_classy;
      }
    initFlightSegmentFilters();
    for (size_t num6 = 0; num6 < vector_FlightSegmentFilters1.size(); ++num6)
        appendFlightSegmentFilters(vector_FlightSegmentFilters1[num6]);
    for (size_t num1 = 0; num1 < vector_FlightSegmentFilters1.size(); ++num1)
      {
        vector_FlightSegmentFilters1[num1]->remove_reference();
      }
  }

void FlightBookingFilterJSON::fromJSONIndexOfLastUpdatedFlightSegmentFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field IndexOfLastUpdatedFlightSegmentFilter of FlightBookingFilterJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field IndexOfLastUpdatedFlightSegmentFilter of FlightBookingFilterJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIndexOfLastUpdatedFlightSegmentFilter(extracted_integer);
  }

void FlightBookingFilterJSON::fromJSONFlightTripType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTripTypeJSON *convert_classy = FlightTripTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightTripType(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONSameDayOrOvernight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SameDayOrOvernightJSON *convert_classy = SameDayOrOvernightJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSameDayOrOvernight(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONReturnFlightSegmentFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightSegmentFilterJSON *convert_classy = FlightSegmentFilterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setReturnFlightSegmentFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONLastTripDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field LastTripDuration of FlightBookingFilterJSON is not a number.");
          }
      }
    setLastTripDurationText(the_rational_text);
  }

void FlightBookingFilterJSON::fromJSONNumberOfStops(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IntegerIntervalJSON *convert_classy = IntegerIntervalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNumberOfStops(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONPriceRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PriceRangeJSON *convert_classy = PriceRangeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPriceRange(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONRangeOfLayoverDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RangeOfDurationJSON *convert_classy = RangeOfDurationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeOfLayoverDuration(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONRangeOfTotalLayoverDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RangeOfDurationJSON *convert_classy = RangeOfDurationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeOfTotalLayoverDuration(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONRangeOfTravelDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RangeOfDurationJSON *convert_classy = RangeOfDurationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeOfTravelDuration(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONRangeOfTotalTravelDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RangeOfDurationJSON *convert_classy = RangeOfDurationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeOfTotalTravelDuration(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONAvoidChangePenalties(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AvoidChangePenalties of FlightBookingFilterJSON is not true for false.");
          }
      }
    setAvoidChangePenalties(the_bool);
  }

void FlightBookingFilterJSON::fromJSONAirlineFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AirlineFilterJSON *convert_classy = AirlineFilterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirlineFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONSeatPreferences(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightSeatPreferencesJSON *convert_classy = FlightSeatPreferencesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeatPreferences(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONCabinClassFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CabinClassFilterJSON *convert_classy = CabinClassFilterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCabinClassFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONAirportFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationFilterJSON *convert_classy = FlightTravelLocationFilterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirportFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingFilterJSON::fromJSONPassengerTypesWithCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PassengerTypesWithCount of FlightBookingFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PassengerTypesWithCount of FlightBookingFilterJSON has too few elements.");
    std::vector< FlightPassengerTypeCountJSON * > vector_PassengerTypesWithCount1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightPassengerTypeCountJSON *convert_classy = FlightPassengerTypeCountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PassengerTypesWithCount1[num1] = convert_classy;
      }
    assert(vector_PassengerTypesWithCount1.size() >= 1);
    initPassengerTypesWithCount();
    for (size_t num7 = 0; num7 < vector_PassengerTypesWithCount1.size(); ++num7)
        appendPassengerTypesWithCount(vector_PassengerTypesWithCount1[num7]);
    for (size_t num1 = 0; num1 < vector_PassengerTypesWithCount1.size(); ++num1)
      {
        vector_PassengerTypesWithCount1[num1]->remove_reference();
      }
  }

void FlightBookingFilterJSON::fromJSONNumberOfSeatsOrTicketsRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumberOfSeatsOrTicketsRequested of FlightBookingFilterJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumberOfSeatsOrTicketsRequested of FlightBookingFilterJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumberOfSeatsOrTicketsRequested(extracted_integer);
  }

void FlightBookingFilterJSON::fromJSONFlightListSortCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightListSortCriteria of FlightBookingFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightListSortCriterionJSON * > vector_FlightListSortCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightListSortCriterionJSON *convert_classy = FlightListSortCriterionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightListSortCriteria1[num1] = convert_classy;
      }
    initFlightListSortCriteria();
    for (size_t num8 = 0; num8 < vector_FlightListSortCriteria1.size(); ++num8)
        appendFlightListSortCriteria(vector_FlightListSortCriteria1[num8]);
    for (size_t num1 = 0; num1 < vector_FlightListSortCriteria1.size(); ++num1)
      {
        vector_FlightListSortCriteria1[num1]->remove_reference();
      }
  }

void FlightBookingFilterJSON::fromJSONUpdatedSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field UpdatedSearchCriteria of FlightBookingFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field UpdatedSearchCriteria of FlightBookingFilterJSON has too few elements.");
    std::vector< FlightSearchCriterionJSON * > vector_UpdatedSearchCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSearchCriterionJSON *convert_classy = FlightSearchCriterionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_UpdatedSearchCriteria1[num1] = convert_classy;
      }
    assert(vector_UpdatedSearchCriteria1.size() >= 1);
    initUpdatedSearchCriteria();
    for (size_t num9 = 0; num9 < vector_UpdatedSearchCriteria1.size(); ++num9)
        appendUpdatedSearchCriteria(vector_UpdatedSearchCriteria1[num9]);
    for (size_t num1 = 0; num1 < vector_UpdatedSearchCriteria1.size(); ++num1)
      {
        vector_UpdatedSearchCriteria1[num1]->remove_reference();
      }
  }

void FlightBookingFilterJSON::fromJSONSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SearchCriteria of FlightBookingFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SearchCriteria of FlightBookingFilterJSON has too few elements.");
    std::vector< FlightSearchCriterionJSON * > vector_SearchCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSearchCriterionJSON *convert_classy = FlightSearchCriterionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SearchCriteria1[num1] = convert_classy;
      }
    assert(vector_SearchCriteria1.size() >= 1);
    initSearchCriteria();
    for (size_t num10 = 0; num10 < vector_SearchCriteria1.size(); ++num10)
        appendSearchCriteria(vector_SearchCriteria1[num10]);
    for (size_t num1 = 0; num1 < vector_SearchCriteria1.size(); ++num1)
      {
        vector_SearchCriteria1[num1]->remove_reference();
      }
  }

void FlightBookingFilterJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of FlightBookingFilterJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void FlightBookingFilterJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of FlightBookingFilterJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void FlightBookingFilterJSON::fromJSONSpokenUpdateLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUpdateLabel of FlightBookingFilterJSON is not a string.");
    setSpokenUpdateLabel(std::string(json_string->getData()));
  }

void FlightBookingFilterJSON::fromJSONUpdateLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UpdateLabel of FlightBookingFilterJSON is not a string.");
    setUpdateLabel(std::string(json_string->getData()));
  }

FlightBookingFilterJSON::FlightBookingFilterJSON(void) :
        flagHasFlightSegmentFilters(false),
        flagHasIndexOfLastUpdatedFlightSegmentFilter(false),
        flagHasFlightTripType(false),
        flagHasSameDayOrOvernight(false),
        flagHasReturnFlightSegmentFilter(false),
        flagHasLastTripDuration(false),
        flagHasNumberOfStops(false),
        flagHasPriceRange(false),
        flagHasRangeOfLayoverDuration(false),
        flagHasRangeOfTotalLayoverDuration(false),
        flagHasRangeOfTravelDuration(false),
        flagHasRangeOfTotalTravelDuration(false),
        flagHasAvoidChangePenalties(false),
        flagHasAirlineFilter(false),
        flagHasSeatPreferences(false),
        flagHasCabinClassFilter(false),
        flagHasAirportFilter(false),
        flagHasPassengerTypesWithCount(false),
        flagHasNumberOfSeatsOrTicketsRequested(false),
        flagHasFlightListSortCriteria(false),
        flagHasUpdatedSearchCriteria(false),
        flagHasSearchCriteria(false),
        flagHasSpokenLabel(false),
        flagHasLabel(false),
        flagHasSpokenUpdateLabel(false),
        flagHasUpdateLabel(false)
  {
    extraIndex = create_string_index();
  }

FlightBookingFilterJSON::~FlightBookingFilterJSON(void)
  {
    if (flagHasFlightSegmentFilters)
      {
        for (size_t num16 = 0; num16 < storeFlightSegmentFilters.size(); ++num16)
          {
            storeFlightSegmentFilters[num16]->remove_reference();
          }
      }
    if (flagHasFlightTripType)
      {
        storeFlightTripType->remove_reference();
      }
    if (flagHasSameDayOrOvernight)
      {
        storeSameDayOrOvernight->remove_reference();
      }
    if (flagHasReturnFlightSegmentFilter)
      {
        storeReturnFlightSegmentFilter->remove_reference();
      }
    if (flagHasNumberOfStops)
      {
        storeNumberOfStops->remove_reference();
      }
    if (flagHasPriceRange)
      {
        storePriceRange->remove_reference();
      }
    if (flagHasRangeOfLayoverDuration)
      {
        storeRangeOfLayoverDuration->remove_reference();
      }
    if (flagHasRangeOfTotalLayoverDuration)
      {
        storeRangeOfTotalLayoverDuration->remove_reference();
      }
    if (flagHasRangeOfTravelDuration)
      {
        storeRangeOfTravelDuration->remove_reference();
      }
    if (flagHasRangeOfTotalTravelDuration)
      {
        storeRangeOfTotalTravelDuration->remove_reference();
      }
    if (flagHasAirlineFilter)
      {
        storeAirlineFilter->remove_reference();
      }
    if (flagHasSeatPreferences)
      {
        storeSeatPreferences->remove_reference();
      }
    if (flagHasCabinClassFilter)
      {
        storeCabinClassFilter->remove_reference();
      }
    if (flagHasAirportFilter)
      {
        storeAirportFilter->remove_reference();
      }
    if (flagHasPassengerTypesWithCount)
      {
        for (size_t num17 = 0; num17 < storePassengerTypesWithCount.size(); ++num17)
          {
            storePassengerTypesWithCount[num17]->remove_reference();
          }
      }
    if (flagHasFlightListSortCriteria)
      {
        for (size_t num18 = 0; num18 < storeFlightListSortCriteria.size(); ++num18)
          {
            storeFlightListSortCriteria[num18]->remove_reference();
          }
      }
    if (flagHasUpdatedSearchCriteria)
      {
        for (size_t num19 = 0; num19 < storeUpdatedSearchCriteria.size(); ++num19)
          {
            storeUpdatedSearchCriteria[num19]->remove_reference();
          }
      }
    if (flagHasSearchCriteria)
      {
        for (size_t num20 = 0; num20 < storeSearchCriteria.size(); ++num20)
          {
            storeSearchCriteria[num20]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightBookingFilterJSON::hasFlightSegmentFilters(void) const
  {
    return flagHasFlightSegmentFilters;
  }

size_t FlightBookingFilterJSON::countOfFlightSegmentFilters(void) const
  {
    assert(flagHasFlightSegmentFilters);
    return storeFlightSegmentFilters.size();
  }

FlightSegmentFilterJSON * FlightBookingFilterJSON::elementOfFlightSegmentFilters(size_t element_num)
  {
    assert(flagHasFlightSegmentFilters);
    return storeFlightSegmentFilters[element_num];
  }

const FlightSegmentFilterJSON * FlightBookingFilterJSON::elementOfFlightSegmentFilters(size_t element_num) const
  {
    assert(flagHasFlightSegmentFilters);
    return storeFlightSegmentFilters[element_num];
  }

std::vector< FlightSegmentFilterJSON * > FlightBookingFilterJSON::getFlightSegmentFilters(void)
  {
    assert(flagHasFlightSegmentFilters);
    return storeFlightSegmentFilters;
  }

const std::vector< FlightSegmentFilterJSON * > FlightBookingFilterJSON::getFlightSegmentFilters(void) const
  {
    assert(flagHasFlightSegmentFilters);
    return storeFlightSegmentFilters;
  }

bool FlightBookingFilterJSON::hasIndexOfLastUpdatedFlightSegmentFilter(void) const
  {
    return flagHasIndexOfLastUpdatedFlightSegmentFilter;
  }

OInteger FlightBookingFilterJSON::getIndexOfLastUpdatedFlightSegmentFilter(void)
  {
    assert(flagHasIndexOfLastUpdatedFlightSegmentFilter);
    return storeIndexOfLastUpdatedFlightSegmentFilter;
  }

const OInteger FlightBookingFilterJSON::getIndexOfLastUpdatedFlightSegmentFilter(void) const
  {
    assert(flagHasIndexOfLastUpdatedFlightSegmentFilter);
    return storeIndexOfLastUpdatedFlightSegmentFilter;
  }

bool FlightBookingFilterJSON::hasFlightTripType(void) const
  {
    return flagHasFlightTripType;
  }

FlightTripTypeJSON * FlightBookingFilterJSON::getFlightTripType(void)
  {
    assert(flagHasFlightTripType);
    return storeFlightTripType;
  }

const FlightTripTypeJSON * FlightBookingFilterJSON::getFlightTripType(void) const
  {
    assert(flagHasFlightTripType);
    return storeFlightTripType;
  }

FlightTripTypeJSON::TypeValue FlightBookingFilterJSON::getFlightTripTypeValue(void)
  {
    return getFlightTripType()->getValue();
  }

const FlightTripTypeJSON::TypeValue FlightBookingFilterJSON::getFlightTripTypeValue(void) const
  {
    return getFlightTripType()->getValue();
  }

const char *FlightBookingFilterJSON::getFlightTripTypeAsChars(void) const
  {
    return getFlightTripType()->getValueAsChars();
  }

std::string FlightBookingFilterJSON::getFlightTripTypeAsString(void) const
  {
    return getFlightTripType()->getValueAsString();
  }

bool FlightBookingFilterJSON::hasSameDayOrOvernight(void) const
  {
    return flagHasSameDayOrOvernight;
  }

SameDayOrOvernightJSON * FlightBookingFilterJSON::getSameDayOrOvernight(void)
  {
    assert(flagHasSameDayOrOvernight);
    return storeSameDayOrOvernight;
  }

const SameDayOrOvernightJSON * FlightBookingFilterJSON::getSameDayOrOvernight(void) const
  {
    assert(flagHasSameDayOrOvernight);
    return storeSameDayOrOvernight;
  }

SameDayOrOvernightJSON::TypeValue FlightBookingFilterJSON::getSameDayOrOvernightValue(void)
  {
    return getSameDayOrOvernight()->getValue();
  }

const SameDayOrOvernightJSON::TypeValue FlightBookingFilterJSON::getSameDayOrOvernightValue(void) const
  {
    return getSameDayOrOvernight()->getValue();
  }

const char *FlightBookingFilterJSON::getSameDayOrOvernightAsChars(void) const
  {
    return getSameDayOrOvernight()->getValueAsChars();
  }

std::string FlightBookingFilterJSON::getSameDayOrOvernightAsString(void) const
  {
    return getSameDayOrOvernight()->getValueAsString();
  }

bool FlightBookingFilterJSON::hasReturnFlightSegmentFilter(void) const
  {
    return flagHasReturnFlightSegmentFilter;
  }

FlightSegmentFilterJSON * FlightBookingFilterJSON::getReturnFlightSegmentFilter(void)
  {
    assert(flagHasReturnFlightSegmentFilter);
    return storeReturnFlightSegmentFilter;
  }

const FlightSegmentFilterJSON * FlightBookingFilterJSON::getReturnFlightSegmentFilter(void) const
  {
    assert(flagHasReturnFlightSegmentFilter);
    return storeReturnFlightSegmentFilter;
  }

bool FlightBookingFilterJSON::hasLastTripDuration(void) const
  {
    return flagHasLastTripDuration;
  }

double FlightBookingFilterJSON::getLastTripDuration(void)
  {
    assert(flagHasLastTripDuration);
    if (textStoreLastTripDuration != "")
      {
        return atof(textStoreLastTripDuration.c_str());
      }
    return storeLastTripDuration;
  }

const double FlightBookingFilterJSON::getLastTripDuration(void) const
  {
    assert(flagHasLastTripDuration);
    if (textStoreLastTripDuration != "")
      {
        return atof(textStoreLastTripDuration.c_str());
      }
    return storeLastTripDuration;
  }

std::string FlightBookingFilterJSON::getLastTripDurationAsText(void) const
  {
    assert(flagHasLastTripDuration);
    if (textStoreLastTripDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLastTripDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLastTripDuration);
      }
  }

bool FlightBookingFilterJSON::hasNumberOfStops(void) const
  {
    return flagHasNumberOfStops;
  }

IntegerIntervalJSON * FlightBookingFilterJSON::getNumberOfStops(void)
  {
    assert(flagHasNumberOfStops);
    return storeNumberOfStops;
  }

const IntegerIntervalJSON * FlightBookingFilterJSON::getNumberOfStops(void) const
  {
    assert(flagHasNumberOfStops);
    return storeNumberOfStops;
  }

bool FlightBookingFilterJSON::hasPriceRange(void) const
  {
    return flagHasPriceRange;
  }

PriceRangeJSON * FlightBookingFilterJSON::getPriceRange(void)
  {
    assert(flagHasPriceRange);
    return storePriceRange;
  }

const PriceRangeJSON * FlightBookingFilterJSON::getPriceRange(void) const
  {
    assert(flagHasPriceRange);
    return storePriceRange;
  }

bool FlightBookingFilterJSON::hasRangeOfLayoverDuration(void) const
  {
    return flagHasRangeOfLayoverDuration;
  }

RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfLayoverDuration(void)
  {
    assert(flagHasRangeOfLayoverDuration);
    return storeRangeOfLayoverDuration;
  }

const RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfLayoverDuration(void) const
  {
    assert(flagHasRangeOfLayoverDuration);
    return storeRangeOfLayoverDuration;
  }

bool FlightBookingFilterJSON::hasRangeOfTotalLayoverDuration(void) const
  {
    return flagHasRangeOfTotalLayoverDuration;
  }

RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfTotalLayoverDuration(void)
  {
    assert(flagHasRangeOfTotalLayoverDuration);
    return storeRangeOfTotalLayoverDuration;
  }

const RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfTotalLayoverDuration(void) const
  {
    assert(flagHasRangeOfTotalLayoverDuration);
    return storeRangeOfTotalLayoverDuration;
  }

bool FlightBookingFilterJSON::hasRangeOfTravelDuration(void) const
  {
    return flagHasRangeOfTravelDuration;
  }

RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfTravelDuration(void)
  {
    assert(flagHasRangeOfTravelDuration);
    return storeRangeOfTravelDuration;
  }

const RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfTravelDuration(void) const
  {
    assert(flagHasRangeOfTravelDuration);
    return storeRangeOfTravelDuration;
  }

bool FlightBookingFilterJSON::hasRangeOfTotalTravelDuration(void) const
  {
    return flagHasRangeOfTotalTravelDuration;
  }

RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfTotalTravelDuration(void)
  {
    assert(flagHasRangeOfTotalTravelDuration);
    return storeRangeOfTotalTravelDuration;
  }

const RangeOfDurationJSON * FlightBookingFilterJSON::getRangeOfTotalTravelDuration(void) const
  {
    assert(flagHasRangeOfTotalTravelDuration);
    return storeRangeOfTotalTravelDuration;
  }

bool FlightBookingFilterJSON::hasAvoidChangePenalties(void) const
  {
    return flagHasAvoidChangePenalties;
  }

bool FlightBookingFilterJSON::getAvoidChangePenalties(void)
  {
    assert(flagHasAvoidChangePenalties);
    return storeAvoidChangePenalties;
  }

const bool FlightBookingFilterJSON::getAvoidChangePenalties(void) const
  {
    assert(flagHasAvoidChangePenalties);
    return storeAvoidChangePenalties;
  }

bool FlightBookingFilterJSON::hasAirlineFilter(void) const
  {
    return flagHasAirlineFilter;
  }

AirlineFilterJSON * FlightBookingFilterJSON::getAirlineFilter(void)
  {
    assert(flagHasAirlineFilter);
    return storeAirlineFilter;
  }

const AirlineFilterJSON * FlightBookingFilterJSON::getAirlineFilter(void) const
  {
    assert(flagHasAirlineFilter);
    return storeAirlineFilter;
  }

bool FlightBookingFilterJSON::hasSeatPreferences(void) const
  {
    return flagHasSeatPreferences;
  }

FlightSeatPreferencesJSON * FlightBookingFilterJSON::getSeatPreferences(void)
  {
    assert(flagHasSeatPreferences);
    return storeSeatPreferences;
  }

const FlightSeatPreferencesJSON * FlightBookingFilterJSON::getSeatPreferences(void) const
  {
    assert(flagHasSeatPreferences);
    return storeSeatPreferences;
  }

bool FlightBookingFilterJSON::hasCabinClassFilter(void) const
  {
    return flagHasCabinClassFilter;
  }

CabinClassFilterJSON * FlightBookingFilterJSON::getCabinClassFilter(void)
  {
    assert(flagHasCabinClassFilter);
    return storeCabinClassFilter;
  }

const CabinClassFilterJSON * FlightBookingFilterJSON::getCabinClassFilter(void) const
  {
    assert(flagHasCabinClassFilter);
    return storeCabinClassFilter;
  }

bool FlightBookingFilterJSON::hasAirportFilter(void) const
  {
    return flagHasAirportFilter;
  }

FlightTravelLocationFilterJSON * FlightBookingFilterJSON::getAirportFilter(void)
  {
    assert(flagHasAirportFilter);
    return storeAirportFilter;
  }

const FlightTravelLocationFilterJSON * FlightBookingFilterJSON::getAirportFilter(void) const
  {
    assert(flagHasAirportFilter);
    return storeAirportFilter;
  }

bool FlightBookingFilterJSON::hasPassengerTypesWithCount(void) const
  {
    return flagHasPassengerTypesWithCount;
  }

size_t FlightBookingFilterJSON::countOfPassengerTypesWithCount(void) const
  {
    assert(flagHasPassengerTypesWithCount);
    return storePassengerTypesWithCount.size();
  }

FlightPassengerTypeCountJSON * FlightBookingFilterJSON::elementOfPassengerTypesWithCount(size_t element_num)
  {
    assert(flagHasPassengerTypesWithCount);
    return storePassengerTypesWithCount[element_num];
  }

const FlightPassengerTypeCountJSON * FlightBookingFilterJSON::elementOfPassengerTypesWithCount(size_t element_num) const
  {
    assert(flagHasPassengerTypesWithCount);
    return storePassengerTypesWithCount[element_num];
  }

std::vector< FlightPassengerTypeCountJSON * > FlightBookingFilterJSON::getPassengerTypesWithCount(void)
  {
    assert(flagHasPassengerTypesWithCount);
    return storePassengerTypesWithCount;
  }

const std::vector< FlightPassengerTypeCountJSON * > FlightBookingFilterJSON::getPassengerTypesWithCount(void) const
  {
    assert(flagHasPassengerTypesWithCount);
    return storePassengerTypesWithCount;
  }

bool FlightBookingFilterJSON::hasNumberOfSeatsOrTicketsRequested(void) const
  {
    return flagHasNumberOfSeatsOrTicketsRequested;
  }

OInteger FlightBookingFilterJSON::getNumberOfSeatsOrTicketsRequested(void)
  {
    assert(flagHasNumberOfSeatsOrTicketsRequested);
    return storeNumberOfSeatsOrTicketsRequested;
  }

const OInteger FlightBookingFilterJSON::getNumberOfSeatsOrTicketsRequested(void) const
  {
    assert(flagHasNumberOfSeatsOrTicketsRequested);
    return storeNumberOfSeatsOrTicketsRequested;
  }

bool FlightBookingFilterJSON::hasFlightListSortCriteria(void) const
  {
    return flagHasFlightListSortCriteria;
  }

size_t FlightBookingFilterJSON::countOfFlightListSortCriteria(void) const
  {
    assert(flagHasFlightListSortCriteria);
    return storeFlightListSortCriteria.size();
  }

FlightListSortCriterionJSON * FlightBookingFilterJSON::elementOfFlightListSortCriteria(size_t element_num)
  {
    assert(flagHasFlightListSortCriteria);
    return storeFlightListSortCriteria[element_num];
  }

const FlightListSortCriterionJSON * FlightBookingFilterJSON::elementOfFlightListSortCriteria(size_t element_num) const
  {
    assert(flagHasFlightListSortCriteria);
    return storeFlightListSortCriteria[element_num];
  }

std::vector< FlightListSortCriterionJSON * > FlightBookingFilterJSON::getFlightListSortCriteria(void)
  {
    assert(flagHasFlightListSortCriteria);
    return storeFlightListSortCriteria;
  }

const std::vector< FlightListSortCriterionJSON * > FlightBookingFilterJSON::getFlightListSortCriteria(void) const
  {
    assert(flagHasFlightListSortCriteria);
    return storeFlightListSortCriteria;
  }

bool FlightBookingFilterJSON::hasUpdatedSearchCriteria(void) const
  {
    return flagHasUpdatedSearchCriteria;
  }

size_t FlightBookingFilterJSON::countOfUpdatedSearchCriteria(void) const
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria.size();
  }

FlightSearchCriterionJSON * FlightBookingFilterJSON::elementOfUpdatedSearchCriteria(size_t element_num)
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria[element_num];
  }

const FlightSearchCriterionJSON * FlightBookingFilterJSON::elementOfUpdatedSearchCriteria(size_t element_num) const
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria[element_num];
  }

std::vector< FlightSearchCriterionJSON * > FlightBookingFilterJSON::getUpdatedSearchCriteria(void)
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria;
  }

const std::vector< FlightSearchCriterionJSON * > FlightBookingFilterJSON::getUpdatedSearchCriteria(void) const
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria;
  }

bool FlightBookingFilterJSON::hasSearchCriteria(void) const
  {
    return flagHasSearchCriteria;
  }

size_t FlightBookingFilterJSON::countOfSearchCriteria(void) const
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria.size();
  }

FlightSearchCriterionJSON * FlightBookingFilterJSON::elementOfSearchCriteria(size_t element_num)
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria[element_num];
  }

const FlightSearchCriterionJSON * FlightBookingFilterJSON::elementOfSearchCriteria(size_t element_num) const
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria[element_num];
  }

std::vector< FlightSearchCriterionJSON * > FlightBookingFilterJSON::getSearchCriteria(void)
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria;
  }

const std::vector< FlightSearchCriterionJSON * > FlightBookingFilterJSON::getSearchCriteria(void) const
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria;
  }

bool FlightBookingFilterJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string FlightBookingFilterJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string FlightBookingFilterJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool FlightBookingFilterJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string FlightBookingFilterJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string FlightBookingFilterJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool FlightBookingFilterJSON::hasSpokenUpdateLabel(void) const
  {
    return flagHasSpokenUpdateLabel;
  }

std::string FlightBookingFilterJSON::getSpokenUpdateLabel(void)
  {
    assert(flagHasSpokenUpdateLabel);
    return storeSpokenUpdateLabel;
  }

const std::string FlightBookingFilterJSON::getSpokenUpdateLabel(void) const
  {
    assert(flagHasSpokenUpdateLabel);
    return storeSpokenUpdateLabel;
  }

bool FlightBookingFilterJSON::hasUpdateLabel(void) const
  {
    return flagHasUpdateLabel;
  }

std::string FlightBookingFilterJSON::getUpdateLabel(void)
  {
    assert(flagHasUpdateLabel);
    return storeUpdateLabel;
  }

const std::string FlightBookingFilterJSON::getUpdateLabel(void) const
  {
    assert(flagHasUpdateLabel);
    return storeUpdateLabel;
  }

char FlightBookingFilterJSON::Generator::lowerBoundIndexOfLastUpdatedFlightSegmentFilter[] = "0";
char FlightBookingFilterJSON::Generator::lowerBoundNumberOfSeatsOrTicketsRequested[] = "1";
FlightBookingFilterJSON *FlightBookingFilterJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightBookingFilterJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightBookingFilterJSON>, FlightBookingFilterJSON *, bool> generator("Type FlightBookingFilter", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
