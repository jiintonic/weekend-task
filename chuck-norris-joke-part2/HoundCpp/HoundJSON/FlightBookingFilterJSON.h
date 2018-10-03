/* file "FlightBookingFilterJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTBOOKINGFILTERJSON_H
#define FLIGHTBOOKINGFILTERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "FlightSegmentFilterJSON.h"
#include "FlightTripTypeJSON.h"
#include "SameDayOrOvernightJSON.h"
#include "FlightSegmentFilterJSON.h"
#include "IntegerIntervalJSON.h"
#include "PriceRangeJSON.h"
#include "RangeOfDurationJSON.h"
#include "RangeOfDurationJSON.h"
#include "RangeOfDurationJSON.h"
#include "RangeOfDurationJSON.h"
#include "AirlineFilterJSON.h"
#include "FlightSeatPreferencesJSON.h"
#include "CabinClassFilterJSON.h"
#include "FlightTravelLocationFilterJSON.h"
#include "FlightPassengerTypeCountJSON.h"
#include "FlightListSortCriterionJSON.h"
#include "FlightSearchCriterionJSON.h"
#include "FlightSearchCriterionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightBookingFilterJSON : public ReferenceCounted
  {
  private:
    bool flagHasFlightSegmentFilters;
    std::vector< FlightSegmentFilterJSON * > storeFlightSegmentFilters;
    bool flagHasIndexOfLastUpdatedFlightSegmentFilter;
    OInteger storeIndexOfLastUpdatedFlightSegmentFilter;
    bool flagHasFlightTripType;
    FlightTripTypeJSON * storeFlightTripType;
    bool flagHasSameDayOrOvernight;
    SameDayOrOvernightJSON * storeSameDayOrOvernight;
    bool flagHasReturnFlightSegmentFilter;
    FlightSegmentFilterJSON * storeReturnFlightSegmentFilter;
    bool flagHasLastTripDuration;
    double storeLastTripDuration;
    std::string textStoreLastTripDuration;
    bool flagHasNumberOfStops;
    IntegerIntervalJSON * storeNumberOfStops;
    bool flagHasPriceRange;
    PriceRangeJSON * storePriceRange;
    bool flagHasRangeOfLayoverDuration;
    RangeOfDurationJSON * storeRangeOfLayoverDuration;
    bool flagHasRangeOfTotalLayoverDuration;
    RangeOfDurationJSON * storeRangeOfTotalLayoverDuration;
    bool flagHasRangeOfTravelDuration;
    RangeOfDurationJSON * storeRangeOfTravelDuration;
    bool flagHasRangeOfTotalTravelDuration;
    RangeOfDurationJSON * storeRangeOfTotalTravelDuration;
    bool flagHasAvoidChangePenalties;
    bool storeAvoidChangePenalties;
    bool flagHasAirlineFilter;
    AirlineFilterJSON * storeAirlineFilter;
    bool flagHasSeatPreferences;
    FlightSeatPreferencesJSON * storeSeatPreferences;
    bool flagHasCabinClassFilter;
    CabinClassFilterJSON * storeCabinClassFilter;
    bool flagHasAirportFilter;
    FlightTravelLocationFilterJSON * storeAirportFilter;
    bool flagHasPassengerTypesWithCount;
    std::vector< FlightPassengerTypeCountJSON * > storePassengerTypesWithCount;
    bool flagHasNumberOfSeatsOrTicketsRequested;
    OInteger storeNumberOfSeatsOrTicketsRequested;
    bool flagHasFlightListSortCriteria;
    std::vector< FlightListSortCriterionJSON * > storeFlightListSortCriteria;
    bool flagHasUpdatedSearchCriteria;
    std::vector< FlightSearchCriterionJSON * > storeUpdatedSearchCriteria;
    bool flagHasSearchCriteria;
    std::vector< FlightSearchCriterionJSON * > storeSearchCriteria;
    bool flagHasSpokenLabel;
    std::string storeSpokenLabel;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasSpokenUpdateLabel;
    std::string storeSpokenUpdateLabel;
    bool flagHasUpdateLabel;
    std::string storeUpdateLabel;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightBookingFilterJSON(const FlightBookingFilterJSON &);
    FlightBookingFilterJSON & operator=(const FlightBookingFilterJSON &other);

    void  fromJSONFlightSegmentFilters(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIndexOfLastUpdatedFlightSegmentFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightTripType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSameDayOrOvernight(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReturnFlightSegmentFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastTripDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumberOfStops(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPriceRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRangeOfLayoverDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRangeOfTotalLayoverDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRangeOfTravelDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRangeOfTotalTravelDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvoidChangePenalties(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAirlineFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeatPreferences(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCabinClassFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAirportFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPassengerTypesWithCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumberOfSeatsOrTicketsRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightListSortCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUpdatedSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenUpdateLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUpdateLabel(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightBookingFilterJSON(void);
    virtual ~FlightBookingFilterJSON(void);
    bool  hasFlightSegmentFilters(void) const;
    size_t  countOfFlightSegmentFilters(void) const;
    FlightSegmentFilterJSON *  elementOfFlightSegmentFilters(size_t element_num);
    const FlightSegmentFilterJSON *  elementOfFlightSegmentFilters(size_t element_num) const;
    std::vector< FlightSegmentFilterJSON * >  getFlightSegmentFilters(void);
    const std::vector< FlightSegmentFilterJSON * >  getFlightSegmentFilters(void) const;
    bool  hasIndexOfLastUpdatedFlightSegmentFilter(void) const;
    OInteger  getIndexOfLastUpdatedFlightSegmentFilter(void);
    const OInteger  getIndexOfLastUpdatedFlightSegmentFilter(void) const;
    bool  hasFlightTripType(void) const;
    FlightTripTypeJSON *  getFlightTripType(void);
    const FlightTripTypeJSON *  getFlightTripType(void) const;
    FlightTripTypeJSON::TypeValue  getFlightTripTypeValue(void);
    const FlightTripTypeJSON::TypeValue  getFlightTripTypeValue(void) const;
    const char * getFlightTripTypeAsChars(void) const;
    std::string  getFlightTripTypeAsString(void) const;
    bool  hasSameDayOrOvernight(void) const;
    SameDayOrOvernightJSON *  getSameDayOrOvernight(void);
    const SameDayOrOvernightJSON *  getSameDayOrOvernight(void) const;
    SameDayOrOvernightJSON::TypeValue  getSameDayOrOvernightValue(void);
    const SameDayOrOvernightJSON::TypeValue  getSameDayOrOvernightValue(void) const;
    const char * getSameDayOrOvernightAsChars(void) const;
    std::string  getSameDayOrOvernightAsString(void) const;
    bool  hasReturnFlightSegmentFilter(void) const;
    FlightSegmentFilterJSON *  getReturnFlightSegmentFilter(void);
    const FlightSegmentFilterJSON *  getReturnFlightSegmentFilter(void) const;
    bool  hasLastTripDuration(void) const;
    double  getLastTripDuration(void);
    const double  getLastTripDuration(void) const;
    std::string  getLastTripDurationAsText(void) const;
    bool  hasNumberOfStops(void) const;
    IntegerIntervalJSON *  getNumberOfStops(void);
    const IntegerIntervalJSON *  getNumberOfStops(void) const;
    bool  hasPriceRange(void) const;
    PriceRangeJSON *  getPriceRange(void);
    const PriceRangeJSON *  getPriceRange(void) const;
    bool  hasRangeOfLayoverDuration(void) const;
    RangeOfDurationJSON *  getRangeOfLayoverDuration(void);
    const RangeOfDurationJSON *  getRangeOfLayoverDuration(void) const;
    bool  hasRangeOfTotalLayoverDuration(void) const;
    RangeOfDurationJSON *  getRangeOfTotalLayoverDuration(void);
    const RangeOfDurationJSON *  getRangeOfTotalLayoverDuration(void) const;
    bool  hasRangeOfTravelDuration(void) const;
    RangeOfDurationJSON *  getRangeOfTravelDuration(void);
    const RangeOfDurationJSON *  getRangeOfTravelDuration(void) const;
    bool  hasRangeOfTotalTravelDuration(void) const;
    RangeOfDurationJSON *  getRangeOfTotalTravelDuration(void);
    const RangeOfDurationJSON *  getRangeOfTotalTravelDuration(void) const;
    bool  hasAvoidChangePenalties(void) const;
    bool  getAvoidChangePenalties(void);
    const bool  getAvoidChangePenalties(void) const;
    bool  hasAirlineFilter(void) const;
    AirlineFilterJSON *  getAirlineFilter(void);
    const AirlineFilterJSON *  getAirlineFilter(void) const;
    bool  hasSeatPreferences(void) const;
    FlightSeatPreferencesJSON *  getSeatPreferences(void);
    const FlightSeatPreferencesJSON *  getSeatPreferences(void) const;
    bool  hasCabinClassFilter(void) const;
    CabinClassFilterJSON *  getCabinClassFilter(void);
    const CabinClassFilterJSON *  getCabinClassFilter(void) const;
    bool  hasAirportFilter(void) const;
    FlightTravelLocationFilterJSON *  getAirportFilter(void);
    const FlightTravelLocationFilterJSON *  getAirportFilter(void) const;
    bool  hasPassengerTypesWithCount(void) const;
    size_t  countOfPassengerTypesWithCount(void) const;
    FlightPassengerTypeCountJSON *  elementOfPassengerTypesWithCount(size_t element_num);
    const FlightPassengerTypeCountJSON *  elementOfPassengerTypesWithCount(size_t element_num) const;
    std::vector< FlightPassengerTypeCountJSON * >  getPassengerTypesWithCount(void);
    const std::vector< FlightPassengerTypeCountJSON * >  getPassengerTypesWithCount(void) const;
    bool  hasNumberOfSeatsOrTicketsRequested(void) const;
    OInteger  getNumberOfSeatsOrTicketsRequested(void);
    const OInteger  getNumberOfSeatsOrTicketsRequested(void) const;
    bool  hasFlightListSortCriteria(void) const;
    size_t  countOfFlightListSortCriteria(void) const;
    FlightListSortCriterionJSON *  elementOfFlightListSortCriteria(size_t element_num);
    const FlightListSortCriterionJSON *  elementOfFlightListSortCriteria(size_t element_num) const;
    std::vector< FlightListSortCriterionJSON * >  getFlightListSortCriteria(void);
    const std::vector< FlightListSortCriterionJSON * >  getFlightListSortCriteria(void) const;
    bool  hasUpdatedSearchCriteria(void) const;
    size_t  countOfUpdatedSearchCriteria(void) const;
    FlightSearchCriterionJSON *  elementOfUpdatedSearchCriteria(size_t element_num);
    const FlightSearchCriterionJSON *  elementOfUpdatedSearchCriteria(size_t element_num) const;
    std::vector< FlightSearchCriterionJSON * >  getUpdatedSearchCriteria(void);
    const std::vector< FlightSearchCriterionJSON * >  getUpdatedSearchCriteria(void) const;
    bool  hasSearchCriteria(void) const;
    size_t  countOfSearchCriteria(void) const;
    FlightSearchCriterionJSON *  elementOfSearchCriteria(size_t element_num);
    const FlightSearchCriterionJSON *  elementOfSearchCriteria(size_t element_num) const;
    std::vector< FlightSearchCriterionJSON * >  getSearchCriteria(void);
    const std::vector< FlightSearchCriterionJSON * >  getSearchCriteria(void) const;
    bool  hasSpokenLabel(void) const;
    std::string  getSpokenLabel(void);
    const std::string  getSpokenLabel(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasSpokenUpdateLabel(void) const;
    std::string  getSpokenUpdateLabel(void);
    const std::string  getSpokenUpdateLabel(void) const;
    bool  hasUpdateLabel(void) const;
    std::string  getUpdateLabel(void);
    const std::string  getUpdateLabel(void) const;

    virtual size_t extraFlightBookingFilterComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightBookingFilterComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightBookingFilterComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightBookingFilterComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightBookingFilterLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightBookingFilterLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initFlightSegmentFilters(void)
      {
        if (flagHasFlightSegmentFilters)
          {
            for (size_t num6 = 0; num6 < storeFlightSegmentFilters.size(); ++num6)
              {
                storeFlightSegmentFilters[num6]->remove_reference();
              }
          }
        flagHasFlightSegmentFilters = true;
        storeFlightSegmentFilters.clear();
      }
    void appendFlightSegmentFilters(FlightSegmentFilterJSON * to_append)
      {
        if (!flagHasFlightSegmentFilters)
          {
            flagHasFlightSegmentFilters = true;
            storeFlightSegmentFilters.clear();
          }
        assert(flagHasFlightSegmentFilters);
        to_append->add_reference();
        storeFlightSegmentFilters.push_back(to_append);
      }
    void unsetFlightSegmentFilters(void)
      {
        if (flagHasFlightSegmentFilters)
          {
            for (size_t num7 = 0; num7 < storeFlightSegmentFilters.size(); ++num7)
              {
                storeFlightSegmentFilters[num7]->remove_reference();
              }
          }
        flagHasFlightSegmentFilters = false;
        storeFlightSegmentFilters.clear();
      }
    void setIndexOfLastUpdatedFlightSegmentFilter(OInteger new_value)
      {
        flagHasIndexOfLastUpdatedFlightSegmentFilter = true;
        if (new_value < 0)
            throw("The value for field IndexOfLastUpdatedFlightSegmentFilter of FlightBookingFilterJSON is less than the lower bound (0) for that field.");
        storeIndexOfLastUpdatedFlightSegmentFilter = new_value;
      }
    void unsetIndexOfLastUpdatedFlightSegmentFilter(void)
      {
        flagHasIndexOfLastUpdatedFlightSegmentFilter = false;
      }
    void setFlightTripType(FlightTripTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFlightTripType)
          {
            storeFlightTripType->remove_reference();
          }
        flagHasFlightTripType = true;
        storeFlightTripType = new_value;
      }
    void setFlightTripType(FlightTripTypeJSON::TypeValue new_value)
      {
        setFlightTripType(new FlightTripTypeJSON(new_value));
      }
    void setFlightTripType(const char *chars)
      {
        setFlightTripType(new FlightTripTypeJSON(chars));
      }
    void setFlightTripType(std::string the_string)
      {
        setFlightTripType(new FlightTripTypeJSON(the_string));
      }
    void unsetFlightTripType(void)
      {
        if (flagHasFlightTripType)
          {
            storeFlightTripType->remove_reference();
          }
        flagHasFlightTripType = false;
      }
    void setSameDayOrOvernight(SameDayOrOvernightJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSameDayOrOvernight)
          {
            storeSameDayOrOvernight->remove_reference();
          }
        flagHasSameDayOrOvernight = true;
        storeSameDayOrOvernight = new_value;
      }
    void setSameDayOrOvernight(SameDayOrOvernightJSON::TypeValue new_value)
      {
        setSameDayOrOvernight(new SameDayOrOvernightJSON(new_value));
      }
    void setSameDayOrOvernight(const char *chars)
      {
        SameDayOrOvernightJSON::TypeValueKnownValues known = SameDayOrOvernightJSON::stringToValue(chars);
        SameDayOrOvernightJSON::TypeValue new_value;
        if (known == SameDayOrOvernightJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSameDayOrOvernight(new_value);
      }
    void setSameDayOrOvernight(std::string the_string)
      {
        setSameDayOrOvernight(the_string.c_str());
      }
    void unsetSameDayOrOvernight(void)
      {
        if (flagHasSameDayOrOvernight)
          {
            storeSameDayOrOvernight->remove_reference();
          }
        flagHasSameDayOrOvernight = false;
      }
    void setReturnFlightSegmentFilter(FlightSegmentFilterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasReturnFlightSegmentFilter)
          {
            storeReturnFlightSegmentFilter->remove_reference();
          }
        flagHasReturnFlightSegmentFilter = true;
        storeReturnFlightSegmentFilter = new_value;
      }
    void unsetReturnFlightSegmentFilter(void)
      {
        if (flagHasReturnFlightSegmentFilter)
          {
            storeReturnFlightSegmentFilter->remove_reference();
          }
        flagHasReturnFlightSegmentFilter = false;
      }
    void setLastTripDuration(double new_value)
      {
        flagHasLastTripDuration = true;
        storeLastTripDuration = new_value;
        textStoreLastTripDuration = "";
      }
    void setLastTripDurationText(std::string new_value)
      {
        flagHasLastTripDuration = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field LastTripDuration of FlightBookingFilterJSON is not a valid number.");
        textStoreLastTripDuration = new_value;
      }
    void unsetLastTripDuration(void)
      {
        flagHasLastTripDuration = false;
      }
    void setNumberOfStops(IntegerIntervalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNumberOfStops)
          {
            storeNumberOfStops->remove_reference();
          }
        flagHasNumberOfStops = true;
        storeNumberOfStops = new_value;
      }
    void unsetNumberOfStops(void)
      {
        if (flagHasNumberOfStops)
          {
            storeNumberOfStops->remove_reference();
          }
        flagHasNumberOfStops = false;
      }
    void setPriceRange(PriceRangeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPriceRange)
          {
            storePriceRange->remove_reference();
          }
        flagHasPriceRange = true;
        storePriceRange = new_value;
      }
    void unsetPriceRange(void)
      {
        if (flagHasPriceRange)
          {
            storePriceRange->remove_reference();
          }
        flagHasPriceRange = false;
      }
    void setRangeOfLayoverDuration(RangeOfDurationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRangeOfLayoverDuration)
          {
            storeRangeOfLayoverDuration->remove_reference();
          }
        flagHasRangeOfLayoverDuration = true;
        storeRangeOfLayoverDuration = new_value;
      }
    void unsetRangeOfLayoverDuration(void)
      {
        if (flagHasRangeOfLayoverDuration)
          {
            storeRangeOfLayoverDuration->remove_reference();
          }
        flagHasRangeOfLayoverDuration = false;
      }
    void setRangeOfTotalLayoverDuration(RangeOfDurationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRangeOfTotalLayoverDuration)
          {
            storeRangeOfTotalLayoverDuration->remove_reference();
          }
        flagHasRangeOfTotalLayoverDuration = true;
        storeRangeOfTotalLayoverDuration = new_value;
      }
    void unsetRangeOfTotalLayoverDuration(void)
      {
        if (flagHasRangeOfTotalLayoverDuration)
          {
            storeRangeOfTotalLayoverDuration->remove_reference();
          }
        flagHasRangeOfTotalLayoverDuration = false;
      }
    void setRangeOfTravelDuration(RangeOfDurationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRangeOfTravelDuration)
          {
            storeRangeOfTravelDuration->remove_reference();
          }
        flagHasRangeOfTravelDuration = true;
        storeRangeOfTravelDuration = new_value;
      }
    void unsetRangeOfTravelDuration(void)
      {
        if (flagHasRangeOfTravelDuration)
          {
            storeRangeOfTravelDuration->remove_reference();
          }
        flagHasRangeOfTravelDuration = false;
      }
    void setRangeOfTotalTravelDuration(RangeOfDurationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRangeOfTotalTravelDuration)
          {
            storeRangeOfTotalTravelDuration->remove_reference();
          }
        flagHasRangeOfTotalTravelDuration = true;
        storeRangeOfTotalTravelDuration = new_value;
      }
    void unsetRangeOfTotalTravelDuration(void)
      {
        if (flagHasRangeOfTotalTravelDuration)
          {
            storeRangeOfTotalTravelDuration->remove_reference();
          }
        flagHasRangeOfTotalTravelDuration = false;
      }
    void setAvoidChangePenalties(bool new_value)
      {
        flagHasAvoidChangePenalties = true;
        storeAvoidChangePenalties = new_value;
      }
    void unsetAvoidChangePenalties(void)
      {
        flagHasAvoidChangePenalties = false;
      }
    void setAirlineFilter(AirlineFilterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAirlineFilter)
          {
            storeAirlineFilter->remove_reference();
          }
        flagHasAirlineFilter = true;
        storeAirlineFilter = new_value;
      }
    void unsetAirlineFilter(void)
      {
        if (flagHasAirlineFilter)
          {
            storeAirlineFilter->remove_reference();
          }
        flagHasAirlineFilter = false;
      }
    void setSeatPreferences(FlightSeatPreferencesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeatPreferences)
          {
            storeSeatPreferences->remove_reference();
          }
        flagHasSeatPreferences = true;
        storeSeatPreferences = new_value;
      }
    void unsetSeatPreferences(void)
      {
        if (flagHasSeatPreferences)
          {
            storeSeatPreferences->remove_reference();
          }
        flagHasSeatPreferences = false;
      }
    void setCabinClassFilter(CabinClassFilterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCabinClassFilter)
          {
            storeCabinClassFilter->remove_reference();
          }
        flagHasCabinClassFilter = true;
        storeCabinClassFilter = new_value;
      }
    void unsetCabinClassFilter(void)
      {
        if (flagHasCabinClassFilter)
          {
            storeCabinClassFilter->remove_reference();
          }
        flagHasCabinClassFilter = false;
      }
    void setAirportFilter(FlightTravelLocationFilterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAirportFilter)
          {
            storeAirportFilter->remove_reference();
          }
        flagHasAirportFilter = true;
        storeAirportFilter = new_value;
      }
    void unsetAirportFilter(void)
      {
        if (flagHasAirportFilter)
          {
            storeAirportFilter->remove_reference();
          }
        flagHasAirportFilter = false;
      }
    void initPassengerTypesWithCount(void)
      {
        if (flagHasPassengerTypesWithCount)
          {
            for (size_t num8 = 0; num8 < storePassengerTypesWithCount.size(); ++num8)
              {
                storePassengerTypesWithCount[num8]->remove_reference();
              }
          }
        flagHasPassengerTypesWithCount = true;
        storePassengerTypesWithCount.clear();
      }
    void appendPassengerTypesWithCount(FlightPassengerTypeCountJSON * to_append)
      {
        if (!flagHasPassengerTypesWithCount)
          {
            flagHasPassengerTypesWithCount = true;
            storePassengerTypesWithCount.clear();
          }
        assert(flagHasPassengerTypesWithCount);
        to_append->add_reference();
        storePassengerTypesWithCount.push_back(to_append);
      }
    void unsetPassengerTypesWithCount(void)
      {
        if (flagHasPassengerTypesWithCount)
          {
            for (size_t num9 = 0; num9 < storePassengerTypesWithCount.size(); ++num9)
              {
                storePassengerTypesWithCount[num9]->remove_reference();
              }
          }
        flagHasPassengerTypesWithCount = false;
        storePassengerTypesWithCount.clear();
      }
    void setNumberOfSeatsOrTicketsRequested(OInteger new_value)
      {
        flagHasNumberOfSeatsOrTicketsRequested = true;
        if (new_value < 1)
            throw("The value for field NumberOfSeatsOrTicketsRequested of FlightBookingFilterJSON is less than the lower bound (1) for that field.");
        storeNumberOfSeatsOrTicketsRequested = new_value;
      }
    void unsetNumberOfSeatsOrTicketsRequested(void)
      {
        flagHasNumberOfSeatsOrTicketsRequested = false;
      }
    void initFlightListSortCriteria(void)
      {
        if (flagHasFlightListSortCriteria)
          {
            for (size_t num10 = 0; num10 < storeFlightListSortCriteria.size(); ++num10)
              {
                storeFlightListSortCriteria[num10]->remove_reference();
              }
          }
        flagHasFlightListSortCriteria = true;
        storeFlightListSortCriteria.clear();
      }
    void appendFlightListSortCriteria(FlightListSortCriterionJSON * to_append)
      {
        if (!flagHasFlightListSortCriteria)
          {
            flagHasFlightListSortCriteria = true;
            storeFlightListSortCriteria.clear();
          }
        assert(flagHasFlightListSortCriteria);
        to_append->add_reference();
        storeFlightListSortCriteria.push_back(to_append);
      }
    void unsetFlightListSortCriteria(void)
      {
        if (flagHasFlightListSortCriteria)
          {
            for (size_t num11 = 0; num11 < storeFlightListSortCriteria.size(); ++num11)
              {
                storeFlightListSortCriteria[num11]->remove_reference();
              }
          }
        flagHasFlightListSortCriteria = false;
        storeFlightListSortCriteria.clear();
      }
    void initUpdatedSearchCriteria(void)
      {
        if (flagHasUpdatedSearchCriteria)
          {
            for (size_t num12 = 0; num12 < storeUpdatedSearchCriteria.size(); ++num12)
              {
                storeUpdatedSearchCriteria[num12]->remove_reference();
              }
          }
        flagHasUpdatedSearchCriteria = true;
        storeUpdatedSearchCriteria.clear();
      }
    void appendUpdatedSearchCriteria(FlightSearchCriterionJSON * to_append)
      {
        if (!flagHasUpdatedSearchCriteria)
          {
            flagHasUpdatedSearchCriteria = true;
            storeUpdatedSearchCriteria.clear();
          }
        assert(flagHasUpdatedSearchCriteria);
        to_append->add_reference();
        storeUpdatedSearchCriteria.push_back(to_append);
      }
    void appendUpdatedSearchCriteria(FlightSearchCriterionJSON::TypeValue new_value)
      {
        appendUpdatedSearchCriteria(new FlightSearchCriterionJSON(new_value));
      }
    void appendUpdatedSearchCriteria(const char *chars)
      {
        FlightSearchCriterionJSON::TypeValueKnownValues known = FlightSearchCriterionJSON::stringToValue(chars);
        FlightSearchCriterionJSON::TypeValue new_value;
        if (known == FlightSearchCriterionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendUpdatedSearchCriteria(new_value);
      }
    void appendUpdatedSearchCriteria(std::string the_string)
      {
        appendUpdatedSearchCriteria(the_string.c_str());
      }
    void unsetUpdatedSearchCriteria(void)
      {
        if (flagHasUpdatedSearchCriteria)
          {
            for (size_t num13 = 0; num13 < storeUpdatedSearchCriteria.size(); ++num13)
              {
                storeUpdatedSearchCriteria[num13]->remove_reference();
              }
          }
        flagHasUpdatedSearchCriteria = false;
        storeUpdatedSearchCriteria.clear();
      }
    void initSearchCriteria(void)
      {
        if (flagHasSearchCriteria)
          {
            for (size_t num14 = 0; num14 < storeSearchCriteria.size(); ++num14)
              {
                storeSearchCriteria[num14]->remove_reference();
              }
          }
        flagHasSearchCriteria = true;
        storeSearchCriteria.clear();
      }
    void appendSearchCriteria(FlightSearchCriterionJSON * to_append)
      {
        if (!flagHasSearchCriteria)
          {
            flagHasSearchCriteria = true;
            storeSearchCriteria.clear();
          }
        assert(flagHasSearchCriteria);
        to_append->add_reference();
        storeSearchCriteria.push_back(to_append);
      }
    void appendSearchCriteria(FlightSearchCriterionJSON::TypeValue new_value)
      {
        appendSearchCriteria(new FlightSearchCriterionJSON(new_value));
      }
    void appendSearchCriteria(const char *chars)
      {
        FlightSearchCriterionJSON::TypeValueKnownValues known = FlightSearchCriterionJSON::stringToValue(chars);
        FlightSearchCriterionJSON::TypeValue new_value;
        if (known == FlightSearchCriterionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendSearchCriteria(new_value);
      }
    void appendSearchCriteria(std::string the_string)
      {
        appendSearchCriteria(the_string.c_str());
      }
    void unsetSearchCriteria(void)
      {
        if (flagHasSearchCriteria)
          {
            for (size_t num15 = 0; num15 < storeSearchCriteria.size(); ++num15)
              {
                storeSearchCriteria[num15]->remove_reference();
              }
          }
        flagHasSearchCriteria = false;
        storeSearchCriteria.clear();
      }
    void setSpokenLabel(std::string new_value)
      {
        flagHasSpokenLabel = true;
        storeSpokenLabel = new_value;
      }
    void unsetSpokenLabel(void)
      {
        flagHasSpokenLabel = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }
    void setSpokenUpdateLabel(std::string new_value)
      {
        flagHasSpokenUpdateLabel = true;
        storeSpokenUpdateLabel = new_value;
      }
    void unsetSpokenUpdateLabel(void)
      {
        flagHasSpokenUpdateLabel = false;
      }
    void setUpdateLabel(std::string new_value)
      {
        flagHasUpdateLabel = true;
        storeUpdateLabel = new_value;
      }
    void unsetUpdateLabel(void)
      {
        flagHasUpdateLabel = false;
      }

    virtual void extraFlightBookingFilterAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightBookingFilterSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightBookingFilterLookup(key);
        if (old_field == NULL)
          {
            extraFlightBookingFilterAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasFlightSegmentFilters)
          {
            handler->start_pair("FlightSegmentFilters");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeFlightSegmentFilters.size(); ++num1)
              {
                storeFlightSegmentFilters[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasIndexOfLastUpdatedFlightSegmentFilter)
          {
            handler->start_pair("IndexOfLastUpdatedFlightSegmentFilter");
            handler->number_value(storeIndexOfLastUpdatedFlightSegmentFilter.get_o_integer());
          }
        if (flagHasFlightTripType)
          {
            handler->start_pair("FlightTripType");
            storeFlightTripType->write_as_json(handler);
          }
        if (flagHasSameDayOrOvernight)
          {
            handler->start_pair("SameDayOrOvernight");
            storeSameDayOrOvernight->write_as_json(handler);
          }
        if (flagHasReturnFlightSegmentFilter)
          {
            handler->start_pair("ReturnFlightSegmentFilter");
            storeReturnFlightSegmentFilter->write_as_json(handler);
          }
        if (flagHasLastTripDuration)
          {
            handler->start_pair("LastTripDuration");
            if (textStoreLastTripDuration != "")
                handler->number_value(textStoreLastTripDuration.c_str());
            else if (((double)(long int)storeLastTripDuration) == storeLastTripDuration)
                handler->number_value((long int)storeLastTripDuration);
            else
                handler->number_value(storeLastTripDuration);
          }
        if (flagHasNumberOfStops)
          {
            handler->start_pair("NumberOfStops");
            storeNumberOfStops->write_as_json(handler);
          }
        if (flagHasPriceRange)
          {
            handler->start_pair("PriceRange");
            storePriceRange->write_as_json(handler);
          }
        if (flagHasRangeOfLayoverDuration)
          {
            handler->start_pair("RangeOfLayoverDuration");
            storeRangeOfLayoverDuration->write_as_json(handler);
          }
        if (flagHasRangeOfTotalLayoverDuration)
          {
            handler->start_pair("RangeOfTotalLayoverDuration");
            storeRangeOfTotalLayoverDuration->write_as_json(handler);
          }
        if (flagHasRangeOfTravelDuration)
          {
            handler->start_pair("RangeOfTravelDuration");
            storeRangeOfTravelDuration->write_as_json(handler);
          }
        if (flagHasRangeOfTotalTravelDuration)
          {
            handler->start_pair("RangeOfTotalTravelDuration");
            storeRangeOfTotalTravelDuration->write_as_json(handler);
          }
        if (flagHasAvoidChangePenalties)
          {
            handler->start_pair("AvoidChangePenalties");
            handler->boolean_value(storeAvoidChangePenalties);
          }
        if (flagHasAirlineFilter)
          {
            handler->start_pair("AirlineFilter");
            storeAirlineFilter->write_as_json(handler);
          }
        if (flagHasSeatPreferences)
          {
            handler->start_pair("SeatPreferences");
            storeSeatPreferences->write_as_json(handler);
          }
        if (flagHasCabinClassFilter)
          {
            handler->start_pair("CabinClassFilter");
            storeCabinClassFilter->write_as_json(handler);
          }
        if (flagHasAirportFilter)
          {
            handler->start_pair("AirportFilter");
            storeAirportFilter->write_as_json(handler);
          }
        if (flagHasPassengerTypesWithCount)
          {
            handler->start_pair("PassengerTypesWithCount");
            assert(storePassengerTypesWithCount.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storePassengerTypesWithCount.size(); ++num2)
              {
                storePassengerTypesWithCount[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasNumberOfSeatsOrTicketsRequested)
          {
            handler->start_pair("NumberOfSeatsOrTicketsRequested");
            handler->number_value(storeNumberOfSeatsOrTicketsRequested.get_o_integer());
          }
        assert(flagHasFlightListSortCriteria);
        handler->start_pair("FlightListSortCriteria");
        handler->start_array();
        for (size_t num3 = 0; num3 < storeFlightListSortCriteria.size(); ++num3)
          {
            storeFlightListSortCriteria[num3]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasUpdatedSearchCriteria)
          {
            handler->start_pair("UpdatedSearchCriteria");
            assert(storeUpdatedSearchCriteria.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeUpdatedSearchCriteria.size(); ++num4)
              {
                storeUpdatedSearchCriteria[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSearchCriteria)
          {
            handler->start_pair("SearchCriteria");
            assert(storeSearchCriteria.size() >= 1);
            handler->start_array();
            for (size_t num5 = 0; num5 < storeSearchCriteria.size(); ++num5)
              {
                storeSearchCriteria[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpokenLabel)
          {
            handler->start_pair("SpokenLabel");
            handler->string_value(storeSpokenLabel);
          }
        if (flagHasLabel)
          {
            handler->start_pair("Label");
            handler->string_value(storeLabel);
          }
        if (flagHasSpokenUpdateLabel)
          {
            handler->start_pair("SpokenUpdateLabel");
            handler->string_value(storeSpokenUpdateLabel);
          }
        if (flagHasUpdateLabel)
          {
            handler->start_pair("UpdateLabel");
            handler->string_value(storeUpdateLabel);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightListSortCriteria()))
          {
            return "When parsing the object for %what%, the \"FlightListSortCriteria\" field was missing.";
          }
        return NULL;
      }

    static FlightBookingFilterJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightBookingFilterJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightBookingFilterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingFilterJSON>, FlightBookingFilterJSON *, bool> generator("Type FlightBookingFilter", ignore_extras);
            parse_json_value(text, "Text for FlightBookingFilterJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightBookingFilterJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightBookingFilterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingFilterJSON>, FlightBookingFilterJSON *, bool> generator("Type FlightBookingFilter", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingArrayGenerator<FlightSegmentFilterJSON::Generator, RCHandle<FlightSegmentFilterJSON>, FlightSegmentFilterJSON *, bool > fieldGeneratorFlightSegmentFilters;
        static char lowerBoundIndexOfLastUpdatedFlightSegmentFilter[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundIndexOfLastUpdatedFlightSegmentFilter>, OInteger, o_integer > fieldGeneratorIndexOfLastUpdatedFlightSegmentFilter;
        JSONHoldingGenerator<FlightTripTypeJSON::Generator, RCHandle<FlightTripTypeJSON>, FlightTripTypeJSON *, bool > fieldGeneratorFlightTripType;
        JSONHoldingGenerator<SameDayOrOvernightJSON::Generator, RCHandle<SameDayOrOvernightJSON>, SameDayOrOvernightJSON *, bool > fieldGeneratorSameDayOrOvernight;
        JSONHoldingGenerator<FlightSegmentFilterJSON::Generator, RCHandle<FlightSegmentFilterJSON>, FlightSegmentFilterJSON *, bool > fieldGeneratorReturnFlightSegmentFilter;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLastTripDuration;
        JSONHoldingGenerator<IntegerIntervalJSON::Generator, RCHandle<IntegerIntervalJSON>, IntegerIntervalJSON *, bool > fieldGeneratorNumberOfStops;
        JSONHoldingGenerator<PriceRangeJSON::Generator, RCHandle<PriceRangeJSON>, PriceRangeJSON *, bool > fieldGeneratorPriceRange;
        JSONHoldingGenerator<RangeOfDurationJSON::Generator, RCHandle<RangeOfDurationJSON>, RangeOfDurationJSON *, bool > fieldGeneratorRangeOfLayoverDuration;
        JSONHoldingGenerator<RangeOfDurationJSON::Generator, RCHandle<RangeOfDurationJSON>, RangeOfDurationJSON *, bool > fieldGeneratorRangeOfTotalLayoverDuration;
        JSONHoldingGenerator<RangeOfDurationJSON::Generator, RCHandle<RangeOfDurationJSON>, RangeOfDurationJSON *, bool > fieldGeneratorRangeOfTravelDuration;
        JSONHoldingGenerator<RangeOfDurationJSON::Generator, RCHandle<RangeOfDurationJSON>, RangeOfDurationJSON *, bool > fieldGeneratorRangeOfTotalTravelDuration;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAvoidChangePenalties;
        JSONHoldingGenerator<AirlineFilterJSON::Generator, RCHandle<AirlineFilterJSON>, AirlineFilterJSON *, bool > fieldGeneratorAirlineFilter;
        JSONHoldingGenerator<FlightSeatPreferencesJSON::Generator, RCHandle<FlightSeatPreferencesJSON>, FlightSeatPreferencesJSON *, bool > fieldGeneratorSeatPreferences;
        JSONHoldingGenerator<CabinClassFilterJSON::Generator, RCHandle<CabinClassFilterJSON>, CabinClassFilterJSON *, bool > fieldGeneratorCabinClassFilter;
        JSONHoldingGenerator<FlightTravelLocationFilterJSON::Generator, RCHandle<FlightTravelLocationFilterJSON>, FlightTravelLocationFilterJSON *, bool > fieldGeneratorAirportFilter;
        JSONHoldingArrayGenerator<FlightPassengerTypeCountJSON::Generator, RCHandle<FlightPassengerTypeCountJSON>, FlightPassengerTypeCountJSON *, bool > fieldGeneratorPassengerTypesWithCount;
        static char lowerBoundNumberOfSeatsOrTicketsRequested[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumberOfSeatsOrTicketsRequested>, OInteger, o_integer > fieldGeneratorNumberOfSeatsOrTicketsRequested;
        JSONHoldingArrayGenerator<FlightListSortCriterionJSON::Generator, RCHandle<FlightListSortCriterionJSON>, FlightListSortCriterionJSON *, bool > fieldGeneratorFlightListSortCriteria;
        JSONHoldingArrayGenerator<FlightSearchCriterionJSON::Generator, RCHandle<FlightSearchCriterionJSON>, FlightSearchCriterionJSON *, bool > fieldGeneratorUpdatedSearchCriteria;
        JSONHoldingArrayGenerator<FlightSearchCriterionJSON::Generator, RCHandle<FlightSearchCriterionJSON>, FlightSearchCriterionJSON *, bool > fieldGeneratorSearchCriteria;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenUpdateLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUpdateLabel;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            FlightBookingFilterJSON *result = new FlightBookingFilterJSON();
            assert(result != NULL);
            RCHandle<FlightBookingFilterJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightBookingFilterAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightBookingFilterJSON *result)
          {
            if (fieldGeneratorFlightSegmentFilters.have_value)
              {
                result->initFlightSegmentFilters();
                size_t count = fieldGeneratorFlightSegmentFilters.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightSegmentFilters(fieldGeneratorFlightSegmentFilters.value[num].referenced());
                  }
                fieldGeneratorFlightSegmentFilters.value.clear();
                fieldGeneratorFlightSegmentFilters.have_value = false;
              }
            if (fieldGeneratorIndexOfLastUpdatedFlightSegmentFilter.have_value)
              {
                result->setIndexOfLastUpdatedFlightSegmentFilter(fieldGeneratorIndexOfLastUpdatedFlightSegmentFilter.value);
                fieldGeneratorIndexOfLastUpdatedFlightSegmentFilter.have_value = false;
              }
            if (fieldGeneratorFlightTripType.have_value)
              {
                result->setFlightTripType(fieldGeneratorFlightTripType.value.referenced());
                fieldGeneratorFlightTripType.have_value = false;
              }
            if (fieldGeneratorSameDayOrOvernight.have_value)
              {
                result->setSameDayOrOvernight(fieldGeneratorSameDayOrOvernight.value.referenced());
                fieldGeneratorSameDayOrOvernight.have_value = false;
              }
            if (fieldGeneratorReturnFlightSegmentFilter.have_value)
              {
                result->setReturnFlightSegmentFilter(fieldGeneratorReturnFlightSegmentFilter.value.referenced());
                fieldGeneratorReturnFlightSegmentFilter.have_value = false;
              }
            if (fieldGeneratorLastTripDuration.have_value)
              {
                result->setLastTripDurationText(fieldGeneratorLastTripDuration.value);
                fieldGeneratorLastTripDuration.have_value = false;
              }
            if (fieldGeneratorNumberOfStops.have_value)
              {
                result->setNumberOfStops(fieldGeneratorNumberOfStops.value.referenced());
                fieldGeneratorNumberOfStops.have_value = false;
              }
            if (fieldGeneratorPriceRange.have_value)
              {
                result->setPriceRange(fieldGeneratorPriceRange.value.referenced());
                fieldGeneratorPriceRange.have_value = false;
              }
            if (fieldGeneratorRangeOfLayoverDuration.have_value)
              {
                result->setRangeOfLayoverDuration(fieldGeneratorRangeOfLayoverDuration.value.referenced());
                fieldGeneratorRangeOfLayoverDuration.have_value = false;
              }
            if (fieldGeneratorRangeOfTotalLayoverDuration.have_value)
              {
                result->setRangeOfTotalLayoverDuration(fieldGeneratorRangeOfTotalLayoverDuration.value.referenced());
                fieldGeneratorRangeOfTotalLayoverDuration.have_value = false;
              }
            if (fieldGeneratorRangeOfTravelDuration.have_value)
              {
                result->setRangeOfTravelDuration(fieldGeneratorRangeOfTravelDuration.value.referenced());
                fieldGeneratorRangeOfTravelDuration.have_value = false;
              }
            if (fieldGeneratorRangeOfTotalTravelDuration.have_value)
              {
                result->setRangeOfTotalTravelDuration(fieldGeneratorRangeOfTotalTravelDuration.value.referenced());
                fieldGeneratorRangeOfTotalTravelDuration.have_value = false;
              }
            if (fieldGeneratorAvoidChangePenalties.have_value)
              {
                result->setAvoidChangePenalties(fieldGeneratorAvoidChangePenalties.value);
                fieldGeneratorAvoidChangePenalties.have_value = false;
              }
            if (fieldGeneratorAirlineFilter.have_value)
              {
                result->setAirlineFilter(fieldGeneratorAirlineFilter.value.referenced());
                fieldGeneratorAirlineFilter.have_value = false;
              }
            if (fieldGeneratorSeatPreferences.have_value)
              {
                result->setSeatPreferences(fieldGeneratorSeatPreferences.value.referenced());
                fieldGeneratorSeatPreferences.have_value = false;
              }
            if (fieldGeneratorCabinClassFilter.have_value)
              {
                result->setCabinClassFilter(fieldGeneratorCabinClassFilter.value.referenced());
                fieldGeneratorCabinClassFilter.have_value = false;
              }
            if (fieldGeneratorAirportFilter.have_value)
              {
                result->setAirportFilter(fieldGeneratorAirportFilter.value.referenced());
                fieldGeneratorAirportFilter.have_value = false;
              }
            if (fieldGeneratorPassengerTypesWithCount.have_value)
              {
                result->initPassengerTypesWithCount();
                size_t count = fieldGeneratorPassengerTypesWithCount.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPassengerTypesWithCount(fieldGeneratorPassengerTypesWithCount.value[num].referenced());
                  }
                fieldGeneratorPassengerTypesWithCount.value.clear();
                fieldGeneratorPassengerTypesWithCount.have_value = false;
              }
            if (fieldGeneratorNumberOfSeatsOrTicketsRequested.have_value)
              {
                result->setNumberOfSeatsOrTicketsRequested(fieldGeneratorNumberOfSeatsOrTicketsRequested.value);
                fieldGeneratorNumberOfSeatsOrTicketsRequested.have_value = false;
              }
            if (fieldGeneratorFlightListSortCriteria.have_value)
              {
                result->initFlightListSortCriteria();
                size_t count = fieldGeneratorFlightListSortCriteria.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightListSortCriteria(fieldGeneratorFlightListSortCriteria.value[num].referenced());
                  }
                fieldGeneratorFlightListSortCriteria.value.clear();
                fieldGeneratorFlightListSortCriteria.have_value = false;
              }
            else if (!(result->hasFlightListSortCriteria()))
              {
                error("When parsing the object for %what%, the \"FlightListSortCriteria\" field was missing.");
              }
            if (fieldGeneratorUpdatedSearchCriteria.have_value)
              {
                result->initUpdatedSearchCriteria();
                size_t count = fieldGeneratorUpdatedSearchCriteria.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendUpdatedSearchCriteria(fieldGeneratorUpdatedSearchCriteria.value[num].referenced());
                  }
                fieldGeneratorUpdatedSearchCriteria.value.clear();
                fieldGeneratorUpdatedSearchCriteria.have_value = false;
              }
            if (fieldGeneratorSearchCriteria.have_value)
              {
                result->initSearchCriteria();
                size_t count = fieldGeneratorSearchCriteria.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSearchCriteria(fieldGeneratorSearchCriteria.value[num].referenced());
                  }
                fieldGeneratorSearchCriteria.value.clear();
                fieldGeneratorSearchCriteria.have_value = false;
              }
            if (fieldGeneratorSpokenLabel.have_value)
              {
                result->setSpokenLabel(fieldGeneratorSpokenLabel.value);
                fieldGeneratorSpokenLabel.have_value = false;
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            if (fieldGeneratorSpokenUpdateLabel.have_value)
              {
                result->setSpokenUpdateLabel(fieldGeneratorSpokenUpdateLabel.value);
                fieldGeneratorSpokenUpdateLabel.have_value = false;
              }
            if (fieldGeneratorUpdateLabel.have_value)
              {
                result->setUpdateLabel(fieldGeneratorUpdateLabel.value);
                fieldGeneratorUpdateLabel.have_value = false;
              }
          }
        virtual void handle_result(FlightBookingFilterJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "r", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'l':
                                        if (strcmp(&(field_name[4]), "ineFilter") == 0)
                                            return &fieldGeneratorAirlineFilter;
                                        break;
                                    case 'p':
                                        if (strcmp(&(field_name[4]), "ortFilter") == 0)
                                            return &fieldGeneratorAirportFilter;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            if (strcmp(&(field_name[2]), "oidChangePenalties") == 0)
                                return &fieldGeneratorAvoidChangePenalties;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "abinClassFilter") == 0)
                        return &fieldGeneratorCabinClassFilter;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "light", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[7]), "istSortCriteria") == 0)
                                    return &fieldGeneratorFlightListSortCriteria;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[7]), "egmentFilters") == 0)
                                    return &fieldGeneratorFlightSegmentFilters;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "ripType") == 0)
                                    return &fieldGeneratorFlightTripType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "ndexOfLastUpdatedFlightSegmentFilter") == 0)
                        return &fieldGeneratorIndexOfLastUpdatedFlightSegmentFilter;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'b':
                                if (strcmp(&(field_name[3]), "el") == 0)
                                    return &fieldGeneratorLabel;
                                break;
                            case 's':
                                if (strcmp(&(field_name[3]), "tTripDuration") == 0)
                                    return &fieldGeneratorLastTripDuration;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strncmp(&(field_name[1]), "umberOfS", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[10]), "atsOrTicketsRequested") == 0)
                                    return &fieldGeneratorNumberOfSeatsOrTicketsRequested;
                                break;
                            case 't':
                                if (strcmp(&(field_name[10]), "ops") == 0)
                                    return &fieldGeneratorNumberOfStops;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ssengerTypesWithCount") == 0)
                                return &fieldGeneratorPassengerTypesWithCount;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "iceRange") == 0)
                                return &fieldGeneratorPriceRange;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "ngeOf", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'L':
                                        if (strcmp(&(field_name[8]), "ayoverDuration") == 0)
                                            return &fieldGeneratorRangeOfLayoverDuration;
                                        break;
                                    case 'T':
                                        switch ((unsigned char)(field_name[8]))
                                          {
                                            case 'o':
                                                if (strncmp(&(field_name[9]), "tal", 3) == 0)
                                                  {
                                                    switch ((unsigned char)(field_name[12]))
                                                      {
                                                        case 'L':
                                                            if (strcmp(&(field_name[13]), "ayoverDuration") == 0)
                                                                return &fieldGeneratorRangeOfTotalLayoverDuration;
                                                            break;
                                                        case 'T':
                                                            if (strcmp(&(field_name[13]), "ravelDuration") == 0)
                                                                return &fieldGeneratorRangeOfTotalTravelDuration;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'r':
                                                if (strcmp(&(field_name[9]), "avelDuration") == 0)
                                                    return &fieldGeneratorRangeOfTravelDuration;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "turnFlightSegmentFilter") == 0)
                                return &fieldGeneratorReturnFlightSegmentFilter;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "meDayOrOvernight") == 0)
                                return &fieldGeneratorSameDayOrOvernight;
                            break;
                        case 'e':
                            if (strncmp(&(field_name[2]), "a", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'r':
                                        if (strcmp(&(field_name[4]), "chCriteria") == 0)
                                            return &fieldGeneratorSearchCriteria;
                                        break;
                                    case 't':
                                        if (strcmp(&(field_name[4]), "Preferences") == 0)
                                            return &fieldGeneratorSeatPreferences;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'p':
                            if (strncmp(&(field_name[2]), "oken", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'L':
                                        if (strcmp(&(field_name[7]), "abel") == 0)
                                            return &fieldGeneratorSpokenLabel;
                                        break;
                                    case 'U':
                                        if (strcmp(&(field_name[7]), "pdateLabel") == 0)
                                            return &fieldGeneratorSpokenUpdateLabel;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "pdate", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[7]), "abel") == 0)
                                    return &fieldGeneratorUpdateLabel;
                                break;
                            case 'd':
                                if (strcmp(&(field_name[7]), "SearchCriteria") == 0)
                                    return &fieldGeneratorUpdatedSearchCriteria;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFlightSegmentFilters("field \"FlightSegmentFilters\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorIndexOfLastUpdatedFlightSegmentFilter("field \"IndexOfLastUpdatedFlightSegmentFilter\" of the FlightBookingFilter class"), fieldGeneratorFlightTripType("field \"FlightTripType\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorSameDayOrOvernight("field \"SameDayOrOvernight\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorReturnFlightSegmentFilter("field \"ReturnFlightSegmentFilter\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorLastTripDuration("field \"LastTripDuration\" of the FlightBookingFilter class"), fieldGeneratorNumberOfStops("field \"NumberOfStops\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorPriceRange("field \"PriceRange\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorRangeOfLayoverDuration("field \"RangeOfLayoverDuration\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorRangeOfTotalLayoverDuration("field \"RangeOfTotalLayoverDuration\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorRangeOfTravelDuration("field \"RangeOfTravelDuration\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorRangeOfTotalTravelDuration("field \"RangeOfTotalTravelDuration\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorAvoidChangePenalties("field \"AvoidChangePenalties\" of the FlightBookingFilter class"), fieldGeneratorAirlineFilter("field \"AirlineFilter\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorSeatPreferences("field \"SeatPreferences\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorCabinClassFilter("field \"CabinClassFilter\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorAirportFilter("field \"AirportFilter\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorPassengerTypesWithCount("field \"PassengerTypesWithCount\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorNumberOfSeatsOrTicketsRequested("field \"NumberOfSeatsOrTicketsRequested\" of the FlightBookingFilter class"), fieldGeneratorFlightListSortCriteria("field \"FlightListSortCriteria\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorUpdatedSearchCriteria("field \"UpdatedSearchCriteria\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorSearchCriteria("field \"SearchCriteria\" of the FlightBookingFilter class", ignore_extras), fieldGeneratorSpokenLabel("field \"SpokenLabel\" of the FlightBookingFilter class"), fieldGeneratorLabel("field \"Label\" of the FlightBookingFilter class"), fieldGeneratorSpokenUpdateLabel("field \"SpokenUpdateLabel\" of the FlightBookingFilter class"), fieldGeneratorUpdateLabel("field \"UpdateLabel\" of the FlightBookingFilter class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightBookingFilter class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFlightSegmentFilters.reset();
            fieldGeneratorIndexOfLastUpdatedFlightSegmentFilter.reset();
            fieldGeneratorFlightTripType.reset();
            fieldGeneratorSameDayOrOvernight.reset();
            fieldGeneratorReturnFlightSegmentFilter.reset();
            fieldGeneratorLastTripDuration.reset();
            fieldGeneratorNumberOfStops.reset();
            fieldGeneratorPriceRange.reset();
            fieldGeneratorRangeOfLayoverDuration.reset();
            fieldGeneratorRangeOfTotalLayoverDuration.reset();
            fieldGeneratorRangeOfTravelDuration.reset();
            fieldGeneratorRangeOfTotalTravelDuration.reset();
            fieldGeneratorAvoidChangePenalties.reset();
            fieldGeneratorAirlineFilter.reset();
            fieldGeneratorSeatPreferences.reset();
            fieldGeneratorCabinClassFilter.reset();
            fieldGeneratorAirportFilter.reset();
            fieldGeneratorPassengerTypesWithCount.reset();
            fieldGeneratorNumberOfSeatsOrTicketsRequested.reset();
            fieldGeneratorFlightListSortCriteria.reset();
            fieldGeneratorUpdatedSearchCriteria.reset();
            fieldGeneratorSearchCriteria.reset();
            fieldGeneratorSpokenLabel.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorSpokenUpdateLabel.reset();
            fieldGeneratorUpdateLabel.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTBOOKINGFILTERJSON_H */
