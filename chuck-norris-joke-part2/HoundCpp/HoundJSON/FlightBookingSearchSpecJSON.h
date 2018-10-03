/* file "FlightBookingSearchSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTBOOKINGSEARCHSPECJSON_H
#define FLIGHTBOOKINGSEARCHSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "FlightTravelLocationJSON.h"
#include "FlightBookingFilterJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightBookingSearchSpecJSON : public ReferenceCounted
  {
  private:
    bool flagHasCountryCode;
    std::string storeCountryCode;
    bool flagHasLanguageCode;
    std::string storeLanguageCode;
    bool flagHasFlightTravelLocationForClient;
    FlightTravelLocationJSON * storeFlightTravelLocationForClient;
    bool flagHasFlightBookingFilter;
    FlightBookingFilterJSON * storeFlightBookingFilter;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightBookingSearchSpecJSON(const FlightBookingSearchSpecJSON &);
    FlightBookingSearchSpecJSON & operator=(const FlightBookingSearchSpecJSON &other);

    void  fromJSONCountryCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLanguageCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightTravelLocationForClient(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightBookingFilter(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightBookingSearchSpecJSON(void);
    virtual ~FlightBookingSearchSpecJSON(void);
    bool  hasCountryCode(void) const;
    std::string  getCountryCode(void);
    const std::string  getCountryCode(void) const;
    bool  hasLanguageCode(void) const;
    std::string  getLanguageCode(void);
    const std::string  getLanguageCode(void) const;
    bool  hasFlightTravelLocationForClient(void) const;
    FlightTravelLocationJSON *  getFlightTravelLocationForClient(void);
    const FlightTravelLocationJSON *  getFlightTravelLocationForClient(void) const;
    bool  hasFlightBookingFilter(void) const;
    FlightBookingFilterJSON *  getFlightBookingFilter(void);
    const FlightBookingFilterJSON *  getFlightBookingFilter(void) const;

    virtual size_t extraFlightBookingSearchSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightBookingSearchSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightBookingSearchSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightBookingSearchSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightBookingSearchSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightBookingSearchSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCountryCode(std::string new_value)
      {
        flagHasCountryCode = true;
        storeCountryCode = new_value;
      }
    void unsetCountryCode(void)
      {
        flagHasCountryCode = false;
      }
    void setLanguageCode(std::string new_value)
      {
        flagHasLanguageCode = true;
        storeLanguageCode = new_value;
      }
    void unsetLanguageCode(void)
      {
        flagHasLanguageCode = false;
      }
    void setFlightTravelLocationForClient(FlightTravelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFlightTravelLocationForClient)
          {
            storeFlightTravelLocationForClient->remove_reference();
          }
        flagHasFlightTravelLocationForClient = true;
        storeFlightTravelLocationForClient = new_value;
      }
    void unsetFlightTravelLocationForClient(void)
      {
        if (flagHasFlightTravelLocationForClient)
          {
            storeFlightTravelLocationForClient->remove_reference();
          }
        flagHasFlightTravelLocationForClient = false;
      }
    void setFlightBookingFilter(FlightBookingFilterJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFlightBookingFilter)
          {
            storeFlightBookingFilter->remove_reference();
          }
        flagHasFlightBookingFilter = true;
        storeFlightBookingFilter = new_value;
      }
    void unsetFlightBookingFilter(void)
      {
        if (flagHasFlightBookingFilter)
          {
            storeFlightBookingFilter->remove_reference();
          }
        flagHasFlightBookingFilter = false;
      }

    virtual void extraFlightBookingSearchSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightBookingSearchSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightBookingSearchSpecLookup(key);
        if (old_field == NULL)
          {
            extraFlightBookingSearchSpecAppendPair(key, new_component);
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
        if (flagHasCountryCode)
          {
            handler->start_pair("CountryCode");
            handler->string_value(storeCountryCode);
          }
        if (flagHasLanguageCode)
          {
            handler->start_pair("LanguageCode");
            handler->string_value(storeLanguageCode);
          }
        if (flagHasFlightTravelLocationForClient)
          {
            handler->start_pair("FlightTravelLocationForClient");
            storeFlightTravelLocationForClient->write_as_json(handler);
          }
        assert(flagHasFlightBookingFilter);
        handler->start_pair("FlightBookingFilter");
        storeFlightBookingFilter->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightBookingFilter()))
          {
            return "When parsing the object for %what%, the \"FlightBookingFilter\" field was missing.";
          }
        return NULL;
      }

    static FlightBookingSearchSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightBookingSearchSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightBookingSearchSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingSearchSpecJSON>, FlightBookingSearchSpecJSON *, bool> generator("Type FlightBookingSearchSpec", ignore_extras);
            parse_json_value(text, "Text for FlightBookingSearchSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightBookingSearchSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightBookingSearchSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingSearchSpecJSON>, FlightBookingSearchSpecJSON *, bool> generator("Type FlightBookingSearchSpec", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountryCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLanguageCode;
        JSONHoldingGenerator<FlightTravelLocationJSON::Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool > fieldGeneratorFlightTravelLocationForClient;
        JSONHoldingGenerator<FlightBookingFilterJSON::Generator, RCHandle<FlightBookingFilterJSON>, FlightBookingFilterJSON *, bool > fieldGeneratorFlightBookingFilter;
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
            FlightBookingSearchSpecJSON *result = new FlightBookingSearchSpecJSON();
            assert(result != NULL);
            RCHandle<FlightBookingSearchSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightBookingSearchSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightBookingSearchSpecJSON *result)
          {
            if (fieldGeneratorCountryCode.have_value)
              {
                result->setCountryCode(fieldGeneratorCountryCode.value);
                fieldGeneratorCountryCode.have_value = false;
              }
            if (fieldGeneratorLanguageCode.have_value)
              {
                result->setLanguageCode(fieldGeneratorLanguageCode.value);
                fieldGeneratorLanguageCode.have_value = false;
              }
            if (fieldGeneratorFlightTravelLocationForClient.have_value)
              {
                result->setFlightTravelLocationForClient(fieldGeneratorFlightTravelLocationForClient.value.referenced());
                fieldGeneratorFlightTravelLocationForClient.have_value = false;
              }
            if (fieldGeneratorFlightBookingFilter.have_value)
              {
                result->setFlightBookingFilter(fieldGeneratorFlightBookingFilter.value.referenced());
                fieldGeneratorFlightBookingFilter.have_value = false;
              }
            else if (!(result->hasFlightBookingFilter()))
              {
                error("When parsing the object for %what%, the \"FlightBookingFilter\" field was missing.");
              }
          }
        virtual void handle_result(FlightBookingSearchSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ountryCode") == 0)
                        return &fieldGeneratorCountryCode;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "light", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[7]), "ookingFilter") == 0)
                                    return &fieldGeneratorFlightBookingFilter;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "ravelLocationForClient") == 0)
                                    return &fieldGeneratorFlightTravelLocationForClient;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "anguageCode") == 0)
                        return &fieldGeneratorLanguageCode;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCountryCode("field \"CountryCode\" of the FlightBookingSearchSpec class"), fieldGeneratorLanguageCode("field \"LanguageCode\" of the FlightBookingSearchSpec class"), fieldGeneratorFlightTravelLocationForClient("field \"FlightTravelLocationForClient\" of the FlightBookingSearchSpec class", ignore_extras), fieldGeneratorFlightBookingFilter("field \"FlightBookingFilter\" of the FlightBookingSearchSpec class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightBookingSearchSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCountryCode.reset();
            fieldGeneratorLanguageCode.reset();
            fieldGeneratorFlightTravelLocationForClient.reset();
            fieldGeneratorFlightBookingFilter.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTBOOKINGSEARCHSPECJSON_H */
