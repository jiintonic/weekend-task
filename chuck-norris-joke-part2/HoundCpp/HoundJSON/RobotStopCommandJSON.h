/* file "RobotStopCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTSTOPCOMMANDJSON_H
#define ROBOTSTOPCOMMANDJSON_H

#pragma interface

#include "RobotCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotStopCommandJSON : public RobotCommandJSON
  {
  public:
    enum TypeScope
      {
        Scope_all,
        Scope_last,
        Scope_movement
      };

    static TypeScope  stringToScope(const char *chars);
    static const char * stringFromScope(TypeScope the_enum);

  private:
    bool flagHasAlreadyStoppedResult;
    DynamicResponseJSON * storeAlreadyStoppedResult;
    bool flagHasScope;
    TypeScope storeScope;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotStopCommandJSON(const RobotStopCommandJSON &);
    RobotStopCommandJSON & operator=(const RobotStopCommandJSON &other);

    JSONValue * extraAlreadyStoppedResultToJSON(void) const;
    JSONValue * extraScopeToJSON(void) const;

    void  fromJSONAlreadyStoppedResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScope(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotStopCommandJSON(void);
    virtual ~RobotStopCommandJSON(void);
    const char * getRobotCommandKind(void) const;
    bool  hasAlreadyStoppedResult(void) const;
    DynamicResponseJSON *  getAlreadyStoppedResult(void);
    const DynamicResponseJSON *  getAlreadyStoppedResult(void) const;
    bool  hasScope(void) const;
    TypeScope  getScope(void);
    const TypeScope  getScope(void) const;
    const char * getScopeAsChars(void) const;
    std::string  getScopeAsString(void) const;

    virtual size_t extraRobotStopCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotStopCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotStopCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotStopCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotStopCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotStopCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRobotCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAlreadyStoppedResult)
            ++result;
        if (flagHasScope)
            ++result;
        result += extraRobotStopCommandComponentCount();
        return result;
      }
    const char *extraRobotCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAlreadyStoppedResult)
          {
            if (remainder == 0)
                return "AlreadyStoppedResult";
            --remainder;
          }
        if (flagHasScope)
          {
            if (remainder == 0)
                return "Scope";
            --remainder;
          }
        return extraRobotStopCommandComponentKey(remainder);
      }
    JSONValue *extraRobotCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAlreadyStoppedResult)
          {
            if (remainder == 0)
                return extraAlreadyStoppedResultToJSON();
            --remainder;
          }
        if (flagHasScope)
          {
            if (remainder == 0)
                return extraScopeToJSON();
            --remainder;
          }
        return extraRobotStopCommandComponentValue(remainder);
      }
    const JSONValue *extraRobotCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAlreadyStoppedResult)
          {
            if (remainder == 0)
                return extraAlreadyStoppedResultToJSON();
            --remainder;
          }
        if (flagHasScope)
          {
            if (remainder == 0)
                return extraScopeToJSON();
            --remainder;
          }
        return extraRobotStopCommandComponentValue(remainder);
      }
    JSONValue *extraRobotCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "lreadyStoppedResult") == 0)
                    return (flagHasAlreadyStoppedResult ? extraAlreadyStoppedResultToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "cope") == 0)
                    return (flagHasScope ? extraScopeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraRobotStopCommandLookup(field_name);
      }
    const JSONValue *extraRobotCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "lreadyStoppedResult") == 0)
                    return (flagHasAlreadyStoppedResult ? extraAlreadyStoppedResultToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "cope") == 0)
                    return (flagHasScope ? extraScopeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraRobotStopCommandLookup(field_name);
      }

    void setAlreadyStoppedResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAlreadyStoppedResult)
          {
            storeAlreadyStoppedResult->remove_reference();
          }
        flagHasAlreadyStoppedResult = true;
        storeAlreadyStoppedResult = new_value;
      }
    void unsetAlreadyStoppedResult(void)
      {
        if (flagHasAlreadyStoppedResult)
          {
            storeAlreadyStoppedResult->remove_reference();
          }
        flagHasAlreadyStoppedResult = false;
      }
    void setScope(TypeScope new_value)
      {
        flagHasScope = true;
        storeScope = new_value;
      }
    void setScope(const char *chars)
      {
        setScope(stringToScope(chars));
      }
    void setScope(std::string the_string)
      {
        setScope(stringToScope(the_string.c_str()));
      }
    void unsetScope(void)
      {
        flagHasScope = false;
      }

    virtual void extraRobotStopCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotStopCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotStopCommandLookup(key);
        if (old_field == NULL)
          {
            extraRobotStopCommandAppendPair(key, new_component);
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
    void extraRobotCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "lreadyStoppedResult") == 0)
                    {
                    fromJSONAlreadyStoppedResult(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "cope") == 0)
                    {
                    fromJSONScope(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraRobotStopCommandAppendPair(key, new_component);
      }
    void extraRobotCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "lreadyStoppedResult") == 0)
                    {
                    fromJSONAlreadyStoppedResult(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "cope") == 0)
                    {
                    fromJSONScope(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraRobotStopCommandSetField(key, new_component);
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
        RobotCommandJSON::write_fields_as_json(handler);
        if (flagHasAlreadyStoppedResult)
          {
            handler->start_pair("AlreadyStoppedResult");
            storeAlreadyStoppedResult->write_as_json(handler);
          }
        assert(flagHasScope);
        handler->start_pair("Scope");
        switch (storeScope)
          {
            case Scope_all:
                handler->string_value("all");
                break;
            case Scope_last:
                handler->string_value("last");
                break;
            case Scope_movement:
                handler->string_value("movement");
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasScope()))
          {
            return "When parsing the object for %what%, the \"Scope\" field was missing.";
          }
        return NULL;
      }

    static RobotStopCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotStopCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotStopCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotStopCommandJSON>, RobotStopCommandJSON *, bool> generator("Type RobotStopCommand", ignore_extras);
            parse_json_value(text, "Text for RobotStopCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotStopCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotStopCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotStopCommandJSON>, RobotStopCommandJSON *, bool> generator("Type RobotStopCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RobotCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAlreadyStoppedResult;
    class FieldGeneratorScope : public JSONStringGenerator
          {
          protected:
            FieldGeneratorScope(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorScope(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToScope(result));
              }
            virtual void handle_result(TypeScope result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorScope, TypeScope, TypeScope > fieldGeneratorScope;
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
            if (!(strcmp(getRobotCommandJSONKey().c_str(), "StopCommand") == 0))
                throw("The key field has a value other than `StopCommand'.");
            RobotStopCommandJSON *result = new RobotStopCommandJSON();
            assert(result != NULL);
            RCHandle<RobotStopCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotStopCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RobotCommandJSON *new_result)
          {
            handle_result((RobotStopCommandJSON *)new_result);
          }
        void finish(RobotStopCommandJSON *result)
          {
            if (fieldGeneratorAlreadyStoppedResult.have_value)
              {
                result->setAlreadyStoppedResult(fieldGeneratorAlreadyStoppedResult.value.referenced());
                fieldGeneratorAlreadyStoppedResult.have_value = false;
              }
            if (fieldGeneratorScope.have_value)
              {
                result->setScope(fieldGeneratorScope.value);
                fieldGeneratorScope.have_value = false;
              }
            else if (!(result->hasScope()))
              {
                error("When parsing the object for %what%, the \"Scope\" field was missing.");
              }
            RobotCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(RobotStopCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "lreadyStoppedResult") == 0)
                        return &fieldGeneratorAlreadyStoppedResult;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "cope") == 0)
                        return &fieldGeneratorScope;
                    break;
                default:
                    break;
              }
            return RobotCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RobotCommandJSON::Generator(ignore_extras), fieldGeneratorAlreadyStoppedResult("field \"AlreadyStoppedResult\" of the RobotStopCommand class", ignore_extras), fieldGeneratorScope("field \"Scope\" of the RobotStopCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotStopCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAlreadyStoppedResult.reset();
            fieldGeneratorScope.reset();
            RobotCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTSTOPCOMMANDJSON_H */
