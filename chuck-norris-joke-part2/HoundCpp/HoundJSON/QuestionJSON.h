/* file "QuestionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef QUESTIONJSON_H
#define QUESTIONJSON_H

#pragma interface

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


class QuestionJSON : public ReferenceCounted
  {
  private:
    bool flagHasQuestion;
    std::string storeQuestion;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    QuestionJSON(const QuestionJSON &);
    QuestionJSON & operator=(const QuestionJSON &other);

    void  fromJSONQuestion(JSONValue *json_value, bool ignore_extras = false);


  public:
    QuestionJSON(void);
    virtual ~QuestionJSON(void);
    bool  hasQuestion(void) const;
    std::string  getQuestion(void);
    const std::string  getQuestion(void) const;

    virtual size_t extraQuestionComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraQuestionComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraQuestionComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraQuestionComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraQuestionLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraQuestionLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQuestion(std::string new_value)
      {
        flagHasQuestion = true;
        storeQuestion = new_value;
      }
    void unsetQuestion(void)
      {
        flagHasQuestion = false;
      }

    virtual void extraQuestionAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraQuestionSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraQuestionLookup(key);
        if (old_field == NULL)
          {
            extraQuestionAppendPair(key, new_component);
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
        assert(flagHasQuestion);
        handler->start_pair("Question");
        handler->string_value(storeQuestion);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQuestion()))
          {
            return "When parsing the object for %what%, the \"Question\" field was missing.";
          }
        return NULL;
      }

    static QuestionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static QuestionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        QuestionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<QuestionJSON>, QuestionJSON *, bool> generator("Type Question", ignore_extras);
            parse_json_value(text, "Text for QuestionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static QuestionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        QuestionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<QuestionJSON>, QuestionJSON *, bool> generator("Type Question", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorQuestion;
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
            QuestionJSON *result = new QuestionJSON();
            assert(result != NULL);
            RCHandle<QuestionJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraQuestionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(QuestionJSON *result)
          {
            if (fieldGeneratorQuestion.have_value)
              {
                result->setQuestion(fieldGeneratorQuestion.value);
                fieldGeneratorQuestion.have_value = false;
              }
            else if (!(result->hasQuestion()))
              {
                error("When parsing the object for %what%, the \"Question\" field was missing.");
              }
          }
        virtual void handle_result(QuestionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Question") == 0)
                return &fieldGeneratorQuestion;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQuestion("field \"Question\" of the Question class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Question class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQuestion.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* QUESTIONJSON_H */
