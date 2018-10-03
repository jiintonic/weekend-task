/* file "RadioOffCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RADIOOFFCOMMANDJSON_H
#define RADIOOFFCOMMANDJSON_H

#pragma interface

#include "RadioCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RadioOffCommandJSON : public RadioCommandJSON
  {
  private:
    bool flagHasAlreadyOffResult;
    DynamicResponseJSON * storeAlreadyOffResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RadioOffCommandJSON(const RadioOffCommandJSON &);
    RadioOffCommandJSON & operator=(const RadioOffCommandJSON &other);

    JSONValue * extraAlreadyOffResultToJSON(void) const;

    void  fromJSONAlreadyOffResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    RadioOffCommandJSON(void);
    virtual ~RadioOffCommandJSON(void);
    const char * getRadioCommandKind(void) const;
    bool  hasAlreadyOffResult(void) const;
    DynamicResponseJSON *  getAlreadyOffResult(void);
    const DynamicResponseJSON *  getAlreadyOffResult(void) const;

    virtual size_t extraRadioOffCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRadioOffCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRadioOffCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRadioOffCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRadioOffCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRadioOffCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRadioCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAlreadyOffResult)
            ++result;
        result += extraRadioOffCommandComponentCount();
        return result;
      }
    const char *extraRadioCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAlreadyOffResult)
          {
            if (remainder == 0)
                return "AlreadyOffResult";
            --remainder;
          }
        return extraRadioOffCommandComponentKey(remainder);
      }
    JSONValue *extraRadioCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAlreadyOffResult)
          {
            if (remainder == 0)
                return extraAlreadyOffResultToJSON();
            --remainder;
          }
        return extraRadioOffCommandComponentValue(remainder);
      }
    const JSONValue *extraRadioCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAlreadyOffResult)
          {
            if (remainder == 0)
                return extraAlreadyOffResultToJSON();
            --remainder;
          }
        return extraRadioOffCommandComponentValue(remainder);
      }
    JSONValue *extraRadioCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "AlreadyOffResult") == 0)
            return (flagHasAlreadyOffResult ? extraAlreadyOffResultToJSON() : NULL);
        return extraRadioOffCommandLookup(field_name);
      }
    const JSONValue *extraRadioCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "AlreadyOffResult") == 0)
            return (flagHasAlreadyOffResult ? extraAlreadyOffResultToJSON() : NULL);
        return extraRadioOffCommandLookup(field_name);
      }

    void setAlreadyOffResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAlreadyOffResult)
          {
            storeAlreadyOffResult->remove_reference();
          }
        flagHasAlreadyOffResult = true;
        storeAlreadyOffResult = new_value;
      }
    void unsetAlreadyOffResult(void)
      {
        if (flagHasAlreadyOffResult)
          {
            storeAlreadyOffResult->remove_reference();
          }
        flagHasAlreadyOffResult = false;
      }

    virtual void extraRadioOffCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRadioOffCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRadioOffCommandLookup(key);
        if (old_field == NULL)
          {
            extraRadioOffCommandAppendPair(key, new_component);
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
    void extraRadioCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "AlreadyOffResult") == 0)
            {
            fromJSONAlreadyOffResult(new_component, false);
            return;
            }
        extraRadioOffCommandAppendPair(key, new_component);
      }
    void extraRadioCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "AlreadyOffResult") == 0)
            {
            fromJSONAlreadyOffResult(new_component, false);
            return;
            }
        extraRadioOffCommandSetField(key, new_component);
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
        RadioCommandJSON::write_fields_as_json(handler);
        if (flagHasAlreadyOffResult)
          {
            handler->start_pair("AlreadyOffResult");
            storeAlreadyOffResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RadioOffCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RadioOffCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RadioOffCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RadioOffCommandJSON>, RadioOffCommandJSON *, bool> generator("Type RadioOffCommand", ignore_extras);
            parse_json_value(text, "Text for RadioOffCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RadioOffCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RadioOffCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RadioOffCommandJSON>, RadioOffCommandJSON *, bool> generator("Type RadioOffCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RadioCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAlreadyOffResult;
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
            if (!(strcmp(getRadioCommandJSONKey().c_str(), "RadioOff") == 0))
                throw("The key field has a value other than `RadioOff'.");
            RadioOffCommandJSON *result = new RadioOffCommandJSON();
            assert(result != NULL);
            RCHandle<RadioOffCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRadioOffCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RadioCommandJSON *new_result)
          {
            handle_result((RadioOffCommandJSON *)new_result);
          }
        void finish(RadioOffCommandJSON *result)
          {
            if (fieldGeneratorAlreadyOffResult.have_value)
              {
                result->setAlreadyOffResult(fieldGeneratorAlreadyOffResult.value.referenced());
                fieldGeneratorAlreadyOffResult.have_value = false;
              }
            RadioCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(RadioOffCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "AlreadyOffResult") == 0)
                return &fieldGeneratorAlreadyOffResult;
            return RadioCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RadioCommandJSON::Generator(ignore_extras), fieldGeneratorAlreadyOffResult("field \"AlreadyOffResult\" of the RadioOffCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RadioOffCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAlreadyOffResult.reset();
            RadioCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* RADIOOFFCOMMANDJSON_H */
