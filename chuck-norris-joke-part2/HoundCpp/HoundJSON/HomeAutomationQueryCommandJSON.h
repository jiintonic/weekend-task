/* file "HomeAutomationQueryCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONQUERYCOMMANDJSON_H
#define HOMEAUTOMATIONQUERYCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationDeviceSpecifierJSON.h"
#include "HomeAutomationQueryHintJSON.h"
#include "HomeAutomationActionResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationQueryCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasDeviceSpecifier;
    HomeAutomationDeviceSpecifierJSON * storeDeviceSpecifier;
    bool flagHasHint;
    HomeAutomationQueryHintJSON * storeHint;
    bool flagHasQueryResult;
    HomeAutomationActionResultJSON * storeQueryResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationQueryCommandJSON(const HomeAutomationQueryCommandJSON &);
    HomeAutomationQueryCommandJSON & operator=(const HomeAutomationQueryCommandJSON &other);

    JSONValue * extraDeviceSpecifierToJSON(void) const;
    JSONValue * extraHintToJSON(void) const;
    JSONValue * extraQueryResultToJSON(void) const;

    void  fromJSONDeviceSpecifier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQueryResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationQueryCommandJSON(void);
    virtual ~HomeAutomationQueryCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasDeviceSpecifier(void) const;
    HomeAutomationDeviceSpecifierJSON *  getDeviceSpecifier(void);
    const HomeAutomationDeviceSpecifierJSON *  getDeviceSpecifier(void) const;
    bool  hasHint(void) const;
    HomeAutomationQueryHintJSON *  getHint(void);
    const HomeAutomationQueryHintJSON *  getHint(void) const;
    bool  hasQueryResult(void) const;
    HomeAutomationActionResultJSON *  getQueryResult(void);
    const HomeAutomationActionResultJSON *  getQueryResult(void) const;

    virtual size_t extraHomeAutomationQueryCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationQueryCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationQueryCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationQueryCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationQueryCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationQueryCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDeviceSpecifier)
            ++result;
        if (flagHasHint)
            ++result;
        if (flagHasQueryResult)
            ++result;
        result += extraHomeAutomationQueryCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return "DeviceSpecifier";
            --remainder;
          }
        if (flagHasHint)
          {
            if (remainder == 0)
                return "Hint";
            --remainder;
          }
        if (flagHasQueryResult)
          {
            if (remainder == 0)
                return "QueryResult";
            --remainder;
          }
        return extraHomeAutomationQueryCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return extraDeviceSpecifierToJSON();
            --remainder;
          }
        if (flagHasHint)
          {
            if (remainder == 0)
                return extraHintToJSON();
            --remainder;
          }
        if (flagHasQueryResult)
          {
            if (remainder == 0)
                return extraQueryResultToJSON();
            --remainder;
          }
        return extraHomeAutomationQueryCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return extraDeviceSpecifierToJSON();
            --remainder;
          }
        if (flagHasHint)
          {
            if (remainder == 0)
                return extraHintToJSON();
            --remainder;
          }
        if (flagHasQueryResult)
          {
            if (remainder == 0)
                return extraQueryResultToJSON();
            --remainder;
          }
        return extraHomeAutomationQueryCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "eviceSpecifier") == 0)
                    return (flagHasDeviceSpecifier ? extraDeviceSpecifierToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "int") == 0)
                    return (flagHasHint ? extraHintToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryResult") == 0)
                    return (flagHasQueryResult ? extraQueryResultToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHomeAutomationQueryCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "eviceSpecifier") == 0)
                    return (flagHasDeviceSpecifier ? extraDeviceSpecifierToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "int") == 0)
                    return (flagHasHint ? extraHintToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryResult") == 0)
                    return (flagHasQueryResult ? extraQueryResultToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHomeAutomationQueryCommandLookup(field_name);
      }

    void setDeviceSpecifier(HomeAutomationDeviceSpecifierJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeviceSpecifier)
          {
            storeDeviceSpecifier->remove_reference();
          }
        flagHasDeviceSpecifier = true;
        storeDeviceSpecifier = new_value;
      }
    void unsetDeviceSpecifier(void)
      {
        if (flagHasDeviceSpecifier)
          {
            storeDeviceSpecifier->remove_reference();
          }
        flagHasDeviceSpecifier = false;
      }
    void setHint(HomeAutomationQueryHintJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHint)
          {
            storeHint->remove_reference();
          }
        flagHasHint = true;
        storeHint = new_value;
      }
    void unsetHint(void)
      {
        if (flagHasHint)
          {
            storeHint->remove_reference();
          }
        flagHasHint = false;
      }
    void setQueryResult(HomeAutomationActionResultJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasQueryResult)
          {
            storeQueryResult->remove_reference();
          }
        flagHasQueryResult = true;
        storeQueryResult = new_value;
      }
    void unsetQueryResult(void)
      {
        if (flagHasQueryResult)
          {
            storeQueryResult->remove_reference();
          }
        flagHasQueryResult = false;
      }

    virtual void extraHomeAutomationQueryCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationQueryCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationQueryCommandLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationQueryCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "eviceSpecifier") == 0)
                    {
                    fromJSONDeviceSpecifier(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "int") == 0)
                    {
                    fromJSONHint(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryResult") == 0)
                    {
                    fromJSONQueryResult(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHomeAutomationQueryCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "eviceSpecifier") == 0)
                    {
                    fromJSONDeviceSpecifier(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "int") == 0)
                    {
                    fromJSONHint(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryResult") == 0)
                    {
                    fromJSONQueryResult(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHomeAutomationQueryCommandSetField(key, new_component);
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
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasDeviceSpecifier);
        handler->start_pair("DeviceSpecifier");
        storeDeviceSpecifier->write_as_json(handler);
        if (flagHasHint)
          {
            handler->start_pair("Hint");
            storeHint->write_as_json(handler);
          }
        if (flagHasQueryResult)
          {
            handler->start_pair("QueryResult");
            storeQueryResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDeviceSpecifier()))
          {
            return "When parsing the object for %what%, the \"DeviceSpecifier\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationQueryCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationQueryCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationQueryCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationQueryCommandJSON>, HomeAutomationQueryCommandJSON *, bool> generator("Type HomeAutomationQueryCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationQueryCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationQueryCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationQueryCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationQueryCommandJSON>, HomeAutomationQueryCommandJSON *, bool> generator("Type HomeAutomationQueryCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<HomeAutomationDeviceSpecifierJSON::Generator, RCHandle<HomeAutomationDeviceSpecifierJSON>, HomeAutomationDeviceSpecifierJSON *, bool > fieldGeneratorDeviceSpecifier;
        JSONHoldingGenerator<HomeAutomationQueryHintJSON::Generator, RCHandle<HomeAutomationQueryHintJSON>, HomeAutomationQueryHintJSON *, bool > fieldGeneratorHint;
        JSONHoldingGenerator<HomeAutomationActionResultJSON::Generator, RCHandle<HomeAutomationActionResultJSON>, HomeAutomationActionResultJSON *, bool > fieldGeneratorQueryResult;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "HomeAutomationQueryCommand") == 0))
                throw("The key field has a value other than `HomeAutomationQueryCommand'.");
            HomeAutomationQueryCommandJSON *result = new HomeAutomationQueryCommandJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationQueryCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationQueryCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((HomeAutomationQueryCommandJSON *)new_result);
          }
        void finish(HomeAutomationQueryCommandJSON *result)
          {
            if (fieldGeneratorDeviceSpecifier.have_value)
              {
                result->setDeviceSpecifier(fieldGeneratorDeviceSpecifier.value.referenced());
                fieldGeneratorDeviceSpecifier.have_value = false;
              }
            else if (!(result->hasDeviceSpecifier()))
              {
                error("When parsing the object for %what%, the \"DeviceSpecifier\" field was missing.");
              }
            if (fieldGeneratorHint.have_value)
              {
                result->setHint(fieldGeneratorHint.value.referenced());
                fieldGeneratorHint.have_value = false;
              }
            if (fieldGeneratorQueryResult.have_value)
              {
                result->setQueryResult(fieldGeneratorQueryResult.value.referenced());
                fieldGeneratorQueryResult.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationQueryCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "eviceSpecifier") == 0)
                        return &fieldGeneratorDeviceSpecifier;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "int") == 0)
                        return &fieldGeneratorHint;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryResult") == 0)
                        return &fieldGeneratorQueryResult;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorDeviceSpecifier("field \"DeviceSpecifier\" of the HomeAutomationQueryCommand class", ignore_extras), fieldGeneratorHint("field \"Hint\" of the HomeAutomationQueryCommand class", ignore_extras), fieldGeneratorQueryResult("field \"QueryResult\" of the HomeAutomationQueryCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationQueryCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDeviceSpecifier.reset();
            fieldGeneratorHint.reset();
            fieldGeneratorQueryResult.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONQUERYCOMMANDJSON_H */
