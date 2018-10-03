/* file "DailyForecastDayPartJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DAILYFORECASTDAYPARTJSON_H
#define DAILYFORECASTDAYPARTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <string>
#include <stdint.h>
#include "WeatherImageJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_IceJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DailyForecastDayPartJSON : public ReferenceCounted
  {
  public:
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
        bool flagHasDirectionAbbreviation;
        std::string storeDirectionAbbreviation;
        bool flagHasDirectionText;
        std::string storeDirectionText;
        bool flagHasDirectionDegrees;
        uint16_t storeDirectionDegrees;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeWindGustJSON(const TypeWindGustJSON &);
        TypeWindGustJSON & operator=(const TypeWindGustJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeWindGustJSON(void);
        virtual ~TypeWindGustJSON(void);
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
                throw("The value for field DirectionDegrees of TypeWindGustJSON is less than the lower bound (0) for that field.");
            if (new_value > 360)
                throw("The value for field DirectionDegrees of TypeWindGustJSON is greater than the upper bound (360) for that field.");
            storeDirectionDegrees = new_value;
          }
        void unsetDirectionDegrees(void)
          {
            flagHasDirectionDegrees = false;
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
            virtual void handle_result(TypeWindGustJSON *new_result) = 0;
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
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeWindGust class", ignore_extras), fieldGeneratorDirectionAbbreviation("field \"DirectionAbbreviation\" of the TypeWindGust class"), fieldGeneratorDirectionText("field \"DirectionText\" of the TypeWindGust class"), fieldGeneratorDirectionDegrees("field \"DirectionDegrees\" of the TypeWindGust class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeWindGust class");
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
    class TypeLiquidTotalJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeLiquidTotalJSON(const TypeLiquidTotalJSON &);
        TypeLiquidTotalJSON & operator=(const TypeLiquidTotalJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeLiquidTotalJSON(void);
        virtual ~TypeLiquidTotalJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypeLiquidTotalComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeLiquidTotalComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeLiquidTotalComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeLiquidTotalComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeLiquidTotalLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeLiquidTotalLookup(const char *field_name) const
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

        virtual void extraTypeLiquidTotalAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeLiquidTotalSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeLiquidTotalLookup(key);
            if (old_field == NULL)
              {
                extraTypeLiquidTotalAppendPair(key, new_component);
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

        static TypeLiquidTotalJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeLiquidTotalJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeLiquidTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLiquidTotalJSON>, TypeLiquidTotalJSON *, bool> generator("Type TypeLiquidTotal", ignore_extras);
                parse_json_value(text, "Text for TypeLiquidTotalJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeLiquidTotalJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeLiquidTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLiquidTotalJSON>, TypeLiquidTotalJSON *, bool> generator("Type TypeLiquidTotal", ignore_extras);
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
                TypeLiquidTotalJSON *result = new TypeLiquidTotalJSON();
                assert(result != NULL);
                RCHandle<TypeLiquidTotalJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeLiquidTotalAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeLiquidTotalJSON *result)
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
            virtual void handle_result(TypeLiquidTotalJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeLiquidTotal class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeLiquidTotal class");
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
    class TypeRainTotalJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_PrecipitationJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeRainTotalJSON(const TypeRainTotalJSON &);
        TypeRainTotalJSON & operator=(const TypeRainTotalJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeRainTotalJSON(void);
        virtual ~TypeRainTotalJSON(void);
        bool  hasValue(void) const;
        UnitsValue_PrecipitationJSON *  getValue(void);
        const UnitsValue_PrecipitationJSON *  getValue(void) const;

        virtual size_t extraTypeRainTotalComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeRainTotalComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeRainTotalComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeRainTotalComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeRainTotalLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeRainTotalLookup(const char *field_name) const
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

        virtual void extraTypeRainTotalAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeRainTotalSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeRainTotalLookup(key);
            if (old_field == NULL)
              {
                extraTypeRainTotalAppendPair(key, new_component);
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

        static TypeRainTotalJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeRainTotalJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeRainTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRainTotalJSON>, TypeRainTotalJSON *, bool> generator("Type TypeRainTotal", ignore_extras);
                parse_json_value(text, "Text for TypeRainTotalJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeRainTotalJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeRainTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRainTotalJSON>, TypeRainTotalJSON *, bool> generator("Type TypeRainTotal", ignore_extras);
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
                TypeRainTotalJSON *result = new TypeRainTotalJSON();
                assert(result != NULL);
                RCHandle<TypeRainTotalJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeRainTotalAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeRainTotalJSON *result)
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
            virtual void handle_result(TypeRainTotalJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeRainTotal class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeRainTotal class");
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
    class TypeIceTotalJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        UnitsValue_IceJSON * storeValue;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeIceTotalJSON(const TypeIceTotalJSON &);
        TypeIceTotalJSON & operator=(const TypeIceTotalJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeIceTotalJSON(void);
        virtual ~TypeIceTotalJSON(void);
        bool  hasValue(void) const;
        UnitsValue_IceJSON *  getValue(void);
        const UnitsValue_IceJSON *  getValue(void) const;

        virtual size_t extraTypeIceTotalComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeIceTotalComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeIceTotalComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeIceTotalComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeIceTotalLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeIceTotalLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(UnitsValue_IceJSON * new_value)
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

        virtual void extraTypeIceTotalAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeIceTotalSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeIceTotalLookup(key);
            if (old_field == NULL)
              {
                extraTypeIceTotalAppendPair(key, new_component);
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

        static TypeIceTotalJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeIceTotalJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeIceTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeIceTotalJSON>, TypeIceTotalJSON *, bool> generator("Type TypeIceTotal", ignore_extras);
                parse_json_value(text, "Text for TypeIceTotalJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeIceTotalJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeIceTotalJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeIceTotalJSON>, TypeIceTotalJSON *, bool> generator("Type TypeIceTotal", ignore_extras);
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
            JSONHoldingGenerator<UnitsValue_IceJSON::Generator, RCHandle<UnitsValue_IceJSON>, UnitsValue_IceJSON *, bool > fieldGeneratorValue;
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
                TypeIceTotalJSON *result = new TypeIceTotalJSON();
                assert(result != NULL);
                RCHandle<TypeIceTotalJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeIceTotalAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeIceTotalJSON *result)
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
            virtual void handle_result(TypeIceTotalJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Value") == 0)
                    return &fieldGeneratorValue;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeIceTotal class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeIceTotal class");
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
    bool flagHasConditionsImage;
    WeatherImageJSON * storeConditionsImage;
    bool flagHasIconPhrase;
    std::string storeIconPhrase;
    bool flagHasShortPhrase;
    std::string storeShortPhrase;
    bool flagHasLongPhrase;
    std::string storeLongPhrase;
    bool flagHasWind;
    TypeWindJSON * storeWind;
    bool flagHasWindGust;
    TypeWindGustJSON * storeWindGust;
    bool flagHasLiquidTotal;
    TypeLiquidTotalJSON * storeLiquidTotal;
    bool flagHasRainTotal;
    TypeRainTotalJSON * storeRainTotal;
    bool flagHasSnowTotal;
    TypeSnowTotalJSON * storeSnowTotal;
    bool flagHasIceTotal;
    TypeIceTotalJSON * storeIceTotal;
    bool flagHasProbabilityOfPrecipitationPct;
    uint8_t storeProbabilityOfPrecipitationPct;
    bool flagHasProbabilityOfThunderstormPct;
    uint8_t storeProbabilityOfThunderstormPct;
    bool flagHasProbabilityOfRainPct;
    uint8_t storeProbabilityOfRainPct;
    bool flagHasProbabilityOfSnowPct;
    uint8_t storeProbabilityOfSnowPct;
    bool flagHasProbabilityOfIcePct;
    uint8_t storeProbabilityOfIcePct;
    bool flagHasHoursOfPrecipitation;
    double storeHoursOfPrecipitation;
    std::string textStoreHoursOfPrecipitation;
    bool flagHasHoursOfRain;
    double storeHoursOfRain;
    std::string textStoreHoursOfRain;
    bool flagHasCloudCoverPct;
    uint8_t storeCloudCoverPct;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DailyForecastDayPartJSON(const DailyForecastDayPartJSON &);
    DailyForecastDayPartJSON & operator=(const DailyForecastDayPartJSON &other);

    void  fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIconPhrase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShortPhrase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongPhrase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWindGust(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLiquidTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRainTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSnowTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIceTotal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProbabilityOfPrecipitationPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProbabilityOfThunderstormPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProbabilityOfRainPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProbabilityOfSnowPct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProbabilityOfIcePct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHoursOfPrecipitation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHoursOfRain(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCloudCoverPct(JSONValue *json_value, bool ignore_extras = false);


  public:
    DailyForecastDayPartJSON(void);
    virtual ~DailyForecastDayPartJSON(void);
    bool  hasConditionsImage(void) const;
    WeatherImageJSON *  getConditionsImage(void);
    const WeatherImageJSON *  getConditionsImage(void) const;
    bool  hasIconPhrase(void) const;
    std::string  getIconPhrase(void);
    const std::string  getIconPhrase(void) const;
    bool  hasShortPhrase(void) const;
    std::string  getShortPhrase(void);
    const std::string  getShortPhrase(void) const;
    bool  hasLongPhrase(void) const;
    std::string  getLongPhrase(void);
    const std::string  getLongPhrase(void) const;
    bool  hasWind(void) const;
    TypeWindJSON *  getWind(void);
    const TypeWindJSON *  getWind(void) const;
    bool  hasWindGust(void) const;
    TypeWindGustJSON *  getWindGust(void);
    const TypeWindGustJSON *  getWindGust(void) const;
    bool  hasLiquidTotal(void) const;
    TypeLiquidTotalJSON *  getLiquidTotal(void);
    const TypeLiquidTotalJSON *  getLiquidTotal(void) const;
    bool  hasRainTotal(void) const;
    TypeRainTotalJSON *  getRainTotal(void);
    const TypeRainTotalJSON *  getRainTotal(void) const;
    bool  hasSnowTotal(void) const;
    TypeSnowTotalJSON *  getSnowTotal(void);
    const TypeSnowTotalJSON *  getSnowTotal(void) const;
    bool  hasIceTotal(void) const;
    TypeIceTotalJSON *  getIceTotal(void);
    const TypeIceTotalJSON *  getIceTotal(void) const;
    bool  hasProbabilityOfPrecipitationPct(void) const;
    uint8_t  getProbabilityOfPrecipitationPct(void);
    const uint8_t  getProbabilityOfPrecipitationPct(void) const;
    bool  hasProbabilityOfThunderstormPct(void) const;
    uint8_t  getProbabilityOfThunderstormPct(void);
    const uint8_t  getProbabilityOfThunderstormPct(void) const;
    bool  hasProbabilityOfRainPct(void) const;
    uint8_t  getProbabilityOfRainPct(void);
    const uint8_t  getProbabilityOfRainPct(void) const;
    bool  hasProbabilityOfSnowPct(void) const;
    uint8_t  getProbabilityOfSnowPct(void);
    const uint8_t  getProbabilityOfSnowPct(void) const;
    bool  hasProbabilityOfIcePct(void) const;
    uint8_t  getProbabilityOfIcePct(void);
    const uint8_t  getProbabilityOfIcePct(void) const;
    bool  hasHoursOfPrecipitation(void) const;
    double  getHoursOfPrecipitation(void);
    const double  getHoursOfPrecipitation(void) const;
    std::string  getHoursOfPrecipitationAsText(void) const;
    bool  hasHoursOfRain(void) const;
    double  getHoursOfRain(void);
    const double  getHoursOfRain(void) const;
    std::string  getHoursOfRainAsText(void) const;
    bool  hasCloudCoverPct(void) const;
    uint8_t  getCloudCoverPct(void);
    const uint8_t  getCloudCoverPct(void) const;

    virtual size_t extraDailyForecastDayPartComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDailyForecastDayPartComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDailyForecastDayPartComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDailyForecastDayPartComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDailyForecastDayPartLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDailyForecastDayPartLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setIconPhrase(std::string new_value)
      {
        flagHasIconPhrase = true;
        storeIconPhrase = new_value;
      }
    void unsetIconPhrase(void)
      {
        flagHasIconPhrase = false;
      }
    void setShortPhrase(std::string new_value)
      {
        flagHasShortPhrase = true;
        storeShortPhrase = new_value;
      }
    void unsetShortPhrase(void)
      {
        flagHasShortPhrase = false;
      }
    void setLongPhrase(std::string new_value)
      {
        flagHasLongPhrase = true;
        storeLongPhrase = new_value;
      }
    void unsetLongPhrase(void)
      {
        flagHasLongPhrase = false;
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
    void setLiquidTotal(TypeLiquidTotalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLiquidTotal)
          {
            storeLiquidTotal->remove_reference();
          }
        flagHasLiquidTotal = true;
        storeLiquidTotal = new_value;
      }
    void unsetLiquidTotal(void)
      {
        if (flagHasLiquidTotal)
          {
            storeLiquidTotal->remove_reference();
          }
        flagHasLiquidTotal = false;
      }
    void setRainTotal(TypeRainTotalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRainTotal)
          {
            storeRainTotal->remove_reference();
          }
        flagHasRainTotal = true;
        storeRainTotal = new_value;
      }
    void unsetRainTotal(void)
      {
        if (flagHasRainTotal)
          {
            storeRainTotal->remove_reference();
          }
        flagHasRainTotal = false;
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
    void setIceTotal(TypeIceTotalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasIceTotal)
          {
            storeIceTotal->remove_reference();
          }
        flagHasIceTotal = true;
        storeIceTotal = new_value;
      }
    void unsetIceTotal(void)
      {
        if (flagHasIceTotal)
          {
            storeIceTotal->remove_reference();
          }
        flagHasIceTotal = false;
      }
    void setProbabilityOfPrecipitationPct(uint8_t new_value)
      {
        flagHasProbabilityOfPrecipitationPct = true;
        if (new_value < 0)
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastDayPartJSON is greater than the upper bound (100) for that field.");
        storeProbabilityOfPrecipitationPct = new_value;
      }
    void unsetProbabilityOfPrecipitationPct(void)
      {
        flagHasProbabilityOfPrecipitationPct = false;
      }
    void setProbabilityOfThunderstormPct(uint8_t new_value)
      {
        flagHasProbabilityOfThunderstormPct = true;
        if (new_value < 0)
            throw("The value for field ProbabilityOfThunderstormPct of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ProbabilityOfThunderstormPct of DailyForecastDayPartJSON is greater than the upper bound (100) for that field.");
        storeProbabilityOfThunderstormPct = new_value;
      }
    void unsetProbabilityOfThunderstormPct(void)
      {
        flagHasProbabilityOfThunderstormPct = false;
      }
    void setProbabilityOfRainPct(uint8_t new_value)
      {
        flagHasProbabilityOfRainPct = true;
        if (new_value < 0)
            throw("The value for field ProbabilityOfRainPct of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ProbabilityOfRainPct of DailyForecastDayPartJSON is greater than the upper bound (100) for that field.");
        storeProbabilityOfRainPct = new_value;
      }
    void unsetProbabilityOfRainPct(void)
      {
        flagHasProbabilityOfRainPct = false;
      }
    void setProbabilityOfSnowPct(uint8_t new_value)
      {
        flagHasProbabilityOfSnowPct = true;
        if (new_value < 0)
            throw("The value for field ProbabilityOfSnowPct of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ProbabilityOfSnowPct of DailyForecastDayPartJSON is greater than the upper bound (100) for that field.");
        storeProbabilityOfSnowPct = new_value;
      }
    void unsetProbabilityOfSnowPct(void)
      {
        flagHasProbabilityOfSnowPct = false;
      }
    void setProbabilityOfIcePct(uint8_t new_value)
      {
        flagHasProbabilityOfIcePct = true;
        if (new_value < 0)
            throw("The value for field ProbabilityOfIcePct of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ProbabilityOfIcePct of DailyForecastDayPartJSON is greater than the upper bound (100) for that field.");
        storeProbabilityOfIcePct = new_value;
      }
    void unsetProbabilityOfIcePct(void)
      {
        flagHasProbabilityOfIcePct = false;
      }
    void setHoursOfPrecipitation(double new_value)
      {
        flagHasHoursOfPrecipitation = true;
        if (new_value < 0)
            throw("The value for field HoursOfPrecipitation of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        storeHoursOfPrecipitation = new_value;
        textStoreHoursOfPrecipitation = "";
      }
    void setHoursOfPrecipitationText(std::string new_value)
      {
        flagHasHoursOfPrecipitation = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HoursOfPrecipitation of DailyForecastDayPartJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HoursOfPrecipitation of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        textStoreHoursOfPrecipitation = new_value;
      }
    void unsetHoursOfPrecipitation(void)
      {
        flagHasHoursOfPrecipitation = false;
      }
    void setHoursOfRain(double new_value)
      {
        flagHasHoursOfRain = true;
        if (new_value < 0)
            throw("The value for field HoursOfRain of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        storeHoursOfRain = new_value;
        textStoreHoursOfRain = "";
      }
    void setHoursOfRainText(std::string new_value)
      {
        flagHasHoursOfRain = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HoursOfRain of DailyForecastDayPartJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HoursOfRain of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        textStoreHoursOfRain = new_value;
      }
    void unsetHoursOfRain(void)
      {
        flagHasHoursOfRain = false;
      }
    void setCloudCoverPct(uint8_t new_value)
      {
        flagHasCloudCoverPct = true;
        if (new_value < 0)
            throw("The value for field CloudCoverPct of DailyForecastDayPartJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field CloudCoverPct of DailyForecastDayPartJSON is greater than the upper bound (100) for that field.");
        storeCloudCoverPct = new_value;
      }
    void unsetCloudCoverPct(void)
      {
        flagHasCloudCoverPct = false;
      }

    virtual void extraDailyForecastDayPartAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDailyForecastDayPartSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDailyForecastDayPartLookup(key);
        if (old_field == NULL)
          {
            extraDailyForecastDayPartAppendPair(key, new_component);
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
        if (flagHasConditionsImage)
          {
            handler->start_pair("ConditionsImage");
            storeConditionsImage->write_as_json(handler);
          }
        if (flagHasIconPhrase)
          {
            handler->start_pair("IconPhrase");
            handler->string_value(storeIconPhrase);
          }
        if (flagHasShortPhrase)
          {
            handler->start_pair("ShortPhrase");
            handler->string_value(storeShortPhrase);
          }
        if (flagHasLongPhrase)
          {
            handler->start_pair("LongPhrase");
            handler->string_value(storeLongPhrase);
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
        if (flagHasLiquidTotal)
          {
            handler->start_pair("LiquidTotal");
            storeLiquidTotal->write_as_json(handler);
          }
        if (flagHasRainTotal)
          {
            handler->start_pair("RainTotal");
            storeRainTotal->write_as_json(handler);
          }
        if (flagHasSnowTotal)
          {
            handler->start_pair("SnowTotal");
            storeSnowTotal->write_as_json(handler);
          }
        if (flagHasIceTotal)
          {
            handler->start_pair("IceTotal");
            storeIceTotal->write_as_json(handler);
          }
        if (flagHasProbabilityOfPrecipitationPct)
          {
            handler->start_pair("ProbabilityOfPrecipitationPct");
            handler->number_value(storeProbabilityOfPrecipitationPct);
          }
        if (flagHasProbabilityOfThunderstormPct)
          {
            handler->start_pair("ProbabilityOfThunderstormPct");
            handler->number_value(storeProbabilityOfThunderstormPct);
          }
        if (flagHasProbabilityOfRainPct)
          {
            handler->start_pair("ProbabilityOfRainPct");
            handler->number_value(storeProbabilityOfRainPct);
          }
        if (flagHasProbabilityOfSnowPct)
          {
            handler->start_pair("ProbabilityOfSnowPct");
            handler->number_value(storeProbabilityOfSnowPct);
          }
        if (flagHasProbabilityOfIcePct)
          {
            handler->start_pair("ProbabilityOfIcePct");
            handler->number_value(storeProbabilityOfIcePct);
          }
        if (flagHasHoursOfPrecipitation)
          {
            handler->start_pair("HoursOfPrecipitation");
            if (textStoreHoursOfPrecipitation != "")
                handler->number_value(textStoreHoursOfPrecipitation.c_str());
            else if (((double)(long int)storeHoursOfPrecipitation) == storeHoursOfPrecipitation)
                handler->number_value((long int)storeHoursOfPrecipitation);
            else
                handler->number_value(storeHoursOfPrecipitation);
          }
        if (flagHasHoursOfRain)
          {
            handler->start_pair("HoursOfRain");
            if (textStoreHoursOfRain != "")
                handler->number_value(textStoreHoursOfRain.c_str());
            else if (((double)(long int)storeHoursOfRain) == storeHoursOfRain)
                handler->number_value((long int)storeHoursOfRain);
            else
                handler->number_value(storeHoursOfRain);
          }
        if (flagHasCloudCoverPct)
          {
            handler->start_pair("CloudCoverPct");
            handler->number_value(storeCloudCoverPct);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static DailyForecastDayPartJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DailyForecastDayPartJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DailyForecastDayPartJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DailyForecastDayPartJSON>, DailyForecastDayPartJSON *, bool> generator("Type DailyForecastDayPart", ignore_extras);
            parse_json_value(text, "Text for DailyForecastDayPartJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DailyForecastDayPartJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DailyForecastDayPartJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DailyForecastDayPartJSON>, DailyForecastDayPartJSON *, bool> generator("Type DailyForecastDayPart", ignore_extras);
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
        JSONHoldingGenerator<WeatherImageJSON::Generator, RCHandle<WeatherImageJSON>, WeatherImageJSON *, bool > fieldGeneratorConditionsImage;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorIconPhrase;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorShortPhrase;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLongPhrase;
        JSONHoldingGenerator<TypeWindJSON::Generator, RCHandle<TypeWindJSON>, TypeWindJSON *, bool > fieldGeneratorWind;
        JSONHoldingGenerator<TypeWindGustJSON::Generator, RCHandle<TypeWindGustJSON>, TypeWindGustJSON *, bool > fieldGeneratorWindGust;
        JSONHoldingGenerator<TypeLiquidTotalJSON::Generator, RCHandle<TypeLiquidTotalJSON>, TypeLiquidTotalJSON *, bool > fieldGeneratorLiquidTotal;
        JSONHoldingGenerator<TypeRainTotalJSON::Generator, RCHandle<TypeRainTotalJSON>, TypeRainTotalJSON *, bool > fieldGeneratorRainTotal;
        JSONHoldingGenerator<TypeSnowTotalJSON::Generator, RCHandle<TypeSnowTotalJSON>, TypeSnowTotalJSON *, bool > fieldGeneratorSnowTotal;
        JSONHoldingGenerator<TypeIceTotalJSON::Generator, RCHandle<TypeIceTotalJSON>, TypeIceTotalJSON *, bool > fieldGeneratorIceTotal;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorProbabilityOfPrecipitationPct;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorProbabilityOfThunderstormPct;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorProbabilityOfRainPct;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorProbabilityOfSnowPct;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorProbabilityOfIcePct;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHoursOfPrecipitation;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHoursOfRain;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorCloudCoverPct;
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
            DailyForecastDayPartJSON *result = new DailyForecastDayPartJSON();
            assert(result != NULL);
            RCHandle<DailyForecastDayPartJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDailyForecastDayPartAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DailyForecastDayPartJSON *result)
          {
            if (fieldGeneratorConditionsImage.have_value)
              {
                result->setConditionsImage(fieldGeneratorConditionsImage.value.referenced());
                fieldGeneratorConditionsImage.have_value = false;
              }
            if (fieldGeneratorIconPhrase.have_value)
              {
                result->setIconPhrase(fieldGeneratorIconPhrase.value);
                fieldGeneratorIconPhrase.have_value = false;
              }
            if (fieldGeneratorShortPhrase.have_value)
              {
                result->setShortPhrase(fieldGeneratorShortPhrase.value);
                fieldGeneratorShortPhrase.have_value = false;
              }
            if (fieldGeneratorLongPhrase.have_value)
              {
                result->setLongPhrase(fieldGeneratorLongPhrase.value);
                fieldGeneratorLongPhrase.have_value = false;
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
            if (fieldGeneratorLiquidTotal.have_value)
              {
                result->setLiquidTotal(fieldGeneratorLiquidTotal.value.referenced());
                fieldGeneratorLiquidTotal.have_value = false;
              }
            if (fieldGeneratorRainTotal.have_value)
              {
                result->setRainTotal(fieldGeneratorRainTotal.value.referenced());
                fieldGeneratorRainTotal.have_value = false;
              }
            if (fieldGeneratorSnowTotal.have_value)
              {
                result->setSnowTotal(fieldGeneratorSnowTotal.value.referenced());
                fieldGeneratorSnowTotal.have_value = false;
              }
            if (fieldGeneratorIceTotal.have_value)
              {
                result->setIceTotal(fieldGeneratorIceTotal.value.referenced());
                fieldGeneratorIceTotal.have_value = false;
              }
            if (fieldGeneratorProbabilityOfPrecipitationPct.have_value)
              {
                result->setProbabilityOfPrecipitationPct(fieldGeneratorProbabilityOfPrecipitationPct.value);
                fieldGeneratorProbabilityOfPrecipitationPct.have_value = false;
              }
            if (fieldGeneratorProbabilityOfThunderstormPct.have_value)
              {
                result->setProbabilityOfThunderstormPct(fieldGeneratorProbabilityOfThunderstormPct.value);
                fieldGeneratorProbabilityOfThunderstormPct.have_value = false;
              }
            if (fieldGeneratorProbabilityOfRainPct.have_value)
              {
                result->setProbabilityOfRainPct(fieldGeneratorProbabilityOfRainPct.value);
                fieldGeneratorProbabilityOfRainPct.have_value = false;
              }
            if (fieldGeneratorProbabilityOfSnowPct.have_value)
              {
                result->setProbabilityOfSnowPct(fieldGeneratorProbabilityOfSnowPct.value);
                fieldGeneratorProbabilityOfSnowPct.have_value = false;
              }
            if (fieldGeneratorProbabilityOfIcePct.have_value)
              {
                result->setProbabilityOfIcePct(fieldGeneratorProbabilityOfIcePct.value);
                fieldGeneratorProbabilityOfIcePct.have_value = false;
              }
            if (fieldGeneratorHoursOfPrecipitation.have_value)
              {
                result->setHoursOfPrecipitationText(fieldGeneratorHoursOfPrecipitation.value);
                fieldGeneratorHoursOfPrecipitation.have_value = false;
              }
            if (fieldGeneratorHoursOfRain.have_value)
              {
                result->setHoursOfRainText(fieldGeneratorHoursOfRain.value);
                fieldGeneratorHoursOfRain.have_value = false;
              }
            if (fieldGeneratorCloudCoverPct.have_value)
              {
                result->setCloudCoverPct(fieldGeneratorCloudCoverPct.value);
                fieldGeneratorCloudCoverPct.have_value = false;
              }
          }
        virtual void handle_result(DailyForecastDayPartJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "oudCoverPct") == 0)
                                return &fieldGeneratorCloudCoverPct;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "nditionsImage") == 0)
                                return &fieldGeneratorConditionsImage;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "oursOf", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'P':
                                if (strcmp(&(field_name[8]), "recipitation") == 0)
                                    return &fieldGeneratorHoursOfPrecipitation;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[8]), "ain") == 0)
                                    return &fieldGeneratorHoursOfRain;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "c", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[3]), "Total") == 0)
                                    return &fieldGeneratorIceTotal;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[3]), "nPhrase") == 0)
                                    return &fieldGeneratorIconPhrase;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "quidTotal") == 0)
                                return &fieldGeneratorLiquidTotal;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ngPhrase") == 0)
                                return &fieldGeneratorLongPhrase;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "robabilityOf", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[14]), "cePct") == 0)
                                    return &fieldGeneratorProbabilityOfIcePct;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[14]), "recipitationPct") == 0)
                                    return &fieldGeneratorProbabilityOfPrecipitationPct;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[14]), "ainPct") == 0)
                                    return &fieldGeneratorProbabilityOfRainPct;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[14]), "nowPct") == 0)
                                    return &fieldGeneratorProbabilityOfSnowPct;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[14]), "hunderstormPct") == 0)
                                    return &fieldGeneratorProbabilityOfThunderstormPct;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ainTotal") == 0)
                        return &fieldGeneratorRainTotal;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "ortPhrase") == 0)
                                return &fieldGeneratorShortPhrase;
                            break;
                        case 'n':
                            if (strcmp(&(field_name[2]), "owTotal") == 0)
                                return &fieldGeneratorSnowTotal;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "ind", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorWind;
                            case 'G':
                                if (strcmp(&(field_name[5]), "ust") == 0)
                                    return &fieldGeneratorWindGust;
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
        Generator(bool ignore_extras = false) : fieldGeneratorConditionsImage("field \"ConditionsImage\" of the DailyForecastDayPart class", ignore_extras), fieldGeneratorIconPhrase("field \"IconPhrase\" of the DailyForecastDayPart class"), fieldGeneratorShortPhrase("field \"ShortPhrase\" of the DailyForecastDayPart class"), fieldGeneratorLongPhrase("field \"LongPhrase\" of the DailyForecastDayPart class"), fieldGeneratorWind("field \"Wind\" of the DailyForecastDayPart class", ignore_extras), fieldGeneratorWindGust("field \"WindGust\" of the DailyForecastDayPart class", ignore_extras), fieldGeneratorLiquidTotal("field \"LiquidTotal\" of the DailyForecastDayPart class", ignore_extras), fieldGeneratorRainTotal("field \"RainTotal\" of the DailyForecastDayPart class", ignore_extras), fieldGeneratorSnowTotal("field \"SnowTotal\" of the DailyForecastDayPart class", ignore_extras), fieldGeneratorIceTotal("field \"IceTotal\" of the DailyForecastDayPart class", ignore_extras), fieldGeneratorProbabilityOfPrecipitationPct("field \"ProbabilityOfPrecipitationPct\" of the DailyForecastDayPart class"), fieldGeneratorProbabilityOfThunderstormPct("field \"ProbabilityOfThunderstormPct\" of the DailyForecastDayPart class"), fieldGeneratorProbabilityOfRainPct("field \"ProbabilityOfRainPct\" of the DailyForecastDayPart class"), fieldGeneratorProbabilityOfSnowPct("field \"ProbabilityOfSnowPct\" of the DailyForecastDayPart class"), fieldGeneratorProbabilityOfIcePct("field \"ProbabilityOfIcePct\" of the DailyForecastDayPart class"), fieldGeneratorHoursOfPrecipitation("field \"HoursOfPrecipitation\" of the DailyForecastDayPart class"), fieldGeneratorHoursOfRain("field \"HoursOfRain\" of the DailyForecastDayPart class"), fieldGeneratorCloudCoverPct("field \"CloudCoverPct\" of the DailyForecastDayPart class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DailyForecastDayPart class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorConditionsImage.reset();
            fieldGeneratorIconPhrase.reset();
            fieldGeneratorShortPhrase.reset();
            fieldGeneratorLongPhrase.reset();
            fieldGeneratorWind.reset();
            fieldGeneratorWindGust.reset();
            fieldGeneratorLiquidTotal.reset();
            fieldGeneratorRainTotal.reset();
            fieldGeneratorSnowTotal.reset();
            fieldGeneratorIceTotal.reset();
            fieldGeneratorProbabilityOfPrecipitationPct.reset();
            fieldGeneratorProbabilityOfThunderstormPct.reset();
            fieldGeneratorProbabilityOfRainPct.reset();
            fieldGeneratorProbabilityOfSnowPct.reset();
            fieldGeneratorProbabilityOfIcePct.reset();
            fieldGeneratorHoursOfPrecipitation.reset();
            fieldGeneratorHoursOfRain.reset();
            fieldGeneratorCloudCoverPct.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DAILYFORECASTDAYPARTJSON_H */
