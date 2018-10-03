/* file "HintsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HINTSJSON_H
#define HINTSJSON_H

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


class HintsJSON : public ReferenceCounted
  {
  public:
    class TypeSpokenJSON : public ReferenceCounted
      {
      public:
        enum TypePriority
          {
            Priority_Low,
            Priority_Medium,
            Priority_High
          };

        static TypePriority  stringToPriority(const char *chars);
        static const char * stringFromPriority(TypePriority the_enum);

      private:
        bool flagHasText;
        std::string storeText;
        bool flagHasPriority;
        TypePriority storePriority;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSpokenJSON(const TypeSpokenJSON &);
        TypeSpokenJSON & operator=(const TypeSpokenJSON &other);

        void  fromJSONText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPriority(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSpokenJSON(void);
        virtual ~TypeSpokenJSON(void);
        bool  hasText(void) const;
        std::string  getText(void);
        const std::string  getText(void) const;
        bool  hasPriority(void) const;
        TypePriority  getPriority(void);
        const TypePriority  getPriority(void) const;
        const char * getPriorityAsChars(void) const;
        std::string  getPriorityAsString(void) const;

        virtual size_t extraTypeSpokenComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSpokenComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSpokenComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSpokenComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSpokenLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSpokenLookup(const char *field_name) const
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
        void setPriority(TypePriority new_value)
          {
            flagHasPriority = true;
            storePriority = new_value;
          }
        void setPriority(const char *chars)
          {
            setPriority(stringToPriority(chars));
          }
        void setPriority(std::string the_string)
          {
            setPriority(stringToPriority(the_string.c_str()));
          }
        void unsetPriority(void)
          {
            flagHasPriority = false;
          }

        virtual void extraTypeSpokenAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSpokenSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSpokenLookup(key);
            if (old_field == NULL)
              {
                extraTypeSpokenAppendPair(key, new_component);
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
            if (flagHasPriority)
              {
                handler->start_pair("Priority");
                switch (storePriority)
                  {
                    case Priority_Low:
                        handler->string_value("Low");
                        break;
                    case Priority_Medium:
                        handler->string_value("Medium");
                        break;
                    case Priority_High:
                        handler->string_value("High");
                        break;
                    default:
                        assert(false);
                  }
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasText()))
              {
                return "When parsing the object for %what%, the \"Text\" field was missing.";
              }
            return NULL;
          }

        static TypeSpokenJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSpokenJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSpokenJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSpokenJSON>, TypeSpokenJSON *, bool> generator("Type TypeSpoken", ignore_extras);
                parse_json_value(text, "Text for TypeSpokenJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSpokenJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSpokenJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSpokenJSON>, TypeSpokenJSON *, bool> generator("Type TypeSpoken", ignore_extras);
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
        class FieldGeneratorPriority : public JSONStringGenerator
              {
              protected:
                FieldGeneratorPriority(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorPriority(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToPriority(result));
                  }
                virtual void handle_result(TypePriority result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorPriority, TypePriority, TypePriority > fieldGeneratorPriority;
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
                TypeSpokenJSON *result = new TypeSpokenJSON();
                assert(result != NULL);
                RCHandle<TypeSpokenJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSpokenAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSpokenJSON *result)
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
                if (fieldGeneratorPriority.have_value)
                  {
                    result->setPriority(fieldGeneratorPriority.value);
                    fieldGeneratorPriority.have_value = false;
                  }
              }
            virtual void handle_result(TypeSpokenJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'P':
                        if (strcmp(&(field_name[1]), "riority") == 0)
                            return &fieldGeneratorPriority;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "ext") == 0)
                            return &fieldGeneratorText;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorText("field \"Text\" of the TypeSpoken class"), fieldGeneratorPriority("field \"Priority\" of the TypeSpoken class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSpoken class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorText.reset();
                fieldGeneratorPriority.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeWrittenJSON : public ReferenceCounted
      {
      public:
        class TypeHintsJSON : public ReferenceCounted
          {
          public:
            enum TypePriority
              {
                Priority_Low,
                Priority_Medium,
                Priority_High
              };

            static TypePriority  stringToPriority(const char *chars);
            static const char * stringFromPriority(TypePriority the_enum);

          private:
            bool flagHasText;
            std::string storeText;
            bool flagHasPriority;
            TypePriority storePriority;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeHintsJSON(const TypeHintsJSON &);
            TypeHintsJSON & operator=(const TypeHintsJSON &other);

            void  fromJSONText(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONPriority(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeHintsJSON(void);
            virtual ~TypeHintsJSON(void);
            bool  hasText(void) const;
            std::string  getText(void);
            const std::string  getText(void) const;
            bool  hasPriority(void) const;
            TypePriority  getPriority(void);
            const TypePriority  getPriority(void) const;
            const char * getPriorityAsChars(void) const;
            std::string  getPriorityAsString(void) const;

            virtual size_t extraTypeHintsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeHintsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeHintsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeHintsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeHintsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeHintsLookup(const char *field_name) const
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
            void setPriority(TypePriority new_value)
              {
                flagHasPriority = true;
                storePriority = new_value;
              }
            void setPriority(const char *chars)
              {
                setPriority(stringToPriority(chars));
              }
            void setPriority(std::string the_string)
              {
                setPriority(stringToPriority(the_string.c_str()));
              }
            void unsetPriority(void)
              {
                flagHasPriority = false;
              }

            virtual void extraTypeHintsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeHintsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeHintsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeHintsAppendPair(key, new_component);
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
                if (flagHasPriority)
                  {
                    handler->start_pair("Priority");
                    switch (storePriority)
                      {
                        case Priority_Low:
                            handler->string_value("Low");
                            break;
                        case Priority_Medium:
                            handler->string_value("Medium");
                            break;
                        case Priority_High:
                            handler->string_value("High");
                            break;
                        default:
                            assert(false);
                      }
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasText()))
                  {
                    return "When parsing the object for %what%, the \"Text\" field was missing.";
                  }
                return NULL;
              }

            static TypeHintsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeHintsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeHintsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeHintsJSON>, TypeHintsJSON *, bool> generator("Type TypeHints", ignore_extras);
                    parse_json_value(text, "Text for TypeHintsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeHintsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeHintsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeHintsJSON>, TypeHintsJSON *, bool> generator("Type TypeHints", ignore_extras);
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
            class FieldGeneratorPriority : public JSONStringGenerator
                  {
                  protected:
                    FieldGeneratorPriority(const char *what)
                      {
                        set_what(what);
                      }
                    FieldGeneratorPriority(void)
                      {
                      }
                    void handle_result(const char *result)
                      {
                        handle_result(stringToPriority(result));
                      }
                    virtual void handle_result(TypePriority result) = 0;
                  };
                JSONHoldingGenerator<FieldGeneratorPriority, TypePriority, TypePriority > fieldGeneratorPriority;
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
                    TypeHintsJSON *result = new TypeHintsJSON();
                    assert(result != NULL);
                    RCHandle<TypeHintsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeHintsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeHintsJSON *result)
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
                    if (fieldGeneratorPriority.have_value)
                      {
                        result->setPriority(fieldGeneratorPriority.value);
                        fieldGeneratorPriority.have_value = false;
                      }
                  }
                virtual void handle_result(TypeHintsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'P':
                            if (strcmp(&(field_name[1]), "riority") == 0)
                                return &fieldGeneratorPriority;
                            break;
                        case 'T':
                            if (strcmp(&(field_name[1]), "ext") == 0)
                                return &fieldGeneratorText;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorText("field \"Text\" of the TypeHints class"), fieldGeneratorPriority("field \"Priority\" of the TypeHints class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeHints class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorText.reset();
                    fieldGeneratorPriority.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasHints;
        std::vector< TypeHintsJSON * > storeHints;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeWrittenJSON(const TypeWrittenJSON &);
        TypeWrittenJSON & operator=(const TypeWrittenJSON &other);

        void  fromJSONHints(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeWrittenJSON(void);
        virtual ~TypeWrittenJSON(void);
        bool  hasHints(void) const;
        size_t  countOfHints(void) const;
        TypeHintsJSON *  elementOfHints(size_t element_num);
        const TypeHintsJSON *  elementOfHints(size_t element_num) const;
        std::vector< TypeHintsJSON * >  getHints(void);
        const std::vector< TypeHintsJSON * >  getHints(void) const;

        virtual size_t extraTypeWrittenComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeWrittenComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeWrittenComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeWrittenComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeWrittenLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeWrittenLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initHints(void)
          {
            if (flagHasHints)
              {
                for (size_t num2 = 0; num2 < storeHints.size(); ++num2)
                  {
                    storeHints[num2]->remove_reference();
                  }
              }
            flagHasHints = true;
            storeHints.clear();
          }
        void appendHints(TypeHintsJSON * to_append)
          {
            if (!flagHasHints)
              {
                flagHasHints = true;
                storeHints.clear();
              }
            assert(flagHasHints);
            to_append->add_reference();
            storeHints.push_back(to_append);
          }
        void unsetHints(void)
          {
            if (flagHasHints)
              {
                for (size_t num3 = 0; num3 < storeHints.size(); ++num3)
                  {
                    storeHints[num3]->remove_reference();
                  }
              }
            flagHasHints = false;
            storeHints.clear();
          }

        virtual void extraTypeWrittenAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeWrittenSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeWrittenLookup(key);
            if (old_field == NULL)
              {
                extraTypeWrittenAppendPair(key, new_component);
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
            assert(flagHasHints);
            handler->start_pair("Hints");
            assert(storeHints.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeHints.size(); ++num1)
              {
                storeHints[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasHints()))
              {
                return "When parsing the object for %what%, the \"Hints\" field was missing.";
              }
            return NULL;
          }

        static TypeWrittenJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeWrittenJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeWrittenJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWrittenJSON>, TypeWrittenJSON *, bool> generator("Type TypeWritten", ignore_extras);
                parse_json_value(text, "Text for TypeWrittenJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeWrittenJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeWrittenJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeWrittenJSON>, TypeWrittenJSON *, bool> generator("Type TypeWritten", ignore_extras);
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
            JSONHoldingArrayGenerator<TypeHintsJSON::Generator, RCHandle<TypeHintsJSON>, TypeHintsJSON *, bool > fieldGeneratorHints;
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
                TypeWrittenJSON *result = new TypeWrittenJSON();
                assert(result != NULL);
                RCHandle<TypeWrittenJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeWrittenAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeWrittenJSON *result)
              {
                if (fieldGeneratorHints.have_value)
                  {
                    result->initHints();
                    size_t count = fieldGeneratorHints.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendHints(fieldGeneratorHints.value[num].referenced());
                      }
                    fieldGeneratorHints.value.clear();
                    fieldGeneratorHints.have_value = false;
                  }
                else if (!(result->hasHints()))
                  {
                    error("When parsing the object for %what%, the \"Hints\" field was missing.");
                  }
              }
            virtual void handle_result(TypeWrittenJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Hints") == 0)
                    return &fieldGeneratorHints;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorHints("field \"Hints\" of the TypeWritten class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeWritten class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorHints.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasSpoken;
    TypeSpokenJSON * storeSpoken;
    bool flagHasWritten;
    TypeWrittenJSON * storeWritten;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HintsJSON(const HintsJSON &);
    HintsJSON & operator=(const HintsJSON &other);

    void  fromJSONSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWritten(JSONValue *json_value, bool ignore_extras = false);


  public:
    HintsJSON(void);
    virtual ~HintsJSON(void);
    bool  hasSpoken(void) const;
    TypeSpokenJSON *  getSpoken(void);
    const TypeSpokenJSON *  getSpoken(void) const;
    bool  hasWritten(void) const;
    TypeWrittenJSON *  getWritten(void);
    const TypeWrittenJSON *  getWritten(void) const;

    virtual size_t extraHintsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHintsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHintsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHintsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHintsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHintsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSpoken(TypeSpokenJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSpoken)
          {
            storeSpoken->remove_reference();
          }
        flagHasSpoken = true;
        storeSpoken = new_value;
      }
    void unsetSpoken(void)
      {
        if (flagHasSpoken)
          {
            storeSpoken->remove_reference();
          }
        flagHasSpoken = false;
      }
    void setWritten(TypeWrittenJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasWritten)
          {
            storeWritten->remove_reference();
          }
        flagHasWritten = true;
        storeWritten = new_value;
      }
    void unsetWritten(void)
      {
        if (flagHasWritten)
          {
            storeWritten->remove_reference();
          }
        flagHasWritten = false;
      }

    virtual void extraHintsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHintsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHintsLookup(key);
        if (old_field == NULL)
          {
            extraHintsAppendPair(key, new_component);
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
        if (flagHasSpoken)
          {
            handler->start_pair("Spoken");
            storeSpoken->write_as_json(handler);
          }
        if (flagHasWritten)
          {
            handler->start_pair("Written");
            storeWritten->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HintsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HintsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HintsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HintsJSON>, HintsJSON *, bool> generator("Type Hints", ignore_extras);
            parse_json_value(text, "Text for HintsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HintsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HintsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HintsJSON>, HintsJSON *, bool> generator("Type Hints", ignore_extras);
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
        JSONHoldingGenerator<TypeSpokenJSON::Generator, RCHandle<TypeSpokenJSON>, TypeSpokenJSON *, bool > fieldGeneratorSpoken;
        JSONHoldingGenerator<TypeWrittenJSON::Generator, RCHandle<TypeWrittenJSON>, TypeWrittenJSON *, bool > fieldGeneratorWritten;
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
            HintsJSON *result = new HintsJSON();
            assert(result != NULL);
            RCHandle<HintsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHintsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HintsJSON *result)
          {
            if (fieldGeneratorSpoken.have_value)
              {
                result->setSpoken(fieldGeneratorSpoken.value.referenced());
                fieldGeneratorSpoken.have_value = false;
              }
            if (fieldGeneratorWritten.have_value)
              {
                result->setWritten(fieldGeneratorWritten.value.referenced());
                fieldGeneratorWritten.have_value = false;
              }
          }
        virtual void handle_result(HintsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'S':
                    if (strcmp(&(field_name[1]), "poken") == 0)
                        return &fieldGeneratorSpoken;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "ritten") == 0)
                        return &fieldGeneratorWritten;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpoken("field \"Spoken\" of the Hints class", ignore_extras), fieldGeneratorWritten("field \"Written\" of the Hints class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Hints class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpoken.reset();
            fieldGeneratorWritten.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HINTSJSON_H */
