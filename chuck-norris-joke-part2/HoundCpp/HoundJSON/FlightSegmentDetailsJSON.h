/* file "FlightSegmentDetailsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSEGMENTDETAILSJSON_H
#define FLIGHTSEGMENTDETAILSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "CabinClassJSON.h"
#include "FlightTravelLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSegmentDetailsJSON : public ReferenceCounted
  {
  private:
    bool flagHasFlightSegmentID;
    std::string storeFlightSegmentID;
    bool flagHasCabinClass;
    CabinClassJSON * storeCabinClass;
    bool flagHasLayoverDuration;
    double storeLayoverDuration;
    std::string textStoreLayoverDuration;
    bool flagHasChangeToAirport;
    FlightTravelLocationJSON * storeChangeToAirport;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightSegmentDetailsJSON(const FlightSegmentDetailsJSON &);
    FlightSegmentDetailsJSON & operator=(const FlightSegmentDetailsJSON &other);

    void  fromJSONFlightSegmentID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCabinClass(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLayoverDuration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChangeToAirport(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSegmentDetailsJSON(void);
    virtual ~FlightSegmentDetailsJSON(void);
    bool  hasFlightSegmentID(void) const;
    std::string  getFlightSegmentID(void);
    const std::string  getFlightSegmentID(void) const;
    bool  hasCabinClass(void) const;
    CabinClassJSON *  getCabinClass(void);
    const CabinClassJSON *  getCabinClass(void) const;
    CabinClassJSON::TypeValue  getCabinClassValue(void);
    const CabinClassJSON::TypeValue  getCabinClassValue(void) const;
    const char * getCabinClassAsChars(void) const;
    std::string  getCabinClassAsString(void) const;
    bool  hasLayoverDuration(void) const;
    double  getLayoverDuration(void);
    const double  getLayoverDuration(void) const;
    std::string  getLayoverDurationAsText(void) const;
    bool  hasChangeToAirport(void) const;
    FlightTravelLocationJSON *  getChangeToAirport(void);
    const FlightTravelLocationJSON *  getChangeToAirport(void) const;

    virtual size_t extraFlightSegmentDetailsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightSegmentDetailsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightSegmentDetailsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightSegmentDetailsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightSegmentDetailsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightSegmentDetailsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFlightSegmentID(std::string new_value)
      {
        flagHasFlightSegmentID = true;
        storeFlightSegmentID = new_value;
      }
    void unsetFlightSegmentID(void)
      {
        flagHasFlightSegmentID = false;
      }
    void setCabinClass(CabinClassJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCabinClass)
          {
            storeCabinClass->remove_reference();
          }
        flagHasCabinClass = true;
        storeCabinClass = new_value;
      }
    void setCabinClass(CabinClassJSON::TypeValue new_value)
      {
        setCabinClass(new CabinClassJSON(new_value));
      }
    void setCabinClass(const char *chars)
      {
        CabinClassJSON::TypeValueKnownValues known = CabinClassJSON::stringToValue(chars);
        CabinClassJSON::TypeValue new_value;
        if (known == CabinClassJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setCabinClass(new_value);
      }
    void setCabinClass(std::string the_string)
      {
        setCabinClass(the_string.c_str());
      }
    void unsetCabinClass(void)
      {
        if (flagHasCabinClass)
          {
            storeCabinClass->remove_reference();
          }
        flagHasCabinClass = false;
      }
    void setLayoverDuration(double new_value)
      {
        flagHasLayoverDuration = true;
        storeLayoverDuration = new_value;
        textStoreLayoverDuration = "";
      }
    void setLayoverDurationText(std::string new_value)
      {
        flagHasLayoverDuration = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field LayoverDuration of FlightSegmentDetailsJSON is not a valid number.");
        textStoreLayoverDuration = new_value;
      }
    void unsetLayoverDuration(void)
      {
        flagHasLayoverDuration = false;
      }
    void setChangeToAirport(FlightTravelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasChangeToAirport)
          {
            storeChangeToAirport->remove_reference();
          }
        flagHasChangeToAirport = true;
        storeChangeToAirport = new_value;
      }
    void unsetChangeToAirport(void)
      {
        if (flagHasChangeToAirport)
          {
            storeChangeToAirport->remove_reference();
          }
        flagHasChangeToAirport = false;
      }

    virtual void extraFlightSegmentDetailsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightSegmentDetailsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightSegmentDetailsLookup(key);
        if (old_field == NULL)
          {
            extraFlightSegmentDetailsAppendPair(key, new_component);
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
        assert(flagHasFlightSegmentID);
        handler->start_pair("FlightSegmentID");
        handler->string_value(storeFlightSegmentID);
        assert(flagHasCabinClass);
        handler->start_pair("CabinClass");
        storeCabinClass->write_as_json(handler);
        if (flagHasLayoverDuration)
          {
            handler->start_pair("LayoverDuration");
            if (textStoreLayoverDuration != "")
                handler->number_value(textStoreLayoverDuration.c_str());
            else if (((double)(long int)storeLayoverDuration) == storeLayoverDuration)
                handler->number_value((long int)storeLayoverDuration);
            else
                handler->number_value(storeLayoverDuration);
          }
        if (flagHasChangeToAirport)
          {
            handler->start_pair("ChangeToAirport");
            storeChangeToAirport->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightSegmentID()))
          {
            return "When parsing the object for %what%, the \"FlightSegmentID\" field was missing.";
          }
        if (!(hasCabinClass()))
          {
            return "When parsing the object for %what%, the \"CabinClass\" field was missing.";
          }
        return NULL;
      }

    static FlightSegmentDetailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSegmentDetailsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSegmentDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentDetailsJSON>, FlightSegmentDetailsJSON *, bool> generator("Type FlightSegmentDetails", ignore_extras);
            parse_json_value(text, "Text for FlightSegmentDetailsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSegmentDetailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSegmentDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentDetailsJSON>, FlightSegmentDetailsJSON *, bool> generator("Type FlightSegmentDetails", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFlightSegmentID;
        JSONHoldingGenerator<CabinClassJSON::Generator, RCHandle<CabinClassJSON>, CabinClassJSON *, bool > fieldGeneratorCabinClass;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLayoverDuration;
        JSONHoldingGenerator<FlightTravelLocationJSON::Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool > fieldGeneratorChangeToAirport;
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
            FlightSegmentDetailsJSON *result = new FlightSegmentDetailsJSON();
            assert(result != NULL);
            RCHandle<FlightSegmentDetailsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightSegmentDetailsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightSegmentDetailsJSON *result)
          {
            if (fieldGeneratorFlightSegmentID.have_value)
              {
                result->setFlightSegmentID(fieldGeneratorFlightSegmentID.value);
                fieldGeneratorFlightSegmentID.have_value = false;
              }
            else if (!(result->hasFlightSegmentID()))
              {
                error("When parsing the object for %what%, the \"FlightSegmentID\" field was missing.");
              }
            if (fieldGeneratorCabinClass.have_value)
              {
                result->setCabinClass(fieldGeneratorCabinClass.value.referenced());
                fieldGeneratorCabinClass.have_value = false;
              }
            else if (!(result->hasCabinClass()))
              {
                error("When parsing the object for %what%, the \"CabinClass\" field was missing.");
              }
            if (fieldGeneratorLayoverDuration.have_value)
              {
                result->setLayoverDurationText(fieldGeneratorLayoverDuration.value);
                fieldGeneratorLayoverDuration.have_value = false;
              }
            if (fieldGeneratorChangeToAirport.have_value)
              {
                result->setChangeToAirport(fieldGeneratorChangeToAirport.value.referenced());
                fieldGeneratorChangeToAirport.have_value = false;
              }
          }
        virtual void handle_result(FlightSegmentDetailsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "binClass") == 0)
                                return &fieldGeneratorCabinClass;
                            break;
                        case 'h':
                            if (strcmp(&(field_name[2]), "angeToAirport") == 0)
                                return &fieldGeneratorChangeToAirport;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "lightSegmentID") == 0)
                        return &fieldGeneratorFlightSegmentID;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ayoverDuration") == 0)
                        return &fieldGeneratorLayoverDuration;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFlightSegmentID("field \"FlightSegmentID\" of the FlightSegmentDetails class"), fieldGeneratorCabinClass("field \"CabinClass\" of the FlightSegmentDetails class", ignore_extras), fieldGeneratorLayoverDuration("field \"LayoverDuration\" of the FlightSegmentDetails class"), fieldGeneratorChangeToAirport("field \"ChangeToAirport\" of the FlightSegmentDetails class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightSegmentDetails class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFlightSegmentID.reset();
            fieldGeneratorCabinClass.reset();
            fieldGeneratorLayoverDuration.reset();
            fieldGeneratorChangeToAirport.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSEGMENTDETAILSJSON_H */
