/* file "FlightStatsFlightStatusResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSFLIGHTSTATUSRESPONSEJSON_H
#define FLIGHTSTATSFLIGHTSTATUSRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "FlightStatsErrorJSON.h"
#include "FlightStatsFlightStatusJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatsFlightStatusResponseJSON : public ReferenceCounted
  {
  private:
    bool flagHaserror;
    FlightStatsErrorJSON * storeerror;
    bool flagHasflightStatuses;
    std::vector< FlightStatsFlightStatusJSON * > storeflightStatuses;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsFlightStatusResponseJSON(const FlightStatsFlightStatusResponseJSON &);
    FlightStatsFlightStatusResponseJSON & operator=(const FlightStatsFlightStatusResponseJSON &other);

    void  fromJSONerror(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONflightStatuses(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsFlightStatusResponseJSON(void);
    virtual ~FlightStatsFlightStatusResponseJSON(void);
    bool  haserror(void) const;
    FlightStatsErrorJSON *  geterror(void);
    const FlightStatsErrorJSON *  geterror(void) const;
    bool  hasflightStatuses(void) const;
    size_t  countOfflightStatuses(void) const;
    FlightStatsFlightStatusJSON *  elementOfflightStatuses(size_t element_num);
    const FlightStatsFlightStatusJSON *  elementOfflightStatuses(size_t element_num) const;
    std::vector< FlightStatsFlightStatusJSON * >  getflightStatuses(void);
    const std::vector< FlightStatsFlightStatusJSON * >  getflightStatuses(void) const;

    virtual size_t extraFlightStatsFlightStatusResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsFlightStatusResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsFlightStatusResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsFlightStatusResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsFlightStatusResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsFlightStatusResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void seterror(FlightStatsErrorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHaserror)
          {
            storeerror->remove_reference();
          }
        flagHaserror = true;
        storeerror = new_value;
      }
    void unseterror(void)
      {
        if (flagHaserror)
          {
            storeerror->remove_reference();
          }
        flagHaserror = false;
      }
    void initflightStatuses(void)
      {
        if (flagHasflightStatuses)
          {
            for (size_t num2 = 0; num2 < storeflightStatuses.size(); ++num2)
              {
                storeflightStatuses[num2]->remove_reference();
              }
          }
        flagHasflightStatuses = true;
        storeflightStatuses.clear();
      }
    void appendflightStatuses(FlightStatsFlightStatusJSON * to_append)
      {
        if (!flagHasflightStatuses)
          {
            flagHasflightStatuses = true;
            storeflightStatuses.clear();
          }
        assert(flagHasflightStatuses);
        to_append->add_reference();
        storeflightStatuses.push_back(to_append);
      }
    void unsetflightStatuses(void)
      {
        if (flagHasflightStatuses)
          {
            for (size_t num3 = 0; num3 < storeflightStatuses.size(); ++num3)
              {
                storeflightStatuses[num3]->remove_reference();
              }
          }
        flagHasflightStatuses = false;
        storeflightStatuses.clear();
      }

    virtual void extraFlightStatsFlightStatusResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsFlightStatusResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsFlightStatusResponseLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsFlightStatusResponseAppendPair(key, new_component);
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
        if (flagHaserror)
          {
            handler->start_pair("error");
            storeerror->write_as_json(handler);
          }
        if (flagHasflightStatuses)
          {
            handler->start_pair("flightStatuses");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeflightStatuses.size(); ++num1)
              {
                storeflightStatuses[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightStatsFlightStatusResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsFlightStatusResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsFlightStatusResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsFlightStatusResponseJSON>, FlightStatsFlightStatusResponseJSON *, bool> generator("Type FlightStatsFlightStatusResponse", ignore_extras);
            parse_json_value(text, "Text for FlightStatsFlightStatusResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsFlightStatusResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsFlightStatusResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsFlightStatusResponseJSON>, FlightStatsFlightStatusResponseJSON *, bool> generator("Type FlightStatsFlightStatusResponse", ignore_extras);
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
        JSONHoldingGenerator<FlightStatsErrorJSON::Generator, RCHandle<FlightStatsErrorJSON>, FlightStatsErrorJSON *, bool > fieldGeneratorerror;
        JSONHoldingArrayGenerator<FlightStatsFlightStatusJSON::Generator, RCHandle<FlightStatsFlightStatusJSON>, FlightStatsFlightStatusJSON *, bool > fieldGeneratorflightStatuses;
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
            FlightStatsFlightStatusResponseJSON *result = new FlightStatsFlightStatusResponseJSON();
            assert(result != NULL);
            RCHandle<FlightStatsFlightStatusResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsFlightStatusResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsFlightStatusResponseJSON *result)
          {
            if (fieldGeneratorerror.have_value)
              {
                result->seterror(fieldGeneratorerror.value.referenced());
                fieldGeneratorerror.have_value = false;
              }
            if (fieldGeneratorflightStatuses.have_value)
              {
                result->initflightStatuses();
                size_t count = fieldGeneratorflightStatuses.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendflightStatuses(fieldGeneratorflightStatuses.value[num].referenced());
                  }
                fieldGeneratorflightStatuses.value.clear();
                fieldGeneratorflightStatuses.have_value = false;
              }
          }
        virtual void handle_result(FlightStatsFlightStatusResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'e':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorerror;
                    break;
                case 'f':
                    if (strcmp(&(field_name[1]), "lightStatuses") == 0)
                        return &fieldGeneratorflightStatuses;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorerror("field \"error\" of the FlightStatsFlightStatusResponse class", ignore_extras), fieldGeneratorflightStatuses("field \"flightStatuses\" of the FlightStatsFlightStatusResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsFlightStatusResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorerror.reset();
            fieldGeneratorflightStatuses.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSFLIGHTSTATUSRESPONSEJSON_H */
