/* file "MultiColumnTableTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MULTICOLUMNTABLETEMPLATEJSON_H
#define MULTICOLUMNTABLETEMPLATEJSON_H

#pragma interface

#include "TemplateJSON.h"
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
#include "RegEx.h"
#include "AndroidIntentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MultiColumnTableTemplateJSON : public TemplateJSON
  {
  public:
    static RegEx expressionColumnStretch;
    class TypeHeaderJSON : public ReferenceCounted
      {
      private:
        bool flagHasText;
        std::string storeText;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeHeaderJSON(const TypeHeaderJSON &);
        TypeHeaderJSON & operator=(const TypeHeaderJSON &other);

        void  fromJSONText(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHeaderJSON(void);
        virtual ~TypeHeaderJSON(void);
        bool  hasText(void) const;
        std::string  getText(void);
        const std::string  getText(void) const;

        virtual size_t extraTypeHeaderComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeHeaderComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeHeaderComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeHeaderComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeHeaderLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeHeaderLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
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

        virtual void extraTypeHeaderAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeHeaderSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeHeaderLookup(key);
            if (old_field == NULL)
              {
                extraTypeHeaderAppendPair(key, new_component);
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
            assert(flagHasText);
            handler->start_pair("Text");
            handler->string_value(storeText);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasText()))
              {
                return "When parsing the object for %what%, the \"Text\" field was missing.";
              }
            return NULL;
          }

        static TypeHeaderJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHeaderJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHeaderJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHeaderJSON>, TypeHeaderJSON *, bool> generator("Type TypeHeader", ignore_extras);
                parse_json_value(text, "Text for TypeHeaderJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHeaderJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHeaderJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHeaderJSON>, TypeHeaderJSON *, bool> generator("Type TypeHeader", ignore_extras);
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
                TypeHeaderJSON *result = new TypeHeaderJSON();
                assert(result != NULL);
                RCHandle<TypeHeaderJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeHeaderAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeHeaderJSON *result)
              {
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
            virtual void handle_result(TypeHeaderJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Text") == 0)
                    return &fieldGeneratorText;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorText("field \"Text\" of the TypeHeader class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeHeader class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorText.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeContentRowsJSON : public ReferenceCounted
      {
      public:
        class TypeColumnsJSON : public ReferenceCounted
          {
          private:
            bool flagHasText;
            std::string storeText;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeColumnsJSON(const TypeColumnsJSON &);
            TypeColumnsJSON & operator=(const TypeColumnsJSON &other);

            void  fromJSONText(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeColumnsJSON(void);
            virtual ~TypeColumnsJSON(void);
            bool  hasText(void) const;
            std::string  getText(void);
            const std::string  getText(void) const;

            virtual size_t extraTypeColumnsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeColumnsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeColumnsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeColumnsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeColumnsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeColumnsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
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

            virtual void extraTypeColumnsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeColumnsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeColumnsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeColumnsAppendPair(key, new_component);
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
                assert(flagHasText);
                handler->start_pair("Text");
                handler->string_value(storeText);
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasText()))
                  {
                    return "When parsing the object for %what%, the \"Text\" field was missing.";
                  }
                return NULL;
              }

            static TypeColumnsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeColumnsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeColumnsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeColumnsJSON>, TypeColumnsJSON *, bool> generator("Type TypeColumns", ignore_extras);
                    parse_json_value(text, "Text for TypeColumnsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeColumnsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeColumnsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeColumnsJSON>, TypeColumnsJSON *, bool> generator("Type TypeColumns", ignore_extras);
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
                    TypeColumnsJSON *result = new TypeColumnsJSON();
                    assert(result != NULL);
                    RCHandle<TypeColumnsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeColumnsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeColumnsJSON *result)
                  {
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
                virtual void handle_result(TypeColumnsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strcmp(field_name, "Text") == 0)
                        return &fieldGeneratorText;
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorText("field \"Text\" of the TypeColumns class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeColumns class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorText.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasColumns;
        std::vector< TypeColumnsJSON * > storeColumns;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeContentRowsJSON(const TypeContentRowsJSON &);
        TypeContentRowsJSON & operator=(const TypeContentRowsJSON &other);

        void  fromJSONColumns(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeContentRowsJSON(void);
        virtual ~TypeContentRowsJSON(void);
        bool  hasColumns(void) const;
        size_t  countOfColumns(void) const;
        TypeColumnsJSON *  elementOfColumns(size_t element_num);
        const TypeColumnsJSON *  elementOfColumns(size_t element_num) const;
        std::vector< TypeColumnsJSON * >  getColumns(void);
        const std::vector< TypeColumnsJSON * >  getColumns(void) const;

        virtual size_t extraTypeContentRowsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeContentRowsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeContentRowsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeContentRowsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeContentRowsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeContentRowsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initColumns(void)
          {
            if (flagHasColumns)
              {
                for (size_t num2 = 0; num2 < storeColumns.size(); ++num2)
                  {
                    storeColumns[num2]->remove_reference();
                  }
              }
            flagHasColumns = true;
            storeColumns.clear();
          }
        void appendColumns(TypeColumnsJSON * to_append)
          {
            if (!flagHasColumns)
              {
                flagHasColumns = true;
                storeColumns.clear();
              }
            assert(flagHasColumns);
            to_append->add_reference();
            storeColumns.push_back(to_append);
          }
        void unsetColumns(void)
          {
            if (flagHasColumns)
              {
                for (size_t num3 = 0; num3 < storeColumns.size(); ++num3)
                  {
                    storeColumns[num3]->remove_reference();
                  }
              }
            flagHasColumns = false;
            storeColumns.clear();
          }

        virtual void extraTypeContentRowsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeContentRowsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeContentRowsLookup(key);
            if (old_field == NULL)
              {
                extraTypeContentRowsAppendPair(key, new_component);
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
            assert(flagHasColumns);
            handler->start_pair("Columns");
            assert(storeColumns.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeColumns.size(); ++num1)
              {
                storeColumns[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasColumns()))
              {
                return "When parsing the object for %what%, the \"Columns\" field was missing.";
              }
            return NULL;
          }

        static TypeContentRowsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeContentRowsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeContentRowsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeContentRowsJSON>, TypeContentRowsJSON *, bool> generator("Type TypeContentRows", ignore_extras);
                parse_json_value(text, "Text for TypeContentRowsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeContentRowsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeContentRowsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeContentRowsJSON>, TypeContentRowsJSON *, bool> generator("Type TypeContentRows", ignore_extras);
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
            JSONHoldingArrayGenerator<TypeColumnsJSON::Generator, RCHandle<TypeColumnsJSON>, TypeColumnsJSON *, bool > fieldGeneratorColumns;
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
                TypeContentRowsJSON *result = new TypeContentRowsJSON();
                assert(result != NULL);
                RCHandle<TypeContentRowsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeContentRowsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeContentRowsJSON *result)
              {
                if (fieldGeneratorColumns.have_value)
                  {
                    result->initColumns();
                    size_t count = fieldGeneratorColumns.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendColumns(fieldGeneratorColumns.value[num].referenced());
                      }
                    fieldGeneratorColumns.value.clear();
                    fieldGeneratorColumns.have_value = false;
                  }
                else if (!(result->hasColumns()))
                  {
                    error("When parsing the object for %what%, the \"Columns\" field was missing.");
                  }
              }
            virtual void handle_result(TypeContentRowsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Columns") == 0)
                    return &fieldGeneratorColumns;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorColumns("field \"Columns\" of the TypeContentRows class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeContentRows class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorColumns.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasColumnCount;
    uint8_t storeColumnCount;
    bool flagHasColumnStretch;
    std::string storeColumnStretch;
    bool flagHasContentDivider;
    bool storeContentDivider;
    bool flagHasHeader;
    std::vector< TypeHeaderJSON * > storeHeader;
    bool flagHasContentRows;
    std::vector< TypeContentRowsJSON * > storeContentRows;
    bool flagHasActionAndroidIntent;
    AndroidIntentJSON * storeActionAndroidIntent;
    bool flagHasActionURIs;
    std::vector< std::string > storeActionURIs;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MultiColumnTableTemplateJSON(const MultiColumnTableTemplateJSON &);
    MultiColumnTableTemplateJSON & operator=(const MultiColumnTableTemplateJSON &other);

    JSONValue * extraColumnCountToJSON(void) const;
    JSONValue * extraColumnStretchToJSON(void) const;
    JSONValue * extraContentDividerToJSON(void) const;
    JSONValue * extraHeaderToJSON(void) const;
    JSONValue * extraContentRowsToJSON(void) const;
    JSONValue * extraActionAndroidIntentToJSON(void) const;
    JSONValue * extraActionURIsToJSON(void) const;

    void  fromJSONColumnCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONColumnStretch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContentDivider(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHeader(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContentRows(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);


  public:
    MultiColumnTableTemplateJSON(void);
    virtual ~MultiColumnTableTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasColumnCount(void) const;
    uint8_t  getColumnCount(void);
    const uint8_t  getColumnCount(void) const;
    bool  hasColumnStretch(void) const;
    std::string  getColumnStretch(void);
    const std::string  getColumnStretch(void) const;
    bool  hasContentDivider(void) const;
    bool  getContentDivider(void);
    const bool  getContentDivider(void) const;
    bool  hasHeader(void) const;
    size_t  countOfHeader(void) const;
    TypeHeaderJSON *  elementOfHeader(size_t element_num);
    const TypeHeaderJSON *  elementOfHeader(size_t element_num) const;
    std::vector< TypeHeaderJSON * >  getHeader(void);
    const std::vector< TypeHeaderJSON * >  getHeader(void) const;
    bool  hasContentRows(void) const;
    size_t  countOfContentRows(void) const;
    TypeContentRowsJSON *  elementOfContentRows(size_t element_num);
    const TypeContentRowsJSON *  elementOfContentRows(size_t element_num) const;
    std::vector< TypeContentRowsJSON * >  getContentRows(void);
    const std::vector< TypeContentRowsJSON * >  getContentRows(void) const;
    bool  hasActionAndroidIntent(void) const;
    AndroidIntentJSON *  getActionAndroidIntent(void);
    const AndroidIntentJSON *  getActionAndroidIntent(void) const;
    bool  hasActionURIs(void) const;
    size_t  countOfActionURIs(void) const;
    std::string  elementOfActionURIs(size_t element_num);
    const std::string  elementOfActionURIs(size_t element_num) const;
    std::vector< std::string >  getActionURIs(void);
    const std::vector< std::string >  getActionURIs(void) const;

    virtual size_t extraMultiColumnTableTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMultiColumnTableTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMultiColumnTableTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMultiColumnTableTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMultiColumnTableTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMultiColumnTableTemplateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTemplateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasColumnCount)
            ++result;
        if (flagHasColumnStretch)
            ++result;
        if (flagHasContentDivider)
            ++result;
        if (flagHasHeader)
            ++result;
        if (flagHasContentRows)
            ++result;
        if (flagHasActionAndroidIntent)
            ++result;
        if (flagHasActionURIs)
            ++result;
        result += extraMultiColumnTableTemplateComponentCount();
        return result;
      }
    const char *extraTemplateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasColumnCount)
          {
            if (remainder == 0)
                return "ColumnCount";
            --remainder;
          }
        if (flagHasColumnStretch)
          {
            if (remainder == 0)
                return "ColumnStretch";
            --remainder;
          }
        if (flagHasContentDivider)
          {
            if (remainder == 0)
                return "ContentDivider";
            --remainder;
          }
        if (flagHasHeader)
          {
            if (remainder == 0)
                return "Header";
            --remainder;
          }
        if (flagHasContentRows)
          {
            if (remainder == 0)
                return "ContentRows";
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return "ActionAndroidIntent";
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return "ActionURIs";
            --remainder;
          }
        return extraMultiColumnTableTemplateComponentKey(remainder);
      }
    JSONValue *extraTemplateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasColumnCount)
          {
            if (remainder == 0)
                return extraColumnCountToJSON();
            --remainder;
          }
        if (flagHasColumnStretch)
          {
            if (remainder == 0)
                return extraColumnStretchToJSON();
            --remainder;
          }
        if (flagHasContentDivider)
          {
            if (remainder == 0)
                return extraContentDividerToJSON();
            --remainder;
          }
        if (flagHasHeader)
          {
            if (remainder == 0)
                return extraHeaderToJSON();
            --remainder;
          }
        if (flagHasContentRows)
          {
            if (remainder == 0)
                return extraContentRowsToJSON();
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return extraActionAndroidIntentToJSON();
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return extraActionURIsToJSON();
            --remainder;
          }
        return extraMultiColumnTableTemplateComponentValue(remainder);
      }
    const JSONValue *extraTemplateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasColumnCount)
          {
            if (remainder == 0)
                return extraColumnCountToJSON();
            --remainder;
          }
        if (flagHasColumnStretch)
          {
            if (remainder == 0)
                return extraColumnStretchToJSON();
            --remainder;
          }
        if (flagHasContentDivider)
          {
            if (remainder == 0)
                return extraContentDividerToJSON();
            --remainder;
          }
        if (flagHasHeader)
          {
            if (remainder == 0)
                return extraHeaderToJSON();
            --remainder;
          }
        if (flagHasContentRows)
          {
            if (remainder == 0)
                return extraContentRowsToJSON();
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return extraActionAndroidIntentToJSON();
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return extraActionURIsToJSON();
            --remainder;
          }
        return extraMultiColumnTableTemplateComponentValue(remainder);
      }
    JSONValue *extraTemplateLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                return (flagHasActionAndroidIntent ? extraActionAndroidIntentToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strncmp(&(field_name[1]), "o", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[3]), "umn", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[7]), "ount") == 0)
                                            return (flagHasColumnCount ? extraColumnCountToJSON() : NULL);
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[7]), "tretch") == 0)
                                            return (flagHasColumnStretch ? extraColumnStretchToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'n':
                            if (strncmp(&(field_name[3]), "tent", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[8]), "ivider") == 0)
                                            return (flagHasContentDivider ? extraContentDividerToJSON() : NULL);
                                        break;
                                    case 'R':
                                        if (strcmp(&(field_name[8]), "ows") == 0)
                                            return (flagHasContentRows ? extraContentRowsToJSON() : NULL);
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
            case 'H':
                if (strcmp(&(field_name[1]), "eader") == 0)
                    return (flagHasHeader ? extraHeaderToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMultiColumnTableTemplateLookup(field_name);
      }
    const JSONValue *extraTemplateLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                return (flagHasActionAndroidIntent ? extraActionAndroidIntentToJSON() : NULL);
                            break;
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strncmp(&(field_name[1]), "o", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[3]), "umn", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[7]), "ount") == 0)
                                            return (flagHasColumnCount ? extraColumnCountToJSON() : NULL);
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[7]), "tretch") == 0)
                                            return (flagHasColumnStretch ? extraColumnStretchToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'n':
                            if (strncmp(&(field_name[3]), "tent", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[8]), "ivider") == 0)
                                            return (flagHasContentDivider ? extraContentDividerToJSON() : NULL);
                                        break;
                                    case 'R':
                                        if (strcmp(&(field_name[8]), "ows") == 0)
                                            return (flagHasContentRows ? extraContentRowsToJSON() : NULL);
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
            case 'H':
                if (strcmp(&(field_name[1]), "eader") == 0)
                    return (flagHasHeader ? extraHeaderToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMultiColumnTableTemplateLookup(field_name);
      }

    void setColumnCount(uint8_t new_value)
      {
        flagHasColumnCount = true;
        if (new_value < 1)
            throw("The value for field ColumnCount of MultiColumnTableTemplateJSON is less than the lower bound (1) for that field.");
        if (new_value > 4)
            throw("The value for field ColumnCount of MultiColumnTableTemplateJSON is greater than the upper bound (4) for that field.");
        storeColumnCount = new_value;
      }
    void unsetColumnCount(void)
      {
        flagHasColumnCount = false;
      }
    void setColumnStretch(std::string new_value)
      {
        flagHasColumnStretch = true;
        if (!expressionColumnStretch.match(new_value))
            throw("The value is not in the regular expression for field ColumnStretch of MultiColumnTableTemplateJSON.");
        storeColumnStretch = new_value;
      }
    void unsetColumnStretch(void)
      {
        flagHasColumnStretch = false;
      }
    void setContentDivider(bool new_value)
      {
        flagHasContentDivider = true;
        storeContentDivider = new_value;
      }
    void unsetContentDivider(void)
      {
        flagHasContentDivider = false;
      }
    void initHeader(void)
      {
        if (flagHasHeader)
          {
            for (size_t num6 = 0; num6 < storeHeader.size(); ++num6)
              {
                storeHeader[num6]->remove_reference();
              }
          }
        flagHasHeader = true;
        storeHeader.clear();
      }
    void appendHeader(TypeHeaderJSON * to_append)
      {
        if (!flagHasHeader)
          {
            flagHasHeader = true;
            storeHeader.clear();
          }
        assert(flagHasHeader);
        to_append->add_reference();
        storeHeader.push_back(to_append);
      }
    void unsetHeader(void)
      {
        if (flagHasHeader)
          {
            for (size_t num7 = 0; num7 < storeHeader.size(); ++num7)
              {
                storeHeader[num7]->remove_reference();
              }
          }
        flagHasHeader = false;
        storeHeader.clear();
      }
    void initContentRows(void)
      {
        if (flagHasContentRows)
          {
            for (size_t num8 = 0; num8 < storeContentRows.size(); ++num8)
              {
                storeContentRows[num8]->remove_reference();
              }
          }
        flagHasContentRows = true;
        storeContentRows.clear();
      }
    void appendContentRows(TypeContentRowsJSON * to_append)
      {
        if (!flagHasContentRows)
          {
            flagHasContentRows = true;
            storeContentRows.clear();
          }
        assert(flagHasContentRows);
        to_append->add_reference();
        storeContentRows.push_back(to_append);
      }
    void unsetContentRows(void)
      {
        if (flagHasContentRows)
          {
            for (size_t num9 = 0; num9 < storeContentRows.size(); ++num9)
              {
                storeContentRows[num9]->remove_reference();
              }
          }
        flagHasContentRows = false;
        storeContentRows.clear();
      }
    void setActionAndroidIntent(AndroidIntentJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasActionAndroidIntent)
          {
            storeActionAndroidIntent->remove_reference();
          }
        flagHasActionAndroidIntent = true;
        storeActionAndroidIntent = new_value;
      }
    void unsetActionAndroidIntent(void)
      {
        if (flagHasActionAndroidIntent)
          {
            storeActionAndroidIntent->remove_reference();
          }
        flagHasActionAndroidIntent = false;
      }
    void initActionURIs(void)
      {
        flagHasActionURIs = true;
        storeActionURIs.clear();
      }
    void appendActionURIs(std::string to_append)
      {
        if (!flagHasActionURIs)
          {
            flagHasActionURIs = true;
            storeActionURIs.clear();
          }
        assert(flagHasActionURIs);
        storeActionURIs.push_back(to_append);
      }
    void unsetActionURIs(void)
      {
        flagHasActionURIs = false;
        storeActionURIs.clear();
      }

    virtual void extraMultiColumnTableTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMultiColumnTableTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMultiColumnTableTemplateLookup(key);
        if (old_field == NULL)
          {
            extraMultiColumnTableTemplateAppendPair(key, new_component);
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
    void extraTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "ndroidIntent") == 0)
                                {
                                fromJSONActionAndroidIntent(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[7]), "RIs") == 0)
                                {
                                fromJSONActionURIs(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strncmp(&(key[1]), "o", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'l':
                            if (strncmp(&(key[3]), "umn", 3) == 0)
                              {
                                switch ((unsigned char)(key[6]))
                                  {
                                    case 'C':
                                        if (strcmp(&(key[7]), "ount") == 0)
                                            {
                                            fromJSONColumnCount(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'S':
                                        if (strcmp(&(key[7]), "tretch") == 0)
                                            {
                                            fromJSONColumnStretch(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'n':
                            if (strncmp(&(key[3]), "tent", 4) == 0)
                              {
                                switch ((unsigned char)(key[7]))
                                  {
                                    case 'D':
                                        if (strcmp(&(key[8]), "ivider") == 0)
                                            {
                                            fromJSONContentDivider(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'R':
                                        if (strcmp(&(key[8]), "ows") == 0)
                                            {
                                            fromJSONContentRows(new_component, false);
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
                  }
                break;
            case 'H':
                if (strcmp(&(key[1]), "eader") == 0)
                    {
                    fromJSONHeader(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMultiColumnTableTemplateAppendPair(key, new_component);
      }
    void extraTemplateSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "ndroidIntent") == 0)
                                {
                                fromJSONActionAndroidIntent(new_component, false);
                                return;
                                }
                            break;
                        case 'U':
                            if (strcmp(&(key[7]), "RIs") == 0)
                                {
                                fromJSONActionURIs(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strncmp(&(key[1]), "o", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'l':
                            if (strncmp(&(key[3]), "umn", 3) == 0)
                              {
                                switch ((unsigned char)(key[6]))
                                  {
                                    case 'C':
                                        if (strcmp(&(key[7]), "ount") == 0)
                                            {
                                            fromJSONColumnCount(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'S':
                                        if (strcmp(&(key[7]), "tretch") == 0)
                                            {
                                            fromJSONColumnStretch(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'n':
                            if (strncmp(&(key[3]), "tent", 4) == 0)
                              {
                                switch ((unsigned char)(key[7]))
                                  {
                                    case 'D':
                                        if (strcmp(&(key[8]), "ivider") == 0)
                                            {
                                            fromJSONContentDivider(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'R':
                                        if (strcmp(&(key[8]), "ows") == 0)
                                            {
                                            fromJSONContentRows(new_component, false);
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
                  }
                break;
            case 'H':
                if (strcmp(&(key[1]), "eader") == 0)
                    {
                    fromJSONHeader(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMultiColumnTableTemplateSetField(key, new_component);
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
        TemplateJSON::write_fields_as_json(handler);
        assert(flagHasColumnCount);
        handler->start_pair("ColumnCount");
        handler->number_value(storeColumnCount);
        if (flagHasColumnStretch)
          {
            handler->start_pair("ColumnStretch");
            handler->string_value(storeColumnStretch);
          }
        if (flagHasContentDivider)
          {
            handler->start_pair("ContentDivider");
            handler->boolean_value(storeContentDivider);
          }
        if (flagHasHeader)
          {
            handler->start_pair("Header");
            assert(storeHeader.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeHeader.size(); ++num1)
              {
                storeHeader[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasContentRows);
        handler->start_pair("ContentRows");
        assert(storeContentRows.size() >= 1);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeContentRows.size(); ++num2)
          {
            storeContentRows[num2]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasActionAndroidIntent)
          {
            handler->start_pair("ActionAndroidIntent");
            storeActionAndroidIntent->write_as_json(handler);
          }
        if (flagHasActionURIs)
          {
            handler->start_pair("ActionURIs");
            assert(storeActionURIs.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeActionURIs.size(); ++num3)
              {
                handler->string_value(storeActionURIs[num3]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasColumnCount()))
          {
            return "When parsing the object for %what%, the \"ColumnCount\" field was missing.";
          }
        if (!(hasContentRows()))
          {
            return "When parsing the object for %what%, the \"ContentRows\" field was missing.";
          }
        return NULL;
      }

    static MultiColumnTableTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MultiColumnTableTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MultiColumnTableTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MultiColumnTableTemplateJSON>, MultiColumnTableTemplateJSON *, bool> generator("Type MultiColumnTableTemplate", ignore_extras);
            parse_json_value(text, "Text for MultiColumnTableTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MultiColumnTableTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MultiColumnTableTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MultiColumnTableTemplateJSON>, MultiColumnTableTemplateJSON *, bool> generator("Type MultiColumnTableTemplate", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public TemplateJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 4>, uint8_t, uint8_t > fieldGeneratorColumnCount;
    class FieldGeneratorColumnStretch : public JSONStringGenerator
          {
          private:
            RegEx checker;

          protected:
            FieldGeneratorColumnStretch(void) : checker("^((\\*)|([0-3]((,[0-3])*)))$")  { }
            void validate(const char *result)
              {
                if (!(checker.match(result)))
                    error("The string for %what% doesn't match the required pattern @^((\\*)|([0-3]((,[0-3])*)))$@.");
              }
          };
        JSONHoldingGenerator<FieldGeneratorColumnStretch, std::string, const char * > fieldGeneratorColumnStretch;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorContentDivider;
        JSONHoldingArrayGenerator<TypeHeaderJSON::Generator, RCHandle<TypeHeaderJSON>, TypeHeaderJSON *, bool > fieldGeneratorHeader;
        JSONHoldingArrayGenerator<TypeContentRowsJSON::Generator, RCHandle<TypeContentRowsJSON>, TypeContentRowsJSON *, bool > fieldGeneratorContentRows;
        JSONHoldingGenerator<AndroidIntentJSON::Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool > fieldGeneratorActionAndroidIntent;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActionURIs;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "MultiColumnTable") == 0))
                throw("The key field has a value other than `MultiColumnTable'.");
            MultiColumnTableTemplateJSON *result = new MultiColumnTableTemplateJSON();
            assert(result != NULL);
            RCHandle<MultiColumnTableTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMultiColumnTableTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((MultiColumnTableTemplateJSON *)new_result);
          }
        void finish(MultiColumnTableTemplateJSON *result)
          {
            if (fieldGeneratorColumnCount.have_value)
              {
                result->setColumnCount(fieldGeneratorColumnCount.value);
                fieldGeneratorColumnCount.have_value = false;
              }
            else if (!(result->hasColumnCount()))
              {
                error("When parsing the object for %what%, the \"ColumnCount\" field was missing.");
              }
            if (fieldGeneratorColumnStretch.have_value)
              {
                result->setColumnStretch(fieldGeneratorColumnStretch.value);
                fieldGeneratorColumnStretch.have_value = false;
              }
            if (fieldGeneratorContentDivider.have_value)
              {
                result->setContentDivider(fieldGeneratorContentDivider.value);
                fieldGeneratorContentDivider.have_value = false;
              }
            if (fieldGeneratorHeader.have_value)
              {
                result->initHeader();
                size_t count = fieldGeneratorHeader.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHeader(fieldGeneratorHeader.value[num].referenced());
                  }
                fieldGeneratorHeader.value.clear();
                fieldGeneratorHeader.have_value = false;
              }
            if (fieldGeneratorContentRows.have_value)
              {
                result->initContentRows();
                size_t count = fieldGeneratorContentRows.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendContentRows(fieldGeneratorContentRows.value[num].referenced());
                  }
                fieldGeneratorContentRows.value.clear();
                fieldGeneratorContentRows.have_value = false;
              }
            else if (!(result->hasContentRows()))
              {
                error("When parsing the object for %what%, the \"ContentRows\" field was missing.");
              }
            if (fieldGeneratorActionAndroidIntent.have_value)
              {
                result->setActionAndroidIntent(fieldGeneratorActionAndroidIntent.value.referenced());
                fieldGeneratorActionAndroidIntent.have_value = false;
              }
            if (fieldGeneratorActionURIs.have_value)
              {
                result->initActionURIs();
                size_t count = fieldGeneratorActionURIs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendActionURIs(fieldGeneratorActionURIs.value[num]);
                  }
                fieldGeneratorActionURIs.value.clear();
                fieldGeneratorActionURIs.have_value = false;
              }
            TemplateJSON::Generator::finish(result);
          }
        virtual void handle_result(MultiColumnTableTemplateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "ction", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                    return &fieldGeneratorActionAndroidIntent;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[7]), "RIs") == 0)
                                    return &fieldGeneratorActionURIs;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'l':
                                if (strncmp(&(field_name[3]), "umn", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[6]))
                                      {
                                        case 'C':
                                            if (strcmp(&(field_name[7]), "ount") == 0)
                                                return &fieldGeneratorColumnCount;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[7]), "tretch") == 0)
                                                return &fieldGeneratorColumnStretch;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'n':
                                if (strncmp(&(field_name[3]), "tent", 4) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 'D':
                                            if (strcmp(&(field_name[8]), "ivider") == 0)
                                                return &fieldGeneratorContentDivider;
                                            break;
                                        case 'R':
                                            if (strcmp(&(field_name[8]), "ows") == 0)
                                                return &fieldGeneratorContentRows;
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
                case 'H':
                    if (strcmp(&(field_name[1]), "eader") == 0)
                        return &fieldGeneratorHeader;
                    break;
                default:
                    break;
              }
            return TemplateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorColumnCount("field \"ColumnCount\" of the MultiColumnTableTemplate class"), fieldGeneratorColumnStretch("field \"ColumnStretch\" of the MultiColumnTableTemplate class"), fieldGeneratorContentDivider("field \"ContentDivider\" of the MultiColumnTableTemplate class"), fieldGeneratorHeader("field \"Header\" of the MultiColumnTableTemplate class", ignore_extras), fieldGeneratorContentRows("field \"ContentRows\" of the MultiColumnTableTemplate class", ignore_extras), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the MultiColumnTableTemplate class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the MultiColumnTableTemplate class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MultiColumnTableTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorColumnCount.reset();
            fieldGeneratorColumnStretch.reset();
            fieldGeneratorContentDivider.reset();
            fieldGeneratorHeader.reset();
            fieldGeneratorContentRows.reset();
            fieldGeneratorActionAndroidIntent.reset();
            fieldGeneratorActionURIs.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MULTICOLUMNTABLETEMPLATEJSON_H */
