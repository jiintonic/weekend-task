/* file "PlannerJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PLANNERJSON_H
#define PLANNERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_PlannerPrecipitationJSON.h"
#include "UnitsValue_PlannerPrecipitationJSON.h"
#include "UnitsValue_PlannerPrecipitationJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
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


class PlannerJSON : public ReferenceCounted
  {
  public:
    class TypeMinHighTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMinHighTemperatureJSON(const TypeMinHighTemperatureJSON &);
        TypeMinHighTemperatureJSON & operator=(const TypeMinHighTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMinHighTemperatureJSON(void);
        virtual ~TypeMinHighTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMinHighTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMinHighTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMinHighTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMinHighTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMinHighTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMinHighTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeMinHighTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMinHighTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMinHighTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeMinHighTemperatureAppendPair(key, new_component);
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

        static TypeMinHighTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMinHighTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMinHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinHighTemperatureJSON>, TypeMinHighTemperatureJSON *, bool> generator("Type TypeMinHighTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeMinHighTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMinHighTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMinHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinHighTemperatureJSON>, TypeMinHighTemperatureJSON *, bool> generator("Type TypeMinHighTemperature", ignore_extras);
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
                TypeMinHighTemperatureJSON *result = new TypeMinHighTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeMinHighTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMinHighTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMinHighTemperatureJSON *result)
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
            virtual void handle_result(TypeMinHighTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinHighTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMinHighTemperature class");
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
    class TypeAvgHighTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAvgHighTemperatureJSON(const TypeAvgHighTemperatureJSON &);
        TypeAvgHighTemperatureJSON & operator=(const TypeAvgHighTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAvgHighTemperatureJSON(void);
        virtual ~TypeAvgHighTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeAvgHighTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAvgHighTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAvgHighTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAvgHighTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAvgHighTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAvgHighTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeAvgHighTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAvgHighTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAvgHighTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeAvgHighTemperatureAppendPair(key, new_component);
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

        static TypeAvgHighTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAvgHighTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAvgHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgHighTemperatureJSON>, TypeAvgHighTemperatureJSON *, bool> generator("Type TypeAvgHighTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeAvgHighTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAvgHighTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAvgHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgHighTemperatureJSON>, TypeAvgHighTemperatureJSON *, bool> generator("Type TypeAvgHighTemperature", ignore_extras);
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
                TypeAvgHighTemperatureJSON *result = new TypeAvgHighTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeAvgHighTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAvgHighTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAvgHighTemperatureJSON *result)
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
            virtual void handle_result(TypeAvgHighTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgHighTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAvgHighTemperature class");
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
    class TypeMaxHighTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMaxHighTemperatureJSON(const TypeMaxHighTemperatureJSON &);
        TypeMaxHighTemperatureJSON & operator=(const TypeMaxHighTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMaxHighTemperatureJSON(void);
        virtual ~TypeMaxHighTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMaxHighTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMaxHighTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMaxHighTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMaxHighTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMaxHighTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMaxHighTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeMaxHighTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMaxHighTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMaxHighTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeMaxHighTemperatureAppendPair(key, new_component);
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

        static TypeMaxHighTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMaxHighTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMaxHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxHighTemperatureJSON>, TypeMaxHighTemperatureJSON *, bool> generator("Type TypeMaxHighTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeMaxHighTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMaxHighTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMaxHighTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxHighTemperatureJSON>, TypeMaxHighTemperatureJSON *, bool> generator("Type TypeMaxHighTemperature", ignore_extras);
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
                TypeMaxHighTemperatureJSON *result = new TypeMaxHighTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeMaxHighTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMaxHighTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMaxHighTemperatureJSON *result)
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
            virtual void handle_result(TypeMaxHighTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxHighTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMaxHighTemperature class");
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
    class TypeMinLowTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMinLowTemperatureJSON(const TypeMinLowTemperatureJSON &);
        TypeMinLowTemperatureJSON & operator=(const TypeMinLowTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMinLowTemperatureJSON(void);
        virtual ~TypeMinLowTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMinLowTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMinLowTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMinLowTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMinLowTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMinLowTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMinLowTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeMinLowTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMinLowTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMinLowTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeMinLowTemperatureAppendPair(key, new_component);
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

        static TypeMinLowTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMinLowTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMinLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinLowTemperatureJSON>, TypeMinLowTemperatureJSON *, bool> generator("Type TypeMinLowTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeMinLowTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMinLowTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMinLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinLowTemperatureJSON>, TypeMinLowTemperatureJSON *, bool> generator("Type TypeMinLowTemperature", ignore_extras);
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
                TypeMinLowTemperatureJSON *result = new TypeMinLowTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeMinLowTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMinLowTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMinLowTemperatureJSON *result)
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
            virtual void handle_result(TypeMinLowTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinLowTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMinLowTemperature class");
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
    class TypeAvgLowTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAvgLowTemperatureJSON(const TypeAvgLowTemperatureJSON &);
        TypeAvgLowTemperatureJSON & operator=(const TypeAvgLowTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAvgLowTemperatureJSON(void);
        virtual ~TypeAvgLowTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeAvgLowTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAvgLowTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAvgLowTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAvgLowTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAvgLowTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAvgLowTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeAvgLowTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAvgLowTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAvgLowTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeAvgLowTemperatureAppendPair(key, new_component);
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

        static TypeAvgLowTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAvgLowTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAvgLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgLowTemperatureJSON>, TypeAvgLowTemperatureJSON *, bool> generator("Type TypeAvgLowTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeAvgLowTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAvgLowTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAvgLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgLowTemperatureJSON>, TypeAvgLowTemperatureJSON *, bool> generator("Type TypeAvgLowTemperature", ignore_extras);
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
                TypeAvgLowTemperatureJSON *result = new TypeAvgLowTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeAvgLowTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAvgLowTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAvgLowTemperatureJSON *result)
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
            virtual void handle_result(TypeAvgLowTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgLowTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAvgLowTemperature class");
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
    class TypeMaxLowTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMaxLowTemperatureJSON(const TypeMaxLowTemperatureJSON &);
        TypeMaxLowTemperatureJSON & operator=(const TypeMaxLowTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMaxLowTemperatureJSON(void);
        virtual ~TypeMaxLowTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMaxLowTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMaxLowTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMaxLowTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMaxLowTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMaxLowTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMaxLowTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeMaxLowTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMaxLowTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMaxLowTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeMaxLowTemperatureAppendPair(key, new_component);
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

        static TypeMaxLowTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMaxLowTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMaxLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxLowTemperatureJSON>, TypeMaxLowTemperatureJSON *, bool> generator("Type TypeMaxLowTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeMaxLowTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMaxLowTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMaxLowTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxLowTemperatureJSON>, TypeMaxLowTemperatureJSON *, bool> generator("Type TypeMaxLowTemperature", ignore_extras);
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
                TypeMaxLowTemperatureJSON *result = new TypeMaxLowTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeMaxLowTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMaxLowTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMaxLowTemperatureJSON *result)
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
            virtual void handle_result(TypeMaxLowTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxLowTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMaxLowTemperature class");
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
    class TypeAvgTemperatureJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAvgTemperatureJSON(const TypeAvgTemperatureJSON &);
        TypeAvgTemperatureJSON & operator=(const TypeAvgTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAvgTemperatureJSON(void);
        virtual ~TypeAvgTemperatureJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeAvgTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAvgTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAvgTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAvgTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAvgTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAvgTemperatureLookup(const char *field_name) const
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

        virtual void extraTypeAvgTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAvgTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAvgTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeAvgTemperatureAppendPair(key, new_component);
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

        static TypeAvgTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAvgTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAvgTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgTemperatureJSON>, TypeAvgTemperatureJSON *, bool> generator("Type TypeAvgTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeAvgTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAvgTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAvgTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgTemperatureJSON>, TypeAvgTemperatureJSON *, bool> generator("Type TypeAvgTemperature", ignore_extras);
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
                TypeAvgTemperatureJSON *result = new TypeAvgTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeAvgTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAvgTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAvgTemperatureJSON *result)
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
            virtual void handle_result(TypeAvgTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAvgTemperature class");
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
    class TypeMinPrecipitationJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PlannerPrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMinPrecipitationJSON(const TypeMinPrecipitationJSON &);
        TypeMinPrecipitationJSON & operator=(const TypeMinPrecipitationJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMinPrecipitationJSON(void);
        virtual ~TypeMinPrecipitationJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PlannerPrecipitationJSON *  getValue(void);
        const UnitsValue_PlannerPrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypeMinPrecipitationComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMinPrecipitationComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMinPrecipitationComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMinPrecipitationComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMinPrecipitationLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMinPrecipitationLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_PlannerPrecipitationJSON * new_value)
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

        virtual void extraTypeMinPrecipitationAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMinPrecipitationSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMinPrecipitationLookup(key);
            if (old_field == NULL)
              {
                extraTypeMinPrecipitationAppendPair(key, new_component);
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

        static TypeMinPrecipitationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMinPrecipitationJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMinPrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinPrecipitationJSON>, TypeMinPrecipitationJSON *, bool> generator("Type TypeMinPrecipitation", ignore_extras);
                parse_json_value(text, "Text for TypeMinPrecipitationJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMinPrecipitationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMinPrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinPrecipitationJSON>, TypeMinPrecipitationJSON *, bool> generator("Type TypeMinPrecipitation", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_PlannerPrecipitationJSON::Generator, RCHandle<UnitsValue_PlannerPrecipitationJSON>, UnitsValue_PlannerPrecipitationJSON *, bool > fieldGeneratorValue;
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
                TypeMinPrecipitationJSON *result = new TypeMinPrecipitationJSON();
                assert(result != NULL);
                RCHandle<TypeMinPrecipitationJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMinPrecipitationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMinPrecipitationJSON *result)
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
            virtual void handle_result(TypeMinPrecipitationJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinPrecipitation class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMinPrecipitation class");
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
    class TypeAvgPrecipitationJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PlannerPrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAvgPrecipitationJSON(const TypeAvgPrecipitationJSON &);
        TypeAvgPrecipitationJSON & operator=(const TypeAvgPrecipitationJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAvgPrecipitationJSON(void);
        virtual ~TypeAvgPrecipitationJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PlannerPrecipitationJSON *  getValue(void);
        const UnitsValue_PlannerPrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypeAvgPrecipitationComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAvgPrecipitationComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAvgPrecipitationComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAvgPrecipitationComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAvgPrecipitationLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAvgPrecipitationLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_PlannerPrecipitationJSON * new_value)
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

        virtual void extraTypeAvgPrecipitationAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAvgPrecipitationSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAvgPrecipitationLookup(key);
            if (old_field == NULL)
              {
                extraTypeAvgPrecipitationAppendPair(key, new_component);
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

        static TypeAvgPrecipitationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAvgPrecipitationJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAvgPrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgPrecipitationJSON>, TypeAvgPrecipitationJSON *, bool> generator("Type TypeAvgPrecipitation", ignore_extras);
                parse_json_value(text, "Text for TypeAvgPrecipitationJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAvgPrecipitationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAvgPrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgPrecipitationJSON>, TypeAvgPrecipitationJSON *, bool> generator("Type TypeAvgPrecipitation", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_PlannerPrecipitationJSON::Generator, RCHandle<UnitsValue_PlannerPrecipitationJSON>, UnitsValue_PlannerPrecipitationJSON *, bool > fieldGeneratorValue;
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
                TypeAvgPrecipitationJSON *result = new TypeAvgPrecipitationJSON();
                assert(result != NULL);
                RCHandle<TypeAvgPrecipitationJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAvgPrecipitationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAvgPrecipitationJSON *result)
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
            virtual void handle_result(TypeAvgPrecipitationJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgPrecipitation class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAvgPrecipitation class");
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
    class TypeMaxPrecipitationJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PlannerPrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMaxPrecipitationJSON(const TypeMaxPrecipitationJSON &);
        TypeMaxPrecipitationJSON & operator=(const TypeMaxPrecipitationJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMaxPrecipitationJSON(void);
        virtual ~TypeMaxPrecipitationJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PlannerPrecipitationJSON *  getValue(void);
        const UnitsValue_PlannerPrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypeMaxPrecipitationComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMaxPrecipitationComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMaxPrecipitationComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMaxPrecipitationComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMaxPrecipitationLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMaxPrecipitationLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_PlannerPrecipitationJSON * new_value)
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

        virtual void extraTypeMaxPrecipitationAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMaxPrecipitationSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMaxPrecipitationLookup(key);
            if (old_field == NULL)
              {
                extraTypeMaxPrecipitationAppendPair(key, new_component);
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

        static TypeMaxPrecipitationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMaxPrecipitationJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMaxPrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxPrecipitationJSON>, TypeMaxPrecipitationJSON *, bool> generator("Type TypeMaxPrecipitation", ignore_extras);
                parse_json_value(text, "Text for TypeMaxPrecipitationJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMaxPrecipitationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMaxPrecipitationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxPrecipitationJSON>, TypeMaxPrecipitationJSON *, bool> generator("Type TypeMaxPrecipitation", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_PlannerPrecipitationJSON::Generator, RCHandle<UnitsValue_PlannerPrecipitationJSON>, UnitsValue_PlannerPrecipitationJSON *, bool > fieldGeneratorValue;
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
                TypeMaxPrecipitationJSON *result = new TypeMaxPrecipitationJSON();
                assert(result != NULL);
                RCHandle<TypeMaxPrecipitationJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMaxPrecipitationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMaxPrecipitationJSON *result)
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
            virtual void handle_result(TypeMaxPrecipitationJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxPrecipitation class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMaxPrecipitation class");
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
    class TypeMinHighDewPointJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMinHighDewPointJSON(const TypeMinHighDewPointJSON &);
        TypeMinHighDewPointJSON & operator=(const TypeMinHighDewPointJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMinHighDewPointJSON(void);
        virtual ~TypeMinHighDewPointJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMinHighDewPointComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMinHighDewPointComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMinHighDewPointComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMinHighDewPointComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMinHighDewPointLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMinHighDewPointLookup(const char *field_name) const
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

        virtual void extraTypeMinHighDewPointAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMinHighDewPointSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMinHighDewPointLookup(key);
            if (old_field == NULL)
              {
                extraTypeMinHighDewPointAppendPair(key, new_component);
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

        static TypeMinHighDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMinHighDewPointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMinHighDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinHighDewPointJSON>, TypeMinHighDewPointJSON *, bool> generator("Type TypeMinHighDewPoint", ignore_extras);
                parse_json_value(text, "Text for TypeMinHighDewPointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMinHighDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMinHighDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinHighDewPointJSON>, TypeMinHighDewPointJSON *, bool> generator("Type TypeMinHighDewPoint", ignore_extras);
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
                TypeMinHighDewPointJSON *result = new TypeMinHighDewPointJSON();
                assert(result != NULL);
                RCHandle<TypeMinHighDewPointJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMinHighDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMinHighDewPointJSON *result)
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
            virtual void handle_result(TypeMinHighDewPointJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinHighDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMinHighDewPoint class");
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
    class TypeAvgHighDewPointJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAvgHighDewPointJSON(const TypeAvgHighDewPointJSON &);
        TypeAvgHighDewPointJSON & operator=(const TypeAvgHighDewPointJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAvgHighDewPointJSON(void);
        virtual ~TypeAvgHighDewPointJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeAvgHighDewPointComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAvgHighDewPointComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAvgHighDewPointComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAvgHighDewPointComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAvgHighDewPointLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAvgHighDewPointLookup(const char *field_name) const
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

        virtual void extraTypeAvgHighDewPointAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAvgHighDewPointSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAvgHighDewPointLookup(key);
            if (old_field == NULL)
              {
                extraTypeAvgHighDewPointAppendPair(key, new_component);
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

        static TypeAvgHighDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAvgHighDewPointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAvgHighDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgHighDewPointJSON>, TypeAvgHighDewPointJSON *, bool> generator("Type TypeAvgHighDewPoint", ignore_extras);
                parse_json_value(text, "Text for TypeAvgHighDewPointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAvgHighDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAvgHighDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgHighDewPointJSON>, TypeAvgHighDewPointJSON *, bool> generator("Type TypeAvgHighDewPoint", ignore_extras);
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
                TypeAvgHighDewPointJSON *result = new TypeAvgHighDewPointJSON();
                assert(result != NULL);
                RCHandle<TypeAvgHighDewPointJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAvgHighDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAvgHighDewPointJSON *result)
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
            virtual void handle_result(TypeAvgHighDewPointJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgHighDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAvgHighDewPoint class");
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
    class TypeMaxHighDewPointJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMaxHighDewPointJSON(const TypeMaxHighDewPointJSON &);
        TypeMaxHighDewPointJSON & operator=(const TypeMaxHighDewPointJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMaxHighDewPointJSON(void);
        virtual ~TypeMaxHighDewPointJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMaxHighDewPointComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMaxHighDewPointComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMaxHighDewPointComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMaxHighDewPointComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMaxHighDewPointLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMaxHighDewPointLookup(const char *field_name) const
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

        virtual void extraTypeMaxHighDewPointAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMaxHighDewPointSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMaxHighDewPointLookup(key);
            if (old_field == NULL)
              {
                extraTypeMaxHighDewPointAppendPair(key, new_component);
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

        static TypeMaxHighDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMaxHighDewPointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMaxHighDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxHighDewPointJSON>, TypeMaxHighDewPointJSON *, bool> generator("Type TypeMaxHighDewPoint", ignore_extras);
                parse_json_value(text, "Text for TypeMaxHighDewPointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMaxHighDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMaxHighDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxHighDewPointJSON>, TypeMaxHighDewPointJSON *, bool> generator("Type TypeMaxHighDewPoint", ignore_extras);
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
                TypeMaxHighDewPointJSON *result = new TypeMaxHighDewPointJSON();
                assert(result != NULL);
                RCHandle<TypeMaxHighDewPointJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMaxHighDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMaxHighDewPointJSON *result)
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
            virtual void handle_result(TypeMaxHighDewPointJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxHighDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMaxHighDewPoint class");
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
    class TypeMinLowDewPointJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMinLowDewPointJSON(const TypeMinLowDewPointJSON &);
        TypeMinLowDewPointJSON & operator=(const TypeMinLowDewPointJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMinLowDewPointJSON(void);
        virtual ~TypeMinLowDewPointJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMinLowDewPointComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMinLowDewPointComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMinLowDewPointComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMinLowDewPointComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMinLowDewPointLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMinLowDewPointLookup(const char *field_name) const
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

        virtual void extraTypeMinLowDewPointAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMinLowDewPointSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMinLowDewPointLookup(key);
            if (old_field == NULL)
              {
                extraTypeMinLowDewPointAppendPair(key, new_component);
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

        static TypeMinLowDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMinLowDewPointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMinLowDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinLowDewPointJSON>, TypeMinLowDewPointJSON *, bool> generator("Type TypeMinLowDewPoint", ignore_extras);
                parse_json_value(text, "Text for TypeMinLowDewPointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMinLowDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMinLowDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMinLowDewPointJSON>, TypeMinLowDewPointJSON *, bool> generator("Type TypeMinLowDewPoint", ignore_extras);
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
                TypeMinLowDewPointJSON *result = new TypeMinLowDewPointJSON();
                assert(result != NULL);
                RCHandle<TypeMinLowDewPointJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMinLowDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMinLowDewPointJSON *result)
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
            virtual void handle_result(TypeMinLowDewPointJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinLowDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMinLowDewPoint class");
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
    class TypeAvgLowDewPointJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAvgLowDewPointJSON(const TypeAvgLowDewPointJSON &);
        TypeAvgLowDewPointJSON & operator=(const TypeAvgLowDewPointJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAvgLowDewPointJSON(void);
        virtual ~TypeAvgLowDewPointJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeAvgLowDewPointComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAvgLowDewPointComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAvgLowDewPointComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAvgLowDewPointComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAvgLowDewPointLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAvgLowDewPointLookup(const char *field_name) const
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

        virtual void extraTypeAvgLowDewPointAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAvgLowDewPointSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAvgLowDewPointLookup(key);
            if (old_field == NULL)
              {
                extraTypeAvgLowDewPointAppendPair(key, new_component);
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

        static TypeAvgLowDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAvgLowDewPointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAvgLowDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgLowDewPointJSON>, TypeAvgLowDewPointJSON *, bool> generator("Type TypeAvgLowDewPoint", ignore_extras);
                parse_json_value(text, "Text for TypeAvgLowDewPointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAvgLowDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAvgLowDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAvgLowDewPointJSON>, TypeAvgLowDewPointJSON *, bool> generator("Type TypeAvgLowDewPoint", ignore_extras);
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
                TypeAvgLowDewPointJSON *result = new TypeAvgLowDewPointJSON();
                assert(result != NULL);
                RCHandle<TypeAvgLowDewPointJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAvgLowDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAvgLowDewPointJSON *result)
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
            virtual void handle_result(TypeAvgLowDewPointJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgLowDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAvgLowDewPoint class");
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
    class TypeMaxLowDewPointJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_TemperatureJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMaxLowDewPointJSON(const TypeMaxLowDewPointJSON &);
        TypeMaxLowDewPointJSON & operator=(const TypeMaxLowDewPointJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMaxLowDewPointJSON(void);
        virtual ~TypeMaxLowDewPointJSON(void);
        bool  hasValue(void) const;
        UnitsValue_TemperatureJSON *  getValue(void);
        const UnitsValue_TemperatureJSON *  getValue(void) const;

        virtual size_t extraTypeMaxLowDewPointComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMaxLowDewPointComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMaxLowDewPointComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMaxLowDewPointComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMaxLowDewPointLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMaxLowDewPointLookup(const char *field_name) const
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

        virtual void extraTypeMaxLowDewPointAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMaxLowDewPointSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMaxLowDewPointLookup(key);
            if (old_field == NULL)
              {
                extraTypeMaxLowDewPointAppendPair(key, new_component);
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

        static TypeMaxLowDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMaxLowDewPointJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMaxLowDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxLowDewPointJSON>, TypeMaxLowDewPointJSON *, bool> generator("Type TypeMaxLowDewPoint", ignore_extras);
                parse_json_value(text, "Text for TypeMaxLowDewPointJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMaxLowDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMaxLowDewPointJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMaxLowDewPointJSON>, TypeMaxLowDewPointJSON *, bool> generator("Type TypeMaxLowDewPoint", ignore_extras);
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
                TypeMaxLowDewPointJSON *result = new TypeMaxLowDewPointJSON();
                assert(result != NULL);
                RCHandle<TypeMaxLowDewPointJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMaxLowDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMaxLowDewPointJSON *result)
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
            virtual void handle_result(TypeMaxLowDewPointJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxLowDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMaxLowDewPoint class");
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
    class TypeChanceOfJSON : public ReferenceCounted
      {
      private:
        bool flagHasKey;
        std::string storeKey;
        bool flagHasName;
        std::string storeName;
        bool flagHasDescription;
        std::string storeDescription;
        bool flagHasPercentage;
        uint8_t storePercentage;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeChanceOfJSON(const TypeChanceOfJSON &);
        TypeChanceOfJSON & operator=(const TypeChanceOfJSON &other);

        void  fromJSONKey(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPercentage(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeChanceOfJSON(void);
        virtual ~TypeChanceOfJSON(void);
        bool  hasKey(void) const;
        std::string  getKey(void);
        const std::string  getKey(void) const;
        bool  hasName(void) const;
        std::string  getName(void);
        const std::string  getName(void) const;
        bool  hasDescription(void) const;
        std::string  getDescription(void);
        const std::string  getDescription(void) const;
        bool  hasPercentage(void) const;
        uint8_t  getPercentage(void);
        const uint8_t  getPercentage(void) const;

        virtual size_t extraTypeChanceOfComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeChanceOfComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeChanceOfComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeChanceOfComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeChanceOfLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeChanceOfLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setKey(std::string new_value)
          {
            flagHasKey = true;
            storeKey = new_value;
          }
        void unsetKey(void)
          {
            flagHasKey = false;
          }
        void setName(std::string new_value)
          {
            flagHasName = true;
            storeName = new_value;
          }
        void unsetName(void)
          {
            flagHasName = false;
          }
        void setDescription(std::string new_value)
          {
            flagHasDescription = true;
            storeDescription = new_value;
          }
        void unsetDescription(void)
          {
            flagHasDescription = false;
          }
        void setPercentage(uint8_t new_value)
          {
            flagHasPercentage = true;
            if (new_value < 0)
                throw("The value for field Percentage of TypeChanceOfJSON is less than the lower bound (0) for that field.");
            if (new_value > 100)
                throw("The value for field Percentage of TypeChanceOfJSON is greater than the upper bound (100) for that field.");
            storePercentage = new_value;
          }
        void unsetPercentage(void)
          {
            flagHasPercentage = false;
          }

        virtual void extraTypeChanceOfAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeChanceOfSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeChanceOfLookup(key);
            if (old_field == NULL)
              {
                extraTypeChanceOfAppendPair(key, new_component);
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
            assert(flagHasKey);
            handler->start_pair("Key");
            handler->string_value(storeKey);
            assert(flagHasName);
            handler->start_pair("Name");
            handler->string_value(storeName);
            if (flagHasDescription)
              {
                handler->start_pair("Description");
                handler->string_value(storeDescription);
              }
            assert(flagHasPercentage);
            handler->start_pair("Percentage");
            handler->number_value(storePercentage);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasKey()))
              {
                return "When parsing the object for %what%, the \"Key\" field was missing.";
              }
            if (!(hasName()))
              {
                return "When parsing the object for %what%, the \"Name\" field was missing.";
              }
            if (!(hasPercentage()))
              {
                return "When parsing the object for %what%, the \"Percentage\" field was missing.";
              }
            return NULL;
          }

        static TypeChanceOfJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeChanceOfJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeChanceOfJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeChanceOfJSON>, TypeChanceOfJSON *, bool> generator("Type TypeChanceOf", ignore_extras);
                parse_json_value(text, "Text for TypeChanceOfJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeChanceOfJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeChanceOfJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeChanceOfJSON>, TypeChanceOfJSON *, bool> generator("Type TypeChanceOf", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorKey;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorPercentage;
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
                TypeChanceOfJSON *result = new TypeChanceOfJSON();
                assert(result != NULL);
                RCHandle<TypeChanceOfJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeChanceOfAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeChanceOfJSON *result)
              {
                if (fieldGeneratorKey.have_value)
                  {
                    result->setKey(fieldGeneratorKey.value);
                    fieldGeneratorKey.have_value = false;
                  }
                else if (!(result->hasKey()))
                  {
                    error("When parsing the object for %what%, the \"Key\" field was missing.");
                  }
                if (fieldGeneratorName.have_value)
                  {
                    result->setName(fieldGeneratorName.value);
                    fieldGeneratorName.have_value = false;
                  }
                else if (!(result->hasName()))
                  {
                    error("When parsing the object for %what%, the \"Name\" field was missing.");
                  }
                if (fieldGeneratorDescription.have_value)
                  {
                    result->setDescription(fieldGeneratorDescription.value);
                    fieldGeneratorDescription.have_value = false;
                  }
                if (fieldGeneratorPercentage.have_value)
                  {
                    result->setPercentage(fieldGeneratorPercentage.value);
                    fieldGeneratorPercentage.have_value = false;
                  }
                else if (!(result->hasPercentage()))
                  {
                    error("When parsing the object for %what%, the \"Percentage\" field was missing.");
                  }
              }
            virtual void handle_result(TypeChanceOfJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "escription") == 0)
                            return &fieldGeneratorDescription;
                        break;
                    case 'K':
                        if (strcmp(&(field_name[1]), "ey") == 0)
                            return &fieldGeneratorKey;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "ame") == 0)
                            return &fieldGeneratorName;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "ercentage") == 0)
                            return &fieldGeneratorPercentage;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorKey("field \"Key\" of the TypeChanceOf class"), fieldGeneratorName("field \"Name\" of the TypeChanceOf class"), fieldGeneratorDescription("field \"Description\" of the TypeChanceOf class"), fieldGeneratorPercentage("field \"Percentage\" of the TypeChanceOf class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeChanceOf class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorKey.reset();
                fieldGeneratorName.reset();
                fieldGeneratorDescription.reset();
                fieldGeneratorPercentage.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasPlannerStartDateAndTime;
    DateAndOrTimeJSON * storePlannerStartDateAndTime;
    bool flagHasPlannerEndDateAndTime;
    DateAndOrTimeJSON * storePlannerEndDateAndTime;
    bool flagHasMinHighTemperature;
    TypeMinHighTemperatureJSON * storeMinHighTemperature;
    bool flagHasAvgHighTemperature;
    TypeAvgHighTemperatureJSON * storeAvgHighTemperature;
    bool flagHasMaxHighTemperature;
    TypeMaxHighTemperatureJSON * storeMaxHighTemperature;
    bool flagHasMinLowTemperature;
    TypeMinLowTemperatureJSON * storeMinLowTemperature;
    bool flagHasAvgLowTemperature;
    TypeAvgLowTemperatureJSON * storeAvgLowTemperature;
    bool flagHasMaxLowTemperature;
    TypeMaxLowTemperatureJSON * storeMaxLowTemperature;
    bool flagHasAvgTemperature;
    TypeAvgTemperatureJSON * storeAvgTemperature;
    bool flagHasMinPrecipitation;
    TypeMinPrecipitationJSON * storeMinPrecipitation;
    bool flagHasAvgPrecipitation;
    TypeAvgPrecipitationJSON * storeAvgPrecipitation;
    bool flagHasMaxPrecipitation;
    TypeMaxPrecipitationJSON * storeMaxPrecipitation;
    bool flagHasMinHighDewPoint;
    TypeMinHighDewPointJSON * storeMinHighDewPoint;
    bool flagHasAvgHighDewPoint;
    TypeAvgHighDewPointJSON * storeAvgHighDewPoint;
    bool flagHasMaxHighDewPoint;
    TypeMaxHighDewPointJSON * storeMaxHighDewPoint;
    bool flagHasMinLowDewPoint;
    TypeMinLowDewPointJSON * storeMinLowDewPoint;
    bool flagHasAvgLowDewPoint;
    TypeAvgLowDewPointJSON * storeAvgLowDewPoint;
    bool flagHasMaxLowDewPoint;
    TypeMaxLowDewPointJSON * storeMaxLowDewPoint;
    bool flagHasCloudCoverConditions;
    std::string storeCloudCoverConditions;
    bool flagHasChanceOf;
    std::vector< TypeChanceOfJSON * > storeChanceOf;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    PlannerJSON(const PlannerJSON &);
    PlannerJSON & operator=(const PlannerJSON &other);

    void  fromJSONPlannerStartDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlannerEndDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinHighTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgHighTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxHighTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinLowTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgLowTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxLowTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinPrecipitation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgPrecipitation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxPrecipitation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinHighDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgHighDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxHighDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinLowDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvgLowDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxLowDewPoint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCloudCoverConditions(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChanceOf(JSONValue *json_value, bool ignore_extras = false);


  public:
    PlannerJSON(void);
    virtual ~PlannerJSON(void);
    bool  hasPlannerStartDateAndTime(void) const;
    DateAndOrTimeJSON *  getPlannerStartDateAndTime(void);
    const DateAndOrTimeJSON *  getPlannerStartDateAndTime(void) const;
    bool  hasPlannerEndDateAndTime(void) const;
    DateAndOrTimeJSON *  getPlannerEndDateAndTime(void);
    const DateAndOrTimeJSON *  getPlannerEndDateAndTime(void) const;
    bool  hasMinHighTemperature(void) const;
    TypeMinHighTemperatureJSON *  getMinHighTemperature(void);
    const TypeMinHighTemperatureJSON *  getMinHighTemperature(void) const;
    bool  hasAvgHighTemperature(void) const;
    TypeAvgHighTemperatureJSON *  getAvgHighTemperature(void);
    const TypeAvgHighTemperatureJSON *  getAvgHighTemperature(void) const;
    bool  hasMaxHighTemperature(void) const;
    TypeMaxHighTemperatureJSON *  getMaxHighTemperature(void);
    const TypeMaxHighTemperatureJSON *  getMaxHighTemperature(void) const;
    bool  hasMinLowTemperature(void) const;
    TypeMinLowTemperatureJSON *  getMinLowTemperature(void);
    const TypeMinLowTemperatureJSON *  getMinLowTemperature(void) const;
    bool  hasAvgLowTemperature(void) const;
    TypeAvgLowTemperatureJSON *  getAvgLowTemperature(void);
    const TypeAvgLowTemperatureJSON *  getAvgLowTemperature(void) const;
    bool  hasMaxLowTemperature(void) const;
    TypeMaxLowTemperatureJSON *  getMaxLowTemperature(void);
    const TypeMaxLowTemperatureJSON *  getMaxLowTemperature(void) const;
    bool  hasAvgTemperature(void) const;
    TypeAvgTemperatureJSON *  getAvgTemperature(void);
    const TypeAvgTemperatureJSON *  getAvgTemperature(void) const;
    bool  hasMinPrecipitation(void) const;
    TypeMinPrecipitationJSON *  getMinPrecipitation(void);
    const TypeMinPrecipitationJSON *  getMinPrecipitation(void) const;
    bool  hasAvgPrecipitation(void) const;
    TypeAvgPrecipitationJSON *  getAvgPrecipitation(void);
    const TypeAvgPrecipitationJSON *  getAvgPrecipitation(void) const;
    bool  hasMaxPrecipitation(void) const;
    TypeMaxPrecipitationJSON *  getMaxPrecipitation(void);
    const TypeMaxPrecipitationJSON *  getMaxPrecipitation(void) const;
    bool  hasMinHighDewPoint(void) const;
    TypeMinHighDewPointJSON *  getMinHighDewPoint(void);
    const TypeMinHighDewPointJSON *  getMinHighDewPoint(void) const;
    bool  hasAvgHighDewPoint(void) const;
    TypeAvgHighDewPointJSON *  getAvgHighDewPoint(void);
    const TypeAvgHighDewPointJSON *  getAvgHighDewPoint(void) const;
    bool  hasMaxHighDewPoint(void) const;
    TypeMaxHighDewPointJSON *  getMaxHighDewPoint(void);
    const TypeMaxHighDewPointJSON *  getMaxHighDewPoint(void) const;
    bool  hasMinLowDewPoint(void) const;
    TypeMinLowDewPointJSON *  getMinLowDewPoint(void);
    const TypeMinLowDewPointJSON *  getMinLowDewPoint(void) const;
    bool  hasAvgLowDewPoint(void) const;
    TypeAvgLowDewPointJSON *  getAvgLowDewPoint(void);
    const TypeAvgLowDewPointJSON *  getAvgLowDewPoint(void) const;
    bool  hasMaxLowDewPoint(void) const;
    TypeMaxLowDewPointJSON *  getMaxLowDewPoint(void);
    const TypeMaxLowDewPointJSON *  getMaxLowDewPoint(void) const;
    bool  hasCloudCoverConditions(void) const;
    std::string  getCloudCoverConditions(void);
    const std::string  getCloudCoverConditions(void) const;
    bool  hasChanceOf(void) const;
    size_t  countOfChanceOf(void) const;
    TypeChanceOfJSON *  elementOfChanceOf(size_t element_num);
    const TypeChanceOfJSON *  elementOfChanceOf(size_t element_num) const;
    std::vector< TypeChanceOfJSON * >  getChanceOf(void);
    const std::vector< TypeChanceOfJSON * >  getChanceOf(void) const;

    virtual size_t extraPlannerComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraPlannerComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraPlannerComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraPlannerComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraPlannerLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraPlannerLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setPlannerStartDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPlannerStartDateAndTime)
          {
            storePlannerStartDateAndTime->remove_reference();
          }
        flagHasPlannerStartDateAndTime = true;
        storePlannerStartDateAndTime = new_value;
      }
    void unsetPlannerStartDateAndTime(void)
      {
        if (flagHasPlannerStartDateAndTime)
          {
            storePlannerStartDateAndTime->remove_reference();
          }
        flagHasPlannerStartDateAndTime = false;
      }
    void setPlannerEndDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPlannerEndDateAndTime)
          {
            storePlannerEndDateAndTime->remove_reference();
          }
        flagHasPlannerEndDateAndTime = true;
        storePlannerEndDateAndTime = new_value;
      }
    void unsetPlannerEndDateAndTime(void)
      {
        if (flagHasPlannerEndDateAndTime)
          {
            storePlannerEndDateAndTime->remove_reference();
          }
        flagHasPlannerEndDateAndTime = false;
      }
    void setMinHighTemperature(TypeMinHighTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMinHighTemperature)
          {
            storeMinHighTemperature->remove_reference();
          }
        flagHasMinHighTemperature = true;
        storeMinHighTemperature = new_value;
      }
    void unsetMinHighTemperature(void)
      {
        if (flagHasMinHighTemperature)
          {
            storeMinHighTemperature->remove_reference();
          }
        flagHasMinHighTemperature = false;
      }
    void setAvgHighTemperature(TypeAvgHighTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAvgHighTemperature)
          {
            storeAvgHighTemperature->remove_reference();
          }
        flagHasAvgHighTemperature = true;
        storeAvgHighTemperature = new_value;
      }
    void unsetAvgHighTemperature(void)
      {
        if (flagHasAvgHighTemperature)
          {
            storeAvgHighTemperature->remove_reference();
          }
        flagHasAvgHighTemperature = false;
      }
    void setMaxHighTemperature(TypeMaxHighTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaxHighTemperature)
          {
            storeMaxHighTemperature->remove_reference();
          }
        flagHasMaxHighTemperature = true;
        storeMaxHighTemperature = new_value;
      }
    void unsetMaxHighTemperature(void)
      {
        if (flagHasMaxHighTemperature)
          {
            storeMaxHighTemperature->remove_reference();
          }
        flagHasMaxHighTemperature = false;
      }
    void setMinLowTemperature(TypeMinLowTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMinLowTemperature)
          {
            storeMinLowTemperature->remove_reference();
          }
        flagHasMinLowTemperature = true;
        storeMinLowTemperature = new_value;
      }
    void unsetMinLowTemperature(void)
      {
        if (flagHasMinLowTemperature)
          {
            storeMinLowTemperature->remove_reference();
          }
        flagHasMinLowTemperature = false;
      }
    void setAvgLowTemperature(TypeAvgLowTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAvgLowTemperature)
          {
            storeAvgLowTemperature->remove_reference();
          }
        flagHasAvgLowTemperature = true;
        storeAvgLowTemperature = new_value;
      }
    void unsetAvgLowTemperature(void)
      {
        if (flagHasAvgLowTemperature)
          {
            storeAvgLowTemperature->remove_reference();
          }
        flagHasAvgLowTemperature = false;
      }
    void setMaxLowTemperature(TypeMaxLowTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaxLowTemperature)
          {
            storeMaxLowTemperature->remove_reference();
          }
        flagHasMaxLowTemperature = true;
        storeMaxLowTemperature = new_value;
      }
    void unsetMaxLowTemperature(void)
      {
        if (flagHasMaxLowTemperature)
          {
            storeMaxLowTemperature->remove_reference();
          }
        flagHasMaxLowTemperature = false;
      }
    void setAvgTemperature(TypeAvgTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAvgTemperature)
          {
            storeAvgTemperature->remove_reference();
          }
        flagHasAvgTemperature = true;
        storeAvgTemperature = new_value;
      }
    void unsetAvgTemperature(void)
      {
        if (flagHasAvgTemperature)
          {
            storeAvgTemperature->remove_reference();
          }
        flagHasAvgTemperature = false;
      }
    void setMinPrecipitation(TypeMinPrecipitationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMinPrecipitation)
          {
            storeMinPrecipitation->remove_reference();
          }
        flagHasMinPrecipitation = true;
        storeMinPrecipitation = new_value;
      }
    void unsetMinPrecipitation(void)
      {
        if (flagHasMinPrecipitation)
          {
            storeMinPrecipitation->remove_reference();
          }
        flagHasMinPrecipitation = false;
      }
    void setAvgPrecipitation(TypeAvgPrecipitationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAvgPrecipitation)
          {
            storeAvgPrecipitation->remove_reference();
          }
        flagHasAvgPrecipitation = true;
        storeAvgPrecipitation = new_value;
      }
    void unsetAvgPrecipitation(void)
      {
        if (flagHasAvgPrecipitation)
          {
            storeAvgPrecipitation->remove_reference();
          }
        flagHasAvgPrecipitation = false;
      }
    void setMaxPrecipitation(TypeMaxPrecipitationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaxPrecipitation)
          {
            storeMaxPrecipitation->remove_reference();
          }
        flagHasMaxPrecipitation = true;
        storeMaxPrecipitation = new_value;
      }
    void unsetMaxPrecipitation(void)
      {
        if (flagHasMaxPrecipitation)
          {
            storeMaxPrecipitation->remove_reference();
          }
        flagHasMaxPrecipitation = false;
      }
    void setMinHighDewPoint(TypeMinHighDewPointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMinHighDewPoint)
          {
            storeMinHighDewPoint->remove_reference();
          }
        flagHasMinHighDewPoint = true;
        storeMinHighDewPoint = new_value;
      }
    void unsetMinHighDewPoint(void)
      {
        if (flagHasMinHighDewPoint)
          {
            storeMinHighDewPoint->remove_reference();
          }
        flagHasMinHighDewPoint = false;
      }
    void setAvgHighDewPoint(TypeAvgHighDewPointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAvgHighDewPoint)
          {
            storeAvgHighDewPoint->remove_reference();
          }
        flagHasAvgHighDewPoint = true;
        storeAvgHighDewPoint = new_value;
      }
    void unsetAvgHighDewPoint(void)
      {
        if (flagHasAvgHighDewPoint)
          {
            storeAvgHighDewPoint->remove_reference();
          }
        flagHasAvgHighDewPoint = false;
      }
    void setMaxHighDewPoint(TypeMaxHighDewPointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaxHighDewPoint)
          {
            storeMaxHighDewPoint->remove_reference();
          }
        flagHasMaxHighDewPoint = true;
        storeMaxHighDewPoint = new_value;
      }
    void unsetMaxHighDewPoint(void)
      {
        if (flagHasMaxHighDewPoint)
          {
            storeMaxHighDewPoint->remove_reference();
          }
        flagHasMaxHighDewPoint = false;
      }
    void setMinLowDewPoint(TypeMinLowDewPointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMinLowDewPoint)
          {
            storeMinLowDewPoint->remove_reference();
          }
        flagHasMinLowDewPoint = true;
        storeMinLowDewPoint = new_value;
      }
    void unsetMinLowDewPoint(void)
      {
        if (flagHasMinLowDewPoint)
          {
            storeMinLowDewPoint->remove_reference();
          }
        flagHasMinLowDewPoint = false;
      }
    void setAvgLowDewPoint(TypeAvgLowDewPointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAvgLowDewPoint)
          {
            storeAvgLowDewPoint->remove_reference();
          }
        flagHasAvgLowDewPoint = true;
        storeAvgLowDewPoint = new_value;
      }
    void unsetAvgLowDewPoint(void)
      {
        if (flagHasAvgLowDewPoint)
          {
            storeAvgLowDewPoint->remove_reference();
          }
        flagHasAvgLowDewPoint = false;
      }
    void setMaxLowDewPoint(TypeMaxLowDewPointJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaxLowDewPoint)
          {
            storeMaxLowDewPoint->remove_reference();
          }
        flagHasMaxLowDewPoint = true;
        storeMaxLowDewPoint = new_value;
      }
    void unsetMaxLowDewPoint(void)
      {
        if (flagHasMaxLowDewPoint)
          {
            storeMaxLowDewPoint->remove_reference();
          }
        flagHasMaxLowDewPoint = false;
      }
    void setCloudCoverConditions(std::string new_value)
      {
        flagHasCloudCoverConditions = true;
        storeCloudCoverConditions = new_value;
      }
    void unsetCloudCoverConditions(void)
      {
        flagHasCloudCoverConditions = false;
      }
    void initChanceOf(void)
      {
        if (flagHasChanceOf)
          {
            for (size_t num2 = 0; num2 < storeChanceOf.size(); ++num2)
              {
                storeChanceOf[num2]->remove_reference();
              }
          }
        flagHasChanceOf = true;
        storeChanceOf.clear();
      }
    void appendChanceOf(TypeChanceOfJSON * to_append)
      {
        if (!flagHasChanceOf)
          {
            flagHasChanceOf = true;
            storeChanceOf.clear();
          }
        assert(flagHasChanceOf);
        to_append->add_reference();
        storeChanceOf.push_back(to_append);
      }
    void unsetChanceOf(void)
      {
        if (flagHasChanceOf)
          {
            for (size_t num3 = 0; num3 < storeChanceOf.size(); ++num3)
              {
                storeChanceOf[num3]->remove_reference();
              }
          }
        flagHasChanceOf = false;
        storeChanceOf.clear();
      }

    virtual void extraPlannerAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraPlannerSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraPlannerLookup(key);
        if (old_field == NULL)
          {
            extraPlannerAppendPair(key, new_component);
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
        if (flagHasPlannerStartDateAndTime)
          {
            handler->start_pair("PlannerStartDateAndTime");
            storePlannerStartDateAndTime->write_as_json(handler);
          }
        if (flagHasPlannerEndDateAndTime)
          {
            handler->start_pair("PlannerEndDateAndTime");
            storePlannerEndDateAndTime->write_as_json(handler);
          }
        if (flagHasMinHighTemperature)
          {
            handler->start_pair("MinHighTemperature");
            storeMinHighTemperature->write_as_json(handler);
          }
        if (flagHasAvgHighTemperature)
          {
            handler->start_pair("AvgHighTemperature");
            storeAvgHighTemperature->write_as_json(handler);
          }
        if (flagHasMaxHighTemperature)
          {
            handler->start_pair("MaxHighTemperature");
            storeMaxHighTemperature->write_as_json(handler);
          }
        if (flagHasMinLowTemperature)
          {
            handler->start_pair("MinLowTemperature");
            storeMinLowTemperature->write_as_json(handler);
          }
        if (flagHasAvgLowTemperature)
          {
            handler->start_pair("AvgLowTemperature");
            storeAvgLowTemperature->write_as_json(handler);
          }
        if (flagHasMaxLowTemperature)
          {
            handler->start_pair("MaxLowTemperature");
            storeMaxLowTemperature->write_as_json(handler);
          }
        if (flagHasAvgTemperature)
          {
            handler->start_pair("AvgTemperature");
            storeAvgTemperature->write_as_json(handler);
          }
        if (flagHasMinPrecipitation)
          {
            handler->start_pair("MinPrecipitation");
            storeMinPrecipitation->write_as_json(handler);
          }
        if (flagHasAvgPrecipitation)
          {
            handler->start_pair("AvgPrecipitation");
            storeAvgPrecipitation->write_as_json(handler);
          }
        if (flagHasMaxPrecipitation)
          {
            handler->start_pair("MaxPrecipitation");
            storeMaxPrecipitation->write_as_json(handler);
          }
        if (flagHasMinHighDewPoint)
          {
            handler->start_pair("MinHighDewPoint");
            storeMinHighDewPoint->write_as_json(handler);
          }
        if (flagHasAvgHighDewPoint)
          {
            handler->start_pair("AvgHighDewPoint");
            storeAvgHighDewPoint->write_as_json(handler);
          }
        if (flagHasMaxHighDewPoint)
          {
            handler->start_pair("MaxHighDewPoint");
            storeMaxHighDewPoint->write_as_json(handler);
          }
        if (flagHasMinLowDewPoint)
          {
            handler->start_pair("MinLowDewPoint");
            storeMinLowDewPoint->write_as_json(handler);
          }
        if (flagHasAvgLowDewPoint)
          {
            handler->start_pair("AvgLowDewPoint");
            storeAvgLowDewPoint->write_as_json(handler);
          }
        if (flagHasMaxLowDewPoint)
          {
            handler->start_pair("MaxLowDewPoint");
            storeMaxLowDewPoint->write_as_json(handler);
          }
        if (flagHasCloudCoverConditions)
          {
            handler->start_pair("CloudCoverConditions");
            handler->string_value(storeCloudCoverConditions);
          }
        if (flagHasChanceOf)
          {
            handler->start_pair("ChanceOf");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeChanceOf.size(); ++num1)
              {
                storeChanceOf[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static PlannerJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PlannerJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PlannerJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PlannerJSON>, PlannerJSON *, bool> generator("Type Planner", ignore_extras);
            parse_json_value(text, "Text for PlannerJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PlannerJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PlannerJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PlannerJSON>, PlannerJSON *, bool> generator("Type Planner", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorPlannerStartDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorPlannerEndDateAndTime;
        JSONHoldingGenerator<TypeMinHighTemperatureJSON::Generator, RCHandle<TypeMinHighTemperatureJSON>, TypeMinHighTemperatureJSON *, bool > fieldGeneratorMinHighTemperature;
        JSONHoldingGenerator<TypeAvgHighTemperatureJSON::Generator, RCHandle<TypeAvgHighTemperatureJSON>, TypeAvgHighTemperatureJSON *, bool > fieldGeneratorAvgHighTemperature;
        JSONHoldingGenerator<TypeMaxHighTemperatureJSON::Generator, RCHandle<TypeMaxHighTemperatureJSON>, TypeMaxHighTemperatureJSON *, bool > fieldGeneratorMaxHighTemperature;
        JSONHoldingGenerator<TypeMinLowTemperatureJSON::Generator, RCHandle<TypeMinLowTemperatureJSON>, TypeMinLowTemperatureJSON *, bool > fieldGeneratorMinLowTemperature;
        JSONHoldingGenerator<TypeAvgLowTemperatureJSON::Generator, RCHandle<TypeAvgLowTemperatureJSON>, TypeAvgLowTemperatureJSON *, bool > fieldGeneratorAvgLowTemperature;
        JSONHoldingGenerator<TypeMaxLowTemperatureJSON::Generator, RCHandle<TypeMaxLowTemperatureJSON>, TypeMaxLowTemperatureJSON *, bool > fieldGeneratorMaxLowTemperature;
        JSONHoldingGenerator<TypeAvgTemperatureJSON::Generator, RCHandle<TypeAvgTemperatureJSON>, TypeAvgTemperatureJSON *, bool > fieldGeneratorAvgTemperature;
        JSONHoldingGenerator<TypeMinPrecipitationJSON::Generator, RCHandle<TypeMinPrecipitationJSON>, TypeMinPrecipitationJSON *, bool > fieldGeneratorMinPrecipitation;
        JSONHoldingGenerator<TypeAvgPrecipitationJSON::Generator, RCHandle<TypeAvgPrecipitationJSON>, TypeAvgPrecipitationJSON *, bool > fieldGeneratorAvgPrecipitation;
        JSONHoldingGenerator<TypeMaxPrecipitationJSON::Generator, RCHandle<TypeMaxPrecipitationJSON>, TypeMaxPrecipitationJSON *, bool > fieldGeneratorMaxPrecipitation;
        JSONHoldingGenerator<TypeMinHighDewPointJSON::Generator, RCHandle<TypeMinHighDewPointJSON>, TypeMinHighDewPointJSON *, bool > fieldGeneratorMinHighDewPoint;
        JSONHoldingGenerator<TypeAvgHighDewPointJSON::Generator, RCHandle<TypeAvgHighDewPointJSON>, TypeAvgHighDewPointJSON *, bool > fieldGeneratorAvgHighDewPoint;
        JSONHoldingGenerator<TypeMaxHighDewPointJSON::Generator, RCHandle<TypeMaxHighDewPointJSON>, TypeMaxHighDewPointJSON *, bool > fieldGeneratorMaxHighDewPoint;
        JSONHoldingGenerator<TypeMinLowDewPointJSON::Generator, RCHandle<TypeMinLowDewPointJSON>, TypeMinLowDewPointJSON *, bool > fieldGeneratorMinLowDewPoint;
        JSONHoldingGenerator<TypeAvgLowDewPointJSON::Generator, RCHandle<TypeAvgLowDewPointJSON>, TypeAvgLowDewPointJSON *, bool > fieldGeneratorAvgLowDewPoint;
        JSONHoldingGenerator<TypeMaxLowDewPointJSON::Generator, RCHandle<TypeMaxLowDewPointJSON>, TypeMaxLowDewPointJSON *, bool > fieldGeneratorMaxLowDewPoint;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCloudCoverConditions;
        JSONHoldingArrayGenerator<TypeChanceOfJSON::Generator, RCHandle<TypeChanceOfJSON>, TypeChanceOfJSON *, bool > fieldGeneratorChanceOf;
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
            PlannerJSON *result = new PlannerJSON();
            assert(result != NULL);
            RCHandle<PlannerJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraPlannerAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(PlannerJSON *result)
          {
            if (fieldGeneratorPlannerStartDateAndTime.have_value)
              {
                result->setPlannerStartDateAndTime(fieldGeneratorPlannerStartDateAndTime.value.referenced());
                fieldGeneratorPlannerStartDateAndTime.have_value = false;
              }
            if (fieldGeneratorPlannerEndDateAndTime.have_value)
              {
                result->setPlannerEndDateAndTime(fieldGeneratorPlannerEndDateAndTime.value.referenced());
                fieldGeneratorPlannerEndDateAndTime.have_value = false;
              }
            if (fieldGeneratorMinHighTemperature.have_value)
              {
                result->setMinHighTemperature(fieldGeneratorMinHighTemperature.value.referenced());
                fieldGeneratorMinHighTemperature.have_value = false;
              }
            if (fieldGeneratorAvgHighTemperature.have_value)
              {
                result->setAvgHighTemperature(fieldGeneratorAvgHighTemperature.value.referenced());
                fieldGeneratorAvgHighTemperature.have_value = false;
              }
            if (fieldGeneratorMaxHighTemperature.have_value)
              {
                result->setMaxHighTemperature(fieldGeneratorMaxHighTemperature.value.referenced());
                fieldGeneratorMaxHighTemperature.have_value = false;
              }
            if (fieldGeneratorMinLowTemperature.have_value)
              {
                result->setMinLowTemperature(fieldGeneratorMinLowTemperature.value.referenced());
                fieldGeneratorMinLowTemperature.have_value = false;
              }
            if (fieldGeneratorAvgLowTemperature.have_value)
              {
                result->setAvgLowTemperature(fieldGeneratorAvgLowTemperature.value.referenced());
                fieldGeneratorAvgLowTemperature.have_value = false;
              }
            if (fieldGeneratorMaxLowTemperature.have_value)
              {
                result->setMaxLowTemperature(fieldGeneratorMaxLowTemperature.value.referenced());
                fieldGeneratorMaxLowTemperature.have_value = false;
              }
            if (fieldGeneratorAvgTemperature.have_value)
              {
                result->setAvgTemperature(fieldGeneratorAvgTemperature.value.referenced());
                fieldGeneratorAvgTemperature.have_value = false;
              }
            if (fieldGeneratorMinPrecipitation.have_value)
              {
                result->setMinPrecipitation(fieldGeneratorMinPrecipitation.value.referenced());
                fieldGeneratorMinPrecipitation.have_value = false;
              }
            if (fieldGeneratorAvgPrecipitation.have_value)
              {
                result->setAvgPrecipitation(fieldGeneratorAvgPrecipitation.value.referenced());
                fieldGeneratorAvgPrecipitation.have_value = false;
              }
            if (fieldGeneratorMaxPrecipitation.have_value)
              {
                result->setMaxPrecipitation(fieldGeneratorMaxPrecipitation.value.referenced());
                fieldGeneratorMaxPrecipitation.have_value = false;
              }
            if (fieldGeneratorMinHighDewPoint.have_value)
              {
                result->setMinHighDewPoint(fieldGeneratorMinHighDewPoint.value.referenced());
                fieldGeneratorMinHighDewPoint.have_value = false;
              }
            if (fieldGeneratorAvgHighDewPoint.have_value)
              {
                result->setAvgHighDewPoint(fieldGeneratorAvgHighDewPoint.value.referenced());
                fieldGeneratorAvgHighDewPoint.have_value = false;
              }
            if (fieldGeneratorMaxHighDewPoint.have_value)
              {
                result->setMaxHighDewPoint(fieldGeneratorMaxHighDewPoint.value.referenced());
                fieldGeneratorMaxHighDewPoint.have_value = false;
              }
            if (fieldGeneratorMinLowDewPoint.have_value)
              {
                result->setMinLowDewPoint(fieldGeneratorMinLowDewPoint.value.referenced());
                fieldGeneratorMinLowDewPoint.have_value = false;
              }
            if (fieldGeneratorAvgLowDewPoint.have_value)
              {
                result->setAvgLowDewPoint(fieldGeneratorAvgLowDewPoint.value.referenced());
                fieldGeneratorAvgLowDewPoint.have_value = false;
              }
            if (fieldGeneratorMaxLowDewPoint.have_value)
              {
                result->setMaxLowDewPoint(fieldGeneratorMaxLowDewPoint.value.referenced());
                fieldGeneratorMaxLowDewPoint.have_value = false;
              }
            if (fieldGeneratorCloudCoverConditions.have_value)
              {
                result->setCloudCoverConditions(fieldGeneratorCloudCoverConditions.value);
                fieldGeneratorCloudCoverConditions.have_value = false;
              }
            if (fieldGeneratorChanceOf.have_value)
              {
                result->initChanceOf();
                size_t count = fieldGeneratorChanceOf.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChanceOf(fieldGeneratorChanceOf.value[num].referenced());
                  }
                fieldGeneratorChanceOf.value.clear();
                fieldGeneratorChanceOf.have_value = false;
              }
          }
        virtual void handle_result(PlannerJSON *new_result) = 0;
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
                                if (strncmp(&(field_name[4]), "igh", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[8]), "ewPoint") == 0)
                                                return &fieldGeneratorAvgHighDewPoint;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[8]), "emperature") == 0)
                                                return &fieldGeneratorAvgHighTemperature;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'L':
                                if (strncmp(&(field_name[4]), "ow", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[6]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[7]), "ewPoint") == 0)
                                                return &fieldGeneratorAvgLowDewPoint;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[7]), "emperature") == 0)
                                                return &fieldGeneratorAvgLowTemperature;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'P':
                                if (strcmp(&(field_name[4]), "recipitation") == 0)
                                    return &fieldGeneratorAvgPrecipitation;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[4]), "emperature") == 0)
                                    return &fieldGeneratorAvgTemperature;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "anceOf") == 0)
                                return &fieldGeneratorChanceOf;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "oudCoverConditions") == 0)
                                return &fieldGeneratorCloudCoverConditions;
                            break;
                        default:
                            break;
                      }
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
                                        if (strncmp(&(field_name[4]), "igh", 3) == 0)
                                          {
                                            switch ((unsigned char)(field_name[7]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(field_name[8]), "ewPoint") == 0)
                                                        return &fieldGeneratorMaxHighDewPoint;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(field_name[8]), "emperature") == 0)
                                                        return &fieldGeneratorMaxHighTemperature;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'L':
                                        if (strncmp(&(field_name[4]), "ow", 2) == 0)
                                          {
                                            switch ((unsigned char)(field_name[6]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(field_name[7]), "ewPoint") == 0)
                                                        return &fieldGeneratorMaxLowDewPoint;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(field_name[7]), "emperature") == 0)
                                                        return &fieldGeneratorMaxLowTemperature;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[4]), "recipitation") == 0)
                                            return &fieldGeneratorMaxPrecipitation;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strncmp(&(field_name[2]), "n", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'H':
                                        if (strncmp(&(field_name[4]), "igh", 3) == 0)
                                          {
                                            switch ((unsigned char)(field_name[7]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(field_name[8]), "ewPoint") == 0)
                                                        return &fieldGeneratorMinHighDewPoint;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(field_name[8]), "emperature") == 0)
                                                        return &fieldGeneratorMinHighTemperature;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'L':
                                        if (strncmp(&(field_name[4]), "ow", 2) == 0)
                                          {
                                            switch ((unsigned char)(field_name[6]))
                                              {
                                                case 'D':
                                                    if (strcmp(&(field_name[7]), "ewPoint") == 0)
                                                        return &fieldGeneratorMinLowDewPoint;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(field_name[7]), "emperature") == 0)
                                                        return &fieldGeneratorMinLowTemperature;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[4]), "recipitation") == 0)
                                            return &fieldGeneratorMinPrecipitation;
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
                case 'P':
                    if (strncmp(&(field_name[1]), "lanner", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[8]), "ndDateAndTime") == 0)
                                    return &fieldGeneratorPlannerEndDateAndTime;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "tartDateAndTime") == 0)
                                    return &fieldGeneratorPlannerStartDateAndTime;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPlannerStartDateAndTime("field \"PlannerStartDateAndTime\" of the Planner class", ignore_extras), fieldGeneratorPlannerEndDateAndTime("field \"PlannerEndDateAndTime\" of the Planner class", ignore_extras), fieldGeneratorMinHighTemperature("field \"MinHighTemperature\" of the Planner class", ignore_extras), fieldGeneratorAvgHighTemperature("field \"AvgHighTemperature\" of the Planner class", ignore_extras), fieldGeneratorMaxHighTemperature("field \"MaxHighTemperature\" of the Planner class", ignore_extras), fieldGeneratorMinLowTemperature("field \"MinLowTemperature\" of the Planner class", ignore_extras), fieldGeneratorAvgLowTemperature("field \"AvgLowTemperature\" of the Planner class", ignore_extras), fieldGeneratorMaxLowTemperature("field \"MaxLowTemperature\" of the Planner class", ignore_extras), fieldGeneratorAvgTemperature("field \"AvgTemperature\" of the Planner class", ignore_extras), fieldGeneratorMinPrecipitation("field \"MinPrecipitation\" of the Planner class", ignore_extras), fieldGeneratorAvgPrecipitation("field \"AvgPrecipitation\" of the Planner class", ignore_extras), fieldGeneratorMaxPrecipitation("field \"MaxPrecipitation\" of the Planner class", ignore_extras), fieldGeneratorMinHighDewPoint("field \"MinHighDewPoint\" of the Planner class", ignore_extras), fieldGeneratorAvgHighDewPoint("field \"AvgHighDewPoint\" of the Planner class", ignore_extras), fieldGeneratorMaxHighDewPoint("field \"MaxHighDewPoint\" of the Planner class", ignore_extras), fieldGeneratorMinLowDewPoint("field \"MinLowDewPoint\" of the Planner class", ignore_extras), fieldGeneratorAvgLowDewPoint("field \"AvgLowDewPoint\" of the Planner class", ignore_extras), fieldGeneratorMaxLowDewPoint("field \"MaxLowDewPoint\" of the Planner class", ignore_extras), fieldGeneratorCloudCoverConditions("field \"CloudCoverConditions\" of the Planner class"), fieldGeneratorChanceOf("field \"ChanceOf\" of the Planner class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Planner class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPlannerStartDateAndTime.reset();
            fieldGeneratorPlannerEndDateAndTime.reset();
            fieldGeneratorMinHighTemperature.reset();
            fieldGeneratorAvgHighTemperature.reset();
            fieldGeneratorMaxHighTemperature.reset();
            fieldGeneratorMinLowTemperature.reset();
            fieldGeneratorAvgLowTemperature.reset();
            fieldGeneratorMaxLowTemperature.reset();
            fieldGeneratorAvgTemperature.reset();
            fieldGeneratorMinPrecipitation.reset();
            fieldGeneratorAvgPrecipitation.reset();
            fieldGeneratorMaxPrecipitation.reset();
            fieldGeneratorMinHighDewPoint.reset();
            fieldGeneratorAvgHighDewPoint.reset();
            fieldGeneratorMaxHighDewPoint.reset();
            fieldGeneratorMinLowDewPoint.reset();
            fieldGeneratorAvgLowDewPoint.reset();
            fieldGeneratorMaxLowDewPoint.reset();
            fieldGeneratorCloudCoverConditions.reset();
            fieldGeneratorChanceOf.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* PLANNERJSON_H */
