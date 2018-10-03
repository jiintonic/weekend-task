/* file "SportsStatsAPIJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSAPIJSON_H
#define SPORTSSTATSAPIJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include <string>
#include "SportsSeasonJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStatsAPIJSON : public ReferenceCounted
  {
  public:
    class TypeValueJSON : public ReferenceCounted
      {
      public:
        class TypeStatsJSON : public ReferenceCounted
          {
          public:
            enum TypeValueKnownValues
              {
                Value_Unavailable,
                Value__none
              };
            struct TypeValue
              {
                bool in_known_list;
                std::string string_value;
                TypeValueKnownValues list_value;

                TypeValue(void);
                TypeValue(const TypeValue &other);
                TypeValue(TypeValueKnownValues other);
                bool  operator==(const TypeValue &other) const;
                bool  operator!=(const TypeValue &other) const;
                bool  operator<(const TypeValue &other) const;
                bool  operator>(const TypeValue &other) const;
                bool  operator>=(const TypeValue &other) const;
                bool  operator<=(const TypeValue &other) const;

              };

            static TypeValueKnownValues  stringToValue(const char *chars);
            static const char * stringFromValue(TypeValueKnownValues the_enum);
            class TypeSplitJSON : public ReferenceCounted
              {
              private:
                bool flagHasSplitClass;
                std::string storeSplitClass;
                bool flagHasSplitValue;
                std::string storeSplitValue;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypeSplitJSON(const TypeSplitJSON &);
                TypeSplitJSON & operator=(const TypeSplitJSON &other);

                void  fromJSONSplitClass(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONSplitValue(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypeSplitJSON(void);
                virtual ~TypeSplitJSON(void);
                bool  hasSplitClass(void) const;
                std::string  getSplitClass(void);
                const std::string  getSplitClass(void) const;
                bool  hasSplitValue(void) const;
                std::string  getSplitValue(void);
                const std::string  getSplitValue(void) const;

                virtual size_t extraTypeSplitComponentCount(void) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    return extraKeys.size();
                  }
                virtual const char *extraTypeSplitComponentKey(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraKeys[component_num].c_str();
                  }
                virtual JSONValue *extraTypeSplitComponentValue(size_t component_num)
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual const JSONValue *extraTypeSplitComponentValue(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual JSONValue *extraTypeSplitLookup(const char *field_name)
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }
                virtual const JSONValue *extraTypeSplitLookup(const char *field_name) const
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }

                void setSplitClass(std::string new_value)
                  {
                    flagHasSplitClass = true;
                    storeSplitClass = new_value;
                  }
                void unsetSplitClass(void)
                  {
                    flagHasSplitClass = false;
                  }
                void setSplitValue(std::string new_value)
                  {
                    flagHasSplitValue = true;
                    storeSplitValue = new_value;
                  }
                void unsetSplitValue(void)
                  {
                    flagHasSplitValue = false;
                  }

                virtual void extraTypeSplitAppendPair(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    assert(extraKeys.size() == extraValues.size());
                    extraKeys.push_back(key);
                    extraValues.push_back(new_component);
                    enter_into_string_index(extraIndex, key, new_component);
                    new_component->add_reference();
                  }
                virtual void extraTypeSplitSetField(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    JSONValue *old_field = extraTypeSplitLookup(key);
                    if (old_field == NULL)
                      {
                        extraTypeSplitAppendPair(key, new_component);
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
                    assert(flagHasSplitClass);
                    handler->start_pair("SplitClass");
                    handler->string_value(storeSplitClass);
                    assert(flagHasSplitValue);
                    handler->start_pair("SplitValue");
                    handler->string_value(storeSplitValue);
                  }
                virtual const char *missing_field_error(void) const
                  {
                    if (!(hasSplitClass()))
                      {
                        return "When parsing the object for %what%, the \"SplitClass\" field was missing.";
                      }
                    if (!(hasSplitValue()))
                      {
                        return "When parsing the object for %what%, the \"SplitValue\" field was missing.";
                      }
                    return NULL;
                  }

                static TypeSplitJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                static TypeSplitJSON *from_text(const char *text, bool ignore_extras = false)
                  {
                    TypeSplitJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypeSplitJSON>, TypeSplitJSON *, bool> generator("Type TypeSplit", ignore_extras);
                        parse_json_value(text, "Text for TypeSplitJSON", &generator);
                        assert(generator.have_value);
                        result = generator.value.referenced();
                        result->add_reference();
                      };
                    result->remove_reference_no_delete();
                    return result;
                  }
                static TypeSplitJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                  {
                    TypeSplitJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypeSplitJSON>, TypeSplitJSON *, bool> generator("Type TypeSplit", ignore_extras);
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
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSplitClass;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSplitValue;
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
                        TypeSplitJSON *result = new TypeSplitJSON();
                        assert(result != NULL);
                        RCHandle<TypeSplitJSON> result_holder = result;
                        finish(result);
                        size_t extra_count = unknownFieldGenerator.field_names.size();
                        assert(extra_count == unknownFieldGenerator.field_values.size());
                        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                          {
                            result->extraTypeSplitAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                          }
                        unknownFieldGenerator.field_names.clear();
                        unknownFieldGenerator.field_values.clear();
                        destroy_string_index(unknownFieldGenerator.index);
                    unknownFieldGenerator.index = create_string_index();
                        handle_result(result);
                      }
                    void finish(TypeSplitJSON *result)
                      {
                        if (fieldGeneratorSplitClass.have_value)
                          {
                            result->setSplitClass(fieldGeneratorSplitClass.value);
                            fieldGeneratorSplitClass.have_value = false;
                          }
                        else if (!(result->hasSplitClass()))
                          {
                            error("When parsing the object for %what%, the \"SplitClass\" field was missing.");
                          }
                        if (fieldGeneratorSplitValue.have_value)
                          {
                            result->setSplitValue(fieldGeneratorSplitValue.value);
                            fieldGeneratorSplitValue.have_value = false;
                          }
                        else if (!(result->hasSplitValue()))
                          {
                            error("When parsing the object for %what%, the \"SplitValue\" field was missing.");
                          }
                      }
                    virtual void handle_result(TypeSplitJSON *new_result) = 0;
                    virtual JSONHandler *start_known_field(const char *field_name)
                      {
                        if (strncmp(field_name, "Split", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'C':
                                    if (strcmp(&(field_name[6]), "lass") == 0)
                                        return &fieldGeneratorSplitClass;
                                    break;
                                case 'V':
                                    if (strcmp(&(field_name[6]), "alue") == 0)
                                        return &fieldGeneratorSplitValue;
                                    break;
                                default:
                                    break;
                              }
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratorSplitClass("field \"SplitClass\" of the TypeSplit class"), fieldGeneratorSplitValue("field \"SplitValue\" of the TypeSplit class"), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the TypeSplit class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratorSplitClass.reset();
                        fieldGeneratorSplitValue.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };

          private:
            bool flagHasName;
            std::string storeName;
            bool flagHasValue;
            TypeValue storeValue;
            bool flagHasValueNumeric;
            double storeValueNumeric;
            std::string textStoreValueNumeric;
            bool flagHasSeason;
            SportsSeasonJSON * storeSeason;
            bool flagHasSplit;
            TypeSplitJSON * storeSplit;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeStatsJSON(const TypeStatsJSON &);
            TypeStatsJSON & operator=(const TypeStatsJSON &other);

            void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONValueNumeric(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONSplit(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeStatsJSON(void);
            virtual ~TypeStatsJSON(void);
            bool  hasName(void) const;
            std::string  getName(void);
            const std::string  getName(void) const;
            bool  hasValue(void) const;
            TypeValue  getValue(void);
            const TypeValue  getValue(void) const;
            const char * getValueAsChars(void) const;
            std::string  getValueAsString(void) const;
            bool  hasValueNumeric(void) const;
            double  getValueNumeric(void);
            const double  getValueNumeric(void) const;
            std::string  getValueNumericAsText(void) const;
            bool  hasSeason(void) const;
            SportsSeasonJSON *  getSeason(void);
            const SportsSeasonJSON *  getSeason(void) const;
            bool  hasSplit(void) const;
            TypeSplitJSON *  getSplit(void);
            const TypeSplitJSON *  getSplit(void) const;

            virtual size_t extraTypeStatsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeStatsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeStatsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeStatsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeStatsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeStatsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
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
            void setValue(TypeValue new_value)
              {
                flagHasValue = true;
                storeValue = new_value;
              }
            void setValue(const char *chars)
              {
                TypeValueKnownValues known = stringToValue(chars);
                TypeValue new_value;
                if (known == Value__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = chars;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                setValue(new_value);
              }
            void setValue(std::string the_string)
              {
                setValue(the_string.c_str());
              }
            void setValue(TypeValueKnownValues new_value)
              {
                TypeValue new_full_value;
                assert(new_value != Value__none);
                new_full_value.in_known_list = true;
                new_full_value.list_value = new_value;
                setValue(new_full_value);
              }
            void unsetValue(void)
              {
                flagHasValue = false;
              }
            void setValueNumeric(double new_value)
              {
                flagHasValueNumeric = true;
                storeValueNumeric = new_value;
                textStoreValueNumeric = "";
              }
            void setValueNumericText(std::string new_value)
              {
                flagHasValueNumeric = true;
                if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                    throw("The text value for field ValueNumeric of TypeStatsJSON is not a valid number.");
                textStoreValueNumeric = new_value;
              }
            void unsetValueNumeric(void)
              {
                flagHasValueNumeric = false;
              }
            void setSeason(SportsSeasonJSON * new_value)
              {
                new_value->add_reference();
                if (flagHasSeason)
                  {
                    storeSeason->remove_reference();
                  }
                flagHasSeason = true;
                storeSeason = new_value;
              }
            void unsetSeason(void)
              {
                if (flagHasSeason)
                  {
                    storeSeason->remove_reference();
                  }
                flagHasSeason = false;
              }
            void setSplit(TypeSplitJSON * new_value)
              {
                new_value->add_reference();
                if (flagHasSplit)
                  {
                    storeSplit->remove_reference();
                  }
                flagHasSplit = true;
                storeSplit = new_value;
              }
            void unsetSplit(void)
              {
                if (flagHasSplit)
                  {
                    storeSplit->remove_reference();
                  }
                flagHasSplit = false;
              }

            virtual void extraTypeStatsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeStatsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeStatsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeStatsAppendPair(key, new_component);
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
                assert(flagHasName);
                handler->start_pair("Name");
                handler->string_value(storeName);
                assert(flagHasValue);
                handler->start_pair("Value");
                if (storeValue.in_known_list)
                  {
                    switch (storeValue.list_value)
                      {
                        case Value_Unavailable:
                            handler->string_value("Unavailable");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeValue.string_value);
                  }
                if (flagHasValueNumeric)
                  {
                    handler->start_pair("ValueNumeric");
                    if (textStoreValueNumeric != "")
                        handler->number_value(textStoreValueNumeric.c_str());
                    else if (((double)(long int)storeValueNumeric) == storeValueNumeric)
                        handler->number_value((long int)storeValueNumeric);
                    else
                        handler->number_value(storeValueNumeric);
                  }
                if (flagHasSeason)
                  {
                    handler->start_pair("Season");
                    storeSeason->write_as_json(handler);
                  }
                if (flagHasSplit)
                  {
                    handler->start_pair("Split");
                    storeSplit->write_as_json(handler);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasName()))
                  {
                    return "When parsing the object for %what%, the \"Name\" field was missing.";
                  }
                if (!(hasValue()))
                  {
                    return "When parsing the object for %what%, the \"Value\" field was missing.";
                  }
                return NULL;
              }

            static TypeStatsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeStatsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeStatsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool> generator("Type TypeStats", ignore_extras);
                    parse_json_value(text, "Text for TypeStatsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeStatsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeStatsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool> generator("Type TypeStats", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
            class FieldGeneratorValue : public JSONStringGenerator
                  {
                  protected:
                    FieldGeneratorValue(const char *what)
                      {
                        set_what(what);
                      }
                    FieldGeneratorValue(void)
                      {
                      }
                    void handle_result(const char *result)
                      {
                        TypeValueKnownValues known = stringToValue(result);
                        TypeValue new_value;
                        if (known == Value__none)
                          {
                            new_value.in_known_list = false;
                            new_value.string_value = result;
                          }
                        else
                          {
                            new_value.in_known_list = true;
                            new_value.list_value = known;
                          }
                        handle_result(new_value);
                      }
                    virtual void handle_result(TypeValue result) = 0;
                  };
                JSONHoldingGenerator<FieldGeneratorValue, TypeValue, TypeValue > fieldGeneratorValue;
                JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValueNumeric;
                JSONHoldingGenerator<SportsSeasonJSON::Generator, RCHandle<SportsSeasonJSON>, SportsSeasonJSON *, bool > fieldGeneratorSeason;
                JSONHoldingGenerator<TypeSplitJSON::Generator, RCHandle<TypeSplitJSON>, TypeSplitJSON *, bool > fieldGeneratorSplit;
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
                    TypeStatsJSON *result = new TypeStatsJSON();
                    assert(result != NULL);
                    RCHandle<TypeStatsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeStatsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeStatsJSON *result)
                  {
                    if (fieldGeneratorName.have_value)
                      {
                        result->setName(fieldGeneratorName.value);
                        fieldGeneratorName.have_value = false;
                      }
                    else if (!(result->hasName()))
                      {
                        error("When parsing the object for %what%, the \"Name\" field was missing.");
                      }
                    if (fieldGeneratorValue.have_value)
                      {
                        result->setValue(fieldGeneratorValue.value);
                        fieldGeneratorValue.have_value = false;
                      }
                    else if (!(result->hasValue()))
                      {
                        error("When parsing the object for %what%, the \"Value\" field was missing.");
                      }
                    if (fieldGeneratorValueNumeric.have_value)
                      {
                        result->setValueNumericText(fieldGeneratorValueNumeric.value);
                        fieldGeneratorValueNumeric.have_value = false;
                      }
                    if (fieldGeneratorSeason.have_value)
                      {
                        result->setSeason(fieldGeneratorSeason.value.referenced());
                        fieldGeneratorSeason.have_value = false;
                      }
                    if (fieldGeneratorSplit.have_value)
                      {
                        result->setSplit(fieldGeneratorSplit.value.referenced());
                        fieldGeneratorSplit.have_value = false;
                      }
                  }
                virtual void handle_result(TypeStatsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[1]), "ame") == 0)
                                return &fieldGeneratorName;
                            break;
                        case 'S':
                            switch ((unsigned char)(field_name[1]))
                              {
                                case 'e':
                                    if (strcmp(&(field_name[2]), "ason") == 0)
                                        return &fieldGeneratorSeason;
                                    break;
                                case 'p':
                                    if (strcmp(&(field_name[2]), "lit") == 0)
                                        return &fieldGeneratorSplit;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'V':
                            if (strncmp(&(field_name[1]), "alue", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 0:
                                        return &fieldGeneratorValue;
                                    case 'N':
                                        if (strcmp(&(field_name[6]), "umeric") == 0)
                                            return &fieldGeneratorValueNumeric;
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
                Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the TypeStats class"), fieldGeneratorValue("field \"Value\" of the TypeStats class"), fieldGeneratorValueNumeric("field \"ValueNumeric\" of the TypeStats class"), fieldGeneratorSeason("field \"Season\" of the TypeStats class", ignore_extras), fieldGeneratorSplit("field \"Split\" of the TypeStats class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeStats class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorName.reset();
                    fieldGeneratorValue.reset();
                    fieldGeneratorValueNumeric.reset();
                    fieldGeneratorSeason.reset();
                    fieldGeneratorSplit.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasTeamID;
        std::string storeTeamID;
        bool flagHasPlayerID;
        std::string storePlayerID;
        bool flagHasGameID;
        std::string storeGameID;
        bool flagHasLeague;
        std::string storeLeague;
        bool flagHasStats;
        std::vector< TypeStatsJSON * > storeStats;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeValueJSON(const TypeValueJSON &);
        TypeValueJSON & operator=(const TypeValueJSON &other);

        void  fromJSONTeamID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPlayerID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONGameID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStats(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeValueJSON(void);
        virtual ~TypeValueJSON(void);
        bool  hasTeamID(void) const;
        std::string  getTeamID(void);
        const std::string  getTeamID(void) const;
        bool  hasPlayerID(void) const;
        std::string  getPlayerID(void);
        const std::string  getPlayerID(void) const;
        bool  hasGameID(void) const;
        std::string  getGameID(void);
        const std::string  getGameID(void) const;
        bool  hasLeague(void) const;
        std::string  getLeague(void);
        const std::string  getLeague(void) const;
        bool  hasStats(void) const;
        size_t  countOfStats(void) const;
        TypeStatsJSON *  elementOfStats(size_t element_num);
        const TypeStatsJSON *  elementOfStats(size_t element_num) const;
        std::vector< TypeStatsJSON * >  getStats(void);
        const std::vector< TypeStatsJSON * >  getStats(void) const;

        virtual size_t extraTypeValueComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeValueComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeValueComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeValueComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeValueLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeValueLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setTeamID(std::string new_value)
          {
            flagHasTeamID = true;
            storeTeamID = new_value;
          }
        void unsetTeamID(void)
          {
            flagHasTeamID = false;
          }
        void setPlayerID(std::string new_value)
          {
            flagHasPlayerID = true;
            storePlayerID = new_value;
          }
        void unsetPlayerID(void)
          {
            flagHasPlayerID = false;
          }
        void setGameID(std::string new_value)
          {
            flagHasGameID = true;
            storeGameID = new_value;
          }
        void unsetGameID(void)
          {
            flagHasGameID = false;
          }
        void setLeague(std::string new_value)
          {
            flagHasLeague = true;
            storeLeague = new_value;
          }
        void unsetLeague(void)
          {
            flagHasLeague = false;
          }
        void initStats(void)
          {
            if (flagHasStats)
              {
                for (size_t num2 = 0; num2 < storeStats.size(); ++num2)
                  {
                    storeStats[num2]->remove_reference();
                  }
              }
            flagHasStats = true;
            storeStats.clear();
          }
        void appendStats(TypeStatsJSON * to_append)
          {
            if (!flagHasStats)
              {
                flagHasStats = true;
                storeStats.clear();
              }
            assert(flagHasStats);
            to_append->add_reference();
            storeStats.push_back(to_append);
          }
        void unsetStats(void)
          {
            if (flagHasStats)
              {
                for (size_t num3 = 0; num3 < storeStats.size(); ++num3)
                  {
                    storeStats[num3]->remove_reference();
                  }
              }
            flagHasStats = false;
            storeStats.clear();
          }

        virtual void extraTypeValueAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeValueSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeValueLookup(key);
            if (old_field == NULL)
              {
                extraTypeValueAppendPair(key, new_component);
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
            if (flagHasTeamID)
              {
                handler->start_pair("TeamID");
                handler->string_value(storeTeamID);
              }
            if (flagHasPlayerID)
              {
                handler->start_pair("PlayerID");
                handler->string_value(storePlayerID);
              }
            if (flagHasGameID)
              {
                handler->start_pair("GameID");
                handler->string_value(storeGameID);
              }
            assert(flagHasLeague);
            handler->start_pair("League");
            handler->string_value(storeLeague);
            assert(flagHasStats);
            handler->start_pair("Stats");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeStats.size(); ++num1)
              {
                storeStats[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLeague()))
              {
                return "When parsing the object for %what%, the \"League\" field was missing.";
              }
            if (!(hasStats()))
              {
                return "When parsing the object for %what%, the \"Stats\" field was missing.";
              }
            return NULL;
          }

        static TypeValueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeValueJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
                parse_json_value(text, "Text for TypeValueJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeValueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPlayerID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGameID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLeague;
            JSONHoldingArrayGenerator<TypeStatsJSON::Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool > fieldGeneratorStats;
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
                TypeValueJSON *result = new TypeValueJSON();
                assert(result != NULL);
                RCHandle<TypeValueJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeValueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeValueJSON *result)
              {
                if (fieldGeneratorTeamID.have_value)
                  {
                    result->setTeamID(fieldGeneratorTeamID.value);
                    fieldGeneratorTeamID.have_value = false;
                  }
                if (fieldGeneratorPlayerID.have_value)
                  {
                    result->setPlayerID(fieldGeneratorPlayerID.value);
                    fieldGeneratorPlayerID.have_value = false;
                  }
                if (fieldGeneratorGameID.have_value)
                  {
                    result->setGameID(fieldGeneratorGameID.value);
                    fieldGeneratorGameID.have_value = false;
                  }
                if (fieldGeneratorLeague.have_value)
                  {
                    result->setLeague(fieldGeneratorLeague.value);
                    fieldGeneratorLeague.have_value = false;
                  }
                else if (!(result->hasLeague()))
                  {
                    error("When parsing the object for %what%, the \"League\" field was missing.");
                  }
                if (fieldGeneratorStats.have_value)
                  {
                    result->initStats();
                    size_t count = fieldGeneratorStats.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendStats(fieldGeneratorStats.value[num].referenced());
                      }
                    fieldGeneratorStats.value.clear();
                    fieldGeneratorStats.have_value = false;
                  }
                else if (!(result->hasStats()))
                  {
                    error("When parsing the object for %what%, the \"Stats\" field was missing.");
                  }
              }
            virtual void handle_result(TypeValueJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'G':
                        if (strcmp(&(field_name[1]), "ameID") == 0)
                            return &fieldGeneratorGameID;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "eague") == 0)
                            return &fieldGeneratorLeague;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "layerID") == 0)
                            return &fieldGeneratorPlayerID;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "tats") == 0)
                            return &fieldGeneratorStats;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "eamID") == 0)
                            return &fieldGeneratorTeamID;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTeamID("field \"TeamID\" of the TypeValue class"), fieldGeneratorPlayerID("field \"PlayerID\" of the TypeValue class"), fieldGeneratorGameID("field \"GameID\" of the TypeValue class"), fieldGeneratorLeague("field \"League\" of the TypeValue class"), fieldGeneratorStats("field \"Stats\" of the TypeValue class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeValue class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTeamID.reset();
                fieldGeneratorPlayerID.reset();
                fieldGeneratorGameID.reset();
                fieldGeneratorLeague.reset();
                fieldGeneratorStats.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasValue;
    std::vector< TypeValueJSON * > storeValue;

    SportsStatsAPIJSON(const SportsStatsAPIJSON &);
    SportsStatsAPIJSON & operator=(const SportsStatsAPIJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsAPIJSON(void);
    virtual ~SportsStatsAPIJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    TypeValueJSON *  elementOfValue(size_t element_num);
    const TypeValueJSON *  elementOfValue(size_t element_num) const;
    std::vector< TypeValueJSON * >  getValue(void);
    const std::vector< TypeValueJSON * >  getValue(void) const;


    void initValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num5 = 0; num5 < storeValue.size(); ++num5)
              {
                storeValue[num5]->remove_reference();
              }
          }
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(TypeValueJSON * to_append)
      {
        if (!flagHasValue)
          {
            flagHasValue = true;
            storeValue.clear();
          }
        assert(flagHasValue);
        to_append->add_reference();
        storeValue.push_back(to_append);
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num6 = 0; num6 < storeValue.size(); ++num6)
              {
                storeValue[num6]->remove_reference();
              }
          }
        flagHasValue = false;
        storeValue.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            storeValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }

    static SportsStatsAPIJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsAPIJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsAPIJSON>, SportsStatsAPIJSON *, bool> generator("Type SportsStatsAPI", ignore_extras);
            parse_json_value(text, "Text for SportsStatsAPIJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsAPIJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsAPIJSON>, SportsStatsAPIJSON *, bool> generator("Type SportsStatsAPI", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            SportsStatsAPIJSON *result = new SportsStatsAPIJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(SportsStatsAPIJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >("Type SportsStatsAPI", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSSTATSAPIJSON_H */
