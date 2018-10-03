/* file "FlightSegmentGroupJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSEGMENTGROUPJSON_H
#define FLIGHTSEGMENTGROUPJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "FlightSegmentDetailsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSegmentGroupJSON : public ReferenceCounted
  {
  private:
    bool flagHasTotalTravelDuration;
    double storeTotalTravelDuration;
    std::string textStoreTotalTravelDuration;
    bool flagHasTotalFlightDuration;
    double storeTotalFlightDuration;
    std::string textStoreTotalFlightDuration;
    bool flagHasTotalLayoverDuration;
    double storeTotalLayoverDuration;
    std::string textStoreTotalLayoverDuration;
    bool flagHasNumberOfStops;
    OInteger storeNumberOfStops;
    bool flagHasFlightSegmentDetails;
    std::vector< FlightSegmentDetailsJSON * > storeFlightSegmentDetails;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightSegmentGroupJSON(const FlightSegmentGroupJSON &);
    FlightSegmentGroupJSON & operator=(const FlightSegmentGroupJSON &other);

    void  fromJSONTotalTravelDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalFlightDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalLayoverDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumberOfStops(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightSegmentDetails(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSegmentGroupJSON(void);
    virtual ~FlightSegmentGroupJSON(void);
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
    bool  hasNumberOfStops(void) const;
    OInteger  getNumberOfStops(void);
    const OInteger  getNumberOfStops(void) const;
    bool  hasFlightSegmentDetails(void) const;
    size_t  countOfFlightSegmentDetails(void) const;
    FlightSegmentDetailsJSON *  elementOfFlightSegmentDetails(size_t element_num);
    const FlightSegmentDetailsJSON *  elementOfFlightSegmentDetails(size_t element_num) const;
    std::vector< FlightSegmentDetailsJSON * >  getFlightSegmentDetails(void);
    const std::vector< FlightSegmentDetailsJSON * >  getFlightSegmentDetails(void) const;

    virtual size_t extraFlightSegmentGroupComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightSegmentGroupComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightSegmentGroupComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightSegmentGroupComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightSegmentGroupLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightSegmentGroupLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
            throw("The text value for field TotalTravelDuration of FlightSegmentGroupJSON is not a valid number.");
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
            throw("The text value for field TotalFlightDuration of FlightSegmentGroupJSON is not a valid number.");
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
            throw("The text value for field TotalLayoverDuration of FlightSegmentGroupJSON is not a valid number.");
        textStoreTotalLayoverDuration = new_value;
      }
    void unsetTotalLayoverDuration(void)
      {
        flagHasTotalLayoverDuration = false;
      }
    void setNumberOfStops(OInteger new_value)
      {
        flagHasNumberOfStops = true;
        if (new_value < 0)
            throw("The value for field NumberOfStops of FlightSegmentGroupJSON is less than the lower bound (0) for that field.");
        storeNumberOfStops = new_value;
      }
    void unsetNumberOfStops(void)
      {
        flagHasNumberOfStops = false;
      }
    void initFlightSegmentDetails(void)
      {
        if (flagHasFlightSegmentDetails)
          {
            for (size_t num2 = 0; num2 < storeFlightSegmentDetails.size(); ++num2)
              {
                storeFlightSegmentDetails[num2]->remove_reference();
              }
          }
        flagHasFlightSegmentDetails = true;
        storeFlightSegmentDetails.clear();
      }
    void appendFlightSegmentDetails(FlightSegmentDetailsJSON * to_append)
      {
        if (!flagHasFlightSegmentDetails)
          {
            flagHasFlightSegmentDetails = true;
            storeFlightSegmentDetails.clear();
          }
        assert(flagHasFlightSegmentDetails);
        to_append->add_reference();
        storeFlightSegmentDetails.push_back(to_append);
      }
    void unsetFlightSegmentDetails(void)
      {
        if (flagHasFlightSegmentDetails)
          {
            for (size_t num3 = 0; num3 < storeFlightSegmentDetails.size(); ++num3)
              {
                storeFlightSegmentDetails[num3]->remove_reference();
              }
          }
        flagHasFlightSegmentDetails = false;
        storeFlightSegmentDetails.clear();
      }

    virtual void extraFlightSegmentGroupAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightSegmentGroupSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightSegmentGroupLookup(key);
        if (old_field == NULL)
          {
            extraFlightSegmentGroupAppendPair(key, new_component);
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
        assert(flagHasTotalTravelDuration);
        handler->start_pair("TotalTravelDuration");
        if (textStoreTotalTravelDuration != "")
            handler->number_value(textStoreTotalTravelDuration.c_str());
        else if (((double)(long int)storeTotalTravelDuration) == storeTotalTravelDuration)
            handler->number_value((long int)storeTotalTravelDuration);
        else
            handler->number_value(storeTotalTravelDuration);
        assert(flagHasTotalFlightDuration);
        handler->start_pair("TotalFlightDuration");
        if (textStoreTotalFlightDuration != "")
            handler->number_value(textStoreTotalFlightDuration.c_str());
        else if (((double)(long int)storeTotalFlightDuration) == storeTotalFlightDuration)
            handler->number_value((long int)storeTotalFlightDuration);
        else
            handler->number_value(storeTotalFlightDuration);
        assert(flagHasTotalLayoverDuration);
        handler->start_pair("TotalLayoverDuration");
        if (textStoreTotalLayoverDuration != "")
            handler->number_value(textStoreTotalLayoverDuration.c_str());
        else if (((double)(long int)storeTotalLayoverDuration) == storeTotalLayoverDuration)
            handler->number_value((long int)storeTotalLayoverDuration);
        else
            handler->number_value(storeTotalLayoverDuration);
        assert(flagHasNumberOfStops);
        handler->start_pair("NumberOfStops");
        handler->number_value(storeNumberOfStops.get_o_integer());
        assert(flagHasFlightSegmentDetails);
        handler->start_pair("FlightSegmentDetails");
        assert(storeFlightSegmentDetails.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeFlightSegmentDetails.size(); ++num1)
          {
            storeFlightSegmentDetails[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTotalTravelDuration()))
          {
            return "When parsing the object for %what%, the \"TotalTravelDuration\" field was missing.";
          }
        if (!(hasTotalFlightDuration()))
          {
            return "When parsing the object for %what%, the \"TotalFlightDuration\" field was missing.";
          }
        if (!(hasTotalLayoverDuration()))
          {
            return "When parsing the object for %what%, the \"TotalLayoverDuration\" field was missing.";
          }
        if (!(hasNumberOfStops()))
          {
            return "When parsing the object for %what%, the \"NumberOfStops\" field was missing.";
          }
        if (!(hasFlightSegmentDetails()))
          {
            return "When parsing the object for %what%, the \"FlightSegmentDetails\" field was missing.";
          }
        return NULL;
      }

    static FlightSegmentGroupJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSegmentGroupJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSegmentGroupJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentGroupJSON>, FlightSegmentGroupJSON *, bool> generator("Type FlightSegmentGroup", ignore_extras);
            parse_json_value(text, "Text for FlightSegmentGroupJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSegmentGroupJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSegmentGroupJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentGroupJSON>, FlightSegmentGroupJSON *, bool> generator("Type FlightSegmentGroup", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTotalTravelDuration;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTotalFlightDuration;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTotalLayoverDuration;
        static char lowerBoundNumberOfStops[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumberOfStops>, OInteger, o_integer > fieldGeneratorNumberOfStops;
        JSONHoldingArrayGenerator<FlightSegmentDetailsJSON::Generator, RCHandle<FlightSegmentDetailsJSON>, FlightSegmentDetailsJSON *, bool > fieldGeneratorFlightSegmentDetails;
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
            FlightSegmentGroupJSON *result = new FlightSegmentGroupJSON();
            assert(result != NULL);
            RCHandle<FlightSegmentGroupJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightSegmentGroupAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightSegmentGroupJSON *result)
          {
            if (fieldGeneratorTotalTravelDuration.have_value)
              {
                result->setTotalTravelDurationText(fieldGeneratorTotalTravelDuration.value);
                fieldGeneratorTotalTravelDuration.have_value = false;
              }
            else if (!(result->hasTotalTravelDuration()))
              {
                error("When parsing the object for %what%, the \"TotalTravelDuration\" field was missing.");
              }
            if (fieldGeneratorTotalFlightDuration.have_value)
              {
                result->setTotalFlightDurationText(fieldGeneratorTotalFlightDuration.value);
                fieldGeneratorTotalFlightDuration.have_value = false;
              }
            else if (!(result->hasTotalFlightDuration()))
              {
                error("When parsing the object for %what%, the \"TotalFlightDuration\" field was missing.");
              }
            if (fieldGeneratorTotalLayoverDuration.have_value)
              {
                result->setTotalLayoverDurationText(fieldGeneratorTotalLayoverDuration.value);
                fieldGeneratorTotalLayoverDuration.have_value = false;
              }
            else if (!(result->hasTotalLayoverDuration()))
              {
                error("When parsing the object for %what%, the \"TotalLayoverDuration\" field was missing.");
              }
            if (fieldGeneratorNumberOfStops.have_value)
              {
                result->setNumberOfStops(fieldGeneratorNumberOfStops.value);
                fieldGeneratorNumberOfStops.have_value = false;
              }
            else if (!(result->hasNumberOfStops()))
              {
                error("When parsing the object for %what%, the \"NumberOfStops\" field was missing.");
              }
            if (fieldGeneratorFlightSegmentDetails.have_value)
              {
                result->initFlightSegmentDetails();
                size_t count = fieldGeneratorFlightSegmentDetails.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightSegmentDetails(fieldGeneratorFlightSegmentDetails.value[num].referenced());
                  }
                fieldGeneratorFlightSegmentDetails.value.clear();
                fieldGeneratorFlightSegmentDetails.have_value = false;
              }
            else if (!(result->hasFlightSegmentDetails()))
              {
                error("When parsing the object for %what%, the \"FlightSegmentDetails\" field was missing.");
              }
          }
        virtual void handle_result(FlightSegmentGroupJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "lightSegmentDetails") == 0)
                        return &fieldGeneratorFlightSegmentDetails;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umberOfStops") == 0)
                        return &fieldGeneratorNumberOfStops;
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "otal", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[6]), "lightDuration") == 0)
                                    return &fieldGeneratorTotalFlightDuration;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[6]), "ayoverDuration") == 0)
                                    return &fieldGeneratorTotalLayoverDuration;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[6]), "ravelDuration") == 0)
                                    return &fieldGeneratorTotalTravelDuration;
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
        Generator(bool ignore_extras = false) : fieldGeneratorTotalTravelDuration("field \"TotalTravelDuration\" of the FlightSegmentGroup class"), fieldGeneratorTotalFlightDuration("field \"TotalFlightDuration\" of the FlightSegmentGroup class"), fieldGeneratorTotalLayoverDuration("field \"TotalLayoverDuration\" of the FlightSegmentGroup class"), fieldGeneratorNumberOfStops("field \"NumberOfStops\" of the FlightSegmentGroup class"), fieldGeneratorFlightSegmentDetails("field \"FlightSegmentDetails\" of the FlightSegmentGroup class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightSegmentGroup class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTotalTravelDuration.reset();
            fieldGeneratorTotalFlightDuration.reset();
            fieldGeneratorTotalLayoverDuration.reset();
            fieldGeneratorNumberOfStops.reset();
            fieldGeneratorFlightSegmentDetails.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSEGMENTGROUPJSON_H */
