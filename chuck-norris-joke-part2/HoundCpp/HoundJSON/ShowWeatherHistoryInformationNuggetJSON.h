/* file "ShowWeatherHistoryInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWWEATHERHISTORYINFORMATIONNUGGETJSON_H
#define SHOWWEATHERHISTORYINFORMATIONNUGGETJSON_H

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
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "AlertJSON.h"
#include "DateAndOrTimeJSON.h"
#include "HistoryObservationJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "UnitsValue_PrecipitationJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_SnowJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_TemperatureJSON.h"
#include "UnitsValue_PressureJSON.h"
#include "UnitsValue_PressureJSON.h"
#include "UnitsValue_PressureJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_WindJSON.h"
#include "UnitsValue_VisibilityJSON.h"
#include "UnitsValue_VisibilityJSON.h"
#include "UnitsValue_VisibilityJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowWeatherHistoryInformationNuggetJSON : public WeatherInformationNuggetJSON
  {
  public:
    class TypeDailySummaryJSON : public ReferenceCounted
      {
      public:
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
        class TypeSnowfallJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_SnowJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeSnowfallJSON(const TypeSnowfallJSON &);
            TypeSnowfallJSON & operator=(const TypeSnowfallJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeSnowfallJSON(void);
            virtual ~TypeSnowfallJSON(void);
            bool  hasValue(void) const;
            UnitsValue_SnowJSON *  getValue(void);
            const UnitsValue_SnowJSON *  getValue(void) const;

            virtual size_t extraTypeSnowfallComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeSnowfallComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeSnowfallComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeSnowfallComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeSnowfallLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeSnowfallLookup(const char *field_name) const
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

            virtual void extraTypeSnowfallAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeSnowfallSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeSnowfallLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeSnowfallAppendPair(key, new_component);
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

            static TypeSnowfallJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeSnowfallJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeSnowfallJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallJSON>, TypeSnowfallJSON *, bool> generator("Type TypeSnowfall", ignore_extras);
                    parse_json_value(text, "Text for TypeSnowfallJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeSnowfallJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeSnowfallJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallJSON>, TypeSnowfallJSON *, bool> generator("Type TypeSnowfall", ignore_extras);
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
                    TypeSnowfallJSON *result = new TypeSnowfallJSON();
                    assert(result != NULL);
                    RCHandle<TypeSnowfallJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeSnowfallAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeSnowfallJSON *result)
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
                virtual void handle_result(TypeSnowfallJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeSnowfall class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeSnowfall class");
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
        class TypeSnowfallMonthToDateJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_SnowJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeSnowfallMonthToDateJSON(const TypeSnowfallMonthToDateJSON &);
            TypeSnowfallMonthToDateJSON & operator=(const TypeSnowfallMonthToDateJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeSnowfallMonthToDateJSON(void);
            virtual ~TypeSnowfallMonthToDateJSON(void);
            bool  hasValue(void) const;
            UnitsValue_SnowJSON *  getValue(void);
            const UnitsValue_SnowJSON *  getValue(void) const;

            virtual size_t extraTypeSnowfallMonthToDateComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeSnowfallMonthToDateComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeSnowfallMonthToDateComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeSnowfallMonthToDateComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeSnowfallMonthToDateLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeSnowfallMonthToDateLookup(const char *field_name) const
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

            virtual void extraTypeSnowfallMonthToDateAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeSnowfallMonthToDateSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeSnowfallMonthToDateLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeSnowfallMonthToDateAppendPair(key, new_component);
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

            static TypeSnowfallMonthToDateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeSnowfallMonthToDateJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeSnowfallMonthToDateJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallMonthToDateJSON>, TypeSnowfallMonthToDateJSON *, bool> generator("Type TypeSnowfallMonthToDate", ignore_extras);
                    parse_json_value(text, "Text for TypeSnowfallMonthToDateJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeSnowfallMonthToDateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeSnowfallMonthToDateJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallMonthToDateJSON>, TypeSnowfallMonthToDateJSON *, bool> generator("Type TypeSnowfallMonthToDate", ignore_extras);
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
                    TypeSnowfallMonthToDateJSON *result = new TypeSnowfallMonthToDateJSON();
                    assert(result != NULL);
                    RCHandle<TypeSnowfallMonthToDateJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeSnowfallMonthToDateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeSnowfallMonthToDateJSON *result)
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
                virtual void handle_result(TypeSnowfallMonthToDateJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeSnowfallMonthToDate class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeSnowfallMonthToDate class");
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
        class TypeSnowfallSinceJulyFirstJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_SnowJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeSnowfallSinceJulyFirstJSON(const TypeSnowfallSinceJulyFirstJSON &);
            TypeSnowfallSinceJulyFirstJSON & operator=(const TypeSnowfallSinceJulyFirstJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeSnowfallSinceJulyFirstJSON(void);
            virtual ~TypeSnowfallSinceJulyFirstJSON(void);
            bool  hasValue(void) const;
            UnitsValue_SnowJSON *  getValue(void);
            const UnitsValue_SnowJSON *  getValue(void) const;

            virtual size_t extraTypeSnowfallSinceJulyFirstComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeSnowfallSinceJulyFirstComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeSnowfallSinceJulyFirstComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeSnowfallSinceJulyFirstComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeSnowfallSinceJulyFirstLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeSnowfallSinceJulyFirstLookup(const char *field_name) const
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

            virtual void extraTypeSnowfallSinceJulyFirstAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeSnowfallSinceJulyFirstSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeSnowfallSinceJulyFirstLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeSnowfallSinceJulyFirstAppendPair(key, new_component);
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

            static TypeSnowfallSinceJulyFirstJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeSnowfallSinceJulyFirstJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeSnowfallSinceJulyFirstJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallSinceJulyFirstJSON>, TypeSnowfallSinceJulyFirstJSON *, bool> generator("Type TypeSnowfallSinceJulyFirst", ignore_extras);
                    parse_json_value(text, "Text for TypeSnowfallSinceJulyFirstJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeSnowfallSinceJulyFirstJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeSnowfallSinceJulyFirstJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallSinceJulyFirstJSON>, TypeSnowfallSinceJulyFirstJSON *, bool> generator("Type TypeSnowfallSinceJulyFirst", ignore_extras);
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
                    TypeSnowfallSinceJulyFirstJSON *result = new TypeSnowfallSinceJulyFirstJSON();
                    assert(result != NULL);
                    RCHandle<TypeSnowfallSinceJulyFirstJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeSnowfallSinceJulyFirstAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeSnowfallSinceJulyFirstJSON *result)
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
                virtual void handle_result(TypeSnowfallSinceJulyFirstJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeSnowfallSinceJulyFirst class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeSnowfallSinceJulyFirst class");
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
        class TypeSnowDepthJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_SnowJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeSnowDepthJSON(const TypeSnowDepthJSON &);
            TypeSnowDepthJSON & operator=(const TypeSnowDepthJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeSnowDepthJSON(void);
            virtual ~TypeSnowDepthJSON(void);
            bool  hasValue(void) const;
            UnitsValue_SnowJSON *  getValue(void);
            const UnitsValue_SnowJSON *  getValue(void) const;

            virtual size_t extraTypeSnowDepthComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeSnowDepthComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeSnowDepthComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeSnowDepthComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeSnowDepthLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeSnowDepthLookup(const char *field_name) const
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

            virtual void extraTypeSnowDepthAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeSnowDepthSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeSnowDepthLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeSnowDepthAppendPair(key, new_component);
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

            static TypeSnowDepthJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeSnowDepthJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeSnowDepthJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowDepthJSON>, TypeSnowDepthJSON *, bool> generator("Type TypeSnowDepth", ignore_extras);
                    parse_json_value(text, "Text for TypeSnowDepthJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeSnowDepthJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeSnowDepthJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeSnowDepthJSON>, TypeSnowDepthJSON *, bool> generator("Type TypeSnowDepth", ignore_extras);
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
                    TypeSnowDepthJSON *result = new TypeSnowDepthJSON();
                    assert(result != NULL);
                    RCHandle<TypeSnowDepthJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeSnowDepthAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeSnowDepthJSON *result)
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
                virtual void handle_result(TypeSnowDepthJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeSnowDepth class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeSnowDepth class");
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
        class TypeMaxTemperatureJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_TemperatureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMaxTemperatureJSON(const TypeMaxTemperatureJSON &);
            TypeMaxTemperatureJSON & operator=(const TypeMaxTemperatureJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMaxTemperatureJSON(void);
            virtual ~TypeMaxTemperatureJSON(void);
            bool  hasValue(void) const;
            UnitsValue_TemperatureJSON *  getValue(void);
            const UnitsValue_TemperatureJSON *  getValue(void) const;

            virtual size_t extraTypeMaxTemperatureComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMaxTemperatureComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMaxTemperatureComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMaxTemperatureComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMaxTemperatureLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMaxTemperatureLookup(const char *field_name) const
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

            virtual void extraTypeMaxTemperatureAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMaxTemperatureSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMaxTemperatureLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMaxTemperatureAppendPair(key, new_component);
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

            static TypeMaxTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMaxTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMaxTemperatureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxTemperatureJSON>, TypeMaxTemperatureJSON *, bool> generator("Type TypeMaxTemperature", ignore_extras);
                    parse_json_value(text, "Text for TypeMaxTemperatureJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMaxTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMaxTemperatureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxTemperatureJSON>, TypeMaxTemperatureJSON *, bool> generator("Type TypeMaxTemperature", ignore_extras);
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
                    TypeMaxTemperatureJSON *result = new TypeMaxTemperatureJSON();
                    assert(result != NULL);
                    RCHandle<TypeMaxTemperatureJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMaxTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMaxTemperatureJSON *result)
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
                virtual void handle_result(TypeMaxTemperatureJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMaxTemperature class");
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
        class TypeMinTemperatureJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_TemperatureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMinTemperatureJSON(const TypeMinTemperatureJSON &);
            TypeMinTemperatureJSON & operator=(const TypeMinTemperatureJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMinTemperatureJSON(void);
            virtual ~TypeMinTemperatureJSON(void);
            bool  hasValue(void) const;
            UnitsValue_TemperatureJSON *  getValue(void);
            const UnitsValue_TemperatureJSON *  getValue(void) const;

            virtual size_t extraTypeMinTemperatureComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMinTemperatureComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMinTemperatureComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMinTemperatureComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMinTemperatureLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMinTemperatureLookup(const char *field_name) const
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

            virtual void extraTypeMinTemperatureAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMinTemperatureSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMinTemperatureLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMinTemperatureAppendPair(key, new_component);
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

            static TypeMinTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMinTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMinTemperatureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinTemperatureJSON>, TypeMinTemperatureJSON *, bool> generator("Type TypeMinTemperature", ignore_extras);
                    parse_json_value(text, "Text for TypeMinTemperatureJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMinTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMinTemperatureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinTemperatureJSON>, TypeMinTemperatureJSON *, bool> generator("Type TypeMinTemperature", ignore_extras);
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
                    TypeMinTemperatureJSON *result = new TypeMinTemperatureJSON();
                    assert(result != NULL);
                    RCHandle<TypeMinTemperatureJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMinTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMinTemperatureJSON *result)
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
                virtual void handle_result(TypeMinTemperatureJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinTemperature class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMinTemperature class");
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
        class TypeMaxDewPointJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_TemperatureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMaxDewPointJSON(const TypeMaxDewPointJSON &);
            TypeMaxDewPointJSON & operator=(const TypeMaxDewPointJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMaxDewPointJSON(void);
            virtual ~TypeMaxDewPointJSON(void);
            bool  hasValue(void) const;
            UnitsValue_TemperatureJSON *  getValue(void);
            const UnitsValue_TemperatureJSON *  getValue(void) const;

            virtual size_t extraTypeMaxDewPointComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMaxDewPointComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMaxDewPointComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMaxDewPointComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMaxDewPointLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMaxDewPointLookup(const char *field_name) const
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

            virtual void extraTypeMaxDewPointAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMaxDewPointSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMaxDewPointLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMaxDewPointAppendPair(key, new_component);
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

            static TypeMaxDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMaxDewPointJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMaxDewPointJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxDewPointJSON>, TypeMaxDewPointJSON *, bool> generator("Type TypeMaxDewPoint", ignore_extras);
                    parse_json_value(text, "Text for TypeMaxDewPointJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMaxDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMaxDewPointJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxDewPointJSON>, TypeMaxDewPointJSON *, bool> generator("Type TypeMaxDewPoint", ignore_extras);
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
                    TypeMaxDewPointJSON *result = new TypeMaxDewPointJSON();
                    assert(result != NULL);
                    RCHandle<TypeMaxDewPointJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMaxDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMaxDewPointJSON *result)
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
                virtual void handle_result(TypeMaxDewPointJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMaxDewPoint class");
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
        class TypeAvgDewPointJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_TemperatureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeAvgDewPointJSON(const TypeAvgDewPointJSON &);
            TypeAvgDewPointJSON & operator=(const TypeAvgDewPointJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAvgDewPointJSON(void);
            virtual ~TypeAvgDewPointJSON(void);
            bool  hasValue(void) const;
            UnitsValue_TemperatureJSON *  getValue(void);
            const UnitsValue_TemperatureJSON *  getValue(void) const;

            virtual size_t extraTypeAvgDewPointComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeAvgDewPointComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeAvgDewPointComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeAvgDewPointComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeAvgDewPointLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeAvgDewPointLookup(const char *field_name) const
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

            virtual void extraTypeAvgDewPointAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeAvgDewPointSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeAvgDewPointLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeAvgDewPointAppendPair(key, new_component);
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

            static TypeAvgDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAvgDewPointJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAvgDewPointJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAvgDewPointJSON>, TypeAvgDewPointJSON *, bool> generator("Type TypeAvgDewPoint", ignore_extras);
                    parse_json_value(text, "Text for TypeAvgDewPointJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAvgDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAvgDewPointJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAvgDewPointJSON>, TypeAvgDewPointJSON *, bool> generator("Type TypeAvgDewPoint", ignore_extras);
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
                    TypeAvgDewPointJSON *result = new TypeAvgDewPointJSON();
                    assert(result != NULL);
                    RCHandle<TypeAvgDewPointJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeAvgDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeAvgDewPointJSON *result)
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
                virtual void handle_result(TypeAvgDewPointJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeAvgDewPoint class");
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
        class TypeMinDewPointJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_TemperatureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMinDewPointJSON(const TypeMinDewPointJSON &);
            TypeMinDewPointJSON & operator=(const TypeMinDewPointJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMinDewPointJSON(void);
            virtual ~TypeMinDewPointJSON(void);
            bool  hasValue(void) const;
            UnitsValue_TemperatureJSON *  getValue(void);
            const UnitsValue_TemperatureJSON *  getValue(void) const;

            virtual size_t extraTypeMinDewPointComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMinDewPointComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMinDewPointComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMinDewPointComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMinDewPointLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMinDewPointLookup(const char *field_name) const
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

            virtual void extraTypeMinDewPointAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMinDewPointSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMinDewPointLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMinDewPointAppendPair(key, new_component);
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

            static TypeMinDewPointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMinDewPointJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMinDewPointJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinDewPointJSON>, TypeMinDewPointJSON *, bool> generator("Type TypeMinDewPoint", ignore_extras);
                    parse_json_value(text, "Text for TypeMinDewPointJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMinDewPointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMinDewPointJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinDewPointJSON>, TypeMinDewPointJSON *, bool> generator("Type TypeMinDewPoint", ignore_extras);
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
                    TypeMinDewPointJSON *result = new TypeMinDewPointJSON();
                    assert(result != NULL);
                    RCHandle<TypeMinDewPointJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMinDewPointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMinDewPointJSON *result)
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
                virtual void handle_result(TypeMinDewPointJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinDewPoint class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMinDewPoint class");
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
        class TypeMaxPressureJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_PressureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMaxPressureJSON(const TypeMaxPressureJSON &);
            TypeMaxPressureJSON & operator=(const TypeMaxPressureJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMaxPressureJSON(void);
            virtual ~TypeMaxPressureJSON(void);
            bool  hasValue(void) const;
            UnitsValue_PressureJSON *  getValue(void);
            const UnitsValue_PressureJSON *  getValue(void) const;

            virtual size_t extraTypeMaxPressureComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMaxPressureComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMaxPressureComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMaxPressureComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMaxPressureLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMaxPressureLookup(const char *field_name) const
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

            virtual void extraTypeMaxPressureAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMaxPressureSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMaxPressureLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMaxPressureAppendPair(key, new_component);
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

            static TypeMaxPressureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMaxPressureJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMaxPressureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxPressureJSON>, TypeMaxPressureJSON *, bool> generator("Type TypeMaxPressure", ignore_extras);
                    parse_json_value(text, "Text for TypeMaxPressureJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMaxPressureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMaxPressureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxPressureJSON>, TypeMaxPressureJSON *, bool> generator("Type TypeMaxPressure", ignore_extras);
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
                    TypeMaxPressureJSON *result = new TypeMaxPressureJSON();
                    assert(result != NULL);
                    RCHandle<TypeMaxPressureJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMaxPressureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMaxPressureJSON *result)
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
                virtual void handle_result(TypeMaxPressureJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxPressure class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMaxPressure class");
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
        class TypeAvgPressureJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_PressureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeAvgPressureJSON(const TypeAvgPressureJSON &);
            TypeAvgPressureJSON & operator=(const TypeAvgPressureJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAvgPressureJSON(void);
            virtual ~TypeAvgPressureJSON(void);
            bool  hasValue(void) const;
            UnitsValue_PressureJSON *  getValue(void);
            const UnitsValue_PressureJSON *  getValue(void) const;

            virtual size_t extraTypeAvgPressureComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeAvgPressureComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeAvgPressureComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeAvgPressureComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeAvgPressureLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeAvgPressureLookup(const char *field_name) const
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

            virtual void extraTypeAvgPressureAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeAvgPressureSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeAvgPressureLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeAvgPressureAppendPair(key, new_component);
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

            static TypeAvgPressureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAvgPressureJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAvgPressureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAvgPressureJSON>, TypeAvgPressureJSON *, bool> generator("Type TypeAvgPressure", ignore_extras);
                    parse_json_value(text, "Text for TypeAvgPressureJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAvgPressureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAvgPressureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAvgPressureJSON>, TypeAvgPressureJSON *, bool> generator("Type TypeAvgPressure", ignore_extras);
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
                    TypeAvgPressureJSON *result = new TypeAvgPressureJSON();
                    assert(result != NULL);
                    RCHandle<TypeAvgPressureJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeAvgPressureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeAvgPressureJSON *result)
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
                virtual void handle_result(TypeAvgPressureJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgPressure class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeAvgPressure class");
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
        class TypeMinPressureJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_PressureJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMinPressureJSON(const TypeMinPressureJSON &);
            TypeMinPressureJSON & operator=(const TypeMinPressureJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMinPressureJSON(void);
            virtual ~TypeMinPressureJSON(void);
            bool  hasValue(void) const;
            UnitsValue_PressureJSON *  getValue(void);
            const UnitsValue_PressureJSON *  getValue(void) const;

            virtual size_t extraTypeMinPressureComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMinPressureComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMinPressureComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMinPressureComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMinPressureLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMinPressureLookup(const char *field_name) const
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

            virtual void extraTypeMinPressureAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMinPressureSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMinPressureLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMinPressureAppendPair(key, new_component);
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

            static TypeMinPressureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMinPressureJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMinPressureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinPressureJSON>, TypeMinPressureJSON *, bool> generator("Type TypeMinPressure", ignore_extras);
                    parse_json_value(text, "Text for TypeMinPressureJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMinPressureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMinPressureJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinPressureJSON>, TypeMinPressureJSON *, bool> generator("Type TypeMinPressure", ignore_extras);
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
                    TypeMinPressureJSON *result = new TypeMinPressureJSON();
                    assert(result != NULL);
                    RCHandle<TypeMinPressureJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMinPressureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMinPressureJSON *result)
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
                virtual void handle_result(TypeMinPressureJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinPressure class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMinPressure class");
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
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMaxWindJSON(const TypeMaxWindJSON &);
            TypeMaxWindJSON & operator=(const TypeMaxWindJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMaxWindJSON(void);
            virtual ~TypeMaxWindJSON(void);
            bool  hasValue(void) const;
            UnitsValue_WindJSON *  getValue(void);
            const UnitsValue_WindJSON *  getValue(void) const;

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
                  }
                virtual void handle_result(TypeMaxWindJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxWind class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMaxWind class");
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
        class TypeMinWindJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_WindJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMinWindJSON(const TypeMinWindJSON &);
            TypeMinWindJSON & operator=(const TypeMinWindJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMinWindJSON(void);
            virtual ~TypeMinWindJSON(void);
            bool  hasValue(void) const;
            UnitsValue_WindJSON *  getValue(void);
            const UnitsValue_WindJSON *  getValue(void) const;

            virtual size_t extraTypeMinWindComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMinWindComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMinWindComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMinWindComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMinWindLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMinWindLookup(const char *field_name) const
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

            virtual void extraTypeMinWindAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMinWindSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMinWindLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMinWindAppendPair(key, new_component);
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
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static TypeMinWindJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMinWindJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMinWindJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinWindJSON>, TypeMinWindJSON *, bool> generator("Type TypeMinWind", ignore_extras);
                    parse_json_value(text, "Text for TypeMinWindJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMinWindJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMinWindJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinWindJSON>, TypeMinWindJSON *, bool> generator("Type TypeMinWind", ignore_extras);
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
                    TypeMinWindJSON *result = new TypeMinWindJSON();
                    assert(result != NULL);
                    RCHandle<TypeMinWindJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMinWindAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMinWindJSON *result)
                  {
                    if (fieldGeneratorValue.have_value)
                      {
                        result->setValue(fieldGeneratorValue.value.referenced());
                        fieldGeneratorValue.have_value = false;
                      }
                  }
                virtual void handle_result(TypeMinWindJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinWind class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMinWind class");
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
        class TypeMaxVisibilityJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_VisibilityJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMaxVisibilityJSON(const TypeMaxVisibilityJSON &);
            TypeMaxVisibilityJSON & operator=(const TypeMaxVisibilityJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMaxVisibilityJSON(void);
            virtual ~TypeMaxVisibilityJSON(void);
            bool  hasValue(void) const;
            UnitsValue_VisibilityJSON *  getValue(void);
            const UnitsValue_VisibilityJSON *  getValue(void) const;

            virtual size_t extraTypeMaxVisibilityComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMaxVisibilityComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMaxVisibilityComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMaxVisibilityComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMaxVisibilityLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMaxVisibilityLookup(const char *field_name) const
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

            virtual void extraTypeMaxVisibilityAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMaxVisibilitySetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMaxVisibilityLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMaxVisibilityAppendPair(key, new_component);
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

            static TypeMaxVisibilityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMaxVisibilityJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMaxVisibilityJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxVisibilityJSON>, TypeMaxVisibilityJSON *, bool> generator("Type TypeMaxVisibility", ignore_extras);
                    parse_json_value(text, "Text for TypeMaxVisibilityJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMaxVisibilityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMaxVisibilityJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMaxVisibilityJSON>, TypeMaxVisibilityJSON *, bool> generator("Type TypeMaxVisibility", ignore_extras);
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
                    TypeMaxVisibilityJSON *result = new TypeMaxVisibilityJSON();
                    assert(result != NULL);
                    RCHandle<TypeMaxVisibilityJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMaxVisibilityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMaxVisibilityJSON *result)
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
                virtual void handle_result(TypeMaxVisibilityJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMaxVisibility class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMaxVisibility class");
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
        class TypeAvgVisibilityJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_VisibilityJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeAvgVisibilityJSON(const TypeAvgVisibilityJSON &);
            TypeAvgVisibilityJSON & operator=(const TypeAvgVisibilityJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAvgVisibilityJSON(void);
            virtual ~TypeAvgVisibilityJSON(void);
            bool  hasValue(void) const;
            UnitsValue_VisibilityJSON *  getValue(void);
            const UnitsValue_VisibilityJSON *  getValue(void) const;

            virtual size_t extraTypeAvgVisibilityComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeAvgVisibilityComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeAvgVisibilityComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeAvgVisibilityComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeAvgVisibilityLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeAvgVisibilityLookup(const char *field_name) const
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

            virtual void extraTypeAvgVisibilityAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeAvgVisibilitySetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeAvgVisibilityLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeAvgVisibilityAppendPair(key, new_component);
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

            static TypeAvgVisibilityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAvgVisibilityJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAvgVisibilityJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAvgVisibilityJSON>, TypeAvgVisibilityJSON *, bool> generator("Type TypeAvgVisibility", ignore_extras);
                    parse_json_value(text, "Text for TypeAvgVisibilityJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAvgVisibilityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAvgVisibilityJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAvgVisibilityJSON>, TypeAvgVisibilityJSON *, bool> generator("Type TypeAvgVisibility", ignore_extras);
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
                    TypeAvgVisibilityJSON *result = new TypeAvgVisibilityJSON();
                    assert(result != NULL);
                    RCHandle<TypeAvgVisibilityJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeAvgVisibilityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeAvgVisibilityJSON *result)
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
                virtual void handle_result(TypeAvgVisibilityJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeAvgVisibility class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeAvgVisibility class");
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
        class TypeMinVisibilityJSON : public ReferenceCounted
          {
          private:
            bool flagHasValue;
            UnitsValue_VisibilityJSON * storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeMinVisibilityJSON(const TypeMinVisibilityJSON &);
            TypeMinVisibilityJSON & operator=(const TypeMinVisibilityJSON &other);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeMinVisibilityJSON(void);
            virtual ~TypeMinVisibilityJSON(void);
            bool  hasValue(void) const;
            UnitsValue_VisibilityJSON *  getValue(void);
            const UnitsValue_VisibilityJSON *  getValue(void) const;

            virtual size_t extraTypeMinVisibilityComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeMinVisibilityComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeMinVisibilityComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeMinVisibilityComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeMinVisibilityLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeMinVisibilityLookup(const char *field_name) const
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

            virtual void extraTypeMinVisibilityAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeMinVisibilitySetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeMinVisibilityLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeMinVisibilityAppendPair(key, new_component);
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

            static TypeMinVisibilityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeMinVisibilityJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeMinVisibilityJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinVisibilityJSON>, TypeMinVisibilityJSON *, bool> generator("Type TypeMinVisibility", ignore_extras);
                    parse_json_value(text, "Text for TypeMinVisibilityJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeMinVisibilityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeMinVisibilityJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeMinVisibilityJSON>, TypeMinVisibilityJSON *, bool> generator("Type TypeMinVisibility", ignore_extras);
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
                    TypeMinVisibilityJSON *result = new TypeMinVisibilityJSON();
                    assert(result != NULL);
                    RCHandle<TypeMinVisibilityJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeMinVisibilityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeMinVisibilityJSON *result)
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
                virtual void handle_result(TypeMinVisibilityJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Value") == 0)
                        return &fieldGeneratorValue;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeMinVisibility class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeMinVisibility class");
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
        bool flagHasDateAndTime;
        DateAndOrTimeJSON * storeDateAndTime;
        bool flagHasSunriseDateAndTime;
        DateAndOrTimeJSON * storeSunriseDateAndTime;
        bool flagHasSunsetDateAndTime;
        DateAndOrTimeJSON * storeSunsetDateAndTime;
        bool flagHasMoonPhaseText;
        std::string storeMoonPhaseText;
        bool flagHasMoonPhasePct;
        uint8_t storeMoonPhasePct;
        bool flagHasPrecipitation;
        TypePrecipitationJSON * storePrecipitation;
        bool flagHasSnowfall;
        TypeSnowfallJSON * storeSnowfall;
        bool flagHasSnowfallMonthToDate;
        TypeSnowfallMonthToDateJSON * storeSnowfallMonthToDate;
        bool flagHasSnowfallSinceJulyFirst;
        TypeSnowfallSinceJulyFirstJSON * storeSnowfallSinceJulyFirst;
        bool flagHasSnowDepth;
        TypeSnowDepthJSON * storeSnowDepth;
        bool flagHasMaxTemperature;
        TypeMaxTemperatureJSON * storeMaxTemperature;
        bool flagHasAvgTemperature;
        TypeAvgTemperatureJSON * storeAvgTemperature;
        bool flagHasMinTemperature;
        TypeMinTemperatureJSON * storeMinTemperature;
        bool flagHasMaxDewPoint;
        TypeMaxDewPointJSON * storeMaxDewPoint;
        bool flagHasAvgDewPoint;
        TypeAvgDewPointJSON * storeAvgDewPoint;
        bool flagHasMinDewPoint;
        TypeMinDewPointJSON * storeMinDewPoint;
        bool flagHasMaxHumidityPct;
        uint8_t storeMaxHumidityPct;
        bool flagHasAvgHumidityPct;
        uint8_t storeAvgHumidityPct;
        bool flagHasMinHumidityPct;
        uint8_t storeMinHumidityPct;
        bool flagHasMaxPressure;
        TypeMaxPressureJSON * storeMaxPressure;
        bool flagHasAvgPressure;
        TypeAvgPressureJSON * storeAvgPressure;
        bool flagHasMinPressure;
        TypeMinPressureJSON * storeMinPressure;
        bool flagHasMaxWind;
        TypeMaxWindJSON * storeMaxWind;
        bool flagHasAvgWind;
        TypeAvgWindJSON * storeAvgWind;
        bool flagHasMinWind;
        TypeMinWindJSON * storeMinWind;
        bool flagHasMaxVisibility;
        TypeMaxVisibilityJSON * storeMaxVisibility;
        bool flagHasAvgVisibility;
        TypeAvgVisibilityJSON * storeAvgVisibility;
        bool flagHasMinVisibility;
        TypeMinVisibilityJSON * storeMinVisibility;
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

        TypeDailySummaryJSON(const TypeDailySummaryJSON &);
        TypeDailySummaryJSON & operator=(const TypeDailySummaryJSON &other);

        void  fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSunriseDateAndTime(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSunsetDateAndTime(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMoonPhaseText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMoonPhasePct(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPrecipitation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSnowfall(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSnowfallMonthToDate(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSnowfallSinceJulyFirst(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSnowDepth(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxTemperature(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAvgTemperature(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinTemperature(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxDewPoint(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAvgDewPoint(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinDewPoint(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxHumidityPct(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAvgHumidityPct(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinHumidityPct(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxPressure(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAvgPressure(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinPressure(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxWind(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAvgWind(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinWind(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxVisibility(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAvgVisibility(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinVisibility(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFog(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRain(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSnow(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONHail(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONThunder(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTornado(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDailySummaryJSON(void);
        virtual ~TypeDailySummaryJSON(void);
        bool  hasDateAndTime(void) const;
        DateAndOrTimeJSON *  getDateAndTime(void);
        const DateAndOrTimeJSON *  getDateAndTime(void) const;
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
        bool  hasPrecipitation(void) const;
        TypePrecipitationJSON *  getPrecipitation(void);
        const TypePrecipitationJSON *  getPrecipitation(void) const;
        bool  hasSnowfall(void) const;
        TypeSnowfallJSON *  getSnowfall(void);
        const TypeSnowfallJSON *  getSnowfall(void) const;
        bool  hasSnowfallMonthToDate(void) const;
        TypeSnowfallMonthToDateJSON *  getSnowfallMonthToDate(void);
        const TypeSnowfallMonthToDateJSON *  getSnowfallMonthToDate(void) const;
        bool  hasSnowfallSinceJulyFirst(void) const;
        TypeSnowfallSinceJulyFirstJSON *  getSnowfallSinceJulyFirst(void);
        const TypeSnowfallSinceJulyFirstJSON *  getSnowfallSinceJulyFirst(void) const;
        bool  hasSnowDepth(void) const;
        TypeSnowDepthJSON *  getSnowDepth(void);
        const TypeSnowDepthJSON *  getSnowDepth(void) const;
        bool  hasMaxTemperature(void) const;
        TypeMaxTemperatureJSON *  getMaxTemperature(void);
        const TypeMaxTemperatureJSON *  getMaxTemperature(void) const;
        bool  hasAvgTemperature(void) const;
        TypeAvgTemperatureJSON *  getAvgTemperature(void);
        const TypeAvgTemperatureJSON *  getAvgTemperature(void) const;
        bool  hasMinTemperature(void) const;
        TypeMinTemperatureJSON *  getMinTemperature(void);
        const TypeMinTemperatureJSON *  getMinTemperature(void) const;
        bool  hasMaxDewPoint(void) const;
        TypeMaxDewPointJSON *  getMaxDewPoint(void);
        const TypeMaxDewPointJSON *  getMaxDewPoint(void) const;
        bool  hasAvgDewPoint(void) const;
        TypeAvgDewPointJSON *  getAvgDewPoint(void);
        const TypeAvgDewPointJSON *  getAvgDewPoint(void) const;
        bool  hasMinDewPoint(void) const;
        TypeMinDewPointJSON *  getMinDewPoint(void);
        const TypeMinDewPointJSON *  getMinDewPoint(void) const;
        bool  hasMaxHumidityPct(void) const;
        uint8_t  getMaxHumidityPct(void);
        const uint8_t  getMaxHumidityPct(void) const;
        bool  hasAvgHumidityPct(void) const;
        uint8_t  getAvgHumidityPct(void);
        const uint8_t  getAvgHumidityPct(void) const;
        bool  hasMinHumidityPct(void) const;
        uint8_t  getMinHumidityPct(void);
        const uint8_t  getMinHumidityPct(void) const;
        bool  hasMaxPressure(void) const;
        TypeMaxPressureJSON *  getMaxPressure(void);
        const TypeMaxPressureJSON *  getMaxPressure(void) const;
        bool  hasAvgPressure(void) const;
        TypeAvgPressureJSON *  getAvgPressure(void);
        const TypeAvgPressureJSON *  getAvgPressure(void) const;
        bool  hasMinPressure(void) const;
        TypeMinPressureJSON *  getMinPressure(void);
        const TypeMinPressureJSON *  getMinPressure(void) const;
        bool  hasMaxWind(void) const;
        TypeMaxWindJSON *  getMaxWind(void);
        const TypeMaxWindJSON *  getMaxWind(void) const;
        bool  hasAvgWind(void) const;
        TypeAvgWindJSON *  getAvgWind(void);
        const TypeAvgWindJSON *  getAvgWind(void) const;
        bool  hasMinWind(void) const;
        TypeMinWindJSON *  getMinWind(void);
        const TypeMinWindJSON *  getMinWind(void) const;
        bool  hasMaxVisibility(void) const;
        TypeMaxVisibilityJSON *  getMaxVisibility(void);
        const TypeMaxVisibilityJSON *  getMaxVisibility(void) const;
        bool  hasAvgVisibility(void) const;
        TypeAvgVisibilityJSON *  getAvgVisibility(void);
        const TypeAvgVisibilityJSON *  getAvgVisibility(void) const;
        bool  hasMinVisibility(void) const;
        TypeMinVisibilityJSON *  getMinVisibility(void);
        const TypeMinVisibilityJSON *  getMinVisibility(void) const;
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

        virtual size_t extraTypeDailySummaryComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeDailySummaryComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeDailySummaryComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeDailySummaryComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeDailySummaryLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeDailySummaryLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setDateAndTime(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasDateAndTime)
              {
                storeDateAndTime->remove_reference();
              }
            flagHasDateAndTime = true;
            storeDateAndTime = new_value;
          }
        void unsetDateAndTime(void)
          {
            if (flagHasDateAndTime)
              {
                storeDateAndTime->remove_reference();
              }
            flagHasDateAndTime = false;
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
                throw("The value for field MoonPhasePct of TypeDailySummaryJSON is less than the lower bound (0) for that field.");
            if (new_value > 100)
                throw("The value for field MoonPhasePct of TypeDailySummaryJSON is greater than the upper bound (100) for that field.");
            storeMoonPhasePct = new_value;
          }
        void unsetMoonPhasePct(void)
          {
            flagHasMoonPhasePct = false;
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
        void setSnowfall(TypeSnowfallJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSnowfall)
              {
                storeSnowfall->remove_reference();
              }
            flagHasSnowfall = true;
            storeSnowfall = new_value;
          }
        void unsetSnowfall(void)
          {
            if (flagHasSnowfall)
              {
                storeSnowfall->remove_reference();
              }
            flagHasSnowfall = false;
          }
        void setSnowfallMonthToDate(TypeSnowfallMonthToDateJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSnowfallMonthToDate)
              {
                storeSnowfallMonthToDate->remove_reference();
              }
            flagHasSnowfallMonthToDate = true;
            storeSnowfallMonthToDate = new_value;
          }
        void unsetSnowfallMonthToDate(void)
          {
            if (flagHasSnowfallMonthToDate)
              {
                storeSnowfallMonthToDate->remove_reference();
              }
            flagHasSnowfallMonthToDate = false;
          }
        void setSnowfallSinceJulyFirst(TypeSnowfallSinceJulyFirstJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSnowfallSinceJulyFirst)
              {
                storeSnowfallSinceJulyFirst->remove_reference();
              }
            flagHasSnowfallSinceJulyFirst = true;
            storeSnowfallSinceJulyFirst = new_value;
          }
        void unsetSnowfallSinceJulyFirst(void)
          {
            if (flagHasSnowfallSinceJulyFirst)
              {
                storeSnowfallSinceJulyFirst->remove_reference();
              }
            flagHasSnowfallSinceJulyFirst = false;
          }
        void setSnowDepth(TypeSnowDepthJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSnowDepth)
              {
                storeSnowDepth->remove_reference();
              }
            flagHasSnowDepth = true;
            storeSnowDepth = new_value;
          }
        void unsetSnowDepth(void)
          {
            if (flagHasSnowDepth)
              {
                storeSnowDepth->remove_reference();
              }
            flagHasSnowDepth = false;
          }
        void setMaxTemperature(TypeMaxTemperatureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMaxTemperature)
              {
                storeMaxTemperature->remove_reference();
              }
            flagHasMaxTemperature = true;
            storeMaxTemperature = new_value;
          }
        void unsetMaxTemperature(void)
          {
            if (flagHasMaxTemperature)
              {
                storeMaxTemperature->remove_reference();
              }
            flagHasMaxTemperature = false;
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
        void setMinTemperature(TypeMinTemperatureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMinTemperature)
              {
                storeMinTemperature->remove_reference();
              }
            flagHasMinTemperature = true;
            storeMinTemperature = new_value;
          }
        void unsetMinTemperature(void)
          {
            if (flagHasMinTemperature)
              {
                storeMinTemperature->remove_reference();
              }
            flagHasMinTemperature = false;
          }
        void setMaxDewPoint(TypeMaxDewPointJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMaxDewPoint)
              {
                storeMaxDewPoint->remove_reference();
              }
            flagHasMaxDewPoint = true;
            storeMaxDewPoint = new_value;
          }
        void unsetMaxDewPoint(void)
          {
            if (flagHasMaxDewPoint)
              {
                storeMaxDewPoint->remove_reference();
              }
            flagHasMaxDewPoint = false;
          }
        void setAvgDewPoint(TypeAvgDewPointJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAvgDewPoint)
              {
                storeAvgDewPoint->remove_reference();
              }
            flagHasAvgDewPoint = true;
            storeAvgDewPoint = new_value;
          }
        void unsetAvgDewPoint(void)
          {
            if (flagHasAvgDewPoint)
              {
                storeAvgDewPoint->remove_reference();
              }
            flagHasAvgDewPoint = false;
          }
        void setMinDewPoint(TypeMinDewPointJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMinDewPoint)
              {
                storeMinDewPoint->remove_reference();
              }
            flagHasMinDewPoint = true;
            storeMinDewPoint = new_value;
          }
        void unsetMinDewPoint(void)
          {
            if (flagHasMinDewPoint)
              {
                storeMinDewPoint->remove_reference();
              }
            flagHasMinDewPoint = false;
          }
        void setMaxHumidityPct(uint8_t new_value)
          {
            flagHasMaxHumidityPct = true;
            if (new_value < 0)
                throw("The value for field MaxHumidityPct of TypeDailySummaryJSON is less than the lower bound (0) for that field.");
            if (new_value > 100)
                throw("The value for field MaxHumidityPct of TypeDailySummaryJSON is greater than the upper bound (100) for that field.");
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
                throw("The value for field AvgHumidityPct of TypeDailySummaryJSON is less than the lower bound (0) for that field.");
            if (new_value > 100)
                throw("The value for field AvgHumidityPct of TypeDailySummaryJSON is greater than the upper bound (100) for that field.");
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
                throw("The value for field MinHumidityPct of TypeDailySummaryJSON is less than the lower bound (0) for that field.");
            if (new_value > 100)
                throw("The value for field MinHumidityPct of TypeDailySummaryJSON is greater than the upper bound (100) for that field.");
            storeMinHumidityPct = new_value;
          }
        void unsetMinHumidityPct(void)
          {
            flagHasMinHumidityPct = false;
          }
        void setMaxPressure(TypeMaxPressureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMaxPressure)
              {
                storeMaxPressure->remove_reference();
              }
            flagHasMaxPressure = true;
            storeMaxPressure = new_value;
          }
        void unsetMaxPressure(void)
          {
            if (flagHasMaxPressure)
              {
                storeMaxPressure->remove_reference();
              }
            flagHasMaxPressure = false;
          }
        void setAvgPressure(TypeAvgPressureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAvgPressure)
              {
                storeAvgPressure->remove_reference();
              }
            flagHasAvgPressure = true;
            storeAvgPressure = new_value;
          }
        void unsetAvgPressure(void)
          {
            if (flagHasAvgPressure)
              {
                storeAvgPressure->remove_reference();
              }
            flagHasAvgPressure = false;
          }
        void setMinPressure(TypeMinPressureJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMinPressure)
              {
                storeMinPressure->remove_reference();
              }
            flagHasMinPressure = true;
            storeMinPressure = new_value;
          }
        void unsetMinPressure(void)
          {
            if (flagHasMinPressure)
              {
                storeMinPressure->remove_reference();
              }
            flagHasMinPressure = false;
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
        void setMinWind(TypeMinWindJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMinWind)
              {
                storeMinWind->remove_reference();
              }
            flagHasMinWind = true;
            storeMinWind = new_value;
          }
        void unsetMinWind(void)
          {
            if (flagHasMinWind)
              {
                storeMinWind->remove_reference();
              }
            flagHasMinWind = false;
          }
        void setMaxVisibility(TypeMaxVisibilityJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMaxVisibility)
              {
                storeMaxVisibility->remove_reference();
              }
            flagHasMaxVisibility = true;
            storeMaxVisibility = new_value;
          }
        void unsetMaxVisibility(void)
          {
            if (flagHasMaxVisibility)
              {
                storeMaxVisibility->remove_reference();
              }
            flagHasMaxVisibility = false;
          }
        void setAvgVisibility(TypeAvgVisibilityJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAvgVisibility)
              {
                storeAvgVisibility->remove_reference();
              }
            flagHasAvgVisibility = true;
            storeAvgVisibility = new_value;
          }
        void unsetAvgVisibility(void)
          {
            if (flagHasAvgVisibility)
              {
                storeAvgVisibility->remove_reference();
              }
            flagHasAvgVisibility = false;
          }
        void setMinVisibility(TypeMinVisibilityJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMinVisibility)
              {
                storeMinVisibility->remove_reference();
              }
            flagHasMinVisibility = true;
            storeMinVisibility = new_value;
          }
        void unsetMinVisibility(void)
          {
            if (flagHasMinVisibility)
              {
                storeMinVisibility->remove_reference();
              }
            flagHasMinVisibility = false;
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

        virtual void extraTypeDailySummaryAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeDailySummarySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeDailySummaryLookup(key);
            if (old_field == NULL)
              {
                extraTypeDailySummaryAppendPair(key, new_component);
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
            assert(flagHasDateAndTime);
            handler->start_pair("DateAndTime");
            storeDateAndTime->write_as_json(handler);
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
            if (flagHasPrecipitation)
              {
                handler->start_pair("Precipitation");
                storePrecipitation->write_as_json(handler);
              }
            if (flagHasSnowfall)
              {
                handler->start_pair("Snowfall");
                storeSnowfall->write_as_json(handler);
              }
            if (flagHasSnowfallMonthToDate)
              {
                handler->start_pair("SnowfallMonthToDate");
                storeSnowfallMonthToDate->write_as_json(handler);
              }
            if (flagHasSnowfallSinceJulyFirst)
              {
                handler->start_pair("SnowfallSinceJulyFirst");
                storeSnowfallSinceJulyFirst->write_as_json(handler);
              }
            if (flagHasSnowDepth)
              {
                handler->start_pair("SnowDepth");
                storeSnowDepth->write_as_json(handler);
              }
            if (flagHasMaxTemperature)
              {
                handler->start_pair("MaxTemperature");
                storeMaxTemperature->write_as_json(handler);
              }
            if (flagHasAvgTemperature)
              {
                handler->start_pair("AvgTemperature");
                storeAvgTemperature->write_as_json(handler);
              }
            if (flagHasMinTemperature)
              {
                handler->start_pair("MinTemperature");
                storeMinTemperature->write_as_json(handler);
              }
            if (flagHasMaxDewPoint)
              {
                handler->start_pair("MaxDewPoint");
                storeMaxDewPoint->write_as_json(handler);
              }
            if (flagHasAvgDewPoint)
              {
                handler->start_pair("AvgDewPoint");
                storeAvgDewPoint->write_as_json(handler);
              }
            if (flagHasMinDewPoint)
              {
                handler->start_pair("MinDewPoint");
                storeMinDewPoint->write_as_json(handler);
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
            if (flagHasMaxPressure)
              {
                handler->start_pair("MaxPressure");
                storeMaxPressure->write_as_json(handler);
              }
            if (flagHasAvgPressure)
              {
                handler->start_pair("AvgPressure");
                storeAvgPressure->write_as_json(handler);
              }
            if (flagHasMinPressure)
              {
                handler->start_pair("MinPressure");
                storeMinPressure->write_as_json(handler);
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
            if (flagHasMinWind)
              {
                handler->start_pair("MinWind");
                storeMinWind->write_as_json(handler);
              }
            if (flagHasMaxVisibility)
              {
                handler->start_pair("MaxVisibility");
                storeMaxVisibility->write_as_json(handler);
              }
            if (flagHasAvgVisibility)
              {
                handler->start_pair("AvgVisibility");
                storeAvgVisibility->write_as_json(handler);
              }
            if (flagHasMinVisibility)
              {
                handler->start_pair("MinVisibility");
                storeMinVisibility->write_as_json(handler);
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
            if (!(hasDateAndTime()))
              {
                return "When parsing the object for %what%, the \"DateAndTime\" field was missing.";
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

        static TypeDailySummaryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDailySummaryJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDailySummaryJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDailySummaryJSON>, TypeDailySummaryJSON *, bool> generator("Type TypeDailySummary", ignore_extras);
                parse_json_value(text, "Text for TypeDailySummaryJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDailySummaryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDailySummaryJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDailySummaryJSON>, TypeDailySummaryJSON *, bool> generator("Type TypeDailySummary", ignore_extras);
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
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDateAndTime;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorSunriseDateAndTime;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorSunsetDateAndTime;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMoonPhaseText;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorMoonPhasePct;
            JSONHoldingGenerator<TypePrecipitationJSON::Generator, RCHandle<TypePrecipitationJSON>, TypePrecipitationJSON *, bool > fieldGeneratorPrecipitation;
            JSONHoldingGenerator<TypeSnowfallJSON::Generator, RCHandle<TypeSnowfallJSON>, TypeSnowfallJSON *, bool > fieldGeneratorSnowfall;
            JSONHoldingGenerator<TypeSnowfallMonthToDateJSON::Generator, RCHandle<TypeSnowfallMonthToDateJSON>, TypeSnowfallMonthToDateJSON *, bool > fieldGeneratorSnowfallMonthToDate;
            JSONHoldingGenerator<TypeSnowfallSinceJulyFirstJSON::Generator, RCHandle<TypeSnowfallSinceJulyFirstJSON>, TypeSnowfallSinceJulyFirstJSON *, bool > fieldGeneratorSnowfallSinceJulyFirst;
            JSONHoldingGenerator<TypeSnowDepthJSON::Generator, RCHandle<TypeSnowDepthJSON>, TypeSnowDepthJSON *, bool > fieldGeneratorSnowDepth;
            JSONHoldingGenerator<TypeMaxTemperatureJSON::Generator, RCHandle<TypeMaxTemperatureJSON>, TypeMaxTemperatureJSON *, bool > fieldGeneratorMaxTemperature;
            JSONHoldingGenerator<TypeAvgTemperatureJSON::Generator, RCHandle<TypeAvgTemperatureJSON>, TypeAvgTemperatureJSON *, bool > fieldGeneratorAvgTemperature;
            JSONHoldingGenerator<TypeMinTemperatureJSON::Generator, RCHandle<TypeMinTemperatureJSON>, TypeMinTemperatureJSON *, bool > fieldGeneratorMinTemperature;
            JSONHoldingGenerator<TypeMaxDewPointJSON::Generator, RCHandle<TypeMaxDewPointJSON>, TypeMaxDewPointJSON *, bool > fieldGeneratorMaxDewPoint;
            JSONHoldingGenerator<TypeAvgDewPointJSON::Generator, RCHandle<TypeAvgDewPointJSON>, TypeAvgDewPointJSON *, bool > fieldGeneratorAvgDewPoint;
            JSONHoldingGenerator<TypeMinDewPointJSON::Generator, RCHandle<TypeMinDewPointJSON>, TypeMinDewPointJSON *, bool > fieldGeneratorMinDewPoint;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorMaxHumidityPct;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorAvgHumidityPct;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorMinHumidityPct;
            JSONHoldingGenerator<TypeMaxPressureJSON::Generator, RCHandle<TypeMaxPressureJSON>, TypeMaxPressureJSON *, bool > fieldGeneratorMaxPressure;
            JSONHoldingGenerator<TypeAvgPressureJSON::Generator, RCHandle<TypeAvgPressureJSON>, TypeAvgPressureJSON *, bool > fieldGeneratorAvgPressure;
            JSONHoldingGenerator<TypeMinPressureJSON::Generator, RCHandle<TypeMinPressureJSON>, TypeMinPressureJSON *, bool > fieldGeneratorMinPressure;
            JSONHoldingGenerator<TypeMaxWindJSON::Generator, RCHandle<TypeMaxWindJSON>, TypeMaxWindJSON *, bool > fieldGeneratorMaxWind;
            JSONHoldingGenerator<TypeAvgWindJSON::Generator, RCHandle<TypeAvgWindJSON>, TypeAvgWindJSON *, bool > fieldGeneratorAvgWind;
            JSONHoldingGenerator<TypeMinWindJSON::Generator, RCHandle<TypeMinWindJSON>, TypeMinWindJSON *, bool > fieldGeneratorMinWind;
            JSONHoldingGenerator<TypeMaxVisibilityJSON::Generator, RCHandle<TypeMaxVisibilityJSON>, TypeMaxVisibilityJSON *, bool > fieldGeneratorMaxVisibility;
            JSONHoldingGenerator<TypeAvgVisibilityJSON::Generator, RCHandle<TypeAvgVisibilityJSON>, TypeAvgVisibilityJSON *, bool > fieldGeneratorAvgVisibility;
            JSONHoldingGenerator<TypeMinVisibilityJSON::Generator, RCHandle<TypeMinVisibilityJSON>, TypeMinVisibilityJSON *, bool > fieldGeneratorMinVisibility;
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
                TypeDailySummaryJSON *result = new TypeDailySummaryJSON();
                assert(result != NULL);
                RCHandle<TypeDailySummaryJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeDailySummaryAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeDailySummaryJSON *result)
              {
                if (fieldGeneratorDateAndTime.have_value)
                  {
                    result->setDateAndTime(fieldGeneratorDateAndTime.value.referenced());
                    fieldGeneratorDateAndTime.have_value = false;
                  }
                else if (!(result->hasDateAndTime()))
                  {
                    error("When parsing the object for %what%, the \"DateAndTime\" field was missing.");
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
                if (fieldGeneratorPrecipitation.have_value)
                  {
                    result->setPrecipitation(fieldGeneratorPrecipitation.value.referenced());
                    fieldGeneratorPrecipitation.have_value = false;
                  }
                if (fieldGeneratorSnowfall.have_value)
                  {
                    result->setSnowfall(fieldGeneratorSnowfall.value.referenced());
                    fieldGeneratorSnowfall.have_value = false;
                  }
                if (fieldGeneratorSnowfallMonthToDate.have_value)
                  {
                    result->setSnowfallMonthToDate(fieldGeneratorSnowfallMonthToDate.value.referenced());
                    fieldGeneratorSnowfallMonthToDate.have_value = false;
                  }
                if (fieldGeneratorSnowfallSinceJulyFirst.have_value)
                  {
                    result->setSnowfallSinceJulyFirst(fieldGeneratorSnowfallSinceJulyFirst.value.referenced());
                    fieldGeneratorSnowfallSinceJulyFirst.have_value = false;
                  }
                if (fieldGeneratorSnowDepth.have_value)
                  {
                    result->setSnowDepth(fieldGeneratorSnowDepth.value.referenced());
                    fieldGeneratorSnowDepth.have_value = false;
                  }
                if (fieldGeneratorMaxTemperature.have_value)
                  {
                    result->setMaxTemperature(fieldGeneratorMaxTemperature.value.referenced());
                    fieldGeneratorMaxTemperature.have_value = false;
                  }
                if (fieldGeneratorAvgTemperature.have_value)
                  {
                    result->setAvgTemperature(fieldGeneratorAvgTemperature.value.referenced());
                    fieldGeneratorAvgTemperature.have_value = false;
                  }
                if (fieldGeneratorMinTemperature.have_value)
                  {
                    result->setMinTemperature(fieldGeneratorMinTemperature.value.referenced());
                    fieldGeneratorMinTemperature.have_value = false;
                  }
                if (fieldGeneratorMaxDewPoint.have_value)
                  {
                    result->setMaxDewPoint(fieldGeneratorMaxDewPoint.value.referenced());
                    fieldGeneratorMaxDewPoint.have_value = false;
                  }
                if (fieldGeneratorAvgDewPoint.have_value)
                  {
                    result->setAvgDewPoint(fieldGeneratorAvgDewPoint.value.referenced());
                    fieldGeneratorAvgDewPoint.have_value = false;
                  }
                if (fieldGeneratorMinDewPoint.have_value)
                  {
                    result->setMinDewPoint(fieldGeneratorMinDewPoint.value.referenced());
                    fieldGeneratorMinDewPoint.have_value = false;
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
                if (fieldGeneratorMaxPressure.have_value)
                  {
                    result->setMaxPressure(fieldGeneratorMaxPressure.value.referenced());
                    fieldGeneratorMaxPressure.have_value = false;
                  }
                if (fieldGeneratorAvgPressure.have_value)
                  {
                    result->setAvgPressure(fieldGeneratorAvgPressure.value.referenced());
                    fieldGeneratorAvgPressure.have_value = false;
                  }
                if (fieldGeneratorMinPressure.have_value)
                  {
                    result->setMinPressure(fieldGeneratorMinPressure.value.referenced());
                    fieldGeneratorMinPressure.have_value = false;
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
                if (fieldGeneratorMinWind.have_value)
                  {
                    result->setMinWind(fieldGeneratorMinWind.value.referenced());
                    fieldGeneratorMinWind.have_value = false;
                  }
                if (fieldGeneratorMaxVisibility.have_value)
                  {
                    result->setMaxVisibility(fieldGeneratorMaxVisibility.value.referenced());
                    fieldGeneratorMaxVisibility.have_value = false;
                  }
                if (fieldGeneratorAvgVisibility.have_value)
                  {
                    result->setAvgVisibility(fieldGeneratorAvgVisibility.value.referenced());
                    fieldGeneratorAvgVisibility.have_value = false;
                  }
                if (fieldGeneratorMinVisibility.have_value)
                  {
                    result->setMinVisibility(fieldGeneratorMinVisibility.value.referenced());
                    fieldGeneratorMinVisibility.have_value = false;
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
            virtual void handle_result(TypeDailySummaryJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strncmp(&(field_name[1]), "vg", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[4]), "ewPoint") == 0)
                                        return &fieldGeneratorAvgDewPoint;
                                    break;
                                case 'H':
                                    if (strcmp(&(field_name[4]), "umidityPct") == 0)
                                        return &fieldGeneratorAvgHumidityPct;
                                    break;
                                case 'P':
                                    if (strcmp(&(field_name[4]), "ressure") == 0)
                                        return &fieldGeneratorAvgPressure;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[4]), "emperature") == 0)
                                        return &fieldGeneratorAvgTemperature;
                                    break;
                                case 'V':
                                    if (strcmp(&(field_name[4]), "isibility") == 0)
                                        return &fieldGeneratorAvgVisibility;
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
                    case 'D':
                        if (strcmp(&(field_name[1]), "ateAndTime") == 0)
                            return &fieldGeneratorDateAndTime;
                        break;
                    case 'F':
                        if (strcmp(&(field_name[1]), "og") == 0)
                            return &fieldGeneratorFog;
                        break;
                    case 'H':
                        if (strcmp(&(field_name[1]), "ail") == 0)
                            return &fieldGeneratorHail;
                        break;
                    case 'M':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strncmp(&(field_name[2]), "x", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[4]), "ewPoint") == 0)
                                                return &fieldGeneratorMaxDewPoint;
                                            break;
                                        case 'H':
                                            if (strcmp(&(field_name[4]), "umidityPct") == 0)
                                                return &fieldGeneratorMaxHumidityPct;
                                            break;
                                        case 'P':
                                            if (strcmp(&(field_name[4]), "ressure") == 0)
                                                return &fieldGeneratorMaxPressure;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[4]), "emperature") == 0)
                                                return &fieldGeneratorMaxTemperature;
                                            break;
                                        case 'V':
                                            if (strcmp(&(field_name[4]), "isibility") == 0)
                                                return &fieldGeneratorMaxVisibility;
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
                                if (strncmp(&(field_name[2]), "n", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[4]), "ewPoint") == 0)
                                                return &fieldGeneratorMinDewPoint;
                                            break;
                                        case 'H':
                                            if (strcmp(&(field_name[4]), "umidityPct") == 0)
                                                return &fieldGeneratorMinHumidityPct;
                                            break;
                                        case 'P':
                                            if (strcmp(&(field_name[4]), "ressure") == 0)
                                                return &fieldGeneratorMinPressure;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[4]), "emperature") == 0)
                                                return &fieldGeneratorMinTemperature;
                                            break;
                                        case 'V':
                                            if (strcmp(&(field_name[4]), "isibility") == 0)
                                                return &fieldGeneratorMinVisibility;
                                            break;
                                        case 'W':
                                            if (strcmp(&(field_name[4]), "ind") == 0)
                                                return &fieldGeneratorMinWind;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
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
                    case 'P':
                        if (strcmp(&(field_name[1]), "recipitation") == 0)
                            return &fieldGeneratorPrecipitation;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "ain") == 0)
                            return &fieldGeneratorRain;
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'n':
                                if (strncmp(&(field_name[2]), "ow", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[4]))
                                      {
                                        case 0:
                                            return &fieldGeneratorSnow;
                                        case 'D':
                                            if (strcmp(&(field_name[5]), "epth") == 0)
                                                return &fieldGeneratorSnowDepth;
                                            break;
                                        case 'f':
                                            if (strncmp(&(field_name[5]), "all", 3) == 0)
                                              {
                                                switch ((unsigned char)(field_name[8]))
                                                  {
                                                    case 0:
                                                        return &fieldGeneratorSnowfall;
                                                    case 'M':
                                                        if (strcmp(&(field_name[9]), "onthToDate") == 0)
                                                            return &fieldGeneratorSnowfallMonthToDate;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(field_name[9]), "inceJulyFirst") == 0)
                                                            return &fieldGeneratorSnowfallSinceJulyFirst;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
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
                    case 'T':
                        switch ((unsigned char)(field_name[1]))
                          {
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
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDateAndTime("field \"DateAndTime\" of the TypeDailySummary class", ignore_extras), fieldGeneratorSunriseDateAndTime("field \"SunriseDateAndTime\" of the TypeDailySummary class", ignore_extras), fieldGeneratorSunsetDateAndTime("field \"SunsetDateAndTime\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMoonPhaseText("field \"MoonPhaseText\" of the TypeDailySummary class"), fieldGeneratorMoonPhasePct("field \"MoonPhasePct\" of the TypeDailySummary class"), fieldGeneratorPrecipitation("field \"Precipitation\" of the TypeDailySummary class", ignore_extras), fieldGeneratorSnowfall("field \"Snowfall\" of the TypeDailySummary class", ignore_extras), fieldGeneratorSnowfallMonthToDate("field \"SnowfallMonthToDate\" of the TypeDailySummary class", ignore_extras), fieldGeneratorSnowfallSinceJulyFirst("field \"SnowfallSinceJulyFirst\" of the TypeDailySummary class", ignore_extras), fieldGeneratorSnowDepth("field \"SnowDepth\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMaxTemperature("field \"MaxTemperature\" of the TypeDailySummary class", ignore_extras), fieldGeneratorAvgTemperature("field \"AvgTemperature\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMinTemperature("field \"MinTemperature\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMaxDewPoint("field \"MaxDewPoint\" of the TypeDailySummary class", ignore_extras), fieldGeneratorAvgDewPoint("field \"AvgDewPoint\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMinDewPoint("field \"MinDewPoint\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMaxHumidityPct("field \"MaxHumidityPct\" of the TypeDailySummary class"), fieldGeneratorAvgHumidityPct("field \"AvgHumidityPct\" of the TypeDailySummary class"), fieldGeneratorMinHumidityPct("field \"MinHumidityPct\" of the TypeDailySummary class"), fieldGeneratorMaxPressure("field \"MaxPressure\" of the TypeDailySummary class", ignore_extras), fieldGeneratorAvgPressure("field \"AvgPressure\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMinPressure("field \"MinPressure\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMaxWind("field \"MaxWind\" of the TypeDailySummary class", ignore_extras), fieldGeneratorAvgWind("field \"AvgWind\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMinWind("field \"MinWind\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMaxVisibility("field \"MaxVisibility\" of the TypeDailySummary class", ignore_extras), fieldGeneratorAvgVisibility("field \"AvgVisibility\" of the TypeDailySummary class", ignore_extras), fieldGeneratorMinVisibility("field \"MinVisibility\" of the TypeDailySummary class", ignore_extras), fieldGeneratorFog("field \"Fog\" of the TypeDailySummary class"), fieldGeneratorRain("field \"Rain\" of the TypeDailySummary class"), fieldGeneratorSnow("field \"Snow\" of the TypeDailySummary class"), fieldGeneratorHail("field \"Hail\" of the TypeDailySummary class"), fieldGeneratorThunder("field \"Thunder\" of the TypeDailySummary class"), fieldGeneratorTornado("field \"Tornado\" of the TypeDailySummary class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeDailySummary class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDateAndTime.reset();
                fieldGeneratorSunriseDateAndTime.reset();
                fieldGeneratorSunsetDateAndTime.reset();
                fieldGeneratorMoonPhaseText.reset();
                fieldGeneratorMoonPhasePct.reset();
                fieldGeneratorPrecipitation.reset();
                fieldGeneratorSnowfall.reset();
                fieldGeneratorSnowfallMonthToDate.reset();
                fieldGeneratorSnowfallSinceJulyFirst.reset();
                fieldGeneratorSnowDepth.reset();
                fieldGeneratorMaxTemperature.reset();
                fieldGeneratorAvgTemperature.reset();
                fieldGeneratorMinTemperature.reset();
                fieldGeneratorMaxDewPoint.reset();
                fieldGeneratorAvgDewPoint.reset();
                fieldGeneratorMinDewPoint.reset();
                fieldGeneratorMaxHumidityPct.reset();
                fieldGeneratorAvgHumidityPct.reset();
                fieldGeneratorMinHumidityPct.reset();
                fieldGeneratorMaxPressure.reset();
                fieldGeneratorAvgPressure.reset();
                fieldGeneratorMinPressure.reset();
                fieldGeneratorMaxWind.reset();
                fieldGeneratorAvgWind.reset();
                fieldGeneratorMinWind.reset();
                fieldGeneratorMaxVisibility.reset();
                fieldGeneratorAvgVisibility.reset();
                fieldGeneratorMinVisibility.reset();
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

  private:
    bool flagHasAttribution;
    AttributionJSON * storeAttribution;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    bool flagHasStartDateAndTime;
    DateAndOrTimeJSON * storeStartDateAndTime;
    bool flagHasEndDateAndTime;
    DateAndOrTimeJSON * storeEndDateAndTime;
    bool flagHasAlerts;
    std::vector< AlertJSON * > storeAlerts;
    bool flagHasRequestedAttribute;
    std::string storeRequestedAttribute;
    bool flagHasIsYesNoQuery;
    bool storeIsYesNoQuery;
    bool flagHasDateAndTime;
    DateAndOrTimeJSON * storeDateAndTime;
    bool flagHasObservations;
    std::vector< HistoryObservationJSON * > storeObservations;
    bool flagHasDailySummary;
    TypeDailySummaryJSON * storeDailySummary;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowWeatherHistoryInformationNuggetJSON(const ShowWeatherHistoryInformationNuggetJSON &);
    ShowWeatherHistoryInformationNuggetJSON & operator=(const ShowWeatherHistoryInformationNuggetJSON &other);

    JSONValue * extraAttributionToJSON(void) const;
    JSONValue * extraLocationToJSON(void) const;
    JSONValue * extraStartDateAndTimeToJSON(void) const;
    JSONValue * extraEndDateAndTimeToJSON(void) const;
    JSONValue * extraAlertsToJSON(void) const;
    JSONValue * extraRequestedAttributeToJSON(void) const;
    JSONValue * extraIsYesNoQueryToJSON(void) const;
    JSONValue * extraDateAndTimeToJSON(void) const;
    JSONValue * extraObservationsToJSON(void) const;
    JSONValue * extraDailySummaryToJSON(void) const;

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlerts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONObservations(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDailySummary(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowWeatherHistoryInformationNuggetJSON(void);
    virtual ~ShowWeatherHistoryInformationNuggetJSON(void);
    const char * getWeatherNuggetKind(void) const;
    bool  hasAttribution(void) const;
    AttributionJSON *  getAttribution(void);
    const AttributionJSON *  getAttribution(void) const;
    bool  hasLocation(void) const;
    MapLocationJSON *  getLocation(void);
    const MapLocationJSON *  getLocation(void) const;
    bool  hasStartDateAndTime(void) const;
    DateAndOrTimeJSON *  getStartDateAndTime(void);
    const DateAndOrTimeJSON *  getStartDateAndTime(void) const;
    bool  hasEndDateAndTime(void) const;
    DateAndOrTimeJSON *  getEndDateAndTime(void);
    const DateAndOrTimeJSON *  getEndDateAndTime(void) const;
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
    bool  hasDateAndTime(void) const;
    DateAndOrTimeJSON *  getDateAndTime(void);
    const DateAndOrTimeJSON *  getDateAndTime(void) const;
    bool  hasObservations(void) const;
    size_t  countOfObservations(void) const;
    HistoryObservationJSON *  elementOfObservations(size_t element_num);
    const HistoryObservationJSON *  elementOfObservations(size_t element_num) const;
    std::vector< HistoryObservationJSON * >  getObservations(void);
    const std::vector< HistoryObservationJSON * >  getObservations(void) const;
    bool  hasDailySummary(void) const;
    TypeDailySummaryJSON *  getDailySummary(void);
    const TypeDailySummaryJSON *  getDailySummary(void) const;

    virtual size_t extraShowWeatherHistoryInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowWeatherHistoryInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowWeatherHistoryInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowWeatherHistoryInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowWeatherHistoryInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowWeatherHistoryInformationNuggetLookup(const char *field_name) const
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
        if (flagHasStartDateAndTime)
            ++result;
        if (flagHasEndDateAndTime)
            ++result;
        if (flagHasAlerts)
            ++result;
        if (flagHasRequestedAttribute)
            ++result;
        if (flagHasIsYesNoQuery)
            ++result;
        if (flagHasDateAndTime)
            ++result;
        if (flagHasObservations)
            ++result;
        if (flagHasDailySummary)
            ++result;
        result += extraShowWeatherHistoryInformationNuggetComponentCount();
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
        if (flagHasStartDateAndTime)
          {
            if (remainder == 0)
                return "StartDateAndTime";
            --remainder;
          }
        if (flagHasEndDateAndTime)
          {
            if (remainder == 0)
                return "EndDateAndTime";
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
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return "DateAndTime";
            --remainder;
          }
        if (flagHasObservations)
          {
            if (remainder == 0)
                return "Observations";
            --remainder;
          }
        if (flagHasDailySummary)
          {
            if (remainder == 0)
                return "DailySummary";
            --remainder;
          }
        return extraShowWeatherHistoryInformationNuggetComponentKey(remainder);
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
        if (flagHasStartDateAndTime)
          {
            if (remainder == 0)
                return extraStartDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasEndDateAndTime)
          {
            if (remainder == 0)
                return extraEndDateAndTimeToJSON();
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
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return extraDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasObservations)
          {
            if (remainder == 0)
                return extraObservationsToJSON();
            --remainder;
          }
        if (flagHasDailySummary)
          {
            if (remainder == 0)
                return extraDailySummaryToJSON();
            --remainder;
          }
        return extraShowWeatherHistoryInformationNuggetComponentValue(remainder);
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
        if (flagHasStartDateAndTime)
          {
            if (remainder == 0)
                return extraStartDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasEndDateAndTime)
          {
            if (remainder == 0)
                return extraEndDateAndTimeToJSON();
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
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return extraDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasObservations)
          {
            if (remainder == 0)
                return extraObservationsToJSON();
            --remainder;
          }
        if (flagHasDailySummary)
          {
            if (remainder == 0)
                return extraDailySummaryToJSON();
            --remainder;
          }
        return extraShowWeatherHistoryInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraWeatherInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
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
            case 'D':
                if (strncmp(&(field_name[1]), "a", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[3]), "lySummary") == 0)
                                return (flagHasDailySummary ? extraDailySummaryToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[3]), "eAndTime") == 0)
                                return (flagHasDateAndTime ? extraDateAndTimeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "ndDateAndTime") == 0)
                    return (flagHasEndDateAndTime ? extraEndDateAndTimeToJSON() : NULL);
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
                if (strcmp(&(field_name[1]), "bservations") == 0)
                    return (flagHasObservations ? extraObservationsToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedAttribute") == 0)
                    return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartDateAndTime") == 0)
                    return (flagHasStartDateAndTime ? extraStartDateAndTimeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowWeatherHistoryInformationNuggetLookup(field_name);
      }
    const JSONValue *extraWeatherInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
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
            case 'D':
                if (strncmp(&(field_name[1]), "a", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[3]), "lySummary") == 0)
                                return (flagHasDailySummary ? extraDailySummaryToJSON() : NULL);
                            break;
                        case 't':
                            if (strcmp(&(field_name[3]), "eAndTime") == 0)
                                return (flagHasDateAndTime ? extraDateAndTimeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "ndDateAndTime") == 0)
                    return (flagHasEndDateAndTime ? extraEndDateAndTimeToJSON() : NULL);
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
                if (strcmp(&(field_name[1]), "bservations") == 0)
                    return (flagHasObservations ? extraObservationsToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedAttribute") == 0)
                    return (flagHasRequestedAttribute ? extraRequestedAttributeToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartDateAndTime") == 0)
                    return (flagHasStartDateAndTime ? extraStartDateAndTimeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowWeatherHistoryInformationNuggetLookup(field_name);
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
    void setStartDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = true;
        storeStartDateAndTime = new_value;
      }
    void unsetStartDateAndTime(void)
      {
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = false;
      }
    void setEndDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = true;
        storeEndDateAndTime = new_value;
      }
    void unsetEndDateAndTime(void)
      {
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = false;
      }
    void initAlerts(void)
      {
        if (flagHasAlerts)
          {
            for (size_t num3 = 0; num3 < storeAlerts.size(); ++num3)
              {
                storeAlerts[num3]->remove_reference();
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
            for (size_t num4 = 0; num4 < storeAlerts.size(); ++num4)
              {
                storeAlerts[num4]->remove_reference();
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
    void setDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateAndTime)
          {
            storeDateAndTime->remove_reference();
          }
        flagHasDateAndTime = true;
        storeDateAndTime = new_value;
      }
    void unsetDateAndTime(void)
      {
        if (flagHasDateAndTime)
          {
            storeDateAndTime->remove_reference();
          }
        flagHasDateAndTime = false;
      }
    void initObservations(void)
      {
        if (flagHasObservations)
          {
            for (size_t num5 = 0; num5 < storeObservations.size(); ++num5)
              {
                storeObservations[num5]->remove_reference();
              }
          }
        flagHasObservations = true;
        storeObservations.clear();
      }
    void appendObservations(HistoryObservationJSON * to_append)
      {
        if (!flagHasObservations)
          {
            flagHasObservations = true;
            storeObservations.clear();
          }
        assert(flagHasObservations);
        to_append->add_reference();
        storeObservations.push_back(to_append);
      }
    void unsetObservations(void)
      {
        if (flagHasObservations)
          {
            for (size_t num6 = 0; num6 < storeObservations.size(); ++num6)
              {
                storeObservations[num6]->remove_reference();
              }
          }
        flagHasObservations = false;
        storeObservations.clear();
      }
    void setDailySummary(TypeDailySummaryJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDailySummary)
          {
            storeDailySummary->remove_reference();
          }
        flagHasDailySummary = true;
        storeDailySummary = new_value;
      }
    void unsetDailySummary(void)
      {
        if (flagHasDailySummary)
          {
            storeDailySummary->remove_reference();
          }
        flagHasDailySummary = false;
      }

    virtual void extraShowWeatherHistoryInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowWeatherHistoryInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowWeatherHistoryInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowWeatherHistoryInformationNuggetAppendPair(key, new_component);
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
            case 'D':
                if (strncmp(&(key[1]), "a", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'i':
                            if (strcmp(&(key[3]), "lySummary") == 0)
                                {
                                fromJSONDailySummary(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[3]), "eAndTime") == 0)
                                {
                                fromJSONDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(key[1]), "ndDateAndTime") == 0)
                    {
                    fromJSONEndDateAndTime(new_component, false);
                    return;
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
                if (strcmp(&(key[1]), "bservations") == 0)
                    {
                    fromJSONObservations(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedAttribute") == 0)
                    {
                    fromJSONRequestedAttribute(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartDateAndTime") == 0)
                    {
                    fromJSONStartDateAndTime(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowWeatherHistoryInformationNuggetAppendPair(key, new_component);
      }
    void extraWeatherInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
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
            case 'D':
                if (strncmp(&(key[1]), "a", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'i':
                            if (strcmp(&(key[3]), "lySummary") == 0)
                                {
                                fromJSONDailySummary(new_component, false);
                                return;
                                }
                            break;
                        case 't':
                            if (strcmp(&(key[3]), "eAndTime") == 0)
                                {
                                fromJSONDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(key[1]), "ndDateAndTime") == 0)
                    {
                    fromJSONEndDateAndTime(new_component, false);
                    return;
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
                if (strcmp(&(key[1]), "bservations") == 0)
                    {
                    fromJSONObservations(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedAttribute") == 0)
                    {
                    fromJSONRequestedAttribute(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartDateAndTime") == 0)
                    {
                    fromJSONStartDateAndTime(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowWeatherHistoryInformationNuggetSetField(key, new_component);
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
        assert(flagHasStartDateAndTime);
        handler->start_pair("StartDateAndTime");
        storeStartDateAndTime->write_as_json(handler);
        assert(flagHasEndDateAndTime);
        handler->start_pair("EndDateAndTime");
        storeEndDateAndTime->write_as_json(handler);
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
        assert(flagHasDateAndTime);
        handler->start_pair("DateAndTime");
        storeDateAndTime->write_as_json(handler);
        assert(flagHasObservations);
        handler->start_pair("Observations");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeObservations.size(); ++num2)
          {
            storeObservations[num2]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasDailySummary);
        handler->start_pair("DailySummary");
        storeDailySummary->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLocation()))
          {
            return "When parsing the object for %what%, the \"Location\" field was missing.";
          }
        if (!(hasStartDateAndTime()))
          {
            return "When parsing the object for %what%, the \"StartDateAndTime\" field was missing.";
          }
        if (!(hasEndDateAndTime()))
          {
            return "When parsing the object for %what%, the \"EndDateAndTime\" field was missing.";
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
        if (!(hasDateAndTime()))
          {
            return "When parsing the object for %what%, the \"DateAndTime\" field was missing.";
          }
        if (!(hasObservations()))
          {
            return "When parsing the object for %what%, the \"Observations\" field was missing.";
          }
        if (!(hasDailySummary()))
          {
            return "When parsing the object for %what%, the \"DailySummary\" field was missing.";
          }
        return NULL;
      }

    static ShowWeatherHistoryInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowWeatherHistoryInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowWeatherHistoryInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherHistoryInformationNuggetJSON>, ShowWeatherHistoryInformationNuggetJSON *, bool> generator("Type ShowWeatherHistoryInformationNugget", ignore_extras);
            parse_json_value(text, "Text for ShowWeatherHistoryInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowWeatherHistoryInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowWeatherHistoryInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowWeatherHistoryInformationNuggetJSON>, ShowWeatherHistoryInformationNuggetJSON *, bool> generator("Type ShowWeatherHistoryInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndDateAndTime;
        JSONHoldingArrayGenerator<AlertJSON::Generator, RCHandle<AlertJSON>, AlertJSON *, bool > fieldGeneratorAlerts;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedAttribute;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsYesNoQuery;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDateAndTime;
        JSONHoldingArrayGenerator<HistoryObservationJSON::Generator, RCHandle<HistoryObservationJSON>, HistoryObservationJSON *, bool > fieldGeneratorObservations;
        JSONHoldingGenerator<TypeDailySummaryJSON::Generator, RCHandle<TypeDailySummaryJSON>, TypeDailySummaryJSON *, bool > fieldGeneratorDailySummary;
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
            if (!(strcmp(getWeatherInformationNuggetJSONKey().c_str(), "ShowWeatherHistory") == 0))
                throw("The key field has a value other than `ShowWeatherHistory'.");
            ShowWeatherHistoryInformationNuggetJSON *result = new ShowWeatherHistoryInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowWeatherHistoryInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowWeatherHistoryInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(WeatherInformationNuggetJSON *new_result)
          {
            handle_result((ShowWeatherHistoryInformationNuggetJSON *)new_result);
          }
        void finish(ShowWeatherHistoryInformationNuggetJSON *result)
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
            if (fieldGeneratorStartDateAndTime.have_value)
              {
                result->setStartDateAndTime(fieldGeneratorStartDateAndTime.value.referenced());
                fieldGeneratorStartDateAndTime.have_value = false;
              }
            else if (!(result->hasStartDateAndTime()))
              {
                error("When parsing the object for %what%, the \"StartDateAndTime\" field was missing.");
              }
            if (fieldGeneratorEndDateAndTime.have_value)
              {
                result->setEndDateAndTime(fieldGeneratorEndDateAndTime.value.referenced());
                fieldGeneratorEndDateAndTime.have_value = false;
              }
            else if (!(result->hasEndDateAndTime()))
              {
                error("When parsing the object for %what%, the \"EndDateAndTime\" field was missing.");
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
            if (fieldGeneratorDateAndTime.have_value)
              {
                result->setDateAndTime(fieldGeneratorDateAndTime.value.referenced());
                fieldGeneratorDateAndTime.have_value = false;
              }
            else if (!(result->hasDateAndTime()))
              {
                error("When parsing the object for %what%, the \"DateAndTime\" field was missing.");
              }
            if (fieldGeneratorObservations.have_value)
              {
                result->initObservations();
                size_t count = fieldGeneratorObservations.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendObservations(fieldGeneratorObservations.value[num].referenced());
                  }
                fieldGeneratorObservations.value.clear();
                fieldGeneratorObservations.have_value = false;
              }
            else if (!(result->hasObservations()))
              {
                error("When parsing the object for %what%, the \"Observations\" field was missing.");
              }
            if (fieldGeneratorDailySummary.have_value)
              {
                result->setDailySummary(fieldGeneratorDailySummary.value.referenced());
                fieldGeneratorDailySummary.have_value = false;
              }
            else if (!(result->hasDailySummary()))
              {
                error("When parsing the object for %what%, the \"DailySummary\" field was missing.");
              }
            WeatherInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowWeatherHistoryInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
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
                case 'D':
                    if (strncmp(&(field_name[1]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "lySummary") == 0)
                                    return &fieldGeneratorDailySummary;
                                break;
                            case 't':
                                if (strcmp(&(field_name[3]), "eAndTime") == 0)
                                    return &fieldGeneratorDateAndTime;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "ndDateAndTime") == 0)
                        return &fieldGeneratorEndDateAndTime;
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
                    if (strcmp(&(field_name[1]), "bservations") == 0)
                        return &fieldGeneratorObservations;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedAttribute") == 0)
                        return &fieldGeneratorRequestedAttribute;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartDateAndTime") == 0)
                        return &fieldGeneratorStartDateAndTime;
                    break;
                default:
                    break;
              }
            return WeatherInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : WeatherInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorAttribution("field \"Attribution\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), fieldGeneratorStartDateAndTime("field \"StartDateAndTime\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), fieldGeneratorEndDateAndTime("field \"EndDateAndTime\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), fieldGeneratorAlerts("field \"Alerts\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), fieldGeneratorRequestedAttribute("field \"RequestedAttribute\" of the ShowWeatherHistoryInformationNugget class"), fieldGeneratorIsYesNoQuery("field \"IsYesNoQuery\" of the ShowWeatherHistoryInformationNugget class"), fieldGeneratorDateAndTime("field \"DateAndTime\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), fieldGeneratorObservations("field \"Observations\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), fieldGeneratorDailySummary("field \"DailySummary\" of the ShowWeatherHistoryInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowWeatherHistoryInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAttribution.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorStartDateAndTime.reset();
            fieldGeneratorEndDateAndTime.reset();
            fieldGeneratorAlerts.reset();
            fieldGeneratorRequestedAttribute.reset();
            fieldGeneratorIsYesNoQuery.reset();
            fieldGeneratorDateAndTime.reset();
            fieldGeneratorObservations.reset();
            fieldGeneratorDailySummary.reset();
            WeatherInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWWEATHERHISTORYINFORMATIONNUGGETJSON_H */
