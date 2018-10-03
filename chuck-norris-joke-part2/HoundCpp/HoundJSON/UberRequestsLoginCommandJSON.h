/* file "UberRequestsLoginCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTSLOGINCOMMANDJSON_H
#define UBERREQUESTSLOGINCOMMANDJSON_H

#pragma interface

#include "UberRequestsCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "DynamicResponseJSON.h"
#include "UberRequestsSpecJSON.h"
#include "UberCompositeProductsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestsLoginCommandJSON : public UberRequestsCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasUberRequestsSpec;
        UberRequestsSpecJSON * storeUberRequestsSpec;
        bool flagHasUberProducts;
        UberCompositeProductsJSON * storeUberProducts;
        bool flagHasCause;
        std::string storeCause;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUberProducts(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCause(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasUberRequestsSpec(void) const;
        UberRequestsSpecJSON *  getUberRequestsSpec(void);
        const UberRequestsSpecJSON *  getUberRequestsSpec(void) const;
        bool  hasUberProducts(void) const;
        UberCompositeProductsJSON *  getUberProducts(void);
        const UberCompositeProductsJSON *  getUberProducts(void) const;
        bool  hasCause(void) const;
        std::string  getCause(void);
        const std::string  getCause(void) const;

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
        void setUberProducts(UberCompositeProductsJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasUberProducts)
              {
                storeUberProducts->remove_reference();
              }
            flagHasUberProducts = true;
            storeUberProducts = new_value;
          }
        void unsetUberProducts(void)
          {
            if (flagHasUberProducts)
              {
                storeUberProducts->remove_reference();
              }
            flagHasUberProducts = false;
          }
        void setCause(std::string new_value)
          {
            flagHasCause = true;
            storeCause = new_value;
          }
        void unsetCause(void)
          {
            flagHasCause = false;
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
            assert(flagHasUberRequestsSpec);
            handler->start_pair("UberRequestsSpec");
            storeUberRequestsSpec->write_as_json(handler);
            assert(flagHasUberProducts);
            handler->start_pair("UberProducts");
            storeUberProducts->write_as_json(handler);
            if (flagHasCause)
              {
                handler->start_pair("Cause");
                handler->string_value(storeCause);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasUberRequestsSpec()))
              {
                return "When parsing the object for %what%, the \"UberRequestsSpec\" field was missing.";
              }
            if (!(hasUberProducts()))
              {
                return "When parsing the object for %what%, the \"UberProducts\" field was missing.";
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
            JSONHoldingGenerator<UberRequestsSpecJSON::Generator, RCHandle<UberRequestsSpecJSON>, UberRequestsSpecJSON *, bool > fieldGeneratorUberRequestsSpec;
            JSONHoldingGenerator<UberCompositeProductsJSON::Generator, RCHandle<UberCompositeProductsJSON>, UberCompositeProductsJSON *, bool > fieldGeneratorUberProducts;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCause;
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
                if (fieldGeneratorUberRequestsSpec.have_value)
                  {
                    result->setUberRequestsSpec(fieldGeneratorUberRequestsSpec.value.referenced());
                    fieldGeneratorUberRequestsSpec.have_value = false;
                  }
                else if (!(result->hasUberRequestsSpec()))
                  {
                    error("When parsing the object for %what%, the \"UberRequestsSpec\" field was missing.");
                  }
                if (fieldGeneratorUberProducts.have_value)
                  {
                    result->setUberProducts(fieldGeneratorUberProducts.value.referenced());
                    fieldGeneratorUberProducts.have_value = false;
                  }
                else if (!(result->hasUberProducts()))
                  {
                    error("When parsing the object for %what%, the \"UberProducts\" field was missing.");
                  }
                if (fieldGeneratorCause.have_value)
                  {
                    result->setCause(fieldGeneratorCause.value);
                    fieldGeneratorCause.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ause") == 0)
                            return &fieldGeneratorCause;
                        break;
                    case 'U':
                        if (strncmp(&(field_name[1]), "ber", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[4]))
                              {
                                case 'P':
                                    if (strcmp(&(field_name[5]), "roducts") == 0)
                                        return &fieldGeneratorUberProducts;
                                    break;
                                case 'R':
                                    if (strcmp(&(field_name[5]), "equestsSpec") == 0)
                                        return &fieldGeneratorUberRequestsSpec;
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
            Generator(bool ignore_extras = false) : fieldGeneratorUberRequestsSpec("field \"UberRequestsSpec\" of the TypeNativeData class", ignore_extras), fieldGeneratorUberProducts("field \"UberProducts\" of the TypeNativeData class", ignore_extras), fieldGeneratorCause("field \"Cause\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorUberRequestsSpec.reset();
                fieldGeneratorUberProducts.reset();
                fieldGeneratorCause.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasRequireLoginResponse;
    DynamicResponseJSON * storeRequireLoginResponse;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestsLoginCommandJSON(const UberRequestsLoginCommandJSON &);
    UberRequestsLoginCommandJSON & operator=(const UberRequestsLoginCommandJSON &other);

    JSONValue * extraRequireLoginResponseToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONRequireLoginResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestsLoginCommandJSON(void);
    virtual ~UberRequestsLoginCommandJSON(void);
    const char * getUberRequestsCommandKind(void) const;
    bool  hasRequireLoginResponse(void) const;
    DynamicResponseJSON *  getRequireLoginResponse(void);
    const DynamicResponseJSON *  getRequireLoginResponse(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraUberRequestsLoginCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestsLoginCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestsLoginCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestsLoginCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestsLoginCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestsLoginCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberRequestsCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasRequireLoginResponse)
            ++result;
        if (flagHasNativeData)
            ++result;
        result += extraUberRequestsLoginCommandComponentCount();
        return result;
      }
    const char *extraUberRequestsCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRequireLoginResponse)
          {
            if (remainder == 0)
                return "RequireLoginResponse";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraUberRequestsLoginCommandComponentKey(remainder);
      }
    JSONValue *extraUberRequestsCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasRequireLoginResponse)
          {
            if (remainder == 0)
                return extraRequireLoginResponseToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraUberRequestsLoginCommandComponentValue(remainder);
      }
    const JSONValue *extraUberRequestsCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRequireLoginResponse)
          {
            if (remainder == 0)
                return extraRequireLoginResponseToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraUberRequestsLoginCommandComponentValue(remainder);
      }
    JSONValue *extraUberRequestsCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equireLoginResponse") == 0)
                    return (flagHasRequireLoginResponse ? extraRequireLoginResponseToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUberRequestsLoginCommandLookup(field_name);
      }
    const JSONValue *extraUberRequestsCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equireLoginResponse") == 0)
                    return (flagHasRequireLoginResponse ? extraRequireLoginResponseToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUberRequestsLoginCommandLookup(field_name);
      }

    void setRequireLoginResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequireLoginResponse)
          {
            storeRequireLoginResponse->remove_reference();
          }
        flagHasRequireLoginResponse = true;
        storeRequireLoginResponse = new_value;
      }
    void unsetRequireLoginResponse(void)
      {
        if (flagHasRequireLoginResponse)
          {
            storeRequireLoginResponse->remove_reference();
          }
        flagHasRequireLoginResponse = false;
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

    virtual void extraUberRequestsLoginCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestsLoginCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestsLoginCommandLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestsLoginCommandAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equireLoginResponse") == 0)
                    {
                    fromJSONRequireLoginResponse(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUberRequestsLoginCommandAppendPair(key, new_component);
      }
    void extraUberRequestsCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equireLoginResponse") == 0)
                    {
                    fromJSONRequireLoginResponse(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUberRequestsLoginCommandSetField(key, new_component);
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
        if (flagHasRequireLoginResponse)
          {
            handler->start_pair("RequireLoginResponse");
            storeRequireLoginResponse->write_as_json(handler);
          }
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

    static UberRequestsLoginCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestsLoginCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestsLoginCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsLoginCommandJSON>, UberRequestsLoginCommandJSON *, bool> generator("Type UberRequestsLoginCommand", ignore_extras);
            parse_json_value(text, "Text for UberRequestsLoginCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestsLoginCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestsLoginCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsLoginCommandJSON>, UberRequestsLoginCommandJSON *, bool> generator("Type UberRequestsLoginCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorRequireLoginResponse;
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
            if (!(strcmp(getUberRequestsCommandJSONKey().c_str(), "UberRequestsLogin") == 0))
                throw("The key field has a value other than `UberRequestsLogin'.");
            UberRequestsLoginCommandJSON *result = new UberRequestsLoginCommandJSON();
            assert(result != NULL);
            RCHandle<UberRequestsLoginCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestsLoginCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberRequestsCommandJSON *new_result)
          {
            handle_result((UberRequestsLoginCommandJSON *)new_result);
          }
        void finish(UberRequestsLoginCommandJSON *result)
          {
            if (fieldGeneratorRequireLoginResponse.have_value)
              {
                result->setRequireLoginResponse(fieldGeneratorRequireLoginResponse.value.referenced());
                fieldGeneratorRequireLoginResponse.have_value = false;
              }
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
        virtual void handle_result(UberRequestsLoginCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equireLoginResponse") == 0)
                        return &fieldGeneratorRequireLoginResponse;
                    break;
                default:
                    break;
              }
            return UberRequestsCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberRequestsCommandJSON::Generator(ignore_extras), fieldGeneratorRequireLoginResponse("field \"RequireLoginResponse\" of the UberRequestsLoginCommand class", ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the UberRequestsLoginCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestsLoginCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRequireLoginResponse.reset();
            fieldGeneratorNativeData.reset();
            UberRequestsCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTSLOGINCOMMANDJSON_H */
