/* file "UberPromoCodeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPROMOCODEJSON_H
#define UBERPROMOCODEJSON_H

#pragma interface

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


class UberPromoCodeJSON : public ReferenceCounted
  {
  public:
    enum TypeStatusKnownValues
      {
        Status_applied,
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
    bool flagHasCode;
    std::string storeCode;
    bool flagHasStatus;
    TypeStatus storeStatus;
    bool flagHasDescription;
    std::string storeDescription;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberPromoCodeJSON(const UberPromoCodeJSON &);
    UberPromoCodeJSON & operator=(const UberPromoCodeJSON &other);

    void  fromJSONCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberPromoCodeJSON(void);
    virtual ~UberPromoCodeJSON(void);
    bool  hasCode(void) const;
    std::string  getCode(void);
    const std::string  getCode(void) const;
    bool  hasStatus(void) const;
    TypeStatus  getStatus(void);
    const TypeStatus  getStatus(void) const;
    const char * getStatusAsChars(void) const;
    std::string  getStatusAsString(void) const;
    bool  hasDescription(void) const;
    std::string  getDescription(void);
    const std::string  getDescription(void) const;

    virtual size_t extraUberPromoCodeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberPromoCodeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberPromoCodeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberPromoCodeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberPromoCodeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberPromoCodeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCode(std::string new_value)
      {
        flagHasCode = true;
        storeCode = new_value;
      }
    void unsetCode(void)
      {
        flagHasCode = false;
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

    virtual void extraUberPromoCodeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberPromoCodeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberPromoCodeLookup(key);
        if (old_field == NULL)
          {
            extraUberPromoCodeAppendPair(key, new_component);
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
        assert(flagHasCode);
        handler->start_pair("Code");
        handler->string_value(storeCode);
        assert(flagHasStatus);
        handler->start_pair("Status");
        if (storeStatus.in_known_list)
          {
            switch (storeStatus.list_value)
              {
                case Status_applied:
                    handler->string_value("applied");
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
        if (!(hasCode()))
          {
            return "When parsing the object for %what%, the \"Code\" field was missing.";
          }
        if (!(hasStatus()))
          {
            return "When parsing the object for %what%, the \"Status\" field was missing.";
          }
        return NULL;
      }

    static UberPromoCodeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberPromoCodeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberPromoCodeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPromoCodeJSON>, UberPromoCodeJSON *, bool> generator("Type UberPromoCode", ignore_extras);
            parse_json_value(text, "Text for UberPromoCodeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberPromoCodeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberPromoCodeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPromoCodeJSON>, UberPromoCodeJSON *, bool> generator("Type UberPromoCode", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCode;
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
            UberPromoCodeJSON *result = new UberPromoCodeJSON();
            assert(result != NULL);
            RCHandle<UberPromoCodeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberPromoCodeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberPromoCodeJSON *result)
          {
            if (fieldGeneratorCode.have_value)
              {
                result->setCode(fieldGeneratorCode.value);
                fieldGeneratorCode.have_value = false;
              }
            else if (!(result->hasCode()))
              {
                error("When parsing the object for %what%, the \"Code\" field was missing.");
              }
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
        virtual void handle_result(UberPromoCodeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ode") == 0)
                        return &fieldGeneratorCode;
                    break;
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
        Generator(bool ignore_extras = false) : fieldGeneratorCode("field \"Code\" of the UberPromoCode class"), fieldGeneratorStatus("field \"Status\" of the UberPromoCode class"), fieldGeneratorDescription("field \"Description\" of the UberPromoCode class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberPromoCode class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCode.reset();
            fieldGeneratorStatus.reset();
            fieldGeneratorDescription.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPROMOCODEJSON_H */
