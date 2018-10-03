/* file "UberCancelInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERCANCELINFORMATIONNUGGETJSON_H
#define UBERCANCELINFORMATIONNUGGETJSON_H

#pragma interface

#include "UberInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberCancelInformationNuggetJSON : public UberInformationNuggetJSON
  {
  public:
    enum TypeStatusKnownValues
      {
        Status_success,
        Status_no_current_trip,
        Status_cancel_cash_trip_not_allowed,
        Status_failure,
        Status_unauthorized,
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
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberCancelInformationNuggetJSON(const UberCancelInformationNuggetJSON &);
    UberCancelInformationNuggetJSON & operator=(const UberCancelInformationNuggetJSON &other);

    JSONValue * extraStatusToJSON(void) const;

    void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberCancelInformationNuggetJSON(void);
    virtual ~UberCancelInformationNuggetJSON(void);
    const char * getUberNuggetKind(void) const;
    bool  hasStatus(void) const;
    TypeStatus  getStatus(void);
    const TypeStatus  getStatus(void) const;
    const char * getStatusAsChars(void) const;
    std::string  getStatusAsString(void) const;

    virtual size_t extraUberCancelInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberCancelInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberCancelInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberCancelInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberCancelInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberCancelInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasStatus)
            ++result;
        result += extraUberCancelInformationNuggetComponentCount();
        return result;
      }
    const char *extraUberInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStatus)
          {
            if (remainder == 0)
                return "Status";
            --remainder;
          }
        return extraUberCancelInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraUberInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasStatus)
          {
            if (remainder == 0)
                return extraStatusToJSON();
            --remainder;
          }
        return extraUberCancelInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraUberInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStatus)
          {
            if (remainder == 0)
                return extraStatusToJSON();
            --remainder;
          }
        return extraUberCancelInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraUberInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "Status") == 0)
            return (flagHasStatus ? extraStatusToJSON() : NULL);
        return extraUberCancelInformationNuggetLookup(field_name);
      }
    const JSONValue *extraUberInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Status") == 0)
            return (flagHasStatus ? extraStatusToJSON() : NULL);
        return extraUberCancelInformationNuggetLookup(field_name);
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

    virtual void extraUberCancelInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberCancelInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberCancelInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraUberCancelInformationNuggetAppendPair(key, new_component);
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
    void extraUberInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Status") == 0)
            {
            fromJSONStatus(new_component, false);
            return;
            }
        extraUberCancelInformationNuggetAppendPair(key, new_component);
      }
    void extraUberInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Status") == 0)
            {
            fromJSONStatus(new_component, false);
            return;
            }
        extraUberCancelInformationNuggetSetField(key, new_component);
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
        UberInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasStatus);
        handler->start_pair("Status");
        if (storeStatus.in_known_list)
          {
            switch (storeStatus.list_value)
              {
                case Status_success:
                    handler->string_value("success");
                    break;
                case Status_no_current_trip:
                    handler->string_value("no_current_trip");
                    break;
                case Status_cancel_cash_trip_not_allowed:
                    handler->string_value("cancel_cash_trip_not_allowed");
                    break;
                case Status_failure:
                    handler->string_value("failure");
                    break;
                case Status_unauthorized:
                    handler->string_value("unauthorized");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeStatus.string_value);
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

    static UberCancelInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberCancelInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberCancelInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCancelInformationNuggetJSON>, UberCancelInformationNuggetJSON *, bool> generator("Type UberCancelInformationNugget", ignore_extras);
            parse_json_value(text, "Text for UberCancelInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberCancelInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberCancelInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCancelInformationNuggetJSON>, UberCancelInformationNuggetJSON *, bool> generator("Type UberCancelInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberInformationNuggetJSON::Generator
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
            if (!(strcmp(getUberInformationNuggetJSONKey().c_str(), "UberCancel") == 0))
                throw("The key field has a value other than `UberCancel'.");
            UberCancelInformationNuggetJSON *result = new UberCancelInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<UberCancelInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberCancelInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberInformationNuggetJSON *new_result)
          {
            handle_result((UberCancelInformationNuggetJSON *)new_result);
          }
        void finish(UberCancelInformationNuggetJSON *result)
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
            UberInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(UberCancelInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Status") == 0)
                return &fieldGeneratorStatus;
            return UberInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorStatus("field \"Status\" of the UberCancelInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberCancelInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStatus.reset();
            UberInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERCANCELINFORMATIONNUGGETJSON_H */
