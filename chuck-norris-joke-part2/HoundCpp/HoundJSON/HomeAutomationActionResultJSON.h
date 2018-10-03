/* file "HomeAutomationActionResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONACTIONRESULTJSON_H
#define HOMEAUTOMATIONACTIONRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationActionResultTypeJSON.h"
#include "HomeAutomationActionResponseListJSON.h"
#include "HomeAutomationActionResponseListJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationActionResultJSON : public ReferenceCounted
  {
  private:
    bool flagHasResult;
    HomeAutomationActionResultTypeJSON * storeResult;
    bool flagHasServerActionSucceeded;
    HomeAutomationActionResponseListJSON * storeServerActionSucceeded;
    bool flagHasServerActionFailed;
    HomeAutomationActionResponseListJSON * storeServerActionFailed;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationActionResultJSON(const HomeAutomationActionResultJSON &);
    HomeAutomationActionResultJSON & operator=(const HomeAutomationActionResultJSON &other);

    void  fromJSONResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONServerActionSucceeded(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONServerActionFailed(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationActionResultJSON(void);
    virtual ~HomeAutomationActionResultJSON(void);
    bool  hasResult(void) const;
    HomeAutomationActionResultTypeJSON *  getResult(void);
    const HomeAutomationActionResultTypeJSON *  getResult(void) const;
    HomeAutomationActionResultTypeJSON::TypeValue  getResultValue(void);
    const HomeAutomationActionResultTypeJSON::TypeValue  getResultValue(void) const;
    const char * getResultAsChars(void) const;
    std::string  getResultAsString(void) const;
    bool  hasServerActionSucceeded(void) const;
    HomeAutomationActionResponseListJSON *  getServerActionSucceeded(void);
    const HomeAutomationActionResponseListJSON *  getServerActionSucceeded(void) const;
    bool  hasServerActionFailed(void) const;
    HomeAutomationActionResponseListJSON *  getServerActionFailed(void);
    const HomeAutomationActionResponseListJSON *  getServerActionFailed(void) const;

    virtual size_t extraHomeAutomationActionResultComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationActionResultComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationActionResultComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationActionResultComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationActionResultLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationActionResultLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setResult(HomeAutomationActionResultTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResult)
          {
            storeResult->remove_reference();
          }
        flagHasResult = true;
        storeResult = new_value;
      }
    void setResult(HomeAutomationActionResultTypeJSON::TypeValue new_value)
      {
        setResult(new HomeAutomationActionResultTypeJSON(new_value));
      }
    void setResult(const char *chars)
      {
        HomeAutomationActionResultTypeJSON::TypeValueKnownValues known = HomeAutomationActionResultTypeJSON::stringToValue(chars);
        HomeAutomationActionResultTypeJSON::TypeValue new_value;
        if (known == HomeAutomationActionResultTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setResult(new_value);
      }
    void setResult(std::string the_string)
      {
        setResult(the_string.c_str());
      }
    void unsetResult(void)
      {
        if (flagHasResult)
          {
            storeResult->remove_reference();
          }
        flagHasResult = false;
      }
    void setServerActionSucceeded(HomeAutomationActionResponseListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasServerActionSucceeded)
          {
            storeServerActionSucceeded->remove_reference();
          }
        flagHasServerActionSucceeded = true;
        storeServerActionSucceeded = new_value;
      }
    void unsetServerActionSucceeded(void)
      {
        if (flagHasServerActionSucceeded)
          {
            storeServerActionSucceeded->remove_reference();
          }
        flagHasServerActionSucceeded = false;
      }
    void setServerActionFailed(HomeAutomationActionResponseListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasServerActionFailed)
          {
            storeServerActionFailed->remove_reference();
          }
        flagHasServerActionFailed = true;
        storeServerActionFailed = new_value;
      }
    void unsetServerActionFailed(void)
      {
        if (flagHasServerActionFailed)
          {
            storeServerActionFailed->remove_reference();
          }
        flagHasServerActionFailed = false;
      }

    virtual void extraHomeAutomationActionResultAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationActionResultSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationActionResultLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationActionResultAppendPair(key, new_component);
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
        assert(flagHasResult);
        handler->start_pair("Result");
        storeResult->write_as_json(handler);
        if (flagHasServerActionSucceeded)
          {
            handler->start_pair("ServerActionSucceeded");
            storeServerActionSucceeded->write_as_json(handler);
          }
        if (flagHasServerActionFailed)
          {
            handler->start_pair("ServerActionFailed");
            storeServerActionFailed->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasResult()))
          {
            return "When parsing the object for %what%, the \"Result\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationActionResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationActionResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationActionResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResultJSON>, HomeAutomationActionResultJSON *, bool> generator("Type HomeAutomationActionResult", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationActionResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationActionResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationActionResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResultJSON>, HomeAutomationActionResultJSON *, bool> generator("Type HomeAutomationActionResult", ignore_extras);
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
        JSONHoldingGenerator<HomeAutomationActionResultTypeJSON::Generator, RCHandle<HomeAutomationActionResultTypeJSON>, HomeAutomationActionResultTypeJSON *, bool > fieldGeneratorResult;
        JSONHoldingGenerator<HomeAutomationActionResponseListJSON::Generator, RCHandle<HomeAutomationActionResponseListJSON>, HomeAutomationActionResponseListJSON *, bool > fieldGeneratorServerActionSucceeded;
        JSONHoldingGenerator<HomeAutomationActionResponseListJSON::Generator, RCHandle<HomeAutomationActionResponseListJSON>, HomeAutomationActionResponseListJSON *, bool > fieldGeneratorServerActionFailed;
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
            HomeAutomationActionResultJSON *result = new HomeAutomationActionResultJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationActionResultJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationActionResultAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationActionResultJSON *result)
          {
            if (fieldGeneratorResult.have_value)
              {
                result->setResult(fieldGeneratorResult.value.referenced());
                fieldGeneratorResult.have_value = false;
              }
            else if (!(result->hasResult()))
              {
                error("When parsing the object for %what%, the \"Result\" field was missing.");
              }
            if (fieldGeneratorServerActionSucceeded.have_value)
              {
                result->setServerActionSucceeded(fieldGeneratorServerActionSucceeded.value.referenced());
                fieldGeneratorServerActionSucceeded.have_value = false;
              }
            if (fieldGeneratorServerActionFailed.have_value)
              {
                result->setServerActionFailed(fieldGeneratorServerActionFailed.value.referenced());
                fieldGeneratorServerActionFailed.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationActionResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'R':
                    if (strcmp(&(field_name[1]), "esult") == 0)
                        return &fieldGeneratorResult;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "erverAction", 11) == 0)
                      {
                        switch ((unsigned char)(field_name[12]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[13]), "ailed") == 0)
                                    return &fieldGeneratorServerActionFailed;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[13]), "ucceeded") == 0)
                                    return &fieldGeneratorServerActionSucceeded;
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
        Generator(bool ignore_extras = false) : fieldGeneratorResult("field \"Result\" of the HomeAutomationActionResult class", ignore_extras), fieldGeneratorServerActionSucceeded("field \"ServerActionSucceeded\" of the HomeAutomationActionResult class", ignore_extras), fieldGeneratorServerActionFailed("field \"ServerActionFailed\" of the HomeAutomationActionResult class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationActionResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorResult.reset();
            fieldGeneratorServerActionSucceeded.reset();
            fieldGeneratorServerActionFailed.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONACTIONRESULTJSON_H */