/* file "UserFeedbackItemJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERFEEDBACKITEMJSON_H
#define USERFEEDBACKITEMJSON_H

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


class UserFeedbackItemJSON : public ReferenceCounted
  {
  private:
    bool flagHasFieldName;
    std::string storeFieldName;

    UserFeedbackItemJSON(const UserFeedbackItemJSON &);
    UserFeedbackItemJSON & operator=(const UserFeedbackItemJSON &other);

    void  fromJSONFieldName(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserFeedbackItemJSON(void);
    virtual ~UserFeedbackItemJSON(void);
    virtual const char *getFeedbackKind(void) const = 0;
    bool  hasFieldName(void) const;
    std::string  getFieldName(void);
    const std::string  getFieldName(void) const;

    virtual size_t extraUserFeedbackItemComponentCount(void) const = 0;
    virtual const char *extraUserFeedbackItemComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraUserFeedbackItemComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraUserFeedbackItemComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraUserFeedbackItemLookup(const char *field_name) = 0;
    virtual const JSONValue *extraUserFeedbackItemLookup(const char *field_name) const = 0;

    void setFieldName(std::string new_value)
      {
        flagHasFieldName = true;
        storeFieldName = new_value;
      }
    void unsetFieldName(void)
      {
        flagHasFieldName = false;
      }

    virtual void extraUserFeedbackItemAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraUserFeedbackItemSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("FeedbackKind", getFeedbackKind());
        assert(flagHasFieldName);
        handler->start_pair("FieldName");
        handler->string_value(storeFieldName);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFieldName()))
          {
            return "When parsing the object for %what%, the \"FieldName\" field was missing.";
          }
        return NULL;
      }

    static UserFeedbackItemJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserFeedbackItemJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserFeedbackItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackItemJSON>, UserFeedbackItemJSON *, bool> generator("Type UserFeedbackItem", ignore_extras);
            parse_json_value(text, "Text for UserFeedbackItemJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserFeedbackItemJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserFeedbackItemJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserFeedbackItemJSON>, UserFeedbackItemJSON *, bool> generator("Type UserFeedbackItem", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFieldName;
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
                throw("The `FeedbackKind' field is missing.");
            UserFeedbackItemJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<UserFeedbackItemJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserFeedbackItemAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getUserFeedbackItemJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `FeedbackKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(UserFeedbackItemJSON *result)
          {
            if (fieldGeneratorFieldName.have_value)
              {
                result->setFieldName(fieldGeneratorFieldName.value);
                fieldGeneratorFieldName.have_value = false;
              }
            else if (!(result->hasFieldName()))
              {
                error("When parsing the object for %what%, the \"FieldName\" field was missing.");
              }
          }
        virtual void handle_result(UserFeedbackItemJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "F", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "edbackKind") == 0)
                            {
                            keyGenerator.reset();
                            return &keyGenerator;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "eldName") == 0)
                            return &fieldGeneratorFieldName;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFieldName("field \"FieldName\" of the UserFeedbackItem class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"FeedbackKind\" of the UserFeedbackItem class")
          {
            set_what("the UserFeedbackItem class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFieldName.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static UserFeedbackItemJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* USERFEEDBACKITEMJSON_H */
