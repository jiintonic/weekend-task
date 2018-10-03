/* file "InformationIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef INFORMATIONINTENTJSON_H
#define INFORMATIONINTENTJSON_H

#pragma interface

#include "CommandIntentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "InformationNuggetIntentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class InformationIntentJSON : public CommandIntentJSON
  {
  private:
    bool flagHasInformationNuggets;
    std::vector< InformationNuggetIntentJSON * > storeInformationNuggets;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    InformationIntentJSON(const InformationIntentJSON &);
    InformationIntentJSON & operator=(const InformationIntentJSON &other);

    JSONValue * extraInformationNuggetsToJSON(void) const;

    void  fromJSONInformationNuggets(JSONValue *json_value, bool ignore_extras = false);


  public:
    InformationIntentJSON(void);
    virtual ~InformationIntentJSON(void);
    const char * getCommandIntentKind(void) const;
    bool  hasInformationNuggets(void) const;
    size_t  countOfInformationNuggets(void) const;
    InformationNuggetIntentJSON *  elementOfInformationNuggets(size_t element_num);
    const InformationNuggetIntentJSON *  elementOfInformationNuggets(size_t element_num) const;
    std::vector< InformationNuggetIntentJSON * >  getInformationNuggets(void);
    const std::vector< InformationNuggetIntentJSON * >  getInformationNuggets(void) const;

    virtual size_t extraInformationIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraInformationIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraInformationIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraInformationIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraInformationIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraInformationIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandIntentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasInformationNuggets)
            ++result;
        result += extraInformationIntentComponentCount();
        return result;
      }
    const char *extraCommandIntentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasInformationNuggets)
          {
            if (remainder == 0)
                return "InformationNuggets";
            --remainder;
          }
        return extraInformationIntentComponentKey(remainder);
      }
    JSONValue *extraCommandIntentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasInformationNuggets)
          {
            if (remainder == 0)
                return extraInformationNuggetsToJSON();
            --remainder;
          }
        return extraInformationIntentComponentValue(remainder);
      }
    const JSONValue *extraCommandIntentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasInformationNuggets)
          {
            if (remainder == 0)
                return extraInformationNuggetsToJSON();
            --remainder;
          }
        return extraInformationIntentComponentValue(remainder);
      }
    JSONValue *extraCommandIntentLookup(const char *field_name)
      {
        if (strcmp(field_name, "InformationNuggets") == 0)
            return (flagHasInformationNuggets ? extraInformationNuggetsToJSON() : NULL);
        return extraInformationIntentLookup(field_name);
      }
    const JSONValue *extraCommandIntentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "InformationNuggets") == 0)
            return (flagHasInformationNuggets ? extraInformationNuggetsToJSON() : NULL);
        return extraInformationIntentLookup(field_name);
      }

    void initInformationNuggets(void)
      {
        if (flagHasInformationNuggets)
          {
            for (size_t num2 = 0; num2 < storeInformationNuggets.size(); ++num2)
              {
                storeInformationNuggets[num2]->remove_reference();
              }
          }
        flagHasInformationNuggets = true;
        storeInformationNuggets.clear();
      }
    void appendInformationNuggets(InformationNuggetIntentJSON * to_append)
      {
        if (!flagHasInformationNuggets)
          {
            flagHasInformationNuggets = true;
            storeInformationNuggets.clear();
          }
        assert(flagHasInformationNuggets);
        to_append->add_reference();
        storeInformationNuggets.push_back(to_append);
      }
    void unsetInformationNuggets(void)
      {
        if (flagHasInformationNuggets)
          {
            for (size_t num3 = 0; num3 < storeInformationNuggets.size(); ++num3)
              {
                storeInformationNuggets[num3]->remove_reference();
              }
          }
        flagHasInformationNuggets = false;
        storeInformationNuggets.clear();
      }

    virtual void extraInformationIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraInformationIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraInformationIntentLookup(key);
        if (old_field == NULL)
          {
            extraInformationIntentAppendPair(key, new_component);
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
    void extraCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "InformationNuggets") == 0)
            {
            fromJSONInformationNuggets(new_component, false);
            return;
            }
        extraInformationIntentAppendPair(key, new_component);
      }
    void extraCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "InformationNuggets") == 0)
            {
            fromJSONInformationNuggets(new_component, false);
            return;
            }
        extraInformationIntentSetField(key, new_component);
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
        CommandIntentJSON::write_fields_as_json(handler);
        assert(flagHasInformationNuggets);
        handler->start_pair("InformationNuggets");
        assert(storeInformationNuggets.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeInformationNuggets.size(); ++num1)
          {
            storeInformationNuggets[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasInformationNuggets()))
          {
            return "When parsing the object for %what%, the \"InformationNuggets\" field was missing.";
          }
        return NULL;
      }

    static InformationIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static InformationIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        InformationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<InformationIntentJSON>, InformationIntentJSON *, bool> generator("Type InformationIntent", ignore_extras);
            parse_json_value(text, "Text for InformationIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static InformationIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        InformationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<InformationIntentJSON>, InformationIntentJSON *, bool> generator("Type InformationIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandIntentJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<InformationNuggetIntentJSON::Generator, RCHandle<InformationNuggetIntentJSON>, InformationNuggetIntentJSON *, bool > fieldGeneratorInformationNuggets;
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
            if (!(strcmp(getCommandIntentJSONKey().c_str(), "Information") == 0))
                throw("The key field has a value other than `Information'.");
            InformationIntentJSON *result = new InformationIntentJSON();
            assert(result != NULL);
            RCHandle<InformationIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraInformationIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandIntentJSON *new_result)
          {
            handle_result((InformationIntentJSON *)new_result);
          }
        void finish(InformationIntentJSON *result)
          {
            if (fieldGeneratorInformationNuggets.have_value)
              {
                result->initInformationNuggets();
                size_t count = fieldGeneratorInformationNuggets.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInformationNuggets(fieldGeneratorInformationNuggets.value[num].referenced());
                  }
                fieldGeneratorInformationNuggets.value.clear();
                fieldGeneratorInformationNuggets.have_value = false;
              }
            else if (!(result->hasInformationNuggets()))
              {
                error("When parsing the object for %what%, the \"InformationNuggets\" field was missing.");
              }
            CommandIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(InformationIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "InformationNuggets") == 0)
                return &fieldGeneratorInformationNuggets;
            return CommandIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandIntentJSON::Generator(ignore_extras), fieldGeneratorInformationNuggets("field \"InformationNuggets\" of the InformationIntent class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the InformationIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorInformationNuggets.reset();
            CommandIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* INFORMATIONINTENTJSON_H */
