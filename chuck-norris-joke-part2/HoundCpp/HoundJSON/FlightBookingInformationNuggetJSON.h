/* file "FlightBookingInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTBOOKINGINFORMATIONNUGGETJSON_H
#define FLIGHTBOOKINGINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "FlightBookingSearchSpecJSON.h"
#include "FlightTimesJSON.h"
#include "FlightProductJSON.h"
#include "FlightSegmentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightBookingInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasFlightBookingSearchSpec;
    FlightBookingSearchSpecJSON * storeFlightBookingSearchSpec;
    bool flagHasCurrentDateAndTime;
    FlightTimesJSON * storeCurrentDateAndTime;
    bool flagHasFlightProducts;
    std::vector< FlightProductJSON * > storeFlightProducts;
    bool flagHasFlightSegments;
    std::vector< FlightSegmentJSON * > storeFlightSegments;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightBookingInformationNuggetJSON(const FlightBookingInformationNuggetJSON &);
    FlightBookingInformationNuggetJSON & operator=(const FlightBookingInformationNuggetJSON &other);

    JSONValue * extraFlightBookingSearchSpecToJSON(void) const;
    JSONValue * extraCurrentDateAndTimeToJSON(void) const;
    JSONValue * extraFlightProductsToJSON(void) const;
    JSONValue * extraFlightSegmentsToJSON(void) const;

    void  fromJSONFlightBookingSearchSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightProducts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightSegments(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightBookingInformationNuggetJSON(void);
    virtual ~FlightBookingInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasFlightBookingSearchSpec(void) const;
    FlightBookingSearchSpecJSON *  getFlightBookingSearchSpec(void);
    const FlightBookingSearchSpecJSON *  getFlightBookingSearchSpec(void) const;
    bool  hasCurrentDateAndTime(void) const;
    FlightTimesJSON *  getCurrentDateAndTime(void);
    const FlightTimesJSON *  getCurrentDateAndTime(void) const;
    bool  hasFlightProducts(void) const;
    size_t  countOfFlightProducts(void) const;
    FlightProductJSON *  elementOfFlightProducts(size_t element_num);
    const FlightProductJSON *  elementOfFlightProducts(size_t element_num) const;
    std::vector< FlightProductJSON * >  getFlightProducts(void);
    const std::vector< FlightProductJSON * >  getFlightProducts(void) const;
    bool  hasFlightSegments(void) const;
    size_t  countOfFlightSegments(void) const;
    FlightSegmentJSON *  elementOfFlightSegments(size_t element_num);
    const FlightSegmentJSON *  elementOfFlightSegments(size_t element_num) const;
    std::vector< FlightSegmentJSON * >  getFlightSegments(void);
    const std::vector< FlightSegmentJSON * >  getFlightSegments(void) const;

    virtual size_t extraFlightBookingInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightBookingInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightBookingInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightBookingInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightBookingInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightBookingInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasFlightBookingSearchSpec)
            ++result;
        if (flagHasCurrentDateAndTime)
            ++result;
        if (flagHasFlightProducts)
            ++result;
        if (flagHasFlightSegments)
            ++result;
        result += extraFlightBookingInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasFlightBookingSearchSpec)
          {
            if (remainder == 0)
                return "FlightBookingSearchSpec";
            --remainder;
          }
        if (flagHasCurrentDateAndTime)
          {
            if (remainder == 0)
                return "CurrentDateAndTime";
            --remainder;
          }
        if (flagHasFlightProducts)
          {
            if (remainder == 0)
                return "FlightProducts";
            --remainder;
          }
        if (flagHasFlightSegments)
          {
            if (remainder == 0)
                return "FlightSegments";
            --remainder;
          }
        return extraFlightBookingInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasFlightBookingSearchSpec)
          {
            if (remainder == 0)
                return extraFlightBookingSearchSpecToJSON();
            --remainder;
          }
        if (flagHasCurrentDateAndTime)
          {
            if (remainder == 0)
                return extraCurrentDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasFlightProducts)
          {
            if (remainder == 0)
                return extraFlightProductsToJSON();
            --remainder;
          }
        if (flagHasFlightSegments)
          {
            if (remainder == 0)
                return extraFlightSegmentsToJSON();
            --remainder;
          }
        return extraFlightBookingInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasFlightBookingSearchSpec)
          {
            if (remainder == 0)
                return extraFlightBookingSearchSpecToJSON();
            --remainder;
          }
        if (flagHasCurrentDateAndTime)
          {
            if (remainder == 0)
                return extraCurrentDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasFlightProducts)
          {
            if (remainder == 0)
                return extraFlightProductsToJSON();
            --remainder;
          }
        if (flagHasFlightSegments)
          {
            if (remainder == 0)
                return extraFlightSegmentsToJSON();
            --remainder;
          }
        return extraFlightBookingInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                    return (flagHasCurrentDateAndTime ? extraCurrentDateAndTimeToJSON() : NULL);
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'B':
                            if (strcmp(&(field_name[7]), "ookingSearchSpec") == 0)
                                return (flagHasFlightBookingSearchSpec ? extraFlightBookingSearchSpecToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[7]), "roducts") == 0)
                                return (flagHasFlightProducts ? extraFlightProductsToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[7]), "egments") == 0)
                                return (flagHasFlightSegments ? extraFlightSegmentsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraFlightBookingInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                    return (flagHasCurrentDateAndTime ? extraCurrentDateAndTimeToJSON() : NULL);
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'B':
                            if (strcmp(&(field_name[7]), "ookingSearchSpec") == 0)
                                return (flagHasFlightBookingSearchSpec ? extraFlightBookingSearchSpecToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[7]), "roducts") == 0)
                                return (flagHasFlightProducts ? extraFlightProductsToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[7]), "egments") == 0)
                                return (flagHasFlightSegments ? extraFlightSegmentsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraFlightBookingInformationNuggetLookup(field_name);
      }

    void setFlightBookingSearchSpec(FlightBookingSearchSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFlightBookingSearchSpec)
          {
            storeFlightBookingSearchSpec->remove_reference();
          }
        flagHasFlightBookingSearchSpec = true;
        storeFlightBookingSearchSpec = new_value;
      }
    void unsetFlightBookingSearchSpec(void)
      {
        if (flagHasFlightBookingSearchSpec)
          {
            storeFlightBookingSearchSpec->remove_reference();
          }
        flagHasFlightBookingSearchSpec = false;
      }
    void setCurrentDateAndTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = true;
        storeCurrentDateAndTime = new_value;
      }
    void unsetCurrentDateAndTime(void)
      {
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = false;
      }
    void initFlightProducts(void)
      {
        if (flagHasFlightProducts)
          {
            for (size_t num3 = 0; num3 < storeFlightProducts.size(); ++num3)
              {
                storeFlightProducts[num3]->remove_reference();
              }
          }
        flagHasFlightProducts = true;
        storeFlightProducts.clear();
      }
    void appendFlightProducts(FlightProductJSON * to_append)
      {
        if (!flagHasFlightProducts)
          {
            flagHasFlightProducts = true;
            storeFlightProducts.clear();
          }
        assert(flagHasFlightProducts);
        to_append->add_reference();
        storeFlightProducts.push_back(to_append);
      }
    void unsetFlightProducts(void)
      {
        if (flagHasFlightProducts)
          {
            for (size_t num4 = 0; num4 < storeFlightProducts.size(); ++num4)
              {
                storeFlightProducts[num4]->remove_reference();
              }
          }
        flagHasFlightProducts = false;
        storeFlightProducts.clear();
      }
    void initFlightSegments(void)
      {
        if (flagHasFlightSegments)
          {
            for (size_t num5 = 0; num5 < storeFlightSegments.size(); ++num5)
              {
                storeFlightSegments[num5]->remove_reference();
              }
          }
        flagHasFlightSegments = true;
        storeFlightSegments.clear();
      }
    void appendFlightSegments(FlightSegmentJSON * to_append)
      {
        if (!flagHasFlightSegments)
          {
            flagHasFlightSegments = true;
            storeFlightSegments.clear();
          }
        assert(flagHasFlightSegments);
        to_append->add_reference();
        storeFlightSegments.push_back(to_append);
      }
    void unsetFlightSegments(void)
      {
        if (flagHasFlightSegments)
          {
            for (size_t num6 = 0; num6 < storeFlightSegments.size(); ++num6)
              {
                storeFlightSegments[num6]->remove_reference();
              }
          }
        flagHasFlightSegments = false;
        storeFlightSegments.clear();
      }

    virtual void extraFlightBookingInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightBookingInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightBookingInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraFlightBookingInformationNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "urrentDateAndTime") == 0)
                    {
                    fromJSONCurrentDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strncmp(&(key[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'B':
                            if (strcmp(&(key[7]), "ookingSearchSpec") == 0)
                                {
                                fromJSONFlightBookingSearchSpec(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[7]), "roducts") == 0)
                                {
                                fromJSONFlightProducts(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[7]), "egments") == 0)
                                {
                                fromJSONFlightSegments(new_component, false);
                                return;
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
        extraFlightBookingInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "urrentDateAndTime") == 0)
                    {
                    fromJSONCurrentDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strncmp(&(key[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'B':
                            if (strcmp(&(key[7]), "ookingSearchSpec") == 0)
                                {
                                fromJSONFlightBookingSearchSpec(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[7]), "roducts") == 0)
                                {
                                fromJSONFlightProducts(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[7]), "egments") == 0)
                                {
                                fromJSONFlightSegments(new_component, false);
                                return;
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
        extraFlightBookingInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
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
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasFlightBookingSearchSpec);
        handler->start_pair("FlightBookingSearchSpec");
        storeFlightBookingSearchSpec->write_as_json(handler);
        assert(flagHasCurrentDateAndTime);
        handler->start_pair("CurrentDateAndTime");
        storeCurrentDateAndTime->write_as_json(handler);
        if (flagHasFlightProducts)
          {
            handler->start_pair("FlightProducts");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeFlightProducts.size(); ++num1)
              {
                storeFlightProducts[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasFlightSegments)
          {
            handler->start_pair("FlightSegments");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeFlightSegments.size(); ++num2)
              {
                storeFlightSegments[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightBookingSearchSpec()))
          {
            return "When parsing the object for %what%, the \"FlightBookingSearchSpec\" field was missing.";
          }
        if (!(hasCurrentDateAndTime()))
          {
            return "When parsing the object for %what%, the \"CurrentDateAndTime\" field was missing.";
          }
        return NULL;
      }

    static FlightBookingInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightBookingInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightBookingInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingInformationNuggetJSON>, FlightBookingInformationNuggetJSON *, bool> generator("Type FlightBookingInformationNugget", ignore_extras);
            parse_json_value(text, "Text for FlightBookingInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightBookingInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightBookingInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingInformationNuggetJSON>, FlightBookingInformationNuggetJSON *, bool> generator("Type FlightBookingInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<FlightBookingSearchSpecJSON::Generator, RCHandle<FlightBookingSearchSpecJSON>, FlightBookingSearchSpecJSON *, bool > fieldGeneratorFlightBookingSearchSpec;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorCurrentDateAndTime;
        JSONHoldingArrayGenerator<FlightProductJSON::Generator, RCHandle<FlightProductJSON>, FlightProductJSON *, bool > fieldGeneratorFlightProducts;
        JSONHoldingArrayGenerator<FlightSegmentJSON::Generator, RCHandle<FlightSegmentJSON>, FlightSegmentJSON *, bool > fieldGeneratorFlightSegments;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "FlightBooking") == 0))
                throw("The key field has a value other than `FlightBooking'.");
            FlightBookingInformationNuggetJSON *result = new FlightBookingInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<FlightBookingInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightBookingInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((FlightBookingInformationNuggetJSON *)new_result);
          }
        void finish(FlightBookingInformationNuggetJSON *result)
          {
            if (fieldGeneratorFlightBookingSearchSpec.have_value)
              {
                result->setFlightBookingSearchSpec(fieldGeneratorFlightBookingSearchSpec.value.referenced());
                fieldGeneratorFlightBookingSearchSpec.have_value = false;
              }
            else if (!(result->hasFlightBookingSearchSpec()))
              {
                error("When parsing the object for %what%, the \"FlightBookingSearchSpec\" field was missing.");
              }
            if (fieldGeneratorCurrentDateAndTime.have_value)
              {
                result->setCurrentDateAndTime(fieldGeneratorCurrentDateAndTime.value.referenced());
                fieldGeneratorCurrentDateAndTime.have_value = false;
              }
            else if (!(result->hasCurrentDateAndTime()))
              {
                error("When parsing the object for %what%, the \"CurrentDateAndTime\" field was missing.");
              }
            if (fieldGeneratorFlightProducts.have_value)
              {
                result->initFlightProducts();
                size_t count = fieldGeneratorFlightProducts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightProducts(fieldGeneratorFlightProducts.value[num].referenced());
                  }
                fieldGeneratorFlightProducts.value.clear();
                fieldGeneratorFlightProducts.have_value = false;
              }
            if (fieldGeneratorFlightSegments.have_value)
              {
                result->initFlightSegments();
                size_t count = fieldGeneratorFlightSegments.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightSegments(fieldGeneratorFlightSegments.value[num].referenced());
                  }
                fieldGeneratorFlightSegments.value.clear();
                fieldGeneratorFlightSegments.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(FlightBookingInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                        return &fieldGeneratorCurrentDateAndTime;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "light", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[7]), "ookingSearchSpec") == 0)
                                    return &fieldGeneratorFlightBookingSearchSpec;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[7]), "roducts") == 0)
                                    return &fieldGeneratorFlightProducts;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[7]), "egments") == 0)
                                    return &fieldGeneratorFlightSegments;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorFlightBookingSearchSpec("field \"FlightBookingSearchSpec\" of the FlightBookingInformationNugget class", ignore_extras), fieldGeneratorCurrentDateAndTime("field \"CurrentDateAndTime\" of the FlightBookingInformationNugget class", ignore_extras), fieldGeneratorFlightProducts("field \"FlightProducts\" of the FlightBookingInformationNugget class", ignore_extras), fieldGeneratorFlightSegments("field \"FlightSegments\" of the FlightBookingInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightBookingInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFlightBookingSearchSpec.reset();
            fieldGeneratorCurrentDateAndTime.reset();
            fieldGeneratorFlightProducts.reset();
            fieldGeneratorFlightSegments.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTBOOKINGINFORMATIONNUGGETJSON_H */
