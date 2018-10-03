/* file "DomainsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DOMAINSJSON_H
#define DOMAINSJSON_H

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


class DomainsJSON : public ReferenceCounted
  {
  public:
    class TypeOnlyJSON : public ReferenceCounted
      {
      private:
        bool flagHasDomainNames;
        std::vector< std::string > storeDomainNames;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeOnlyJSON(const TypeOnlyJSON &);
        TypeOnlyJSON & operator=(const TypeOnlyJSON &other);

        void  fromJSONDomainNames(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeOnlyJSON(void);
        virtual ~TypeOnlyJSON(void);
        bool  hasDomainNames(void) const;
        size_t  countOfDomainNames(void) const;
        std::string  elementOfDomainNames(size_t element_num);
        const std::string  elementOfDomainNames(size_t element_num) const;
        std::vector< std::string >  getDomainNames(void);
        const std::vector< std::string >  getDomainNames(void) const;

        virtual size_t extraTypeOnlyComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeOnlyComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeOnlyComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeOnlyComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeOnlyLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeOnlyLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initDomainNames(void)
          {
            flagHasDomainNames = true;
            storeDomainNames.clear();
          }
        void appendDomainNames(std::string to_append)
          {
            if (!flagHasDomainNames)
              {
                flagHasDomainNames = true;
                storeDomainNames.clear();
              }
            assert(flagHasDomainNames);
            storeDomainNames.push_back(to_append);
          }
        void unsetDomainNames(void)
          {
            flagHasDomainNames = false;
            storeDomainNames.clear();
          }

        virtual void extraTypeOnlyAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeOnlySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeOnlyLookup(key);
            if (old_field == NULL)
              {
                extraTypeOnlyAppendPair(key, new_component);
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
            assert(flagHasDomainNames);
            handler->start_pair("DomainNames");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDomainNames.size(); ++num1)
              {
                handler->string_value(storeDomainNames[num1]);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasDomainNames()))
              {
                return "When parsing the object for %what%, the \"DomainNames\" field was missing.";
              }
            return NULL;
          }

        static TypeOnlyJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeOnlyJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeOnlyJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeOnlyJSON>, TypeOnlyJSON *, bool> generator("Type TypeOnly", ignore_extras);
                parse_json_value(text, "Text for TypeOnlyJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeOnlyJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeOnlyJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeOnlyJSON>, TypeOnlyJSON *, bool> generator("Type TypeOnly", ignore_extras);
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
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDomainNames;
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
                TypeOnlyJSON *result = new TypeOnlyJSON();
                assert(result != NULL);
                RCHandle<TypeOnlyJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeOnlyAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeOnlyJSON *result)
              {
                if (fieldGeneratorDomainNames.have_value)
                  {
                    result->initDomainNames();
                    size_t count = fieldGeneratorDomainNames.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendDomainNames(fieldGeneratorDomainNames.value[num]);
                      }
                    fieldGeneratorDomainNames.value.clear();
                    fieldGeneratorDomainNames.have_value = false;
                  }
                else if (!(result->hasDomainNames()))
                  {
                    error("When parsing the object for %what%, the \"DomainNames\" field was missing.");
                  }
              }
            virtual void handle_result(TypeOnlyJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "DomainNames") == 0)
                    return &fieldGeneratorDomainNames;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDomainNames("field \"DomainNames\" of the TypeOnly class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeOnly class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDomainNames.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeExcludeJSON : public ReferenceCounted
      {
      private:
        bool flagHasDomainNames;
        std::vector< std::string > storeDomainNames;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeExcludeJSON(const TypeExcludeJSON &);
        TypeExcludeJSON & operator=(const TypeExcludeJSON &other);

        void  fromJSONDomainNames(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeExcludeJSON(void);
        virtual ~TypeExcludeJSON(void);
        bool  hasDomainNames(void) const;
        size_t  countOfDomainNames(void) const;
        std::string  elementOfDomainNames(size_t element_num);
        const std::string  elementOfDomainNames(size_t element_num) const;
        std::vector< std::string >  getDomainNames(void);
        const std::vector< std::string >  getDomainNames(void) const;

        virtual size_t extraTypeExcludeComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeExcludeComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeExcludeComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeExcludeComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeExcludeLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeExcludeLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initDomainNames(void)
          {
            flagHasDomainNames = true;
            storeDomainNames.clear();
          }
        void appendDomainNames(std::string to_append)
          {
            if (!flagHasDomainNames)
              {
                flagHasDomainNames = true;
                storeDomainNames.clear();
              }
            assert(flagHasDomainNames);
            storeDomainNames.push_back(to_append);
          }
        void unsetDomainNames(void)
          {
            flagHasDomainNames = false;
            storeDomainNames.clear();
          }

        virtual void extraTypeExcludeAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeExcludeSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeExcludeLookup(key);
            if (old_field == NULL)
              {
                extraTypeExcludeAppendPair(key, new_component);
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
            assert(flagHasDomainNames);
            handler->start_pair("DomainNames");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDomainNames.size(); ++num1)
              {
                handler->string_value(storeDomainNames[num1]);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasDomainNames()))
              {
                return "When parsing the object for %what%, the \"DomainNames\" field was missing.";
              }
            return NULL;
          }

        static TypeExcludeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeExcludeJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeExcludeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeExcludeJSON>, TypeExcludeJSON *, bool> generator("Type TypeExclude", ignore_extras);
                parse_json_value(text, "Text for TypeExcludeJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeExcludeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeExcludeJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeExcludeJSON>, TypeExcludeJSON *, bool> generator("Type TypeExclude", ignore_extras);
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
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDomainNames;
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
                TypeExcludeJSON *result = new TypeExcludeJSON();
                assert(result != NULL);
                RCHandle<TypeExcludeJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeExcludeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeExcludeJSON *result)
              {
                if (fieldGeneratorDomainNames.have_value)
                  {
                    result->initDomainNames();
                    size_t count = fieldGeneratorDomainNames.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendDomainNames(fieldGeneratorDomainNames.value[num]);
                      }
                    fieldGeneratorDomainNames.value.clear();
                    fieldGeneratorDomainNames.have_value = false;
                  }
                else if (!(result->hasDomainNames()))
                  {
                    error("When parsing the object for %what%, the \"DomainNames\" field was missing.");
                  }
              }
            virtual void handle_result(TypeExcludeJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "DomainNames") == 0)
                    return &fieldGeneratorDomainNames;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDomainNames("field \"DomainNames\" of the TypeExclude class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeExclude class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDomainNames.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasOnly;
    TypeOnlyJSON * storeOnly;
    bool flagHasExclude;
    TypeExcludeJSON * storeExclude;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DomainsJSON(const DomainsJSON &);
    DomainsJSON & operator=(const DomainsJSON &other);

    void  fromJSONOnly(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExclude(JSONValue *json_value, bool ignore_extras = false);


  public:
    DomainsJSON(void);
    virtual ~DomainsJSON(void);
    bool  hasOnly(void) const;
    TypeOnlyJSON *  getOnly(void);
    const TypeOnlyJSON *  getOnly(void) const;
    bool  hasExclude(void) const;
    TypeExcludeJSON *  getExclude(void);
    const TypeExcludeJSON *  getExclude(void) const;

    virtual size_t extraDomainsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDomainsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDomainsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDomainsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDomainsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDomainsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setOnly(TypeOnlyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOnly)
          {
            storeOnly->remove_reference();
          }
        flagHasOnly = true;
        storeOnly = new_value;
      }
    void unsetOnly(void)
      {
        if (flagHasOnly)
          {
            storeOnly->remove_reference();
          }
        flagHasOnly = false;
      }
    void setExclude(TypeExcludeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasExclude)
          {
            storeExclude->remove_reference();
          }
        flagHasExclude = true;
        storeExclude = new_value;
      }
    void unsetExclude(void)
      {
        if (flagHasExclude)
          {
            storeExclude->remove_reference();
          }
        flagHasExclude = false;
      }

    virtual void extraDomainsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDomainsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDomainsLookup(key);
        if (old_field == NULL)
          {
            extraDomainsAppendPair(key, new_component);
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
        if (flagHasOnly)
          {
            handler->start_pair("Only");
            storeOnly->write_as_json(handler);
          }
        if (flagHasExclude)
          {
            handler->start_pair("Exclude");
            storeExclude->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static DomainsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DomainsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DomainsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DomainsJSON>, DomainsJSON *, bool> generator("Type Domains", ignore_extras);
            parse_json_value(text, "Text for DomainsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DomainsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DomainsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DomainsJSON>, DomainsJSON *, bool> generator("Type Domains", ignore_extras);
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
        JSONHoldingGenerator<TypeOnlyJSON::Generator, RCHandle<TypeOnlyJSON>, TypeOnlyJSON *, bool > fieldGeneratorOnly;
        JSONHoldingGenerator<TypeExcludeJSON::Generator, RCHandle<TypeExcludeJSON>, TypeExcludeJSON *, bool > fieldGeneratorExclude;
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
            DomainsJSON *result = new DomainsJSON();
            assert(result != NULL);
            RCHandle<DomainsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDomainsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DomainsJSON *result)
          {
            if (fieldGeneratorOnly.have_value)
              {
                result->setOnly(fieldGeneratorOnly.value.referenced());
                fieldGeneratorOnly.have_value = false;
              }
            if (fieldGeneratorExclude.have_value)
              {
                result->setExclude(fieldGeneratorExclude.value.referenced());
                fieldGeneratorExclude.have_value = false;
              }
          }
        virtual void handle_result(DomainsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "xclude") == 0)
                        return &fieldGeneratorExclude;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "nly") == 0)
                        return &fieldGeneratorOnly;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOnly("field \"Only\" of the Domains class", ignore_extras), fieldGeneratorExclude("field \"Exclude\" of the Domains class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Domains class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOnly.reset();
            fieldGeneratorExclude.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DOMAINSJSON_H */
