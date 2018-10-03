/* file "ShowWeatherCurrentConditionsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWWEATHERCURRENTCONDITIONSINFORMATIONNUGGETJSON_H
#define SHOWWEATHERCURRENTCONDITIONSINFORMATIONNUGGETJSON_H

#pragma interface

#include "WeatherInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "AttributionJSON.h"
#include "MapLocationJSON.h"
#include "AlertJSON.h"
#include "DateAndOrTimeJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "WeatherImageJSON.h"
#include "UnitsValue_VisibilityJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_PressureJSON.h"
#include "DailyForecastJSON.h"
#include "HourlyForecastJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowWeatherCurrentConditionsInformationNuggetJSON : public WeatherInformationNuggetJSON
  {
  public:
    class TypeCurrentTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeCurrentTemperatureJSON(const TypeCurrentTemperatureJSON &);
        TypeCurrentTemperatureJSON & operator=(const TypeCurrentTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeCurrentTemperatureJSON(void);
        virtual ~TypeCurrentTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeCurrentTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeCurrentTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeCurrentTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeCurrentTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeCurrentTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeCurrentTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeCurrentTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeCurrentTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeCurrentTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeCurrentTemperatureAppendPair(key, new_component);
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

        static TypeCurrentTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeCurrentTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeCurrentTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeCurrentTemperatureJSON>, TypeCurrentTemperatureJSON *, bool> generator("Type TypeCurrentTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeCurrentTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeCurrentTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeCurrentTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeCurrentTemperatureJSON>, TypeCurrentTemperatureJSON *, bool> generator("Type TypeCurrentTemperature", ignore_extras);
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
                TypeCurrentTemperatureJSON *result = new TypeCurrentTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeCurrentTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeCurrentTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeCurrentTemperatureJSON *result)
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
            virtual void handle_result(TypeCurrentTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeCurrentTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeCurrentTemperature class");
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
    class TypeVisibilityJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_VisibilityJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeVisibilityJSON(const TypeVisibilityJSON &);
        TypeVisibilityJSON & operator=(const TypeVisibilityJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeVisibilityJSON(void);
        virtual ~TypeVisibilityJSON(void);
        bool  hasValue(void) const;
        UnitsValue_VisibilityJSON *  getValue(void);
        const UnitsValue_VisibilityJSON *  getValue(void) const;

        virtual size_t extraTypeVisibilityComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeVisibilityComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeVisibilityComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeVisibilityComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeVisibilityLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeVisibilityLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_VisibilityJSON * new_value)
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

        virtual void extraTypeVisibilityAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeVisibilitySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeVisibilityLookup(key);
            if (old_field == NULL)
              {
                extraTypeVisibilityAppendPair(key, new_component);
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

        static TypeVisibilityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeVisibilityJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeVisibilityJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeVisibilityJSON>, TypeVisibilityJSON *, bool> generator("Type TypeVisibility", ignore_extras);
                parse_json_value(text, "Text for TypeVisibilityJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeVisibilityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeVisibilityJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeVisibilityJSON>, TypeVisibilityJSON *, bool> generator("Type TypeVisibility", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_VisibilityJSON::Generator, RCHandle<UnitsValue_VisibilityJSON>, UnitsValue_VisibilityJSON *, bool > fieldGeneratorValue;
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
                TypeVisibilityJSON *result = new TypeVisibilityJSON();
                assert(result != NULL);
                RCHandle<TypeVisibilityJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeVisibilityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeVisibilityJSON *result)
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
            virtual void handle_result(TypeVisibilityJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeVisibility class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeVisibility class");
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
    class TypePrecipitation1HourJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePrecipitation1HourJSON(const TypePrecipitation1HourJSON &);
        TypePrecipitation1HourJSON & operator=(const TypePrecipitation1HourJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePrecipitation1HourJSON(void);
        virtual ~TypePrecipitation1HourJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypePrecipitation1HourComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePrecipitation1HourComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePrecipitation1HourComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePrecipitation1HourComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePrecipitation1HourLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePrecipitation1HourLookup(const char *field_name) const
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

        virtual void extraTypePrecipitation1HourAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePrecipitation1HourSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePrecipitation1HourLookup(key);
            if (old_field == NULL)
              {
                extraTypePrecipitation1HourAppendPair(key, new_component);
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

        static TypePrecipitation1HourJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePrecipitation1HourJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePrecipitation1HourJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitation1HourJSON>, TypePrecipitation1HourJSON *, bool> generator("Type TypePrecipitation1Hour", ignore_extras);
                parse_json_value(text, "Text for TypePrecipitation1HourJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePrecipitation1HourJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePrecipitation1HourJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitation1HourJSON>, TypePrecipitation1HourJSON *, bool> generator("Type TypePrecipitation1Hour", ignore_extras);
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
                TypePrecipitation1HourJSON *result = new TypePrecipitation1HourJSON();
                assert(result != NULL);
                RCHandle<TypePrecipitation1HourJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePrecipitation1HourAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePrecipitation1HourJSON *result)
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
            virtual void handle_result(TypePrecipitation1HourJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypePrecipitation1Hour class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePrecipitation1Hour class");
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
    class TypePrecipitationTodayJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePrecipitationTodayJSON(const TypePrecipitationTodayJSON &);
        TypePrecipitationTodayJSON & operator=(const TypePrecipitationTodayJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePrecipitationTodayJSON(void);
        virtual ~TypePrecipitationTodayJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypePrecipitationTodayComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePrecipitationTodayComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePrecipitationTodayComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePrecipitationTodayComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePrecipitationTodayLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePrecipitationTodayLookup(const char *field_name) const
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

        virtual void extraTypePrecipitationTodayAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePrecipitationTodaySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePrecipitationTodayLookup(key);
            if (old_field == NULL)
              {
                extraTypePrecipitationTodayAppendPair(key, new_component);
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

        static TypePrecipitationTodayJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePrecipitationTodayJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePrecipitationTodayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationTodayJSON>, TypePrecipitationTodayJSON *, bool> generator("Type TypePrecipitationToday", ignore_extras);
                parse_json_value(text, "Text for TypePrecipitationTodayJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePrecipitationTodayJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePrecipitationTodayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationTodayJSON>, TypePrecipitationTodayJSON *, bool> generator("Type TypePrecipitationToday", ignore_extras);
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
                TypePrecipitationTodayJSON *result = new TypePrecipitationTodayJSON();
                assert(result != NULL);
                RCHandle<TypePrecipitationTodayJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePrecipitationTodayAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePrecipitationTodayJSON *result)
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
            virtual void handle_result(TypePrecipitationTodayJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypePrecipitationToday class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePrecipitationToday class");
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
    class TypeWindGustJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_WindJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeWindGustJSON(const TypeWindGustJSON &);
        TypeWindGustJSON & operator=(const TypeWindGustJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeWindGustJSON(void);
        virtual ~TypeWindGustJSON(void);
        bool  hasValue(void) const;
        UnitsValue_WindJSON *  getValue(void);
        const UnitsValue_WindJSON *  getValue(void) const;

        virtual size_t extraTypeWindGustComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeWindGustComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeWindGustComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeWindGustComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeWindGustLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeWindGustLookup(const char *field_name) const
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

        virtual void extraTypeWindGustAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeWindGustSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeWindGustLookup(key);
            if (old_field == NULL)
              {
                extraTypeWindGustAppendPair(key, new_component);
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

        static TypeWindGustJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeWindGustJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeWindGustJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWindGustJSON>, TypeWindGustJSON *, bool> generator("Type TypeWindGust", ignore_extras);
                parse_json_value(text, "Text for TypeWindGustJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeWindGustJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeWindGustJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWindGustJSON>, TypeWindGustJSON *, bool> generator("Type TypeWindGust", ignore_extras);
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
                TypeWindGustJSON *result = new TypeWindGustJSON();
                assert(result != NULL);
                RCHandle<TypeWindGustJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeWindGustAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeWindGustJSON *result)
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
            virtual void handle_result(TypeWindGustJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeWindGust class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeWindGust class");
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
    class TypeBarometricPressureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PressureJSON * storeValue;
        bool flagHasTrend;
        std::string storeTrend;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeBarometricPressureJSON(const TypeBarometricPressureJSON &);
        TypeBarometricPressureJSON & operator=(const TypeBarometricPressureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTrend(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeBarometricPressureJSON(void);
        virtual ~TypeBarometricPressureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PressureJSON *  getValue(void);
        const UnitsValue_PressureJSON *  getValue(void) const;
        bool  hasTrend(void) const;
        std::string  getTrend(void);
        const std::string  getTrend(void) const;

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
        void setTrend(std::string new_value)
          {
            flagHasTrend = true;
            storeTrend = new_value;
          }
        void unsetTrend(void)
          {
            flagHasTrend = false;
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
            if (flagHasValue)
              {
                handler->start_pair("Value");
                storeValue->write_as_json(handler);
              }
            if (flagHasTrend)
              {
                handler->start_pair("Trend");
                handler->string_value(storeTrend);
              }
          }
        virtual const char *missing_field_error(void) const
          {
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTrend;
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
                if (fieldGeneratorTrend.have_value)
                  {
                    result->setTrend(fieldGeneratorTrend.value);
                    fieldGeneratorTrend.have_value = false;
                  }
              }
            virtual void handle_result(TypeBarometricPressureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'T':
                        if (strcmp(&(field_name[1]), "rend") == 0)
                            return &fieldGeneratorTrend;
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
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeBarometricPressure class", ignore_extras), fieldGeneratorTrend("field \"Trend\" of the TypeBarometricPressure class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeBarometricPressure class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorTrend.reset();
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

  private:
    bool flagHasAttribution;
    AttributionJSON * storeAttribution;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    bool flagHasAlerts;
    std::vector< AlertJSON * > storeAlerts;
    bool flagHasRequestedAttribute;
    std::string storeRequestedAttribute;
    bool flagHasIsYesNoQuery;
    bool storeIsYesNoQuery;
    bool flagHasWeatherMapRequested;
    bool storeWeatherMapRequested;
    bool flagHasAlongTheRoute;
    bool storeAlongTheRoute;
    bool flagHasObservationDateAndTime;
    DateAndOrTimeJSON * storeObservationDateAndTime;
    bool flagHasConditionsShortPhrase;
    std::string storeConditionsShortPhrase;
    bool flagHasCurrentTemperature;
    TypeCurrentTemperatureJSON * storeCurrentTemperature;
    bool flagHasFeelsLikeTemperature;
    TypeFeelsLikeTemperatureJSON * storeFeelsLikeTemperature;
    bool flagHasHeatIndex;
    TypeHeatIndexJSON * storeHeatIndex;
    bool flagHasWindchill;
    TypeWindchillJSON * storeWindchill;
    bool flagHasDewPoint;
    TypeDewPointJSON * storeDewPoint;
    bool flagHasWeatherIconURL;
    std::string storeWeatherIconURL;
    bool flagHasConditionsImage;
    WeatherImageJSON * storeConditionsImage;
    bool flagHasHumidityPct;
    uint8_t storeHumidityPct;
    bool flagHasVisibility;
    TypeVisibilityJSON * storeVisibility;
    bool flagHasPrecipitation1Hour;
    TypePrecipitation1HourJSON * storePrecipitation1Hour;
    bool flagHasPrecipitationToday;
    TypePrecipitationTodayJSON * storePrecipitationToday;
    bool flagHasWind;
    TypeWindJSON * storeWind;
    bool flagHasWindGust;
    TypeWindGustJSON * storeWindGust;
    bool flagHasBarometricPressure;
    TypeBarometricPressureJSON * storeBarometricPressure;
    bool flagHasUVIndex;
    TypeUVIndexJSON * storeUVIndex;
    bool flagHasCloudinessPct;
    uint8_t storeCloudinessPct;
    bool flagHasDailyForecasts;
    std::vector< DailyForecastJSON * > storeDailyForecasts;
    bool flagHasHourlyForecasts;
    std::vector< HourlyForecastJSON * > storeHourlyForecasts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowWeatherCurrentConditionsInformationNuggetJSON(const ShowWeatherCurrentConditionsInformationNuggetJSON &);
    ShowWeatherCurrentConditionsInformationNuggetJSON & operator=(const ShowWeatherCurrentConditionsInformationNuggetJSON &other);

    JSONValue * extraAttributionToJSON(void) const;
    JSONValue * extraLocationToJSON(void) const;
    JSONValue * extraAlertsToJSON(void) const;
    JSONValue * extraRequestedAttributeToJSON(void) const;
    JSONValue * extraIsYesNoQueryToJSON(void) const;
    JSONValue * extraWeatherMapRequestedToJSON(void) const;
    JSONValue * extraAlongTheRouteToJSON(void) const;
    JSONValue * extraObservationDateAndTimeToJSON(void) const;
    JSONValue * extraConditionsShortPhraseToJSON(void) const;
    JSONValue * extraCurrentTemperatureToJSON(void) const;
    JSONValue * extraFeelsLikeTemperatureToJSON(void) const;
    JSONValue * extraHeatIndexToJSON(void) const;
    JSONValue * extraWindchillToJSON(void) const;
    JSONValue * extraDewPointToJSON(void) const;
    JSONValue * extraWeatherIconURLToJSON(void) const;
    JSONValue * extraConditionsImageToJSON(void) const;
    JSONValue * extraHumidityPctToJSON(void) const;
    JSONValue * extraVisibilityToJSON(void) const;
    JSONValue * extraPrecipitation1HourToJSON(void) const;
    JSONValue * extraPrecipitationTodayToJSON(void) const;
    JSONValue * extraWindToJSON(void) const;
    JSONValue * extraWindGustToJSON(void) const;
    JSONValue * extraBarometricPressureToJSON(void) const;
    JSONValue * extraUVIndexToJSON(void) const;
    JSONValue * extraCloudinessPctToJSON(void) const;
    JSONValue * extraDailyForecastsToJSON(void) const;
    JSONValue * extraHourlyForecastsToJSON(void) const;

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlerts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeatherMapRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlongTheRoute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONObservationDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConditionsShortPhrase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrentTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFeelsLikeTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHeatIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWindchill(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHumidityPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVisibility(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrecipitation1Hour(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrecipitationToday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWindGust(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBarometricPressure(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUVIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCloudinessPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDailyForecasts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHourlyForecasts(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowWeatherCurrentConditionsInformationNuggetJSON(void);
    virtual ~ShowWeatherCurrentConditionsInformationNuggetJSON(void);
    const char * getWeatherNuggetKind(void) const;
    bool  hasAttribution(void) const;
    AttributionJSON *  getAttribution(void);
    const AttributionJSON *  getAttribution(void) const;
    bool  hasLocation(void) const;
    MapLocationJSON *  getLocation(void);
    const MapLocationJSON *  getLocation(void) const;
    bool  hasAlerts(void) const;
    size_t  countOfAlerts(void) const;
    AlertJSON *  elementOfAlerts(size_t element_num);
    const AlertJSON *  elementOfAlerts(size_t element_num) const;
    std::vector< AlertJSON * >  getAlerts(void);
    const std::vector< AlertJSON * >  getAlerts(void) const;
    bool  hasRequestedAttribute(void) const;
    std::string  getRequestedAttribute(void);
    const std::string  getRequestedAttribute(void) const;
    bool  hasIsYesNoQuery(void) const;
    bool  getIsYesNoQuery(void);
    const bool  getIsYesNoQuery(void) const;
    bool  hasWeatherMapRequested(void) const;
    bool  getWeatherMapRequested(void);
    const bool  getWeatherMapRequested(void) const;
    bool  hasAlongTheRoute(void) const;
    bool  getAlongTheRoute(void);
    const bool  getAlongTheRoute(void) const;
    bool  hasObservationDateAndTime(void) const;
    DateAndOrTimeJSON *  getObservationDateAndTime(void);
    const DateAndOrTimeJSON *  getObservationDateAndTime(void) const;
    bool  hasConditionsShortPhrase(void) const;
    std::string  getConditionsShortPhrase(void);
    const std::string  getConditionsShortPhrase(void) const;
    bool  hasCurrentTemperature(void) const;
    TypeCurrentTemperatureJSON *  getCurrentTemperature(void);
    const TypeCurrentTemperatureJSON *  getCurrentTemperature(void) const;
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
    bool  hasWeatherIconURL(void) const;
    std::string  getWeatherIconURL(void);
    const std::string  getWeatherIconURL(void) const;
    bool  hasConditionsImage(void) const;
    WeatherImageJSON *  getConditionsImage(void);
    const WeatherImageJSON *  getConditionsImage(void) const;
    bool  hasHumidityPct(void) const;
    uint8_t  getHumidityPct(void);
    const uint8_t  getHumidityPct(void) const;
    bool  hasVisibility(void) const;
    TypeVisibilityJSON *  getVisibility(void);
    const TypeVisibilityJSON *  getVisibility(void) const;
    bool  hasPrecipitation1Hour(void) const;
    TypePrecipitation1HourJSON *  getPrecipitation1Hour(void);
    const TypePrecipitation1HourJSON *  getPrecipitation1Hour(void) const;
    bool  hasPrecipitationToday(void) const;
    TypePrecipitationTodayJSON *  getPrecipitationToday(void);
    const TypePrecipitationTodayJSON *  getPrecipitationToday(void) const;
    bool  hasWind(void) const;
    TypeWindJSON *  getWind(void);
    const TypeWindJSON *  getWind(void) const;
    bool  hasWindGust(void) const;
    TypeWindGustJSON *  getWindGust(void);
    const TypeWindGustJSON *  getWindGust(void) const;
    bool  hasBarometricPressure(void) const;
    TypeBarometricPressureJSON *  getBarometricPressure(void);
    const TypeBarometricPressureJSON *  getBarometricPressure(void) const;
    bool  hasUVIndex(void) const;
    TypeUVIndexJSON *  getUVIndex(void);
    const TypeUVIndexJSON *  getUVIndex(void) const;
    bool  hasCloudinessPct(void) const;
    uint8_t  getCloudinessPct(void);
    const uint8_t  getCloudinessPct(void) const;
    bool  hasDailyForecasts(void) const;
    size_t  countOfDailyForecasts(void) const;
    DailyForecastJSON *  elementOfDailyForecasts(size_t element_num);
    const DailyForecastJSON *  elementOfDailyForecasts(size_t element_num) const;
    std::vector< DailyForecastJSON * >  getDailyForecasts(void);
    const std::vector< DailyForecastJSON * >  getDailyForecasts(void) const;
    bool  hasHourlyForecasts(void) const;
    size_t  countOfHourlyForecasts(void) const;
    HourlyForecastJSON *  elementOfHourlyForecasts(size_t element_num);
    const HourlyForecastJSON *  elementOfHourlyForecasts(size_t element_num) const;
    std::vector< HourlyForecastJSON * >  getHourlyForecasts(void);
    const std::vector< HourlyForecastJSON * >  getHourlyForecasts(void) const;

    virtual size_t extraShowWeatherCurrentConditionsInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowWeatherCurrentConditionsInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowWeatherCurrentConditionsInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowWeatherCurrentConditionsInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowWeatherCurrentConditionsInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowWeatherCurrentConditionsInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraWeatherInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAttribution)
            ++result;
        if (flagHasLocation)
            ++result;
        if (flagHasAlerts)
            ++result;
        if (flagHasRequestedAttribute)
            ++result;
        if (flagHasIsYesNoQuery)
            ++result;
        if (flagHasWeatherMapRequested)
            ++result;
        if (flagHasAlongTheRoute)
            ++result;
        if (flagHasObservationDateAndTime)
            ++result;
        if (flagHasConditionsShortPhrase)
            ++result;
        if (flagHasCurrentTemperature)
            ++result;
        if (flagHasFeelsLikeTemperature)
            ++result;
        if (flagHasHeatIndex)
            ++result;
        if (flagHasWindchill)
            ++result;
        if (flagHasDewPoint)
            ++result;
        if (flagHasWeatherIconURL)
            ++result;
        if (flagHasConditionsImage)
            ++result;
        if (flagHasHumidityPct)
            ++result;
        if (flagHasVisibility)
            ++result;
        if (flagHasPrecipitation1Hour)
            ++result;
        if (flagHasPrecipitationToday)
            ++result;
        if (flagHasWind)
            ++result;
        if (flagHasWindGust)
            ++result;
        if (flagHasBarometricPressure)
            ++result;
        if (flagHasUVIndex)
            ++result;
        if (flagHasCloudinessPct)
            ++result;
        if (flagHasDailyForecasts)
            ++result;
        if (flagHasHourlyForecasts)
            ++result;
        result += extraShowWeatherCurrentConditionsInformationNuggetComponentCount();
        return result;
      }
    const char *extraWeatherInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return "Attribution";
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return "Location";
            --remainder;
          }
        if (flagHasAlerts)
          {
            if (remainder == 0)
                return "Alerts";
            --remainder;
          }
        if (flagHasRequestedAttribute)
          {
            if (remainder == 0)
                return "RequestedAttribute";
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return "IsYesNoQuery";
            --remainder;
          }
        if (flagHasWeatherMapRequested)
          {
            if (remainder == 0)
                return "WeatherMapRequested";
            --remainder;
          }
        if (flagHasAlongTheRoute)
          {
            if (remainder == 0)
                return "AlongTheRoute";
            --remainder;
          }
        if (flagHasObservationDateAndTime)
          {
            if (remainder == 0)
                return "ObservationDateAndTime";
            --remainder;
          }
        if (flagHasConditionsShortPhrase)
          {
            if (remainder == 0)
                return "ConditionsShortPhrase";
            --remainder;
          }
        if (flagHasCurrentTemperature)
          {
            if (remainder == 0)
                return "CurrentTemperature";
            --remainder;
          }
        if (flagHasFeelsLikeTemperature)
          {
            if (remainder == 0)
                return "FeelsLikeTemperature";
            --remainder;
          }
        if (flagHasHeatIndex)
          {
            if (remainder == 0)
                return "HeatIndex";
            --remainder;
          }
        if (flagHasWindchill)
          {
            if (remainder == 0)
                return "Windchill";
            --remainder;
          }
        if (flagHasDewPoint)
          {
            if (remainder == 0)
                return "DewPoint";
            --remainder;
          }
        if (flagHasWeatherIconURL)
          {
            if (remainder == 0)
                return "WeatherIconURL";
            --remainder;
          }
        if (flagHasConditionsImage)
          {
            if (remainder == 0)
                return "ConditionsImage";
            --remainder;
          }
        if (flagHasHumidityPct)
          {
            if (remainder == 0)
                return "HumidityPct";
            --remainder;
          }
        if (flagHasVisibility)
          {
            if (remainder == 0)
                return "Visibility";
            --remainder;
          }
        if (flagHasPrecipitation1Hour)
          {
            if (remainder == 0)
                return "Precipitation1Hour";
            --remainder;
          }
        if (flagHasPrecipitationToday)
          {
            if (remainder == 0)
                return "PrecipitationToday";
            --remainder;
          }
        if (flagHasWind)
          {
            if (remainder == 0)
                return "Wind";
            --remainder;
          }
        if (flagHasWindGust)
          {
            if (remainder == 0)
                return "WindGust";
            --remainder;
          }
        if (flagHasBarometricPressure)
          {
            if (remainder == 0)
                return "BarometricPressure";
            --remainder;
          }
        if (flagHasUVIndex)
          {
            if (remainder == 0)
                return "UVIndex";
            --remainder;
          }
        if (flagHasCloudinessPct)
          {
            if (remainder == 0)
                return "CloudinessPct";
            --remainder;
          }
        if (flagHasDailyForecasts)
          {
            if (remainder == 0)
                return "DailyForecasts";
            --remainder;
          }
        if (flagHasHourlyForecasts)
          {
            if (remainder == 0)
                return "HourlyForecasts";
            --remainder;
          }
        return extraShowWeatherCurrentConditionsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraWeatherInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        if (flagHasAlerts)
          {
            if (remainder == 0)
                return extraAlertsToJSON();
            --remainder;
          }
        if (flagHasRequestedAttribute)
          {
            if (remainder == 0)
                return extraRequestedAttributeToJSON();
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return extraIsYesNoQueryToJSON();
            --remainder;
          }
        if (flagHasWeatherMapRequested)
          {
            if (remainder == 0)
                return extraWeatherMapRequestedToJSON();
            --remainder;
          }
        if (flagHasAlongTheRoute)
          {
            if (remainder == 0)
                return extraAlongTheRouteToJSON();
            --remainder;
          }
        if (flagHasObservationDateAndTime)
          {
            if (remainder == 0)
                return extraObservationDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasConditionsShortPhrase)
          {
            if (remainder == 0)
                return extraConditionsShortPhraseToJSON();
            --remainder;
          }
        if (flagHasCurrentTemperature)
          {
            if (remainder == 0)
                return extraCurrentTemperatureToJSON();
            --remainder;
          }
        if (flagHasFeelsLikeTemperature)
          {
            if (remainder == 0)
                return extraFeelsLikeTemperatureToJSON();
            --remainder;
          }
        if (flagHasHeatIndex)
          {
            if (remainder == 0)
                return extraHeatIndexToJSON();
            --remainder;
          }
        if (flagHasWindchill)
          {
            if (remainder == 0)
                return extraWindchillToJSON();
            --remainder;
          }
        if (flagHasDewPoint)
          {
            if (remainder == 0)
                return extraDewPointToJSON();
            --remainder;
          }
        if (flagHasWeatherIconURL)
          {
            if (remainder == 0)
                return extraWeatherIconURLToJSON();
            --remainder;
          }
        if (flagHasConditionsImage)
          {
            if (remainder == 0)
                return extraConditionsImageToJSON();
            --remainder;
          }
        if (flagHasHumidityPct)
          {
            if (remainder == 0)
                return extraHumidityPctToJSON();
            --remainder;
          }
        if (flagHasVisibility)
          {
            if (remainder == 0)
                return extraVisibilityToJSON();
            --remainder;
          }
        if (flagHasPrecipitation1Hour)
          {
            if (remainder == 0)
                return extraPrecipitation1HourToJSON();
            --remainder;
          }
        if (flagHasPrecipitationToday)
          {
            if (remainder == 0)
                return extraPrecipitationTodayToJSON();
            --remainder;
          }
        if (flagHasWind)
          {
            if (remainder == 0)
                return extraWindToJSON();
            --remainder;
          }
        if (flagHasWindGust)
          {
            if (remainder == 0)
                return extraWindGustToJSON();
            --remainder;
          }
        if (flagHasBarometricPressure)
          {
            if (remainder == 0)
                return extraBarometricPressureToJSON();
            --remainder;
          }
        if (flagHasUVIndex)
          {
            if (remainder == 0)
                return extraUVIndexToJSON();
            --remainder;
          }
        if (flagHasCloudinessPct)
          {
            if (remainder == 0)
                return extraCloudinessPctToJSON();
            --remainder;
          }
        if (flagHasDailyForecasts)
          {
            if (remainder == 0)
                return extraDailyForecastsToJSON();
            --remainder;
          }
        if (flagHasHourlyForecasts)
          {
            if (remainder == 0)
                return extraHourlyForecastsToJSON();
            --remainder;
          }
        return extraShowWeatherCurrentConditionsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraWeatherInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        if (flagHasAlerts)
          {
            if (remainder == 0)
                return extraAlertsToJSON();
            --remainder;
          }
        if (flagHasRequestedAttribute)
          {
            if (remainder == 0)
                return extraRequestedAttributeToJSON();
            --remainder;
          }
        if (flagHasIsYesNoQuery)
          {
            if (remainder == 0)
                return extraIsYesNoQueryToJSON();
            --remainder;
          }
        if (flagHasWeatherMapRequested)
          {
            if (remainder == 0)
                return extraWeatherMapRequestedToJSON();
            --remainder;
          }
        if (flagHasAlongTheRoute)
          {
            if (remainder == 0)
                return extraAlongTheRouteToJSON();
            --remainder;
          }
        if (flagHasObservationDateAndTime)
          {
            if (remainder == 0)
                return extraObservationDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasConditionsShortPhrase)
          {
            if (remainder == 0)
                return extraConditionsShortPhraseToJSON();
            --remainder;
          }
        if (flagHasCurrentTemperature)
          {
            if (remainder == 0)
                return extraCurrentTemperatureToJSON();
            --remainder;
          }
        if (flagHasFeelsLikeTemperature)
          {
            if (remainder == 0)
                return extraFeelsLikeTemperatureToJSON();
            --remainder;
          }
        if (flagHasHeatIndex)
          {
            if (remainder == 0)
                return extraHeatIndexToJSON();
            --remainder;
          }
        if (flagHasWindchill)
          {
            if (remainder == 0)
                return extraWindchillToJSON();
            --remainder;
          }
        if (flagHasDewPoint)
          {
            if (remainder == 0)
                return extraDewPointToJSON();
            --remainder;
          }
        if (flagHasWeatherIconURL)
          {
            if (remainder == 0)
                return extraWeatherIconURLToJSON();
            --remainder;
          }
        if (flagHasConditionsImage)
          {
            if (remainder == 0)
                return extraConditionsImageToJSON();
            --remainder;
          }
        if (flagHasHumidityPct)
          {
            if (remainder == 0)
                return extraHumidityPctToJSON();
            --remainder;
          }
        if (flagHasVisibility)
          {
            if (remainder == 0)
                return extraVisibilityToJSON();
            --remainder;
          }
        if (flagHasPrecipitation1Hour)
          {
            if (remainder == 0)
                return extraPrecipitation1HourToJSON();
            --remainder;
          }
        if (flagHasPrecipitationToday)
          {
            if (remainder == 0)
                return extraPrecipitationTodayToJSON();
            --remainder;
          }
        if (flagHasWind)
          {
            if (remainder == 0)
                return extraWindToJSON();
            --remainder;
          }
        if (flagHasWindGust)
          {
            if (remainder == 0)
                return extraWindGustToJSON();
            --remainder;
          }
        if (flagHasBarometricPressure)
          {
            if (remainder == 0)
                return extraBarometricPressureToJSON();
            --remainder;
          }
        if (flagHasUVIndex)
          {
            if (remainder == 0)
                return extraUVIndexToJSON();
            --remainder;
          }
        if (flagHasCloudinessPct)
          {
            if (remainder == 0)
                return extraCloudinessPctToJSON();
            --remainder;
          }
        if (flagHasDailyForecasts)
          {
            if (remainder == 0)
                return extraDailyForecastsToJSON();
            --remainder;
          }
        if (flagHasHourlyForecasts)
          {
            if (remainder == 0)
                return extraHourlyForecastsToJSON();
            --remainder;
          }
        return extraShowWeatherCurrentConditionsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraWeatherInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[3]), "rts") == 0)
                                    return (flagHasAlerts ? extraAlertsToJSON() : NULL);
                                break;
                            case 'o':
                                if (strcmp(&(field_name[3]), "ngTheRoute") == 0)
                                    return (flagHasAlongTheRoute ? extraAlongTheRouteToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "tribution") == 0)
                            return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "arometricPressure") == 0)
                    return (flagHasBarometricPressure ? extraBarometricPressureToJSON() : NULL);
                break;
            case 'C':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strcmp(&(field_name[2]), "oudinessPct") == 0)
                            return (flagHasCloudinessPct ? extraCloudinessPctToJSON() : NULL);
                        break;
                    case 'o':
                        if (strncmp(&(field_name[2]), "nditions", 8) == 0)
                          {
                            switch ((unsigned char)(field_name[10]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[11]), "mage") == 0)
                                        return (flagHasConditionsImage ? extraConditionsImageToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[11]), "hortPhrase") == 0)
                                        return (flagHasConditionsShortPhrase ? extraConditionsShortPhraseToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "rrentTemperature") == 0)
                            return (flagHasCurrentTemperature ? extraCurrentTemperatureToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ilyForecasts") == 0)
                            return (flagHasDailyForecasts ? extraDailyForecastsToJSON() : NULL);
                        break;
                    case 'e':
                        if (strcmp(&(field_name[2]), "wPoint") == 0)
                            return (flagHasDewPoint ? extraDewPointToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "eelsLikeTemperature") == 0)
                    return (flagHasFeelsLikeTemperature ? extraFeelsLikeTemperatureToJSON() : NULL);
                break;
            case 'H':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "atIndex") == 0)
                            return (flagHasHeatIndex ? extraHeatIndexToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "urlyForecasts") == 0)
                            return (flagHasHourlyForecasts ? extraHourlyForecastsToJSON() : NULL);
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "midityPct") == 0)
                            return (flagHasHumidityPct ? extraHumidityPctToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "sYesNoQuery") == 0)
                    return (flagHasIsYesNoQuery ? extraIsYesNoQueryToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "bservationDateAndTime") == 0)
                    return (flagHasObservationDateAndTime ? extraObservationDateAndTimeToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "recipitation", 12) == 0)
                  {
                    switch ((unsigned char)(field_name[13]))
                      {
                        case '1':
                            if (strcmp(&(field_name[14]), "Hour") == 0)
                                return (flagHasPrecipitation1Hour ? extraPrecipitation1HourToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[14]), "oday") == 0)
                                return (flagHasPrecipitationToday ? extraPrecipitationTodayToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedAttribute") == 0)
                    return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "VIndex") == 0)
                    return (flagHasUVIndex ? extraUVIndexToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "isibility") == 0)
                    return (flagHasVisibility ? extraVisibilityToJSON() : NULL);
                break;
            case 'W':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strncmp(&(field_name[2]), "ather", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[8]), "conURL") == 0)
                                        return (flagHasWeatherIconURL ? extraWeatherIconURLToJSON() : NULL);
                                    break;
                                case 'M':
                                    if (strcmp(&(field_name[8]), "apRequested") == 0)
                                        return (flagHasWeatherMapRequested ? extraWeatherMapRequestedToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'i':
                        if (strncmp(&(field_name[2]), "nd", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[4]))
                              {
                                case 0:
                                    return (flagHasWind ? extraWindToJSON() : NULL);
                                case 'G':
                                    if (strcmp(&(field_name[5]), "ust") == 0)
                                        return (flagHasWindGust ? extraWindGustToJSON() : NULL);
                                    break;
                                case 'c':
                                    if (strcmp(&(field_name[5]), "hill") == 0)
                                        return (flagHasWindchill ? extraWindchillToJSON() : NULL);
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
        return extraShowWeatherCurrentConditionsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraWeatherInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[3]), "rts") == 0)
                                    return (flagHasAlerts ? extraAlertsToJSON() : NULL);
                                break;
                            case 'o':
                                if (strcmp(&(field_name[3]), "ngTheRoute") == 0)
                                    return (flagHasAlongTheRoute ? extraAlongTheRouteToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "tribution") == 0)
                            return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(field_name[1]), "arometricPressure") == 0)
                    return (flagHasBarometricPressure ? extraBarometricPressureToJSON() : NULL);
                break;
            case 'C':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strcmp(&(field_name[2]), "oudinessPct") == 0)
                            return (flagHasCloudinessPct ? extraCloudinessPctToJSON() : NULL);
                        break;
                    case 'o':
                        if (strncmp(&(field_name[2]), "nditions", 8) == 0)
                          {
                            switch ((unsigned char)(field_name[10]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[11]), "mage") == 0)
                                        return (flagHasConditionsImage ? extraConditionsImageToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[11]), "hortPhrase") == 0)
                                        return (flagHasConditionsShortPhrase ? extraConditionsShortPhraseToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "rrentTemperature") == 0)
                            return (flagHasCurrentTemperature ? extraCurrentTemperatureToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ilyForecasts") == 0)
                            return (flagHasDailyForecasts ? extraDailyForecastsToJSON() : NULL);
                        break;
                    case 'e':
                        if (strcmp(&(field_name[2]), "wPoint") == 0)
                            return (flagHasDewPoint ? extraDewPointToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "eelsLikeTemperature") == 0)
                    return (flagHasFeelsLikeTemperature ? extraFeelsLikeTemperatureToJSON() : NULL);
                break;
            case 'H':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "atIndex") == 0)
                            return (flagHasHeatIndex ? extraHeatIndexToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "urlyForecasts") == 0)
                            return (flagHasHourlyForecasts ? extraHourlyForecastsToJSON() : NULL);
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "midityPct") == 0)
                            return (flagHasHumidityPct ? extraHumidityPctToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "sYesNoQuery") == 0)
                    return (flagHasIsYesNoQuery ? extraIsYesNoQueryToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "bservationDateAndTime") == 0)
                    return (flagHasObservationDateAndTime ? extraObservationDateAndTimeToJSON() : NULL);
                break;
            case 'P':
                if (strncmp(&(field_name[1]), "recipitation", 12) == 0)
                  {
                    switch ((unsigned char)(field_name[13]))
                      {
                        case '1':
                            if (strcmp(&(field_name[14]), "Hour") == 0)
                                return (flagHasPrecipitation1Hour ? extraPrecipitation1HourToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[14]), "oday") == 0)
                                return (flagHasPrecipitationToday ? extraPrecipitationTodayToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedAttribute") == 0)
                    return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "VIndex") == 0)
                    return (flagHasUVIndex ? extraUVIndexToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "isibility") == 0)
                    return (flagHasVisibility ? extraVisibilityToJSON() : NULL);
                break;
            case 'W':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strncmp(&(field_name[2]), "ather", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[8]), "conURL") == 0)
                                        return (flagHasWeatherIconURL ? extraWeatherIconURLToJSON() : NULL);
                                    break;
                                case 'M':
                                    if (strcmp(&(field_name[8]), "apRequested") == 0)
                                        return (flagHasWeatherMapRequested ? extraWeatherMapRequestedToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'i':
                        if (strncmp(&(field_name[2]), "nd", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[4]))
                              {
                                case 0:
                                    return (flagHasWind ? extraWindToJSON() : NULL);
                                case 'G':
                                    if (strcmp(&(field_name[5]), "ust") == 0)
                                        return (flagHasWindGust ? extraWindGustToJSON() : NULL);
                                    break;
                                case 'c':
                                    if (strcmp(&(field_name[5]), "hill") == 0)
                                        return (flagHasWindchill ? extraWindchillToJSON() : NULL);
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
        return extraShowWeatherCurrentConditionsInformationNuggetLookup(field_name);
      }

    void setAttribution(AttributionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = true;
        storeAttribution = new_value;
      }
    void unsetAttribution(void)
      {
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = false;
      }
    void setLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = false;
      }
    void initAlerts(void)
      {
        if (flagHasAlerts)
          {
            for (size_t num4 = 0; num4 < storeAlerts.size(); ++num4)
              {
                storeAlerts[num4]->remove_reference();
              }
          }
        flagHasAlerts = true;
        storeAlerts.clear();
      }
    void appendAlerts(AlertJSON * to_append)
      {
        if (!flagHasAlerts)
          {
            flagHasAlerts = true;
            storeAlerts.clear();
          }
        assert(flagHasAlerts);
        to_append->add_reference();
        storeAlerts.push_back(to_append);
      }
    void unsetAlerts(void)
      {
        if (flagHasAlerts)
          {
            for (size_t num5 = 0; num5 < storeAlerts.size(); ++num5)
              {
                storeAlerts[num5]->remove_reference();
              }
          }
        flagHasAlerts = false;
        storeAlerts.clear();
      }
    void setRequestedAttribute(std::string new_value)
      {
        flagHasRequestedAttribute = true;
        storeRequestedAttribute = new_value;
      }
    void unsetRequestedAttribute(void)
      {
        flagHasRequestedAttribute = false;
      }
    void setIsYesNoQuery(bool new_value)
      {
        flagHasIsYesNoQuery = true;
        storeIsYesNoQuery = new_value;
      }
    void unsetIsYesNoQuery(void)
      {
        flagHasIsYesNoQuery = false;
      }
    void setWeatherMapRequested(bool new_value)
      {
        flagHasWeatherMapRequested = true;
        storeWeatherMapRequested = new_value;
      }
    void unsetWeatherMapRequested(void)
      {
        flagHasWeatherMapRequested = false;
      }
    void setAlongTheRoute(bool new_value)
      {
        flagHasAlongTheRoute = true;
        storeAlongTheRoute = new_value;
      }
    void unsetAlongTheRoute(void)
      {
        flagHasAlongTheRoute = false;
      }
    void setObservationDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasObservationDateAndTime)
          {
            storeObservationDateAndTime->remove_reference();
          }
        flagHasObservationDateAndTime = true;
        storeObservationDateAndTime = new_value;
      }
    void unsetObservationDateAndTime(void)
      {
        if (flagHasObservationDateAndTime)
          {
            storeObservationDateAndTime->remove_reference();
          }
        flagHasObservationDateAndTime = false;
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
    void setCurrentTemperature(TypeCurrentTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCurrentTemperature)
          {
            storeCurrentTemperature->remove_reference();
          }
        flagHasCurrentTemperature = true;
        storeCurrentTemperature = new_value;
      }
    void unsetCurrentTemperature(void)
      {
        if (flagHasCurrentTemperature)
          {
            storeCurrentTemperature->remove_reference();
          }
        flagHasCurrentTemperature = false;
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
    void setHumidityPct(uint8_t new_value)
      {
        flagHasHumidityPct = true;
        if (new_value < 0)
            throw("The value for field HumidityPct of ShowWeatherCurrentConditionsInformationNuggetJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field HumidityPct of ShowWeatherCurrentConditionsInformationNuggetJSON is greater than the upper bound (100) for that field.");
        storeHumidityPct = new_value;
      }
    void unsetHumidityPct(void)
      {
        flagHasHumidityPct = false;
      }
    void setVisibility(TypeVisibilityJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasVisibility)
          {
            storeVisibility->remove_reference();
          }
        flagHasVisibility = true;
        storeVisibility = new_value;
      }
    void unsetVisibility(void)
      {
        if (flagHasVisibility)
          {
            storeVisibility->remove_reference();
          }
        flagHasVisibility = false;
      }
    void setPrecipitation1Hour(TypePrecipitation1HourJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrecipitation1Hour)
          {
            storePrecipitation1Hour->remove_reference();
          }
        flagHasPrecipitation1Hour = true;
        storePrecipitation1Hour = new_value;
      }
    void unsetPrecipitation1Hour(void)
      {
        if (flagHasPrecipitation1Hour)
          {
            storePrecipitation1Hour->remove_reference();
          }
        flagHasPrecipitation1Hour = false;
      }
    void setPrecipitationToday(TypePrecipitationTodayJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrecipitationToday)
          {
            storePrecipitationToday->remove_reference();
          }
        flagHasPrecipitationToday = true;
        storePrecipitationToday = new_value;
      }
    void unsetPrecipitationToday(void)
      {
        if (flagHasPrecipitationToday)
          {
            storePrecipitationToday->remove_reference();
          }
        flagHasPrecipitationToday = false;
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
    void setWindGust(TypeWindGustJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasWindGust)
          {
            storeWindGust->remove_reference();
          }
        flagHasWindGust = true;
        storeWindGust = new_value;
      }
    void unsetWindGust(void)
      {
        if (flagHasWindGust)
          {
            storeWindGust->remove_reference();
          }
        flagHasWindGust = false;
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
    void setCloudinessPct(uint8_t new_value)
      {
        flagHasCloudinessPct = true;
        if (new_value < 0)
            throw("The value for field CloudinessPct of ShowWeatherCurrentConditionsInformationNuggetJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field CloudinessPct of ShowWeatherCurrentConditionsInformationNuggetJSON is greater than the upper bound (100) for that field.");
        storeCloudinessPct = new_value;
      }
    void unsetCloudinessPct(void)
      {
        flagHasCloudinessPct = false;
      }
    void initDailyForecasts(void)
      {
        if (flagHasDailyForecasts)
          {
            for (size_t num6 = 0; num6 < storeDailyForecasts.size(); ++num6)
              {
                storeDailyForecasts[num6]->remove_reference();
              }
          }
        flagHasDailyForecasts = true;
        storeDailyForecasts.clear();
      }
    void appendDailyForecasts(DailyForecastJSON * to_append)
      {
        if (!flagHasDailyForecasts)
          {
            flagHasDailyForecasts = true;
            storeDailyForecasts.clear();
          }
        assert(flagHasDailyForecasts);
        to_append->add_reference();
        storeDailyForecasts.push_back(to_append);
      }
    void unsetDailyForecasts(void)
      {
        if (flagHasDailyForecasts)
          {
            for (size_t num7 = 0; num7 < storeDailyForecasts.size(); ++num7)
              {
                storeDailyForecasts[num7]->remove_reference();
              }
          }
        flagHasDailyForecasts = false;
        storeDailyForecasts.clear();
      }
    void initHourlyForecasts(void)
      {
        if (flagHasHourlyForecasts)
          {
            for (size_t num8 = 0; num8 < storeHourlyForecasts.size(); ++num8)
              {
                storeHourlyForecasts[num8]->remove_reference();
              }
          }
        flagHasHourlyForecasts = true;
        storeHourlyForecasts.clear();
      }
    void appendHourlyForecasts(HourlyForecastJSON * to_append)
      {
        if (!flagHasHourlyForecasts)
          {
            flagHasHourlyForecasts = true;
            storeHourlyForecasts.clear();
          }
        assert(flagHasHourlyForecasts);
        to_append->add_reference();
        storeHourlyForecasts.push_back(to_append);
      }
    void unsetHourlyForecasts(void)
      {
        if (flagHasHourlyForecasts)
          {
            for (size_t num9 = 0; num9 < storeHourlyForecasts.size(); ++num9)
              {
                storeHourlyForecasts[num9]->remove_reference();
              }
          }
        flagHasHourlyForecasts = false;
        storeHourlyForecasts.clear();
      }

    virtual void extraShowWeatherCurrentConditionsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowWeatherCurrentConditionsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowWeatherCurrentConditionsInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowWeatherCurrentConditionsInformationNuggetAppendPair(key, new_component);
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
    void extraWeatherInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        switch ((unsigned char)(key[2]))
                          {
                            case 'e':
                                if (strcmp(&(key[3]), "rts") == 0)
                                    {
                                    fromJSONAlerts(new_component, false);
                                    return;
                                    }
                                break;
                            case 'o':
                                if (strcmp(&(key[3]), "ngTheRoute") == 0)
                                    {
                                    fromJSONAlongTheRoute(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "tribution") == 0)
                            {
                            fromJSONAttribution(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(key[1]), "arometricPressure") == 0)
                    {
                    fromJSONBarometricPressure(new_component, false);
                    return;
                    }
                break;
            case 'C':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strcmp(&(key[2]), "oudinessPct") == 0)
                            {
                            fromJSONCloudinessPct(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strncmp(&(key[2]), "nditions", 8) == 0)
                          {
                            switch ((unsigned char)(key[10]))
                              {
                                case 'I':
                                    if (strcmp(&(key[11]), "mage") == 0)
                                        {
                                        fromJSONConditionsImage(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[11]), "hortPhrase") == 0)
                                        {
                                        fromJSONConditionsShortPhrase(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "rrentTemperature") == 0)
                            {
                            fromJSONCurrentTemperature(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ilyForecasts") == 0)
                            {
                            fromJSONDailyForecasts(new_component, false);
                            return;
                            }
                        break;
                    case 'e':
                        if (strcmp(&(key[2]), "wPoint") == 0)
                            {
                            fromJSONDewPoint(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strcmp(&(key[1]), "eelsLikeTemperature") == 0)
                    {
                    fromJSONFeelsLikeTemperature(new_component, false);
                    return;
                    }
                break;
            case 'H':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "atIndex") == 0)
                            {
                            fromJSONHeatIndex(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "urlyForecasts") == 0)
                            {
                            fromJSONHourlyForecasts(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "midityPct") == 0)
                            {
                            fromJSONHumidityPct(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "sYesNoQuery") == 0)
                    {
                    fromJSONIsYesNoQuery(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "bservationDateAndTime") == 0)
                    {
                    fromJSONObservationDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "recipitation", 12) == 0)
                  {
                    switch ((unsigned char)(key[13]))
                      {
                        case '1':
                            if (strcmp(&(key[14]), "Hour") == 0)
                                {
                                fromJSONPrecipitation1Hour(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[14]), "oday") == 0)
                                {
                                fromJSONPrecipitationToday(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedAttribute") == 0)
                    {
                    fromJSONRequestedAttribute(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "VIndex") == 0)
                    {
                    fromJSONUVIndex(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "isibility") == 0)
                    {
                    fromJSONVisibility(new_component, false);
                    return;
                    }
                break;
            case 'W':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strncmp(&(key[2]), "ather", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 'I':
                                    if (strcmp(&(key[8]), "conURL") == 0)
                                        {
                                        fromJSONWeatherIconURL(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'M':
                                    if (strcmp(&(key[8]), "apRequested") == 0)
                                        {
                                        fromJSONWeatherMapRequested(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'i':
                        if (strncmp(&(key[2]), "nd", 2) == 0)
                          {
                            switch ((unsigned char)(key[4]))
                              {
                                case 0:
                                    {
                                    fromJSONWind(new_component, false);
                                    return;
                                    }
                                case 'G':
                                    if (strcmp(&(key[5]), "ust") == 0)
                                        {
                                        fromJSONWindGust(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'c':
                                    if (strcmp(&(key[5]), "hill") == 0)
                                        {
                                        fromJSONWindchill(new_component, false);
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
                break;
            default:
                break;
          }
        extraShowWeatherCurrentConditionsInformationNuggetAppendPair(key, new_component);
      }
    void extraWeatherInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        switch ((unsigned char)(key[2]))
                          {
                            case 'e':
                                if (strcmp(&(key[3]), "rts") == 0)
                                    {
                                    fromJSONAlerts(new_component, false);
                                    return;
                                    }
                                break;
                            case 'o':
                                if (strcmp(&(key[3]), "ngTheRoute") == 0)
                                    {
                                    fromJSONAlongTheRoute(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "tribution") == 0)
                            {
                            fromJSONAttribution(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'B':
                if (strcmp(&(key[1]), "arometricPressure") == 0)
                    {
                    fromJSONBarometricPressure(new_component, false);
                    return;
                    }
                break;
            case 'C':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strcmp(&(key[2]), "oudinessPct") == 0)
                            {
                            fromJSONCloudinessPct(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strncmp(&(key[2]), "nditions", 8) == 0)
                          {
                            switch ((unsigned char)(key[10]))
                              {
                                case 'I':
                                    if (strcmp(&(key[11]), "mage") == 0)
                                        {
                                        fromJSONConditionsImage(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strcmp(&(key[11]), "hortPhrase") == 0)
                                        {
                                        fromJSONConditionsShortPhrase(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "rrentTemperature") == 0)
                            {
                            fromJSONCurrentTemperature(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ilyForecasts") == 0)
                            {
                            fromJSONDailyForecasts(new_component, false);
                            return;
                            }
                        break;
                    case 'e':
                        if (strcmp(&(key[2]), "wPoint") == 0)
                            {
                            fromJSONDewPoint(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strcmp(&(key[1]), "eelsLikeTemperature") == 0)
                    {
                    fromJSONFeelsLikeTemperature(new_component, false);
                    return;
                    }
                break;
            case 'H':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "atIndex") == 0)
                            {
                            fromJSONHeatIndex(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "urlyForecasts") == 0)
                            {
                            fromJSONHourlyForecasts(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "midityPct") == 0)
                            {
                            fromJSONHumidityPct(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "sYesNoQuery") == 0)
                    {
                    fromJSONIsYesNoQuery(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "bservationDateAndTime") == 0)
                    {
                    fromJSONObservationDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strncmp(&(key[1]), "recipitation", 12) == 0)
                  {
                    switch ((unsigned char)(key[13]))
                      {
                        case '1':
                            if (strcmp(&(key[14]), "Hour") == 0)
                                {
                                fromJSONPrecipitation1Hour(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[14]), "oday") == 0)
                                {
                                fromJSONPrecipitationToday(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedAttribute") == 0)
                    {
                    fromJSONRequestedAttribute(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "VIndex") == 0)
                    {
                    fromJSONUVIndex(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "isibility") == 0)
                    {
                    fromJSONVisibility(new_component, false);
                    return;
                    }
                break;
            case 'W':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strncmp(&(key[2]), "ather", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 'I':
                                    if (strcmp(&(key[8]), "conURL") == 0)
                                        {
                                        fromJSONWeatherIconURL(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'M':
                                    if (strcmp(&(key[8]), "apRequested") == 0)
                                        {
                                        fromJSONWeatherMapRequested(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'i':
                        if (strncmp(&(key[2]), "nd", 2) == 0)
                          {
                            switch ((unsigned char)(key[4]))
                              {
                                case 0:
                                    {
                                    fromJSONWind(new_component, false);
                                    return;
                                    }
                                case 'G':
                                    if (strcmp(&(key[5]), "ust") == 0)
                                        {
                                        fromJSONWindGust(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'c':
                                    if (strcmp(&(key[5]), "hill") == 0)
                                        {
                                        fromJSONWindchill(new_component, false);
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
                break;
            default:
                break;
          }
        extraShowWeatherCurrentConditionsInformationNuggetSetField(key, new_component);
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
        WeatherInformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasAttribution)
          {
            handler->start_pair("Attribution");
            storeAttribution->write_as_json(handler);
          }
        assert(flagHasLocation);
        handler->start_pair("Location");
        storeLocation->write_as_json(handler);
        assert(flagHasAlerts);
        handler->start_pair("Alerts");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeAlerts.size(); ++num1)
          {
            storeAlerts[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasRequestedAttribute);
        handler->start_pair("RequestedAttribute");
        handler->string_value(storeRequestedAttribute);
        assert(flagHasIsYesNoQuery);
        handler->start_pair("IsYesNoQuery");
        handler->boolean_value(storeIsYesNoQuery);
        if (flagHasWeatherMapRequested)
          {
            handler->start_pair("WeatherMapRequested");
            handler->boolean_value(storeWeatherMapRequested);
          }
        if (flagHasAlongTheRoute)
          {
            handler->start_pair("AlongTheRoute");
            handler->boolean_value(storeAlongTheRoute);
          }
        assert(flagHasObservationDateAndTime);
        handler->start_pair("ObservationDateAndTime");
        storeObservationDateAndTime->write_as_json(handler);
        if (flagHasConditionsShortPhrase)
          {
            handler->start_pair("ConditionsShortPhrase");
            handler->string_value(storeConditionsShortPhrase);
          }
        if (flagHasCurrentTemperature)
          {
            handler->start_pair("CurrentTemperature");
            storeCurrentTemperature->write_as_json(handler);
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
        if (flagHasHumidityPct)
          {
            handler->start_pair("HumidityPct");
            handler->number_value(storeHumidityPct);
          }
        if (flagHasVisibility)
          {
            handler->start_pair("Visibility");
            storeVisibility->write_as_json(handler);
          }
        if (flagHasPrecipitation1Hour)
          {
            handler->start_pair("Precipitation1Hour");
            storePrecipitation1Hour->write_as_json(handler);
          }
        if (flagHasPrecipitationToday)
          {
            handler->start_pair("PrecipitationToday");
            storePrecipitationToday->write_as_json(handler);
          }
        if (flagHasWind)
          {
            handler->start_pair("Wind");
            storeWind->write_as_json(handler);
          }
        if (flagHasWindGust)
          {
            handler->start_pair("WindGust");
            storeWindGust->write_as_json(handler);
          }
        if (flagHasBarometricPressure)
          {
            handler->start_pair("BarometricPressure");
            storeBarometricPressure->write_as_json(handler);
          }
        if (flagHasUVIndex)
          {
            handler->start_pair("UVIndex");
            storeUVIndex->write_as_json(handler);
          }
        if (flagHasCloudinessPct)
          {
            handler->start_pair("CloudinessPct");
            handler->number_value(storeCloudinessPct);
          }
        assert(flagHasDailyForecasts);
        handler->start_pair("DailyForecasts");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeDailyForecasts.size(); ++num2)
          {
            storeDailyForecasts[num2]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasHourlyForecasts);
        handler->start_pair("HourlyForecasts");
        handler->start_array();
        for (size_t num3 = 0; num3 < storeHourlyForecasts.size(); ++num3)
          {
            storeHourlyForecasts[num3]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLocation()))
          {
            return "When parsing the object for %what%, the \"Location\" field was missing.";
          }
        if (!(hasAlerts()))
          {
            return "When parsing the object for %what%, the \"Alerts\" field was missing.";
          }
        if (!(hasRequestedAttribute()))
          {
            return "When parsing the object for %what%, the \"RequestedAttribute\" field was missing.";
          }
        if (!(hasIsYesNoQuery()))
          {
            return "When parsing the object for %what%, the \"IsYesNoQuery\" field was missing.";
          }
        if (!(hasObservationDateAndTime()))
          {
            return "When parsing the object for %what%, the \"ObservationDateAndTime\" field was missing.";
          }
        if (!(hasDailyForecasts()))
          {
            return "When parsing the object for %what%, the \"DailyForecasts\" field was missing.";
          }
        if (!(hasHourlyForecasts()))
          {
            return "When parsing the object for %what%, the \"HourlyForecasts\" field was missing.";
          }
        return NULL;
      }

    static ShowWeatherCurrentConditionsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowWeatherCurrentConditionsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowWeatherCurrentConditionsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherCurrentConditionsInformationNuggetJSON>, ShowWeatherCurrentConditionsInformationNuggetJSON *, bool> generator("Type ShowWeatherCurrentConditionsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for ShowWeatherCurrentConditionsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowWeatherCurrentConditionsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowWeatherCurrentConditionsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherCurrentConditionsInformationNuggetJSON>, ShowWeatherCurrentConditionsInformationNuggetJSON *, bool> generator("Type ShowWeatherCurrentConditionsInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public WeatherInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<AttributionJSON::Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool > fieldGeneratorAttribution;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorLocation;
        JSONHoldingArrayGenerator<AlertJSON::Generator, RCHandle<AlertJSON>, AlertJSON *, bool > fieldGeneratorAlerts;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedAttribute;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsYesNoQuery;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWeatherMapRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAlongTheRoute;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorObservationDateAndTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorConditionsShortPhrase;
        JSONHoldingGenerator<TypeCurrentTemperatureJSON::Generator, RCHandle<TypeCurrentTemperatureJSON>, TypeCurrentTemperatureJSON *, bool > fieldGeneratorCurrentTemperature;
        JSONHoldingGenerator<TypeFeelsLikeTemperatureJSON::Generator, RCHandle<TypeFeelsLikeTemperatureJSON>, TypeFeelsLikeTemperatureJSON *, bool > fieldGeneratorFeelsLikeTemperature;
        JSONHoldingGenerator<TypeHeatIndexJSON::Generator, RCHandle<TypeHeatIndexJSON>, TypeHeatIndexJSON *, bool > fieldGeneratorHeatIndex;
        JSONHoldingGenerator<TypeWindchillJSON::Generator, RCHandle<TypeWindchillJSON>, TypeWindchillJSON *, bool > fieldGeneratorWindchill;
        JSONHoldingGenerator<TypeDewPointJSON::Generator, RCHandle<TypeDewPointJSON>, TypeDewPointJSON *, bool > fieldGeneratorDewPoint;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherIconURL;
        JSONHoldingGenerator<WeatherImageJSON::Generator, RCHandle<WeatherImageJSON>, WeatherImageJSON *, bool > fieldGeneratorConditionsImage;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorHumidityPct;
        JSONHoldingGenerator<TypeVisibilityJSON::Generator, RCHandle<TypeVisibilityJSON>, TypeVisibilityJSON *, bool > fieldGeneratorVisibility;
        JSONHoldingGenerator<TypePrecipitation1HourJSON::Generator, RCHandle<TypePrecipitation1HourJSON>, TypePrecipitation1HourJSON *, bool > fieldGeneratorPrecipitation1Hour;
        JSONHoldingGenerator<TypePrecipitationTodayJSON::Generator, RCHandle<TypePrecipitationTodayJSON>, TypePrecipitationTodayJSON *, bool > fieldGeneratorPrecipitationToday;
        JSONHoldingGenerator<TypeWindJSON::Generator, RCHandle<TypeWindJSON>, TypeWindJSON *, bool > fieldGeneratorWind;
        JSONHoldingGenerator<TypeWindGustJSON::Generator, RCHandle<TypeWindGustJSON>, TypeWindGustJSON *, bool > fieldGeneratorWindGust;
        JSONHoldingGenerator<TypeBarometricPressureJSON::Generator, RCHandle<TypeBarometricPressureJSON>, TypeBarometricPressureJSON *, bool > fieldGeneratorBarometricPressure;
        JSONHoldingGenerator<TypeUVIndexJSON::Generator, RCHandle<TypeUVIndexJSON>, TypeUVIndexJSON *, bool > fieldGeneratorUVIndex;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorCloudinessPct;
        JSONHoldingArrayGenerator<DailyForecastJSON::Generator, RCHandle<DailyForecastJSON>, DailyForecastJSON *, bool > fieldGeneratorDailyForecasts;
        JSONHoldingArrayGenerator<HourlyForecastJSON::Generator, RCHandle<HourlyForecastJSON>, HourlyForecastJSON *, bool > fieldGeneratorHourlyForecasts;
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
            if (!(strcmp(getWeatherInformationNuggetJSONKey().c_str(), "ShowWeatherCurrentConditions") == 0))
                throw("The key field has a value other than `ShowWeatherCurrentConditions'.");
            ShowWeatherCurrentConditionsInformationNuggetJSON *result = new ShowWeatherCurrentConditionsInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowWeatherCurrentConditionsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowWeatherCurrentConditionsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(WeatherInformationNuggetJSON *new_result)
          {
            handle_result((ShowWeatherCurrentConditionsInformationNuggetJSON *)new_result);
          }
        void finish(ShowWeatherCurrentConditionsInformationNuggetJSON *result)
          {
            if (fieldGeneratorAttribution.have_value)
              {
                result->setAttribution(fieldGeneratorAttribution.value.referenced());
                fieldGeneratorAttribution.have_value = false;
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value.referenced());
                fieldGeneratorLocation.have_value = false;
              }
            else if (!(result->hasLocation()))
              {
                error("When parsing the object for %what%, the \"Location\" field was missing.");
              }
            if (fieldGeneratorAlerts.have_value)
              {
                result->initAlerts();
                size_t count = fieldGeneratorAlerts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlerts(fieldGeneratorAlerts.value[num].referenced());
                  }
                fieldGeneratorAlerts.value.clear();
                fieldGeneratorAlerts.have_value = false;
              }
            else if (!(result->hasAlerts()))
              {
                error("When parsing the object for %what%, the \"Alerts\" field was missing.");
              }
            if (fieldGeneratorRequestedAttribute.have_value)
              {
                result->setRequestedAttribute(fieldGeneratorRequestedAttribute.value);
                fieldGeneratorRequestedAttribute.have_value = false;
              }
            else if (!(result->hasRequestedAttribute()))
              {
                error("When parsing the object for %what%, the \"RequestedAttribute\" field was missing.");
              }
            if (fieldGeneratorIsYesNoQuery.have_value)
              {
                result->setIsYesNoQuery(fieldGeneratorIsYesNoQuery.value);
                fieldGeneratorIsYesNoQuery.have_value = false;
              }
            else if (!(result->hasIsYesNoQuery()))
              {
                error("When parsing the object for %what%, the \"IsYesNoQuery\" field was missing.");
              }
            if (fieldGeneratorWeatherMapRequested.have_value)
              {
                result->setWeatherMapRequested(fieldGeneratorWeatherMapRequested.value);
                fieldGeneratorWeatherMapRequested.have_value = false;
              }
            if (fieldGeneratorAlongTheRoute.have_value)
              {
                result->setAlongTheRoute(fieldGeneratorAlongTheRoute.value);
                fieldGeneratorAlongTheRoute.have_value = false;
              }
            if (fieldGeneratorObservationDateAndTime.have_value)
              {
                result->setObservationDateAndTime(fieldGeneratorObservationDateAndTime.value.referenced());
                fieldGeneratorObservationDateAndTime.have_value = false;
              }
            else if (!(result->hasObservationDateAndTime()))
              {
                error("When parsing the object for %what%, the \"ObservationDateAndTime\" field was missing.");
              }
            if (fieldGeneratorConditionsShortPhrase.have_value)
              {
                result->setConditionsShortPhrase(fieldGeneratorConditionsShortPhrase.value);
                fieldGeneratorConditionsShortPhrase.have_value = false;
              }
            if (fieldGeneratorCurrentTemperature.have_value)
              {
                result->setCurrentTemperature(fieldGeneratorCurrentTemperature.value.referenced());
                fieldGeneratorCurrentTemperature.have_value = false;
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
            if (fieldGeneratorHumidityPct.have_value)
              {
                result->setHumidityPct(fieldGeneratorHumidityPct.value);
                fieldGeneratorHumidityPct.have_value = false;
              }
            if (fieldGeneratorVisibility.have_value)
              {
                result->setVisibility(fieldGeneratorVisibility.value.referenced());
                fieldGeneratorVisibility.have_value = false;
              }
            if (fieldGeneratorPrecipitation1Hour.have_value)
              {
                result->setPrecipitation1Hour(fieldGeneratorPrecipitation1Hour.value.referenced());
                fieldGeneratorPrecipitation1Hour.have_value = false;
              }
            if (fieldGeneratorPrecipitationToday.have_value)
              {
                result->setPrecipitationToday(fieldGeneratorPrecipitationToday.value.referenced());
                fieldGeneratorPrecipitationToday.have_value = false;
              }
            if (fieldGeneratorWind.have_value)
              {
                result->setWind(fieldGeneratorWind.value.referenced());
                fieldGeneratorWind.have_value = false;
              }
            if (fieldGeneratorWindGust.have_value)
              {
                result->setWindGust(fieldGeneratorWindGust.value.referenced());
                fieldGeneratorWindGust.have_value = false;
              }
            if (fieldGeneratorBarometricPressure.have_value)
              {
                result->setBarometricPressure(fieldGeneratorBarometricPressure.value.referenced());
                fieldGeneratorBarometricPressure.have_value = false;
              }
            if (fieldGeneratorUVIndex.have_value)
              {
                result->setUVIndex(fieldGeneratorUVIndex.value.referenced());
                fieldGeneratorUVIndex.have_value = false;
              }
            if (fieldGeneratorCloudinessPct.have_value)
              {
                result->setCloudinessPct(fieldGeneratorCloudinessPct.value);
                fieldGeneratorCloudinessPct.have_value = false;
              }
            if (fieldGeneratorDailyForecasts.have_value)
              {
                result->initDailyForecasts();
                size_t count = fieldGeneratorDailyForecasts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDailyForecasts(fieldGeneratorDailyForecasts.value[num].referenced());
                  }
                fieldGeneratorDailyForecasts.value.clear();
                fieldGeneratorDailyForecasts.have_value = false;
              }
            else if (!(result->hasDailyForecasts()))
              {
                error("When parsing the object for %what%, the \"DailyForecasts\" field was missing.");
              }
            if (fieldGeneratorHourlyForecasts.have_value)
              {
                result->initHourlyForecasts();
                size_t count = fieldGeneratorHourlyForecasts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHourlyForecasts(fieldGeneratorHourlyForecasts.value[num].referenced());
                  }
                fieldGeneratorHourlyForecasts.value.clear();
                fieldGeneratorHourlyForecasts.have_value = false;
              }
            else if (!(result->hasHourlyForecasts()))
              {
                error("When parsing the object for %what%, the \"HourlyForecasts\" field was missing.");
              }
            WeatherInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowWeatherCurrentConditionsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'e':
                                    if (strcmp(&(field_name[3]), "rts") == 0)
                                        return &fieldGeneratorAlerts;
                                    break;
                                case 'o':
                                    if (strcmp(&(field_name[3]), "ngTheRoute") == 0)
                                        return &fieldGeneratorAlongTheRoute;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "tribution") == 0)
                                return &fieldGeneratorAttribution;
                            break;
                        default:
                            break;
                      }
                    break;
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
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrentTemperature") == 0)
                                return &fieldGeneratorCurrentTemperature;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ilyForecasts") == 0)
                                return &fieldGeneratorDailyForecasts;
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "wPoint") == 0)
                                return &fieldGeneratorDewPoint;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "eelsLikeTemperature") == 0)
                        return &fieldGeneratorFeelsLikeTemperature;
                    break;
                case 'H':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "atIndex") == 0)
                                return &fieldGeneratorHeatIndex;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "urlyForecasts") == 0)
                                return &fieldGeneratorHourlyForecasts;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "midityPct") == 0)
                                return &fieldGeneratorHumidityPct;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sYesNoQuery") == 0)
                        return &fieldGeneratorIsYesNoQuery;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "bservationDateAndTime") == 0)
                        return &fieldGeneratorObservationDateAndTime;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "recipitation", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case '1':
                                if (strcmp(&(field_name[14]), "Hour") == 0)
                                    return &fieldGeneratorPrecipitation1Hour;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[14]), "oday") == 0)
                                    return &fieldGeneratorPrecipitationToday;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedAttribute") == 0)
                        return &fieldGeneratorRequestedAttribute;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "VIndex") == 0)
                        return &fieldGeneratorUVIndex;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "isibility") == 0)
                        return &fieldGeneratorVisibility;
                    break;
                case 'W':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strncmp(&(field_name[2]), "ather", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'I':
                                        if (strcmp(&(field_name[8]), "conURL") == 0)
                                            return &fieldGeneratorWeatherIconURL;
                                        break;
                                    case 'M':
                                        if (strcmp(&(field_name[8]), "apRequested") == 0)
                                            return &fieldGeneratorWeatherMapRequested;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strncmp(&(field_name[2]), "nd", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 0:
                                        return &fieldGeneratorWind;
                                    case 'G':
                                        if (strcmp(&(field_name[5]), "ust") == 0)
                                            return &fieldGeneratorWindGust;
                                        break;
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
            return WeatherInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : WeatherInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorAttribution("field \"Attribution\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorAlerts("field \"Alerts\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorRequestedAttribute("field \"RequestedAttribute\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorIsYesNoQuery("field \"IsYesNoQuery\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorWeatherMapRequested("field \"WeatherMapRequested\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorAlongTheRoute("field \"AlongTheRoute\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorObservationDateAndTime("field \"ObservationDateAndTime\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorConditionsShortPhrase("field \"ConditionsShortPhrase\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorCurrentTemperature("field \"CurrentTemperature\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorFeelsLikeTemperature("field \"FeelsLikeTemperature\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorHeatIndex("field \"HeatIndex\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorWindchill("field \"Windchill\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorDewPoint("field \"DewPoint\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorWeatherIconURL("field \"WeatherIconURL\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorConditionsImage("field \"ConditionsImage\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorHumidityPct("field \"HumidityPct\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorVisibility("field \"Visibility\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorPrecipitation1Hour("field \"Precipitation1Hour\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorPrecipitationToday("field \"PrecipitationToday\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorWind("field \"Wind\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorWindGust("field \"WindGust\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorBarometricPressure("field \"BarometricPressure\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorUVIndex("field \"UVIndex\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorCloudinessPct("field \"CloudinessPct\" of the ShowWeatherCurrentConditionsInformationNugget class"), fieldGeneratorDailyForecasts("field \"DailyForecasts\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), fieldGeneratorHourlyForecasts("field \"HourlyForecasts\" of the ShowWeatherCurrentConditionsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowWeatherCurrentConditionsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAttribution.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorAlerts.reset();
            fieldGeneratorRequestedAttribute.reset();
            fieldGeneratorIsYesNoQuery.reset();
            fieldGeneratorWeatherMapRequested.reset();
            fieldGeneratorAlongTheRoute.reset();
            fieldGeneratorObservationDateAndTime.reset();
            fieldGeneratorConditionsShortPhrase.reset();
            fieldGeneratorCurrentTemperature.reset();
            fieldGeneratorFeelsLikeTemperature.reset();
            fieldGeneratorHeatIndex.reset();
            fieldGeneratorWindchill.reset();
            fieldGeneratorDewPoint.reset();
            fieldGeneratorWeatherIconURL.reset();
            fieldGeneratorConditionsImage.reset();
            fieldGeneratorHumidityPct.reset();
            fieldGeneratorVisibility.reset();
            fieldGeneratorPrecipitation1Hour.reset();
            fieldGeneratorPrecipitationToday.reset();
            fieldGeneratorWind.reset();
            fieldGeneratorWindGust.reset();
            fieldGeneratorBarometricPressure.reset();
            fieldGeneratorUVIndex.reset();
            fieldGeneratorCloudinessPct.reset();
            fieldGeneratorDailyForecasts.reset();
            fieldGeneratorHourlyForecasts.reset();
            WeatherInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWWEATHERCURRENTCONDITIONSINFORMATIONNUGGETJSON_H */
