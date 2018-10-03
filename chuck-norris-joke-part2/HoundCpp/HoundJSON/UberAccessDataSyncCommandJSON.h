/* file "UberAccessDataSyncCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERACCESSDATASYNCCOMMANDJSON_H
#define UBERACCESSDATASYNCCOMMANDJSON_H

#pragma interface

#include "UberCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberAccessDataSyncCommandJSON : public UberCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeStatusKnownValues
          {
            Status_synced,
            Status_failed,
            Status__none
          };
        struct TypeStatus
          {
            bool in_known_list;
            std::string string_value;
            TypeStatusKnownValues list_value;

            TypeStatus(void);
            TypeStatus(const TypeStatus &other);
            TypeStatus(TypeStatusKnownValues other);
            bool  operator==(const TypeStatus &other) const;
            bool  operator!=(const TypeStatus &other) const;
            bool  operator<(const TypeStatus &other) const;
            bool  operator>(const TypeStatus &other) const;
            bool  operator>=(const TypeStatus &other) const;
            bool  operator<=(const TypeStatus &other) const;

          };

        static TypeStatusKnownValues  stringToStatus(const char *chars);
        static const char * stringFromStatus(TypeStatusKnownValues the_enum);

      private:
        bool flagHasStatus;
        TypeStatus storeStatus;
        bool flagHasDescription;
        std::string storeDescription;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasStatus(void) const;
        TypeStatus  getStatus(void);
        const TypeStatus  getStatus(void) const;
        const char * getStatusAsChars(void) const;
        std::string  getStatusAsString(void) const;
        bool  hasDescription(void) const;
        std::string  getDescription(void);
        const std::string  getDescription(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setStatus(TypeStatus new_value)
          {
            flagHasStatus = true;
            storeStatus = new_value;
          }
        void setStatus(const char *chars)
          {
            TypeStatusKnownValues known = stringToStatus(chars);
            TypeStatus new_value;
            if (known == Status__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setStatus(new_value);
          }
        void setStatus(std::string the_string)
          {
            setStatus(the_string.c_str());
          }
        void setStatus(TypeStatusKnownValues new_value)
          {
            TypeStatus new_full_value;
            assert(new_value != Status__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setStatus(new_full_value);
          }
        void unsetStatus(void)
          {
            flagHasStatus = false;
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

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            assert(flagHasStatus);
            handler->start_pair("Status");
            if (storeStatus.in_known_list)
              {
                switch (storeStatus.list_value)
                  {
                    case Status_synced:
                        handler->string_value("synced");
                        break;
                    case Status_failed:
                        handler->string_value("failed");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeStatus.string_value);
              }
            if (flagHasDescription)
              {
                handler->start_pair("Description");
                handler->string_value(storeDescription);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasStatus()))
              {
                return "When parsing the object for %what%, the \"Status\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
        class FieldGeneratorStatus : public JSONStringGenerator
              {
              protected:
                FieldGeneratorStatus(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorStatus(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeStatusKnownValues known = stringToStatus(result);
                    TypeStatus new_value;
                    if (known == Status__none)
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
                virtual void handle_result(TypeStatus result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorStatus, TypeStatus, TypeStatus > fieldGeneratorStatus;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorStatus.have_value)
                  {
                    result->setStatus(fieldGeneratorStatus.value);
                    fieldGeneratorStatus.have_value = false;
                  }
                else if (!(result->hasStatus()))
                  {
                    error("When parsing the object for %what%, the \"Status\" field was missing.");
                  }
                if (fieldGeneratorDescription.have_value)
                  {
                    result->setDescription(fieldGeneratorDescription.value);
                    fieldGeneratorDescription.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "escription") == 0)
                            return &fieldGeneratorDescription;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "tatus") == 0)
                            return &fieldGeneratorStatus;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorStatus("field \"Status\" of the TypeNativeData class"), fieldGeneratorDescription("field \"Description\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorStatus.reset();
                fieldGeneratorDescription.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberAccessDataSyncCommandJSON(const UberAccessDataSyncCommandJSON &);
    UberAccessDataSyncCommandJSON & operator=(const UberAccessDataSyncCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberAccessDataSyncCommandJSON(void);
    virtual ~UberAccessDataSyncCommandJSON(void);
    const char * getUberCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraUberAccessDataSyncCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberAccessDataSyncCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberAccessDataSyncCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberAccessDataSyncCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberAccessDataSyncCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberAccessDataSyncCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraUberAccessDataSyncCommandComponentCount();
        return result;
      }
    const char *extraUberCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraUberAccessDataSyncCommandComponentKey(remainder);
      }
    JSONValue *extraUberCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraUberAccessDataSyncCommandComponentValue(remainder);
      }
    const JSONValue *extraUberCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraUberAccessDataSyncCommandComponentValue(remainder);
      }
    JSONValue *extraUberCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraUberAccessDataSyncCommandLookup(field_name);
      }
    const JSONValue *extraUberCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraUberAccessDataSyncCommandLookup(field_name);
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraUberAccessDataSyncCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberAccessDataSyncCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberAccessDataSyncCommandLookup(key);
        if (old_field == NULL)
          {
            extraUberAccessDataSyncCommandAppendPair(key, new_component);
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
    void extraUberCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraUberAccessDataSyncCommandAppendPair(key, new_component);
      }
    void extraUberCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraUberAccessDataSyncCommandSetField(key, new_component);
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
        UberCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static UberAccessDataSyncCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberAccessDataSyncCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberAccessDataSyncCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberAccessDataSyncCommandJSON>, UberAccessDataSyncCommandJSON *, bool> generator("Type UberAccessDataSyncCommand", ignore_extras);
            parse_json_value(text, "Text for UberAccessDataSyncCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberAccessDataSyncCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberAccessDataSyncCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberAccessDataSyncCommandJSON>, UberAccessDataSyncCommandJSON *, bool> generator("Type UberAccessDataSyncCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getUberCommandJSONKey().c_str(), "UberAccessDataSync") == 0))
                throw("The key field has a value other than `UberAccessDataSync'.");
            UberAccessDataSyncCommandJSON *result = new UberAccessDataSyncCommandJSON();
            assert(result != NULL);
            RCHandle<UberAccessDataSyncCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberAccessDataSyncCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberCommandJSON *new_result)
          {
            handle_result((UberAccessDataSyncCommandJSON *)new_result);
          }
        void finish(UberAccessDataSyncCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            UberCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(UberAccessDataSyncCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return UberCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the UberAccessDataSyncCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberAccessDataSyncCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            UberCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERACCESSDATASYNCCOMMANDJSON_H */
