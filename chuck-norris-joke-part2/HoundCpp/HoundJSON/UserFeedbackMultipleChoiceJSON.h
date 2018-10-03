/* file "UserFeedbackMultipleChoiceJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERFEEDBACKMULTIPLECHOICEJSON_H
#define USERFEEDBACKMULTIPLECHOICEJSON_H

#pragma interface

#include "UserFeedbackItemJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UserFeedbackMultipleChoiceJSON : public UserFeedbackItemJSON
  {
  private:
    bool flagHasChoices;
    std::vector< std::string > storeChoices;
    bool flagHasChoiceLabels;
    std::vector< std::string > storeChoiceLabels;
    bool flagHasAnswers;
    std::vector< OInteger > storeAnswers;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserFeedbackMultipleChoiceJSON(const UserFeedbackMultipleChoiceJSON &);
    UserFeedbackMultipleChoiceJSON & operator=(const UserFeedbackMultipleChoiceJSON &other);

    JSONValue * extraChoicesToJSON(void) const;
    JSONValue * extraChoiceLabelsToJSON(void) const;
    JSONValue * extraAnswersToJSON(void) const;

    void  fromJSONChoices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChoiceLabels(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAnswers(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserFeedbackMultipleChoiceJSON(void);
    virtual ~UserFeedbackMultipleChoiceJSON(void);
    const char * getFeedbackKind(void) const;
    bool  hasChoices(void) const;
    size_t  countOfChoices(void) const;
    std::string  elementOfChoices(size_t element_num);
    const std::string  elementOfChoices(size_t element_num) const;
    std::vector< std::string >  getChoices(void);
    const std::vector< std::string >  getChoices(void) const;
    bool  hasChoiceLabels(void) const;
    size_t  countOfChoiceLabels(void) const;
    std::string  elementOfChoiceLabels(size_t element_num);
    const std::string  elementOfChoiceLabels(size_t element_num) const;
    std::vector< std::string >  getChoiceLabels(void);
    const std::vector< std::string >  getChoiceLabels(void) const;
    bool  hasAnswers(void) const;
    size_t  countOfAnswers(void) const;
    OInteger  elementOfAnswers(size_t element_num);
    const OInteger  elementOfAnswers(size_t element_num) const;
    std::vector< OInteger >  getAnswers(void);
    const std::vector< OInteger >  getAnswers(void) const;

    virtual size_t extraUserFeedbackMultipleChoiceComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserFeedbackMultipleChoiceComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserFeedbackMultipleChoiceComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserFeedbackMultipleChoiceComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserFeedbackMultipleChoiceLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserFeedbackMultipleChoiceLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUserFeedbackItemComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasChoices)
            ++result;
        if (flagHasChoiceLabels)
            ++result;
        if (flagHasAnswers)
            ++result;
        result += extraUserFeedbackMultipleChoiceComponentCount();
        return result;
      }
    const char *extraUserFeedbackItemComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return "Choices";
            --remainder;
          }
        if (flagHasChoiceLabels)
          {
            if (remainder == 0)
                return "ChoiceLabels";
            --remainder;
          }
        if (flagHasAnswers)
          {
            if (remainder == 0)
                return "Answers";
            --remainder;
          }
        return extraUserFeedbackMultipleChoiceComponentKey(remainder);
      }
    JSONValue *extraUserFeedbackItemComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return extraChoicesToJSON();
            --remainder;
          }
        if (flagHasChoiceLabels)
          {
            if (remainder == 0)
                return extraChoiceLabelsToJSON();
            --remainder;
          }
        if (flagHasAnswers)
          {
            if (remainder == 0)
                return extraAnswersToJSON();
            --remainder;
          }
        return extraUserFeedbackMultipleChoiceComponentValue(remainder);
      }
    const JSONValue *extraUserFeedbackItemComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChoices)
          {
            if (remainder == 0)
                return extraChoicesToJSON();
            --remainder;
          }
        if (flagHasChoiceLabels)
          {
            if (remainder == 0)
                return extraChoiceLabelsToJSON();
            --remainder;
          }
        if (flagHasAnswers)
          {
            if (remainder == 0)
                return extraAnswersToJSON();
            --remainder;
          }
        return extraUserFeedbackMultipleChoiceComponentValue(remainder);
      }
    JSONValue *extraUserFeedbackItemLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "nswers") == 0)
                    return (flagHasAnswers ? extraAnswersToJSON() : NULL);
                break;
            case 'C':
                if (strncmp(&(field_name[1]), "hoice", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'L':
                            if (strcmp(&(field_name[7]), "abels") == 0)
                                return (flagHasChoiceLabels ? extraChoiceLabelsToJSON() : NULL);
                            break;
                        case 's':
                            if (field_name[7] == 0)
                                return (flagHasChoices ? extraChoicesToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraUserFeedbackMultipleChoiceLookup(field_name);
      }
    const JSONValue *extraUserFeedbackItemLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "nswers") == 0)
                    return (flagHasAnswers ? extraAnswersToJSON() : NULL);
                break;
            case 'C':
                if (strncmp(&(field_name[1]), "hoice", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'L':
                            if (strcmp(&(field_name[7]), "abels") == 0)
                                return (flagHasChoiceLabels ? extraChoiceLabelsToJSON() : NULL);
                            break;
                        case 's':
                            if (field_name[7] == 0)
                                return (flagHasChoices ? extraChoicesToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraUserFeedbackMultipleChoiceLookup(field_name);
      }

    void initChoices(void)
      {
        flagHasChoices = true;
        storeChoices.clear();
      }
    void appendChoices(std::string to_append)
      {
        if (!flagHasChoices)
          {
            flagHasChoices = true;
            storeChoices.clear();
          }
        assert(flagHasChoices);
        storeChoices.push_back(to_append);
      }
    void unsetChoices(void)
      {
        flagHasChoices = false;
        storeChoices.clear();
      }
    void initChoiceLabels(void)
      {
        flagHasChoiceLabels = true;
        storeChoiceLabels.clear();
      }
    void appendChoiceLabels(std::string to_append)
      {
        if (!flagHasChoiceLabels)
          {
            flagHasChoiceLabels = true;
            storeChoiceLabels.clear();
          }
        assert(flagHasChoiceLabels);
        storeChoiceLabels.push_back(to_append);
      }
    void unsetChoiceLabels(void)
      {
        flagHasChoiceLabels = false;
        storeChoiceLabels.clear();
      }
    void initAnswers(void)
      {
        flagHasAnswers = true;
        storeAnswers.clear();
      }
    void appendAnswers(OInteger to_append)
      {
        if (!flagHasAnswers)
          {
            flagHasAnswers = true;
            storeAnswers.clear();
          }
        assert(flagHasAnswers);
        storeAnswers.push_back(to_append);
      }
    void unsetAnswers(void)
      {
        flagHasAnswers = false;
        storeAnswers.clear();
      }

    virtual void extraUserFeedbackMultipleChoiceAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserFeedbackMultipleChoiceSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserFeedbackMultipleChoiceLookup(key);
        if (old_field == NULL)
          {
            extraUserFeedbackMultipleChoiceAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "nswers") == 0)
                    {
                    fromJSONAnswers(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strncmp(&(key[1]), "hoice", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'L':
                            if (strcmp(&(key[7]), "abels") == 0)
                                {
                                fromJSONChoiceLabels(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (key[7] == 0)
                                {
                                fromJSONChoices(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraUserFeedbackMultipleChoiceAppendPair(key, new_component);
      }
    void extraUserFeedbackItemSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "nswers") == 0)
                    {
                    fromJSONAnswers(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strncmp(&(key[1]), "hoice", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'L':
                            if (strcmp(&(key[7]), "abels") == 0)
                                {
                                fromJSONChoiceLabels(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (key[7] == 0)
                                {
                                fromJSONChoices(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraUserFeedbackMultipleChoiceSetField(key, new_component);
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
        assert(flagHasChoices);
        handler->start_pair("Choices");
        assert(storeChoices.size() >= 2);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeChoices.size(); ++num1)
          {
            handler->string_value(storeChoices[num1]);
          }
        handler->finish_array();
        if (flagHasChoiceLabels)
          {
            handler->start_pair("ChoiceLabels");
            assert(storeChoiceLabels.size() >= 2);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeChoiceLabels.size(); ++num2)
              {
                handler->string_value(storeChoiceLabels[num2]);
              }
            handler->finish_array();
          }
        assert(flagHasAnswers);
        handler->start_pair("Answers");
        handler->start_array();
        for (size_t num3 = 0; num3 < storeAnswers.size(); ++num3)
          {
            handler->number_value(storeAnswers[num3].get_o_integer());
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasChoices()))
          {
            return "When parsing the object for %what%, the \"Choices\" field was missing.";
          }
        if (!(hasAnswers()))
          {
            return "When parsing the object for %what%, the \"Answers\" field was missing.";
          }
        return NULL;
      }

    static UserFeedbackMultipleChoiceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserFeedbackMultipleChoiceJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserFeedbackMultipleChoiceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackMultipleChoiceJSON>, UserFeedbackMultipleChoiceJSON *, bool> generator("Type UserFeedbackMultipleChoice", ignore_extras);
            parse_json_value(text, "Text for UserFeedbackMultipleChoiceJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserFeedbackMultipleChoiceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserFeedbackMultipleChoiceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackMultipleChoiceJSON>, UserFeedbackMultipleChoiceJSON *, bool> generator("Type UserFeedbackMultipleChoice", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChoices;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChoiceLabels;
        static char lowerBoundAnswers[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAnswers>, OInteger, o_integer > fieldGeneratorAnswers;
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
            if (!(strcmp(getUserFeedbackItemJSONKey().c_str(), "MultipleChoice") == 0))
                throw("The key field has a value other than `MultipleChoice'.");
            UserFeedbackMultipleChoiceJSON *result = new UserFeedbackMultipleChoiceJSON();
            assert(result != NULL);
            RCHandle<UserFeedbackMultipleChoiceJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserFeedbackMultipleChoiceAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UserFeedbackItemJSON *new_result)
          {
            handle_result((UserFeedbackMultipleChoiceJSON *)new_result);
          }
        void finish(UserFeedbackMultipleChoiceJSON *result)
          {
            if (fieldGeneratorChoices.have_value)
              {
                result->initChoices();
                size_t count = fieldGeneratorChoices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChoices(fieldGeneratorChoices.value[num]);
                  }
                fieldGeneratorChoices.value.clear();
                fieldGeneratorChoices.have_value = false;
              }
            else if (!(result->hasChoices()))
              {
                error("When parsing the object for %what%, the \"Choices\" field was missing.");
              }
            if (fieldGeneratorChoiceLabels.have_value)
              {
                result->initChoiceLabels();
                size_t count = fieldGeneratorChoiceLabels.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChoiceLabels(fieldGeneratorChoiceLabels.value[num]);
                  }
                fieldGeneratorChoiceLabels.value.clear();
                fieldGeneratorChoiceLabels.have_value = false;
              }
            if (fieldGeneratorAnswers.have_value)
              {
                result->initAnswers();
                size_t count = fieldGeneratorAnswers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAnswers(fieldGeneratorAnswers.value[num]);
                  }
                fieldGeneratorAnswers.value.clear();
                fieldGeneratorAnswers.have_value = false;
              }
            else if (!(result->hasAnswers()))
              {
                error("When parsing the object for %what%, the \"Answers\" field was missing.");
              }
            UserFeedbackItemJSON::Generator::finish(result);
          }
        virtual void handle_result(UserFeedbackMultipleChoiceJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "nswers") == 0)
                        return &fieldGeneratorAnswers;
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "hoice", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[7]), "abels") == 0)
                                    return &fieldGeneratorChoiceLabels;
                                break;
                            case 's':
                                if (field_name[7] == 0)
                                    return &fieldGeneratorChoices;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return UserFeedbackItemJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UserFeedbackItemJSON::Generator(ignore_extras), fieldGeneratorChoices("field \"Choices\" of the UserFeedbackMultipleChoice class"), fieldGeneratorChoiceLabels("field \"ChoiceLabels\" of the UserFeedbackMultipleChoice class"), fieldGeneratorAnswers("field \"Answers\" of the UserFeedbackMultipleChoice class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserFeedbackMultipleChoice class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorChoices.reset();
            fieldGeneratorChoiceLabels.reset();
            fieldGeneratorAnswers.reset();
            UserFeedbackItemJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERFEEDBACKMULTIPLECHOICEJSON_H */
