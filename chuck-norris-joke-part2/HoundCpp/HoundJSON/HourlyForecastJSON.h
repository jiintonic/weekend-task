/* file "HourlyForecastJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOURLYFORECASTJSON_H
#define HOURLYFORECASTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <string>
#include <stdint.h>
#include "DateAndOrTimeJSON.h"
#include "WeatherImageJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_PressureJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HourlyForecastJSON : public ReferenceCounted
  {
  public:
    class TypeTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeTemperatureJSON(const TypeTemperatureJSON &);
        TypeTemperatureJSON & operator=(const TypeTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeTemperatureJSON(void);
        virtual ~TypeTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeTemperatureLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_TemperatureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypeTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeTemperatureAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool> generator("Type TypeTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool> generator("Type TypeTemperature", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_TemperatureJSON::Generator, RCHandle<UnitsValue_TemperatureJSON>, UnitsValue_TemperatureJSON *, bool > fieldGeneratorValue;
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
                TypeTemperatureJSON *result = new TypeTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeTemperatureJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeTemperature class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeFeelsLikeTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeFeelsLikeTemperatureJSON(const TypeFeelsLikeTemperatureJSON &);
        TypeFeelsLikeTemperatureJSON & operator=(const TypeFeelsLikeTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeFeelsLikeTemperatureJSON(void);
        virtual ~TypeFeelsLikeTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeFeelsLikeTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeFeelsLikeTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeFeelsLikeTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeFeelsLikeTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeFeelsLikeTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeFeelsLikeTemperatureLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_TemperatureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypeFeelsLikeTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeFeelsLikeTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeFeelsLikeTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeFeelsLikeTemperatureAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeFeelsLikeTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeFeelsLikeTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeFeelsLikeTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeFeelsLikeTemperatureJSON>, TypeFeelsLikeTemperatureJSON *, bool> generator("Type TypeFeelsLikeTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeFeelsLikeTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeFeelsLikeTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeFeelsLikeTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeFeelsLikeTemperatureJSON>, TypeFeelsLikeTemperatureJSON *, bool> generator("Type TypeFeelsLikeTemperature", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_TemperatureJSON::Generator, RCHandle<UnitsValue_TemperatureJSON>, UnitsValue_TemperatureJSON *, bool > fieldGeneratorValue;
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
                TypeFeelsLikeTemperatureJSON *result = new TypeFeelsLikeTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeFeelsLikeTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeFeelsLikeTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeFeelsLikeTemperatureJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeFeelsLikeTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeFeelsLikeTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeFeelsLikeTemperature class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeHeatIndexJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeHeatIndexJSON(const TypeHeatIndexJSON &);
        TypeHeatIndexJSON & operator=(const TypeHeatIndexJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHeatIndexJSON(void);
        virtual ~TypeHeatIndexJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeHeatIndexComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeHeatIndexComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeHeatIndexComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeHeatIndexComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeHeatIndexLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeHeatIndexLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_TemperatureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypeHeatIndexAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeHeatIndexSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeHeatIndexLookup(key);
            if (old_field == NULL)
              {
                extraTypeHeatIndexAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeHeatIndexJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHeatIndexJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHeatIndexJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHeatIndexJSON>, TypeHeatIndexJSON *, bool> generator("Type TypeHeatIndex", ignore_extras);
                parse_json_value(text, "Text for TypeHeatIndexJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHeatIndexJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHeatIndexJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHeatIndexJSON>, TypeHeatIndexJSON *, bool> generator("Type TypeHeatIndex", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_TemperatureJSON::Generator, RCHandle<UnitsValue_TemperatureJSON>, UnitsValue_TemperatureJSON *, bool > fieldGeneratorValue;
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
                TypeHeatIndexJSON *result = new TypeHeatIndexJSON();
                assert(result != NULL);
                RCHandle<TypeHeatIndexJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeHeatIndexAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeHeatIndexJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeHeatIndexJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeHeatIndex class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeHeatIndex class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeWindchillJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeWindchillJSON(const TypeWindchillJSON &);
        TypeWindchillJSON & operator=(const TypeWindchillJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeWindchillJSON(void);
        virtual ~TypeWindchillJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeWindchillComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeWindchillComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeWindchillComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeWindchillComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeWindchillLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeWindchillLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_TemperatureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypeWindchillAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeWindchillSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeWindchillLookup(key);
            if (old_field == NULL)
              {
                extraTypeWindchillAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeWindchillJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeWindchillJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeWindchillJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWindchillJSON>, TypeWindchillJSON *, bool> generator("Type TypeWindchill", ignore_extras);
                parse_json_value(text, "Text for TypeWindchillJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeWindchillJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeWindchillJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWindchillJSON>, TypeWindchillJSON *, bool> generator("Type TypeWindchill", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_TemperatureJSON::Generator, RCHandle<UnitsValue_TemperatureJSON>, UnitsValue_TemperatureJSON *, bool > fieldGeneratorValue;
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
                TypeWindchillJSON *result = new TypeWindchillJSON();
                assert(result != NULL);
                RCHandle<TypeWindchillJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeWindchillAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeWindchillJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeWindchillJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeWindchill class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeWindchill class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeDewPointJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeDewPointJSON(const TypeDewPointJSON &);
        TypeDewPointJSON & operator=(const TypeDewPointJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDewPointJSON(void);
        virtual ~TypeDewPointJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeDewPointComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeDewPointComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeDewPointComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeDewPointComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeDewPointLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeDewPointLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_TemperatureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypeDewPointAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeDewPointSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeDewPointLookup(key);
            if (old_field == NULL)
              {
                extraTypeDewPointAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDewPointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDewPointJSON>, TypeDewPointJSON *, bool> generator("Type TypeDewPoint", ignore_extras);
                parse_json_value(text, "Text for TypeDewPointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDewPointJSON>, TypeDewPointJSON *, bool> generator("Type TypeDewPoint", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_TemperatureJSON::Generator, RCHandle<UnitsValue_TemperatureJSON>, UnitsValue_TemperatureJSON *, bool > fieldGeneratorValue;
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
                TypeDewPointJSON *result = new TypeDewPointJSON();
                assert(result != NULL);
                RCHandle<TypeDewPointJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeDewPointJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeDewPointJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeDewPoint class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeUVIndexJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        uint8_t storeValue;
        bool flagHasText;
        std::string storeText;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeUVIndexJSON(const TypeUVIndexJSON &);
        TypeUVIndexJSON & operator=(const TypeUVIndexJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONText(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeUVIndexJSON(void);
        virtual ~TypeUVIndexJSON(void);
        bool  hasValue(void) const;
        uint8_t  getValue(void);
        const uint8_t  getValue(void) const;
        bool  hasText(void) const;
        std::string  getText(void);
        const std::string  getText(void) const;

        virtual size_t extraTypeUVIndexComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeUVIndexComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeUVIndexComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeUVIndexComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeUVIndexLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeUVIndexLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(uint8_t new_value)
          {
            flagHasValue = true;
            if (new_value < 0)
                throw("The value for field Value of TypeUVIndexJSON is less than the lower bound (0) for that field.");
            if (new_value > 30)
                throw("The value for field Value of TypeUVIndexJSON is greater than the upper bound (30) for that field.");
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }
        void setText(std::string new_value)
          {
            flagHasText = true;
            storeText = new_value;
          }
        void unsetText(void)
          {
            flagHasText = false;
          }

        virtual void extraTypeUVIndexAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeUVIndexSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeUVIndexLookup(key);
            if (old_field == NULL)
              {
                extraTypeUVIndexAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            handler->number_value(storeValue);
            assert(flagHasText);
            handler->start_pair("Text");
            handler->string_value(storeText);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            if (!(hasText()))
              {
                return "When parsing the object for %what%, the \"Text\" field was missing.";
              }
            return NULL;
          }

        static TypeUVIndexJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeUVIndexJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeUVIndexJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUVIndexJSON>, TypeUVIndexJSON *, bool> generator("Type TypeUVIndex", ignore_extras);
                parse_json_value(text, "Text for TypeUVIndexJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeUVIndexJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeUVIndexJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeUVIndexJSON>, TypeUVIndexJSON *, bool> generator("Type TypeUVIndex", ignore_extras);
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
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 30>, uint8_t, uint8_t > fieldGeneratorValue;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorText;
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
                TypeUVIndexJSON *result = new TypeUVIndexJSON();
                assert(result != NULL);
                RCHandle<TypeUVIndexJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeUVIndexAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeUVIndexJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
                if (fieldGeneratorText.have_value)
                  {
                    result->setText(fieldGeneratorText.value);
                    fieldGeneratorText.have_value = false;
                  }
                else if (!(result->hasText()))
                  {
                    error("When parsing the object for %what%, the \"Text\" field was missing.");
                  }
              }
            virtual void handle_result(TypeUVIndexJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'T':
                        if (strcmp(&(field_name[1]), "ext") == 0)
                            return &fieldGeneratorText;
                        break;
                    case 'V':
                        if (strcmp(&(field_name[1]), "alue") == 0)
                            return &fieldGeneratorValue;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeUVIndex class"), fieldGeneratorText("field \"Text\" of the TypeUVIndex class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeUVIndex class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorText.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeWindJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_WindJSON * storeValue;
        bool flagHasDirectionAbbreviation;
        std::string storeDirectionAbbreviation;
        bool flagHasDirectionText;
        std::string storeDirectionText;
        bool flagHasDirectionDegrees;
        uint16_t storeDirectionDegrees;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeWindJSON(const TypeWindJSON &);
        TypeWindJSON & operator=(const TypeWindJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeWindJSON(void);
        virtual ~TypeWindJSON(void);
        bool  hasValue(void) const;
        UnitsValue_WindJSON *  getValue(void);
        const UnitsValue_WindJSON *  getValue(void) const;
        bool  hasDirectionAbbreviation(void) const;
        std::string  getDirectionAbbreviation(void);
        const std::string  getDirectionAbbreviation(void) const;
        bool  hasDirectionText(void) const;
        std::string  getDirectionText(void);
        const std::string  getDirectionText(void) const;
        bool  hasDirectionDegrees(void) const;
        uint16_t  getDirectionDegrees(void);
        const uint16_t  getDirectionDegrees(void) const;

        virtual size_t extraTypeWindComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeWindComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeWindComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeWindComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeWindLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeWindLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_WindJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }
        void setDirectionAbbreviation(std::string new_value)
          {
            flagHasDirectionAbbreviation = true;
            storeDirectionAbbreviation = new_value;
          }
        void unsetDirectionAbbreviation(void)
          {
            flagHasDirectionAbbreviation = false;
          }
        void setDirectionText(std::string new_value)
          {
            flagHasDirectionText = true;
            storeDirectionText = new_value;
          }
        void unsetDirectionText(void)
          {
            flagHasDirectionText = false;
          }
        void setDirectionDegrees(uint16_t new_value)
          {
            flagHasDirectionDegrees = true;
            if (new_value < 0)
                throw("The value for field DirectionDegrees of TypeWindJSON is less than the lower bound (0) for that field.");
            if (new_value > 360)
                throw("The value for field DirectionDegrees of TypeWindJSON is greater than the upper bound (360) for that field.");
            storeDirectionDegrees = new_value;
          }
        void unsetDirectionDegrees(void)
          {
            flagHasDirectionDegrees = false;
          }

        virtual void extraTypeWindAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeWindSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeWindLookup(key);
            if (old_field == NULL)
              {
                extraTypeWindAppendPair(key, new_component);
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
            if (flagHasValue)
              {
                handler->start_pair("Value");
                storeValue->write_as_json(handler);
              }
            if (flagHasDirectionAbbreviation)
              {
                handler->start_pair("DirectionAbbreviation");
                handler->string_value(storeDirectionAbbreviation);
              }
            if (flagHasDirectionText)
              {
                handler->start_pair("DirectionText");
                handler->string_value(storeDirectionText);
              }
            if (flagHasDirectionDegrees)
              {
                handler->start_pair("DirectionDegrees");
                handler->number_value(storeDirectionDegrees);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeWindJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeWindJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeWindJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWindJSON>, TypeWindJSON *, bool> generator("Type TypeWind", ignore_extras);
                parse_json_value(text, "Text for TypeWindJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeWindJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeWindJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWindJSON>, TypeWindJSON *, bool> generator("Type TypeWind", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_WindJSON::Generator, RCHandle<UnitsValue_WindJSON>, UnitsValue_WindJSON *, bool > fieldGeneratorValue;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDirectionAbbreviation;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDirectionText;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 0, 360>, uint16_t, uint16_t > fieldGeneratorDirectionDegrees;
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
                TypeWindJSON *result = new TypeWindJSON();
                assert(result != NULL);
                RCHandle<TypeWindJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeWindAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeWindJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                if (fieldGeneratorDirectionAbbreviation.have_value)
                  {
                    result->setDirectionAbbreviation(fieldGeneratorDirectionAbbreviation.value);
                    fieldGeneratorDirectionAbbreviation.have_value = false;
                  }
                if (fieldGeneratorDirectionText.have_value)
                  {
                    result->setDirectionText(fieldGeneratorDirectionText.value);
                    fieldGeneratorDirectionText.have_value = false;
                  }
                if (fieldGeneratorDirectionDegrees.have_value)
                  {
                    result->setDirectionDegrees(fieldGeneratorDirectionDegrees.value);
                    fieldGeneratorDirectionDegrees.have_value = false;
                  }
              }
            virtual void handle_result(TypeWindJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strncmp(&(field_name[1]), "irection", 8) == 0)
                          {
                            switch ((unsigned char)(field_name[9]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[10]), "bbreviation") == 0)
                                        return &fieldGeneratorDirectionAbbreviation;
                                    break;
                                case 'D':
                                    if (strcmp(&(field_name[10]), "egrees") == 0)
                                        return &fieldGeneratorDirectionDegrees;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[10]), "ext") == 0)
                                        return &fieldGeneratorDirectionText;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'V':
                        if (strcmp(&(field_name[1]), "alue") == 0)
                            return &fieldGeneratorValue;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeWind class", ignore_extras), fieldGeneratorDirectionAbbreviation("field \"DirectionAbbreviation\" of the TypeWind class"), fieldGeneratorDirectionText("field \"DirectionText\" of the TypeWind class"), fieldGeneratorDirectionDegrees("field \"DirectionDegrees\" of the TypeWind class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeWind class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorDirectionAbbreviation.reset();
                fieldGeneratorDirectionText.reset();
                fieldGeneratorDirectionDegrees.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeBarometricPressureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PressureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeBarometricPressureJSON(const TypeBarometricPressureJSON &);
        TypeBarometricPressureJSON & operator=(const TypeBarometricPressureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeBarometricPressureJSON(void);
        virtual ~TypeBarometricPressureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PressureJSON *  getValue(void);
        const UnitsValue_PressureJSON *  getValue(void) const;

        virtual size_t extraTypeBarometricPressureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeBarometricPressureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeBarometricPressureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeBarometricPressureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeBarometricPressureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeBarometricPressureLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_PressureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypeBarometricPressureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeBarometricPressureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeBarometricPressureLookup(key);
            if (old_field == NULL)
              {
                extraTypeBarometricPressureAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeBarometricPressureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeBarometricPressureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeBarometricPressureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeBarometricPressureJSON>, TypeBarometricPressureJSON *, bool> generator("Type TypeBarometricPressure", ignore_extras);
                parse_json_value(text, "Text for TypeBarometricPressureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeBarometricPressureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeBarometricPressureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeBarometricPressureJSON>, TypeBarometricPressureJSON *, bool> generator("Type TypeBarometricPressure", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_PressureJSON::Generator, RCHandle<UnitsValue_PressureJSON>, UnitsValue_PressureJSON *, bool > fieldGeneratorValue;
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
                TypeBarometricPressureJSON *result = new TypeBarometricPressureJSON();
                assert(result != NULL);
                RCHandle<TypeBarometricPressureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeBarometricPressureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeBarometricPressureJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeBarometricPressureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeBarometricPressure class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeBarometricPressure class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypePrecipitationTotalJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePrecipitationTotalJSON(const TypePrecipitationTotalJSON &);
        TypePrecipitationTotalJSON & operator=(const TypePrecipitationTotalJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePrecipitationTotalJSON(void);
        virtual ~TypePrecipitationTotalJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypePrecipitationTotalComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePrecipitationTotalComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePrecipitationTotalComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePrecipitationTotalComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePrecipitationTotalLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePrecipitationTotalLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_PrecipitationJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypePrecipitationTotalAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePrecipitationTotalSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePrecipitationTotalLookup(key);
            if (old_field == NULL)
              {
                extraTypePrecipitationTotalAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypePrecipitationTotalJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePrecipitationTotalJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePrecipitationTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationTotalJSON>, TypePrecipitationTotalJSON *, bool> generator("Type TypePrecipitationTotal", ignore_extras);
                parse_json_value(text, "Text for TypePrecipitationTotalJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePrecipitationTotalJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePrecipitationTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationTotalJSON>, TypePrecipitationTotalJSON *, bool> generator("Type TypePrecipitationTotal", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_PrecipitationJSON::Generator, RCHandle<UnitsValue_PrecipitationJSON>, UnitsValue_PrecipitationJSON *, bool > fieldGeneratorValue;
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
                TypePrecipitationTotalJSON *result = new TypePrecipitationTotalJSON();
                assert(result != NULL);
                RCHandle<TypePrecipitationTotalJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePrecipitationTotalAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePrecipitationTotalJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypePrecipitationTotalJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypePrecipitationTotal class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePrecipitationTotal class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeSnowTotalJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_SnowJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSnowTotalJSON(const TypeSnowTotalJSON &);
        TypeSnowTotalJSON & operator=(const TypeSnowTotalJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSnowTotalJSON(void);
        virtual ~TypeSnowTotalJSON(void);
        bool  hasValue(void) const;
        UnitsValue_SnowJSON *  getValue(void);
        const UnitsValue_SnowJSON *  getValue(void) const;

        virtual size_t extraTypeSnowTotalComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSnowTotalComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSnowTotalComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSnowTotalComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSnowTotalLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSnowTotalLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_SnowJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            if (flagHasValue)
              {
                storeValue->remove_reference();
              }
            flagHasValue = false;
          }

        virtual void extraTypeSnowTotalAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSnowTotalSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSnowTotalLookup(key);
            if (old_field == NULL)
              {
                extraTypeSnowTotalAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            storeValue->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeSnowTotalJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSnowTotalJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSnowTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSnowTotalJSON>, TypeSnowTotalJSON *, bool> generator("Type TypeSnowTotal", ignore_extras);
                parse_json_value(text, "Text for TypeSnowTotalJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSnowTotalJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSnowTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSnowTotalJSON>, TypeSnowTotalJSON *, bool> generator("Type TypeSnowTotal", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_SnowJSON::Generator, RCHandle<UnitsValue_SnowJSON>, UnitsValue_SnowJSON *, bool > fieldGeneratorValue;
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
                TypeSnowTotalJSON *result = new TypeSnowTotalJSON();
                assert(result != NULL);
                RCHandle<TypeSnowTotalJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSnowTotalAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSnowTotalJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value.referenced());
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeSnowTotalJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeSnowTotal class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSnowTotal class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasForecastDateAndTime;
    DateAndOrTimeJSON * storeForecastDateAndTime;
    bool flagHasConditionsShortPhrase;
    std::string storeConditionsShortPhrase;
    bool flagHasWeatherIconURL;
    std::string storeWeatherIconURL;
    bool flagHasConditionsImage;
    WeatherImageJSON * storeConditionsImage;
    bool flagHasTemperature;
    TypeTemperatureJSON * storeTemperature;
    bool flagHasFeelsLikeTemperature;
    TypeFeelsLikeTemperatureJSON * storeFeelsLikeTemperature;
    bool flagHasHeatIndex;
    TypeHeatIndexJSON * storeHeatIndex;
    bool flagHasWindchill;
    TypeWindchillJSON * storeWindchill;
    bool flagHasDewPoint;
    TypeDewPointJSON * storeDewPoint;
    bool flagHasProbabilityOfPrecipitationPct;
    uint8_t storeProbabilityOfPrecipitationPct;
    bool flagHasHumidityPct;
    uint8_t storeHumidityPct;
    bool flagHasUVIndex;
    TypeUVIndexJSON * storeUVIndex;
    bool flagHasWind;
    TypeWindJSON * storeWind;
    bool flagHasBarometricPressure;
    TypeBarometricPressureJSON * storeBarometricPressure;
    bool flagHasPrecipitationTotal;
    TypePrecipitationTotalJSON * storePrecipitationTotal;
    bool flagHasSnowTotal;
    TypeSnowTotalJSON * storeSnowTotal;
    bool flagHasCloudinessPct;
    uint8_t storeCloudinessPct;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HourlyForecastJSON(const HourlyForecastJSON &);
    HourlyForecastJSON & operator=(const HourlyForecastJSON &other);

    void  fromJSONForecastDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConditionsShortPhrase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFeelsLikeTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHeatIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWindchill(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProbabilityOfPrecipitationPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHumidityPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUVIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBarometricPressure(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrecipitationTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSnowTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCloudinessPct(JSONValue *json_value, bool ignore_extras = false);


  public:
    HourlyForecastJSON(void);
    virtual ~HourlyForecastJSON(void);
    bool  hasForecastDateAndTime(void) const;
    DateAndOrTimeJSON *  getForecastDateAndTime(void);
    const DateAndOrTimeJSON *  getForecastDateAndTime(void) const;
    bool  hasConditionsShortPhrase(void) const;
    std::string  getConditionsShortPhrase(void);
    const std::string  getConditionsShortPhrase(void) const;
    bool  hasWeatherIconURL(void) const;
    std::string  getWeatherIconURL(void);
    const std::string  getWeatherIconURL(void) const;
    bool  hasConditionsImage(void) const;
    WeatherImageJSON *  getConditionsImage(void);
    const WeatherImageJSON *  getConditionsImage(void) const;
    bool  hasTemperature(void) const;
    TypeTemperatureJSON *  getTemperature(void);
    const TypeTemperatureJSON *  getTemperature(void) const;
    bool  hasFeelsLikeTemperature(void) const;
    TypeFeelsLikeTemperatureJSON *  getFeelsLikeTemperature(void);
    const TypeFeelsLikeTemperatureJSON *  getFeelsLikeTemperature(void) const;
    bool  hasHeatIndex(void) const;
    TypeHeatIndexJSON *  getHeatIndex(void);
    const TypeHeatIndexJSON *  getHeatIndex(void) const;
    bool  hasWindchill(void) const;
    TypeWindchillJSON *  getWindchill(void);
    const TypeWindchillJSON *  getWindchill(void) const;
    bool  hasDewPoint(void) const;
    TypeDewPointJSON *  getDewPoint(void);
    const TypeDewPointJSON *  getDewPoint(void) const;
    bool  hasProbabilityOfPrecipitationPct(void) const;
    uint8_t  getProbabilityOfPrecipitationPct(void);
    const uint8_t  getProbabilityOfPrecipitationPct(void) const;
    bool  hasHumidityPct(void) const;
    uint8_t  getHumidityPct(void);
    const uint8_t  getHumidityPct(void) const;
    bool  hasUVIndex(void) const;
    TypeUVIndexJSON *  getUVIndex(void);
    const TypeUVIndexJSON *  getUVIndex(void) const;
    bool  hasWind(void) const;
    TypeWindJSON *  getWind(void);
    const TypeWindJSON *  getWind(void) const;
    bool  hasBarometricPressure(void) const;
    TypeBarometricPressureJSON *  getBarometricPressure(void);
    const TypeBarometricPressureJSON *  getBarometricPressure(void) const;
    bool  hasPrecipitationTotal(void) const;
    TypePrecipitationTotalJSON *  getPrecipitationTotal(void);
    const TypePrecipitationTotalJSON *  getPrecipitationTotal(void) const;
    bool  hasSnowTotal(void) const;
    TypeSnowTotalJSON *  getSnowTotal(void);
    const TypeSnowTotalJSON *  getSnowTotal(void) const;
    bool  hasCloudinessPct(void) const;
    uint8_t  getCloudinessPct(void);
    const uint8_t  getCloudinessPct(void) const;

    virtual size_t extraHourlyForecastComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHourlyForecastComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHourlyForecastComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHourlyForecastComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHourlyForecastLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHourlyForecastLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setForecastDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasForecastDateAndTime)
          {
            storeForecastDateAndTime->remove_reference();
          }
        flagHasForecastDateAndTime = true;
        storeForecastDateAndTime = new_value;
      }
    void unsetForecastDateAndTime(void)
      {
        if (flagHasForecastDateAndTime)
          {
            storeForecastDateAndTime->remove_reference();
          }
        flagHasForecastDateAndTime = false;
      }
    void setConditionsShortPhrase(std::string new_value)
      {
        flagHasConditionsShortPhrase = true;
        storeConditionsShortPhrase = new_value;
      }
    void unsetConditionsShortPhrase(void)
      {
        flagHasConditionsShortPhrase = false;
      }
    void setWeatherIconURL(std::string new_value)
      {
        flagHasWeatherIconURL = true;
        storeWeatherIconURL = new_value;
      }
    void unsetWeatherIconURL(void)
      {
        flagHasWeatherIconURL = false;
      }
    void setConditionsImage(WeatherImageJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasConditionsImage)
          {
            storeConditionsImage->remove_reference();
          }
        flagHasConditionsImage = true;
        storeConditionsImage = new_value;
      }
    void unsetConditionsImage(void)
      {
        if (flagHasConditionsImage)
          {
            storeConditionsImage->remove_reference();
          }
        flagHasConditionsImage = false;
      }
    void setTemperature(TypeTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTemperature)
          {
            storeTemperature->remove_reference();
          }
        flagHasTemperature = true;
        storeTemperature = new_value;
      }
    void unsetTemperature(void)
      {
        if (flagHasTemperature)
          {
            storeTemperature->remove_reference();
          }
        flagHasTemperature = false;
      }
    void setFeelsLikeTemperature(TypeFeelsLikeTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFeelsLikeTemperature)
          {
            storeFeelsLikeTemperature->remove_reference();
          }
        flagHasFeelsLikeTemperature = true;
        storeFeelsLikeTemperature = new_value;
      }
    void unsetFeelsLikeTemperature(void)
      {
        if (flagHasFeelsLikeTemperature)
          {
            storeFeelsLikeTemperature->remove_reference();
          }
        flagHasFeelsLikeTemperature = false;
      }
    void setHeatIndex(TypeHeatIndexJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHeatIndex)
          {
            storeHeatIndex->remove_reference();
          }
        flagHasHeatIndex = true;
        storeHeatIndex = new_value;
      }
    void unsetHeatIndex(void)
      {
        if (flagHasHeatIndex)
          {
            storeHeatIndex->remove_reference();
          }
        flagHasHeatIndex = false;
      }
    void setWindchill(TypeWindchillJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasWindchill)
          {
            storeWindchill->remove_reference();
          }
        flagHasWindchill = true;
        storeWindchill = new_value;
      }
    void unsetWindchill(void)
      {
        if (flagHasWindchill)
          {
            storeWindchill->remove_reference();
          }
        flagHasWindchill = false;
      }
    void setDewPoint(TypeDewPointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDewPoint)
          {
            storeDewPoint->remove_reference();
          }
        flagHasDewPoint = true;
        storeDewPoint = new_value;
      }
    void unsetDewPoint(void)
      {
        if (flagHasDewPoint)
          {
            storeDewPoint->remove_reference();
          }
        flagHasDewPoint = false;
      }
    void setProbabilityOfPrecipitationPct(uint8_t new_value)
      {
        flagHasProbabilityOfPrecipitationPct = true;
        if (new_value < 0)
            throw("The value for field ProbabilityOfPrecipitationPct of HourlyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ProbabilityOfPrecipitationPct of HourlyForecastJSON is greater than the upper bound (100) for that field.");
        storeProbabilityOfPrecipitationPct = new_value;
      }
    void unsetProbabilityOfPrecipitationPct(void)
      {
        flagHasProbabilityOfPrecipitationPct = false;
      }
    void setHumidityPct(uint8_t new_value)
      {
        flagHasHumidityPct = true;
        if (new_value < 0)
            throw("The value for field HumidityPct of HourlyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field HumidityPct of HourlyForecastJSON is greater than the upper bound (100) for that field.");
        storeHumidityPct = new_value;
      }
    void unsetHumidityPct(void)
      {
        flagHasHumidityPct = false;
      }
    void setUVIndex(TypeUVIndexJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUVIndex)
          {
            storeUVIndex->remove_reference();
          }
        flagHasUVIndex = true;
        storeUVIndex = new_value;
      }
    void unsetUVIndex(void)
      {
        if (flagHasUVIndex)
          {
            storeUVIndex->remove_reference();
          }
        flagHasUVIndex = false;
      }
    void setWind(TypeWindJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasWind)
          {
            storeWind->remove_reference();
          }
        flagHasWind = true;
        storeWind = new_value;
      }
    void unsetWind(void)
      {
        if (flagHasWind)
          {
            storeWind->remove_reference();
          }
        flagHasWind = false;
      }
    void setBarometricPressure(TypeBarometricPressureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBarometricPressure)
          {
            storeBarometricPressure->remove_reference();
          }
        flagHasBarometricPressure = true;
        storeBarometricPressure = new_value;
      }
    void unsetBarometricPressure(void)
      {
        if (flagHasBarometricPressure)
          {
            storeBarometricPressure->remove_reference();
          }
        flagHasBarometricPressure = false;
      }
    void setPrecipitationTotal(TypePrecipitationTotalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrecipitationTotal)
          {
            storePrecipitationTotal->remove_reference();
          }
        flagHasPrecipitationTotal = true;
        storePrecipitationTotal = new_value;
      }
    void unsetPrecipitationTotal(void)
      {
        if (flagHasPrecipitationTotal)
          {
            storePrecipitationTotal->remove_reference();
          }
        flagHasPrecipitationTotal = false;
      }
    void setSnowTotal(TypeSnowTotalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSnowTotal)
          {
            storeSnowTotal->remove_reference();
          }
        flagHasSnowTotal = true;
        storeSnowTotal = new_value;
      }
    void unsetSnowTotal(void)
      {
        if (flagHasSnowTotal)
          {
            storeSnowTotal->remove_reference();
          }
        flagHasSnowTotal = false;
      }
    void setCloudinessPct(uint8_t new_value)
      {
        flagHasCloudinessPct = true;
        if (new_value < 0)
            throw("The value for field CloudinessPct of HourlyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field CloudinessPct of HourlyForecastJSON is greater than the upper bound (100) for that field.");
        storeCloudinessPct = new_value;
      }
    void unsetCloudinessPct(void)
      {
        flagHasCloudinessPct = false;
      }

    virtual void extraHourlyForecastAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHourlyForecastSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHourlyForecastLookup(key);
        if (old_field == NULL)
          {
            extraHourlyForecastAppendPair(key, new_component);
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
        assert(flagHasForecastDateAndTime);
        handler->start_pair("ForecastDateAndTime");
        storeForecastDateAndTime->write_as_json(handler);
        if (flagHasConditionsShortPhrase)
          {
            handler->start_pair("ConditionsShortPhrase");
            handler->string_value(storeConditionsShortPhrase);
          }
        if (flagHasWeatherIconURL)
          {
            handler->start_pair("WeatherIconURL");
            handler->string_value(storeWeatherIconURL);
          }
        if (flagHasConditionsImage)
          {
            handler->start_pair("ConditionsImage");
            storeConditionsImage->write_as_json(handler);
          }
        if (flagHasTemperature)
          {
            handler->start_pair("Temperature");
            storeTemperature->write_as_json(handler);
          }
        if (flagHasFeelsLikeTemperature)
          {
            handler->start_pair("FeelsLikeTemperature");
            storeFeelsLikeTemperature->write_as_json(handler);
          }
        if (flagHasHeatIndex)
          {
            handler->start_pair("HeatIndex");
            storeHeatIndex->write_as_json(handler);
          }
        if (flagHasWindchill)
          {
            handler->start_pair("Windchill");
            storeWindchill->write_as_json(handler);
          }
        if (flagHasDewPoint)
          {
            handler->start_pair("DewPoint");
            storeDewPoint->write_as_json(handler);
          }
        if (flagHasProbabilityOfPrecipitationPct)
          {
            handler->start_pair("ProbabilityOfPrecipitationPct");
            handler->number_value(storeProbabilityOfPrecipitationPct);
          }
        if (flagHasHumidityPct)
          {
            handler->start_pair("HumidityPct");
            handler->number_value(storeHumidityPct);
          }
        if (flagHasUVIndex)
          {
            handler->start_pair("UVIndex");
            storeUVIndex->write_as_json(handler);
          }
        if (flagHasWind)
          {
            handler->start_pair("Wind");
            storeWind->write_as_json(handler);
          }
        if (flagHasBarometricPressure)
          {
            handler->start_pair("BarometricPressure");
            storeBarometricPressure->write_as_json(handler);
          }
        if (flagHasPrecipitationTotal)
          {
            handler->start_pair("PrecipitationTotal");
            storePrecipitationTotal->write_as_json(handler);
          }
        if (flagHasSnowTotal)
          {
            handler->start_pair("SnowTotal");
            storeSnowTotal->write_as_json(handler);
          }
        if (flagHasCloudinessPct)
          {
            handler->start_pair("CloudinessPct");
            handler->number_value(storeCloudinessPct);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasForecastDateAndTime()))
          {
            return "When parsing the object for %what%, the \"ForecastDateAndTime\" field was missing.";
          }
        return NULL;
      }

    static HourlyForecastJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HourlyForecastJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HourlyForecastJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HourlyForecastJSON>, HourlyForecastJSON *, bool> generator("Type HourlyForecast", ignore_extras);
            parse_json_value(text, "Text for HourlyForecastJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HourlyForecastJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HourlyForecastJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HourlyForecastJSON>, HourlyForecastJSON *, bool> generator("Type HourlyForecast", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorForecastDateAndTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorConditionsShortPhrase;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherIconURL;
        JSONHoldingGenerator<WeatherImageJSON::Generator, RCHandle<WeatherImageJSON>, WeatherImageJSON *, bool > fieldGeneratorConditionsImage;
        JSONHoldingGenerator<TypeTemperatureJSON::Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool > fieldGeneratorTemperature;
        JSONHoldingGenerator<TypeFeelsLikeTemperatureJSON::Generator, RCHandle<TypeFeelsLikeTemperatureJSON>, TypeFeelsLikeTemperatureJSON *, bool > fieldGeneratorFeelsLikeTemperature;
        JSONHoldingGenerator<TypeHeatIndexJSON::Generator, RCHandle<TypeHeatIndexJSON>, TypeHeatIndexJSON *, bool > fieldGeneratorHeatIndex;
        JSONHoldingGenerator<TypeWindchillJSON::Generator, RCHandle<TypeWindchillJSON>, TypeWindchillJSON *, bool > fieldGeneratorWindchill;
        JSONHoldingGenerator<TypeDewPointJSON::Generator, RCHandle<TypeDewPointJSON>, TypeDewPointJSON *, bool > fieldGeneratorDewPoint;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorProbabilityOfPrecipitationPct;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorHumidityPct;
        JSONHoldingGenerator<TypeUVIndexJSON::Generator, RCHandle<TypeUVIndexJSON>, TypeUVIndexJSON *, bool > fieldGeneratorUVIndex;
        JSONHoldingGenerator<TypeWindJSON::Generator, RCHandle<TypeWindJSON>, TypeWindJSON *, bool > fieldGeneratorWind;
        JSONHoldingGenerator<TypeBarometricPressureJSON::Generator, RCHandle<TypeBarometricPressureJSON>, TypeBarometricPressureJSON *, bool > fieldGeneratorBarometricPressure;
        JSONHoldingGenerator<TypePrecipitationTotalJSON::Generator, RCHandle<TypePrecipitationTotalJSON>, TypePrecipitationTotalJSON *, bool > fieldGeneratorPrecipitationTotal;
        JSONHoldingGenerator<TypeSnowTotalJSON::Generator, RCHandle<TypeSnowTotalJSON>, TypeSnowTotalJSON *, bool > fieldGeneratorSnowTotal;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorCloudinessPct;
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
            HourlyForecastJSON *result = new HourlyForecastJSON();
            assert(result != NULL);
            RCHandle<HourlyForecastJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHourlyForecastAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HourlyForecastJSON *result)
          {
            if (fieldGeneratorForecastDateAndTime.have_value)
              {
                result->setForecastDateAndTime(fieldGeneratorForecastDateAndTime.value.referenced());
                fieldGeneratorForecastDateAndTime.have_value = false;
              }
            else if (!(result->hasForecastDateAndTime()))
              {
                error("When parsing the object for %what%, the \"ForecastDateAndTime\" field was missing.");
              }
            if (fieldGeneratorConditionsShortPhrase.have_value)
              {
                result->setConditionsShortPhrase(fieldGeneratorConditionsShortPhrase.value);
                fieldGeneratorConditionsShortPhrase.have_value = false;
              }
            if (fieldGeneratorWeatherIconURL.have_value)
              {
                result->setWeatherIconURL(fieldGeneratorWeatherIconURL.value);
                fieldGeneratorWeatherIconURL.have_value = false;
              }
            if (fieldGeneratorConditionsImage.have_value)
              {
                result->setConditionsImage(fieldGeneratorConditionsImage.value.referenced());
                fieldGeneratorConditionsImage.have_value = false;
              }
            if (fieldGeneratorTemperature.have_value)
              {
                result->setTemperature(fieldGeneratorTemperature.value.referenced());
                fieldGeneratorTemperature.have_value = false;
              }
            if (fieldGeneratorFeelsLikeTemperature.have_value)
              {
                result->setFeelsLikeTemperature(fieldGeneratorFeelsLikeTemperature.value.referenced());
                fieldGeneratorFeelsLikeTemperature.have_value = false;
              }
            if (fieldGeneratorHeatIndex.have_value)
              {
                result->setHeatIndex(fieldGeneratorHeatIndex.value.referenced());
                fieldGeneratorHeatIndex.have_value = false;
              }
            if (fieldGeneratorWindchill.have_value)
              {
                result->setWindchill(fieldGeneratorWindchill.value.referenced());
                fieldGeneratorWindchill.have_value = false;
              }
            if (fieldGeneratorDewPoint.have_value)
              {
                result->setDewPoint(fieldGeneratorDewPoint.value.referenced());
                fieldGeneratorDewPoint.have_value = false;
              }
            if (fieldGeneratorProbabilityOfPrecipitationPct.have_value)
              {
                result->setProbabilityOfPrecipitationPct(fieldGeneratorProbabilityOfPrecipitationPct.value);
                fieldGeneratorProbabilityOfPrecipitationPct.have_value = false;
              }
            if (fieldGeneratorHumidityPct.have_value)
              {
                result->setHumidityPct(fieldGeneratorHumidityPct.value);
                fieldGeneratorHumidityPct.have_value = false;
              }
            if (fieldGeneratorUVIndex.have_value)
              {
                result->setUVIndex(fieldGeneratorUVIndex.value.referenced());
                fieldGeneratorUVIndex.have_value = false;
              }
            if (fieldGeneratorWind.have_value)
              {
                result->setWind(fieldGeneratorWind.value.referenced());
                fieldGeneratorWind.have_value = false;
              }
            if (fieldGeneratorBarometricPressure.have_value)
              {
                result->setBarometricPressure(fieldGeneratorBarometricPressure.value.referenced());
                fieldGeneratorBarometricPressure.have_value = false;
              }
            if (fieldGeneratorPrecipitationTotal.have_value)
              {
                result->setPrecipitationTotal(fieldGeneratorPrecipitationTotal.value.referenced());
                fieldGeneratorPrecipitationTotal.have_value = false;
              }
            if (fieldGeneratorSnowTotal.have_value)
              {
                result->setSnowTotal(fieldGeneratorSnowTotal.value.referenced());
                fieldGeneratorSnowTotal.have_value = false;
              }
            if (fieldGeneratorCloudinessPct.have_value)
              {
                result->setCloudinessPct(fieldGeneratorCloudinessPct.value);
                fieldGeneratorCloudinessPct.have_value = false;
              }
          }
        virtual void handle_result(HourlyForecastJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "arometricPressure") == 0)
                        return &fieldGeneratorBarometricPressure;
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "oudinessPct") == 0)
                                return &fieldGeneratorCloudinessPct;
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "nditions", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 'I':
                                        if (strcmp(&(field_name[11]), "mage") == 0)
                                            return &fieldGeneratorConditionsImage;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[11]), "hortPhrase") == 0)
                                            return &fieldGeneratorConditionsShortPhrase;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ewPoint") == 0)
                        return &fieldGeneratorDewPoint;
                    break;
                case 'F':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "elsLikeTemperature") == 0)
                                return &fieldGeneratorFeelsLikeTemperature;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "recastDateAndTime") == 0)
                                return &fieldGeneratorForecastDateAndTime;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "atIndex") == 0)
                                return &fieldGeneratorHeatIndex;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "midityPct") == 0)
                                return &fieldGeneratorHumidityPct;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "r", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[3]), "cipitationTotal") == 0)
                                    return &fieldGeneratorPrecipitationTotal;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[3]), "babilityOfPrecipitationPct") == 0)
                                    return &fieldGeneratorProbabilityOfPrecipitationPct;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "nowTotal") == 0)
                        return &fieldGeneratorSnowTotal;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "emperature") == 0)
                        return &fieldGeneratorTemperature;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "VIndex") == 0)
                        return &fieldGeneratorUVIndex;
                    break;
                case 'W':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "atherIconURL") == 0)
                                return &fieldGeneratorWeatherIconURL;
                            break;
                        case 'i':
                            if (strncmp(&(field_name[2]), "nd", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 0:
                                        return &fieldGeneratorWind;
                                    case 'c':
                                        if (strcmp(&(field_name[5]), "hill") == 0)
                                            return &fieldGeneratorWindchill;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorForecastDateAndTime("field \"ForecastDateAndTime\" of the HourlyForecast class", ignore_extras), fieldGeneratorConditionsShortPhrase("field \"ConditionsShortPhrase\" of the HourlyForecast class"), fieldGeneratorWeatherIconURL("field \"WeatherIconURL\" of the HourlyForecast class"), fieldGeneratorConditionsImage("field \"ConditionsImage\" of the HourlyForecast class", ignore_extras), fieldGeneratorTemperature("field \"Temperature\" of the HourlyForecast class", ignore_extras), fieldGeneratorFeelsLikeTemperature("field \"FeelsLikeTemperature\" of the HourlyForecast class", ignore_extras), fieldGeneratorHeatIndex("field \"HeatIndex\" of the HourlyForecast class", ignore_extras), fieldGeneratorWindchill("field \"Windchill\" of the HourlyForecast class", ignore_extras), fieldGeneratorDewPoint("field \"DewPoint\" of the HourlyForecast class", ignore_extras), fieldGeneratorProbabilityOfPrecipitationPct("field \"ProbabilityOfPrecipitationPct\" of the HourlyForecast class"), fieldGeneratorHumidityPct("field \"HumidityPct\" of the HourlyForecast class"), fieldGeneratorUVIndex("field \"UVIndex\" of the HourlyForecast class", ignore_extras), fieldGeneratorWind("field \"Wind\" of the HourlyForecast class", ignore_extras), fieldGeneratorBarometricPressure("field \"BarometricPressure\" of the HourlyForecast class", ignore_extras), fieldGeneratorPrecipitationTotal("field \"PrecipitationTotal\" of the HourlyForecast class", ignore_extras), fieldGeneratorSnowTotal("field \"SnowTotal\" of the HourlyForecast class", ignore_extras), fieldGeneratorCloudinessPct("field \"CloudinessPct\" of the HourlyForecast class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HourlyForecast class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorForecastDateAndTime.reset();
            fieldGeneratorConditionsShortPhrase.reset();
            fieldGeneratorWeatherIconURL.reset();
            fieldGeneratorConditionsImage.reset();
            fieldGeneratorTemperature.reset();
            fieldGeneratorFeelsLikeTemperature.reset();
            fieldGeneratorHeatIndex.reset();
            fieldGeneratorWindchill.reset();
            fieldGeneratorDewPoint.reset();
            fieldGeneratorProbabilityOfPrecipitationPct.reset();
            fieldGeneratorHumidityPct.reset();
            fieldGeneratorUVIndex.reset();
            fieldGeneratorWind.reset();
            fieldGeneratorBarometricPressure.reset();
            fieldGeneratorPrecipitationTotal.reset();
            fieldGeneratorSnowTotal.reset();
            fieldGeneratorCloudinessPct.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOURLYFORECASTJSON_H */
