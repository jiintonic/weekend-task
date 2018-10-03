/* file "FlightSegmentFilterJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSEGMENTFILTERJSON_H
#define FLIGHTSEGMENTFILTERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "FlightTravelLocationFilterJSON.h"
#include "FlightTravelLocationFilterJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "FlightSegmentSearchCriterionJSON.h"
#include "FlightSegmentSearchCriterionJSON.h"
#include "DepartureOrArrivalJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSegmentFilterJSON : public ReferenceCounted
  {
  private:
    bool flagHasFindNextAvailableFlight;
    bool storeFindNextAvailableFlight;
    bool flagHasDepartureLocationFilter;
    FlightTravelLocationFilterJSON * storeDepartureLocationFilter;
    bool flagHasDestinationLocationFilter;
    FlightTravelLocationFilterJSON * storeDestinationLocationFilter;
    bool flagHasDepartureDateTimeRange;
    DateTimeRangeSpecJSON * storeDepartureDateTimeRange;
    bool flagHasDepartureTimeSpan;
    std::string storeDepartureTimeSpan;
    bool flagHasSearchCriteria;
    std::vector< FlightSegmentSearchCriterionJSON * > storeSearchCriteria;
    bool flagHasUpdatedSearchCriteria;
    std::vector< FlightSegmentSearchCriterionJSON * > storeUpdatedSearchCriteria;
    bool flagHasTypeOfLastDateTimeRangeFilter;
    DepartureOrArrivalJSON * storeTypeOfLastDateTimeRangeFilter;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightSegmentFilterJSON(const FlightSegmentFilterJSON &);
    FlightSegmentFilterJSON & operator=(const FlightSegmentFilterJSON &other);

    void  fromJSONFindNextAvailableFlight(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureLocationFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationLocationFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureDateTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureTimeSpan(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUpdatedSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTypeOfLastDateTimeRangeFilter(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSegmentFilterJSON(void);
    virtual ~FlightSegmentFilterJSON(void);
    bool  hasFindNextAvailableFlight(void) const;
    bool  getFindNextAvailableFlight(void);
    const bool  getFindNextAvailableFlight(void) const;
    bool  hasDepartureLocationFilter(void) const;
    FlightTravelLocationFilterJSON *  getDepartureLocationFilter(void);
    const FlightTravelLocationFilterJSON *  getDepartureLocationFilter(void) const;
    bool  hasDestinationLocationFilter(void) const;
    FlightTravelLocationFilterJSON *  getDestinationLocationFilter(void);
    const FlightTravelLocationFilterJSON *  getDestinationLocationFilter(void) const;
    bool  hasDepartureDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getDepartureDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getDepartureDateTimeRange(void) const;
    bool  hasDepartureTimeSpan(void) const;
    std::string  getDepartureTimeSpan(void);
    const std::string  getDepartureTimeSpan(void) const;
    bool  hasSearchCriteria(void) const;
    size_t  countOfSearchCriteria(void) const;
    FlightSegmentSearchCriterionJSON *  elementOfSearchCriteria(size_t element_num);
    const FlightSegmentSearchCriterionJSON *  elementOfSearchCriteria(size_t element_num) const;
    std::vector< FlightSegmentSearchCriterionJSON * >  getSearchCriteria(void);
    const std::vector< FlightSegmentSearchCriterionJSON * >  getSearchCriteria(void) const;
    bool  hasUpdatedSearchCriteria(void) const;
    size_t  countOfUpdatedSearchCriteria(void) const;
    FlightSegmentSearchCriterionJSON *  elementOfUpdatedSearchCriteria(size_t element_num);
    const FlightSegmentSearchCriterionJSON *  elementOfUpdatedSearchCriteria(size_t element_num) const;
    std::vector< FlightSegmentSearchCriterionJSON * >  getUpdatedSearchCriteria(void);
    const std::vector< FlightSegmentSearchCriterionJSON * >  getUpdatedSearchCriteria(void) const;
    bool  hasTypeOfLastDateTimeRangeFilter(void) const;
    DepartureOrArrivalJSON *  getTypeOfLastDateTimeRangeFilter(void);
    const DepartureOrArrivalJSON *  getTypeOfLastDateTimeRangeFilter(void) const;
    DepartureOrArrivalJSON::TypeValue  getTypeOfLastDateTimeRangeFilterValue(void);
    const DepartureOrArrivalJSON::TypeValue  getTypeOfLastDateTimeRangeFilterValue(void) const;
    const char * getTypeOfLastDateTimeRangeFilterAsChars(void) const;
    std::string  getTypeOfLastDateTimeRangeFilterAsString(void) const;

    virtual size_t extraFlightSegmentFilterComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightSegmentFilterComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightSegmentFilterComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightSegmentFilterComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightSegmentFilterLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightSegmentFilterLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFindNextAvailableFlight(bool new_value)
      {
        flagHasFindNextAvailableFlight = true;
        storeFindNextAvailableFlight = new_value;
      }
    void unsetFindNextAvailableFlight(void)
      {
        flagHasFindNextAvailableFlight = false;
      }
    void setDepartureLocationFilter(FlightTravelLocationFilterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDepartureLocationFilter)
          {
            storeDepartureLocationFilter->remove_reference();
          }
        flagHasDepartureLocationFilter = true;
        storeDepartureLocationFilter = new_value;
      }
    void unsetDepartureLocationFilter(void)
      {
        if (flagHasDepartureLocationFilter)
          {
            storeDepartureLocationFilter->remove_reference();
          }
        flagHasDepartureLocationFilter = false;
      }
    void setDestinationLocationFilter(FlightTravelLocationFilterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationLocationFilter)
          {
            storeDestinationLocationFilter->remove_reference();
          }
        flagHasDestinationLocationFilter = true;
        storeDestinationLocationFilter = new_value;
      }
    void unsetDestinationLocationFilter(void)
      {
        if (flagHasDestinationLocationFilter)
          {
            storeDestinationLocationFilter->remove_reference();
          }
        flagHasDestinationLocationFilter = false;
      }
    void setDepartureDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDepartureDateTimeRange)
          {
            storeDepartureDateTimeRange->remove_reference();
          }
        flagHasDepartureDateTimeRange = true;
        storeDepartureDateTimeRange = new_value;
      }
    void unsetDepartureDateTimeRange(void)
      {
        if (flagHasDepartureDateTimeRange)
          {
            storeDepartureDateTimeRange->remove_reference();
          }
        flagHasDepartureDateTimeRange = false;
      }
    void setDepartureTimeSpan(std::string new_value)
      {
        flagHasDepartureTimeSpan = true;
        storeDepartureTimeSpan = new_value;
      }
    void unsetDepartureTimeSpan(void)
      {
        flagHasDepartureTimeSpan = false;
      }
    void initSearchCriteria(void)
      {
        if (flagHasSearchCriteria)
          {
            for (size_t num3 = 0; num3 < storeSearchCriteria.size(); ++num3)
              {
                storeSearchCriteria[num3]->remove_reference();
              }
          }
        flagHasSearchCriteria = true;
        storeSearchCriteria.clear();
      }
    void appendSearchCriteria(FlightSegmentSearchCriterionJSON * to_append)
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
    void appendSearchCriteria(FlightSegmentSearchCriterionJSON::TypeValue new_value)
      {
        appendSearchCriteria(new FlightSegmentSearchCriterionJSON(new_value));
      }
    void appendSearchCriteria(const char *chars)
      {
        FlightSegmentSearchCriterionJSON::TypeValueKnownValues known = FlightSegmentSearchCriterionJSON::stringToValue(chars);
        FlightSegmentSearchCriterionJSON::TypeValue new_value;
        if (known == FlightSegmentSearchCriterionJSON::Value__none)
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
            for (size_t num4 = 0; num4 < storeSearchCriteria.size(); ++num4)
              {
                storeSearchCriteria[num4]->remove_reference();
              }
          }
        flagHasSearchCriteria = false;
        storeSearchCriteria.clear();
      }
    void initUpdatedSearchCriteria(void)
      {
        if (flagHasUpdatedSearchCriteria)
          {
            for (size_t num5 = 0; num5 < storeUpdatedSearchCriteria.size(); ++num5)
              {
                storeUpdatedSearchCriteria[num5]->remove_reference();
              }
          }
        flagHasUpdatedSearchCriteria = true;
        storeUpdatedSearchCriteria.clear();
      }
    void appendUpdatedSearchCriteria(FlightSegmentSearchCriterionJSON * to_append)
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
    void appendUpdatedSearchCriteria(FlightSegmentSearchCriterionJSON::TypeValue new_value)
      {
        appendUpdatedSearchCriteria(new FlightSegmentSearchCriterionJSON(new_value));
      }
    void appendUpdatedSearchCriteria(const char *chars)
      {
        FlightSegmentSearchCriterionJSON::TypeValueKnownValues known = FlightSegmentSearchCriterionJSON::stringToValue(chars);
        FlightSegmentSearchCriterionJSON::TypeValue new_value;
        if (known == FlightSegmentSearchCriterionJSON::Value__none)
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
            for (size_t num6 = 0; num6 < storeUpdatedSearchCriteria.size(); ++num6)
              {
                storeUpdatedSearchCriteria[num6]->remove_reference();
              }
          }
        flagHasUpdatedSearchCriteria = false;
        storeUpdatedSearchCriteria.clear();
      }
    void setTypeOfLastDateTimeRangeFilter(DepartureOrArrivalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTypeOfLastDateTimeRangeFilter)
          {
            storeTypeOfLastDateTimeRangeFilter->remove_reference();
          }
        flagHasTypeOfLastDateTimeRangeFilter = true;
        storeTypeOfLastDateTimeRangeFilter = new_value;
      }
    void setTypeOfLastDateTimeRangeFilter(DepartureOrArrivalJSON::TypeValue new_value)
      {
        setTypeOfLastDateTimeRangeFilter(new DepartureOrArrivalJSON(new_value));
      }
    void setTypeOfLastDateTimeRangeFilter(const char *chars)
      {
        setTypeOfLastDateTimeRangeFilter(new DepartureOrArrivalJSON(chars));
      }
    void setTypeOfLastDateTimeRangeFilter(std::string the_string)
      {
        setTypeOfLastDateTimeRangeFilter(new DepartureOrArrivalJSON(the_string));
      }
    void unsetTypeOfLastDateTimeRangeFilter(void)
      {
        if (flagHasTypeOfLastDateTimeRangeFilter)
          {
            storeTypeOfLastDateTimeRangeFilter->remove_reference();
          }
        flagHasTypeOfLastDateTimeRangeFilter = false;
      }

    virtual void extraFlightSegmentFilterAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightSegmentFilterSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightSegmentFilterLookup(key);
        if (old_field == NULL)
          {
            extraFlightSegmentFilterAppendPair(key, new_component);
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
        if (flagHasFindNextAvailableFlight)
          {
            handler->start_pair("FindNextAvailableFlight");
            handler->boolean_value(storeFindNextAvailableFlight);
          }
        if (flagHasDepartureLocationFilter)
          {
            handler->start_pair("DepartureLocationFilter");
            storeDepartureLocationFilter->write_as_json(handler);
          }
        if (flagHasDestinationLocationFilter)
          {
            handler->start_pair("DestinationLocationFilter");
            storeDestinationLocationFilter->write_as_json(handler);
          }
        if (flagHasDepartureDateTimeRange)
          {
            handler->start_pair("DepartureDateTimeRange");
            storeDepartureDateTimeRange->write_as_json(handler);
          }
        if (flagHasDepartureTimeSpan)
          {
            handler->start_pair("DepartureTimeSpan");
            handler->string_value(storeDepartureTimeSpan);
          }
        if (flagHasSearchCriteria)
          {
            handler->start_pair("SearchCriteria");
            assert(storeSearchCriteria.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSearchCriteria.size(); ++num1)
              {
                storeSearchCriteria[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasUpdatedSearchCriteria)
          {
            handler->start_pair("UpdatedSearchCriteria");
            assert(storeUpdatedSearchCriteria.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeUpdatedSearchCriteria.size(); ++num2)
              {
                storeUpdatedSearchCriteria[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasTypeOfLastDateTimeRangeFilter)
          {
            handler->start_pair("TypeOfLastDateTimeRangeFilter");
            storeTypeOfLastDateTimeRangeFilter->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightSegmentFilterJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSegmentFilterJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSegmentFilterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentFilterJSON>, FlightSegmentFilterJSON *, bool> generator("Type FlightSegmentFilter", ignore_extras);
            parse_json_value(text, "Text for FlightSegmentFilterJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSegmentFilterJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSegmentFilterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentFilterJSON>, FlightSegmentFilterJSON *, bool> generator("Type FlightSegmentFilter", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorFindNextAvailableFlight;
        JSONHoldingGenerator<FlightTravelLocationFilterJSON::Generator, RCHandle<FlightTravelLocationFilterJSON>, FlightTravelLocationFilterJSON *, bool > fieldGeneratorDepartureLocationFilter;
        JSONHoldingGenerator<FlightTravelLocationFilterJSON::Generator, RCHandle<FlightTravelLocationFilterJSON>, FlightTravelLocationFilterJSON *, bool > fieldGeneratorDestinationLocationFilter;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDepartureDateTimeRange;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDepartureTimeSpan;
        JSONHoldingArrayGenerator<FlightSegmentSearchCriterionJSON::Generator, RCHandle<FlightSegmentSearchCriterionJSON>, FlightSegmentSearchCriterionJSON *, bool > fieldGeneratorSearchCriteria;
        JSONHoldingArrayGenerator<FlightSegmentSearchCriterionJSON::Generator, RCHandle<FlightSegmentSearchCriterionJSON>, FlightSegmentSearchCriterionJSON *, bool > fieldGeneratorUpdatedSearchCriteria;
        JSONHoldingGenerator<DepartureOrArrivalJSON::Generator, RCHandle<DepartureOrArrivalJSON>, DepartureOrArrivalJSON *, bool > fieldGeneratorTypeOfLastDateTimeRangeFilter;
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
            FlightSegmentFilterJSON *result = new FlightSegmentFilterJSON();
            assert(result != NULL);
            RCHandle<FlightSegmentFilterJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightSegmentFilterAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightSegmentFilterJSON *result)
          {
            if (fieldGeneratorFindNextAvailableFlight.have_value)
              {
                result->setFindNextAvailableFlight(fieldGeneratorFindNextAvailableFlight.value);
                fieldGeneratorFindNextAvailableFlight.have_value = false;
              }
            if (fieldGeneratorDepartureLocationFilter.have_value)
              {
                result->setDepartureLocationFilter(fieldGeneratorDepartureLocationFilter.value.referenced());
                fieldGeneratorDepartureLocationFilter.have_value = false;
              }
            if (fieldGeneratorDestinationLocationFilter.have_value)
              {
                result->setDestinationLocationFilter(fieldGeneratorDestinationLocationFilter.value.referenced());
                fieldGeneratorDestinationLocationFilter.have_value = false;
              }
            if (fieldGeneratorDepartureDateTimeRange.have_value)
              {
                result->setDepartureDateTimeRange(fieldGeneratorDepartureDateTimeRange.value.referenced());
                fieldGeneratorDepartureDateTimeRange.have_value = false;
              }
            if (fieldGeneratorDepartureTimeSpan.have_value)
              {
                result->setDepartureTimeSpan(fieldGeneratorDepartureTimeSpan.value);
                fieldGeneratorDepartureTimeSpan.have_value = false;
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
            if (fieldGeneratorTypeOfLastDateTimeRangeFilter.have_value)
              {
                result->setTypeOfLastDateTimeRangeFilter(fieldGeneratorTypeOfLastDateTimeRangeFilter.value.referenced());
                fieldGeneratorTypeOfLastDateTimeRangeFilter.have_value = false;
              }
          }
        virtual void handle_result(FlightSegmentFilterJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'p':
                                if (strncmp(&(field_name[3]), "arture", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[9]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[10]), "ateTimeRange") == 0)
                                                return &fieldGeneratorDepartureDateTimeRange;
                                            break;
                                        case 'L':
                                            if (strcmp(&(field_name[10]), "ocationFilter") == 0)
                                                return &fieldGeneratorDepartureLocationFilter;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[10]), "imeSpan") == 0)
                                                return &fieldGeneratorDepartureTimeSpan;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 's':
                                if (strcmp(&(field_name[3]), "tinationLocationFilter") == 0)
                                    return &fieldGeneratorDestinationLocationFilter;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "indNextAvailableFlight") == 0)
                        return &fieldGeneratorFindNextAvailableFlight;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "earchCriteria") == 0)
                        return &fieldGeneratorSearchCriteria;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ypeOfLastDateTimeRangeFilter") == 0)
                        return &fieldGeneratorTypeOfLastDateTimeRangeFilter;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "pdatedSearchCriteria") == 0)
                        return &fieldGeneratorUpdatedSearchCriteria;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFindNextAvailableFlight("field \"FindNextAvailableFlight\" of the FlightSegmentFilter class"), fieldGeneratorDepartureLocationFilter("field \"DepartureLocationFilter\" of the FlightSegmentFilter class", ignore_extras), fieldGeneratorDestinationLocationFilter("field \"DestinationLocationFilter\" of the FlightSegmentFilter class", ignore_extras), fieldGeneratorDepartureDateTimeRange("field \"DepartureDateTimeRange\" of the FlightSegmentFilter class", ignore_extras), fieldGeneratorDepartureTimeSpan("field \"DepartureTimeSpan\" of the FlightSegmentFilter class"), fieldGeneratorSearchCriteria("field \"SearchCriteria\" of the FlightSegmentFilter class", ignore_extras), fieldGeneratorUpdatedSearchCriteria("field \"UpdatedSearchCriteria\" of the FlightSegmentFilter class", ignore_extras), fieldGeneratorTypeOfLastDateTimeRangeFilter("field \"TypeOfLastDateTimeRangeFilter\" of the FlightSegmentFilter class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightSegmentFilter class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFindNextAvailableFlight.reset();
            fieldGeneratorDepartureLocationFilter.reset();
            fieldGeneratorDestinationLocationFilter.reset();
            fieldGeneratorDepartureDateTimeRange.reset();
            fieldGeneratorDepartureTimeSpan.reset();
            fieldGeneratorSearchCriteria.reset();
            fieldGeneratorUpdatedSearchCriteria.reset();
            fieldGeneratorTypeOfLastDateTimeRangeFilter.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSEGMENTFILTERJSON_H */
