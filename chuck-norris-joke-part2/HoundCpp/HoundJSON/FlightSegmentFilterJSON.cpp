/* file "FlightSegmentFilterJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSegmentFilterJSON.h"

#include "FlightSegmentFilterJSON.h"


FlightSegmentFilterJSON::FlightSegmentFilterJSON(const FlightSegmentFilterJSON &)
  {
    assert(false);
  }

FlightSegmentFilterJSON &FlightSegmentFilterJSON::operator=(const FlightSegmentFilterJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSegmentFilterJSON::fromJSONFindNextAvailableFlight(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FindNextAvailableFlight of FlightSegmentFilterJSON is not true for false.");
          }
      }
    setFindNextAvailableFlight(the_bool);
  }

void FlightSegmentFilterJSON::fromJSONDepartureLocationFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationFilterJSON *convert_classy = FlightTravelLocationFilterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDepartureLocationFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentFilterJSON::fromJSONDestinationLocationFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationFilterJSON *convert_classy = FlightTravelLocationFilterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationLocationFilter(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentFilterJSON::fromJSONDepartureDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDepartureDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentFilterJSON::fromJSONDepartureTimeSpan(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DepartureTimeSpan of FlightSegmentFilterJSON is not a string.");
    setDepartureTimeSpan(std::string(json_string->getData()));
  }

void FlightSegmentFilterJSON::fromJSONSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SearchCriteria of FlightSegmentFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SearchCriteria of FlightSegmentFilterJSON has too few elements.");
    std::vector< FlightSegmentSearchCriterionJSON * > vector_SearchCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSegmentSearchCriterionJSON *convert_classy = FlightSegmentSearchCriterionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SearchCriteria1[num1] = convert_classy;
      }
    assert(vector_SearchCriteria1.size() >= 1);
    initSearchCriteria();
    for (size_t num3 = 0; num3 < vector_SearchCriteria1.size(); ++num3)
        appendSearchCriteria(vector_SearchCriteria1[num3]);
    for (size_t num1 = 0; num1 < vector_SearchCriteria1.size(); ++num1)
      {
        vector_SearchCriteria1[num1]->remove_reference();
      }
  }

void FlightSegmentFilterJSON::fromJSONUpdatedSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field UpdatedSearchCriteria of FlightSegmentFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field UpdatedSearchCriteria of FlightSegmentFilterJSON has too few elements.");
    std::vector< FlightSegmentSearchCriterionJSON * > vector_UpdatedSearchCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSegmentSearchCriterionJSON *convert_classy = FlightSegmentSearchCriterionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_UpdatedSearchCriteria1[num1] = convert_classy;
      }
    assert(vector_UpdatedSearchCriteria1.size() >= 1);
    initUpdatedSearchCriteria();
    for (size_t num4 = 0; num4 < vector_UpdatedSearchCriteria1.size(); ++num4)
        appendUpdatedSearchCriteria(vector_UpdatedSearchCriteria1[num4]);
    for (size_t num1 = 0; num1 < vector_UpdatedSearchCriteria1.size(); ++num1)
      {
        vector_UpdatedSearchCriteria1[num1]->remove_reference();
      }
  }

void FlightSegmentFilterJSON::fromJSONTypeOfLastDateTimeRangeFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DepartureOrArrivalJSON *convert_classy = DepartureOrArrivalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTypeOfLastDateTimeRangeFilter(convert_classy);
    convert_classy->remove_reference();
  }

FlightSegmentFilterJSON::FlightSegmentFilterJSON(void) :
        flagHasFindNextAvailableFlight(false),
        flagHasDepartureLocationFilter(false),
        flagHasDestinationLocationFilter(false),
        flagHasDepartureDateTimeRange(false),
        flagHasDepartureTimeSpan(false),
        flagHasSearchCriteria(false),
        flagHasUpdatedSearchCriteria(false),
        flagHasTypeOfLastDateTimeRangeFilter(false)
  {
    extraIndex = create_string_index();
  }

FlightSegmentFilterJSON::~FlightSegmentFilterJSON(void)
  {
    if (flagHasDepartureLocationFilter)
      {
        storeDepartureLocationFilter->remove_reference();
      }
    if (flagHasDestinationLocationFilter)
      {
        storeDestinationLocationFilter->remove_reference();
      }
    if (flagHasDepartureDateTimeRange)
      {
        storeDepartureDateTimeRange->remove_reference();
      }
    if (flagHasSearchCriteria)
      {
        for (size_t num7 = 0; num7 < storeSearchCriteria.size(); ++num7)
          {
            storeSearchCriteria[num7]->remove_reference();
          }
      }
    if (flagHasUpdatedSearchCriteria)
      {
        for (size_t num8 = 0; num8 < storeUpdatedSearchCriteria.size(); ++num8)
          {
            storeUpdatedSearchCriteria[num8]->remove_reference();
          }
      }
    if (flagHasTypeOfLastDateTimeRangeFilter)
      {
        storeTypeOfLastDateTimeRangeFilter->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightSegmentFilterJSON::hasFindNextAvailableFlight(void) const
  {
    return flagHasFindNextAvailableFlight;
  }

bool FlightSegmentFilterJSON::getFindNextAvailableFlight(void)
  {
    assert(flagHasFindNextAvailableFlight);
    return storeFindNextAvailableFlight;
  }

const bool FlightSegmentFilterJSON::getFindNextAvailableFlight(void) const
  {
    assert(flagHasFindNextAvailableFlight);
    return storeFindNextAvailableFlight;
  }

bool FlightSegmentFilterJSON::hasDepartureLocationFilter(void) const
  {
    return flagHasDepartureLocationFilter;
  }

FlightTravelLocationFilterJSON * FlightSegmentFilterJSON::getDepartureLocationFilter(void)
  {
    assert(flagHasDepartureLocationFilter);
    return storeDepartureLocationFilter;
  }

const FlightTravelLocationFilterJSON * FlightSegmentFilterJSON::getDepartureLocationFilter(void) const
  {
    assert(flagHasDepartureLocationFilter);
    return storeDepartureLocationFilter;
  }

bool FlightSegmentFilterJSON::hasDestinationLocationFilter(void) const
  {
    return flagHasDestinationLocationFilter;
  }

FlightTravelLocationFilterJSON * FlightSegmentFilterJSON::getDestinationLocationFilter(void)
  {
    assert(flagHasDestinationLocationFilter);
    return storeDestinationLocationFilter;
  }

const FlightTravelLocationFilterJSON * FlightSegmentFilterJSON::getDestinationLocationFilter(void) const
  {
    assert(flagHasDestinationLocationFilter);
    return storeDestinationLocationFilter;
  }

bool FlightSegmentFilterJSON::hasDepartureDateTimeRange(void) const
  {
    return flagHasDepartureDateTimeRange;
  }

DateTimeRangeSpecJSON * FlightSegmentFilterJSON::getDepartureDateTimeRange(void)
  {
    assert(flagHasDepartureDateTimeRange);
    return storeDepartureDateTimeRange;
  }

const DateTimeRangeSpecJSON * FlightSegmentFilterJSON::getDepartureDateTimeRange(void) const
  {
    assert(flagHasDepartureDateTimeRange);
    return storeDepartureDateTimeRange;
  }

bool FlightSegmentFilterJSON::hasDepartureTimeSpan(void) const
  {
    return flagHasDepartureTimeSpan;
  }

std::string FlightSegmentFilterJSON::getDepartureTimeSpan(void)
  {
    assert(flagHasDepartureTimeSpan);
    return storeDepartureTimeSpan;
  }

const std::string FlightSegmentFilterJSON::getDepartureTimeSpan(void) const
  {
    assert(flagHasDepartureTimeSpan);
    return storeDepartureTimeSpan;
  }

bool FlightSegmentFilterJSON::hasSearchCriteria(void) const
  {
    return flagHasSearchCriteria;
  }

size_t FlightSegmentFilterJSON::countOfSearchCriteria(void) const
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria.size();
  }

FlightSegmentSearchCriterionJSON * FlightSegmentFilterJSON::elementOfSearchCriteria(size_t element_num)
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria[element_num];
  }

const FlightSegmentSearchCriterionJSON * FlightSegmentFilterJSON::elementOfSearchCriteria(size_t element_num) const
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria[element_num];
  }

std::vector< FlightSegmentSearchCriterionJSON * > FlightSegmentFilterJSON::getSearchCriteria(void)
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria;
  }

const std::vector< FlightSegmentSearchCriterionJSON * > FlightSegmentFilterJSON::getSearchCriteria(void) const
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria;
  }

bool FlightSegmentFilterJSON::hasUpdatedSearchCriteria(void) const
  {
    return flagHasUpdatedSearchCriteria;
  }

size_t FlightSegmentFilterJSON::countOfUpdatedSearchCriteria(void) const
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria.size();
  }

FlightSegmentSearchCriterionJSON * FlightSegmentFilterJSON::elementOfUpdatedSearchCriteria(size_t element_num)
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria[element_num];
  }

const FlightSegmentSearchCriterionJSON * FlightSegmentFilterJSON::elementOfUpdatedSearchCriteria(size_t element_num) const
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria[element_num];
  }

std::vector< FlightSegmentSearchCriterionJSON * > FlightSegmentFilterJSON::getUpdatedSearchCriteria(void)
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria;
  }

const std::vector< FlightSegmentSearchCriterionJSON * > FlightSegmentFilterJSON::getUpdatedSearchCriteria(void) const
  {
    assert(flagHasUpdatedSearchCriteria);
    return storeUpdatedSearchCriteria;
  }

bool FlightSegmentFilterJSON::hasTypeOfLastDateTimeRangeFilter(void) const
  {
    return flagHasTypeOfLastDateTimeRangeFilter;
  }

DepartureOrArrivalJSON * FlightSegmentFilterJSON::getTypeOfLastDateTimeRangeFilter(void)
  {
    assert(flagHasTypeOfLastDateTimeRangeFilter);
    return storeTypeOfLastDateTimeRangeFilter;
  }

const DepartureOrArrivalJSON * FlightSegmentFilterJSON::getTypeOfLastDateTimeRangeFilter(void) const
  {
    assert(flagHasTypeOfLastDateTimeRangeFilter);
    return storeTypeOfLastDateTimeRangeFilter;
  }

DepartureOrArrivalJSON::TypeValue FlightSegmentFilterJSON::getTypeOfLastDateTimeRangeFilterValue(void)
  {
    return getTypeOfLastDateTimeRangeFilter()->getValue();
  }

const DepartureOrArrivalJSON::TypeValue FlightSegmentFilterJSON::getTypeOfLastDateTimeRangeFilterValue(void) const
  {
    return getTypeOfLastDateTimeRangeFilter()->getValue();
  }

const char *FlightSegmentFilterJSON::getTypeOfLastDateTimeRangeFilterAsChars(void) const
  {
    return getTypeOfLastDateTimeRangeFilter()->getValueAsChars();
  }

std::string FlightSegmentFilterJSON::getTypeOfLastDateTimeRangeFilterAsString(void) const
  {
    return getTypeOfLastDateTimeRangeFilter()->getValueAsString();
  }

FlightSegmentFilterJSON *FlightSegmentFilterJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSegmentFilterJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSegmentFilterJSON>, FlightSegmentFilterJSON *, bool> generator("Type FlightSegmentFilter", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
