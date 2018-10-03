/* file "FlightPassengerTypeCountJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTPASSENGERTYPECOUNTJSON_H
#define FLIGHTPASSENGERTYPECOUNTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "FlightPassengerTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightPassengerTypeCountJSON : public ReferenceCounted
  {
  private:
    bool flagHasPassengerType;
    FlightPassengerTypeJSON * storePassengerType;
    bool flagHasCount;
    OInteger storeCount;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightPassengerTypeCountJSON(const FlightPassengerTypeCountJSON &);
    FlightPassengerTypeCountJSON & operator=(const FlightPassengerTypeCountJSON &other);

    void  fromJSONPassengerType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCount(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightPassengerTypeCountJSON(void);
    virtual ~FlightPassengerTypeCountJSON(void);
    bool  hasPassengerType(void) const;
    FlightPassengerTypeJSON *  getPassengerType(void);
    const FlightPassengerTypeJSON *  getPassengerType(void) const;
    FlightPassengerTypeJSON::TypeValue  getPassengerTypeValue(void);
    const FlightPassengerTypeJSON::TypeValue  getPassengerTypeValue(void) const;
    const char * getPassengerTypeAsChars(void) const;
    std::string  getPassengerTypeAsString(void) const;
    bool  hasCount(void) const;
    OInteger  getCount(void);
    const OInteger  getCount(void) const;

    virtual size_t extraFlightPassengerTypeCountComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightPassengerTypeCountComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightPassengerTypeCountComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightPassengerTypeCountComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightPassengerTypeCountLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightPassengerTypeCountLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setPassengerType(FlightPassengerTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPassengerType)
          {
            storePassengerType->remove_reference();
          }
        flagHasPassengerType = true;
        storePassengerType = new_value;
      }
    void setPassengerType(FlightPassengerTypeJSON::TypeValue new_value)
      {
        setPassengerType(new FlightPassengerTypeJSON(new_value));
      }
    void setPassengerType(const char *chars)
      {
        FlightPassengerTypeJSON::TypeValueKnownValues known = FlightPassengerTypeJSON::stringToValue(chars);
        FlightPassengerTypeJSON::TypeValue new_value;
        if (known == FlightPassengerTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPassengerType(new_value);
      }
    void setPassengerType(std::string the_string)
      {
        setPassengerType(the_string.c_str());
      }
    void unsetPassengerType(void)
      {
        if (flagHasPassengerType)
          {
            storePassengerType->remove_reference();
          }
        flagHasPassengerType = false;
      }
    void setCount(OInteger new_value)
      {
        flagHasCount = true;
        if (new_value < 0)
            throw("The value for field Count of FlightPassengerTypeCountJSON is less than the lower bound (0) for that field.");
        storeCount = new_value;
      }
    void unsetCount(void)
      {
        flagHasCount = false;
      }

    virtual void extraFlightPassengerTypeCountAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightPassengerTypeCountSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightPassengerTypeCountLookup(key);
        if (old_field == NULL)
          {
            extraFlightPassengerTypeCountAppendPair(key, new_component);
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
        assert(flagHasPassengerType);
        handler->start_pair("PassengerType");
        storePassengerType->write_as_json(handler);
        assert(flagHasCount);
        handler->start_pair("Count");
        handler->number_value(storeCount.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPassengerType()))
          {
            return "When parsing the object for %what%, the \"PassengerType\" field was missing.";
          }
        if (!(hasCount()))
          {
            return "When parsing the object for %what%, the \"Count\" field was missing.";
          }
        return NULL;
      }

    static FlightPassengerTypeCountJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightPassengerTypeCountJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightPassengerTypeCountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightPassengerTypeCountJSON>, FlightPassengerTypeCountJSON *, bool> generator("Type FlightPassengerTypeCount", ignore_extras);
            parse_json_value(text, "Text for FlightPassengerTypeCountJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightPassengerTypeCountJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightPassengerTypeCountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightPassengerTypeCountJSON>, FlightPassengerTypeCountJSON *, bool> generator("Type FlightPassengerTypeCount", ignore_extras);
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
        JSONHoldingGenerator<FlightPassengerTypeJSON::Generator, RCHandle<FlightPassengerTypeJSON>, FlightPassengerTypeJSON *, bool > fieldGeneratorPassengerType;
        static char lowerBoundCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundCount>, OInteger, o_integer > fieldGeneratorCount;
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
            FlightPassengerTypeCountJSON *result = new FlightPassengerTypeCountJSON();
            assert(result != NULL);
            RCHandle<FlightPassengerTypeCountJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightPassengerTypeCountAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightPassengerTypeCountJSON *result)
          {
            if (fieldGeneratorPassengerType.have_value)
              {
                result->setPassengerType(fieldGeneratorPassengerType.value.referenced());
                fieldGeneratorPassengerType.have_value = false;
              }
            else if (!(result->hasPassengerType()))
              {
                error("When parsing the object for %what%, the \"PassengerType\" field was missing.");
              }
            if (fieldGeneratorCount.have_value)
              {
                result->setCount(fieldGeneratorCount.value);
                fieldGeneratorCount.have_value = false;
              }
            else if (!(result->hasCount()))
              {
                error("When parsing the object for %what%, the \"Count\" field was missing.");
              }
          }
        virtual void handle_result(FlightPassengerTypeCountJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ount") == 0)
                        return &fieldGeneratorCount;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "assengerType") == 0)
                        return &fieldGeneratorPassengerType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPassengerType("field \"PassengerType\" of the FlightPassengerTypeCount class", ignore_extras), fieldGeneratorCount("field \"Count\" of the FlightPassengerTypeCount class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightPassengerTypeCount class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPassengerType.reset();
            fieldGeneratorCount.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTPASSENGERTYPECOUNTJSON_H */
