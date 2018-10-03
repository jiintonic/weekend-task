/* file "ExpediaHotelAPIErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EXPEDIAHOTELAPIERRORJSON_H
#define EXPEDIAHOTELAPIERRORJSON_H

#pragma interface

#include "CommandErrorJSON.h"
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


class ExpediaHotelAPIErrorJSON : public CommandErrorJSON
  {
  private:
    bool flagHasExpediaResponseJSON;
    std::string storeExpediaResponseJSON;
    bool flagHasExpediaErrorCode;
    std::string storeExpediaErrorCode;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ExpediaHotelAPIErrorJSON(const ExpediaHotelAPIErrorJSON &);
    ExpediaHotelAPIErrorJSON & operator=(const ExpediaHotelAPIErrorJSON &other);

    JSONValue * extraExpediaResponseJSONToJSON(void) const;
    JSONValue * extraExpediaErrorCodeToJSON(void) const;

    void  fromJSONExpediaResponseJSON(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExpediaErrorCode(JSONValue *json_value, bool ignore_extras = false);


  public:
    ExpediaHotelAPIErrorJSON(void);
    virtual ~ExpediaHotelAPIErrorJSON(void);
    const char * getErrorType(void) const;
    bool  hasExpediaResponseJSON(void) const;
    std::string  getExpediaResponseJSON(void);
    const std::string  getExpediaResponseJSON(void) const;
    bool  hasExpediaErrorCode(void) const;
    std::string  getExpediaErrorCode(void);
    const std::string  getExpediaErrorCode(void) const;

    virtual size_t extraExpediaHotelAPIErrorComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraExpediaHotelAPIErrorComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraExpediaHotelAPIErrorComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraExpediaHotelAPIErrorComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraExpediaHotelAPIErrorLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraExpediaHotelAPIErrorLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandErrorComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasExpediaResponseJSON)
            ++result;
        if (flagHasExpediaErrorCode)
            ++result;
        result += extraExpediaHotelAPIErrorComponentCount();
        return result;
      }
    const char *extraCommandErrorComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasExpediaResponseJSON)
          {
            if (remainder == 0)
                return "ExpediaResponseJSON";
            --remainder;
          }
        if (flagHasExpediaErrorCode)
          {
            if (remainder == 0)
                return "ExpediaErrorCode";
            --remainder;
          }
        return extraExpediaHotelAPIErrorComponentKey(remainder);
      }
    JSONValue *extraCommandErrorComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasExpediaResponseJSON)
          {
            if (remainder == 0)
                return extraExpediaResponseJSONToJSON();
            --remainder;
          }
        if (flagHasExpediaErrorCode)
          {
            if (remainder == 0)
                return extraExpediaErrorCodeToJSON();
            --remainder;
          }
        return extraExpediaHotelAPIErrorComponentValue(remainder);
      }
    const JSONValue *extraCommandErrorComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasExpediaResponseJSON)
          {
            if (remainder == 0)
                return extraExpediaResponseJSONToJSON();
            --remainder;
          }
        if (flagHasExpediaErrorCode)
          {
            if (remainder == 0)
                return extraExpediaErrorCodeToJSON();
            --remainder;
          }
        return extraExpediaHotelAPIErrorComponentValue(remainder);
      }
    JSONValue *extraCommandErrorLookup(const char *field_name)
      {
        if (strncmp(field_name, "Expedia", 7) == 0)
          {
            switch ((unsigned char)(field_name[7]))
              {
                case 'E':
                    if (strcmp(&(field_name[8]), "rrorCode") == 0)
                        return (flagHasExpediaErrorCode ? extraExpediaErrorCodeToJSON() : NULL);
                    break;
                case 'R':
                    if (strcmp(&(field_name[8]), "esponseJSON") == 0)
                        return (flagHasExpediaResponseJSON ? extraExpediaResponseJSONToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraExpediaHotelAPIErrorLookup(field_name);
      }
    const JSONValue *extraCommandErrorLookup(const char *field_name) const
      {
        if (strncmp(field_name, "Expedia", 7) == 0)
          {
            switch ((unsigned char)(field_name[7]))
              {
                case 'E':
                    if (strcmp(&(field_name[8]), "rrorCode") == 0)
                        return (flagHasExpediaErrorCode ? extraExpediaErrorCodeToJSON() : NULL);
                    break;
                case 'R':
                    if (strcmp(&(field_name[8]), "esponseJSON") == 0)
                        return (flagHasExpediaResponseJSON ? extraExpediaResponseJSONToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraExpediaHotelAPIErrorLookup(field_name);
      }

    void setExpediaResponseJSON(std::string new_value)
      {
        flagHasExpediaResponseJSON = true;
        storeExpediaResponseJSON = new_value;
      }
    void unsetExpediaResponseJSON(void)
      {
        flagHasExpediaResponseJSON = false;
      }
    void setExpediaErrorCode(std::string new_value)
      {
        flagHasExpediaErrorCode = true;
        storeExpediaErrorCode = new_value;
      }
    void unsetExpediaErrorCode(void)
      {
        flagHasExpediaErrorCode = false;
      }

    virtual void extraExpediaHotelAPIErrorAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraExpediaHotelAPIErrorSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraExpediaHotelAPIErrorLookup(key);
        if (old_field == NULL)
          {
            extraExpediaHotelAPIErrorAppendPair(key, new_component);
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
    void extraCommandErrorAppendPair(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Expedia", 7) == 0)
          {
            switch ((unsigned char)(key[7]))
              {
                case 'E':
                    if (strcmp(&(key[8]), "rrorCode") == 0)
                        {
                        fromJSONExpediaErrorCode(new_component, false);
                        return;
                        }
                    break;
                case 'R':
                    if (strcmp(&(key[8]), "esponseJSON") == 0)
                        {
                        fromJSONExpediaResponseJSON(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraExpediaHotelAPIErrorAppendPair(key, new_component);
      }
    void extraCommandErrorSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Expedia", 7) == 0)
          {
            switch ((unsigned char)(key[7]))
              {
                case 'E':
                    if (strcmp(&(key[8]), "rrorCode") == 0)
                        {
                        fromJSONExpediaErrorCode(new_component, false);
                        return;
                        }
                    break;
                case 'R':
                    if (strcmp(&(key[8]), "esponseJSON") == 0)
                        {
                        fromJSONExpediaResponseJSON(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraExpediaHotelAPIErrorSetField(key, new_component);
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
        CommandErrorJSON::write_fields_as_json(handler);
        assert(flagHasExpediaResponseJSON);
        handler->start_pair("ExpediaResponseJSON");
        handler->string_value(storeExpediaResponseJSON);
        if (flagHasExpediaErrorCode)
          {
            handler->start_pair("ExpediaErrorCode");
            handler->string_value(storeExpediaErrorCode);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasExpediaResponseJSON()))
          {
            return "When parsing the object for %what%, the \"ExpediaResponseJSON\" field was missing.";
          }
        return NULL;
      }

    static ExpediaHotelAPIErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ExpediaHotelAPIErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ExpediaHotelAPIErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ExpediaHotelAPIErrorJSON>, ExpediaHotelAPIErrorJSON *, bool> generator("Type ExpediaHotelAPIError", ignore_extras);
            parse_json_value(text, "Text for ExpediaHotelAPIErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ExpediaHotelAPIErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ExpediaHotelAPIErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ExpediaHotelAPIErrorJSON>, ExpediaHotelAPIErrorJSON *, bool> generator("Type ExpediaHotelAPIError", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandErrorJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExpediaResponseJSON;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExpediaErrorCode;
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
            if (!(strcmp(getCommandErrorJSONKey().c_str(), "ExpediaHotelAPIError") == 0))
                throw("The key field has a value other than `ExpediaHotelAPIError'.");
            ExpediaHotelAPIErrorJSON *result = new ExpediaHotelAPIErrorJSON();
            assert(result != NULL);
            RCHandle<ExpediaHotelAPIErrorJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraExpediaHotelAPIErrorAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandErrorJSON *new_result)
          {
            handle_result((ExpediaHotelAPIErrorJSON *)new_result);
          }
        void finish(ExpediaHotelAPIErrorJSON *result)
          {
            if (fieldGeneratorExpediaResponseJSON.have_value)
              {
                result->setExpediaResponseJSON(fieldGeneratorExpediaResponseJSON.value);
                fieldGeneratorExpediaResponseJSON.have_value = false;
              }
            else if (!(result->hasExpediaResponseJSON()))
              {
                error("When parsing the object for %what%, the \"ExpediaResponseJSON\" field was missing.");
              }
            if (fieldGeneratorExpediaErrorCode.have_value)
              {
                result->setExpediaErrorCode(fieldGeneratorExpediaErrorCode.value);
                fieldGeneratorExpediaErrorCode.have_value = false;
              }
            CommandErrorJSON::Generator::finish(result);
          }
        virtual void handle_result(ExpediaHotelAPIErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Expedia", 7) == 0)
              {
                switch ((unsigned char)(field_name[7]))
                  {
                    case 'E':
                        if (strcmp(&(field_name[8]), "rrorCode") == 0)
                            return &fieldGeneratorExpediaErrorCode;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[8]), "esponseJSON") == 0)
                            return &fieldGeneratorExpediaResponseJSON;
                        break;
                    default:
                        break;
                  }
              }
            return CommandErrorJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandErrorJSON::Generator(ignore_extras), fieldGeneratorExpediaResponseJSON("field \"ExpediaResponseJSON\" of the ExpediaHotelAPIError class"), fieldGeneratorExpediaErrorCode("field \"ExpediaErrorCode\" of the ExpediaHotelAPIError class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ExpediaHotelAPIError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorExpediaResponseJSON.reset();
            fieldGeneratorExpediaErrorCode.reset();
            CommandErrorJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* EXPEDIAHOTELAPIERRORJSON_H */
