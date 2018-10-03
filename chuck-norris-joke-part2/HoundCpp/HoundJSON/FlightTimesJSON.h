/* file "FlightTimesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTTIMESJSON_H
#define FLIGHTTIMESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightTimesJSON : public ReferenceCounted
  {
  private:
    bool flagHasLocal;
    DateAndOrTimeJSON * storeLocal;
    bool flagHasUTC;
    DateAndOrTimeJSON * storeUTC;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightTimesJSON(const FlightTimesJSON &);
    FlightTimesJSON & operator=(const FlightTimesJSON &other);

    void  fromJSONLocal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUTC(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightTimesJSON(void);
    virtual ~FlightTimesJSON(void);
    bool  hasLocal(void) const;
    DateAndOrTimeJSON *  getLocal(void);
    const DateAndOrTimeJSON *  getLocal(void) const;
    bool  hasUTC(void) const;
    DateAndOrTimeJSON *  getUTC(void);
    const DateAndOrTimeJSON *  getUTC(void) const;

    virtual size_t extraFlightTimesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightTimesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightTimesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightTimesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightTimesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightTimesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setLocal(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocal)
          {
            storeLocal->remove_reference();
          }
        flagHasLocal = true;
        storeLocal = new_value;
      }
    void unsetLocal(void)
      {
        if (flagHasLocal)
          {
            storeLocal->remove_reference();
          }
        flagHasLocal = false;
      }
    void setUTC(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUTC)
          {
            storeUTC->remove_reference();
          }
        flagHasUTC = true;
        storeUTC = new_value;
      }
    void unsetUTC(void)
      {
        if (flagHasUTC)
          {
            storeUTC->remove_reference();
          }
        flagHasUTC = false;
      }

    virtual void extraFlightTimesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightTimesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightTimesLookup(key);
        if (old_field == NULL)
          {
            extraFlightTimesAppendPair(key, new_component);
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
        assert(flagHasLocal);
        handler->start_pair("Local");
        storeLocal->write_as_json(handler);
        assert(flagHasUTC);
        handler->start_pair("UTC");
        storeUTC->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLocal()))
          {
            return "When parsing the object for %what%, the \"Local\" field was missing.";
          }
        if (!(hasUTC()))
          {
            return "When parsing the object for %what%, the \"UTC\" field was missing.";
          }
        return NULL;
      }

    static FlightTimesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightTimesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightTimesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool> generator("Type FlightTimes", ignore_extras);
            parse_json_value(text, "Text for FlightTimesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightTimesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightTimesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool> generator("Type FlightTimes", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorLocal;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorUTC;
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
            FlightTimesJSON *result = new FlightTimesJSON();
            assert(result != NULL);
            RCHandle<FlightTimesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightTimesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightTimesJSON *result)
          {
            if (fieldGeneratorLocal.have_value)
              {
                result->setLocal(fieldGeneratorLocal.value.referenced());
                fieldGeneratorLocal.have_value = false;
              }
            else if (!(result->hasLocal()))
              {
                error("When parsing the object for %what%, the \"Local\" field was missing.");
              }
            if (fieldGeneratorUTC.have_value)
              {
                result->setUTC(fieldGeneratorUTC.value.referenced());
                fieldGeneratorUTC.have_value = false;
              }
            else if (!(result->hasUTC()))
              {
                error("When parsing the object for %what%, the \"UTC\" field was missing.");
              }
          }
        virtual void handle_result(FlightTimesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strcmp(&(field_name[1]), "ocal") == 0)
                        return &fieldGeneratorLocal;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "TC") == 0)
                        return &fieldGeneratorUTC;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLocal("field \"Local\" of the FlightTimes class", ignore_extras), fieldGeneratorUTC("field \"UTC\" of the FlightTimes class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightTimes class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLocal.reset();
            fieldGeneratorUTC.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTTIMESJSON_H */
