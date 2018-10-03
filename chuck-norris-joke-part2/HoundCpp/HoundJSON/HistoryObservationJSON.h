/* file "HistoryObservationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HISTORYOBSERVATIONJSON_H
#define HISTORYOBSERVATIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include <stdint.h>
#include "DateAndOrTimeJSON.h"
#include "WeatherImageJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_VisibilityJSON.h"
#include "UnitsValue_PressureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HistoryObservationJSON : public ReferenceCounted
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
    class TypePrecipitationJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePrecipitationJSON(const TypePrecipitationJSON &);
        TypePrecipitationJSON & operator=(const TypePrecipitationJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePrecipitationJSON(void);
        virtual ~TypePrecipitationJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypePrecipitationComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePrecipitationComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePrecipitationComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePrecipitationComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePrecipitationLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePrecipitationLookup(const char *field_name) const
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

        virtual void extraTypePrecipitationAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePrecipitationSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePrecipitationLookup(key);
            if (old_field == NULL)
              {
                extraTypePrecipitationAppendPair(key, new_component);
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

        static TypePrecipitationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePrecipitationJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationJSON>, TypePrecipitationJSON *, bool> generator("Type TypePrecipitation", ignore_extras);
                parse_json_value(text, "Text for TypePrecipitationJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePrecipitationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationJSON>, TypePrecipitationJSON *, bool> generator("Type TypePrecipitation", ignore_extras);
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
                TypePrecipitationJSON *result = new TypePrecipitationJSON();
                assert(result != NULL);
                RCHandle<TypePrecipitationJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePrecipitationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePrecipitationJSON *result)
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
            virtual void handle_result(TypePrecipitationJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypePrecipitation class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePrecipitation class");
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
    bool flagHasObservationDateAndTime;
    DateAndOrTimeJSON * storeObservationDateAndTime;
    bool flagHasConditionsShortPhrase;
    std::string storeConditionsShortPhrase;
    bool flagHasWeatherIconURL;
    std::string storeWeatherIconURL;
    bool flagHasConditionsImage;
    WeatherImageJSON * storeConditionsImage;
    bool flagHasTemperature;
    TypeTemperatureJSON * storeTemperature;
    bool flagHasDewPoint;
    TypeDewPointJSON * storeDewPoint;
    bool flagHasHumidityPct;
    uint8_t storeHumidityPct;
    bool flagHasWind;
    TypeWindJSON * storeWind;
    bool flagHasWindGust;
    TypeWindGustJSON * storeWindGust;
    bool flagHasVisibility;
    TypeVisibilityJSON * storeVisibility;
    bool flagHasBarometricPressure;
    TypeBarometricPressureJSON * storeBarometricPressure;
    bool flagHasHeatIndex;
    TypeHeatIndexJSON * storeHeatIndex;
    bool flagHasWindchill;
    TypeWindchillJSON * storeWindchill;
    bool flagHasPrecipitation;
    TypePrecipitationJSON * storePrecipitation;
    bool flagHasFog;
    bool storeFog;
    bool flagHasRain;
    bool storeRain;
    bool flagHasSnow;
    bool storeSnow;
    bool flagHasHail;
    bool storeHail;
    bool flagHasThunder;
    bool storeThunder;
    bool flagHasTornado;
    bool storeTornado;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HistoryObservationJSON(const HistoryObservationJSON &);
    HistoryObservationJSON & operator=(const HistoryObservationJSON &other);

    void  fromJSONObservationDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConditionsShortPhrase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHumidityPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWindGust(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVisibility(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBarometricPressure(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHeatIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWindchill(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrecipitation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFog(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRain(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSnow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONThunder(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTornado(JSONValue *json_value, bool ignore_extras = false);


  public:
    HistoryObservationJSON(void);
    virtual ~HistoryObservationJSON(void);
    bool  hasObservationDateAndTime(void) const;
    DateAndOrTimeJSON *  getObservationDateAndTime(void);
    const DateAndOrTimeJSON *  getObservationDateAndTime(void) const;
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
    bool  hasDewPoint(void) const;
    TypeDewPointJSON *  getDewPoint(void);
    const TypeDewPointJSON *  getDewPoint(void) const;
    bool  hasHumidityPct(void) const;
    uint8_t  getHumidityPct(void);
    const uint8_t  getHumidityPct(void) const;
    bool  hasWind(void) const;
    TypeWindJSON *  getWind(void);
    const TypeWindJSON *  getWind(void) const;
    bool  hasWindGust(void) const;
    TypeWindGustJSON *  getWindGust(void);
    const TypeWindGustJSON *  getWindGust(void) const;
    bool  hasVisibility(void) const;
    TypeVisibilityJSON *  getVisibility(void);
    const TypeVisibilityJSON *  getVisibility(void) const;
    bool  hasBarometricPressure(void) const;
    TypeBarometricPressureJSON *  getBarometricPressure(void);
    const TypeBarometricPressureJSON *  getBarometricPressure(void) const;
    bool  hasHeatIndex(void) const;
    TypeHeatIndexJSON *  getHeatIndex(void);
    const TypeHeatIndexJSON *  getHeatIndex(void) const;
    bool  hasWindchill(void) const;
    TypeWindchillJSON *  getWindchill(void);
    const TypeWindchillJSON *  getWindchill(void) const;
    bool  hasPrecipitation(void) const;
    TypePrecipitationJSON *  getPrecipitation(void);
    const TypePrecipitationJSON *  getPrecipitation(void) const;
    bool  hasFog(void) const;
    bool  getFog(void);
    const bool  getFog(void) const;
    bool  hasRain(void) const;
    bool  getRain(void);
    const bool  getRain(void) const;
    bool  hasSnow(void) const;
    bool  getSnow(void);
    const bool  getSnow(void) const;
    bool  hasHail(void) const;
    bool  getHail(void);
    const bool  getHail(void) const;
    bool  hasThunder(void) const;
    bool  getThunder(void);
    const bool  getThunder(void) const;
    bool  hasTornado(void) const;
    bool  getTornado(void);
    const bool  getTornado(void) const;

    virtual size_t extraHistoryObservationComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHistoryObservationComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHistoryObservationComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHistoryObservationComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHistoryObservationLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHistoryObservationLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setHumidityPct(uint8_t new_value)
      {
        flagHasHumidityPct = true;
        if (new_value < 0)
            throw("The value for field HumidityPct of HistoryObservationJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field HumidityPct of HistoryObservationJSON is greater than the upper bound (100) for that field.");
        storeHumidityPct = new_value;
      }
    void unsetHumidityPct(void)
      {
        flagHasHumidityPct = false;
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
    void setPrecipitation(TypePrecipitationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrecipitation)
          {
            storePrecipitation->remove_reference();
          }
        flagHasPrecipitation = true;
        storePrecipitation = new_value;
      }
    void unsetPrecipitation(void)
      {
        if (flagHasPrecipitation)
          {
            storePrecipitation->remove_reference();
          }
        flagHasPrecipitation = false;
      }
    void setFog(bool new_value)
      {
        flagHasFog = true;
        storeFog = new_value;
      }
    void unsetFog(void)
      {
        flagHasFog = false;
      }
    void setRain(bool new_value)
      {
        flagHasRain = true;
        storeRain = new_value;
      }
    void unsetRain(void)
      {
        flagHasRain = false;
      }
    void setSnow(bool new_value)
      {
        flagHasSnow = true;
        storeSnow = new_value;
      }
    void unsetSnow(void)
      {
        flagHasSnow = false;
      }
    void setHail(bool new_value)
      {
        flagHasHail = true;
        storeHail = new_value;
      }
    void unsetHail(void)
      {
        flagHasHail = false;
      }
    void setThunder(bool new_value)
      {
        flagHasThunder = true;
        storeThunder = new_value;
      }
    void unsetThunder(void)
      {
        flagHasThunder = false;
      }
    void setTornado(bool new_value)
      {
        flagHasTornado = true;
        storeTornado = new_value;
      }
    void unsetTornado(void)
      {
        flagHasTornado = false;
      }

    virtual void extraHistoryObservationAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHistoryObservationSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHistoryObservationLookup(key);
        if (old_field == NULL)
          {
            extraHistoryObservationAppendPair(key, new_component);
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
        assert(flagHasObservationDateAndTime);
        handler->start_pair("ObservationDateAndTime");
        storeObservationDateAndTime->write_as_json(handler);
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
        if (flagHasDewPoint)
          {
            handler->start_pair("DewPoint");
            storeDewPoint->write_as_json(handler);
          }
        if (flagHasHumidityPct)
          {
            handler->start_pair("HumidityPct");
            handler->number_value(storeHumidityPct);
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
        if (flagHasVisibility)
          {
            handler->start_pair("Visibility");
            storeVisibility->write_as_json(handler);
          }
        if (flagHasBarometricPressure)
          {
            handler->start_pair("BarometricPressure");
            storeBarometricPressure->write_as_json(handler);
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
        if (flagHasPrecipitation)
          {
            handler->start_pair("Precipitation");
            storePrecipitation->write_as_json(handler);
          }
        if (flagHasFog)
          {
            handler->start_pair("Fog");
            handler->boolean_value(storeFog);
          }
        if (flagHasRain)
          {
            handler->start_pair("Rain");
            handler->boolean_value(storeRain);
          }
        if (flagHasSnow)
          {
            handler->start_pair("Snow");
            handler->boolean_value(storeSnow);
          }
        if (flagHasHail)
          {
            handler->start_pair("Hail");
            handler->boolean_value(storeHail);
          }
        if (flagHasThunder)
          {
            handler->start_pair("Thunder");
            handler->boolean_value(storeThunder);
          }
        if (flagHasTornado)
          {
            handler->start_pair("Tornado");
            handler->boolean_value(storeTornado);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasObservationDateAndTime()))
          {
            return "When parsing the object for %what%, the \"ObservationDateAndTime\" field was missing.";
          }
        return NULL;
      }

    static HistoryObservationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HistoryObservationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HistoryObservationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HistoryObservationJSON>, HistoryObservationJSON *, bool> generator("Type HistoryObservation", ignore_extras);
            parse_json_value(text, "Text for HistoryObservationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HistoryObservationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HistoryObservationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HistoryObservationJSON>, HistoryObservationJSON *, bool> generator("Type HistoryObservation", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorObservationDateAndTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorConditionsShortPhrase;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherIconURL;
        JSONHoldingGenerator<WeatherImageJSON::Generator, RCHandle<WeatherImageJSON>, WeatherImageJSON *, bool > fieldGeneratorConditionsImage;
        JSONHoldingGenerator<TypeTemperatureJSON::Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool > fieldGeneratorTemperature;
        JSONHoldingGenerator<TypeDewPointJSON::Generator, RCHandle<TypeDewPointJSON>, TypeDewPointJSON *, bool > fieldGeneratorDewPoint;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorHumidityPct;
        JSONHoldingGenerator<TypeWindJSON::Generator, RCHandle<TypeWindJSON>, TypeWindJSON *, bool > fieldGeneratorWind;
        JSONHoldingGenerator<TypeWindGustJSON::Generator, RCHandle<TypeWindGustJSON>, TypeWindGustJSON *, bool > fieldGeneratorWindGust;
        JSONHoldingGenerator<TypeVisibilityJSON::Generator, RCHandle<TypeVisibilityJSON>, TypeVisibilityJSON *, bool > fieldGeneratorVisibility;
        JSONHoldingGenerator<TypeBarometricPressureJSON::Generator, RCHandle<TypeBarometricPressureJSON>, TypeBarometricPressureJSON *, bool > fieldGeneratorBarometricPressure;
        JSONHoldingGenerator<TypeHeatIndexJSON::Generator, RCHandle<TypeHeatIndexJSON>, TypeHeatIndexJSON *, bool > fieldGeneratorHeatIndex;
        JSONHoldingGenerator<TypeWindchillJSON::Generator, RCHandle<TypeWindchillJSON>, TypeWindchillJSON *, bool > fieldGeneratorWindchill;
        JSONHoldingGenerator<TypePrecipitationJSON::Generator, RCHandle<TypePrecipitationJSON>, TypePrecipitationJSON *, bool > fieldGeneratorPrecipitation;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorFog;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRain;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSnow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHail;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorThunder;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTornado;
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
            HistoryObservationJSON *result = new HistoryObservationJSON();
            assert(result != NULL);
            RCHandle<HistoryObservationJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHistoryObservationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HistoryObservationJSON *result)
          {
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
            if (fieldGeneratorDewPoint.have_value)
              {
                result->setDewPoint(fieldGeneratorDewPoint.value.referenced());
                fieldGeneratorDewPoint.have_value = false;
              }
            if (fieldGeneratorHumidityPct.have_value)
              {
                result->setHumidityPct(fieldGeneratorHumidityPct.value);
                fieldGeneratorHumidityPct.have_value = false;
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
            if (fieldGeneratorVisibility.have_value)
              {
                result->setVisibility(fieldGeneratorVisibility.value.referenced());
                fieldGeneratorVisibility.have_value = false;
              }
            if (fieldGeneratorBarometricPressure.have_value)
              {
                result->setBarometricPressure(fieldGeneratorBarometricPressure.value.referenced());
                fieldGeneratorBarometricPressure.have_value = false;
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
            if (fieldGeneratorPrecipitation.have_value)
              {
                result->setPrecipitation(fieldGeneratorPrecipitation.value.referenced());
                fieldGeneratorPrecipitation.have_value = false;
              }
            if (fieldGeneratorFog.have_value)
              {
                result->setFog(fieldGeneratorFog.value);
                fieldGeneratorFog.have_value = false;
              }
            if (fieldGeneratorRain.have_value)
              {
                result->setRain(fieldGeneratorRain.value);
                fieldGeneratorRain.have_value = false;
              }
            if (fieldGeneratorSnow.have_value)
              {
                result->setSnow(fieldGeneratorSnow.value);
                fieldGeneratorSnow.have_value = false;
              }
            if (fieldGeneratorHail.have_value)
              {
                result->setHail(fieldGeneratorHail.value);
                fieldGeneratorHail.have_value = false;
              }
            if (fieldGeneratorThunder.have_value)
              {
                result->setThunder(fieldGeneratorThunder.value);
                fieldGeneratorThunder.have_value = false;
              }
            if (fieldGeneratorTornado.have_value)
              {
                result->setTornado(fieldGeneratorTornado.value);
                fieldGeneratorTornado.have_value = false;
              }
          }
        virtual void handle_result(HistoryObservationJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "arometricPressure") == 0)
                        return &fieldGeneratorBarometricPressure;
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "onditions", 9) == 0)
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
                case 'D':
                    if (strcmp(&(field_name[1]), "ewPoint") == 0)
                        return &fieldGeneratorDewPoint;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "og") == 0)
                        return &fieldGeneratorFog;
                    break;
                case 'H':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "il") == 0)
                                return &fieldGeneratorHail;
                            break;
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
                case 'O':
                    if (strcmp(&(field_name[1]), "bservationDateAndTime") == 0)
                        return &fieldGeneratorObservationDateAndTime;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "recipitation") == 0)
                        return &fieldGeneratorPrecipitation;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ain") == 0)
                        return &fieldGeneratorRain;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "now") == 0)
                        return &fieldGeneratorSnow;
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "mperature") == 0)
                                return &fieldGeneratorTemperature;
                            break;
                        case 'h':
                            if (strcmp(&(field_name[2]), "under") == 0)
                                return &fieldGeneratorThunder;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "rnado") == 0)
                                return &fieldGeneratorTornado;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "isibility") == 0)
                        return &fieldGeneratorVisibility;
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
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorObservationDateAndTime("field \"ObservationDateAndTime\" of the HistoryObservation class", ignore_extras), fieldGeneratorConditionsShortPhrase("field \"ConditionsShortPhrase\" of the HistoryObservation class"), fieldGeneratorWeatherIconURL("field \"WeatherIconURL\" of the HistoryObservation class"), fieldGeneratorConditionsImage("field \"ConditionsImage\" of the HistoryObservation class", ignore_extras), fieldGeneratorTemperature("field \"Temperature\" of the HistoryObservation class", ignore_extras), fieldGeneratorDewPoint("field \"DewPoint\" of the HistoryObservation class", ignore_extras), fieldGeneratorHumidityPct("field \"HumidityPct\" of the HistoryObservation class"), fieldGeneratorWind("field \"Wind\" of the HistoryObservation class", ignore_extras), fieldGeneratorWindGust("field \"WindGust\" of the HistoryObservation class", ignore_extras), fieldGeneratorVisibility("field \"Visibility\" of the HistoryObservation class", ignore_extras), fieldGeneratorBarometricPressure("field \"BarometricPressure\" of the HistoryObservation class", ignore_extras), fieldGeneratorHeatIndex("field \"HeatIndex\" of the HistoryObservation class", ignore_extras), fieldGeneratorWindchill("field \"Windchill\" of the HistoryObservation class", ignore_extras), fieldGeneratorPrecipitation("field \"Precipitation\" of the HistoryObservation class", ignore_extras), fieldGeneratorFog("field \"Fog\" of the HistoryObservation class"), fieldGeneratorRain("field \"Rain\" of the HistoryObservation class"), fieldGeneratorSnow("field \"Snow\" of the HistoryObservation class"), fieldGeneratorHail("field \"Hail\" of the HistoryObservation class"), fieldGeneratorThunder("field \"Thunder\" of the HistoryObservation class"), fieldGeneratorTornado("field \"Tornado\" of the HistoryObservation class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HistoryObservation class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorObservationDateAndTime.reset();
            fieldGeneratorConditionsShortPhrase.reset();
            fieldGeneratorWeatherIconURL.reset();
            fieldGeneratorConditionsImage.reset();
            fieldGeneratorTemperature.reset();
            fieldGeneratorDewPoint.reset();
            fieldGeneratorHumidityPct.reset();
            fieldGeneratorWind.reset();
            fieldGeneratorWindGust.reset();
            fieldGeneratorVisibility.reset();
            fieldGeneratorBarometricPressure.reset();
            fieldGeneratorHeatIndex.reset();
            fieldGeneratorWindchill.reset();
            fieldGeneratorPrecipitation.reset();
            fieldGeneratorFog.reset();
            fieldGeneratorRain.reset();
            fieldGeneratorSnow.reset();
            fieldGeneratorHail.reset();
            fieldGeneratorThunder.reset();
            fieldGeneratorTornado.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HISTORYOBSERVATIONJSON_H */
