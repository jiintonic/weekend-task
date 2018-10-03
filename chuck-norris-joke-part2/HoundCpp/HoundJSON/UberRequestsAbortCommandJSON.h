/* file "UberRequestsAbortCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTSABORTCOMMANDJSON_H
#define UBERREQUESTSABORTCOMMANDJSON_H

#pragma interface

#include "UberRequestsCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "UberRequestsSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestsAbortCommandJSON : public UberRequestsCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeReasonKnownValues
          {
            Reason_user_cancelled,
            Reason_no_uber_product,
            Reason_uber_api_error,
            Reason_client_error,
            Reason_ongoing_request,
            Reason_same_pickup_dropoff,
            Reason__none
          };
        struct TypeReason
          {
            bool in_known_list;
            std::string string_value;
            TypeReasonKnownValues list_value;

            TypeReason(void);
            TypeReason(const TypeReason &other);
            TypeReason(TypeReasonKnownValues other);
            bool  operator==(const TypeReason &other) const;
            bool  operator!=(const TypeReason &other) const;
            bool  operator<(const TypeReason &other) const;
            bool  operator>(const TypeReason &other) const;
            bool  operator>=(const TypeReason &other) const;
            bool  operator<=(const TypeReason &other) const;

          };

        static TypeReasonKnownValues  stringToReason(const char *chars);
        static const char * stringFromReason(TypeReasonKnownValues the_enum);

      private:
        bool flagHasReason;
        TypeReason storeReason;
        bool flagHasErrorMessage;
        std::string storeErrorMessage;
        bool flagHasUberRequestsSpec;
        UberRequestsSpecJSON * storeUberRequestsSpec;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONReason(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasReason(void) const;
        TypeReason  getReason(void);
        const TypeReason  getReason(void) const;
        const char * getReasonAsChars(void) const;
        std::string  getReasonAsString(void) const;
        bool  hasErrorMessage(void) const;
        std::string  getErrorMessage(void);
        const std::string  getErrorMessage(void) const;
        bool  hasUberRequestsSpec(void) const;
        UberRequestsSpecJSON *  getUberRequestsSpec(void);
        const UberRequestsSpecJSON *  getUberRequestsSpec(void) const;

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

        void setReason(TypeReason new_value)
          {
            flagHasReason = true;
            storeReason = new_value;
          }
        void setReason(const char *chars)
          {
            TypeReasonKnownValues known = stringToReason(chars);
            TypeReason new_value;
            if (known == Reason__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setReason(new_value);
          }
        void setReason(std::string the_string)
          {
            setReason(the_string.c_str());
          }
        void setReason(TypeReasonKnownValues new_value)
          {
            TypeReason new_full_value;
            assert(new_value != Reason__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setReason(new_full_value);
          }
        void unsetReason(void)
          {
            flagHasReason = false;
          }
        void setErrorMessage(std::string new_value)
          {
            flagHasErrorMessage = true;
            storeErrorMessage = new_value;
          }
        void unsetErrorMessage(void)
          {
            flagHasErrorMessage = false;
          }
        void setUberRequestsSpec(UberRequestsSpecJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasUberRequestsSpec)
              {
                storeUberRequestsSpec->remove_reference();
              }
            flagHasUberRequestsSpec = true;
            storeUberRequestsSpec = new_value;
          }
        void unsetUberRequestsSpec(void)
          {
            if (flagHasUberRequestsSpec)
              {
                storeUberRequestsSpec->remove_reference();
              }
            flagHasUberRequestsSpec = false;
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
            assert(flagHasReason);
            handler->start_pair("Reason");
            if (storeReason.in_known_list)
              {
                switch (storeReason.list_value)
                  {
                    case Reason_user_cancelled:
                        handler->string_value("user_cancelled");
                        break;
                    case Reason_no_uber_product:
                        handler->string_value("no_uber_product");
                        break;
                    case Reason_uber_api_error:
                        handler->string_value("uber_api_error");
                        break;
                    case Reason_client_error:
                        handler->string_value("client_error");
                        break;
                    case Reason_ongoing_request:
                        handler->string_value("ongoing_request");
                        break;
                    case Reason_same_pickup_dropoff:
                        handler->string_value("same_pickup_dropoff");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeReason.string_value);
              }
            if (flagHasErrorMessage)
              {
                handler->start_pair("ErrorMessage");
                handler->string_value(storeErrorMessage);
              }
            assert(flagHasUberRequestsSpec);
            handler->start_pair("UberRequestsSpec");
            storeUberRequestsSpec->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasReason()))
              {
                return "When parsing the object for %what%, the \"Reason\" field was missing.";
              }
            if (!(hasUberRequestsSpec()))
              {
                return "When parsing the object for %what%, the \"UberRequestsSpec\" field was missing.";
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
        class FieldGeneratorReason : public JSONStringGenerator
              {
              protected:
                FieldGeneratorReason(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorReason(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeReasonKnownValues known = stringToReason(result);
                    TypeReason new_value;
                    if (known == Reason__none)
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
                virtual void handle_result(TypeReason result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorReason, TypeReason, TypeReason > fieldGeneratorReason;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessage;
            JSONHoldingGenerator<UberRequestsSpecJSON::Generator, RCHandle<UberRequestsSpecJSON>, UberRequestsSpecJSON *, bool > fieldGeneratorUberRequestsSpec;
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
                if (fieldGeneratorReason.have_value)
                  {
                    result->setReason(fieldGeneratorReason.value);
                    fieldGeneratorReason.have_value = false;
                  }
                else if (!(result->hasReason()))
                  {
                    error("When parsing the object for %what%, the \"Reason\" field was missing.");
                  }
                if (fieldGeneratorErrorMessage.have_value)
                  {
                    result->setErrorMessage(fieldGeneratorErrorMessage.value);
                    fieldGeneratorErrorMessage.have_value = false;
                  }
                if (fieldGeneratorUberRequestsSpec.have_value)
                  {
                    result->setUberRequestsSpec(fieldGeneratorUberRequestsSpec.value.referenced());
                    fieldGeneratorUberRequestsSpec.have_value = false;
                  }
                else if (!(result->hasUberRequestsSpec()))
                  {
                    error("When parsing the object for %what%, the \"UberRequestsSpec\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'E':
                        if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                            return &fieldGeneratorErrorMessage;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "eason") == 0)
                            return &fieldGeneratorReason;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "berRequestsSpec") == 0)
                            return &fieldGeneratorUberRequestsSpec;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorReason("field \"Reason\" of the TypeNativeData class"), fieldGeneratorErrorMessage("field \"ErrorMessage\" of the TypeNativeData class"), fieldGeneratorUberRequestsSpec("field \"UberRequestsSpec\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorReason.reset();
                fieldGeneratorErrorMessage.reset();
                fieldGeneratorUberRequestsSpec.reset();
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

    UberRequestsAbortCommandJSON(const UberRequestsAbortCommandJSON &);
    UberRequestsAbortCommandJSON & operator=(const UberRequestsAbortCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestsAbortCommandJSON(void);
    virtual ~UberRequestsAbortCommandJSON(void);
    const char * getUberRequestsCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraUberRequestsAbortCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestsAbortCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestsAbortCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestsAbortCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestsAbortCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestsAbortCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberRequestsCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraUberRequestsAbortCommandComponentCount();
        return result;
      }
    const char *extraUberRequestsCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraUberRequestsAbortCommandComponentKey(remainder);
      }
    JSONValue *extraUberRequestsCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraUberRequestsAbortCommandComponentValue(remainder);
      }
    const JSONValue *extraUberRequestsCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraUberRequestsAbortCommandComponentValue(remainder);
      }
    JSONValue *extraUberRequestsCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraUberRequestsAbortCommandLookup(field_name);
      }
    const JSONValue *extraUberRequestsCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraUberRequestsAbortCommandLookup(field_name);
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

    virtual void extraUberRequestsAbortCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestsAbortCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestsAbortCommandLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestsAbortCommandAppendPair(key, new_component);
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
    void extraUberRequestsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraUberRequestsAbortCommandAppendPair(key, new_component);
      }
    void extraUberRequestsCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraUberRequestsAbortCommandSetField(key, new_component);
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
        UberRequestsCommandJSON::write_fields_as_json(handler);
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

    static UberRequestsAbortCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestsAbortCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestsAbortCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsAbortCommandJSON>, UberRequestsAbortCommandJSON *, bool> generator("Type UberRequestsAbortCommand", ignore_extras);
            parse_json_value(text, "Text for UberRequestsAbortCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestsAbortCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestsAbortCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsAbortCommandJSON>, UberRequestsAbortCommandJSON *, bool> generator("Type UberRequestsAbortCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberRequestsCommandJSON::Generator
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
            if (!(strcmp(getUberRequestsCommandJSONKey().c_str(), "UberRequestsAbort") == 0))
                throw("The key field has a value other than `UberRequestsAbort'.");
            UberRequestsAbortCommandJSON *result = new UberRequestsAbortCommandJSON();
            assert(result != NULL);
            RCHandle<UberRequestsAbortCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestsAbortCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberRequestsCommandJSON *new_result)
          {
            handle_result((UberRequestsAbortCommandJSON *)new_result);
          }
        void finish(UberRequestsAbortCommandJSON *result)
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
            UberRequestsCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(UberRequestsAbortCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return UberRequestsCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberRequestsCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the UberRequestsAbortCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestsAbortCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            UberRequestsCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTSABORTCOMMANDJSON_H */
