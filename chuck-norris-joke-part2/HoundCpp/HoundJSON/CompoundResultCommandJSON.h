/* file "CompoundResultCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMPOUNDRESULTCOMMANDJSON_H
#define COMPOUNDRESULTCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "ResultClauseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CompoundResultCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasResults;
    std::vector< ResultClauseJSON * > storeResults;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CompoundResultCommandJSON(const CompoundResultCommandJSON &);
    CompoundResultCommandJSON & operator=(const CompoundResultCommandJSON &other);

    JSONValue * extraResultsToJSON(void) const;

    void  fromJSONResults(JSONValue *json_value, bool ignore_extras = false);


  public:
    CompoundResultCommandJSON(void);
    virtual ~CompoundResultCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasResults(void) const;
    size_t  countOfResults(void) const;
    ResultClauseJSON *  elementOfResults(size_t element_num);
    const ResultClauseJSON *  elementOfResults(size_t element_num) const;
    std::vector< ResultClauseJSON * >  getResults(void);
    const std::vector< ResultClauseJSON * >  getResults(void) const;

    virtual size_t extraCompoundResultCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCompoundResultCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCompoundResultCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCompoundResultCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCompoundResultCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCompoundResultCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasResults)
            ++result;
        result += extraCompoundResultCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasResults)
          {
            if (remainder == 0)
                return "Results";
            --remainder;
          }
        return extraCompoundResultCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasResults)
          {
            if (remainder == 0)
                return extraResultsToJSON();
            --remainder;
          }
        return extraCompoundResultCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasResults)
          {
            if (remainder == 0)
                return extraResultsToJSON();
            --remainder;
          }
        return extraCompoundResultCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "Results") == 0)
            return (flagHasResults ? extraResultsToJSON() : NULL);
        return extraCompoundResultCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Results") == 0)
            return (flagHasResults ? extraResultsToJSON() : NULL);
        return extraCompoundResultCommandLookup(field_name);
      }

    void initResults(void)
      {
        if (flagHasResults)
          {
            for (size_t num2 = 0; num2 < storeResults.size(); ++num2)
              {
                storeResults[num2]->remove_reference();
              }
          }
        flagHasResults = true;
        storeResults.clear();
      }
    void appendResults(ResultClauseJSON * to_append)
      {
        if (!flagHasResults)
          {
            flagHasResults = true;
            storeResults.clear();
          }
        assert(flagHasResults);
        to_append->add_reference();
        storeResults.push_back(to_append);
      }
    void unsetResults(void)
      {
        if (flagHasResults)
          {
            for (size_t num3 = 0; num3 < storeResults.size(); ++num3)
              {
                storeResults[num3]->remove_reference();
              }
          }
        flagHasResults = false;
        storeResults.clear();
      }

    virtual void extraCompoundResultCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCompoundResultCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCompoundResultCommandLookup(key);
        if (old_field == NULL)
          {
            extraCompoundResultCommandAppendPair(key, new_component);
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
        if (strcmp(key, "Results") == 0)
            {
            fromJSONResults(new_component, false);
            return;
            }
        extraCompoundResultCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Results") == 0)
            {
            fromJSONResults(new_component, false);
            return;
            }
        extraCompoundResultCommandSetField(key, new_component);
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
        assert(flagHasResults);
        handler->start_pair("Results");
        assert(storeResults.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeResults.size(); ++num1)
          {
            storeResults[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasResults()))
          {
            return "When parsing the object for %what%, the \"Results\" field was missing.";
          }
        return NULL;
      }

    static CompoundResultCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CompoundResultCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CompoundResultCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CompoundResultCommandJSON>, CompoundResultCommandJSON *, bool> generator("Type CompoundResultCommand", ignore_extras);
            parse_json_value(text, "Text for CompoundResultCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CompoundResultCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CompoundResultCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CompoundResultCommandJSON>, CompoundResultCommandJSON *, bool> generator("Type CompoundResultCommand", ignore_extras);
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
        JSONHoldingArrayGenerator<ResultClauseJSON::Generator, RCHandle<ResultClauseJSON>, ResultClauseJSON *, bool > fieldGeneratorResults;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "CompoundResultCommand") == 0))
                throw("The key field has a value other than `CompoundResultCommand'.");
            CompoundResultCommandJSON *result = new CompoundResultCommandJSON();
            assert(result != NULL);
            RCHandle<CompoundResultCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCompoundResultCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((CompoundResultCommandJSON *)new_result);
          }
        void finish(CompoundResultCommandJSON *result)
          {
            if (fieldGeneratorResults.have_value)
              {
                result->initResults();
                size_t count = fieldGeneratorResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendResults(fieldGeneratorResults.value[num].referenced());
                  }
                fieldGeneratorResults.value.clear();
                fieldGeneratorResults.have_value = false;
              }
            else if (!(result->hasResults()))
              {
                error("When parsing the object for %what%, the \"Results\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(CompoundResultCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Results") == 0)
                return &fieldGeneratorResults;
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorResults("field \"Results\" of the CompoundResultCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CompoundResultCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorResults.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COMPOUNDRESULTCOMMANDJSON_H */
