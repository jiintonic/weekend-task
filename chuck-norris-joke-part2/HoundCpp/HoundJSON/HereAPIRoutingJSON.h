/* file "HereAPIRoutingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HEREAPIROUTINGJSON_H
#define HEREAPIROUTINGJSON_H

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
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HereAPIRoutingJSON : public ReferenceCounted
  {
  public:
    class TyperesponseJSON : public ReferenceCounted
      {
      public:
        class TyperouteJSON : public ReferenceCounted
          {
          public:
            class TypesummaryJSON : public ReferenceCounted
              {
              private:
                bool flagHasdistance;
                double storedistance;
                std::string textStoredistance;
                bool flagHastravelTime;
                double storetravelTime;
                std::string textStoretravelTime;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypesummaryJSON(const TypesummaryJSON &);
                TypesummaryJSON & operator=(const TypesummaryJSON &other);

                void  fromJSONdistance(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONtravelTime(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypesummaryJSON(void);
                virtual ~TypesummaryJSON(void);
                bool  hasdistance(void) const;
                double  getdistance(void);
                const double  getdistance(void) const;
                std::string  getdistanceAsText(void) const;
                bool  hastravelTime(void) const;
                double  gettravelTime(void);
                const double  gettravelTime(void) const;
                std::string  gettravelTimeAsText(void) const;

                virtual size_t extraTypesummaryComponentCount(void) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    return extraKeys.size();
                  }
                virtual const char *extraTypesummaryComponentKey(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraKeys[component_num].c_str();
                  }
                virtual JSONValue *extraTypesummaryComponentValue(size_t component_num)
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual const JSONValue *extraTypesummaryComponentValue(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual JSONValue *extraTypesummaryLookup(const char *field_name)
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }
                virtual const JSONValue *extraTypesummaryLookup(const char *field_name) const
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }

                void setdistance(double new_value)
                  {
                    flagHasdistance = true;
                    storedistance = new_value;
                    textStoredistance = "";
                  }
                void setdistanceText(std::string new_value)
                  {
                    flagHasdistance = true;
                    if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                        throw("The text value for field distance of TypesummaryJSON is not a valid number.");
                    textStoredistance = new_value;
                  }
                void unsetdistance(void)
                  {
                    flagHasdistance = false;
                  }
                void settravelTime(double new_value)
                  {
                    flagHastravelTime = true;
                    storetravelTime = new_value;
                    textStoretravelTime = "";
                  }
                void settravelTimeText(std::string new_value)
                  {
                    flagHastravelTime = true;
                    if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                        throw("The text value for field travelTime of TypesummaryJSON is not a valid number.");
                    textStoretravelTime = new_value;
                  }
                void unsettravelTime(void)
                  {
                    flagHastravelTime = false;
                  }

                virtual void extraTypesummaryAppendPair(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    assert(extraKeys.size() == extraValues.size());
                    extraKeys.push_back(key);
                    extraValues.push_back(new_component);
                    enter_into_string_index(extraIndex, key, new_component);
                    new_component->add_reference();
                  }
                virtual void extraTypesummarySetField(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    JSONValue *old_field = extraTypesummaryLookup(key);
                    if (old_field == NULL)
                      {
                        extraTypesummaryAppendPair(key, new_component);
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
                    assert(flagHasdistance);
                    handler->start_pair("distance");
                    if (textStoredistance != "")
                        handler->number_value(textStoredistance.c_str());
                    else if (((double)(long int)storedistance) == storedistance)
                        handler->number_value((long int)storedistance);
                    else
                        handler->number_value(storedistance);
                    assert(flagHastravelTime);
                    handler->start_pair("travelTime");
                    if (textStoretravelTime != "")
                        handler->number_value(textStoretravelTime.c_str());
                    else if (((double)(long int)storetravelTime) == storetravelTime)
                        handler->number_value((long int)storetravelTime);
                    else
                        handler->number_value(storetravelTime);
                  }
                virtual const char *missing_field_error(void) const
                  {
                    if (!(hasdistance()))
                      {
                        return "When parsing the object for %what%, the \"distance\" field was missing.";
                      }
                    if (!(hastravelTime()))
                      {
                        return "When parsing the object for %what%, the \"travelTime\" field was missing.";
                      }
                    return NULL;
                  }

                static TypesummaryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                static TypesummaryJSON *from_text(const char *text, bool ignore_extras = false)
                  {
                    TypesummaryJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypesummaryJSON>, TypesummaryJSON *, bool> generator("Type Typesummary", ignore_extras);
                        parse_json_value(text, "Text for TypesummaryJSON", &generator);
                        assert(generator.have_value);
                        result = generator.value.referenced();
                        result->add_reference();
                      };
                    result->remove_reference_no_delete();
                    return result;
                  }
                static TypesummaryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                  {
                    TypesummaryJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypesummaryJSON>, TypesummaryJSON *, bool> generator("Type Typesummary", ignore_extras);
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
                    JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratordistance;
                    JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratortravelTime;
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
                        TypesummaryJSON *result = new TypesummaryJSON();
                        assert(result != NULL);
                        RCHandle<TypesummaryJSON> result_holder = result;
                        finish(result);
                        size_t extra_count = unknownFieldGenerator.field_names.size();
                        assert(extra_count == unknownFieldGenerator.field_values.size());
                        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                          {
                            result->extraTypesummaryAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                          }
                        unknownFieldGenerator.field_names.clear();
                        unknownFieldGenerator.field_values.clear();
                        destroy_string_index(unknownFieldGenerator.index);
                    unknownFieldGenerator.index = create_string_index();
                        handle_result(result);
                      }
                    void finish(TypesummaryJSON *result)
                      {
                        if (fieldGeneratordistance.have_value)
                          {
                            result->setdistanceText(fieldGeneratordistance.value);
                            fieldGeneratordistance.have_value = false;
                          }
                        else if (!(result->hasdistance()))
                          {
                            error("When parsing the object for %what%, the \"distance\" field was missing.");
                          }
                        if (fieldGeneratortravelTime.have_value)
                          {
                            result->settravelTimeText(fieldGeneratortravelTime.value);
                            fieldGeneratortravelTime.have_value = false;
                          }
                        else if (!(result->hastravelTime()))
                          {
                            error("When parsing the object for %what%, the \"travelTime\" field was missing.");
                          }
                      }
                    virtual void handle_result(TypesummaryJSON *new_result) = 0;
                    virtual JSONHandler *start_known_field(const char *field_name)
                      {
                        switch ((unsigned char)(field_name[0]))
                          {
                            case 'd':
                                if (strcmp(&(field_name[1]), "istance") == 0)
                                    return &fieldGeneratordistance;
                                break;
                            case 't':
                                if (strcmp(&(field_name[1]), "ravelTime") == 0)
                                    return &fieldGeneratortravelTime;
                                break;
                            default:
                                break;
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratordistance("field \"distance\" of the Typesummary class"), fieldGeneratortravelTime("field \"travelTime\" of the Typesummary class"), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the Typesummary class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratordistance.reset();
                        fieldGeneratortravelTime.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };
            class TypelegJSON : public ReferenceCounted
              {
              public:
                class TypestartJSON : public ReferenceCounted
                  {
                  public:
                    class TypemappedPositionJSON : public ReferenceCounted
                      {
                      private:
                        bool flagHaslatitude;
                        double storelatitude;
                        std::string textStorelatitude;
                        bool flagHaslongitude;
                        double storelongitude;
                        std::string textStorelongitude;
                        std::vector<std::string> extraKeys;
                        std::vector<JSONValue *> extraValues;
                        string_index *extraIndex;

                        TypemappedPositionJSON(const TypemappedPositionJSON &);
                        TypemappedPositionJSON & operator=(const TypemappedPositionJSON &other);

                        void  fromJSONlatitude(JSONValue *json_value, bool ignore_extras = false);

                        void  fromJSONlongitude(JSONValue *json_value, bool ignore_extras = false);


                      public:
                        TypemappedPositionJSON(void);
                        virtual ~TypemappedPositionJSON(void);
                        bool  haslatitude(void) const;
                        double  getlatitude(void);
                        const double  getlatitude(void) const;
                        std::string  getlatitudeAsText(void) const;
                        bool  haslongitude(void) const;
                        double  getlongitude(void);
                        const double  getlongitude(void) const;
                        std::string  getlongitudeAsText(void) const;

                        virtual size_t extraTypemappedPositionComponentCount(void) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            return extraKeys.size();
                          }
                        virtual const char *extraTypemappedPositionComponentKey(size_t component_num) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraKeys[component_num].c_str();
                          }
                        virtual JSONValue *extraTypemappedPositionComponentValue(size_t component_num)
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraValues[component_num];
                          }
                        virtual const JSONValue *extraTypemappedPositionComponentValue(size_t component_num) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraValues[component_num];
                          }
                        virtual JSONValue *extraTypemappedPositionLookup(const char *field_name)
                          {
                            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                            if (result != NULL)
                                result->add_reference();
                            return result;
                          }
                        virtual const JSONValue *extraTypemappedPositionLookup(const char *field_name) const
                          {
                            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                            if (result != NULL)
                                result->add_reference();
                            return result;
                          }

                        void setlatitude(double new_value)
                          {
                            flagHaslatitude = true;
                            storelatitude = new_value;
                            textStorelatitude = "";
                          }
                        void setlatitudeText(std::string new_value)
                          {
                            flagHaslatitude = true;
                            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                                throw("The text value for field latitude of TypemappedPositionJSON is not a valid number.");
                            textStorelatitude = new_value;
                          }
                        void unsetlatitude(void)
                          {
                            flagHaslatitude = false;
                          }
                        void setlongitude(double new_value)
                          {
                            flagHaslongitude = true;
                            storelongitude = new_value;
                            textStorelongitude = "";
                          }
                        void setlongitudeText(std::string new_value)
                          {
                            flagHaslongitude = true;
                            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                                throw("The text value for field longitude of TypemappedPositionJSON is not a valid number.");
                            textStorelongitude = new_value;
                          }
                        void unsetlongitude(void)
                          {
                            flagHaslongitude = false;
                          }

                        virtual void extraTypemappedPositionAppendPair(const char *key, JSONValue *new_component)
                          {
                            assert(key != NULL);
                            assert(new_component != NULL);

                            assert(extraKeys.size() == extraValues.size());
                            extraKeys.push_back(key);
                            extraValues.push_back(new_component);
                            enter_into_string_index(extraIndex, key, new_component);
                            new_component->add_reference();
                          }
                        virtual void extraTypemappedPositionSetField(const char *key, JSONValue *new_component)
                          {
                            assert(key != NULL);
                            assert(new_component != NULL);

                            JSONValue *old_field = extraTypemappedPositionLookup(key);
                            if (old_field == NULL)
                              {
                                extraTypemappedPositionAppendPair(key, new_component);
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
                            assert(flagHaslatitude);
                            handler->start_pair("latitude");
                            if (textStorelatitude != "")
                                handler->number_value(textStorelatitude.c_str());
                            else if (((double)(long int)storelatitude) == storelatitude)
                                handler->number_value((long int)storelatitude);
                            else
                                handler->number_value(storelatitude);
                            assert(flagHaslongitude);
                            handler->start_pair("longitude");
                            if (textStorelongitude != "")
                                handler->number_value(textStorelongitude.c_str());
                            else if (((double)(long int)storelongitude) == storelongitude)
                                handler->number_value((long int)storelongitude);
                            else
                                handler->number_value(storelongitude);
                          }
                        virtual const char *missing_field_error(void) const
                          {
                            if (!(haslatitude()))
                              {
                                return "When parsing the object for %what%, the \"latitude\" field was missing.";
                              }
                            if (!(haslongitude()))
                              {
                                return "When parsing the object for %what%, the \"longitude\" field was missing.";
                              }
                            return NULL;
                          }

                        static TypemappedPositionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                        static TypemappedPositionJSON *from_text(const char *text, bool ignore_extras = false)
                          {
                            TypemappedPositionJSON *result;
                              {
                                JSONHoldingGenerator<Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool> generator("Type TypemappedPosition", ignore_extras);
                                parse_json_value(text, "Text for TypemappedPositionJSON", &generator);
                                assert(generator.have_value);
                                result = generator.value.referenced();
                                result->add_reference();
                              };
                            result->remove_reference_no_delete();
                            return result;
                          }
                        static TypemappedPositionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                          {
                            TypemappedPositionJSON *result;
                              {
                                JSONHoldingGenerator<Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool> generator("Type TypemappedPosition", ignore_extras);
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
                            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlatitude;
                            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlongitude;
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
                                TypemappedPositionJSON *result = new TypemappedPositionJSON();
                                assert(result != NULL);
                                RCHandle<TypemappedPositionJSON> result_holder = result;
                                finish(result);
                                size_t extra_count = unknownFieldGenerator.field_names.size();
                                assert(extra_count == unknownFieldGenerator.field_values.size());
                                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                                  {
                                    result->extraTypemappedPositionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                                  }
                                unknownFieldGenerator.field_names.clear();
                                unknownFieldGenerator.field_values.clear();
                                destroy_string_index(unknownFieldGenerator.index);
                            unknownFieldGenerator.index = create_string_index();
                                handle_result(result);
                              }
                            void finish(TypemappedPositionJSON *result)
                              {
                                if (fieldGeneratorlatitude.have_value)
                                  {
                                    result->setlatitudeText(fieldGeneratorlatitude.value);
                                    fieldGeneratorlatitude.have_value = false;
                                  }
                                else if (!(result->haslatitude()))
                                  {
                                    error("When parsing the object for %what%, the \"latitude\" field was missing.");
                                  }
                                if (fieldGeneratorlongitude.have_value)
                                  {
                                    result->setlongitudeText(fieldGeneratorlongitude.value);
                                    fieldGeneratorlongitude.have_value = false;
                                  }
                                else if (!(result->haslongitude()))
                                  {
                                    error("When parsing the object for %what%, the \"longitude\" field was missing.");
                                  }
                              }
                            virtual void handle_result(TypemappedPositionJSON *new_result) = 0;
                            virtual JSONHandler *start_known_field(const char *field_name)
                              {
                                if (strncmp(field_name, "l", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[1]))
                                      {
                                        case 'a':
                                            if (strcmp(&(field_name[2]), "titude") == 0)
                                                return &fieldGeneratorlatitude;
                                            break;
                                        case 'o':
                                            if (strcmp(&(field_name[2]), "ngitude") == 0)
                                                return &fieldGeneratorlongitude;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                return NULL;
                              }

                          public:
                            Generator(bool ignore_extras = false) : fieldGeneratorlatitude("field \"latitude\" of the TypemappedPosition class"), fieldGeneratorlongitude("field \"longitude\" of the TypemappedPosition class"), unknownFieldGenerator(ignore_extras)
                              {
                                set_what("the TypemappedPosition class");
                              }
                            ~Generator(void)
                              {
                              }

                            void reset(void)
                              {
                                fieldGeneratorlatitude.reset();
                                fieldGeneratorlongitude.reset();
                                JSONObjectGenerator::reset();
                                unknownFieldGenerator.reset();
                              }
                          };
                      };

                  private:
                    bool flagHasmappedPosition;
                    TypemappedPositionJSON * storemappedPosition;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypestartJSON(const TypestartJSON &);
                    TypestartJSON & operator=(const TypestartJSON &other);

                    void  fromJSONmappedPosition(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypestartJSON(void);
                    virtual ~TypestartJSON(void);
                    bool  hasmappedPosition(void) const;
                    TypemappedPositionJSON *  getmappedPosition(void);
                    const TypemappedPositionJSON *  getmappedPosition(void) const;

                    virtual size_t extraTypestartComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypestartComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypestartComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypestartComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypestartLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypestartLookup(const char *field_name) const
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }

                    void setmappedPosition(TypemappedPositionJSON * new_value)
                      {
                        new_value->add_reference();
                        if (flagHasmappedPosition)
                          {
                            storemappedPosition->remove_reference();
                          }
                        flagHasmappedPosition = true;
                        storemappedPosition = new_value;
                      }
                    void unsetmappedPosition(void)
                      {
                        if (flagHasmappedPosition)
                          {
                            storemappedPosition->remove_reference();
                          }
                        flagHasmappedPosition = false;
                      }

                    virtual void extraTypestartAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypestartSetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypestartLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypestartAppendPair(key, new_component);
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
                        assert(flagHasmappedPosition);
                        handler->start_pair("mappedPosition");
                        storemappedPosition->write_as_json(handler);
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        if (!(hasmappedPosition()))
                          {
                            return "When parsing the object for %what%, the \"mappedPosition\" field was missing.";
                          }
                        return NULL;
                      }

                    static TypestartJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypestartJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypestartJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypestartJSON>, TypestartJSON *, bool> generator("Type Typestart", ignore_extras);
                            parse_json_value(text, "Text for TypestartJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypestartJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypestartJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypestartJSON>, TypestartJSON *, bool> generator("Type Typestart", ignore_extras);
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
                        JSONHoldingGenerator<TypemappedPositionJSON::Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool > fieldGeneratormappedPosition;
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
                            TypestartJSON *result = new TypestartJSON();
                            assert(result != NULL);
                            RCHandle<TypestartJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypestartAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypestartJSON *result)
                          {
                            if (fieldGeneratormappedPosition.have_value)
                              {
                                result->setmappedPosition(fieldGeneratormappedPosition.value.referenced());
                                fieldGeneratormappedPosition.have_value = false;
                              }
                            else if (!(result->hasmappedPosition()))
                              {
                                error("When parsing the object for %what%, the \"mappedPosition\" field was missing.");
                              }
                          }
                        virtual void handle_result(TypestartJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            if (strcmp(field_name, "mappedPosition") == 0)
                                return &fieldGeneratormappedPosition;
                            return NULL;
                          }

                      public:
                        Generator(bool ignore_extras = false) : fieldGeneratormappedPosition("field \"mappedPosition\" of the Typestart class", ignore_extras), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the Typestart class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratormappedPosition.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };
                class TypeendJSON : public ReferenceCounted
                  {
                  public:
                    class TypemappedPositionJSON : public ReferenceCounted
                      {
                      private:
                        bool flagHaslatitude;
                        double storelatitude;
                        std::string textStorelatitude;
                        bool flagHaslongitude;
                        double storelongitude;
                        std::string textStorelongitude;
                        std::vector<std::string> extraKeys;
                        std::vector<JSONValue *> extraValues;
                        string_index *extraIndex;

                        TypemappedPositionJSON(const TypemappedPositionJSON &);
                        TypemappedPositionJSON & operator=(const TypemappedPositionJSON &other);

                        void  fromJSONlatitude(JSONValue *json_value, bool ignore_extras = false);

                        void  fromJSONlongitude(JSONValue *json_value, bool ignore_extras = false);


                      public:
                        TypemappedPositionJSON(void);
                        virtual ~TypemappedPositionJSON(void);
                        bool  haslatitude(void) const;
                        double  getlatitude(void);
                        const double  getlatitude(void) const;
                        std::string  getlatitudeAsText(void) const;
                        bool  haslongitude(void) const;
                        double  getlongitude(void);
                        const double  getlongitude(void) const;
                        std::string  getlongitudeAsText(void) const;

                        virtual size_t extraTypemappedPositionComponentCount(void) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            return extraKeys.size();
                          }
                        virtual const char *extraTypemappedPositionComponentKey(size_t component_num) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraKeys[component_num].c_str();
                          }
                        virtual JSONValue *extraTypemappedPositionComponentValue(size_t component_num)
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraValues[component_num];
                          }
                        virtual const JSONValue *extraTypemappedPositionComponentValue(size_t component_num) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraValues[component_num];
                          }
                        virtual JSONValue *extraTypemappedPositionLookup(const char *field_name)
                          {
                            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                            if (result != NULL)
                                result->add_reference();
                            return result;
                          }
                        virtual const JSONValue *extraTypemappedPositionLookup(const char *field_name) const
                          {
                            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                            if (result != NULL)
                                result->add_reference();
                            return result;
                          }

                        void setlatitude(double new_value)
                          {
                            flagHaslatitude = true;
                            storelatitude = new_value;
                            textStorelatitude = "";
                          }
                        void setlatitudeText(std::string new_value)
                          {
                            flagHaslatitude = true;
                            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                                throw("The text value for field latitude of TypemappedPositionJSON is not a valid number.");
                            textStorelatitude = new_value;
                          }
                        void unsetlatitude(void)
                          {
                            flagHaslatitude = false;
                          }
                        void setlongitude(double new_value)
                          {
                            flagHaslongitude = true;
                            storelongitude = new_value;
                            textStorelongitude = "";
                          }
                        void setlongitudeText(std::string new_value)
                          {
                            flagHaslongitude = true;
                            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                                throw("The text value for field longitude of TypemappedPositionJSON is not a valid number.");
                            textStorelongitude = new_value;
                          }
                        void unsetlongitude(void)
                          {
                            flagHaslongitude = false;
                          }

                        virtual void extraTypemappedPositionAppendPair(const char *key, JSONValue *new_component)
                          {
                            assert(key != NULL);
                            assert(new_component != NULL);

                            assert(extraKeys.size() == extraValues.size());
                            extraKeys.push_back(key);
                            extraValues.push_back(new_component);
                            enter_into_string_index(extraIndex, key, new_component);
                            new_component->add_reference();
                          }
                        virtual void extraTypemappedPositionSetField(const char *key, JSONValue *new_component)
                          {
                            assert(key != NULL);
                            assert(new_component != NULL);

                            JSONValue *old_field = extraTypemappedPositionLookup(key);
                            if (old_field == NULL)
                              {
                                extraTypemappedPositionAppendPair(key, new_component);
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
                            assert(flagHaslatitude);
                            handler->start_pair("latitude");
                            if (textStorelatitude != "")
                                handler->number_value(textStorelatitude.c_str());
                            else if (((double)(long int)storelatitude) == storelatitude)
                                handler->number_value((long int)storelatitude);
                            else
                                handler->number_value(storelatitude);
                            assert(flagHaslongitude);
                            handler->start_pair("longitude");
                            if (textStorelongitude != "")
                                handler->number_value(textStorelongitude.c_str());
                            else if (((double)(long int)storelongitude) == storelongitude)
                                handler->number_value((long int)storelongitude);
                            else
                                handler->number_value(storelongitude);
                          }
                        virtual const char *missing_field_error(void) const
                          {
                            if (!(haslatitude()))
                              {
                                return "When parsing the object for %what%, the \"latitude\" field was missing.";
                              }
                            if (!(haslongitude()))
                              {
                                return "When parsing the object for %what%, the \"longitude\" field was missing.";
                              }
                            return NULL;
                          }

                        static TypemappedPositionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                        static TypemappedPositionJSON *from_text(const char *text, bool ignore_extras = false)
                          {
                            TypemappedPositionJSON *result;
                              {
                                JSONHoldingGenerator<Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool> generator("Type TypemappedPosition", ignore_extras);
                                parse_json_value(text, "Text for TypemappedPositionJSON", &generator);
                                assert(generator.have_value);
                                result = generator.value.referenced();
                                result->add_reference();
                              };
                            result->remove_reference_no_delete();
                            return result;
                          }
                        static TypemappedPositionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                          {
                            TypemappedPositionJSON *result;
                              {
                                JSONHoldingGenerator<Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool> generator("Type TypemappedPosition", ignore_extras);
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
                            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlatitude;
                            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlongitude;
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
                                TypemappedPositionJSON *result = new TypemappedPositionJSON();
                                assert(result != NULL);
                                RCHandle<TypemappedPositionJSON> result_holder = result;
                                finish(result);
                                size_t extra_count = unknownFieldGenerator.field_names.size();
                                assert(extra_count == unknownFieldGenerator.field_values.size());
                                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                                  {
                                    result->extraTypemappedPositionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                                  }
                                unknownFieldGenerator.field_names.clear();
                                unknownFieldGenerator.field_values.clear();
                                destroy_string_index(unknownFieldGenerator.index);
                            unknownFieldGenerator.index = create_string_index();
                                handle_result(result);
                              }
                            void finish(TypemappedPositionJSON *result)
                              {
                                if (fieldGeneratorlatitude.have_value)
                                  {
                                    result->setlatitudeText(fieldGeneratorlatitude.value);
                                    fieldGeneratorlatitude.have_value = false;
                                  }
                                else if (!(result->haslatitude()))
                                  {
                                    error("When parsing the object for %what%, the \"latitude\" field was missing.");
                                  }
                                if (fieldGeneratorlongitude.have_value)
                                  {
                                    result->setlongitudeText(fieldGeneratorlongitude.value);
                                    fieldGeneratorlongitude.have_value = false;
                                  }
                                else if (!(result->haslongitude()))
                                  {
                                    error("When parsing the object for %what%, the \"longitude\" field was missing.");
                                  }
                              }
                            virtual void handle_result(TypemappedPositionJSON *new_result) = 0;
                            virtual JSONHandler *start_known_field(const char *field_name)
                              {
                                if (strncmp(field_name, "l", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[1]))
                                      {
                                        case 'a':
                                            if (strcmp(&(field_name[2]), "titude") == 0)
                                                return &fieldGeneratorlatitude;
                                            break;
                                        case 'o':
                                            if (strcmp(&(field_name[2]), "ngitude") == 0)
                                                return &fieldGeneratorlongitude;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                return NULL;
                              }

                          public:
                            Generator(bool ignore_extras = false) : fieldGeneratorlatitude("field \"latitude\" of the TypemappedPosition class"), fieldGeneratorlongitude("field \"longitude\" of the TypemappedPosition class"), unknownFieldGenerator(ignore_extras)
                              {
                                set_what("the TypemappedPosition class");
                              }
                            ~Generator(void)
                              {
                              }

                            void reset(void)
                              {
                                fieldGeneratorlatitude.reset();
                                fieldGeneratorlongitude.reset();
                                JSONObjectGenerator::reset();
                                unknownFieldGenerator.reset();
                              }
                          };
                      };

                  private:
                    bool flagHasmappedPosition;
                    TypemappedPositionJSON * storemappedPosition;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypeendJSON(const TypeendJSON &);
                    TypeendJSON & operator=(const TypeendJSON &other);

                    void  fromJSONmappedPosition(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypeendJSON(void);
                    virtual ~TypeendJSON(void);
                    bool  hasmappedPosition(void) const;
                    TypemappedPositionJSON *  getmappedPosition(void);
                    const TypemappedPositionJSON *  getmappedPosition(void) const;

                    virtual size_t extraTypeendComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypeendComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypeendComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypeendComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypeendLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypeendLookup(const char *field_name) const
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }

                    void setmappedPosition(TypemappedPositionJSON * new_value)
                      {
                        new_value->add_reference();
                        if (flagHasmappedPosition)
                          {
                            storemappedPosition->remove_reference();
                          }
                        flagHasmappedPosition = true;
                        storemappedPosition = new_value;
                      }
                    void unsetmappedPosition(void)
                      {
                        if (flagHasmappedPosition)
                          {
                            storemappedPosition->remove_reference();
                          }
                        flagHasmappedPosition = false;
                      }

                    virtual void extraTypeendAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypeendSetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypeendLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypeendAppendPair(key, new_component);
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
                        assert(flagHasmappedPosition);
                        handler->start_pair("mappedPosition");
                        storemappedPosition->write_as_json(handler);
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        if (!(hasmappedPosition()))
                          {
                            return "When parsing the object for %what%, the \"mappedPosition\" field was missing.";
                          }
                        return NULL;
                      }

                    static TypeendJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypeendJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypeendJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeendJSON>, TypeendJSON *, bool> generator("Type Typeend", ignore_extras);
                            parse_json_value(text, "Text for TypeendJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypeendJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypeendJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeendJSON>, TypeendJSON *, bool> generator("Type Typeend", ignore_extras);
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
                        JSONHoldingGenerator<TypemappedPositionJSON::Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool > fieldGeneratormappedPosition;
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
                            TypeendJSON *result = new TypeendJSON();
                            assert(result != NULL);
                            RCHandle<TypeendJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypeendAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypeendJSON *result)
                          {
                            if (fieldGeneratormappedPosition.have_value)
                              {
                                result->setmappedPosition(fieldGeneratormappedPosition.value.referenced());
                                fieldGeneratormappedPosition.have_value = false;
                              }
                            else if (!(result->hasmappedPosition()))
                              {
                                error("When parsing the object for %what%, the \"mappedPosition\" field was missing.");
                              }
                          }
                        virtual void handle_result(TypeendJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            if (strcmp(field_name, "mappedPosition") == 0)
                                return &fieldGeneratormappedPosition;
                            return NULL;
                          }

                      public:
                        Generator(bool ignore_extras = false) : fieldGeneratormappedPosition("field \"mappedPosition\" of the Typeend class", ignore_extras), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the Typeend class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratormappedPosition.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };
                class TypemaneuverJSON : public ReferenceCounted
                  {
                  public:
                    class TypepositionJSON : public ReferenceCounted
                      {
                      private:
                        bool flagHaslatitude;
                        double storelatitude;
                        std::string textStorelatitude;
                        bool flagHaslongitude;
                        double storelongitude;
                        std::string textStorelongitude;
                        std::vector<std::string> extraKeys;
                        std::vector<JSONValue *> extraValues;
                        string_index *extraIndex;

                        TypepositionJSON(const TypepositionJSON &);
                        TypepositionJSON & operator=(const TypepositionJSON &other);

                        void  fromJSONlatitude(JSONValue *json_value, bool ignore_extras = false);

                        void  fromJSONlongitude(JSONValue *json_value, bool ignore_extras = false);


                      public:
                        TypepositionJSON(void);
                        virtual ~TypepositionJSON(void);
                        bool  haslatitude(void) const;
                        double  getlatitude(void);
                        const double  getlatitude(void) const;
                        std::string  getlatitudeAsText(void) const;
                        bool  haslongitude(void) const;
                        double  getlongitude(void);
                        const double  getlongitude(void) const;
                        std::string  getlongitudeAsText(void) const;

                        virtual size_t extraTypepositionComponentCount(void) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            return extraKeys.size();
                          }
                        virtual const char *extraTypepositionComponentKey(size_t component_num) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraKeys[component_num].c_str();
                          }
                        virtual JSONValue *extraTypepositionComponentValue(size_t component_num)
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraValues[component_num];
                          }
                        virtual const JSONValue *extraTypepositionComponentValue(size_t component_num) const
                          {
                            assert(extraKeys.size() == extraValues.size());
                            assert(component_num < extraValues.size());
                            return extraValues[component_num];
                          }
                        virtual JSONValue *extraTypepositionLookup(const char *field_name)
                          {
                            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                            if (result != NULL)
                                result->add_reference();
                            return result;
                          }
                        virtual const JSONValue *extraTypepositionLookup(const char *field_name) const
                          {
                            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                            if (result != NULL)
                                result->add_reference();
                            return result;
                          }

                        void setlatitude(double new_value)
                          {
                            flagHaslatitude = true;
                            storelatitude = new_value;
                            textStorelatitude = "";
                          }
                        void setlatitudeText(std::string new_value)
                          {
                            flagHaslatitude = true;
                            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                                throw("The text value for field latitude of TypepositionJSON is not a valid number.");
                            textStorelatitude = new_value;
                          }
                        void unsetlatitude(void)
                          {
                            flagHaslatitude = false;
                          }
                        void setlongitude(double new_value)
                          {
                            flagHaslongitude = true;
                            storelongitude = new_value;
                            textStorelongitude = "";
                          }
                        void setlongitudeText(std::string new_value)
                          {
                            flagHaslongitude = true;
                            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                                throw("The text value for field longitude of TypepositionJSON is not a valid number.");
                            textStorelongitude = new_value;
                          }
                        void unsetlongitude(void)
                          {
                            flagHaslongitude = false;
                          }

                        virtual void extraTypepositionAppendPair(const char *key, JSONValue *new_component)
                          {
                            assert(key != NULL);
                            assert(new_component != NULL);

                            assert(extraKeys.size() == extraValues.size());
                            extraKeys.push_back(key);
                            extraValues.push_back(new_component);
                            enter_into_string_index(extraIndex, key, new_component);
                            new_component->add_reference();
                          }
                        virtual void extraTypepositionSetField(const char *key, JSONValue *new_component)
                          {
                            assert(key != NULL);
                            assert(new_component != NULL);

                            JSONValue *old_field = extraTypepositionLookup(key);
                            if (old_field == NULL)
                              {
                                extraTypepositionAppendPair(key, new_component);
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
                            assert(flagHaslatitude);
                            handler->start_pair("latitude");
                            if (textStorelatitude != "")
                                handler->number_value(textStorelatitude.c_str());
                            else if (((double)(long int)storelatitude) == storelatitude)
                                handler->number_value((long int)storelatitude);
                            else
                                handler->number_value(storelatitude);
                            assert(flagHaslongitude);
                            handler->start_pair("longitude");
                            if (textStorelongitude != "")
                                handler->number_value(textStorelongitude.c_str());
                            else if (((double)(long int)storelongitude) == storelongitude)
                                handler->number_value((long int)storelongitude);
                            else
                                handler->number_value(storelongitude);
                          }
                        virtual const char *missing_field_error(void) const
                          {
                            if (!(haslatitude()))
                              {
                                return "When parsing the object for %what%, the \"latitude\" field was missing.";
                              }
                            if (!(haslongitude()))
                              {
                                return "When parsing the object for %what%, the \"longitude\" field was missing.";
                              }
                            return NULL;
                          }

                        static TypepositionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                        static TypepositionJSON *from_text(const char *text, bool ignore_extras = false)
                          {
                            TypepositionJSON *result;
                              {
                                JSONHoldingGenerator<Generator, RCHandle<TypepositionJSON>, TypepositionJSON *, bool> generator("Type Typeposition", ignore_extras);
                                parse_json_value(text, "Text for TypepositionJSON", &generator);
                                assert(generator.have_value);
                                result = generator.value.referenced();
                                result->add_reference();
                              };
                            result->remove_reference_no_delete();
                            return result;
                          }
                        static TypepositionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                          {
                            TypepositionJSON *result;
                              {
                                JSONHoldingGenerator<Generator, RCHandle<TypepositionJSON>, TypepositionJSON *, bool> generator("Type Typeposition", ignore_extras);
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
                            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlatitude;
                            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlongitude;
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
                                TypepositionJSON *result = new TypepositionJSON();
                                assert(result != NULL);
                                RCHandle<TypepositionJSON> result_holder = result;
                                finish(result);
                                size_t extra_count = unknownFieldGenerator.field_names.size();
                                assert(extra_count == unknownFieldGenerator.field_values.size());
                                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                                  {
                                    result->extraTypepositionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                                  }
                                unknownFieldGenerator.field_names.clear();
                                unknownFieldGenerator.field_values.clear();
                                destroy_string_index(unknownFieldGenerator.index);
                            unknownFieldGenerator.index = create_string_index();
                                handle_result(result);
                              }
                            void finish(TypepositionJSON *result)
                              {
                                if (fieldGeneratorlatitude.have_value)
                                  {
                                    result->setlatitudeText(fieldGeneratorlatitude.value);
                                    fieldGeneratorlatitude.have_value = false;
                                  }
                                else if (!(result->haslatitude()))
                                  {
                                    error("When parsing the object for %what%, the \"latitude\" field was missing.");
                                  }
                                if (fieldGeneratorlongitude.have_value)
                                  {
                                    result->setlongitudeText(fieldGeneratorlongitude.value);
                                    fieldGeneratorlongitude.have_value = false;
                                  }
                                else if (!(result->haslongitude()))
                                  {
                                    error("When parsing the object for %what%, the \"longitude\" field was missing.");
                                  }
                              }
                            virtual void handle_result(TypepositionJSON *new_result) = 0;
                            virtual JSONHandler *start_known_field(const char *field_name)
                              {
                                if (strncmp(field_name, "l", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[1]))
                                      {
                                        case 'a':
                                            if (strcmp(&(field_name[2]), "titude") == 0)
                                                return &fieldGeneratorlatitude;
                                            break;
                                        case 'o':
                                            if (strcmp(&(field_name[2]), "ngitude") == 0)
                                                return &fieldGeneratorlongitude;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                return NULL;
                              }

                          public:
                            Generator(bool ignore_extras = false) : fieldGeneratorlatitude("field \"latitude\" of the Typeposition class"), fieldGeneratorlongitude("field \"longitude\" of the Typeposition class"), unknownFieldGenerator(ignore_extras)
                              {
                                set_what("the Typeposition class");
                              }
                            ~Generator(void)
                              {
                              }

                            void reset(void)
                              {
                                fieldGeneratorlatitude.reset();
                                fieldGeneratorlongitude.reset();
                                JSONObjectGenerator::reset();
                                unknownFieldGenerator.reset();
                              }
                          };
                      };

                  private:
                    bool flagHasinstruction;
                    std::string storeinstruction;
                    bool flagHasposition;
                    TypepositionJSON * storeposition;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypemaneuverJSON(const TypemaneuverJSON &);
                    TypemaneuverJSON & operator=(const TypemaneuverJSON &other);

                    void  fromJSONinstruction(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONposition(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypemaneuverJSON(void);
                    virtual ~TypemaneuverJSON(void);
                    bool  hasinstruction(void) const;
                    std::string  getinstruction(void);
                    const std::string  getinstruction(void) const;
                    bool  hasposition(void) const;
                    TypepositionJSON *  getposition(void);
                    const TypepositionJSON *  getposition(void) const;

                    virtual size_t extraTypemaneuverComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypemaneuverComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypemaneuverComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypemaneuverComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypemaneuverLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypemaneuverLookup(const char *field_name) const
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }

                    void setinstruction(std::string new_value)
                      {
                        flagHasinstruction = true;
                        storeinstruction = new_value;
                      }
                    void unsetinstruction(void)
                      {
                        flagHasinstruction = false;
                      }
                    void setposition(TypepositionJSON * new_value)
                      {
                        new_value->add_reference();
                        if (flagHasposition)
                          {
                            storeposition->remove_reference();
                          }
                        flagHasposition = true;
                        storeposition = new_value;
                      }
                    void unsetposition(void)
                      {
                        if (flagHasposition)
                          {
                            storeposition->remove_reference();
                          }
                        flagHasposition = false;
                      }

                    virtual void extraTypemaneuverAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypemaneuverSetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypemaneuverLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypemaneuverAppendPair(key, new_component);
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
                        assert(flagHasinstruction);
                        handler->start_pair("instruction");
                        handler->string_value(storeinstruction);
                        assert(flagHasposition);
                        handler->start_pair("position");
                        storeposition->write_as_json(handler);
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        if (!(hasinstruction()))
                          {
                            return "When parsing the object for %what%, the \"instruction\" field was missing.";
                          }
                        if (!(hasposition()))
                          {
                            return "When parsing the object for %what%, the \"position\" field was missing.";
                          }
                        return NULL;
                      }

                    static TypemaneuverJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypemaneuverJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypemaneuverJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypemaneuverJSON>, TypemaneuverJSON *, bool> generator("Type Typemaneuver", ignore_extras);
                            parse_json_value(text, "Text for TypemaneuverJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypemaneuverJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypemaneuverJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypemaneuverJSON>, TypemaneuverJSON *, bool> generator("Type Typemaneuver", ignore_extras);
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
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorinstruction;
                        JSONHoldingGenerator<TypepositionJSON::Generator, RCHandle<TypepositionJSON>, TypepositionJSON *, bool > fieldGeneratorposition;
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
                            TypemaneuverJSON *result = new TypemaneuverJSON();
                            assert(result != NULL);
                            RCHandle<TypemaneuverJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypemaneuverAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypemaneuverJSON *result)
                          {
                            if (fieldGeneratorinstruction.have_value)
                              {
                                result->setinstruction(fieldGeneratorinstruction.value);
                                fieldGeneratorinstruction.have_value = false;
                              }
                            else if (!(result->hasinstruction()))
                              {
                                error("When parsing the object for %what%, the \"instruction\" field was missing.");
                              }
                            if (fieldGeneratorposition.have_value)
                              {
                                result->setposition(fieldGeneratorposition.value.referenced());
                                fieldGeneratorposition.have_value = false;
                              }
                            else if (!(result->hasposition()))
                              {
                                error("When parsing the object for %what%, the \"position\" field was missing.");
                              }
                          }
                        virtual void handle_result(TypemaneuverJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            switch ((unsigned char)(field_name[0]))
                              {
                                case 'i':
                                    if (strcmp(&(field_name[1]), "nstruction") == 0)
                                        return &fieldGeneratorinstruction;
                                    break;
                                case 'p':
                                    if (strcmp(&(field_name[1]), "osition") == 0)
                                        return &fieldGeneratorposition;
                                    break;
                                default:
                                    break;
                              }
                            return NULL;
                          }

                      public:
                        Generator(bool ignore_extras = false) : fieldGeneratorinstruction("field \"instruction\" of the Typemaneuver class"), fieldGeneratorposition("field \"position\" of the Typemaneuver class", ignore_extras), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the Typemaneuver class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratorinstruction.reset();
                            fieldGeneratorposition.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };

              private:
                bool flagHasstart;
                TypestartJSON * storestart;
                bool flagHasend;
                TypeendJSON * storeend;
                bool flagHasmaneuver;
                std::vector< TypemaneuverJSON * > storemaneuver;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypelegJSON(const TypelegJSON &);
                TypelegJSON & operator=(const TypelegJSON &other);

                void  fromJSONstart(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONend(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONmaneuver(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypelegJSON(void);
                virtual ~TypelegJSON(void);
                bool  hasstart(void) const;
                TypestartJSON *  getstart(void);
                const TypestartJSON *  getstart(void) const;
                bool  hasend(void) const;
                TypeendJSON *  getend(void);
                const TypeendJSON *  getend(void) const;
                bool  hasmaneuver(void) const;
                size_t  countOfmaneuver(void) const;
                TypemaneuverJSON *  elementOfmaneuver(size_t element_num);
                const TypemaneuverJSON *  elementOfmaneuver(size_t element_num) const;
                std::vector< TypemaneuverJSON * >  getmaneuver(void);
                const std::vector< TypemaneuverJSON * >  getmaneuver(void) const;

                virtual size_t extraTypelegComponentCount(void) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    return extraKeys.size();
                  }
                virtual const char *extraTypelegComponentKey(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraKeys[component_num].c_str();
                  }
                virtual JSONValue *extraTypelegComponentValue(size_t component_num)
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual const JSONValue *extraTypelegComponentValue(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual JSONValue *extraTypelegLookup(const char *field_name)
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }
                virtual const JSONValue *extraTypelegLookup(const char *field_name) const
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }

                void setstart(TypestartJSON * new_value)
                  {
                    new_value->add_reference();
                    if (flagHasstart)
                      {
                        storestart->remove_reference();
                      }
                    flagHasstart = true;
                    storestart = new_value;
                  }
                void unsetstart(void)
                  {
                    if (flagHasstart)
                      {
                        storestart->remove_reference();
                      }
                    flagHasstart = false;
                  }
                void setend(TypeendJSON * new_value)
                  {
                    new_value->add_reference();
                    if (flagHasend)
                      {
                        storeend->remove_reference();
                      }
                    flagHasend = true;
                    storeend = new_value;
                  }
                void unsetend(void)
                  {
                    if (flagHasend)
                      {
                        storeend->remove_reference();
                      }
                    flagHasend = false;
                  }
                void initmaneuver(void)
                  {
                    if (flagHasmaneuver)
                      {
                        for (size_t num2 = 0; num2 < storemaneuver.size(); ++num2)
                          {
                            storemaneuver[num2]->remove_reference();
                          }
                      }
                    flagHasmaneuver = true;
                    storemaneuver.clear();
                  }
                void appendmaneuver(TypemaneuverJSON * to_append)
                  {
                    if (!flagHasmaneuver)
                      {
                        flagHasmaneuver = true;
                        storemaneuver.clear();
                      }
                    assert(flagHasmaneuver);
                    to_append->add_reference();
                    storemaneuver.push_back(to_append);
                  }
                void unsetmaneuver(void)
                  {
                    if (flagHasmaneuver)
                      {
                        for (size_t num3 = 0; num3 < storemaneuver.size(); ++num3)
                          {
                            storemaneuver[num3]->remove_reference();
                          }
                      }
                    flagHasmaneuver = false;
                    storemaneuver.clear();
                  }

                virtual void extraTypelegAppendPair(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    assert(extraKeys.size() == extraValues.size());
                    extraKeys.push_back(key);
                    extraValues.push_back(new_component);
                    enter_into_string_index(extraIndex, key, new_component);
                    new_component->add_reference();
                  }
                virtual void extraTypelegSetField(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    JSONValue *old_field = extraTypelegLookup(key);
                    if (old_field == NULL)
                      {
                        extraTypelegAppendPair(key, new_component);
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
                    assert(flagHasstart);
                    handler->start_pair("start");
                    storestart->write_as_json(handler);
                    assert(flagHasend);
                    handler->start_pair("end");
                    storeend->write_as_json(handler);
                    assert(flagHasmaneuver);
                    handler->start_pair("maneuver");
                    assert(storemaneuver.size() >= 1);
                    handler->start_array();
                    for (size_t num1 = 0; num1 < storemaneuver.size(); ++num1)
                      {
                        storemaneuver[num1]->write_as_json(handler);
                      }
                    handler->finish_array();
                  }
                virtual const char *missing_field_error(void) const
                  {
                    if (!(hasstart()))
                      {
                        return "When parsing the object for %what%, the \"start\" field was missing.";
                      }
                    if (!(hasend()))
                      {
                        return "When parsing the object for %what%, the \"end\" field was missing.";
                      }
                    if (!(hasmaneuver()))
                      {
                        return "When parsing the object for %what%, the \"maneuver\" field was missing.";
                      }
                    return NULL;
                  }

                static TypelegJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                static TypelegJSON *from_text(const char *text, bool ignore_extras = false)
                  {
                    TypelegJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypelegJSON>, TypelegJSON *, bool> generator("Type Typeleg", ignore_extras);
                        parse_json_value(text, "Text for TypelegJSON", &generator);
                        assert(generator.have_value);
                        result = generator.value.referenced();
                        result->add_reference();
                      };
                    result->remove_reference_no_delete();
                    return result;
                  }
                static TypelegJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                  {
                    TypelegJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypelegJSON>, TypelegJSON *, bool> generator("Type Typeleg", ignore_extras);
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
                    JSONHoldingGenerator<TypestartJSON::Generator, RCHandle<TypestartJSON>, TypestartJSON *, bool > fieldGeneratorstart;
                    JSONHoldingGenerator<TypeendJSON::Generator, RCHandle<TypeendJSON>, TypeendJSON *, bool > fieldGeneratorend;
                    JSONHoldingArrayGenerator<TypemaneuverJSON::Generator, RCHandle<TypemaneuverJSON>, TypemaneuverJSON *, bool > fieldGeneratormaneuver;
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
                        TypelegJSON *result = new TypelegJSON();
                        assert(result != NULL);
                        RCHandle<TypelegJSON> result_holder = result;
                        finish(result);
                        size_t extra_count = unknownFieldGenerator.field_names.size();
                        assert(extra_count == unknownFieldGenerator.field_values.size());
                        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                          {
                            result->extraTypelegAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                          }
                        unknownFieldGenerator.field_names.clear();
                        unknownFieldGenerator.field_values.clear();
                        destroy_string_index(unknownFieldGenerator.index);
                    unknownFieldGenerator.index = create_string_index();
                        handle_result(result);
                      }
                    void finish(TypelegJSON *result)
                      {
                        if (fieldGeneratorstart.have_value)
                          {
                            result->setstart(fieldGeneratorstart.value.referenced());
                            fieldGeneratorstart.have_value = false;
                          }
                        else if (!(result->hasstart()))
                          {
                            error("When parsing the object for %what%, the \"start\" field was missing.");
                          }
                        if (fieldGeneratorend.have_value)
                          {
                            result->setend(fieldGeneratorend.value.referenced());
                            fieldGeneratorend.have_value = false;
                          }
                        else if (!(result->hasend()))
                          {
                            error("When parsing the object for %what%, the \"end\" field was missing.");
                          }
                        if (fieldGeneratormaneuver.have_value)
                          {
                            result->initmaneuver();
                            size_t count = fieldGeneratormaneuver.value.size();
                            for (size_t num = 0; num < count; ++num)
                              {
                                result->appendmaneuver(fieldGeneratormaneuver.value[num].referenced());
                              }
                            fieldGeneratormaneuver.value.clear();
                            fieldGeneratormaneuver.have_value = false;
                          }
                        else if (!(result->hasmaneuver()))
                          {
                            error("When parsing the object for %what%, the \"maneuver\" field was missing.");
                          }
                      }
                    virtual void handle_result(TypelegJSON *new_result) = 0;
                    virtual JSONHandler *start_known_field(const char *field_name)
                      {
                        switch ((unsigned char)(field_name[0]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[1]), "nd") == 0)
                                    return &fieldGeneratorend;
                                break;
                            case 'm':
                                if (strcmp(&(field_name[1]), "aneuver") == 0)
                                    return &fieldGeneratormaneuver;
                                break;
                            case 's':
                                if (strcmp(&(field_name[1]), "tart") == 0)
                                    return &fieldGeneratorstart;
                                break;
                            default:
                                break;
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratorstart("field \"start\" of the Typeleg class", ignore_extras), fieldGeneratorend("field \"end\" of the Typeleg class", ignore_extras), fieldGeneratormaneuver("field \"maneuver\" of the Typeleg class", ignore_extras), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the Typeleg class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratorstart.reset();
                        fieldGeneratorend.reset();
                        fieldGeneratormaneuver.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };

          private:
            bool flagHassummary;
            TypesummaryJSON * storesummary;
            bool flagHasshape;
            std::vector< std::string > storeshape;
            bool flagHasleg;
            std::vector< TypelegJSON * > storeleg;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TyperouteJSON(const TyperouteJSON &);
            TyperouteJSON & operator=(const TyperouteJSON &other);

            void  fromJSONsummary(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONshape(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONleg(JSONValue *json_value, bool ignore_extras = false);


          public:
            TyperouteJSON(void);
            virtual ~TyperouteJSON(void);
            bool  hassummary(void) const;
            TypesummaryJSON *  getsummary(void);
            const TypesummaryJSON *  getsummary(void) const;
            bool  hasshape(void) const;
            size_t  countOfshape(void) const;
            std::string  elementOfshape(size_t element_num);
            const std::string  elementOfshape(size_t element_num) const;
            std::vector< std::string >  getshape(void);
            const std::vector< std::string >  getshape(void) const;
            bool  hasleg(void) const;
            size_t  countOfleg(void) const;
            TypelegJSON *  elementOfleg(size_t element_num);
            const TypelegJSON *  elementOfleg(size_t element_num) const;
            std::vector< TypelegJSON * >  getleg(void);
            const std::vector< TypelegJSON * >  getleg(void) const;

            virtual size_t extraTyperouteComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTyperouteComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTyperouteComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTyperouteComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTyperouteLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTyperouteLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setsummary(TypesummaryJSON * new_value)
              {
                new_value->add_reference();
                if (flagHassummary)
                  {
                    storesummary->remove_reference();
                  }
                flagHassummary = true;
                storesummary = new_value;
              }
            void unsetsummary(void)
              {
                if (flagHassummary)
                  {
                    storesummary->remove_reference();
                  }
                flagHassummary = false;
              }
            void initshape(void)
              {
                flagHasshape = true;
                storeshape.clear();
              }
            void appendshape(std::string to_append)
              {
                if (!flagHasshape)
                  {
                    flagHasshape = true;
                    storeshape.clear();
                  }
                assert(flagHasshape);
                storeshape.push_back(to_append);
              }
            void unsetshape(void)
              {
                flagHasshape = false;
                storeshape.clear();
              }
            void initleg(void)
              {
                if (flagHasleg)
                  {
                    for (size_t num5 = 0; num5 < storeleg.size(); ++num5)
                      {
                        storeleg[num5]->remove_reference();
                      }
                  }
                flagHasleg = true;
                storeleg.clear();
              }
            void appendleg(TypelegJSON * to_append)
              {
                if (!flagHasleg)
                  {
                    flagHasleg = true;
                    storeleg.clear();
                  }
                assert(flagHasleg);
                to_append->add_reference();
                storeleg.push_back(to_append);
              }
            void unsetleg(void)
              {
                if (flagHasleg)
                  {
                    for (size_t num6 = 0; num6 < storeleg.size(); ++num6)
                      {
                        storeleg[num6]->remove_reference();
                      }
                  }
                flagHasleg = false;
                storeleg.clear();
              }

            virtual void extraTyperouteAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTyperouteSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTyperouteLookup(key);
                if (old_field == NULL)
                  {
                    extraTyperouteAppendPair(key, new_component);
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
                assert(flagHassummary);
                handler->start_pair("summary");
                storesummary->write_as_json(handler);
                if (flagHasshape)
                  {
                    handler->start_pair("shape");
                    assert(storeshape.size() >= 2);
                    handler->start_array();
                    for (size_t num1 = 0; num1 < storeshape.size(); ++num1)
                      {
                        handler->string_value(storeshape[num1]);
                      }
                    handler->finish_array();
                  }
                if (flagHasleg)
                  {
                    handler->start_pair("leg");
                    assert(storeleg.size() >= 2);
                    handler->start_array();
                    for (size_t num2 = 0; num2 < storeleg.size(); ++num2)
                      {
                        storeleg[num2]->write_as_json(handler);
                      }
                    handler->finish_array();
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hassummary()))
                  {
                    return "When parsing the object for %what%, the \"summary\" field was missing.";
                  }
                return NULL;
              }

            static TyperouteJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TyperouteJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TyperouteJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TyperouteJSON>, TyperouteJSON *, bool> generator("Type Typeroute", ignore_extras);
                    parse_json_value(text, "Text for TyperouteJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TyperouteJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TyperouteJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TyperouteJSON>, TyperouteJSON *, bool> generator("Type Typeroute", ignore_extras);
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
                JSONHoldingGenerator<TypesummaryJSON::Generator, RCHandle<TypesummaryJSON>, TypesummaryJSON *, bool > fieldGeneratorsummary;
                JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorshape;
                JSONHoldingArrayGenerator<TypelegJSON::Generator, RCHandle<TypelegJSON>, TypelegJSON *, bool > fieldGeneratorleg;
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
                    TyperouteJSON *result = new TyperouteJSON();
                    assert(result != NULL);
                    RCHandle<TyperouteJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTyperouteAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TyperouteJSON *result)
                  {
                    if (fieldGeneratorsummary.have_value)
                      {
                        result->setsummary(fieldGeneratorsummary.value.referenced());
                        fieldGeneratorsummary.have_value = false;
                      }
                    else if (!(result->hassummary()))
                      {
                        error("When parsing the object for %what%, the \"summary\" field was missing.");
                      }
                    if (fieldGeneratorshape.have_value)
                      {
                        result->initshape();
                        size_t count = fieldGeneratorshape.value.size();
                        for (size_t num = 0; num < count; ++num)
                          {
                            result->appendshape(fieldGeneratorshape.value[num]);
                          }
                        fieldGeneratorshape.value.clear();
                        fieldGeneratorshape.have_value = false;
                      }
                    if (fieldGeneratorleg.have_value)
                      {
                        result->initleg();
                        size_t count = fieldGeneratorleg.value.size();
                        for (size_t num = 0; num < count; ++num)
                          {
                            result->appendleg(fieldGeneratorleg.value[num].referenced());
                          }
                        fieldGeneratorleg.value.clear();
                        fieldGeneratorleg.have_value = false;
                      }
                  }
                virtual void handle_result(TyperouteJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[1]), "eg") == 0)
                                return &fieldGeneratorleg;
                            break;
                        case 's':
                            switch ((unsigned char)(field_name[1]))
                              {
                                case 'h':
                                    if (strcmp(&(field_name[2]), "ape") == 0)
                                        return &fieldGeneratorshape;
                                    break;
                                case 'u':
                                    if (strcmp(&(field_name[2]), "mmary") == 0)
                                        return &fieldGeneratorsummary;
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
                Generator(bool ignore_extras = false) : fieldGeneratorsummary("field \"summary\" of the Typeroute class", ignore_extras), fieldGeneratorshape("field \"shape\" of the Typeroute class"), fieldGeneratorleg("field \"leg\" of the Typeroute class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the Typeroute class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorsummary.reset();
                    fieldGeneratorshape.reset();
                    fieldGeneratorleg.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasroute;
        std::vector< TyperouteJSON * > storeroute;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TyperesponseJSON(const TyperesponseJSON &);
        TyperesponseJSON & operator=(const TyperesponseJSON &other);

        void  fromJSONroute(JSONValue *json_value, bool ignore_extras = false);


      public:
        TyperesponseJSON(void);
        virtual ~TyperesponseJSON(void);
        bool  hasroute(void) const;
        size_t  countOfroute(void) const;
        TyperouteJSON *  elementOfroute(size_t element_num);
        const TyperouteJSON *  elementOfroute(size_t element_num) const;
        std::vector< TyperouteJSON * >  getroute(void);
        const std::vector< TyperouteJSON * >  getroute(void) const;

        virtual size_t extraTyperesponseComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTyperesponseComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTyperesponseComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTyperesponseComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTyperesponseLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTyperesponseLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initroute(void)
          {
            if (flagHasroute)
              {
                for (size_t num8 = 0; num8 < storeroute.size(); ++num8)
                  {
                    storeroute[num8]->remove_reference();
                  }
              }
            flagHasroute = true;
            storeroute.clear();
          }
        void appendroute(TyperouteJSON * to_append)
          {
            if (!flagHasroute)
              {
                flagHasroute = true;
                storeroute.clear();
              }
            assert(flagHasroute);
            to_append->add_reference();
            storeroute.push_back(to_append);
          }
        void unsetroute(void)
          {
            if (flagHasroute)
              {
                for (size_t num9 = 0; num9 < storeroute.size(); ++num9)
                  {
                    storeroute[num9]->remove_reference();
                  }
              }
            flagHasroute = false;
            storeroute.clear();
          }

        virtual void extraTyperesponseAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTyperesponseSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTyperesponseLookup(key);
            if (old_field == NULL)
              {
                extraTyperesponseAppendPair(key, new_component);
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
            assert(flagHasroute);
            handler->start_pair("route");
            assert(storeroute.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeroute.size(); ++num1)
              {
                storeroute[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasroute()))
              {
                return "When parsing the object for %what%, the \"route\" field was missing.";
              }
            return NULL;
          }

        static TyperesponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TyperesponseJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TyperesponseJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TyperesponseJSON>, TyperesponseJSON *, bool> generator("Type Typeresponse", ignore_extras);
                parse_json_value(text, "Text for TyperesponseJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TyperesponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TyperesponseJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TyperesponseJSON>, TyperesponseJSON *, bool> generator("Type Typeresponse", ignore_extras);
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
            JSONHoldingArrayGenerator<TyperouteJSON::Generator, RCHandle<TyperouteJSON>, TyperouteJSON *, bool > fieldGeneratorroute;
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
                TyperesponseJSON *result = new TyperesponseJSON();
                assert(result != NULL);
                RCHandle<TyperesponseJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTyperesponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TyperesponseJSON *result)
              {
                if (fieldGeneratorroute.have_value)
                  {
                    result->initroute();
                    size_t count = fieldGeneratorroute.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendroute(fieldGeneratorroute.value[num].referenced());
                      }
                    fieldGeneratorroute.value.clear();
                    fieldGeneratorroute.have_value = false;
                  }
                else if (!(result->hasroute()))
                  {
                    error("When parsing the object for %what%, the \"route\" field was missing.");
                  }
              }
            virtual void handle_result(TyperesponseJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "route") == 0)
                    return &fieldGeneratorroute;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorroute("field \"route\" of the Typeresponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the Typeresponse class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorroute.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasresponse;
    TyperesponseJSON * storeresponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HereAPIRoutingJSON(const HereAPIRoutingJSON &);
    HereAPIRoutingJSON & operator=(const HereAPIRoutingJSON &other);

    void  fromJSONresponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    HereAPIRoutingJSON(void);
    virtual ~HereAPIRoutingJSON(void);
    bool  hasresponse(void) const;
    TyperesponseJSON *  getresponse(void);
    const TyperesponseJSON *  getresponse(void) const;

    virtual size_t extraHereAPIRoutingComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHereAPIRoutingComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHereAPIRoutingComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHereAPIRoutingComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHereAPIRoutingLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHereAPIRoutingLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setresponse(TyperesponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasresponse)
          {
            storeresponse->remove_reference();
          }
        flagHasresponse = true;
        storeresponse = new_value;
      }
    void unsetresponse(void)
      {
        if (flagHasresponse)
          {
            storeresponse->remove_reference();
          }
        flagHasresponse = false;
      }

    virtual void extraHereAPIRoutingAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHereAPIRoutingSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHereAPIRoutingLookup(key);
        if (old_field == NULL)
          {
            extraHereAPIRoutingAppendPair(key, new_component);
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
        assert(flagHasresponse);
        handler->start_pair("response");
        storeresponse->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasresponse()))
          {
            return "When parsing the object for %what%, the \"response\" field was missing.";
          }
        return NULL;
      }

    static HereAPIRoutingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HereAPIRoutingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HereAPIRoutingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HereAPIRoutingJSON>, HereAPIRoutingJSON *, bool> generator("Type HereAPIRouting", ignore_extras);
            parse_json_value(text, "Text for HereAPIRoutingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HereAPIRoutingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HereAPIRoutingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HereAPIRoutingJSON>, HereAPIRoutingJSON *, bool> generator("Type HereAPIRouting", ignore_extras);
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
        JSONHoldingGenerator<TyperesponseJSON::Generator, RCHandle<TyperesponseJSON>, TyperesponseJSON *, bool > fieldGeneratorresponse;
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
            HereAPIRoutingJSON *result = new HereAPIRoutingJSON();
            assert(result != NULL);
            RCHandle<HereAPIRoutingJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHereAPIRoutingAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HereAPIRoutingJSON *result)
          {
            if (fieldGeneratorresponse.have_value)
              {
                result->setresponse(fieldGeneratorresponse.value.referenced());
                fieldGeneratorresponse.have_value = false;
              }
            else if (!(result->hasresponse()))
              {
                error("When parsing the object for %what%, the \"response\" field was missing.");
              }
          }
        virtual void handle_result(HereAPIRoutingJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "response") == 0)
                return &fieldGeneratorresponse;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorresponse("field \"response\" of the HereAPIRouting class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HereAPIRouting class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorresponse.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HEREAPIROUTINGJSON_H */
