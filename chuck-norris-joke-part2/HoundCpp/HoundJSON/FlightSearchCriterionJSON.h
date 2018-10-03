/* file "FlightSearchCriterionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSEARCHCRITERIONJSON_H
#define FLIGHTSEARCHCRITERIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSearchCriterionJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_NumberOfStops,
        Value_PriceRange,
        Value_SeatPreferences,
        Value_RangeOfLayoverDuration,
        Value_RangeOfTotalLayoverDuration,
        Value_RangeOfTravelDuration,
        Value_RangeOfTotalTravelDuration,
        Value_SameDayOrOvernight,
        Value_Airlines,
        Value_FlightSegments,
        Value_ReturnFlightSegment,
        Value_LastTripDuration,
        Value_PassengerTypeCounts,
        Value_CabinClasses,
        Value_Airports,
        Value_SortCriteria,
        Value__none
      };
    struct TypeValue
      {
        bool in_known_list;
        std::string string_value;
        TypeValueKnownValues list_value;

        TypeValue(void);
        TypeValue(const TypeValue &other);
        TypeValue(TypeValueKnownValues other);
        bool  operator==(const TypeValue &other) const;
        bool  operator!=(const TypeValue &other) const;
        bool  operator<(const TypeValue &other) const;
        bool  operator>(const TypeValue &other) const;
        bool  operator>=(const TypeValue &other) const;
        bool  operator<=(const TypeValue &other) const;

      };

    static TypeValueKnownValues  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValueKnownValues the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    FlightSearchCriterionJSON(const FlightSearchCriterionJSON &);
    FlightSearchCriterionJSON & operator=(const FlightSearchCriterionJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSearchCriterionJSON(void);
    FlightSearchCriterionJSON(TypeValue init_value);
    FlightSearchCriterionJSON(const char *init_value);
    FlightSearchCriterionJSON(std::string init_value);
    FlightSearchCriterionJSON(TypeValueKnownValues init_value);
    virtual ~FlightSearchCriterionJSON(void);
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;
    const char * getValueAsChars(void) const;
    std::string  getValueAsString(void) const;


    void setValue(TypeValue new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void setValue(const char *chars)
      {
        TypeValueKnownValues known = stringToValue(chars);
        TypeValue new_value;
        if (known == Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setValue(new_value);
      }
    void setValue(std::string the_string)
      {
        setValue(the_string.c_str());
      }
    void setValue(TypeValueKnownValues new_value)
      {
        TypeValue new_full_value;
        assert(new_value != Value__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setValue(new_full_value);
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        if (storeValue.in_known_list)
          {
            switch (storeValue.list_value)
              {
                case Value_NumberOfStops:
                    handler->string_value("NumberOfStops");
                    break;
                case Value_PriceRange:
                    handler->string_value("PriceRange");
                    break;
                case Value_SeatPreferences:
                    handler->string_value("SeatPreferences");
                    break;
                case Value_RangeOfLayoverDuration:
                    handler->string_value("RangeOfLayoverDuration");
                    break;
                case Value_RangeOfTotalLayoverDuration:
                    handler->string_value("RangeOfTotalLayoverDuration");
                    break;
                case Value_RangeOfTravelDuration:
                    handler->string_value("RangeOfTravelDuration");
                    break;
                case Value_RangeOfTotalTravelDuration:
                    handler->string_value("RangeOfTotalTravelDuration");
                    break;
                case Value_SameDayOrOvernight:
                    handler->string_value("SameDayOrOvernight");
                    break;
                case Value_Airlines:
                    handler->string_value("Airlines");
                    break;
                case Value_FlightSegments:
                    handler->string_value("FlightSegments");
                    break;
                case Value_ReturnFlightSegment:
                    handler->string_value("ReturnFlightSegment");
                    break;
                case Value_LastTripDuration:
                    handler->string_value("LastTripDuration");
                    break;
                case Value_PassengerTypeCounts:
                    handler->string_value("PassengerTypeCounts");
                    break;
                case Value_CabinClasses:
                    handler->string_value("CabinClasses");
                    break;
                case Value_Airports:
                    handler->string_value("Airports");
                    break;
                case Value_SortCriteria:
                    handler->string_value("SortCriteria");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeValue.string_value);
          }
      }

    static FlightSearchCriterionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSearchCriterionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSearchCriterionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSearchCriterionJSON>, FlightSearchCriterionJSON *, bool> generator("Type FlightSearchCriterion", ignore_extras);
            parse_json_value(text, "Text for FlightSearchCriterionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSearchCriterionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSearchCriterionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSearchCriterionJSON>, FlightSearchCriterionJSON *, bool> generator("Type FlightSearchCriterion", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class FieldGeneratorValue : public JSONStringGenerator
      {
      protected:
        FieldGeneratorValue(const char *what)
          {
            set_what(what);
          }
        FieldGeneratorValue(void)
          {
          }
        void handle_result(const char *result)
          {
            TypeValueKnownValues known = stringToValue(result);
            TypeValue new_value;
            if (known == Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = result;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            handle_result(new_value);
          }
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            FlightSearchCriterionJSON *result = new FlightSearchCriterionJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(FlightSearchCriterionJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* FLIGHTSEARCHCRITERIONJSON_H */
