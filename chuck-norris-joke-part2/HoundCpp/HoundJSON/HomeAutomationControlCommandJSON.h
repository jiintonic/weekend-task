/* file "HomeAutomationControlCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONCONTROLCOMMANDJSON_H
#define HOMEAUTOMATIONCONTROLCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "HomeAutomationOperationJSON.h"
#include "HomeAutomationDeviceSpecifierJSON.h"
#include "HomeAutomationActionResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationControlCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasOperation;
    HomeAutomationOperationJSON * storeOperation;
    bool flagHasDeviceSpecifier;
    HomeAutomationDeviceSpecifierJSON * storeDeviceSpecifier;
    bool flagHasControlResult;
    HomeAutomationActionResultJSON * storeControlResult;

    HomeAutomationControlCommandJSON(const HomeAutomationControlCommandJSON &);
    HomeAutomationControlCommandJSON & operator=(const HomeAutomationControlCommandJSON &other);

    JSONValue * extraOperationToJSON(void) const;
    JSONValue * extraDeviceSpecifierToJSON(void) const;
    JSONValue * extraControlResultToJSON(void) const;

    void  fromJSONOperation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeviceSpecifier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONControlResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationControlCommandJSON(void);
    virtual ~HomeAutomationControlCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getHomeAutomationControlCommandKind(void) const = 0;
    bool  hasOperation(void) const;
    HomeAutomationOperationJSON *  getOperation(void);
    const HomeAutomationOperationJSON *  getOperation(void) const;
    HomeAutomationOperationJSON::TypeValue  getOperationValue(void);
    const HomeAutomationOperationJSON::TypeValue  getOperationValue(void) const;
    const char * getOperationAsChars(void) const;
    std::string  getOperationAsString(void) const;
    bool  hasDeviceSpecifier(void) const;
    HomeAutomationDeviceSpecifierJSON *  getDeviceSpecifier(void);
    const HomeAutomationDeviceSpecifierJSON *  getDeviceSpecifier(void) const;
    bool  hasControlResult(void) const;
    HomeAutomationActionResultJSON *  getControlResult(void);
    const HomeAutomationActionResultJSON *  getControlResult(void) const;

    virtual size_t extraHomeAutomationControlCommandComponentCount(void) const = 0;
    virtual const char *extraHomeAutomationControlCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraHomeAutomationControlCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraHomeAutomationControlCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasOperation)
            ++result;
        if (flagHasDeviceSpecifier)
            ++result;
        if (flagHasControlResult)
            ++result;
        result += extraHomeAutomationControlCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "HomeAutomationControlCommandKind";
        size_t remainder = (component_num - 1);
        if (flagHasOperation)
          {
            if (remainder == 0)
                return "Operation";
            --remainder;
          }
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return "DeviceSpecifier";
            --remainder;
          }
        if (flagHasControlResult)
          {
            if (remainder == 0)
                return "ControlResult";
            --remainder;
          }
        return extraHomeAutomationControlCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getHomeAutomationControlCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasOperation)
          {
            if (remainder == 0)
                return extraOperationToJSON();
            --remainder;
          }
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return extraDeviceSpecifierToJSON();
            --remainder;
          }
        if (flagHasControlResult)
          {
            if (remainder == 0)
                return extraControlResultToJSON();
            --remainder;
          }
        return extraHomeAutomationControlCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getHomeAutomationControlCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasOperation)
          {
            if (remainder == 0)
                return extraOperationToJSON();
            --remainder;
          }
        if (flagHasDeviceSpecifier)
          {
            if (remainder == 0)
                return extraDeviceSpecifierToJSON();
            --remainder;
          }
        if (flagHasControlResult)
          {
            if (remainder == 0)
                return extraControlResultToJSON();
            --remainder;
          }
        return extraHomeAutomationControlCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontrolResult") == 0)
                    return (flagHasControlResult ? extraControlResultToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "eviceSpecifier") == 0)
                    return (flagHasDeviceSpecifier ? extraDeviceSpecifierToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "omeAutomationControlCommandKind") == 0)
                    return new JSONStringValue(getHomeAutomationControlCommandKind());
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "peration") == 0)
                    return (flagHasOperation ? extraOperationToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHomeAutomationControlCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontrolResult") == 0)
                    return (flagHasControlResult ? extraControlResultToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "eviceSpecifier") == 0)
                    return (flagHasDeviceSpecifier ? extraDeviceSpecifierToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "omeAutomationControlCommandKind") == 0)
                    return new JSONStringValue(getHomeAutomationControlCommandKind());
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "peration") == 0)
                    return (flagHasOperation ? extraOperationToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHomeAutomationControlCommandLookup(field_name);
      }

    void setOperation(HomeAutomationOperationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOperation)
          {
            storeOperation->remove_reference();
          }
        flagHasOperation = true;
        storeOperation = new_value;
      }
    void setOperation(HomeAutomationOperationJSON::TypeValue new_value)
      {
        setOperation(new HomeAutomationOperationJSON(new_value));
      }
    void setOperation(const char *chars)
      {
        HomeAutomationOperationJSON::TypeValueKnownValues known = HomeAutomationOperationJSON::stringToValue(chars);
        HomeAutomationOperationJSON::TypeValue new_value;
        if (known == HomeAutomationOperationJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setOperation(new_value);
      }
    void setOperation(std::string the_string)
      {
        setOperation(the_string.c_str());
      }
    void unsetOperation(void)
      {
        if (flagHasOperation)
          {
            storeOperation->remove_reference();
          }
        flagHasOperation = false;
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
    void setControlResult(HomeAutomationActionResultJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasControlResult)
          {
            storeControlResult->remove_reference();
          }
        flagHasControlResult = true;
        storeControlResult = new_value;
      }
    void unsetControlResult(void)
      {
        if (flagHasControlResult)
          {
            storeControlResult->remove_reference();
          }
        flagHasControlResult = false;
      }

    virtual void extraHomeAutomationControlCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraHomeAutomationControlCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ontrolResult") == 0)
                    {
                    fromJSONControlResult(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "eviceSpecifier") == 0)
                    {
                    fromJSONDeviceSpecifier(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "omeAutomationControlCommandKind") == 0)
                    return;
                break;
            case 'O':
                if (strcmp(&(key[1]), "peration") == 0)
                    {
                    fromJSONOperation(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHomeAutomationControlCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ontrolResult") == 0)
                    {
                    fromJSONControlResult(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "eviceSpecifier") == 0)
                    {
                    fromJSONDeviceSpecifier(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "omeAutomationControlCommandKind") == 0)
                    return;
                break;
            case 'O':
                if (strcmp(&(key[1]), "peration") == 0)
                    {
                    fromJSONOperation(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHomeAutomationControlCommandSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        handler->pair("HomeAutomationControlCommandKind", getHomeAutomationControlCommandKind());
        assert(flagHasOperation);
        handler->start_pair("Operation");
        storeOperation->write_as_json(handler);
        assert(flagHasDeviceSpecifier);
        handler->start_pair("DeviceSpecifier");
        storeDeviceSpecifier->write_as_json(handler);
        if (flagHasControlResult)
          {
            handler->start_pair("ControlResult");
            storeControlResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOperation()))
          {
            return "When parsing the object for %what%, the \"Operation\" field was missing.";
          }
        if (!(hasDeviceSpecifier()))
          {
            return "When parsing the object for %what%, the \"DeviceSpecifier\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationControlCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationControlCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationControlCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationControlCommandJSON>, HomeAutomationControlCommandJSON *, bool> generator("Type HomeAutomationControlCommand", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationControlCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationControlCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationControlCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationControlCommandJSON>, HomeAutomationControlCommandJSON *, bool> generator("Type HomeAutomationControlCommand", ignore_extras);
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
        JSONHoldingGenerator<HomeAutomationOperationJSON::Generator, RCHandle<HomeAutomationOperationJSON>, HomeAutomationOperationJSON *, bool > fieldGeneratorOperation;
        JSONHoldingGenerator<HomeAutomationDeviceSpecifierJSON::Generator, RCHandle<HomeAutomationDeviceSpecifierJSON>, HomeAutomationDeviceSpecifierJSON *, bool > fieldGeneratorDeviceSpecifier;
        JSONHoldingGenerator<HomeAutomationActionResultJSON::Generator, RCHandle<HomeAutomationActionResultJSON>, HomeAutomationActionResultJSON *, bool > fieldGeneratorControlResult;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `HomeAutomationControlCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "HomeAutomationControlCommand") == 0))
                throw("The key field has a value other than `HomeAutomationControlCommand'.");
            HomeAutomationControlCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<HomeAutomationControlCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationControlCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getHomeAutomationControlCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `HomeAutomationControlCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((HomeAutomationControlCommandJSON *)new_result);
          }
        void finish(HomeAutomationControlCommandJSON *result)
          {
            if (fieldGeneratorOperation.have_value)
              {
                result->setOperation(fieldGeneratorOperation.value.referenced());
                fieldGeneratorOperation.have_value = false;
              }
            else if (!(result->hasOperation()))
              {
                error("When parsing the object for %what%, the \"Operation\" field was missing.");
              }
            if (fieldGeneratorDeviceSpecifier.have_value)
              {
                result->setDeviceSpecifier(fieldGeneratorDeviceSpecifier.value.referenced());
                fieldGeneratorDeviceSpecifier.have_value = false;
              }
            else if (!(result->hasDeviceSpecifier()))
              {
                error("When parsing the object for %what%, the \"DeviceSpecifier\" field was missing.");
              }
            if (fieldGeneratorControlResult.have_value)
              {
                result->setControlResult(fieldGeneratorControlResult.value.referenced());
                fieldGeneratorControlResult.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationControlCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontrolResult") == 0)
                        return &fieldGeneratorControlResult;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "eviceSpecifier") == 0)
                        return &fieldGeneratorDeviceSpecifier;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "omeAutomationControlCommandKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "peration") == 0)
                        return &fieldGeneratorOperation;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorOperation("field \"Operation\" of the HomeAutomationControlCommand class", ignore_extras), fieldGeneratorDeviceSpecifier("field \"DeviceSpecifier\" of the HomeAutomationControlCommand class", ignore_extras), fieldGeneratorControlResult("field \"ControlResult\" of the HomeAutomationControlCommand class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"HomeAutomationControlCommandKind\" of the HomeAutomationControlCommand class")
          {
            set_what("the HomeAutomationControlCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOperation.reset();
            fieldGeneratorDeviceSpecifier.reset();
            fieldGeneratorControlResult.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static HomeAutomationControlCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* HOMEAUTOMATIONCONTROLCOMMANDJSON_H */
