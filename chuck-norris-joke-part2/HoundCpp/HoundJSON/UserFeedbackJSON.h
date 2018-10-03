/* file "UserFeedbackJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERFEEDBACKJSON_H
#define USERFEEDBACKJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "UserFeedbackItemJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UserFeedbackJSON : public ReferenceCounted
  {
  private:
    bool flagHasQueryRequestID;
    std::string storeQueryRequestID;
    bool flagHasServerGeneratedID;
    std::string storeServerGeneratedID;
    bool flagHasFeedbackItems;
    std::vector< UserFeedbackItemJSON * > storeFeedbackItems;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserFeedbackJSON(const UserFeedbackJSON &);
    UserFeedbackJSON & operator=(const UserFeedbackJSON &other);

    void  fromJSONQueryRequestID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONServerGeneratedID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFeedbackItems(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserFeedbackJSON(void);
    virtual ~UserFeedbackJSON(void);
    bool  hasQueryRequestID(void) const;
    std::string  getQueryRequestID(void);
    const std::string  getQueryRequestID(void) const;
    bool  hasServerGeneratedID(void) const;
    std::string  getServerGeneratedID(void);
    const std::string  getServerGeneratedID(void) const;
    bool  hasFeedbackItems(void) const;
    size_t  countOfFeedbackItems(void) const;
    UserFeedbackItemJSON *  elementOfFeedbackItems(size_t element_num);
    const UserFeedbackItemJSON *  elementOfFeedbackItems(size_t element_num) const;
    std::vector< UserFeedbackItemJSON * >  getFeedbackItems(void);
    const std::vector< UserFeedbackItemJSON * >  getFeedbackItems(void) const;

    virtual size_t extraUserFeedbackComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserFeedbackComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserFeedbackComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserFeedbackComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserFeedbackLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserFeedbackLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryRequestID(std::string new_value)
      {
        flagHasQueryRequestID = true;
        storeQueryRequestID = new_value;
      }
    void unsetQueryRequestID(void)
      {
        flagHasQueryRequestID = false;
      }
    void setServerGeneratedID(std::string new_value)
      {
        flagHasServerGeneratedID = true;
        storeServerGeneratedID = new_value;
      }
    void unsetServerGeneratedID(void)
      {
        flagHasServerGeneratedID = false;
      }
    void initFeedbackItems(void)
      {
        if (flagHasFeedbackItems)
          {
            for (size_t num2 = 0; num2 < storeFeedbackItems.size(); ++num2)
              {
                storeFeedbackItems[num2]->remove_reference();
              }
          }
        flagHasFeedbackItems = true;
        storeFeedbackItems.clear();
      }
    void appendFeedbackItems(UserFeedbackItemJSON * to_append)
      {
        if (!flagHasFeedbackItems)
          {
            flagHasFeedbackItems = true;
            storeFeedbackItems.clear();
          }
        assert(flagHasFeedbackItems);
        to_append->add_reference();
        storeFeedbackItems.push_back(to_append);
      }
    void unsetFeedbackItems(void)
      {
        if (flagHasFeedbackItems)
          {
            for (size_t num3 = 0; num3 < storeFeedbackItems.size(); ++num3)
              {
                storeFeedbackItems[num3]->remove_reference();
              }
          }
        flagHasFeedbackItems = false;
        storeFeedbackItems.clear();
      }

    virtual void extraUserFeedbackAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserFeedbackSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserFeedbackLookup(key);
        if (old_field == NULL)
          {
            extraUserFeedbackAppendPair(key, new_component);
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
        if (flagHasQueryRequestID)
          {
            handler->start_pair("QueryRequestID");
            handler->string_value(storeQueryRequestID);
          }
        if (flagHasServerGeneratedID)
          {
            handler->start_pair("ServerGeneratedID");
            handler->string_value(storeServerGeneratedID);
          }
        assert(flagHasFeedbackItems);
        handler->start_pair("FeedbackItems");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeFeedbackItems.size(); ++num1)
          {
            storeFeedbackItems[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFeedbackItems()))
          {
            return "When parsing the object for %what%, the \"FeedbackItems\" field was missing.";
          }
        return NULL;
      }

    static UserFeedbackJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserFeedbackJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserFeedbackJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackJSON>, UserFeedbackJSON *, bool> generator("Type UserFeedback", ignore_extras);
            parse_json_value(text, "Text for UserFeedbackJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserFeedbackJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserFeedbackJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackJSON>, UserFeedbackJSON *, bool> generator("Type UserFeedback", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorQueryRequestID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorServerGeneratedID;
        JSONHoldingArrayGenerator<UserFeedbackItemJSON::Generator, RCHandle<UserFeedbackItemJSON>, UserFeedbackItemJSON *, bool > fieldGeneratorFeedbackItems;
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
            UserFeedbackJSON *result = new UserFeedbackJSON();
            assert(result != NULL);
            RCHandle<UserFeedbackJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserFeedbackAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UserFeedbackJSON *result)
          {
            if (fieldGeneratorQueryRequestID.have_value)
              {
                result->setQueryRequestID(fieldGeneratorQueryRequestID.value);
                fieldGeneratorQueryRequestID.have_value = false;
              }
            if (fieldGeneratorServerGeneratedID.have_value)
              {
                result->setServerGeneratedID(fieldGeneratorServerGeneratedID.value);
                fieldGeneratorServerGeneratedID.have_value = false;
              }
            if (fieldGeneratorFeedbackItems.have_value)
              {
                result->initFeedbackItems();
                size_t count = fieldGeneratorFeedbackItems.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFeedbackItems(fieldGeneratorFeedbackItems.value[num].referenced());
                  }
                fieldGeneratorFeedbackItems.value.clear();
                fieldGeneratorFeedbackItems.have_value = false;
              }
            else if (!(result->hasFeedbackItems()))
              {
                error("When parsing the object for %what%, the \"FeedbackItems\" field was missing.");
              }
          }
        virtual void handle_result(UserFeedbackJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "eedbackItems") == 0)
                        return &fieldGeneratorFeedbackItems;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryRequestID") == 0)
                        return &fieldGeneratorQueryRequestID;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "erverGeneratedID") == 0)
                        return &fieldGeneratorServerGeneratedID;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryRequestID("field \"QueryRequestID\" of the UserFeedback class"), fieldGeneratorServerGeneratedID("field \"ServerGeneratedID\" of the UserFeedback class"), fieldGeneratorFeedbackItems("field \"FeedbackItems\" of the UserFeedback class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserFeedback class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryRequestID.reset();
            fieldGeneratorServerGeneratedID.reset();
            fieldGeneratorFeedbackItems.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERFEEDBACKJSON_H */
