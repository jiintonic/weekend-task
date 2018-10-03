/* file "UserFeedbackFreeformTextJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERFEEDBACKFREEFORMTEXTJSON_H
#define USERFEEDBACKFREEFORMTEXTJSON_H

#pragma interface

#include "UserFeedbackItemJSON.h"
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


class UserFeedbackFreeformTextJSON : public UserFeedbackItemJSON
  {
  private:
    bool flagHasAnswer;
    std::string storeAnswer;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserFeedbackFreeformTextJSON(const UserFeedbackFreeformTextJSON &);
    UserFeedbackFreeformTextJSON & operator=(const UserFeedbackFreeformTextJSON &other);

    JSONValue * extraAnswerToJSON(void) const;

    void  fromJSONAnswer(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserFeedbackFreeformTextJSON(void);
    virtual ~UserFeedbackFreeformTextJSON(void);
    const char * getFeedbackKind(void) const;
    bool  hasAnswer(void) const;
    std::string  getAnswer(void);
    const std::string  getAnswer(void) const;

    virtual size_t extraUserFeedbackFreeformTextComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserFeedbackFreeformTextComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserFeedbackFreeformTextComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserFeedbackFreeformTextComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserFeedbackFreeformTextLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserFeedbackFreeformTextLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUserFeedbackItemComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAnswer)
            ++result;
        result += extraUserFeedbackFreeformTextComponentCount();
        return result;
      }
    const char *extraUserFeedbackItemComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAnswer)
          {
            if (remainder == 0)
                return "Answer";
            --remainder;
          }
        return extraUserFeedbackFreeformTextComponentKey(remainder);
      }
    JSONValue *extraUserFeedbackItemComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAnswer)
          {
            if (remainder == 0)
                return extraAnswerToJSON();
            --remainder;
          }
        return extraUserFeedbackFreeformTextComponentValue(remainder);
      }
    const JSONValue *extraUserFeedbackItemComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAnswer)
          {
            if (remainder == 0)
                return extraAnswerToJSON();
            --remainder;
          }
        return extraUserFeedbackFreeformTextComponentValue(remainder);
      }
    JSONValue *extraUserFeedbackItemLookup(const char *field_name)
      {
        if (strcmp(field_name, "Answer") == 0)
            return (flagHasAnswer ? extraAnswerToJSON() : NULL);
        return extraUserFeedbackFreeformTextLookup(field_name);
      }
    const JSONValue *extraUserFeedbackItemLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Answer") == 0)
            return (flagHasAnswer ? extraAnswerToJSON() : NULL);
        return extraUserFeedbackFreeformTextLookup(field_name);
      }

    void setAnswer(std::string new_value)
      {
        flagHasAnswer = true;
        storeAnswer = new_value;
      }
    void unsetAnswer(void)
      {
        flagHasAnswer = false;
      }

    virtual void extraUserFeedbackFreeformTextAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserFeedbackFreeformTextSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserFeedbackFreeformTextLookup(key);
        if (old_field == NULL)
          {
            extraUserFeedbackFreeformTextAppendPair(key, new_component);
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
    void extraUserFeedbackItemAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Answer") == 0)
            {
            fromJSONAnswer(new_component, false);
            return;
            }
        extraUserFeedbackFreeformTextAppendPair(key, new_component);
      }
    void extraUserFeedbackItemSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Answer") == 0)
            {
            fromJSONAnswer(new_component, false);
            return;
            }
        extraUserFeedbackFreeformTextSetField(key, new_component);
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
        UserFeedbackItemJSON::write_fields_as_json(handler);
        assert(flagHasAnswer);
        handler->start_pair("Answer");
        handler->string_value(storeAnswer);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAnswer()))
          {
            return "When parsing the object for %what%, the \"Answer\" field was missing.";
          }
        return NULL;
      }

    static UserFeedbackFreeformTextJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserFeedbackFreeformTextJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserFeedbackFreeformTextJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackFreeformTextJSON>, UserFeedbackFreeformTextJSON *, bool> generator("Type UserFeedbackFreeformText", ignore_extras);
            parse_json_value(text, "Text for UserFeedbackFreeformTextJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserFeedbackFreeformTextJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserFeedbackFreeformTextJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackFreeformTextJSON>, UserFeedbackFreeformTextJSON *, bool> generator("Type UserFeedbackFreeformText", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UserFeedbackItemJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAnswer;
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
            if (!(strcmp(getUserFeedbackItemJSONKey().c_str(), "FreeformText") == 0))
                throw("The key field has a value other than `FreeformText'.");
            UserFeedbackFreeformTextJSON *result = new UserFeedbackFreeformTextJSON();
            assert(result != NULL);
            RCHandle<UserFeedbackFreeformTextJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserFeedbackFreeformTextAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UserFeedbackItemJSON *new_result)
          {
            handle_result((UserFeedbackFreeformTextJSON *)new_result);
          }
        void finish(UserFeedbackFreeformTextJSON *result)
          {
            if (fieldGeneratorAnswer.have_value)
              {
                result->setAnswer(fieldGeneratorAnswer.value);
                fieldGeneratorAnswer.have_value = false;
              }
            else if (!(result->hasAnswer()))
              {
                error("When parsing the object for %what%, the \"Answer\" field was missing.");
              }
            UserFeedbackItemJSON::Generator::finish(result);
          }
        virtual void handle_result(UserFeedbackFreeformTextJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Answer") == 0)
                return &fieldGeneratorAnswer;
            return UserFeedbackItemJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UserFeedbackItemJSON::Generator(ignore_extras), fieldGeneratorAnswer("field \"Answer\" of the UserFeedbackFreeformText class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserFeedbackFreeformText class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAnswer.reset();
            UserFeedbackItemJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERFEEDBACKFREEFORMTEXTJSON_H */
