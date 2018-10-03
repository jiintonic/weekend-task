/* file "UberRequestsInProgressCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTSINPROGRESSCOMMANDJSON_H
#define UBERREQUESTSINPROGRESSCOMMANDJSON_H

#pragma interface

#include "UberRequestsCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
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


class UberRequestsInProgressCommandJSON : public UberRequestsCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasUberRequestsSpec;
        UberRequestsSpecJSON * storeUberRequestsSpec;
        bool flagHasUberProducts;
        UberCompositeProductsJSON * storeUberProducts;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUberProducts(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasUberRequestsSpec(void) const;
        UberRequestsSpecJSON *  getUberRequestsSpec(void);
        const UberRequestsSpecJSON *  getUberRequestsSpec(void) const;
        bool  hasUberProducts(void) const;
        UberCompositeProductsJSON *  getUberProducts(void);
        const UberCompositeProductsJSON *  getUberProducts(void) const;

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
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Uber", 4) == 0)
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
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorUberRequestsSpec("field \"UberRequestsSpec\" of the TypeNativeData class", ignore_extras), fieldGeneratorUberProducts("field \"UberProducts\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
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

    UberRequestsInProgressCommandJSON(const UberRequestsInProgressCommandJSON &);
    UberRequestsInProgressCommandJSON & operator=(const UberRequestsInProgressCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestsInProgressCommandJSON(void);
    virtual ~UberRequestsInProgressCommandJSON(void);
    const char * getUberRequestsCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraUberRequestsInProgressCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestsInProgressCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestsInProgressCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestsInProgressCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestsInProgressCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestsInProgressCommandLookup(const char *field_name) const
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
        result += extraUberRequestsInProgressCommandComponentCount();
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
        return extraUberRequestsInProgressCommandComponentKey(remainder);
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
        return extraUberRequestsInProgressCommandComponentValue(remainder);
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
        return extraUberRequestsInProgressCommandComponentValue(remainder);
      }
    JSONValue *extraUberRequestsCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraUberRequestsInProgressCommandLookup(field_name);
      }
    const JSONValue *extraUberRequestsCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraUberRequestsInProgressCommandLookup(field_name);
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

    virtual void extraUberRequestsInProgressCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestsInProgressCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestsInProgressCommandLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestsInProgressCommandAppendPair(key, new_component);
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
        extraUberRequestsInProgressCommandAppendPair(key, new_component);
      }
    void extraUberRequestsCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraUberRequestsInProgressCommandSetField(key, new_component);
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

    static UberRequestsInProgressCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestsInProgressCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestsInProgressCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsInProgressCommandJSON>, UberRequestsInProgressCommandJSON *, bool> generator("Type UberRequestsInProgressCommand", ignore_extras);
            parse_json_value(text, "Text for UberRequestsInProgressCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestsInProgressCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestsInProgressCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsInProgressCommandJSON>, UberRequestsInProgressCommandJSON *, bool> generator("Type UberRequestsInProgressCommand", ignore_extras);
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
            if (!(strcmp(getUberRequestsCommandJSONKey().c_str(), "UberRequestsInProgress") == 0))
                throw("The key field has a value other than `UberRequestsInProgress'.");
            UberRequestsInProgressCommandJSON *result = new UberRequestsInProgressCommandJSON();
            assert(result != NULL);
            RCHandle<UberRequestsInProgressCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestsInProgressCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberRequestsCommandJSON *new_result)
          {
            handle_result((UberRequestsInProgressCommandJSON *)new_result);
          }
        void finish(UberRequestsInProgressCommandJSON *result)
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
        virtual void handle_result(UberRequestsInProgressCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return UberRequestsCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberRequestsCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the UberRequestsInProgressCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestsInProgressCommand class");
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

#endif /* UBERREQUESTSINPROGRESSCOMMANDJSON_H */
