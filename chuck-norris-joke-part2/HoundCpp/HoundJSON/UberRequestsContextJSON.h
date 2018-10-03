/* file "UberRequestsContextJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTSCONTEXTJSON_H
#define UBERREQUESTSCONTEXTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
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


class UberRequestsContextJSON : public ReferenceCounted
  {
  public:
    enum TypeNextStateKnownValues
      {
        NextState_select_pick_up_location,
        NextState_select_drop_off_location,
        NextState_request_confirmation,
        NextState_login,
        NextState_surge_confirmation,
        NextState__none
      };
    struct TypeNextState
      {
        bool in_known_list;
        std::string string_value;
        TypeNextStateKnownValues list_value;

        TypeNextState(void);
        TypeNextState(const TypeNextState &other);
        TypeNextState(TypeNextStateKnownValues other);
        bool  operator==(const TypeNextState &other) const;
        bool  operator!=(const TypeNextState &other) const;
        bool  operator<(const TypeNextState &other) const;
        bool  operator>(const TypeNextState &other) const;
        bool  operator>=(const TypeNextState &other) const;
        bool  operator<=(const TypeNextState &other) const;

      };

    static TypeNextStateKnownValues  stringToNextState(const char *chars);
    static const char * stringFromNextState(TypeNextStateKnownValues the_enum);

  private:
    bool flagHasNextState;
    TypeNextState storeNextState;
    bool flagHasSurgeMultiplier;
    double storeSurgeMultiplier;
    std::string textStoreSurgeMultiplier;
    bool flagHasUberRequestsSpec;
    UberRequestsSpecJSON * storeUberRequestsSpec;
    bool flagHasUberProducts;
    UberCompositeProductsJSON * storeUberProducts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestsContextJSON(const UberRequestsContextJSON &);
    UberRequestsContextJSON & operator=(const UberRequestsContextJSON &other);

    void  fromJSONNextState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberProducts(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestsContextJSON(void);
    virtual ~UberRequestsContextJSON(void);
    bool  hasNextState(void) const;
    TypeNextState  getNextState(void);
    const TypeNextState  getNextState(void) const;
    const char * getNextStateAsChars(void) const;
    std::string  getNextStateAsString(void) const;
    bool  hasSurgeMultiplier(void) const;
    double  getSurgeMultiplier(void);
    const double  getSurgeMultiplier(void) const;
    std::string  getSurgeMultiplierAsText(void) const;
    bool  hasUberRequestsSpec(void) const;
    UberRequestsSpecJSON *  getUberRequestsSpec(void);
    const UberRequestsSpecJSON *  getUberRequestsSpec(void) const;
    bool  hasUberProducts(void) const;
    UberCompositeProductsJSON *  getUberProducts(void);
    const UberCompositeProductsJSON *  getUberProducts(void) const;

    virtual size_t extraUberRequestsContextComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestsContextComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestsContextComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestsContextComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestsContextLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestsContextLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setNextState(TypeNextState new_value)
      {
        flagHasNextState = true;
        storeNextState = new_value;
      }
    void setNextState(const char *chars)
      {
        TypeNextStateKnownValues known = stringToNextState(chars);
        TypeNextState new_value;
        if (known == NextState__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setNextState(new_value);
      }
    void setNextState(std::string the_string)
      {
        setNextState(the_string.c_str());
      }
    void setNextState(TypeNextStateKnownValues new_value)
      {
        TypeNextState new_full_value;
        assert(new_value != NextState__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setNextState(new_full_value);
      }
    void unsetNextState(void)
      {
        flagHasNextState = false;
      }
    void setSurgeMultiplier(double new_value)
      {
        flagHasSurgeMultiplier = true;
        storeSurgeMultiplier = new_value;
        textStoreSurgeMultiplier = "";
      }
    void setSurgeMultiplierText(std::string new_value)
      {
        flagHasSurgeMultiplier = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field SurgeMultiplier of UberRequestsContextJSON is not a valid number.");
        textStoreSurgeMultiplier = new_value;
      }
    void unsetSurgeMultiplier(void)
      {
        flagHasSurgeMultiplier = false;
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

    virtual void extraUberRequestsContextAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestsContextSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestsContextLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestsContextAppendPair(key, new_component);
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
        assert(flagHasNextState);
        handler->start_pair("NextState");
        if (storeNextState.in_known_list)
          {
            switch (storeNextState.list_value)
              {
                case NextState_select_pick_up_location:
                    handler->string_value("select_pick_up_location");
                    break;
                case NextState_select_drop_off_location:
                    handler->string_value("select_drop_off_location");
                    break;
                case NextState_request_confirmation:
                    handler->string_value("request_confirmation");
                    break;
                case NextState_login:
                    handler->string_value("login");
                    break;
                case NextState_surge_confirmation:
                    handler->string_value("surge_confirmation");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeNextState.string_value);
          }
        if (flagHasSurgeMultiplier)
          {
            handler->start_pair("SurgeMultiplier");
            if (textStoreSurgeMultiplier != "")
                handler->number_value(textStoreSurgeMultiplier.c_str());
            else if (((double)(long int)storeSurgeMultiplier) == storeSurgeMultiplier)
                handler->number_value((long int)storeSurgeMultiplier);
            else
                handler->number_value(storeSurgeMultiplier);
          }
        assert(flagHasUberRequestsSpec);
        handler->start_pair("UberRequestsSpec");
        storeUberRequestsSpec->write_as_json(handler);
        assert(flagHasUberProducts);
        handler->start_pair("UberProducts");
        storeUberProducts->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNextState()))
          {
            return "When parsing the object for %what%, the \"NextState\" field was missing.";
          }
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

    static UberRequestsContextJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestsContextJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestsContextJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsContextJSON>, UberRequestsContextJSON *, bool> generator("Type UberRequestsContext", ignore_extras);
            parse_json_value(text, "Text for UberRequestsContextJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestsContextJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestsContextJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestsContextJSON>, UberRequestsContextJSON *, bool> generator("Type UberRequestsContext", ignore_extras);
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
    class FieldGeneratorNextState : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNextState(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNextState(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeNextStateKnownValues known = stringToNextState(result);
                TypeNextState new_value;
                if (known == NextState__none)
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
            virtual void handle_result(TypeNextState result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNextState, TypeNextState, TypeNextState > fieldGeneratorNextState;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSurgeMultiplier;
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
            UberRequestsContextJSON *result = new UberRequestsContextJSON();
            assert(result != NULL);
            RCHandle<UberRequestsContextJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestsContextAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestsContextJSON *result)
          {
            if (fieldGeneratorNextState.have_value)
              {
                result->setNextState(fieldGeneratorNextState.value);
                fieldGeneratorNextState.have_value = false;
              }
            else if (!(result->hasNextState()))
              {
                error("When parsing the object for %what%, the \"NextState\" field was missing.");
              }
            if (fieldGeneratorSurgeMultiplier.have_value)
              {
                result->setSurgeMultiplierText(fieldGeneratorSurgeMultiplier.value);
                fieldGeneratorSurgeMultiplier.have_value = false;
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
        virtual void handle_result(UberRequestsContextJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'N':
                    if (strcmp(&(field_name[1]), "extState") == 0)
                        return &fieldGeneratorNextState;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "urgeMultiplier") == 0)
                        return &fieldGeneratorSurgeMultiplier;
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
        Generator(bool ignore_extras = false) : fieldGeneratorNextState("field \"NextState\" of the UberRequestsContext class"), fieldGeneratorSurgeMultiplier("field \"SurgeMultiplier\" of the UberRequestsContext class"), fieldGeneratorUberRequestsSpec("field \"UberRequestsSpec\" of the UberRequestsContext class", ignore_extras), fieldGeneratorUberProducts("field \"UberProducts\" of the UberRequestsContext class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestsContext class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNextState.reset();
            fieldGeneratorSurgeMultiplier.reset();
            fieldGeneratorUberRequestsSpec.reset();
            fieldGeneratorUberProducts.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTSCONTEXTJSON_H */
