/* file "SynchronizedUserDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SYNCHRONIZEDUSERDATAJSON_H
#define SYNCHRONIZEDUSERDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "OneContactJSON.h"
#include "OneInstalledAppJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SynchronizedUserDataJSON : public ReferenceCounted
  {
  public:
    class TypeContactsJSON : public ReferenceCounted
      {
      private:
        bool flagHasData;
        std::vector< OneContactJSON * > storeData;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeContactsJSON(const TypeContactsJSON &);
        TypeContactsJSON & operator=(const TypeContactsJSON &other);

        void  fromJSONData(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeContactsJSON(void);
        virtual ~TypeContactsJSON(void);
        bool  hasData(void) const;
        size_t  countOfData(void) const;
        OneContactJSON *  elementOfData(size_t element_num);
        const OneContactJSON *  elementOfData(size_t element_num) const;
        std::vector< OneContactJSON * >  getData(void);
        const std::vector< OneContactJSON * >  getData(void) const;

        virtual size_t extraTypeContactsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeContactsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeContactsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeContactsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeContactsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeContactsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initData(void)
          {
            if (flagHasData)
              {
                for (size_t num2 = 0; num2 < storeData.size(); ++num2)
                  {
                    storeData[num2]->remove_reference();
                  }
              }
            flagHasData = true;
            storeData.clear();
          }
        void appendData(OneContactJSON * to_append)
          {
            if (!flagHasData)
              {
                flagHasData = true;
                storeData.clear();
              }
            assert(flagHasData);
            to_append->add_reference();
            storeData.push_back(to_append);
          }
        void unsetData(void)
          {
            if (flagHasData)
              {
                for (size_t num3 = 0; num3 < storeData.size(); ++num3)
                  {
                    storeData[num3]->remove_reference();
                  }
              }
            flagHasData = false;
            storeData.clear();
          }

        virtual void extraTypeContactsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeContactsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeContactsLookup(key);
            if (old_field == NULL)
              {
                extraTypeContactsAppendPair(key, new_component);
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
            assert(flagHasData);
            handler->start_pair("Data");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeData.size(); ++num1)
              {
                storeData[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasData()))
              {
                return "When parsing the object for %what%, the \"Data\" field was missing.";
              }
            return NULL;
          }

        static TypeContactsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeContactsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeContactsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeContactsJSON>, TypeContactsJSON *, bool> generator("Type TypeContacts", ignore_extras);
                parse_json_value(text, "Text for TypeContactsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeContactsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeContactsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeContactsJSON>, TypeContactsJSON *, bool> generator("Type TypeContacts", ignore_extras);
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
            JSONHoldingArrayGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorData;
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
                TypeContactsJSON *result = new TypeContactsJSON();
                assert(result != NULL);
                RCHandle<TypeContactsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeContactsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeContactsJSON *result)
              {
                if (fieldGeneratorData.have_value)
                  {
                    result->initData();
                    size_t count = fieldGeneratorData.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendData(fieldGeneratorData.value[num].referenced());
                      }
                    fieldGeneratorData.value.clear();
                    fieldGeneratorData.have_value = false;
                  }
                else if (!(result->hasData()))
                  {
                    error("When parsing the object for %what%, the \"Data\" field was missing.");
                  }
              }
            virtual void handle_result(TypeContactsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Data") == 0)
                    return &fieldGeneratorData;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorData("field \"Data\" of the TypeContacts class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeContacts class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorData.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeInstalledAppsJSON : public ReferenceCounted
      {
      private:
        bool flagHasData;
        std::vector< OneInstalledAppJSON * > storeData;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeInstalledAppsJSON(const TypeInstalledAppsJSON &);
        TypeInstalledAppsJSON & operator=(const TypeInstalledAppsJSON &other);

        void  fromJSONData(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeInstalledAppsJSON(void);
        virtual ~TypeInstalledAppsJSON(void);
        bool  hasData(void) const;
        size_t  countOfData(void) const;
        OneInstalledAppJSON *  elementOfData(size_t element_num);
        const OneInstalledAppJSON *  elementOfData(size_t element_num) const;
        std::vector< OneInstalledAppJSON * >  getData(void);
        const std::vector< OneInstalledAppJSON * >  getData(void) const;

        virtual size_t extraTypeInstalledAppsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeInstalledAppsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeInstalledAppsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeInstalledAppsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeInstalledAppsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeInstalledAppsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initData(void)
          {
            if (flagHasData)
              {
                for (size_t num5 = 0; num5 < storeData.size(); ++num5)
                  {
                    storeData[num5]->remove_reference();
                  }
              }
            flagHasData = true;
            storeData.clear();
          }
        void appendData(OneInstalledAppJSON * to_append)
          {
            if (!flagHasData)
              {
                flagHasData = true;
                storeData.clear();
              }
            assert(flagHasData);
            to_append->add_reference();
            storeData.push_back(to_append);
          }
        void unsetData(void)
          {
            if (flagHasData)
              {
                for (size_t num6 = 0; num6 < storeData.size(); ++num6)
                  {
                    storeData[num6]->remove_reference();
                  }
              }
            flagHasData = false;
            storeData.clear();
          }

        virtual void extraTypeInstalledAppsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeInstalledAppsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeInstalledAppsLookup(key);
            if (old_field == NULL)
              {
                extraTypeInstalledAppsAppendPair(key, new_component);
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
            assert(flagHasData);
            handler->start_pair("Data");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeData.size(); ++num1)
              {
                storeData[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasData()))
              {
                return "When parsing the object for %what%, the \"Data\" field was missing.";
              }
            return NULL;
          }

        static TypeInstalledAppsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeInstalledAppsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeInstalledAppsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeInstalledAppsJSON>, TypeInstalledAppsJSON *, bool> generator("Type TypeInstalledApps", ignore_extras);
                parse_json_value(text, "Text for TypeInstalledAppsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeInstalledAppsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeInstalledAppsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeInstalledAppsJSON>, TypeInstalledAppsJSON *, bool> generator("Type TypeInstalledApps", ignore_extras);
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
            JSONHoldingArrayGenerator<OneInstalledAppJSON::Generator, RCHandle<OneInstalledAppJSON>, OneInstalledAppJSON *, bool > fieldGeneratorData;
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
                TypeInstalledAppsJSON *result = new TypeInstalledAppsJSON();
                assert(result != NULL);
                RCHandle<TypeInstalledAppsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeInstalledAppsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeInstalledAppsJSON *result)
              {
                if (fieldGeneratorData.have_value)
                  {
                    result->initData();
                    size_t count = fieldGeneratorData.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendData(fieldGeneratorData.value[num].referenced());
                      }
                    fieldGeneratorData.value.clear();
                    fieldGeneratorData.have_value = false;
                  }
                else if (!(result->hasData()))
                  {
                    error("When parsing the object for %what%, the \"Data\" field was missing.");
                  }
              }
            virtual void handle_result(TypeInstalledAppsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "Data") == 0)
                    return &fieldGeneratorData;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorData("field \"Data\" of the TypeInstalledApps class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeInstalledApps class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorData.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasContacts;
    TypeContactsJSON * storeContacts;
    bool flagHasInstalledApps;
    TypeInstalledAppsJSON * storeInstalledApps;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SynchronizedUserDataJSON(const SynchronizedUserDataJSON &);
    SynchronizedUserDataJSON & operator=(const SynchronizedUserDataJSON &other);

    void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInstalledApps(JSONValue *json_value, bool ignore_extras = false);


  public:
    SynchronizedUserDataJSON(void);
    virtual ~SynchronizedUserDataJSON(void);
    bool  hasContacts(void) const;
    TypeContactsJSON *  getContacts(void);
    const TypeContactsJSON *  getContacts(void) const;
    bool  hasInstalledApps(void) const;
    TypeInstalledAppsJSON *  getInstalledApps(void);
    const TypeInstalledAppsJSON *  getInstalledApps(void) const;

    virtual size_t extraSynchronizedUserDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSynchronizedUserDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSynchronizedUserDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSynchronizedUserDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSynchronizedUserDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSynchronizedUserDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setContacts(TypeContactsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasContacts)
          {
            storeContacts->remove_reference();
          }
        flagHasContacts = true;
        storeContacts = new_value;
      }
    void unsetContacts(void)
      {
        if (flagHasContacts)
          {
            storeContacts->remove_reference();
          }
        flagHasContacts = false;
      }
    void setInstalledApps(TypeInstalledAppsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasInstalledApps)
          {
            storeInstalledApps->remove_reference();
          }
        flagHasInstalledApps = true;
        storeInstalledApps = new_value;
      }
    void unsetInstalledApps(void)
      {
        if (flagHasInstalledApps)
          {
            storeInstalledApps->remove_reference();
          }
        flagHasInstalledApps = false;
      }

    virtual void extraSynchronizedUserDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSynchronizedUserDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSynchronizedUserDataLookup(key);
        if (old_field == NULL)
          {
            extraSynchronizedUserDataAppendPair(key, new_component);
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
        if (flagHasContacts)
          {
            handler->start_pair("Contacts");
            storeContacts->write_as_json(handler);
          }
        if (flagHasInstalledApps)
          {
            handler->start_pair("InstalledApps");
            storeInstalledApps->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SynchronizedUserDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SynchronizedUserDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SynchronizedUserDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SynchronizedUserDataJSON>, SynchronizedUserDataJSON *, bool> generator("Type SynchronizedUserData", ignore_extras);
            parse_json_value(text, "Text for SynchronizedUserDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SynchronizedUserDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SynchronizedUserDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SynchronizedUserDataJSON>, SynchronizedUserDataJSON *, bool> generator("Type SynchronizedUserData", ignore_extras);
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
        JSONHoldingGenerator<TypeContactsJSON::Generator, RCHandle<TypeContactsJSON>, TypeContactsJSON *, bool > fieldGeneratorContacts;
        JSONHoldingGenerator<TypeInstalledAppsJSON::Generator, RCHandle<TypeInstalledAppsJSON>, TypeInstalledAppsJSON *, bool > fieldGeneratorInstalledApps;
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
            SynchronizedUserDataJSON *result = new SynchronizedUserDataJSON();
            assert(result != NULL);
            RCHandle<SynchronizedUserDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSynchronizedUserDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SynchronizedUserDataJSON *result)
          {
            if (fieldGeneratorContacts.have_value)
              {
                result->setContacts(fieldGeneratorContacts.value.referenced());
                fieldGeneratorContacts.have_value = false;
              }
            if (fieldGeneratorInstalledApps.have_value)
              {
                result->setInstalledApps(fieldGeneratorInstalledApps.value.referenced());
                fieldGeneratorInstalledApps.have_value = false;
              }
          }
        virtual void handle_result(SynchronizedUserDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontacts") == 0)
                        return &fieldGeneratorContacts;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nstalledApps") == 0)
                        return &fieldGeneratorInstalledApps;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorContacts("field \"Contacts\" of the SynchronizedUserData class", ignore_extras), fieldGeneratorInstalledApps("field \"InstalledApps\" of the SynchronizedUserData class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SynchronizedUserData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContacts.reset();
            fieldGeneratorInstalledApps.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SYNCHRONIZEDUSERDATAJSON_H */
