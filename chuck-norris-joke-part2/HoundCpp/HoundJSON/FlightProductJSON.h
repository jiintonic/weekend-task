/* file "FlightProductJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTPRODUCTJSON_H
#define FLIGHTPRODUCTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "MoneyJSON.h"
#include "FlightFareBreakdownForPassengerTypeJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "FlightSegmentGroupJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightProductJSON : public ReferenceCounted
  {
  private:
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasDataProvider;
    std::string storeDataProvider;
    bool flagHasProductID;
    std::string storeProductID;
    bool flagHasTotalPrice;
    MoneyJSON * storeTotalPrice;
    bool flagHasFareBreakdownForEachPassengerType;
    std::vector< FlightFareBreakdownForPassengerTypeJSON * > storeFareBreakdownForEachPassengerType;
    bool flagHasTotalTaxesAndFees;
    MoneyJSON * storeTotalTaxesAndFees;
    bool flagHasTotalBookingFees;
    MoneyJSON * storeTotalBookingFees;
    bool flagHasTotalTravelDuration;
    double storeTotalTravelDuration;
    std::string textStoreTotalTravelDuration;
    bool flagHasTotalFlightDuration;
    double storeTotalFlightDuration;
    std::string textStoreTotalFlightDuration;
    bool flagHasTotalLayoverDuration;
    double storeTotalLayoverDuration;
    std::string textStoreTotalLayoverDuration;
    bool flagHasTotalNumberOfStops;
    OInteger storeTotalNumberOfStops;
    bool flagHasNumberOfSeatsAvailable;
    OInteger storeNumberOfSeatsAvailable;
    bool flagHasFlightSegmentGroups;
    std::vector< FlightSegmentGroupJSON * > storeFlightSegmentGroups;
    bool flagHasDetailsUrl;
    std::string storeDetailsUrl;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightProductJSON(const FlightProductJSON &);
    FlightProductJSON & operator=(const FlightProductJSON &other);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDataProvider(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProductID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalPrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFareBreakdownForEachPassengerType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalTaxesAndFees(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalBookingFees(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalTravelDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalFlightDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalLayoverDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalNumberOfStops(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumberOfSeatsAvailable(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightSegmentGroups(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDetailsUrl(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightProductJSON(void);
    virtual ~FlightProductJSON(void);
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasDataProvider(void) const;
    std::string  getDataProvider(void);
    const std::string  getDataProvider(void) const;
    bool  hasProductID(void) const;
    std::string  getProductID(void);
    const std::string  getProductID(void) const;
    bool  hasTotalPrice(void) const;
    MoneyJSON *  getTotalPrice(void);
    const MoneyJSON *  getTotalPrice(void) const;
    bool  hasFareBreakdownForEachPassengerType(void) const;
    size_t  countOfFareBreakdownForEachPassengerType(void) const;
    FlightFareBreakdownForPassengerTypeJSON *  elementOfFareBreakdownForEachPassengerType(size_t element_num);
    const FlightFareBreakdownForPassengerTypeJSON *  elementOfFareBreakdownForEachPassengerType(size_t element_num) const;
    std::vector< FlightFareBreakdownForPassengerTypeJSON * >  getFareBreakdownForEachPassengerType(void);
    const std::vector< FlightFareBreakdownForPassengerTypeJSON * >  getFareBreakdownForEachPassengerType(void) const;
    bool  hasTotalTaxesAndFees(void) const;
    MoneyJSON *  getTotalTaxesAndFees(void);
    const MoneyJSON *  getTotalTaxesAndFees(void) const;
    bool  hasTotalBookingFees(void) const;
    MoneyJSON *  getTotalBookingFees(void);
    const MoneyJSON *  getTotalBookingFees(void) const;
    bool  hasTotalTravelDuration(void) const;
    double  getTotalTravelDuration(void);
    const double  getTotalTravelDuration(void) const;
    std::string  getTotalTravelDurationAsText(void) const;
    bool  hasTotalFlightDuration(void) const;
    double  getTotalFlightDuration(void);
    const double  getTotalFlightDuration(void) const;
    std::string  getTotalFlightDurationAsText(void) const;
    bool  hasTotalLayoverDuration(void) const;
    double  getTotalLayoverDuration(void);
    const double  getTotalLayoverDuration(void) const;
    std::string  getTotalLayoverDurationAsText(void) const;
    bool  hasTotalNumberOfStops(void) const;
    OInteger  getTotalNumberOfStops(void);
    const OInteger  getTotalNumberOfStops(void) const;
    bool  hasNumberOfSeatsAvailable(void) const;
    OInteger  getNumberOfSeatsAvailable(void);
    const OInteger  getNumberOfSeatsAvailable(void) const;
    bool  hasFlightSegmentGroups(void) const;
    size_t  countOfFlightSegmentGroups(void) const;
    FlightSegmentGroupJSON *  elementOfFlightSegmentGroups(size_t element_num);
    const FlightSegmentGroupJSON *  elementOfFlightSegmentGroups(size_t element_num) const;
    std::vector< FlightSegmentGroupJSON * >  getFlightSegmentGroups(void);
    const std::vector< FlightSegmentGroupJSON * >  getFlightSegmentGroups(void) const;
    bool  hasDetailsUrl(void) const;
    std::string  getDetailsUrl(void);
    const std::string  getDetailsUrl(void) const;

    virtual size_t extraFlightProductComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightProductComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightProductComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightProductComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightProductLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightProductLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setDataProvider(std::string new_value)
      {
        flagHasDataProvider = true;
        storeDataProvider = new_value;
      }
    void unsetDataProvider(void)
      {
        flagHasDataProvider = false;
      }
    void setProductID(std::string new_value)
      {
        flagHasProductID = true;
        storeProductID = new_value;
      }
    void unsetProductID(void)
      {
        flagHasProductID = false;
      }
    void setTotalPrice(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTotalPrice)
          {
            storeTotalPrice->remove_reference();
          }
        flagHasTotalPrice = true;
        storeTotalPrice = new_value;
      }
    void unsetTotalPrice(void)
      {
        if (flagHasTotalPrice)
          {
            storeTotalPrice->remove_reference();
          }
        flagHasTotalPrice = false;
      }
    void initFareBreakdownForEachPassengerType(void)
      {
        if (flagHasFareBreakdownForEachPassengerType)
          {
            for (size_t num3 = 0; num3 < storeFareBreakdownForEachPassengerType.size(); ++num3)
              {
                storeFareBreakdownForEachPassengerType[num3]->remove_reference();
              }
          }
        flagHasFareBreakdownForEachPassengerType = true;
        storeFareBreakdownForEachPassengerType.clear();
      }
    void appendFareBreakdownForEachPassengerType(FlightFareBreakdownForPassengerTypeJSON * to_append)
      {
        if (!flagHasFareBreakdownForEachPassengerType)
          {
            flagHasFareBreakdownForEachPassengerType = true;
            storeFareBreakdownForEachPassengerType.clear();
          }
        assert(flagHasFareBreakdownForEachPassengerType);
        to_append->add_reference();
        storeFareBreakdownForEachPassengerType.push_back(to_append);
      }
    void unsetFareBreakdownForEachPassengerType(void)
      {
        if (flagHasFareBreakdownForEachPassengerType)
          {
            for (size_t num4 = 0; num4 < storeFareBreakdownForEachPassengerType.size(); ++num4)
              {
                storeFareBreakdownForEachPassengerType[num4]->remove_reference();
              }
          }
        flagHasFareBreakdownForEachPassengerType = false;
        storeFareBreakdownForEachPassengerType.clear();
      }
    void setTotalTaxesAndFees(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTotalTaxesAndFees)
          {
            storeTotalTaxesAndFees->remove_reference();
          }
        flagHasTotalTaxesAndFees = true;
        storeTotalTaxesAndFees = new_value;
      }
    void unsetTotalTaxesAndFees(void)
      {
        if (flagHasTotalTaxesAndFees)
          {
            storeTotalTaxesAndFees->remove_reference();
          }
        flagHasTotalTaxesAndFees = false;
      }
    void setTotalBookingFees(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTotalBookingFees)
          {
            storeTotalBookingFees->remove_reference();
          }
        flagHasTotalBookingFees = true;
        storeTotalBookingFees = new_value;
      }
    void unsetTotalBookingFees(void)
      {
        if (flagHasTotalBookingFees)
          {
            storeTotalBookingFees->remove_reference();
          }
        flagHasTotalBookingFees = false;
      }
    void setTotalTravelDuration(double new_value)
      {
        flagHasTotalTravelDuration = true;
        storeTotalTravelDuration = new_value;
        textStoreTotalTravelDuration = "";
      }
    void setTotalTravelDurationText(std::string new_value)
      {
        flagHasTotalTravelDuration = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TotalTravelDuration of FlightProductJSON is not a valid number.");
        textStoreTotalTravelDuration = new_value;
      }
    void unsetTotalTravelDuration(void)
      {
        flagHasTotalTravelDuration = false;
      }
    void setTotalFlightDuration(double new_value)
      {
        flagHasTotalFlightDuration = true;
        storeTotalFlightDuration = new_value;
        textStoreTotalFlightDuration = "";
      }
    void setTotalFlightDurationText(std::string new_value)
      {
        flagHasTotalFlightDuration = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TotalFlightDuration of FlightProductJSON is not a valid number.");
        textStoreTotalFlightDuration = new_value;
      }
    void unsetTotalFlightDuration(void)
      {
        flagHasTotalFlightDuration = false;
      }
    void setTotalLayoverDuration(double new_value)
      {
        flagHasTotalLayoverDuration = true;
        storeTotalLayoverDuration = new_value;
        textStoreTotalLayoverDuration = "";
      }
    void setTotalLayoverDurationText(std::string new_value)
      {
        flagHasTotalLayoverDuration = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TotalLayoverDuration of FlightProductJSON is not a valid number.");
        textStoreTotalLayoverDuration = new_value;
      }
    void unsetTotalLayoverDuration(void)
      {
        flagHasTotalLayoverDuration = false;
      }
    void setTotalNumberOfStops(OInteger new_value)
      {
        flagHasTotalNumberOfStops = true;
        if (new_value < 0)
            throw("The value for field TotalNumberOfStops of FlightProductJSON is less than the lower bound (0) for that field.");
        storeTotalNumberOfStops = new_value;
      }
    void unsetTotalNumberOfStops(void)
      {
        flagHasTotalNumberOfStops = false;
      }
    void setNumberOfSeatsAvailable(OInteger new_value)
      {
        flagHasNumberOfSeatsAvailable = true;
        if (new_value < 0)
            throw("The value for field NumberOfSeatsAvailable of FlightProductJSON is less than the lower bound (0) for that field.");
        storeNumberOfSeatsAvailable = new_value;
      }
    void unsetNumberOfSeatsAvailable(void)
      {
        flagHasNumberOfSeatsAvailable = false;
      }
    void initFlightSegmentGroups(void)
      {
        if (flagHasFlightSegmentGroups)
          {
            for (size_t num5 = 0; num5 < storeFlightSegmentGroups.size(); ++num5)
              {
                storeFlightSegmentGroups[num5]->remove_reference();
              }
          }
        flagHasFlightSegmentGroups = true;
        storeFlightSegmentGroups.clear();
      }
    void appendFlightSegmentGroups(FlightSegmentGroupJSON * to_append)
      {
        if (!flagHasFlightSegmentGroups)
          {
            flagHasFlightSegmentGroups = true;
            storeFlightSegmentGroups.clear();
          }
        assert(flagHasFlightSegmentGroups);
        to_append->add_reference();
        storeFlightSegmentGroups.push_back(to_append);
      }
    void unsetFlightSegmentGroups(void)
      {
        if (flagHasFlightSegmentGroups)
          {
            for (size_t num6 = 0; num6 < storeFlightSegmentGroups.size(); ++num6)
              {
                storeFlightSegmentGroups[num6]->remove_reference();
              }
          }
        flagHasFlightSegmentGroups = false;
        storeFlightSegmentGroups.clear();
      }
    void setDetailsUrl(std::string new_value)
      {
        flagHasDetailsUrl = true;
        storeDetailsUrl = new_value;
      }
    void unsetDetailsUrl(void)
      {
        flagHasDetailsUrl = false;
      }

    virtual void extraFlightProductAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightProductSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightProductLookup(key);
        if (old_field == NULL)
          {
            extraFlightProductAppendPair(key, new_component);
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
        assert(flagHasLabel);
        handler->start_pair("Label");
        handler->string_value(storeLabel);
        assert(flagHasDataProvider);
        handler->start_pair("DataProvider");
        handler->string_value(storeDataProvider);
        assert(flagHasProductID);
        handler->start_pair("ProductID");
        handler->string_value(storeProductID);
        assert(flagHasTotalPrice);
        handler->start_pair("TotalPrice");
        storeTotalPrice->write_as_json(handler);
        if (flagHasFareBreakdownForEachPassengerType)
          {
            handler->start_pair("FareBreakdownForEachPassengerType");
            assert(storeFareBreakdownForEachPassengerType.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeFareBreakdownForEachPassengerType.size(); ++num1)
              {
                storeFareBreakdownForEachPassengerType[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasTotalTaxesAndFees);
        handler->start_pair("TotalTaxesAndFees");
        storeTotalTaxesAndFees->write_as_json(handler);
        assert(flagHasTotalBookingFees);
        handler->start_pair("TotalBookingFees");
        storeTotalBookingFees->write_as_json(handler);
        if (flagHasTotalTravelDuration)
          {
            handler->start_pair("TotalTravelDuration");
            if (textStoreTotalTravelDuration != "")
                handler->number_value(textStoreTotalTravelDuration.c_str());
            else if (((double)(long int)storeTotalTravelDuration) == storeTotalTravelDuration)
                handler->number_value((long int)storeTotalTravelDuration);
            else
                handler->number_value(storeTotalTravelDuration);
          }
        if (flagHasTotalFlightDuration)
          {
            handler->start_pair("TotalFlightDuration");
            if (textStoreTotalFlightDuration != "")
                handler->number_value(textStoreTotalFlightDuration.c_str());
            else if (((double)(long int)storeTotalFlightDuration) == storeTotalFlightDuration)
                handler->number_value((long int)storeTotalFlightDuration);
            else
                handler->number_value(storeTotalFlightDuration);
          }
        if (flagHasTotalLayoverDuration)
          {
            handler->start_pair("TotalLayoverDuration");
            if (textStoreTotalLayoverDuration != "")
                handler->number_value(textStoreTotalLayoverDuration.c_str());
            else if (((double)(long int)storeTotalLayoverDuration) == storeTotalLayoverDuration)
                handler->number_value((long int)storeTotalLayoverDuration);
            else
                handler->number_value(storeTotalLayoverDuration);
          }
        assert(flagHasTotalNumberOfStops);
        handler->start_pair("TotalNumberOfStops");
        handler->number_value(storeTotalNumberOfStops.get_o_integer());
        assert(flagHasNumberOfSeatsAvailable);
        handler->start_pair("NumberOfSeatsAvailable");
        handler->number_value(storeNumberOfSeatsAvailable.get_o_integer());
        assert(flagHasFlightSegmentGroups);
        handler->start_pair("FlightSegmentGroups");
        assert(storeFlightSegmentGroups.size() >= 1);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeFlightSegmentGroups.size(); ++num2)
          {
            storeFlightSegmentGroups[num2]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasDetailsUrl);
        handler->start_pair("DetailsUrl");
        handler->string_value(storeDetailsUrl);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLabel()))
          {
            return "When parsing the object for %what%, the \"Label\" field was missing.";
          }
        if (!(hasDataProvider()))
          {
            return "When parsing the object for %what%, the \"DataProvider\" field was missing.";
          }
        if (!(hasProductID()))
          {
            return "When parsing the object for %what%, the \"ProductID\" field was missing.";
          }
        if (!(hasTotalPrice()))
          {
            return "When parsing the object for %what%, the \"TotalPrice\" field was missing.";
          }
        if (!(hasTotalTaxesAndFees()))
          {
            return "When parsing the object for %what%, the \"TotalTaxesAndFees\" field was missing.";
          }
        if (!(hasTotalBookingFees()))
          {
            return "When parsing the object for %what%, the \"TotalBookingFees\" field was missing.";
          }
        if (!(hasTotalNumberOfStops()))
          {
            return "When parsing the object for %what%, the \"TotalNumberOfStops\" field was missing.";
          }
        if (!(hasNumberOfSeatsAvailable()))
          {
            return "When parsing the object for %what%, the \"NumberOfSeatsAvailable\" field was missing.";
          }
        if (!(hasFlightSegmentGroups()))
          {
            return "When parsing the object for %what%, the \"FlightSegmentGroups\" field was missing.";
          }
        if (!(hasDetailsUrl()))
          {
            return "When parsing the object for %what%, the \"DetailsUrl\" field was missing.";
          }
        return NULL;
      }

    static FlightProductJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightProductJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightProductJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightProductJSON>, FlightProductJSON *, bool> generator("Type FlightProduct", ignore_extras);
            parse_json_value(text, "Text for FlightProductJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightProductJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightProductJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightProductJSON>, FlightProductJSON *, bool> generator("Type FlightProduct", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDataProvider;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorProductID;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTotalPrice;
        JSONHoldingArrayGenerator<FlightFareBreakdownForPassengerTypeJSON::Generator, RCHandle<FlightFareBreakdownForPassengerTypeJSON>, FlightFareBreakdownForPassengerTypeJSON *, bool > fieldGeneratorFareBreakdownForEachPassengerType;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTotalTaxesAndFees;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTotalBookingFees;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTotalTravelDuration;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTotalFlightDuration;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTotalLayoverDuration;
        static char lowerBoundTotalNumberOfStops[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTotalNumberOfStops>, OInteger, o_integer > fieldGeneratorTotalNumberOfStops;
        static char lowerBoundNumberOfSeatsAvailable[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumberOfSeatsAvailable>, OInteger, o_integer > fieldGeneratorNumberOfSeatsAvailable;
        JSONHoldingArrayGenerator<FlightSegmentGroupJSON::Generator, RCHandle<FlightSegmentGroupJSON>, FlightSegmentGroupJSON *, bool > fieldGeneratorFlightSegmentGroups;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDetailsUrl;
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
            FlightProductJSON *result = new FlightProductJSON();
            assert(result != NULL);
            RCHandle<FlightProductJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightProductAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightProductJSON *result)
          {
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            else if (!(result->hasLabel()))
              {
                error("When parsing the object for %what%, the \"Label\" field was missing.");
              }
            if (fieldGeneratorDataProvider.have_value)
              {
                result->setDataProvider(fieldGeneratorDataProvider.value);
                fieldGeneratorDataProvider.have_value = false;
              }
            else if (!(result->hasDataProvider()))
              {
                error("When parsing the object for %what%, the \"DataProvider\" field was missing.");
              }
            if (fieldGeneratorProductID.have_value)
              {
                result->setProductID(fieldGeneratorProductID.value);
                fieldGeneratorProductID.have_value = false;
              }
            else if (!(result->hasProductID()))
              {
                error("When parsing the object for %what%, the \"ProductID\" field was missing.");
              }
            if (fieldGeneratorTotalPrice.have_value)
              {
                result->setTotalPrice(fieldGeneratorTotalPrice.value.referenced());
                fieldGeneratorTotalPrice.have_value = false;
              }
            else if (!(result->hasTotalPrice()))
              {
                error("When parsing the object for %what%, the \"TotalPrice\" field was missing.");
              }
            if (fieldGeneratorFareBreakdownForEachPassengerType.have_value)
              {
                result->initFareBreakdownForEachPassengerType();
                size_t count = fieldGeneratorFareBreakdownForEachPassengerType.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFareBreakdownForEachPassengerType(fieldGeneratorFareBreakdownForEachPassengerType.value[num].referenced());
                  }
                fieldGeneratorFareBreakdownForEachPassengerType.value.clear();
                fieldGeneratorFareBreakdownForEachPassengerType.have_value = false;
              }
            if (fieldGeneratorTotalTaxesAndFees.have_value)
              {
                result->setTotalTaxesAndFees(fieldGeneratorTotalTaxesAndFees.value.referenced());
                fieldGeneratorTotalTaxesAndFees.have_value = false;
              }
            else if (!(result->hasTotalTaxesAndFees()))
              {
                error("When parsing the object for %what%, the \"TotalTaxesAndFees\" field was missing.");
              }
            if (fieldGeneratorTotalBookingFees.have_value)
              {
                result->setTotalBookingFees(fieldGeneratorTotalBookingFees.value.referenced());
                fieldGeneratorTotalBookingFees.have_value = false;
              }
            else if (!(result->hasTotalBookingFees()))
              {
                error("When parsing the object for %what%, the \"TotalBookingFees\" field was missing.");
              }
            if (fieldGeneratorTotalTravelDuration.have_value)
              {
                result->setTotalTravelDurationText(fieldGeneratorTotalTravelDuration.value);
                fieldGeneratorTotalTravelDuration.have_value = false;
              }
            if (fieldGeneratorTotalFlightDuration.have_value)
              {
                result->setTotalFlightDurationText(fieldGeneratorTotalFlightDuration.value);
                fieldGeneratorTotalFlightDuration.have_value = false;
              }
            if (fieldGeneratorTotalLayoverDuration.have_value)
              {
                result->setTotalLayoverDurationText(fieldGeneratorTotalLayoverDuration.value);
                fieldGeneratorTotalLayoverDuration.have_value = false;
              }
            if (fieldGeneratorTotalNumberOfStops.have_value)
              {
                result->setTotalNumberOfStops(fieldGeneratorTotalNumberOfStops.value);
                fieldGeneratorTotalNumberOfStops.have_value = false;
              }
            else if (!(result->hasTotalNumberOfStops()))
              {
                error("When parsing the object for %what%, the \"TotalNumberOfStops\" field was missing.");
              }
            if (fieldGeneratorNumberOfSeatsAvailable.have_value)
              {
                result->setNumberOfSeatsAvailable(fieldGeneratorNumberOfSeatsAvailable.value);
                fieldGeneratorNumberOfSeatsAvailable.have_value = false;
              }
            else if (!(result->hasNumberOfSeatsAvailable()))
              {
                error("When parsing the object for %what%, the \"NumberOfSeatsAvailable\" field was missing.");
              }
            if (fieldGeneratorFlightSegmentGroups.have_value)
              {
                result->initFlightSegmentGroups();
                size_t count = fieldGeneratorFlightSegmentGroups.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightSegmentGroups(fieldGeneratorFlightSegmentGroups.value[num].referenced());
                  }
                fieldGeneratorFlightSegmentGroups.value.clear();
                fieldGeneratorFlightSegmentGroups.have_value = false;
              }
            else if (!(result->hasFlightSegmentGroups()))
              {
                error("When parsing the object for %what%, the \"FlightSegmentGroups\" field was missing.");
              }
            if (fieldGeneratorDetailsUrl.have_value)
              {
                result->setDetailsUrl(fieldGeneratorDetailsUrl.value);
                fieldGeneratorDetailsUrl.have_value = false;
              }
            else if (!(result->hasDetailsUrl()))
              {
                error("When parsing the object for %what%, the \"DetailsUrl\" field was missing.");
              }
          }
        virtual void handle_result(FlightProductJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "taProvider") == 0)
                                return &fieldGeneratorDataProvider;
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "tailsUrl") == 0)
                                return &fieldGeneratorDetailsUrl;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "reBreakdownForEachPassengerType") == 0)
                                return &fieldGeneratorFareBreakdownForEachPassengerType;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "ightSegmentGroups") == 0)
                                return &fieldGeneratorFlightSegmentGroups;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umberOfSeatsAvailable") == 0)
                        return &fieldGeneratorNumberOfSeatsAvailable;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "roductID") == 0)
                        return &fieldGeneratorProductID;
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "otal", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[6]), "ookingFees") == 0)
                                    return &fieldGeneratorTotalBookingFees;
                                break;
                            case 'F':
                                if (strcmp(&(field_name[6]), "lightDuration") == 0)
                                    return &fieldGeneratorTotalFlightDuration;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[6]), "ayoverDuration") == 0)
                                    return &fieldGeneratorTotalLayoverDuration;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[6]), "umberOfStops") == 0)
                                    return &fieldGeneratorTotalNumberOfStops;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[6]), "rice") == 0)
                                    return &fieldGeneratorTotalPrice;
                                break;
                            case 'T':
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[7]), "xesAndFees") == 0)
                                            return &fieldGeneratorTotalTaxesAndFees;
                                        break;
                                    case 'r':
                                        if (strcmp(&(field_name[7]), "avelDuration") == 0)
                                            return &fieldGeneratorTotalTravelDuration;
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
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLabel("field \"Label\" of the FlightProduct class"), fieldGeneratorDataProvider("field \"DataProvider\" of the FlightProduct class"), fieldGeneratorProductID("field \"ProductID\" of the FlightProduct class"), fieldGeneratorTotalPrice("field \"TotalPrice\" of the FlightProduct class", ignore_extras), fieldGeneratorFareBreakdownForEachPassengerType("field \"FareBreakdownForEachPassengerType\" of the FlightProduct class", ignore_extras), fieldGeneratorTotalTaxesAndFees("field \"TotalTaxesAndFees\" of the FlightProduct class", ignore_extras), fieldGeneratorTotalBookingFees("field \"TotalBookingFees\" of the FlightProduct class", ignore_extras), fieldGeneratorTotalTravelDuration("field \"TotalTravelDuration\" of the FlightProduct class"), fieldGeneratorTotalFlightDuration("field \"TotalFlightDuration\" of the FlightProduct class"), fieldGeneratorTotalLayoverDuration("field \"TotalLayoverDuration\" of the FlightProduct class"), fieldGeneratorTotalNumberOfStops("field \"TotalNumberOfStops\" of the FlightProduct class"), fieldGeneratorNumberOfSeatsAvailable("field \"NumberOfSeatsAvailable\" of the FlightProduct class"), fieldGeneratorFlightSegmentGroups("field \"FlightSegmentGroups\" of the FlightProduct class", ignore_extras), fieldGeneratorDetailsUrl("field \"DetailsUrl\" of the FlightProduct class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightProduct class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLabel.reset();
            fieldGeneratorDataProvider.reset();
            fieldGeneratorProductID.reset();
            fieldGeneratorTotalPrice.reset();
            fieldGeneratorFareBreakdownForEachPassengerType.reset();
            fieldGeneratorTotalTaxesAndFees.reset();
            fieldGeneratorTotalBookingFees.reset();
            fieldGeneratorTotalTravelDuration.reset();
            fieldGeneratorTotalFlightDuration.reset();
            fieldGeneratorTotalLayoverDuration.reset();
            fieldGeneratorTotalNumberOfStops.reset();
            fieldGeneratorNumberOfSeatsAvailable.reset();
            fieldGeneratorFlightSegmentGroups.reset();
            fieldGeneratorDetailsUrl.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTPRODUCTJSON_H */
