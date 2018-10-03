/* file "CarControlClimateModeCancelJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLCLIMATEMODECANCELJSON_H
#define CARCONTROLCLIMATEMODECANCELJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CarControlClimateModeCancelJSON : public CarControlCommandJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlClimateModeCancelJSON(const CarControlClimateModeCancelJSON &);
    CarControlClimateModeCancelJSON & operator=(const CarControlClimateModeCancelJSON &other);

  public:
    CarControlClimateModeCancelJSON(void);
    virtual ~CarControlClimateModeCancelJSON(void);
    const char * getCarControlCommandKind(void) const;

    virtual size_t extraCarControlClimateModeCancelComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlClimateModeCancelComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlClimateModeCancelComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlClimateModeCancelComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlClimateModeCancelLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlClimateModeCancelLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCarControlCommandComponentCount(void) const
      {
        size_t result = 0;
        result += extraCarControlClimateModeCancelComponentCount();
        return result;
      }
    const char *extraCarControlCommandComponentKey(size_t component_num) const
      {
        return extraCarControlClimateModeCancelComponentKey(component_num);
      }
    JSONValue *extraCarControlCommandComponentValue(size_t component_num)
      {
        return extraCarControlClimateModeCancelComponentValue(component_num);
      }
    const JSONValue *extraCarControlCommandComponentValue(size_t component_num) const
      {
        return extraCarControlClimateModeCancelComponentValue(component_num);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        return extraCarControlClimateModeCancelLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        return extraCarControlClimateModeCancelLookup(field_name);
      }


    virtual void extraCarControlClimateModeCancelAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlClimateModeCancelSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlClimateModeCancelLookup(key);
        if (old_field == NULL)
          {
            extraCarControlClimateModeCancelAppendPair(key, new_component);
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
    void extraCarControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        extraCarControlClimateModeCancelAppendPair(key, new_component);
      }
    void extraCarControlCommandSetField(const char *key, JSONValue *new_component)
      {
        extraCarControlClimateModeCancelSetField(key, new_component);
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
        CarControlCommandJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static CarControlClimateModeCancelJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlClimateModeCancelJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlClimateModeCancelJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlClimateModeCancelJSON>, CarControlClimateModeCancelJSON *, bool> generator("Type CarControlClimateModeCancel", ignore_extras);
            parse_json_value(text, "Text for CarControlClimateModeCancelJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlClimateModeCancelJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlClimateModeCancelJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlClimateModeCancelJSON>, CarControlClimateModeCancelJSON *, bool> generator("Type CarControlClimateModeCancel", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CarControlCommandJSON::Generator
      {
      private:
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlClimateModeCancel") == 0))
                throw("The key field has a value other than `CarControlClimateModeCancel'.");
            CarControlClimateModeCancelJSON *result = new CarControlClimateModeCancelJSON();
            assert(result != NULL);
            RCHandle<CarControlClimateModeCancelJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlClimateModeCancelAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlClimateModeCancelJSON *)new_result);
          }
        void finish(CarControlClimateModeCancelJSON *result)
          {
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlClimateModeCancelJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlClimateModeCancel class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLCLIMATEMODECANCELJSON_H */
