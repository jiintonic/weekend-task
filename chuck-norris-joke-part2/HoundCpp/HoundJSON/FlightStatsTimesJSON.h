/* file "FlightStatsTimesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSTIMESJSON_H
#define FLIGHTSTATSTIMESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatsTimesJSON : public ReferenceCounted
  {
  private:
    bool flagHasdateLocal;
    std::string storedateLocal;
    bool flagHasdateUtc;
    std::string storedateUtc;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsTimesJSON(const FlightStatsTimesJSON &);
    FlightStatsTimesJSON & operator=(const FlightStatsTimesJSON &other);

    void  fromJSONdateLocal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdateUtc(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsTimesJSON(void);
    virtual ~FlightStatsTimesJSON(void);
    bool  hasdateLocal(void) const;
    std::string  getdateLocal(void);
    const std::string  getdateLocal(void) const;
    bool  hasdateUtc(void) const;
    std::string  getdateUtc(void);
    const std::string  getdateUtc(void) const;

    virtual size_t extraFlightStatsTimesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsTimesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsTimesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsTimesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsTimesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsTimesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setdateLocal(std::string new_value)
      {
        flagHasdateLocal = true;
        storedateLocal = new_value;
      }
    void unsetdateLocal(void)
      {
        flagHasdateLocal = false;
      }
    void setdateUtc(std::string new_value)
      {
        flagHasdateUtc = true;
        storedateUtc = new_value;
      }
    void unsetdateUtc(void)
      {
        flagHasdateUtc = false;
      }

    virtual void extraFlightStatsTimesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsTimesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsTimesLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsTimesAppendPair(key, new_component);
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
        if (flagHasdateLocal)
          {
            handler->start_pair("dateLocal");
            handler->string_value(storedateLocal);
          }
        if (flagHasdateUtc)
          {
            handler->start_pair("dateUtc");
            handler->string_value(storedateUtc);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightStatsTimesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsTimesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsTimesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool> generator("Type FlightStatsTimes", ignore_extras);
            parse_json_value(text, "Text for FlightStatsTimesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsTimesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsTimesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool> generator("Type FlightStatsTimes", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordateLocal;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordateUtc;
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
            FlightStatsTimesJSON *result = new FlightStatsTimesJSON();
            assert(result != NULL);
            RCHandle<FlightStatsTimesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsTimesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsTimesJSON *result)
          {
            if (fieldGeneratordateLocal.have_value)
              {
                result->setdateLocal(fieldGeneratordateLocal.value);
                fieldGeneratordateLocal.have_value = false;
              }
            if (fieldGeneratordateUtc.have_value)
              {
                result->setdateUtc(fieldGeneratordateUtc.value);
                fieldGeneratordateUtc.have_value = false;
              }
          }
        virtual void handle_result(FlightStatsTimesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "date", 4) == 0)
              {
                switch ((unsigned char)(field_name[4]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[5]), "ocal") == 0)
                            return &fieldGeneratordateLocal;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[5]), "tc") == 0)
                            return &fieldGeneratordateUtc;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratordateLocal("field \"dateLocal\" of the FlightStatsTimes class"), fieldGeneratordateUtc("field \"dateUtc\" of the FlightStatsTimes class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsTimes class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratordateLocal.reset();
            fieldGeneratordateUtc.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSTIMESJSON_H */
