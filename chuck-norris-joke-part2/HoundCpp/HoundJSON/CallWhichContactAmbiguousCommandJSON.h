/* file "CallWhichContactAmbiguousCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CALLWHICHCONTACTAMBIGUOUSCOMMANDJSON_H
#define CALLWHICHCONTACTAMBIGUOUSCOMMANDJSON_H

#pragma interface

#include "DisambiguateCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "WhichContactChoicesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CallWhichContactAmbiguousCommandJSON : public DisambiguateCommandJSON
  {
  private:
    bool flagHasChoices;
    WhichContactChoicesJSON * storeChoices;
    bool flagHasUserSpecifiedName;
    std::string storeUserSpecifiedName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CallWhichContactAmbiguousCommandJSON(const CallWhichContactAmbiguousCommandJSON &);
    CallWhichContactAmbiguousCommandJSON & operator=(const CallWhichContactAmbiguousCommandJSON &other);

    JSONValue * extraChoicesToJSON(void) const;
    JSONValue * extraUserSpecifiedNameToJSON(void) const;

    void  fromJSONChoices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserSpecifiedName(JSONValue *json_value, bool ignore_extras = false);


  public:
    CallWhichContactAmbiguousCommandJSON(void);
    virtual ~CallWhichContactAmbiguousCommandJSON(void);
    const char * getDisambiguateCommandKind(void) const;
    bool  hasChoices(void) const;
    WhichContactChoicesJSON *  getChoices(void);
    const WhichContactChoicesJSON *  getChoices(void) const;
    bool  hasUserSpecifiedName(void) const;
    std::string  getUserSpecifiedName(void);
    const std::string  getUserSpecifiedName(void) const;

    virtual size_t extraCallWhichContactAmbiguousCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCallWhichContactAmbiguousCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCallWhichContactAmbiguousCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCallWhichContactAmbiguousCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCallWhichContactAmbiguousCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCallWhichContactAmbiguousCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDisambiguateCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasChoices)
            ++result;
        if (flagHasUserSpecifiedName)
            ++result;
        result += extraCallWhichContactAmbiguousCommandComponentCount();
        return result;
      }
    const char *extraDisambiguateCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return "Choices";
            --remainder;
          }
        if (flagHasUserSpecifiedName)
          {
            if (remainder == 0)
                return "UserSpecifiedName";
            --remainder;
          }
        return extraCallWhichContactAmbiguousCommandComponentKey(remainder);
      }
    JSONValue *extraDisambiguateCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return extraChoicesToJSON();
            --remainder;
          }
        if (flagHasUserSpecifiedName)
          {
            if (remainder == 0)
                return extraUserSpecifiedNameToJSON();
            --remainder;
          }
        return extraCallWhichContactAmbiguousCommandComponentValue(remainder);
      }
    const JSONValue *extraDisambiguateCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return extraChoicesToJSON();
            --remainder;
          }
        if (flagHasUserSpecifiedName)
          {
            if (remainder == 0)
                return extraUserSpecifiedNameToJSON();
            --remainder;
          }
        return extraCallWhichContactAmbiguousCommandComponentValue(remainder);
      }
    JSONValue *extraDisambiguateCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hoices") == 0)
                    return (flagHasChoices ? extraChoicesToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serSpecifiedName") == 0)
                    return (flagHasUserSpecifiedName ? extraUserSpecifiedNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCallWhichContactAmbiguousCommandLookup(field_name);
      }
    const JSONValue *extraDisambiguateCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hoices") == 0)
                    return (flagHasChoices ? extraChoicesToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serSpecifiedName") == 0)
                    return (flagHasUserSpecifiedName ? extraUserSpecifiedNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCallWhichContactAmbiguousCommandLookup(field_name);
      }

    void setChoices(WhichContactChoicesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasChoices)
          {
            storeChoices->remove_reference();
          }
        flagHasChoices = true;
        storeChoices = new_value;
      }
    void unsetChoices(void)
      {
        if (flagHasChoices)
          {
            storeChoices->remove_reference();
          }
        flagHasChoices = false;
      }
    void setUserSpecifiedName(std::string new_value)
      {
        flagHasUserSpecifiedName = true;
        storeUserSpecifiedName = new_value;
      }
    void unsetUserSpecifiedName(void)
      {
        flagHasUserSpecifiedName = false;
      }

    virtual void extraCallWhichContactAmbiguousCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCallWhichContactAmbiguousCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCallWhichContactAmbiguousCommandLookup(key);
        if (old_field == NULL)
          {
            extraCallWhichContactAmbiguousCommandAppendPair(key, new_component);
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
    void extraDisambiguateCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hoices") == 0)
                    {
                    fromJSONChoices(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serSpecifiedName") == 0)
                    {
                    fromJSONUserSpecifiedName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCallWhichContactAmbiguousCommandAppendPair(key, new_component);
      }
    void extraDisambiguateCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hoices") == 0)
                    {
                    fromJSONChoices(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "serSpecifiedName") == 0)
                    {
                    fromJSONUserSpecifiedName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCallWhichContactAmbiguousCommandSetField(key, new_component);
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
        DisambiguateCommandJSON::write_fields_as_json(handler);
        assert(flagHasChoices);
        handler->start_pair("Choices");
        storeChoices->write_as_json(handler);
        assert(flagHasUserSpecifiedName);
        handler->start_pair("UserSpecifiedName");
        handler->string_value(storeUserSpecifiedName);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasChoices()))
          {
            return "When parsing the object for %what%, the \"Choices\" field was missing.";
          }
        if (!(hasUserSpecifiedName()))
          {
            return "When parsing the object for %what%, the \"UserSpecifiedName\" field was missing.";
          }
        return NULL;
      }

    static CallWhichContactAmbiguousCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CallWhichContactAmbiguousCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CallWhichContactAmbiguousCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CallWhichContactAmbiguousCommandJSON>, CallWhichContactAmbiguousCommandJSON *, bool> generator("Type CallWhichContactAmbiguousCommand", ignore_extras);
            parse_json_value(text, "Text for CallWhichContactAmbiguousCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CallWhichContactAmbiguousCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CallWhichContactAmbiguousCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CallWhichContactAmbiguousCommandJSON>, CallWhichContactAmbiguousCommandJSON *, bool> generator("Type CallWhichContactAmbiguousCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DisambiguateCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<WhichContactChoicesJSON::Generator, RCHandle<WhichContactChoicesJSON>, WhichContactChoicesJSON *, bool > fieldGeneratorChoices;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUserSpecifiedName;
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
            if (!(strcmp(getDisambiguateCommandJSONKey().c_str(), "CallWhichContactAmbiguous") == 0))
                throw("The key field has a value other than `CallWhichContactAmbiguous'.");
            CallWhichContactAmbiguousCommandJSON *result = new CallWhichContactAmbiguousCommandJSON();
            assert(result != NULL);
            RCHandle<CallWhichContactAmbiguousCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCallWhichContactAmbiguousCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DisambiguateCommandJSON *new_result)
          {
            handle_result((CallWhichContactAmbiguousCommandJSON *)new_result);
          }
        void finish(CallWhichContactAmbiguousCommandJSON *result)
          {
            if (fieldGeneratorChoices.have_value)
              {
                result->setChoices(fieldGeneratorChoices.value.referenced());
                fieldGeneratorChoices.have_value = false;
              }
            else if (!(result->hasChoices()))
              {
                error("When parsing the object for %what%, the \"Choices\" field was missing.");
              }
            if (fieldGeneratorUserSpecifiedName.have_value)
              {
                result->setUserSpecifiedName(fieldGeneratorUserSpecifiedName.value);
                fieldGeneratorUserSpecifiedName.have_value = false;
              }
            else if (!(result->hasUserSpecifiedName()))
              {
                error("When parsing the object for %what%, the \"UserSpecifiedName\" field was missing.");
              }
            DisambiguateCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CallWhichContactAmbiguousCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "hoices") == 0)
                        return &fieldGeneratorChoices;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serSpecifiedName") == 0)
                        return &fieldGeneratorUserSpecifiedName;
                    break;
                default:
                    break;
              }
            return DisambiguateCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DisambiguateCommandJSON::Generator(ignore_extras), fieldGeneratorChoices("field \"Choices\" of the CallWhichContactAmbiguousCommand class", ignore_extras), fieldGeneratorUserSpecifiedName("field \"UserSpecifiedName\" of the CallWhichContactAmbiguousCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CallWhichContactAmbiguousCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorChoices.reset();
            fieldGeneratorUserSpecifiedName.reset();
            DisambiguateCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CALLWHICHCONTACTAMBIGUOUSCOMMANDJSON_H */
