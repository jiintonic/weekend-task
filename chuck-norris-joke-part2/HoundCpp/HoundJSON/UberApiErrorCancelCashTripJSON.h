/* file "UberApiErrorCancelCashTripJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERAPIERRORCANCELCASHTRIPJSON_H
#define UBERAPIERRORCANCELCASHTRIPJSON_H

#pragma interface

#include "UberApiErrorJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberApiErrorCancelCashTripJSON : public UberApiErrorJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberApiErrorCancelCashTripJSON(const UberApiErrorCancelCashTripJSON &);
    UberApiErrorCancelCashTripJSON & operator=(const UberApiErrorCancelCashTripJSON &other);

  public:
    UberApiErrorCancelCashTripJSON(void);
    virtual ~UberApiErrorCancelCashTripJSON(void);

    virtual size_t extraUberApiErrorCancelCashTripComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberApiErrorCancelCashTripComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberApiErrorCancelCashTripComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberApiErrorCancelCashTripComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberApiErrorCancelCashTripLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberApiErrorCancelCashTripLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberApiErrorComponentCount(void) const
      {
        size_t result = 0;
        result += extraUberApiErrorCancelCashTripComponentCount();
        return result;
      }
    const char *extraUberApiErrorComponentKey(size_t component_num) const
      {
        return extraUberApiErrorCancelCashTripComponentKey(component_num);
      }
    JSONValue *extraUberApiErrorComponentValue(size_t component_num)
      {
        return extraUberApiErrorCancelCashTripComponentValue(component_num);
      }
    const JSONValue *extraUberApiErrorComponentValue(size_t component_num) const
      {
        return extraUberApiErrorCancelCashTripComponentValue(component_num);
      }
    JSONValue *extraUberApiErrorLookup(const char *field_name)
      {
        return extraUberApiErrorCancelCashTripLookup(field_name);
      }
    const JSONValue *extraUberApiErrorLookup(const char *field_name) const
      {
        return extraUberApiErrorCancelCashTripLookup(field_name);
      }


    virtual void extraUberApiErrorCancelCashTripAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberApiErrorCancelCashTripSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberApiErrorCancelCashTripLookup(key);
        if (old_field == NULL)
          {
            extraUberApiErrorCancelCashTripAppendPair(key, new_component);
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
    void extraUberApiErrorAppendPair(const char *key, JSONValue *new_component)
      {
        extraUberApiErrorCancelCashTripAppendPair(key, new_component);
      }
    void extraUberApiErrorSetField(const char *key, JSONValue *new_component)
      {
        extraUberApiErrorCancelCashTripSetField(key, new_component);
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
        UberApiErrorJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberApiErrorCancelCashTripJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberApiErrorCancelCashTripJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberApiErrorCancelCashTripJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorCancelCashTripJSON>, UberApiErrorCancelCashTripJSON *, bool> generator("Type UberApiErrorCancelCashTrip", ignore_extras);
            parse_json_value(text, "Text for UberApiErrorCancelCashTripJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberApiErrorCancelCashTripJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberApiErrorCancelCashTripJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorCancelCashTripJSON>, UberApiErrorCancelCashTripJSON *, bool> generator("Type UberApiErrorCancelCashTrip", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberApiErrorJSON::Generator
      {
      private:
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
            UberApiErrorCancelCashTripJSON *result = new UberApiErrorCancelCashTripJSON();
            assert(result != NULL);
            RCHandle<UberApiErrorCancelCashTripJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberApiErrorCancelCashTripAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberApiErrorJSON *new_result)
          {
            handle_result((UberApiErrorCancelCashTripJSON *)new_result);
          }
        void finish(UberApiErrorCancelCashTripJSON *result)
          {
            UberApiErrorJSON::Generator::finish(result);
          }
        virtual void handle_result(UberApiErrorCancelCashTripJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return UberApiErrorJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberApiErrorJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberApiErrorCancelCashTrip class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            UberApiErrorJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static UberApiErrorCancelCashTripJSON *from_UberApiErrorJSON_json(const UberApiErrorJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        UberApiErrorCancelCashTripJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorCancelCashTripJSON>, UberApiErrorCancelCashTripJSON *, bool> handler("Type UberApiErrorCancelCashTrip", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* UBERAPIERRORCANCELCASHTRIPJSON_H */
