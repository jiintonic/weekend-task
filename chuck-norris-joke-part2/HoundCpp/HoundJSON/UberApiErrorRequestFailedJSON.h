/* file "UberApiErrorRequestFailedJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERAPIERRORREQUESTFAILEDJSON_H
#define UBERAPIERRORREQUESTFAILEDJSON_H

#pragma interface

#include "UberApiErrorJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "UberRequestFatalErrorsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberApiErrorRequestFailedJSON : public UberApiErrorJSON
  {
  private:
    bool flagHasErrors;
    UberRequestFatalErrorsJSON * storeErrors;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberApiErrorRequestFailedJSON(const UberApiErrorRequestFailedJSON &);
    UberApiErrorRequestFailedJSON & operator=(const UberApiErrorRequestFailedJSON &other);

    JSONValue * extraErrorsToJSON(void) const;

    void  fromJSONErrors(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberApiErrorRequestFailedJSON(void);
    virtual ~UberApiErrorRequestFailedJSON(void);
    bool  hasErrors(void) const;
    UberRequestFatalErrorsJSON *  getErrors(void);
    const UberRequestFatalErrorsJSON *  getErrors(void) const;

    virtual size_t extraUberApiErrorRequestFailedComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberApiErrorRequestFailedComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberApiErrorRequestFailedComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberApiErrorRequestFailedComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberApiErrorRequestFailedLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberApiErrorRequestFailedLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberApiErrorComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasErrors)
            ++result;
        result += extraUberApiErrorRequestFailedComponentCount();
        return result;
      }
    const char *extraUberApiErrorComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasErrors)
          {
            if (remainder == 0)
                return "Errors";
            --remainder;
          }
        return extraUberApiErrorRequestFailedComponentKey(remainder);
      }
    JSONValue *extraUberApiErrorComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasErrors)
          {
            if (remainder == 0)
                return extraErrorsToJSON();
            --remainder;
          }
        return extraUberApiErrorRequestFailedComponentValue(remainder);
      }
    const JSONValue *extraUberApiErrorComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasErrors)
          {
            if (remainder == 0)
                return extraErrorsToJSON();
            --remainder;
          }
        return extraUberApiErrorRequestFailedComponentValue(remainder);
      }
    JSONValue *extraUberApiErrorLookup(const char *field_name)
      {
        if (strcmp(field_name, "Errors") == 0)
            return (flagHasErrors ? extraErrorsToJSON() : NULL);
        return extraUberApiErrorRequestFailedLookup(field_name);
      }
    const JSONValue *extraUberApiErrorLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Errors") == 0)
            return (flagHasErrors ? extraErrorsToJSON() : NULL);
        return extraUberApiErrorRequestFailedLookup(field_name);
      }

    void setErrors(UberRequestFatalErrorsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasErrors)
          {
            storeErrors->remove_reference();
          }
        flagHasErrors = true;
        storeErrors = new_value;
      }
    void unsetErrors(void)
      {
        if (flagHasErrors)
          {
            storeErrors->remove_reference();
          }
        flagHasErrors = false;
      }

    virtual void extraUberApiErrorRequestFailedAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberApiErrorRequestFailedSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberApiErrorRequestFailedLookup(key);
        if (old_field == NULL)
          {
            extraUberApiErrorRequestFailedAppendPair(key, new_component);
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
        if (strcmp(key, "Errors") == 0)
            {
            fromJSONErrors(new_component, false);
            return;
            }
        extraUberApiErrorRequestFailedAppendPair(key, new_component);
      }
    void extraUberApiErrorSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Errors") == 0)
            {
            fromJSONErrors(new_component, false);
            return;
            }
        extraUberApiErrorRequestFailedSetField(key, new_component);
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
        assert(flagHasErrors);
        handler->start_pair("Errors");
        storeErrors->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasErrors()))
          {
            return "When parsing the object for %what%, the \"Errors\" field was missing.";
          }
        return NULL;
      }

    static UberApiErrorRequestFailedJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberApiErrorRequestFailedJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberApiErrorRequestFailedJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorRequestFailedJSON>, UberApiErrorRequestFailedJSON *, bool> generator("Type UberApiErrorRequestFailed", ignore_extras);
            parse_json_value(text, "Text for UberApiErrorRequestFailedJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberApiErrorRequestFailedJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberApiErrorRequestFailedJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorRequestFailedJSON>, UberApiErrorRequestFailedJSON *, bool> generator("Type UberApiErrorRequestFailed", ignore_extras);
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
        JSONHoldingGenerator<UberRequestFatalErrorsJSON::Generator, RCHandle<UberRequestFatalErrorsJSON>, UberRequestFatalErrorsJSON *, bool > fieldGeneratorErrors;
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
            UberApiErrorRequestFailedJSON *result = new UberApiErrorRequestFailedJSON();
            assert(result != NULL);
            RCHandle<UberApiErrorRequestFailedJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberApiErrorRequestFailedAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberApiErrorJSON *new_result)
          {
            handle_result((UberApiErrorRequestFailedJSON *)new_result);
          }
        void finish(UberApiErrorRequestFailedJSON *result)
          {
            if (fieldGeneratorErrors.have_value)
              {
                result->setErrors(fieldGeneratorErrors.value.referenced());
                fieldGeneratorErrors.have_value = false;
              }
            else if (!(result->hasErrors()))
              {
                error("When parsing the object for %what%, the \"Errors\" field was missing.");
              }
            UberApiErrorJSON::Generator::finish(result);
          }
        virtual void handle_result(UberApiErrorRequestFailedJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Errors") == 0)
                return &fieldGeneratorErrors;
            return UberApiErrorJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberApiErrorJSON::Generator(ignore_extras), fieldGeneratorErrors("field \"Errors\" of the UberApiErrorRequestFailed class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberApiErrorRequestFailed class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorErrors.reset();
            UberApiErrorJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static UberApiErrorRequestFailedJSON *from_UberApiErrorJSON_json(const UberApiErrorJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        UberApiErrorRequestFailedJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorRequestFailedJSON>, UberApiErrorRequestFailedJSON *, bool> handler("Type UberApiErrorRequestFailed", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* UBERAPIERRORREQUESTFAILEDJSON_H */
