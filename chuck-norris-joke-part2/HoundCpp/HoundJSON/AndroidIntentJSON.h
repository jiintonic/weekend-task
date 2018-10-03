/* file "AndroidIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ANDROIDINTENTJSON_H
#define ANDROIDINTENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
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


class AndroidIntentJSON : public ReferenceCounted
  {
  public:
    class TypeValueJSON : public ReferenceCounted
      {
      public:
        class TypeExtrasJSON : public ReferenceCounted
          {
          private:
            bool flagHasType;
            std::string storeType;
            bool flagHasKey;
            std::string storeKey;
            bool flagHasValue;
            std::string storeValue;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeExtrasJSON(const TypeExtrasJSON &);
            TypeExtrasJSON & operator=(const TypeExtrasJSON &other);

            void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONKey(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeExtrasJSON(void);
            virtual ~TypeExtrasJSON(void);
            bool  hasType(void) const;
            std::string  getType(void);
            const std::string  getType(void) const;
            bool  hasKey(void) const;
            std::string  getKey(void);
            const std::string  getKey(void) const;
            bool  hasValue(void) const;
            std::string  getValue(void);
            const std::string  getValue(void) const;

            virtual size_t extraTypeExtrasComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeExtrasComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeExtrasComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeExtrasComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeExtrasLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeExtrasLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setType(std::string new_value)
              {
                flagHasType = true;
                storeType = new_value;
              }
            void unsetType(void)
              {
                flagHasType = false;
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
            void setValue(std::string new_value)
              {
                flagHasValue = true;
                storeValue = new_value;
              }
            void unsetValue(void)
              {
                flagHasValue = false;
              }

            virtual void extraTypeExtrasAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeExtrasSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeExtrasLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeExtrasAppendPair(key, new_component);
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
                assert(flagHasType);
                handler->start_pair("Type");
                handler->string_value(storeType);
                assert(flagHasKey);
                handler->start_pair("Key");
                handler->string_value(storeKey);
                assert(flagHasValue);
                handler->start_pair("Value");
                handler->string_value(storeValue);
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasType()))
                  {
                    return "When parsing the object for %what%, the \"Type\" field was missing.";
                  }
                if (!(hasKey()))
                  {
                    return "When parsing the object for %what%, the \"Key\" field was missing.";
                  }
                if (!(hasValue()))
                  {
                    return "When parsing the object for %what%, the \"Value\" field was missing.";
                  }
                return NULL;
              }

            static TypeExtrasJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeExtrasJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeExtrasJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeExtrasJSON>, TypeExtrasJSON *, bool> generator("Type TypeExtras", ignore_extras);
                    parse_json_value(text, "Text for TypeExtrasJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeExtrasJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeExtrasJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeExtrasJSON>, TypeExtrasJSON *, bool> generator("Type TypeExtras", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorType;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorKey;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorValue;
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
                    TypeExtrasJSON *result = new TypeExtrasJSON();
                    assert(result != NULL);
                    RCHandle<TypeExtrasJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeExtrasAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeExtrasJSON *result)
                  {
                    if (fieldGeneratorType.have_value)
                      {
                        result->setType(fieldGeneratorType.value);
                        fieldGeneratorType.have_value = false;
                      }
                    else if (!(result->hasType()))
                      {
                        error("When parsing the object for %what%, the \"Type\" field was missing.");
                      }
                    if (fieldGeneratorKey.have_value)
                      {
                        result->setKey(fieldGeneratorKey.value);
                        fieldGeneratorKey.have_value = false;
                      }
                    else if (!(result->hasKey()))
                      {
                        error("When parsing the object for %what%, the \"Key\" field was missing.");
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
                  }
                virtual void handle_result(TypeExtrasJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'K':
                            if (strcmp(&(field_name[1]), "ey") == 0)
                                return &fieldGeneratorKey;
                            break;
                        case 'T':
                            if (strcmp(&(field_name[1]), "ype") == 0)
                                return &fieldGeneratorType;
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
                Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the TypeExtras class"), fieldGeneratorKey("field \"Key\" of the TypeExtras class"), fieldGeneratorValue("field \"Value\" of the TypeExtras class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeExtras class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorType.reset();
                    fieldGeneratorKey.reset();
                    fieldGeneratorValue.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasLaunchMode;
        std::string storeLaunchMode;
        bool flagHasAction;
        std::string storeAction;
        bool flagHasExtras;
        std::vector< TypeExtrasJSON * > storeExtras;
        bool flagHasURI;
        std::string storeURI;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeValueJSON(const TypeValueJSON &);
        TypeValueJSON & operator=(const TypeValueJSON &other);

        void  fromJSONLaunchMode(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAction(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONExtras(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONURI(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeValueJSON(void);
        virtual ~TypeValueJSON(void);
        bool  hasLaunchMode(void) const;
        std::string  getLaunchMode(void);
        const std::string  getLaunchMode(void) const;
        bool  hasAction(void) const;
        std::string  getAction(void);
        const std::string  getAction(void) const;
        bool  hasExtras(void) const;
        size_t  countOfExtras(void) const;
        TypeExtrasJSON *  elementOfExtras(size_t element_num);
        const TypeExtrasJSON *  elementOfExtras(size_t element_num) const;
        std::vector< TypeExtrasJSON * >  getExtras(void);
        const std::vector< TypeExtrasJSON * >  getExtras(void) const;
        bool  hasURI(void) const;
        std::string  getURI(void);
        const std::string  getURI(void) const;

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

        void setLaunchMode(std::string new_value)
          {
            flagHasLaunchMode = true;
            storeLaunchMode = new_value;
          }
        void unsetLaunchMode(void)
          {
            flagHasLaunchMode = false;
          }
        void setAction(std::string new_value)
          {
            flagHasAction = true;
            storeAction = new_value;
          }
        void unsetAction(void)
          {
            flagHasAction = false;
          }
        void initExtras(void)
          {
            if (flagHasExtras)
              {
                for (size_t num2 = 0; num2 < storeExtras.size(); ++num2)
                  {
                    storeExtras[num2]->remove_reference();
                  }
              }
            flagHasExtras = true;
            storeExtras.clear();
          }
        void appendExtras(TypeExtrasJSON * to_append)
          {
            if (!flagHasExtras)
              {
                flagHasExtras = true;
                storeExtras.clear();
              }
            assert(flagHasExtras);
            to_append->add_reference();
            storeExtras.push_back(to_append);
          }
        void unsetExtras(void)
          {
            if (flagHasExtras)
              {
                for (size_t num3 = 0; num3 < storeExtras.size(); ++num3)
                  {
                    storeExtras[num3]->remove_reference();
                  }
              }
            flagHasExtras = false;
            storeExtras.clear();
          }
        void setURI(std::string new_value)
          {
            flagHasURI = true;
            storeURI = new_value;
          }
        void unsetURI(void)
          {
            flagHasURI = false;
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
            assert(flagHasLaunchMode);
            handler->start_pair("LaunchMode");
            handler->string_value(storeLaunchMode);
            assert(flagHasAction);
            handler->start_pair("Action");
            handler->string_value(storeAction);
            if (flagHasExtras)
              {
                handler->start_pair("Extras");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeExtras.size(); ++num1)
                  {
                    storeExtras[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasURI)
              {
                handler->start_pair("URI");
                handler->string_value(storeURI);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLaunchMode()))
              {
                return "When parsing the object for %what%, the \"LaunchMode\" field was missing.";
              }
            if (!(hasAction()))
              {
                return "When parsing the object for %what%, the \"Action\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLaunchMode;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAction;
            JSONHoldingArrayGenerator<TypeExtrasJSON::Generator, RCHandle<TypeExtrasJSON>, TypeExtrasJSON *, bool > fieldGeneratorExtras;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURI;
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
                if (fieldGeneratorLaunchMode.have_value)
                  {
                    result->setLaunchMode(fieldGeneratorLaunchMode.value);
                    fieldGeneratorLaunchMode.have_value = false;
                  }
                else if (!(result->hasLaunchMode()))
                  {
                    error("When parsing the object for %what%, the \"LaunchMode\" field was missing.");
                  }
                if (fieldGeneratorAction.have_value)
                  {
                    result->setAction(fieldGeneratorAction.value);
                    fieldGeneratorAction.have_value = false;
                  }
                else if (!(result->hasAction()))
                  {
                    error("When parsing the object for %what%, the \"Action\" field was missing.");
                  }
                if (fieldGeneratorExtras.have_value)
                  {
                    result->initExtras();
                    size_t count = fieldGeneratorExtras.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendExtras(fieldGeneratorExtras.value[num].referenced());
                      }
                    fieldGeneratorExtras.value.clear();
                    fieldGeneratorExtras.have_value = false;
                  }
                if (fieldGeneratorURI.have_value)
                  {
                    result->setURI(fieldGeneratorURI.value);
                    fieldGeneratorURI.have_value = false;
                  }
              }
            virtual void handle_result(TypeValueJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "ction") == 0)
                            return &fieldGeneratorAction;
                        break;
                    case 'E':
                        if (strcmp(&(field_name[1]), "xtras") == 0)
                            return &fieldGeneratorExtras;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "aunchMode") == 0)
                            return &fieldGeneratorLaunchMode;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "RI") == 0)
                            return &fieldGeneratorURI;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorLaunchMode("field \"LaunchMode\" of the TypeValue class"), fieldGeneratorAction("field \"Action\" of the TypeValue class"), fieldGeneratorExtras("field \"Extras\" of the TypeValue class", ignore_extras), fieldGeneratorURI("field \"URI\" of the TypeValue class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeValue class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLaunchMode.reset();
                fieldGeneratorAction.reset();
                fieldGeneratorExtras.reset();
                fieldGeneratorURI.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasValue;
    std::vector< TypeValueJSON * > storeValue;

    AndroidIntentJSON(const AndroidIntentJSON &);
    AndroidIntentJSON & operator=(const AndroidIntentJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    AndroidIntentJSON(void);
    virtual ~AndroidIntentJSON(void);
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
        assert(storeValue.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            storeValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }

    static AndroidIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AndroidIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AndroidIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool> generator("Type AndroidIntent", ignore_extras);
            parse_json_value(text, "Text for AndroidIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AndroidIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AndroidIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool> generator("Type AndroidIntent", ignore_extras);
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
            AndroidIntentJSON *result = new AndroidIntentJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(AndroidIntentJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >("Type AndroidIntent", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* ANDROIDINTENTJSON_H */
