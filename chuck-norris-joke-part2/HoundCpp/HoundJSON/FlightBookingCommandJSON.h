/* file "FlightBookingCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTBOOKINGCOMMANDJSON_H
#define FLIGHTBOOKINGCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "FlightBookingSearchSpecJSON.h"
#include "FlightTimesJSON.h"
#include "FlightSearchProgressDetailsJSON.h"
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


class FlightBookingCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasFlightBookingSearchSpec;
        FlightBookingSearchSpecJSON * storeFlightBookingSearchSpec;
        bool flagHasCurrentDateAndTime;
        FlightTimesJSON * storeCurrentDateAndTime;
        bool flagHasFlightSearchProgressDetails;
        FlightSearchProgressDetailsJSON * storeFlightSearchProgressDetails;
        bool flagHasErrorMessage;
        std::string storeErrorMessage;
        bool flagHasFlightProducts;
        std::vector< FlightProductJSON * > storeFlightProducts;
        bool flagHasFlightSegments;
        std::vector< FlightSegmentJSON * > storeFlightSegments;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONFlightBookingSearchSpec(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFlightSearchProgressDetails(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFlightProducts(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFlightSegments(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasFlightBookingSearchSpec(void) const;
        FlightBookingSearchSpecJSON *  getFlightBookingSearchSpec(void);
        const FlightBookingSearchSpecJSON *  getFlightBookingSearchSpec(void) const;
        bool  hasCurrentDateAndTime(void) const;
        FlightTimesJSON *  getCurrentDateAndTime(void);
        const FlightTimesJSON *  getCurrentDateAndTime(void) const;
        bool  hasFlightSearchProgressDetails(void) const;
        FlightSearchProgressDetailsJSON *  getFlightSearchProgressDetails(void);
        const FlightSearchProgressDetailsJSON *  getFlightSearchProgressDetails(void) const;
        bool  hasErrorMessage(void) const;
        std::string  getErrorMessage(void);
        const std::string  getErrorMessage(void) const;
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
        void setFlightSearchProgressDetails(FlightSearchProgressDetailsJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasFlightSearchProgressDetails)
              {
                storeFlightSearchProgressDetails->remove_reference();
              }
            flagHasFlightSearchProgressDetails = true;
            storeFlightSearchProgressDetails = new_value;
          }
        void unsetFlightSearchProgressDetails(void)
          {
            if (flagHasFlightSearchProgressDetails)
              {
                storeFlightSearchProgressDetails->remove_reference();
              }
            flagHasFlightSearchProgressDetails = false;
          }
        void setErrorMessage(std::string new_value)
          {
            flagHasErrorMessage = true;
            storeErrorMessage = new_value;
          }
        void unsetErrorMessage(void)
          {
            flagHasErrorMessage = false;
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


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasFlightBookingSearchSpec);
            handler->start_pair("FlightBookingSearchSpec");
            storeFlightBookingSearchSpec->write_as_json(handler);
            assert(flagHasCurrentDateAndTime);
            handler->start_pair("CurrentDateAndTime");
            storeCurrentDateAndTime->write_as_json(handler);
            if (flagHasFlightSearchProgressDetails)
              {
                handler->start_pair("FlightSearchProgressDetails");
                storeFlightSearchProgressDetails->write_as_json(handler);
              }
            if (flagHasErrorMessage)
              {
                handler->start_pair("ErrorMessage");
                handler->string_value(storeErrorMessage);
              }
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

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<FlightBookingSearchSpecJSON::Generator, RCHandle<FlightBookingSearchSpecJSON>, FlightBookingSearchSpecJSON *, bool > fieldGeneratorFlightBookingSearchSpec;
            JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorCurrentDateAndTime;
            JSONHoldingGenerator<FlightSearchProgressDetailsJSON::Generator, RCHandle<FlightSearchProgressDetailsJSON>, FlightSearchProgressDetailsJSON *, bool > fieldGeneratorFlightSearchProgressDetails;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessage;
            JSONHoldingArrayGenerator<FlightProductJSON::Generator, RCHandle<FlightProductJSON>, FlightProductJSON *, bool > fieldGeneratorFlightProducts;
            JSONHoldingArrayGenerator<FlightSegmentJSON::Generator, RCHandle<FlightSegmentJSON>, FlightSegmentJSON *, bool > fieldGeneratorFlightSegments;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
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
                if (fieldGeneratorFlightSearchProgressDetails.have_value)
                  {
                    result->setFlightSearchProgressDetails(fieldGeneratorFlightSearchProgressDetails.value.referenced());
                    fieldGeneratorFlightSearchProgressDetails.have_value = false;
                  }
                if (fieldGeneratorErrorMessage.have_value)
                  {
                    result->setErrorMessage(fieldGeneratorErrorMessage.value);
                    fieldGeneratorErrorMessage.have_value = false;
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
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                            return &fieldGeneratorCurrentDateAndTime;
                        break;
                    case 'E':
                        if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                            return &fieldGeneratorErrorMessage;
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
                                    if (strncmp(&(field_name[7]), "e", 1) == 0)
                                      {
                                        switch ((unsigned char)(field_name[8]))
                                          {
                                            case 'a':
                                                if (strcmp(&(field_name[9]), "rchProgressDetails") == 0)
                                                    return &fieldGeneratorFlightSearchProgressDetails;
                                                break;
                                            case 'g':
                                                if (strcmp(&(field_name[9]), "ments") == 0)
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
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorFlightBookingSearchSpec("field \"FlightBookingSearchSpec\" of the TypeNativeData class", ignore_extras), fieldGeneratorCurrentDateAndTime("field \"CurrentDateAndTime\" of the TypeNativeData class", ignore_extras), fieldGeneratorFlightSearchProgressDetails("field \"FlightSearchProgressDetails\" of the TypeNativeData class", ignore_extras), fieldGeneratorErrorMessage("field \"ErrorMessage\" of the TypeNativeData class"), fieldGeneratorFlightProducts("field \"FlightProducts\" of the TypeNativeData class", ignore_extras), fieldGeneratorFlightSegments("field \"FlightSegments\" of the TypeNativeData class", ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorFlightBookingSearchSpec.reset();
                fieldGeneratorCurrentDateAndTime.reset();
                fieldGeneratorFlightSearchProgressDetails.reset();
                fieldGeneratorErrorMessage.reset();
                fieldGeneratorFlightProducts.reset();
                fieldGeneratorFlightSegments.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightBookingCommandJSON(const FlightBookingCommandJSON &);
    FlightBookingCommandJSON & operator=(const FlightBookingCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightBookingCommandJSON(void);
    virtual ~FlightBookingCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraFlightBookingCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightBookingCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightBookingCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightBookingCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightBookingCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightBookingCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraFlightBookingCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraFlightBookingCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraFlightBookingCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraFlightBookingCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraFlightBookingCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraFlightBookingCommandLookup(field_name);
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraFlightBookingCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightBookingCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightBookingCommandLookup(key);
        if (old_field == NULL)
          {
            extraFlightBookingCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraFlightBookingCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraFlightBookingCommandSetField(key, new_component);
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
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static FlightBookingCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightBookingCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightBookingCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingCommandJSON>, FlightBookingCommandJSON *, bool> generator("Type FlightBookingCommand", ignore_extras);
            parse_json_value(text, "Text for FlightBookingCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightBookingCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightBookingCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingCommandJSON>, FlightBookingCommandJSON *, bool> generator("Type FlightBookingCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "FlightBookingCommand") == 0))
                throw("The key field has a value other than `FlightBookingCommand'.");
            FlightBookingCommandJSON *result = new FlightBookingCommandJSON();
            assert(result != NULL);
            RCHandle<FlightBookingCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightBookingCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((FlightBookingCommandJSON *)new_result);
          }
        void finish(FlightBookingCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(FlightBookingCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the FlightBookingCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightBookingCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTBOOKINGCOMMANDJSON_H */
