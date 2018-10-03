/* file "UserContactsClearRequestJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERCONTACTSCLEARREQUESTJSON_H
#define USERCONTACTSCLEARREQUESTJSON_H

#pragma interface

#include "UserContactsRequestJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UserContactsClearRequestJSON : public UserContactsRequestJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserContactsClearRequestJSON(const UserContactsClearRequestJSON &);
    UserContactsClearRequestJSON & operator=(const UserContactsClearRequestJSON &other);

  public:
    UserContactsClearRequestJSON(void);
    virtual ~UserContactsClearRequestJSON(void);
    const char * getRequestKind(void) const;

    virtual size_t extraUserContactsClearRequestComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserContactsClearRequestComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserContactsClearRequestComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserContactsClearRequestComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserContactsClearRequestLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserContactsClearRequestLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUserContactsRequestComponentCount(void) const
      {
        size_t result = 0;
        result += extraUserContactsClearRequestComponentCount();
        return result;
      }
    const char *extraUserContactsRequestComponentKey(size_t component_num) const
      {
        return extraUserContactsClearRequestComponentKey(component_num);
      }
    JSONValue *extraUserContactsRequestComponentValue(size_t component_num)
      {
        return extraUserContactsClearRequestComponentValue(component_num);
      }
    const JSONValue *extraUserContactsRequestComponentValue(size_t component_num) const
      {
        return extraUserContactsClearRequestComponentValue(component_num);
      }
    JSONValue *extraUserContactsRequestLookup(const char *field_name)
      {
        return extraUserContactsClearRequestLookup(field_name);
      }
    const JSONValue *extraUserContactsRequestLookup(const char *field_name) const
      {
        return extraUserContactsClearRequestLookup(field_name);
      }


    virtual void extraUserContactsClearRequestAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserContactsClearRequestSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserContactsClearRequestLookup(key);
        if (old_field == NULL)
          {
            extraUserContactsClearRequestAppendPair(key, new_component);
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
    void extraUserContactsRequestAppendPair(const char *key, JSONValue *new_component)
      {
        extraUserContactsClearRequestAppendPair(key, new_component);
      }
    void extraUserContactsRequestSetField(const char *key, JSONValue *new_component)
      {
        extraUserContactsClearRequestSetField(key, new_component);
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
        UserContactsRequestJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UserContactsClearRequestJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserContactsClearRequestJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserContactsClearRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsClearRequestJSON>, UserContactsClearRequestJSON *, bool> generator("Type UserContactsClearRequest", ignore_extras);
            parse_json_value(text, "Text for UserContactsClearRequestJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserContactsClearRequestJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserContactsClearRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsClearRequestJSON>, UserContactsClearRequestJSON *, bool> generator("Type UserContactsClearRequest", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UserContactsRequestJSON::Generator
      {
      private:
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
            if (!(strcmp(getUserContactsRequestJSONKey().c_str(), "Clear") == 0))
                throw("The key field has a value other than `Clear'.");
            UserContactsClearRequestJSON *result = new UserContactsClearRequestJSON();
            assert(result != NULL);
            RCHandle<UserContactsClearRequestJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserContactsClearRequestAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UserContactsRequestJSON *new_result)
          {
            handle_result((UserContactsClearRequestJSON *)new_result);
          }
        void finish(UserContactsClearRequestJSON *result)
          {
            UserContactsRequestJSON::Generator::finish(result);
          }
        virtual void handle_result(UserContactsClearRequestJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return UserContactsRequestJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UserContactsRequestJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserContactsClearRequest class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            UserContactsRequestJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERCONTACTSCLEARREQUESTJSON_H */
