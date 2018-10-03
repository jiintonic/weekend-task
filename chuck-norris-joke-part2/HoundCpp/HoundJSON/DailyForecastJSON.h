/* file "DailyForecastJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DAILYFORECASTJSON_H
#define DAILYFORECASTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <string>
#include <stdint.h>
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "WeatherImageJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "DailyForecastDayPartJSON.h"
#include "DailyForecastDayPartJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_WindJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DailyForecastJSON : public ReferenceCounted
  {
  public:
    class TypeHighTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeHighTemperatureJSON(const TypeHighTemperatureJSON &);
        TypeHighTemperatureJSON & operator=(const TypeHighTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHighTemperatureJSON(void);
        virtual ~TypeHighTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeHighTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeHighTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeHighTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeHighTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeHighTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeHighTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeHighTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeHighTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeHighTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeHighTemperatureAppendPair(key, new_component);
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

        static TypeHighTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHighTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHighTemperatureJSON>, TypeHighTemperatureJSON *, bool> generator("Type TypeHighTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeHighTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHighTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHighTemperatureJSON>, TypeHighTemperatureJSON *, bool> generator("Type TypeHighTemperature", ignore_extras);
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
                TypeHighTemperatureJSON *result = new TypeHighTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeHighTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeHighTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeHighTemperatureJSON *result)
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
            virtual void handle_result(TypeHighTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeHighTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeHighTemperature class");
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
    class TypeLowTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeLowTemperatureJSON(const TypeLowTemperatureJSON &);
        TypeLowTemperatureJSON & operator=(const TypeLowTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeLowTemperatureJSON(void);
        virtual ~TypeLowTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeLowTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeLowTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeLowTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeLowTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeLowTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeLowTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeLowTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeLowTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeLowTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeLowTemperatureAppendPair(key, new_component);
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

        static TypeLowTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeLowTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLowTemperatureJSON>, TypeLowTemperatureJSON *, bool> generator("Type TypeLowTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeLowTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeLowTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLowTemperatureJSON>, TypeLowTemperatureJSON *, bool> generator("Type TypeLowTemperature", ignore_extras);
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
                TypeLowTemperatureJSON *result = new TypeLowTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeLowTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeLowTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeLowTemperatureJSON *result)
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
            virtual void handle_result(TypeLowTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeLowTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeLowTemperature class");
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
    class TypePrecipitationDayJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePrecipitationDayJSON(const TypePrecipitationDayJSON &);
        TypePrecipitationDayJSON & operator=(const TypePrecipitationDayJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePrecipitationDayJSON(void);
        virtual ~TypePrecipitationDayJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypePrecipitationDayComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePrecipitationDayComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePrecipitationDayComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePrecipitationDayComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePrecipitationDayLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePrecipitationDayLookup(const char *field_name) const
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

        virtual void extraTypePrecipitationDayAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePrecipitationDaySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePrecipitationDayLookup(key);
            if (old_field == NULL)
              {
                extraTypePrecipitationDayAppendPair(key, new_component);
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

        static TypePrecipitationDayJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePrecipitationDayJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePrecipitationDayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationDayJSON>, TypePrecipitationDayJSON *, bool> generator("Type TypePrecipitationDay", ignore_extras);
                parse_json_value(text, "Text for TypePrecipitationDayJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePrecipitationDayJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePrecipitationDayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationDayJSON>, TypePrecipitationDayJSON *, bool> generator("Type TypePrecipitationDay", ignore_extras);
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
                TypePrecipitationDayJSON *result = new TypePrecipitationDayJSON();
                assert(result != NULL);
                RCHandle<TypePrecipitationDayJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePrecipitationDayAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePrecipitationDayJSON *result)
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
            virtual void handle_result(TypePrecipitationDayJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypePrecipitationDay class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePrecipitationDay class");
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
    class TypePrecipitationNightJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePrecipitationNightJSON(const TypePrecipitationNightJSON &);
        TypePrecipitationNightJSON & operator=(const TypePrecipitationNightJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePrecipitationNightJSON(void);
        virtual ~TypePrecipitationNightJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypePrecipitationNightComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePrecipitationNightComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePrecipitationNightComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePrecipitationNightComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePrecipitationNightLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePrecipitationNightLookup(const char *field_name) const
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

        virtual void extraTypePrecipitationNightAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePrecipitationNightSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePrecipitationNightLookup(key);
            if (old_field == NULL)
              {
                extraTypePrecipitationNightAppendPair(key, new_component);
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

        static TypePrecipitationNightJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePrecipitationNightJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePrecipitationNightJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationNightJSON>, TypePrecipitationNightJSON *, bool> generator("Type TypePrecipitationNight", ignore_extras);
                parse_json_value(text, "Text for TypePrecipitationNightJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePrecipitationNightJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePrecipitationNightJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationNightJSON>, TypePrecipitationNightJSON *, bool> generator("Type TypePrecipitationNight", ignore_extras);
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
                TypePrecipitationNightJSON *result = new TypePrecipitationNightJSON();
                assert(result != NULL);
                RCHandle<TypePrecipitationNightJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePrecipitationNightAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePrecipitationNightJSON *result)
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
            virtual void handle_result(TypePrecipitationNightJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypePrecipitationNight class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePrecipitationNight class");
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
    class TypeSnowDayJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_SnowJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSnowDayJSON(const TypeSnowDayJSON &);
        TypeSnowDayJSON & operator=(const TypeSnowDayJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSnowDayJSON(void);
        virtual ~TypeSnowDayJSON(void);
        bool  hasValue(void) const;
        UnitsValue_SnowJSON *  getValue(void);
        const UnitsValue_SnowJSON *  getValue(void) const;

        virtual size_t extraTypeSnowDayComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSnowDayComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSnowDayComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSnowDayComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSnowDayLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSnowDayLookup(const char *field_name) const
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

        virtual void extraTypeSnowDayAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSnowDaySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSnowDayLookup(key);
            if (old_field == NULL)
              {
                extraTypeSnowDayAppendPair(key, new_component);
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

        static TypeSnowDayJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSnowDayJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSnowDayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSnowDayJSON>, TypeSnowDayJSON *, bool> generator("Type TypeSnowDay", ignore_extras);
                parse_json_value(text, "Text for TypeSnowDayJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSnowDayJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSnowDayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSnowDayJSON>, TypeSnowDayJSON *, bool> generator("Type TypeSnowDay", ignore_extras);
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
                TypeSnowDayJSON *result = new TypeSnowDayJSON();
                assert(result != NULL);
                RCHandle<TypeSnowDayJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSnowDayAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSnowDayJSON *result)
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
            virtual void handle_result(TypeSnowDayJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeSnowDay class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSnowDay class");
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
    class TypeSnowNightJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_SnowJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSnowNightJSON(const TypeSnowNightJSON &);
        TypeSnowNightJSON & operator=(const TypeSnowNightJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSnowNightJSON(void);
        virtual ~TypeSnowNightJSON(void);
        bool  hasValue(void) const;
        UnitsValue_SnowJSON *  getValue(void);
        const UnitsValue_SnowJSON *  getValue(void) const;

        virtual size_t extraTypeSnowNightComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSnowNightComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSnowNightComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSnowNightComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSnowNightLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSnowNightLookup(const char *field_name) const
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

        virtual void extraTypeSnowNightAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSnowNightSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSnowNightLookup(key);
            if (old_field == NULL)
              {
                extraTypeSnowNightAppendPair(key, new_component);
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

        static TypeSnowNightJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSnowNightJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSnowNightJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSnowNightJSON>, TypeSnowNightJSON *, bool> generator("Type TypeSnowNight", ignore_extras);
                parse_json_value(text, "Text for TypeSnowNightJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSnowNightJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSnowNightJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSnowNightJSON>, TypeSnowNightJSON *, bool> generator("Type TypeSnowNight", ignore_extras);
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
                TypeSnowNightJSON *result = new TypeSnowNightJSON();
                assert(result != NULL);
                RCHandle<TypeSnowNightJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSnowNightAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSnowNightJSON *result)
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
            virtual void handle_result(TypeSnowNightJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeSnowNight class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSnowNight class");
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
    class TypeMaxWindJSON : public ReferenceCounted
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

        TypeMaxWindJSON(const TypeMaxWindJSON &);
        TypeMaxWindJSON & operator=(const TypeMaxWindJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMaxWindJSON(void);
        virtual ~TypeMaxWindJSON(void);
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

        virtual size_t extraTypeMaxWindComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMaxWindComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMaxWindComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMaxWindComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMaxWindLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMaxWindLookup(const char *field_name) const
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
                throw("The value for field DirectionDegrees of TypeMaxWindJSON is less than the lower bound (0) for that field.");
            if (new_value > 360)
                throw("The value for field DirectionDegrees of TypeMaxWindJSON is greater than the upper bound (360) for that field.");
            storeDirectionDegrees = new_value;
          }
        void unsetDirectionDegrees(void)
          {
            flagHasDirectionDegrees = false;
          }

        virtual void extraTypeMaxWindAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMaxWindSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMaxWindLookup(key);
            if (old_field == NULL)
              {
                extraTypeMaxWindAppendPair(key, new_component);
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

        static TypeMaxWindJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMaxWindJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMaxWindJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxWindJSON>, TypeMaxWindJSON *, bool> generator("Type TypeMaxWind", ignore_extras);
                parse_json_value(text, "Text for TypeMaxWindJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMaxWindJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMaxWindJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxWindJSON>, TypeMaxWindJSON *, bool> generator("Type TypeMaxWind", ignore_extras);
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
                TypeMaxWindJSON *result = new TypeMaxWindJSON();
                assert(result != NULL);
                RCHandle<TypeMaxWindJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMaxWindAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMaxWindJSON *result)
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
            virtual void handle_result(TypeMaxWindJSON *new_result) = 0;
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
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxWind class", ignore_extras), fieldGeneratorDirectionAbbreviation("field \"DirectionAbbreviation\" of the TypeMaxWind class"), fieldGeneratorDirectionText("field \"DirectionText\" of the TypeMaxWind class"), fieldGeneratorDirectionDegrees("field \"DirectionDegrees\" of the TypeMaxWind class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMaxWind class");
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
    class TypeAvgWindJSON : public ReferenceCounted
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

        TypeAvgWindJSON(const TypeAvgWindJSON &);
        TypeAvgWindJSON & operator=(const TypeAvgWindJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAvgWindJSON(void);
        virtual ~TypeAvgWindJSON(void);
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

        virtual size_t extraTypeAvgWindComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAvgWindComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAvgWindComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAvgWindComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAvgWindLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAvgWindLookup(const char *field_name) const
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
                throw("The value for field DirectionDegrees of TypeAvgWindJSON is less than the lower bound (0) for that field.");
            if (new_value > 360)
                throw("The value for field DirectionDegrees of TypeAvgWindJSON is greater than the upper bound (360) for that field.");
            storeDirectionDegrees = new_value;
          }
        void unsetDirectionDegrees(void)
          {
            flagHasDirectionDegrees = false;
          }

        virtual void extraTypeAvgWindAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAvgWindSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAvgWindLookup(key);
            if (old_field == NULL)
              {
                extraTypeAvgWindAppendPair(key, new_component);
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

        static TypeAvgWindJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAvgWindJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAvgWindJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgWindJSON>, TypeAvgWindJSON *, bool> generator("Type TypeAvgWind", ignore_extras);
                parse_json_value(text, "Text for TypeAvgWindJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAvgWindJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAvgWindJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgWindJSON>, TypeAvgWindJSON *, bool> generator("Type TypeAvgWind", ignore_extras);
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
                TypeAvgWindJSON *result = new TypeAvgWindJSON();
                assert(result != NULL);
                RCHandle<TypeAvgWindJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAvgWindAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAvgWindJSON *result)
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
            virtual void handle_result(TypeAvgWindJSON *new_result) = 0;
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
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgWind class", ignore_extras), fieldGeneratorDirectionAbbreviation("field \"DirectionAbbreviation\" of the TypeAvgWind class"), fieldGeneratorDirectionText("field \"DirectionText\" of the TypeAvgWind class"), fieldGeneratorDirectionDegrees("field \"DirectionDegrees\" of the TypeAvgWind class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAvgWind class");
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

  private:
    bool flagHasForecastDateAndTime;
    DateAndOrTimeJSON * storeForecastDateAndTime;
    bool flagHasSunriseDateAndTime;
    DateAndOrTimeJSON * storeSunriseDateAndTime;
    bool flagHasSunsetDateAndTime;
    DateAndOrTimeJSON * storeSunsetDateAndTime;
    bool flagHasMoonPhaseText;
    std::string storeMoonPhaseText;
    bool flagHasMoonPhasePct;
    uint8_t storeMoonPhasePct;
    bool flagHasForecastShortPhrase;
    std::string storeForecastShortPhrase;
    bool flagHasWeatherIconURL;
    std::string storeWeatherIconURL;
    bool flagHasConditionsImage;
    WeatherImageJSON * storeConditionsImage;
    bool flagHasHighTemperature;
    TypeHighTemperatureJSON * storeHighTemperature;
    bool flagHasLowTemperature;
    TypeLowTemperatureJSON * storeLowTemperature;
    bool flagHasProbabilityOfPrecipitationPct;
    uint8_t storeProbabilityOfPrecipitationPct;
    bool flagHasPrecipitationTotal;
    TypePrecipitationTotalJSON * storePrecipitationTotal;
    bool flagHasPrecipitationDay;
    TypePrecipitationDayJSON * storePrecipitationDay;
    bool flagHasPrecipitationNight;
    TypePrecipitationNightJSON * storePrecipitationNight;
    bool flagHasDay;
    DailyForecastDayPartJSON * storeDay;
    bool flagHasNight;
    DailyForecastDayPartJSON * storeNight;
    bool flagHasSnowTotal;
    TypeSnowTotalJSON * storeSnowTotal;
    bool flagHasSnowDay;
    TypeSnowDayJSON * storeSnowDay;
    bool flagHasSnowNight;
    TypeSnowNightJSON * storeSnowNight;
    bool flagHasMaxHumidityPct;
    uint8_t storeMaxHumidityPct;
    bool flagHasAvgHumidityPct;
    uint8_t storeAvgHumidityPct;
    bool flagHasMinHumidityPct;
    uint8_t storeMinHumidityPct;
    bool flagHasMaxWind;
    TypeMaxWindJSON * storeMaxWind;
    bool flagHasAvgWind;
    TypeAvgWindJSON * storeAvgWind;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DailyForecastJSON(const DailyForecastJSON &);
    DailyForecastJSON & operator=(const DailyForecastJSON &other);

    void  fromJSONForecastDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSunriseDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSunsetDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMoonPhaseText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMoonPhasePct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONForecastShortPhrase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHighTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLowTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProbabilityOfPrecipitationPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrecipitationTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrecipitationDay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrecipitationNight(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNight(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSnowTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSnowDay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSnowNight(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxHumidityPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgHumidityPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinHumidityPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxWind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgWind(JSONValue *json_value, bool ignore_extras = false);


  public:
    DailyForecastJSON(void);
    virtual ~DailyForecastJSON(void);
    bool  hasForecastDateAndTime(void) const;
    DateAndOrTimeJSON *  getForecastDateAndTime(void);
    const DateAndOrTimeJSON *  getForecastDateAndTime(void) const;
    bool  hasSunriseDateAndTime(void) const;
    DateAndOrTimeJSON *  getSunriseDateAndTime(void);
    const DateAndOrTimeJSON *  getSunriseDateAndTime(void) const;
    bool  hasSunsetDateAndTime(void) const;
    DateAndOrTimeJSON *  getSunsetDateAndTime(void);
    const DateAndOrTimeJSON *  getSunsetDateAndTime(void) const;
    bool  hasMoonPhaseText(void) const;
    std::string  getMoonPhaseText(void);
    const std::string  getMoonPhaseText(void) const;
    bool  hasMoonPhasePct(void) const;
    uint8_t  getMoonPhasePct(void);
    const uint8_t  getMoonPhasePct(void) const;
    bool  hasForecastShortPhrase(void) const;
    std::string  getForecastShortPhrase(void);
    const std::string  getForecastShortPhrase(void) const;
    bool  hasWeatherIconURL(void) const;
    std::string  getWeatherIconURL(void);
    const std::string  getWeatherIconURL(void) const;
    bool  hasConditionsImage(void) const;
    WeatherImageJSON *  getConditionsImage(void);
    const WeatherImageJSON *  getConditionsImage(void) const;
    bool  hasHighTemperature(void) const;
    TypeHighTemperatureJSON *  getHighTemperature(void);
    const TypeHighTemperatureJSON *  getHighTemperature(void) const;
    bool  hasLowTemperature(void) const;
    TypeLowTemperatureJSON *  getLowTemperature(void);
    const TypeLowTemperatureJSON *  getLowTemperature(void) const;
    bool  hasProbabilityOfPrecipitationPct(void) const;
    uint8_t  getProbabilityOfPrecipitationPct(void);
    const uint8_t  getProbabilityOfPrecipitationPct(void) const;
    bool  hasPrecipitationTotal(void) const;
    TypePrecipitationTotalJSON *  getPrecipitationTotal(void);
    const TypePrecipitationTotalJSON *  getPrecipitationTotal(void) const;
    bool  hasPrecipitationDay(void) const;
    TypePrecipitationDayJSON *  getPrecipitationDay(void);
    const TypePrecipitationDayJSON *  getPrecipitationDay(void) const;
    bool  hasPrecipitationNight(void) const;
    TypePrecipitationNightJSON *  getPrecipitationNight(void);
    const TypePrecipitationNightJSON *  getPrecipitationNight(void) const;
    bool  hasDay(void) const;
    DailyForecastDayPartJSON *  getDay(void);
    const DailyForecastDayPartJSON *  getDay(void) const;
    bool  hasNight(void) const;
    DailyForecastDayPartJSON *  getNight(void);
    const DailyForecastDayPartJSON *  getNight(void) const;
    bool  hasSnowTotal(void) const;
    TypeSnowTotalJSON *  getSnowTotal(void);
    const TypeSnowTotalJSON *  getSnowTotal(void) const;
    bool  hasSnowDay(void) const;
    TypeSnowDayJSON *  getSnowDay(void);
    const TypeSnowDayJSON *  getSnowDay(void) const;
    bool  hasSnowNight(void) const;
    TypeSnowNightJSON *  getSnowNight(void);
    const TypeSnowNightJSON *  getSnowNight(void) const;
    bool  hasMaxHumidityPct(void) const;
    uint8_t  getMaxHumidityPct(void);
    const uint8_t  getMaxHumidityPct(void) const;
    bool  hasAvgHumidityPct(void) const;
    uint8_t  getAvgHumidityPct(void);
    const uint8_t  getAvgHumidityPct(void) const;
    bool  hasMinHumidityPct(void) const;
    uint8_t  getMinHumidityPct(void);
    const uint8_t  getMinHumidityPct(void) const;
    bool  hasMaxWind(void) const;
    TypeMaxWindJSON *  getMaxWind(void);
    const TypeMaxWindJSON *  getMaxWind(void) const;
    bool  hasAvgWind(void) const;
    TypeAvgWindJSON *  getAvgWind(void);
    const TypeAvgWindJSON *  getAvgWind(void) const;

    virtual size_t extraDailyForecastComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDailyForecastComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDailyForecastComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDailyForecastComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDailyForecastLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDailyForecastLookup(const char *field_name) const
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
    void setSunriseDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSunriseDateAndTime)
          {
            storeSunriseDateAndTime->remove_reference();
          }
        flagHasSunriseDateAndTime = true;
        storeSunriseDateAndTime = new_value;
      }
    void unsetSunriseDateAndTime(void)
      {
        if (flagHasSunriseDateAndTime)
          {
            storeSunriseDateAndTime->remove_reference();
          }
        flagHasSunriseDateAndTime = false;
      }
    void setSunsetDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSunsetDateAndTime)
          {
            storeSunsetDateAndTime->remove_reference();
          }
        flagHasSunsetDateAndTime = true;
        storeSunsetDateAndTime = new_value;
      }
    void unsetSunsetDateAndTime(void)
      {
        if (flagHasSunsetDateAndTime)
          {
            storeSunsetDateAndTime->remove_reference();
          }
        flagHasSunsetDateAndTime = false;
      }
    void setMoonPhaseText(std::string new_value)
      {
        flagHasMoonPhaseText = true;
        storeMoonPhaseText = new_value;
      }
    void unsetMoonPhaseText(void)
      {
        flagHasMoonPhaseText = false;
      }
    void setMoonPhasePct(uint8_t new_value)
      {
        flagHasMoonPhasePct = true;
        if (new_value < 0)
            throw("The value for field MoonPhasePct of DailyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field MoonPhasePct of DailyForecastJSON is greater than the upper bound (100) for that field.");
        storeMoonPhasePct = new_value;
      }
    void unsetMoonPhasePct(void)
      {
        flagHasMoonPhasePct = false;
      }
    void setForecastShortPhrase(std::string new_value)
      {
        flagHasForecastShortPhrase = true;
        storeForecastShortPhrase = new_value;
      }
    void unsetForecastShortPhrase(void)
      {
        flagHasForecastShortPhrase = false;
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
    void setHighTemperature(TypeHighTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHighTemperature)
          {
            storeHighTemperature->remove_reference();
          }
        flagHasHighTemperature = true;
        storeHighTemperature = new_value;
      }
    void unsetHighTemperature(void)
      {
        if (flagHasHighTemperature)
          {
            storeHighTemperature->remove_reference();
          }
        flagHasHighTemperature = false;
      }
    void setLowTemperature(TypeLowTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLowTemperature)
          {
            storeLowTemperature->remove_reference();
          }
        flagHasLowTemperature = true;
        storeLowTemperature = new_value;
      }
    void unsetLowTemperature(void)
      {
        if (flagHasLowTemperature)
          {
            storeLowTemperature->remove_reference();
          }
        flagHasLowTemperature = false;
      }
    void setProbabilityOfPrecipitationPct(uint8_t new_value)
      {
        flagHasProbabilityOfPrecipitationPct = true;
        if (new_value < 0)
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastJSON is greater than the upper bound (100) for that field.");
        storeProbabilityOfPrecipitationPct = new_value;
      }
    void unsetProbabilityOfPrecipitationPct(void)
      {
        flagHasProbabilityOfPrecipitationPct = false;
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
    void setPrecipitationDay(TypePrecipitationDayJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrecipitationDay)
          {
            storePrecipitationDay->remove_reference();
          }
        flagHasPrecipitationDay = true;
        storePrecipitationDay = new_value;
      }
    void unsetPrecipitationDay(void)
      {
        if (flagHasPrecipitationDay)
          {
            storePrecipitationDay->remove_reference();
          }
        flagHasPrecipitationDay = false;
      }
    void setPrecipitationNight(TypePrecipitationNightJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrecipitationNight)
          {
            storePrecipitationNight->remove_reference();
          }
        flagHasPrecipitationNight = true;
        storePrecipitationNight = new_value;
      }
    void unsetPrecipitationNight(void)
      {
        if (flagHasPrecipitationNight)
          {
            storePrecipitationNight->remove_reference();
          }
        flagHasPrecipitationNight = false;
      }
    void setDay(DailyForecastDayPartJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDay)
          {
            storeDay->remove_reference();
          }
        flagHasDay = true;
        storeDay = new_value;
      }
    void unsetDay(void)
      {
        if (flagHasDay)
          {
            storeDay->remove_reference();
          }
        flagHasDay = false;
      }
    void setNight(DailyForecastDayPartJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNight)
          {
            storeNight->remove_reference();
          }
        flagHasNight = true;
        storeNight = new_value;
      }
    void unsetNight(void)
      {
        if (flagHasNight)
          {
            storeNight->remove_reference();
          }
        flagHasNight = false;
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
    void setSnowDay(TypeSnowDayJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSnowDay)
          {
            storeSnowDay->remove_reference();
          }
        flagHasSnowDay = true;
        storeSnowDay = new_value;
      }
    void unsetSnowDay(void)
      {
        if (flagHasSnowDay)
          {
            storeSnowDay->remove_reference();
          }
        flagHasSnowDay = false;
      }
    void setSnowNight(TypeSnowNightJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSnowNight)
          {
            storeSnowNight->remove_reference();
          }
        flagHasSnowNight = true;
        storeSnowNight = new_value;
      }
    void unsetSnowNight(void)
      {
        if (flagHasSnowNight)
          {
            storeSnowNight->remove_reference();
          }
        flagHasSnowNight = false;
      }
    void setMaxHumidityPct(uint8_t new_value)
      {
        flagHasMaxHumidityPct = true;
        if (new_value < 0)
            throw("The value for field MaxHumidityPct of DailyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field MaxHumidityPct of DailyForecastJSON is greater than the upper bound (100) for that field.");
        storeMaxHumidityPct = new_value;
      }
    void unsetMaxHumidityPct(void)
      {
        flagHasMaxHumidityPct = false;
      }
    void setAvgHumidityPct(uint8_t new_value)
      {
        flagHasAvgHumidityPct = true;
        if (new_value < 0)
            throw("The value for field AvgHumidityPct of DailyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field AvgHumidityPct of DailyForecastJSON is greater than the upper bound (100) for that field.");
        storeAvgHumidityPct = new_value;
      }
    void unsetAvgHumidityPct(void)
      {
        flagHasAvgHumidityPct = false;
      }
    void setMinHumidityPct(uint8_t new_value)
      {
        flagHasMinHumidityPct = true;
        if (new_value < 0)
            throw("The value for field MinHumidityPct of DailyForecastJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field MinHumidityPct of DailyForecastJSON is greater than the upper bound (100) for that field.");
        storeMinHumidityPct = new_value;
      }
    void unsetMinHumidityPct(void)
      {
        flagHasMinHumidityPct = false;
      }
    void setMaxWind(TypeMaxWindJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaxWind)
          {
            storeMaxWind->remove_reference();
          }
        flagHasMaxWind = true;
        storeMaxWind = new_value;
      }
    void unsetMaxWind(void)
      {
        if (flagHasMaxWind)
          {
            storeMaxWind->remove_reference();
          }
        flagHasMaxWind = false;
      }
    void setAvgWind(TypeAvgWindJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAvgWind)
          {
            storeAvgWind->remove_reference();
          }
        flagHasAvgWind = true;
        storeAvgWind = new_value;
      }
    void unsetAvgWind(void)
      {
        if (flagHasAvgWind)
          {
            storeAvgWind->remove_reference();
          }
        flagHasAvgWind = false;
      }

    virtual void extraDailyForecastAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDailyForecastSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDailyForecastLookup(key);
        if (old_field == NULL)
          {
            extraDailyForecastAppendPair(key, new_component);
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
        assert(flagHasSunriseDateAndTime);
        handler->start_pair("SunriseDateAndTime");
        storeSunriseDateAndTime->write_as_json(handler);
        assert(flagHasSunsetDateAndTime);
        handler->start_pair("SunsetDateAndTime");
        storeSunsetDateAndTime->write_as_json(handler);
        assert(flagHasMoonPhaseText);
        handler->start_pair("MoonPhaseText");
        handler->string_value(storeMoonPhaseText);
        assert(flagHasMoonPhasePct);
        handler->start_pair("MoonPhasePct");
        handler->number_value(storeMoonPhasePct);
        if (flagHasForecastShortPhrase)
          {
            handler->start_pair("ForecastShortPhrase");
            handler->string_value(storeForecastShortPhrase);
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
        if (flagHasHighTemperature)
          {
            handler->start_pair("HighTemperature");
            storeHighTemperature->write_as_json(handler);
          }
        if (flagHasLowTemperature)
          {
            handler->start_pair("LowTemperature");
            storeLowTemperature->write_as_json(handler);
          }
        if (flagHasProbabilityOfPrecipitationPct)
          {
            handler->start_pair("ProbabilityOfPrecipitationPct");
            handler->number_value(storeProbabilityOfPrecipitationPct);
          }
        if (flagHasPrecipitationTotal)
          {
            handler->start_pair("PrecipitationTotal");
            storePrecipitationTotal->write_as_json(handler);
          }
        if (flagHasPrecipitationDay)
          {
            handler->start_pair("PrecipitationDay");
            storePrecipitationDay->write_as_json(handler);
          }
        if (flagHasPrecipitationNight)
          {
            handler->start_pair("PrecipitationNight");
            storePrecipitationNight->write_as_json(handler);
          }
        if (flagHasDay)
          {
            handler->start_pair("Day");
            storeDay->write_as_json(handler);
          }
        if (flagHasNight)
          {
            handler->start_pair("Night");
            storeNight->write_as_json(handler);
          }
        if (flagHasSnowTotal)
          {
            handler->start_pair("SnowTotal");
            storeSnowTotal->write_as_json(handler);
          }
        if (flagHasSnowDay)
          {
            handler->start_pair("SnowDay");
            storeSnowDay->write_as_json(handler);
          }
        if (flagHasSnowNight)
          {
            handler->start_pair("SnowNight");
            storeSnowNight->write_as_json(handler);
          }
        if (flagHasMaxHumidityPct)
          {
            handler->start_pair("MaxHumidityPct");
            handler->number_value(storeMaxHumidityPct);
          }
        if (flagHasAvgHumidityPct)
          {
            handler->start_pair("AvgHumidityPct");
            handler->number_value(storeAvgHumidityPct);
          }
        if (flagHasMinHumidityPct)
          {
            handler->start_pair("MinHumidityPct");
            handler->number_value(storeMinHumidityPct);
          }
        if (flagHasMaxWind)
          {
            handler->start_pair("MaxWind");
            storeMaxWind->write_as_json(handler);
          }
        if (flagHasAvgWind)
          {
            handler->start_pair("AvgWind");
            storeAvgWind->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasForecastDateAndTime()))
          {
            return "When parsing the object for %what%, the \"ForecastDateAndTime\" field was missing.";
          }
        if (!(hasSunriseDateAndTime()))
          {
            return "When parsing the object for %what%, the \"SunriseDateAndTime\" field was missing.";
          }
        if (!(hasSunsetDateAndTime()))
          {
            return "When parsing the object for %what%, the \"SunsetDateAndTime\" field was missing.";
          }
        if (!(hasMoonPhaseText()))
          {
            return "When parsing the object for %what%, the \"MoonPhaseText\" field was missing.";
          }
        if (!(hasMoonPhasePct()))
          {
            return "When parsing the object for %what%, the \"MoonPhasePct\" field was missing.";
          }
        return NULL;
      }

    static DailyForecastJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DailyForecastJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DailyForecastJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DailyForecastJSON>, DailyForecastJSON *, bool> generator("Type DailyForecast", ignore_extras);
            parse_json_value(text, "Text for DailyForecastJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DailyForecastJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DailyForecastJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DailyForecastJSON>, DailyForecastJSON *, bool> generator("Type DailyForecast", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorSunriseDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorSunsetDateAndTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMoonPhaseText;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorMoonPhasePct;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorForecastShortPhrase;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherIconURL;
        JSONHoldingGenerator<WeatherImageJSON::Generator, RCHandle<WeatherImageJSON>, WeatherImageJSON *, bool > fieldGeneratorConditionsImage;
        JSONHoldingGenerator<TypeHighTemperatureJSON::Generator, RCHandle<TypeHighTemperatureJSON>, TypeHighTemperatureJSON *, bool > fieldGeneratorHighTemperature;
        JSONHoldingGenerator<TypeLowTemperatureJSON::Generator, RCHandle<TypeLowTemperatureJSON>, TypeLowTemperatureJSON *, bool > fieldGeneratorLowTemperature;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorProbabilityOfPrecipitationPct;
        JSONHoldingGenerator<TypePrecipitationTotalJSON::Generator, RCHandle<TypePrecipitationTotalJSON>, TypePrecipitationTotalJSON *, bool > fieldGeneratorPrecipitationTotal;
        JSONHoldingGenerator<TypePrecipitationDayJSON::Generator, RCHandle<TypePrecipitationDayJSON>, TypePrecipitationDayJSON *, bool > fieldGeneratorPrecipitationDay;
        JSONHoldingGenerator<TypePrecipitationNightJSON::Generator, RCHandle<TypePrecipitationNightJSON>, TypePrecipitationNightJSON *, bool > fieldGeneratorPrecipitationNight;
        JSONHoldingGenerator<DailyForecastDayPartJSON::Generator, RCHandle<DailyForecastDayPartJSON>, DailyForecastDayPartJSON *, bool > fieldGeneratorDay;
        JSONHoldingGenerator<DailyForecastDayPartJSON::Generator, RCHandle<DailyForecastDayPartJSON>, DailyForecastDayPartJSON *, bool > fieldGeneratorNight;
        JSONHoldingGenerator<TypeSnowTotalJSON::Generator, RCHandle<TypeSnowTotalJSON>, TypeSnowTotalJSON *, bool > fieldGeneratorSnowTotal;
        JSONHoldingGenerator<TypeSnowDayJSON::Generator, RCHandle<TypeSnowDayJSON>, TypeSnowDayJSON *, bool > fieldGeneratorSnowDay;
        JSONHoldingGenerator<TypeSnowNightJSON::Generator, RCHandle<TypeSnowNightJSON>, TypeSnowNightJSON *, bool > fieldGeneratorSnowNight;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorMaxHumidityPct;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorAvgHumidityPct;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorMinHumidityPct;
        JSONHoldingGenerator<TypeMaxWindJSON::Generator, RCHandle<TypeMaxWindJSON>, TypeMaxWindJSON *, bool > fieldGeneratorMaxWind;
        JSONHoldingGenerator<TypeAvgWindJSON::Generator, RCHandle<TypeAvgWindJSON>, TypeAvgWindJSON *, bool > fieldGeneratorAvgWind;
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
            DailyForecastJSON *result = new DailyForecastJSON();
            assert(result != NULL);
            RCHandle<DailyForecastJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDailyForecastAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DailyForecastJSON *result)
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
            if (fieldGeneratorSunriseDateAndTime.have_value)
              {
                result->setSunriseDateAndTime(fieldGeneratorSunriseDateAndTime.value.referenced());
                fieldGeneratorSunriseDateAndTime.have_value = false;
              }
            else if (!(result->hasSunriseDateAndTime()))
              {
                error("When parsing the object for %what%, the \"SunriseDateAndTime\" field was missing.");
              }
            if (fieldGeneratorSunsetDateAndTime.have_value)
              {
                result->setSunsetDateAndTime(fieldGeneratorSunsetDateAndTime.value.referenced());
                fieldGeneratorSunsetDateAndTime.have_value = false;
              }
            else if (!(result->hasSunsetDateAndTime()))
              {
                error("When parsing the object for %what%, the \"SunsetDateAndTime\" field was missing.");
              }
            if (fieldGeneratorMoonPhaseText.have_value)
              {
                result->setMoonPhaseText(fieldGeneratorMoonPhaseText.value);
                fieldGeneratorMoonPhaseText.have_value = false;
              }
            else if (!(result->hasMoonPhaseText()))
              {
                error("When parsing the object for %what%, the \"MoonPhaseText\" field was missing.");
              }
            if (fieldGeneratorMoonPhasePct.have_value)
              {
                result->setMoonPhasePct(fieldGeneratorMoonPhasePct.value);
                fieldGeneratorMoonPhasePct.have_value = false;
              }
            else if (!(result->hasMoonPhasePct()))
              {
                error("When parsing the object for %what%, the \"MoonPhasePct\" field was missing.");
              }
            if (fieldGeneratorForecastShortPhrase.have_value)
              {
                result->setForecastShortPhrase(fieldGeneratorForecastShortPhrase.value);
                fieldGeneratorForecastShortPhrase.have_value = false;
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
            if (fieldGeneratorHighTemperature.have_value)
              {
                result->setHighTemperature(fieldGeneratorHighTemperature.value.referenced());
                fieldGeneratorHighTemperature.have_value = false;
              }
            if (fieldGeneratorLowTemperature.have_value)
              {
                result->setLowTemperature(fieldGeneratorLowTemperature.value.referenced());
                fieldGeneratorLowTemperature.have_value = false;
              }
            if (fieldGeneratorProbabilityOfPrecipitationPct.have_value)
              {
                result->setProbabilityOfPrecipitationPct(fieldGeneratorProbabilityOfPrecipitationPct.value);
                fieldGeneratorProbabilityOfPrecipitationPct.have_value = false;
              }
            if (fieldGeneratorPrecipitationTotal.have_value)
              {
                result->setPrecipitationTotal(fieldGeneratorPrecipitationTotal.value.referenced());
                fieldGeneratorPrecipitationTotal.have_value = false;
              }
            if (fieldGeneratorPrecipitationDay.have_value)
              {
                result->setPrecipitationDay(fieldGeneratorPrecipitationDay.value.referenced());
                fieldGeneratorPrecipitationDay.have_value = false;
              }
            if (fieldGeneratorPrecipitationNight.have_value)
              {
                result->setPrecipitationNight(fieldGeneratorPrecipitationNight.value.referenced());
                fieldGeneratorPrecipitationNight.have_value = false;
              }
            if (fieldGeneratorDay.have_value)
              {
                result->setDay(fieldGeneratorDay.value.referenced());
                fieldGeneratorDay.have_value = false;
              }
            if (fieldGeneratorNight.have_value)
              {
                result->setNight(fieldGeneratorNight.value.referenced());
                fieldGeneratorNight.have_value = false;
              }
            if (fieldGeneratorSnowTotal.have_value)
              {
                result->setSnowTotal(fieldGeneratorSnowTotal.value.referenced());
                fieldGeneratorSnowTotal.have_value = false;
              }
            if (fieldGeneratorSnowDay.have_value)
              {
                result->setSnowDay(fieldGeneratorSnowDay.value.referenced());
                fieldGeneratorSnowDay.have_value = false;
              }
            if (fieldGeneratorSnowNight.have_value)
              {
                result->setSnowNight(fieldGeneratorSnowNight.value.referenced());
                fieldGeneratorSnowNight.have_value = false;
              }
            if (fieldGeneratorMaxHumidityPct.have_value)
              {
                result->setMaxHumidityPct(fieldGeneratorMaxHumidityPct.value);
                fieldGeneratorMaxHumidityPct.have_value = false;
              }
            if (fieldGeneratorAvgHumidityPct.have_value)
              {
                result->setAvgHumidityPct(fieldGeneratorAvgHumidityPct.value);
                fieldGeneratorAvgHumidityPct.have_value = false;
              }
            if (fieldGeneratorMinHumidityPct.have_value)
              {
                result->setMinHumidityPct(fieldGeneratorMinHumidityPct.value);
                fieldGeneratorMinHumidityPct.have_value = false;
              }
            if (fieldGeneratorMaxWind.have_value)
              {
                result->setMaxWind(fieldGeneratorMaxWind.value.referenced());
                fieldGeneratorMaxWind.have_value = false;
              }
            if (fieldGeneratorAvgWind.have_value)
              {
                result->setAvgWind(fieldGeneratorAvgWind.value.referenced());
                fieldGeneratorAvgWind.have_value = false;
              }
          }
        virtual void handle_result(DailyForecastJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "vg", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'H':
                                if (strcmp(&(field_name[4]), "umidityPct") == 0)
                                    return &fieldGeneratorAvgHumidityPct;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[4]), "ind") == 0)
                                    return &fieldGeneratorAvgWind;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "onditionsImage") == 0)
                        return &fieldGeneratorConditionsImage;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ay") == 0)
                        return &fieldGeneratorDay;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "orecast", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[9]), "ateAndTime") == 0)
                                    return &fieldGeneratorForecastDateAndTime;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[9]), "hortPhrase") == 0)
                                    return &fieldGeneratorForecastShortPhrase;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "ighTemperature") == 0)
                        return &fieldGeneratorHighTemperature;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "owTemperature") == 0)
                        return &fieldGeneratorLowTemperature;
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "x", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'H':
                                        if (strcmp(&(field_name[4]), "umidityPct") == 0)
                                            return &fieldGeneratorMaxHumidityPct;
                                        break;
                                    case 'W':
                                        if (strcmp(&(field_name[4]), "ind") == 0)
                                            return &fieldGeneratorMaxWind;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nHumidityPct") == 0)
                                return &fieldGeneratorMinHumidityPct;
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "onPhase", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'P':
                                        if (strcmp(&(field_name[10]), "ct") == 0)
                                            return &fieldGeneratorMoonPhasePct;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[10]), "ext") == 0)
                                            return &fieldGeneratorMoonPhaseText;
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
                case 'N':
                    if (strcmp(&(field_name[1]), "ight") == 0)
                        return &fieldGeneratorNight;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "r", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'e':
                                if (strncmp(&(field_name[3]), "cipitation", 10) == 0)
                                  {
                                    switch ((unsigned char)(field_name[13]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[14]), "ay") == 0)
                                                return &fieldGeneratorPrecipitationDay;
                                            break;
                                        case 'N':
                                            if (strcmp(&(field_name[14]), "ight") == 0)
                                                return &fieldGeneratorPrecipitationNight;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[14]), "otal") == 0)
                                                return &fieldGeneratorPrecipitationTotal;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
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
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strncmp(&(field_name[2]), "ow", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[5]), "ay") == 0)
                                            return &fieldGeneratorSnowDay;
                                        break;
                                    case 'N':
                                        if (strcmp(&(field_name[5]), "ight") == 0)
                                            return &fieldGeneratorSnowNight;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[5]), "otal") == 0)
                                            return &fieldGeneratorSnowTotal;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strncmp(&(field_name[2]), "n", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'r':
                                        if (strcmp(&(field_name[4]), "iseDateAndTime") == 0)
                                            return &fieldGeneratorSunriseDateAndTime;
                                        break;
                                    case 's':
                                        if (strcmp(&(field_name[4]), "etDateAndTime") == 0)
                                            return &fieldGeneratorSunsetDateAndTime;
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
                case 'W':
                    if (strcmp(&(field_name[1]), "eatherIconURL") == 0)
                        return &fieldGeneratorWeatherIconURL;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorForecastDateAndTime("field \"ForecastDateAndTime\" of the DailyForecast class", ignore_extras), fieldGeneratorSunriseDateAndTime("field \"SunriseDateAndTime\" of the DailyForecast class", ignore_extras), fieldGeneratorSunsetDateAndTime("field \"SunsetDateAndTime\" of the DailyForecast class", ignore_extras), fieldGeneratorMoonPhaseText("field \"MoonPhaseText\" of the DailyForecast class"), fieldGeneratorMoonPhasePct("field \"MoonPhasePct\" of the DailyForecast class"), fieldGeneratorForecastShortPhrase("field \"ForecastShortPhrase\" of the DailyForecast class"), fieldGeneratorWeatherIconURL("field \"WeatherIconURL\" of the DailyForecast class"), fieldGeneratorConditionsImage("field \"ConditionsImage\" of the DailyForecast class", ignore_extras), fieldGeneratorHighTemperature("field \"HighTemperature\" of the DailyForecast class", ignore_extras), fieldGeneratorLowTemperature("field \"LowTemperature\" of the DailyForecast class", ignore_extras), fieldGeneratorProbabilityOfPrecipitationPct("field \"ProbabilityOfPrecipitationPct\" of the DailyForecast class"), fieldGeneratorPrecipitationTotal("field \"PrecipitationTotal\" of the DailyForecast class", ignore_extras), fieldGeneratorPrecipitationDay("field \"PrecipitationDay\" of the DailyForecast class", ignore_extras), fieldGeneratorPrecipitationNight("field \"PrecipitationNight\" of the DailyForecast class", ignore_extras), fieldGeneratorDay("field \"Day\" of the DailyForecast class", ignore_extras), fieldGeneratorNight("field \"Night\" of the DailyForecast class", ignore_extras), fieldGeneratorSnowTotal("field \"SnowTotal\" of the DailyForecast class", ignore_extras), fieldGeneratorSnowDay("field \"SnowDay\" of the DailyForecast class", ignore_extras), fieldGeneratorSnowNight("field \"SnowNight\" of the DailyForecast class", ignore_extras), fieldGeneratorMaxHumidityPct("field \"MaxHumidityPct\" of the DailyForecast class"), fieldGeneratorAvgHumidityPct("field \"AvgHumidityPct\" of the DailyForecast class"), fieldGeneratorMinHumidityPct("field \"MinHumidityPct\" of the DailyForecast class"), fieldGeneratorMaxWind("field \"MaxWind\" of the DailyForecast class", ignore_extras), fieldGeneratorAvgWind("field \"AvgWind\" of the DailyForecast class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DailyForecast class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorForecastDateAndTime.reset();
            fieldGeneratorSunriseDateAndTime.reset();
            fieldGeneratorSunsetDateAndTime.reset();
            fieldGeneratorMoonPhaseText.reset();
            fieldGeneratorMoonPhasePct.reset();
            fieldGeneratorForecastShortPhrase.reset();
            fieldGeneratorWeatherIconURL.reset();
            fieldGeneratorConditionsImage.reset();
            fieldGeneratorHighTemperature.reset();
            fieldGeneratorLowTemperature.reset();
            fieldGeneratorProbabilityOfPrecipitationPct.reset();
            fieldGeneratorPrecipitationTotal.reset();
            fieldGeneratorPrecipitationDay.reset();
            fieldGeneratorPrecipitationNight.reset();
            fieldGeneratorDay.reset();
            fieldGeneratorNight.reset();
            fieldGeneratorSnowTotal.reset();
            fieldGeneratorSnowDay.reset();
            fieldGeneratorSnowNight.reset();
            fieldGeneratorMaxHumidityPct.reset();
            fieldGeneratorAvgHumidityPct.reset();
            fieldGeneratorMinHumidityPct.reset();
            fieldGeneratorMaxWind.reset();
            fieldGeneratorAvgWind.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DAILYFORECASTJSON_H */
