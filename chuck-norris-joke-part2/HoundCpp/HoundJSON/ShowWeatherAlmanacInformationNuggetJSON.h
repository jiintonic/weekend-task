/* file "ShowWeatherAlmanacInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWWEATHERALMANACINFORMATIONNUGGETJSON_H
#define SHOWWEATHERALMANACINFORMATIONNUGGETJSON_H

#pragma interface

#include "WeatherInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "RegEx.h"
#include "AttributionJSON.h"
#include "MapLocationJSON.h"
#include "AlertJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowWeatherAlmanacInformationNuggetJSON : public WeatherInformationNuggetJSON
  {
  public:
    class TypeNormalHighTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNormalHighTemperatureJSON(const TypeNormalHighTemperatureJSON &);
        TypeNormalHighTemperatureJSON & operator=(const TypeNormalHighTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNormalHighTemperatureJSON(void);
        virtual ~TypeNormalHighTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeNormalHighTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNormalHighTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNormalHighTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNormalHighTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNormalHighTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNormalHighTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeNormalHighTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNormalHighTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNormalHighTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeNormalHighTemperatureAppendPair(key, new_component);
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

        static TypeNormalHighTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNormalHighTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNormalHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNormalHighTemperatureJSON>, TypeNormalHighTemperatureJSON *, bool> generator("Type TypeNormalHighTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeNormalHighTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNormalHighTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNormalHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNormalHighTemperatureJSON>, TypeNormalHighTemperatureJSON *, bool> generator("Type TypeNormalHighTemperature", ignore_extras);
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
                TypeNormalHighTemperatureJSON *result = new TypeNormalHighTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeNormalHighTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNormalHighTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNormalHighTemperatureJSON *result)
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
            virtual void handle_result(TypeNormalHighTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeNormalHighTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNormalHighTemperature class");
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
    class TypeNormalLowTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNormalLowTemperatureJSON(const TypeNormalLowTemperatureJSON &);
        TypeNormalLowTemperatureJSON & operator=(const TypeNormalLowTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNormalLowTemperatureJSON(void);
        virtual ~TypeNormalLowTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeNormalLowTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNormalLowTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNormalLowTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNormalLowTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNormalLowTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNormalLowTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeNormalLowTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNormalLowTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNormalLowTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeNormalLowTemperatureAppendPair(key, new_component);
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

        static TypeNormalLowTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNormalLowTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNormalLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNormalLowTemperatureJSON>, TypeNormalLowTemperatureJSON *, bool> generator("Type TypeNormalLowTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeNormalLowTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNormalLowTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNormalLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNormalLowTemperatureJSON>, TypeNormalLowTemperatureJSON *, bool> generator("Type TypeNormalLowTemperature", ignore_extras);
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
                TypeNormalLowTemperatureJSON *result = new TypeNormalLowTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeNormalLowTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNormalLowTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNormalLowTemperatureJSON *result)
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
            virtual void handle_result(TypeNormalLowTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeNormalLowTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNormalLowTemperature class");
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
    class TypeRecordHighTemperatureJSON : public ReferenceCounted
      {
      public:
        static RegEx expressionYear;

      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        bool flagHasYear;
        std::string storeYear;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeRecordHighTemperatureJSON(const TypeRecordHighTemperatureJSON &);
        TypeRecordHighTemperatureJSON & operator=(const TypeRecordHighTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeRecordHighTemperatureJSON(void);
        virtual ~TypeRecordHighTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;
        bool  hasYear(void) const;
        std::string  getYear(void);
        const std::string  getYear(void) const;

        virtual size_t extraTypeRecordHighTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeRecordHighTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeRecordHighTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeRecordHighTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeRecordHighTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeRecordHighTemperatureLookup(const char *field_name) const
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
        void setYear(std::string new_value)
          {
            flagHasYear = true;
            if (!expressionYear.match(new_value))
                throw("The value is not in the regular expression for field Year of TypeRecordHighTemperatureJSON.");
            storeYear = new_value;
          }
        void unsetYear(void)
          {
            flagHasYear = false;
          }

        virtual void extraTypeRecordHighTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeRecordHighTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeRecordHighTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeRecordHighTemperatureAppendPair(key, new_component);
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
            assert(flagHasYear);
            handler->start_pair("Year");
            handler->string_value(storeYear);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            if (!(hasYear()))
              {
                return "When parsing the object for %what%, the \"Year\" field was missing.";
              }
            return NULL;
          }

        static TypeRecordHighTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeRecordHighTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeRecordHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRecordHighTemperatureJSON>, TypeRecordHighTemperatureJSON *, bool> generator("Type TypeRecordHighTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeRecordHighTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeRecordHighTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeRecordHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRecordHighTemperatureJSON>, TypeRecordHighTemperatureJSON *, bool> generator("Type TypeRecordHighTemperature", ignore_extras);
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
        class FieldGeneratorYear : public JSONStringGenerator
              {
              private:
                RegEx checker;

              protected:
                FieldGeneratorYear(void) : checker("^(1[6-9][0-9][0-9])|(20[0-9][0-9])$")  { }
                void validate(const char *result)
                  {
                    if (!(checker.match(result)))
                        error("The string for %what% doesn't match the required pattern @^(1[6-9][0-9][0-9])|(20[0-9][0-9])$@.");
                  }
              };
            JSONHoldingGenerator<FieldGeneratorYear, std::string, const char * > fieldGeneratorYear;
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
                TypeRecordHighTemperatureJSON *result = new TypeRecordHighTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeRecordHighTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeRecordHighTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeRecordHighTemperatureJSON *result)
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
                if (fieldGeneratorYear.have_value)
                  {
                    result->setYear(fieldGeneratorYear.value);
                    fieldGeneratorYear.have_value = false;
                  }
                else if (!(result->hasYear()))
                  {
                    error("When parsing the object for %what%, the \"Year\" field was missing.");
                  }
              }
            virtual void handle_result(TypeRecordHighTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'V':
                        if (strcmp(&(field_name[1]), "alue") == 0)
                            return &fieldGeneratorValue;
                        break;
                    case 'Y':
                        if (strcmp(&(field_name[1]), "ear") == 0)
                            return &fieldGeneratorYear;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeRecordHighTemperature class", ignore_extras), fieldGeneratorYear("field \"Year\" of the TypeRecordHighTemperature class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeRecordHighTemperature class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorYear.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeRecordLowTemperatureJSON : public ReferenceCounted
      {
      public:
        static RegEx expressionYear;

      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        bool flagHasYear;
        std::string storeYear;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeRecordLowTemperatureJSON(const TypeRecordLowTemperatureJSON &);
        TypeRecordLowTemperatureJSON & operator=(const TypeRecordLowTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeRecordLowTemperatureJSON(void);
        virtual ~TypeRecordLowTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;
        bool  hasYear(void) const;
        std::string  getYear(void);
        const std::string  getYear(void) const;

        virtual size_t extraTypeRecordLowTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeRecordLowTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeRecordLowTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeRecordLowTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeRecordLowTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeRecordLowTemperatureLookup(const char *field_name) const
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
        void setYear(std::string new_value)
          {
            flagHasYear = true;
            if (!expressionYear.match(new_value))
                throw("The value is not in the regular expression for field Year of TypeRecordLowTemperatureJSON.");
            storeYear = new_value;
          }
        void unsetYear(void)
          {
            flagHasYear = false;
          }

        virtual void extraTypeRecordLowTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeRecordLowTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeRecordLowTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeRecordLowTemperatureAppendPair(key, new_component);
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
            assert(flagHasYear);
            handler->start_pair("Year");
            handler->string_value(storeYear);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            if (!(hasYear()))
              {
                return "When parsing the object for %what%, the \"Year\" field was missing.";
              }
            return NULL;
          }

        static TypeRecordLowTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeRecordLowTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeRecordLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRecordLowTemperatureJSON>, TypeRecordLowTemperatureJSON *, bool> generator("Type TypeRecordLowTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeRecordLowTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeRecordLowTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeRecordLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRecordLowTemperatureJSON>, TypeRecordLowTemperatureJSON *, bool> generator("Type TypeRecordLowTemperature", ignore_extras);
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
        class FieldGeneratorYear : public JSONStringGenerator
              {
              private:
                RegEx checker;

              protected:
                FieldGeneratorYear(void) : checker("^(1[6-9][0-9][0-9])|(20[0-9][0-9])$")  { }
                void validate(const char *result)
                  {
                    if (!(checker.match(result)))
                        error("The string for %what% doesn't match the required pattern @^(1[6-9][0-9][0-9])|(20[0-9][0-9])$@.");
                  }
              };
            JSONHoldingGenerator<FieldGeneratorYear, std::string, const char * > fieldGeneratorYear;
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
                TypeRecordLowTemperatureJSON *result = new TypeRecordLowTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeRecordLowTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeRecordLowTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeRecordLowTemperatureJSON *result)
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
                if (fieldGeneratorYear.have_value)
                  {
                    result->setYear(fieldGeneratorYear.value);
                    fieldGeneratorYear.have_value = false;
                  }
                else if (!(result->hasYear()))
                  {
                    error("When parsing the object for %what%, the \"Year\" field was missing.");
                  }
              }
            virtual void handle_result(TypeRecordLowTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'V':
                        if (strcmp(&(field_name[1]), "alue") == 0)
                            return &fieldGeneratorValue;
                        break;
                    case 'Y':
                        if (strcmp(&(field_name[1]), "ear") == 0)
                            return &fieldGeneratorYear;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeRecordLowTemperature class", ignore_extras), fieldGeneratorYear("field \"Year\" of the TypeRecordLowTemperature class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeRecordLowTemperature class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorYear.reset();
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
    bool flagHasRequestedAlmanacAttribute;
    std::string storeRequestedAlmanacAttribute;
    bool flagHasAirportCode;
    std::string storeAirportCode;
    bool flagHasNormalHighTemperature;
    TypeNormalHighTemperatureJSON * storeNormalHighTemperature;
    bool flagHasNormalLowTemperature;
    TypeNormalLowTemperatureJSON * storeNormalLowTemperature;
    bool flagHasRecordHighTemperature;
    TypeRecordHighTemperatureJSON * storeRecordHighTemperature;
    bool flagHasRecordLowTemperature;
    TypeRecordLowTemperatureJSON * storeRecordLowTemperature;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowWeatherAlmanacInformationNuggetJSON(const ShowWeatherAlmanacInformationNuggetJSON &);
    ShowWeatherAlmanacInformationNuggetJSON & operator=(const ShowWeatherAlmanacInformationNuggetJSON &other);

    JSONValue * extraAttributionToJSON(void) const;
    JSONValue * extraLocationToJSON(void) const;
    JSONValue * extraAlertsToJSON(void) const;
    JSONValue * extraRequestedAlmanacAttributeToJSON(void) const;
    JSONValue * extraAirportCodeToJSON(void) const;
    JSONValue * extraNormalHighTemperatureToJSON(void) const;
    JSONValue * extraNormalLowTemperatureToJSON(void) const;
    JSONValue * extraRecordHighTemperatureToJSON(void) const;
    JSONValue * extraRecordLowTemperatureToJSON(void) const;

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlerts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAlmanacAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAirportCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNormalHighTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNormalLowTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecordHighTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecordLowTemperature(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowWeatherAlmanacInformationNuggetJSON(void);
    virtual ~ShowWeatherAlmanacInformationNuggetJSON(void);
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
    bool  hasRequestedAlmanacAttribute(void) const;
    std::string  getRequestedAlmanacAttribute(void);
    const std::string  getRequestedAlmanacAttribute(void) const;
    bool  hasAirportCode(void) const;
    std::string  getAirportCode(void);
    const std::string  getAirportCode(void) const;
    bool  hasNormalHighTemperature(void) const;
    TypeNormalHighTemperatureJSON *  getNormalHighTemperature(void);
    const TypeNormalHighTemperatureJSON *  getNormalHighTemperature(void) const;
    bool  hasNormalLowTemperature(void) const;
    TypeNormalLowTemperatureJSON *  getNormalLowTemperature(void);
    const TypeNormalLowTemperatureJSON *  getNormalLowTemperature(void) const;
    bool  hasRecordHighTemperature(void) const;
    TypeRecordHighTemperatureJSON *  getRecordHighTemperature(void);
    const TypeRecordHighTemperatureJSON *  getRecordHighTemperature(void) const;
    bool  hasRecordLowTemperature(void) const;
    TypeRecordLowTemperatureJSON *  getRecordLowTemperature(void);
    const TypeRecordLowTemperatureJSON *  getRecordLowTemperature(void) const;

    virtual size_t extraShowWeatherAlmanacInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowWeatherAlmanacInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowWeatherAlmanacInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowWeatherAlmanacInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowWeatherAlmanacInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowWeatherAlmanacInformationNuggetLookup(const char *field_name) const
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
        if (flagHasRequestedAlmanacAttribute)
            ++result;
        if (flagHasAirportCode)
            ++result;
        if (flagHasNormalHighTemperature)
            ++result;
        if (flagHasNormalLowTemperature)
            ++result;
        if (flagHasRecordHighTemperature)
            ++result;
        if (flagHasRecordLowTemperature)
            ++result;
        result += extraShowWeatherAlmanacInformationNuggetComponentCount();
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
        if (flagHasRequestedAlmanacAttribute)
          {
            if (remainder == 0)
                return "RequestedAlmanacAttribute";
            --remainder;
          }
        if (flagHasAirportCode)
          {
            if (remainder == 0)
                return "AirportCode";
            --remainder;
          }
        if (flagHasNormalHighTemperature)
          {
            if (remainder == 0)
                return "NormalHighTemperature";
            --remainder;
          }
        if (flagHasNormalLowTemperature)
          {
            if (remainder == 0)
                return "NormalLowTemperature";
            --remainder;
          }
        if (flagHasRecordHighTemperature)
          {
            if (remainder == 0)
                return "RecordHighTemperature";
            --remainder;
          }
        if (flagHasRecordLowTemperature)
          {
            if (remainder == 0)
                return "RecordLowTemperature";
            --remainder;
          }
        return extraShowWeatherAlmanacInformationNuggetComponentKey(remainder);
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
        if (flagHasRequestedAlmanacAttribute)
          {
            if (remainder == 0)
                return extraRequestedAlmanacAttributeToJSON();
            --remainder;
          }
        if (flagHasAirportCode)
          {
            if (remainder == 0)
                return extraAirportCodeToJSON();
            --remainder;
          }
        if (flagHasNormalHighTemperature)
          {
            if (remainder == 0)
                return extraNormalHighTemperatureToJSON();
            --remainder;
          }
        if (flagHasNormalLowTemperature)
          {
            if (remainder == 0)
                return extraNormalLowTemperatureToJSON();
            --remainder;
          }
        if (flagHasRecordHighTemperature)
          {
            if (remainder == 0)
                return extraRecordHighTemperatureToJSON();
            --remainder;
          }
        if (flagHasRecordLowTemperature)
          {
            if (remainder == 0)
                return extraRecordLowTemperatureToJSON();
            --remainder;
          }
        return extraShowWeatherAlmanacInformationNuggetComponentValue(remainder);
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
        if (flagHasRequestedAlmanacAttribute)
          {
            if (remainder == 0)
                return extraRequestedAlmanacAttributeToJSON();
            --remainder;
          }
        if (flagHasAirportCode)
          {
            if (remainder == 0)
                return extraAirportCodeToJSON();
            --remainder;
          }
        if (flagHasNormalHighTemperature)
          {
            if (remainder == 0)
                return extraNormalHighTemperatureToJSON();
            --remainder;
          }
        if (flagHasNormalLowTemperature)
          {
            if (remainder == 0)
                return extraNormalLowTemperatureToJSON();
            --remainder;
          }
        if (flagHasRecordHighTemperature)
          {
            if (remainder == 0)
                return extraRecordHighTemperatureToJSON();
            --remainder;
          }
        if (flagHasRecordLowTemperature)
          {
            if (remainder == 0)
                return extraRecordLowTemperatureToJSON();
            --remainder;
          }
        return extraShowWeatherAlmanacInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraWeatherInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "rportCode") == 0)
                            return (flagHasAirportCode ? extraAirportCodeToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "erts") == 0)
                            return (flagHasAlerts ? extraAlertsToJSON() : NULL);
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "tribution") == 0)
                            return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'N':
                if (strncmp(&(field_name[1]), "ormal", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'H':
                            if (strcmp(&(field_name[7]), "ighTemperature") == 0)
                                return (flagHasNormalHighTemperature ? extraNormalHighTemperatureToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[7]), "owTemperature") == 0)
                                return (flagHasNormalLowTemperature ? extraNormalLowTemperatureToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'c':
                            if (strncmp(&(field_name[3]), "ord", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'H':
                                        if (strcmp(&(field_name[7]), "ighTemperature") == 0)
                                            return (flagHasRecordHighTemperature ? extraRecordHighTemperatureToJSON() : NULL);
                                        break;
                                    case 'L':
                                        if (strcmp(&(field_name[7]), "owTemperature") == 0)
                                            return (flagHasRecordLowTemperature ? extraRecordLowTemperatureToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'q':
                            if (strcmp(&(field_name[3]), "uestedAlmanacAttribute") == 0)
                                return (flagHasRequestedAlmanacAttribute ? extraRequestedAlmanacAttributeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraShowWeatherAlmanacInformationNuggetLookup(field_name);
      }
    const JSONValue *extraWeatherInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "rportCode") == 0)
                            return (flagHasAirportCode ? extraAirportCodeToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "erts") == 0)
                            return (flagHasAlerts ? extraAlertsToJSON() : NULL);
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "tribution") == 0)
                            return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'N':
                if (strncmp(&(field_name[1]), "ormal", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'H':
                            if (strcmp(&(field_name[7]), "ighTemperature") == 0)
                                return (flagHasNormalHighTemperature ? extraNormalHighTemperatureToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[7]), "owTemperature") == 0)
                                return (flagHasNormalLowTemperature ? extraNormalLowTemperatureToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'c':
                            if (strncmp(&(field_name[3]), "ord", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'H':
                                        if (strcmp(&(field_name[7]), "ighTemperature") == 0)
                                            return (flagHasRecordHighTemperature ? extraRecordHighTemperatureToJSON() : NULL);
                                        break;
                                    case 'L':
                                        if (strcmp(&(field_name[7]), "owTemperature") == 0)
                                            return (flagHasRecordLowTemperature ? extraRecordLowTemperatureToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'q':
                            if (strcmp(&(field_name[3]), "uestedAlmanacAttribute") == 0)
                                return (flagHasRequestedAlmanacAttribute ? extraRequestedAlmanacAttributeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraShowWeatherAlmanacInformationNuggetLookup(field_name);
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
            for (size_t num2 = 0; num2 < storeAlerts.size(); ++num2)
              {
                storeAlerts[num2]->remove_reference();
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
            for (size_t num3 = 0; num3 < storeAlerts.size(); ++num3)
              {
                storeAlerts[num3]->remove_reference();
              }
          }
        flagHasAlerts = false;
        storeAlerts.clear();
      }
    void setRequestedAlmanacAttribute(std::string new_value)
      {
        flagHasRequestedAlmanacAttribute = true;
        storeRequestedAlmanacAttribute = new_value;
      }
    void unsetRequestedAlmanacAttribute(void)
      {
        flagHasRequestedAlmanacAttribute = false;
      }
    void setAirportCode(std::string new_value)
      {
        flagHasAirportCode = true;
        storeAirportCode = new_value;
      }
    void unsetAirportCode(void)
      {
        flagHasAirportCode = false;
      }
    void setNormalHighTemperature(TypeNormalHighTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNormalHighTemperature)
          {
            storeNormalHighTemperature->remove_reference();
          }
        flagHasNormalHighTemperature = true;
        storeNormalHighTemperature = new_value;
      }
    void unsetNormalHighTemperature(void)
      {
        if (flagHasNormalHighTemperature)
          {
            storeNormalHighTemperature->remove_reference();
          }
        flagHasNormalHighTemperature = false;
      }
    void setNormalLowTemperature(TypeNormalLowTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNormalLowTemperature)
          {
            storeNormalLowTemperature->remove_reference();
          }
        flagHasNormalLowTemperature = true;
        storeNormalLowTemperature = new_value;
      }
    void unsetNormalLowTemperature(void)
      {
        if (flagHasNormalLowTemperature)
          {
            storeNormalLowTemperature->remove_reference();
          }
        flagHasNormalLowTemperature = false;
      }
    void setRecordHighTemperature(TypeRecordHighTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRecordHighTemperature)
          {
            storeRecordHighTemperature->remove_reference();
          }
        flagHasRecordHighTemperature = true;
        storeRecordHighTemperature = new_value;
      }
    void unsetRecordHighTemperature(void)
      {
        if (flagHasRecordHighTemperature)
          {
            storeRecordHighTemperature->remove_reference();
          }
        flagHasRecordHighTemperature = false;
      }
    void setRecordLowTemperature(TypeRecordLowTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRecordLowTemperature)
          {
            storeRecordLowTemperature->remove_reference();
          }
        flagHasRecordLowTemperature = true;
        storeRecordLowTemperature = new_value;
      }
    void unsetRecordLowTemperature(void)
      {
        if (flagHasRecordLowTemperature)
          {
            storeRecordLowTemperature->remove_reference();
          }
        flagHasRecordLowTemperature = false;
      }

    virtual void extraShowWeatherAlmanacInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowWeatherAlmanacInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowWeatherAlmanacInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowWeatherAlmanacInformationNuggetAppendPair(key, new_component);
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
                    case 'i':
                        if (strcmp(&(key[2]), "rportCode") == 0)
                            {
                            fromJSONAirportCode(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "erts") == 0)
                            {
                            fromJSONAlerts(new_component, false);
                            return;
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
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strncmp(&(key[1]), "ormal", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'H':
                            if (strcmp(&(key[7]), "ighTemperature") == 0)
                                {
                                fromJSONNormalHighTemperature(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[7]), "owTemperature") == 0)
                                {
                                fromJSONNormalLowTemperature(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strncmp(&(key[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'c':
                            if (strncmp(&(key[3]), "ord", 3) == 0)
                              {
                                switch ((unsigned char)(key[6]))
                                  {
                                    case 'H':
                                        if (strcmp(&(key[7]), "ighTemperature") == 0)
                                            {
                                            fromJSONRecordHighTemperature(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'L':
                                        if (strcmp(&(key[7]), "owTemperature") == 0)
                                            {
                                            fromJSONRecordLowTemperature(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'q':
                            if (strcmp(&(key[3]), "uestedAlmanacAttribute") == 0)
                                {
                                fromJSONRequestedAlmanacAttribute(new_component, false);
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
        extraShowWeatherAlmanacInformationNuggetAppendPair(key, new_component);
      }
    void extraWeatherInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strcmp(&(key[2]), "rportCode") == 0)
                            {
                            fromJSONAirportCode(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "erts") == 0)
                            {
                            fromJSONAlerts(new_component, false);
                            return;
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
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strncmp(&(key[1]), "ormal", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'H':
                            if (strcmp(&(key[7]), "ighTemperature") == 0)
                                {
                                fromJSONNormalHighTemperature(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[7]), "owTemperature") == 0)
                                {
                                fromJSONNormalLowTemperature(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strncmp(&(key[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'c':
                            if (strncmp(&(key[3]), "ord", 3) == 0)
                              {
                                switch ((unsigned char)(key[6]))
                                  {
                                    case 'H':
                                        if (strcmp(&(key[7]), "ighTemperature") == 0)
                                            {
                                            fromJSONRecordHighTemperature(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'L':
                                        if (strcmp(&(key[7]), "owTemperature") == 0)
                                            {
                                            fromJSONRecordLowTemperature(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'q':
                            if (strcmp(&(key[3]), "uestedAlmanacAttribute") == 0)
                                {
                                fromJSONRequestedAlmanacAttribute(new_component, false);
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
        extraShowWeatherAlmanacInformationNuggetSetField(key, new_component);
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
        assert(flagHasRequestedAlmanacAttribute);
        handler->start_pair("RequestedAlmanacAttribute");
        handler->string_value(storeRequestedAlmanacAttribute);
        assert(flagHasAirportCode);
        handler->start_pair("AirportCode");
        handler->string_value(storeAirportCode);
        assert(flagHasNormalHighTemperature);
        handler->start_pair("NormalHighTemperature");
        storeNormalHighTemperature->write_as_json(handler);
        assert(flagHasNormalLowTemperature);
        handler->start_pair("NormalLowTemperature");
        storeNormalLowTemperature->write_as_json(handler);
        assert(flagHasRecordHighTemperature);
        handler->start_pair("RecordHighTemperature");
        storeRecordHighTemperature->write_as_json(handler);
        assert(flagHasRecordLowTemperature);
        handler->start_pair("RecordLowTemperature");
        storeRecordLowTemperature->write_as_json(handler);
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
        if (!(hasRequestedAlmanacAttribute()))
          {
            return "When parsing the object for %what%, the \"RequestedAlmanacAttribute\" field was missing.";
          }
        if (!(hasAirportCode()))
          {
            return "When parsing the object for %what%, the \"AirportCode\" field was missing.";
          }
        if (!(hasNormalHighTemperature()))
          {
            return "When parsing the object for %what%, the \"NormalHighTemperature\" field was missing.";
          }
        if (!(hasNormalLowTemperature()))
          {
            return "When parsing the object for %what%, the \"NormalLowTemperature\" field was missing.";
          }
        if (!(hasRecordHighTemperature()))
          {
            return "When parsing the object for %what%, the \"RecordHighTemperature\" field was missing.";
          }
        if (!(hasRecordLowTemperature()))
          {
            return "When parsing the object for %what%, the \"RecordLowTemperature\" field was missing.";
          }
        return NULL;
      }

    static ShowWeatherAlmanacInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowWeatherAlmanacInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowWeatherAlmanacInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherAlmanacInformationNuggetJSON>, ShowWeatherAlmanacInformationNuggetJSON *, bool> generator("Type ShowWeatherAlmanacInformationNugget", ignore_extras);
            parse_json_value(text, "Text for ShowWeatherAlmanacInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowWeatherAlmanacInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowWeatherAlmanacInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherAlmanacInformationNuggetJSON>, ShowWeatherAlmanacInformationNuggetJSON *, bool> generator("Type ShowWeatherAlmanacInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedAlmanacAttribute;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAirportCode;
        JSONHoldingGenerator<TypeNormalHighTemperatureJSON::Generator, RCHandle<TypeNormalHighTemperatureJSON>, TypeNormalHighTemperatureJSON *, bool > fieldGeneratorNormalHighTemperature;
        JSONHoldingGenerator<TypeNormalLowTemperatureJSON::Generator, RCHandle<TypeNormalLowTemperatureJSON>, TypeNormalLowTemperatureJSON *, bool > fieldGeneratorNormalLowTemperature;
        JSONHoldingGenerator<TypeRecordHighTemperatureJSON::Generator, RCHandle<TypeRecordHighTemperatureJSON>, TypeRecordHighTemperatureJSON *, bool > fieldGeneratorRecordHighTemperature;
        JSONHoldingGenerator<TypeRecordLowTemperatureJSON::Generator, RCHandle<TypeRecordLowTemperatureJSON>, TypeRecordLowTemperatureJSON *, bool > fieldGeneratorRecordLowTemperature;
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
            if (!(strcmp(getWeatherInformationNuggetJSONKey().c_str(), "ShowWeatherAlmanac") == 0))
                throw("The key field has a value other than `ShowWeatherAlmanac'.");
            ShowWeatherAlmanacInformationNuggetJSON *result = new ShowWeatherAlmanacInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowWeatherAlmanacInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowWeatherAlmanacInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(WeatherInformationNuggetJSON *new_result)
          {
            handle_result((ShowWeatherAlmanacInformationNuggetJSON *)new_result);
          }
        void finish(ShowWeatherAlmanacInformationNuggetJSON *result)
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
            if (fieldGeneratorRequestedAlmanacAttribute.have_value)
              {
                result->setRequestedAlmanacAttribute(fieldGeneratorRequestedAlmanacAttribute.value);
                fieldGeneratorRequestedAlmanacAttribute.have_value = false;
              }
            else if (!(result->hasRequestedAlmanacAttribute()))
              {
                error("When parsing the object for %what%, the \"RequestedAlmanacAttribute\" field was missing.");
              }
            if (fieldGeneratorAirportCode.have_value)
              {
                result->setAirportCode(fieldGeneratorAirportCode.value);
                fieldGeneratorAirportCode.have_value = false;
              }
            else if (!(result->hasAirportCode()))
              {
                error("When parsing the object for %what%, the \"AirportCode\" field was missing.");
              }
            if (fieldGeneratorNormalHighTemperature.have_value)
              {
                result->setNormalHighTemperature(fieldGeneratorNormalHighTemperature.value.referenced());
                fieldGeneratorNormalHighTemperature.have_value = false;
              }
            else if (!(result->hasNormalHighTemperature()))
              {
                error("When parsing the object for %what%, the \"NormalHighTemperature\" field was missing.");
              }
            if (fieldGeneratorNormalLowTemperature.have_value)
              {
                result->setNormalLowTemperature(fieldGeneratorNormalLowTemperature.value.referenced());
                fieldGeneratorNormalLowTemperature.have_value = false;
              }
            else if (!(result->hasNormalLowTemperature()))
              {
                error("When parsing the object for %what%, the \"NormalLowTemperature\" field was missing.");
              }
            if (fieldGeneratorRecordHighTemperature.have_value)
              {
                result->setRecordHighTemperature(fieldGeneratorRecordHighTemperature.value.referenced());
                fieldGeneratorRecordHighTemperature.have_value = false;
              }
            else if (!(result->hasRecordHighTemperature()))
              {
                error("When parsing the object for %what%, the \"RecordHighTemperature\" field was missing.");
              }
            if (fieldGeneratorRecordLowTemperature.have_value)
              {
                result->setRecordLowTemperature(fieldGeneratorRecordLowTemperature.value.referenced());
                fieldGeneratorRecordLowTemperature.have_value = false;
              }
            else if (!(result->hasRecordLowTemperature()))
              {
                error("When parsing the object for %what%, the \"RecordLowTemperature\" field was missing.");
              }
            WeatherInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowWeatherAlmanacInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "rportCode") == 0)
                                return &fieldGeneratorAirportCode;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "erts") == 0)
                                return &fieldGeneratorAlerts;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "tribution") == 0)
                                return &fieldGeneratorAttribution;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'N':
                    if (strncmp(&(field_name[1]), "ormal", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'H':
                                if (strcmp(&(field_name[7]), "ighTemperature") == 0)
                                    return &fieldGeneratorNormalHighTemperature;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[7]), "owTemperature") == 0)
                                    return &fieldGeneratorNormalLowTemperature;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'c':
                                if (strncmp(&(field_name[3]), "ord", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[6]))
                                      {
                                        case 'H':
                                            if (strcmp(&(field_name[7]), "ighTemperature") == 0)
                                                return &fieldGeneratorRecordHighTemperature;
                                            break;
                                        case 'L':
                                            if (strcmp(&(field_name[7]), "owTemperature") == 0)
                                                return &fieldGeneratorRecordLowTemperature;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'q':
                                if (strcmp(&(field_name[3]), "uestedAlmanacAttribute") == 0)
                                    return &fieldGeneratorRequestedAlmanacAttribute;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return WeatherInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : WeatherInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorAttribution("field \"Attribution\" of the ShowWeatherAlmanacInformationNugget class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the ShowWeatherAlmanacInformationNugget class", ignore_extras), fieldGeneratorAlerts("field \"Alerts\" of the ShowWeatherAlmanacInformationNugget class", ignore_extras), fieldGeneratorRequestedAlmanacAttribute("field \"RequestedAlmanacAttribute\" of the ShowWeatherAlmanacInformationNugget class"), fieldGeneratorAirportCode("field \"AirportCode\" of the ShowWeatherAlmanacInformationNugget class"), fieldGeneratorNormalHighTemperature("field \"NormalHighTemperature\" of the ShowWeatherAlmanacInformationNugget class", ignore_extras), fieldGeneratorNormalLowTemperature("field \"NormalLowTemperature\" of the ShowWeatherAlmanacInformationNugget class", ignore_extras), fieldGeneratorRecordHighTemperature("field \"RecordHighTemperature\" of the ShowWeatherAlmanacInformationNugget class", ignore_extras), fieldGeneratorRecordLowTemperature("field \"RecordLowTemperature\" of the ShowWeatherAlmanacInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowWeatherAlmanacInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAttribution.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorAlerts.reset();
            fieldGeneratorRequestedAlmanacAttribute.reset();
            fieldGeneratorAirportCode.reset();
            fieldGeneratorNormalHighTemperature.reset();
            fieldGeneratorNormalLowTemperature.reset();
            fieldGeneratorRecordHighTemperature.reset();
            fieldGeneratorRecordLowTemperature.reset();
            WeatherInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWWEATHERALMANACINFORMATIONNUGGETJSON_H */
