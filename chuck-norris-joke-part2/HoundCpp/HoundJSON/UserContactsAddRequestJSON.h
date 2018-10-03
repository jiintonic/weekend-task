/* file "UserContactsAddRequestJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERCONTACTSADDREQUESTJSON_H
#define USERCONTACTSADDREQUESTJSON_H

#pragma interface

#include "UserContactsRequestJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "OneContactJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UserContactsAddRequestJSON : public UserContactsRequestJSON
  {
  private:
    bool flagHasNewContacts;
    std::vector< OneContactJSON * > storeNewContacts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserContactsAddRequestJSON(const UserContactsAddRequestJSON &);
    UserContactsAddRequestJSON & operator=(const UserContactsAddRequestJSON &other);

    JSONValue * extraNewContactsToJSON(void) const;

    void  fromJSONNewContacts(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserContactsAddRequestJSON(void);
    virtual ~UserContactsAddRequestJSON(void);
    const char * getRequestKind(void) const;
    bool  hasNewContacts(void) const;
    size_t  countOfNewContacts(void) const;
    OneContactJSON *  elementOfNewContacts(size_t element_num);
    const OneContactJSON *  elementOfNewContacts(size_t element_num) const;
    std::vector< OneContactJSON * >  getNewContacts(void);
    const std::vector< OneContactJSON * >  getNewContacts(void) const;

    virtual size_t extraUserContactsAddRequestComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserContactsAddRequestComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserContactsAddRequestComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserContactsAddRequestComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserContactsAddRequestLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserContactsAddRequestLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUserContactsRequestComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNewContacts)
            ++result;
        result += extraUserContactsAddRequestComponentCount();
        return result;
      }
    const char *extraUserContactsRequestComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNewContacts)
          {
            if (remainder == 0)
                return "NewContacts";
            --remainder;
          }
        return extraUserContactsAddRequestComponentKey(remainder);
      }
    JSONValue *extraUserContactsRequestComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNewContacts)
          {
            if (remainder == 0)
                return extraNewContactsToJSON();
            --remainder;
          }
        return extraUserContactsAddRequestComponentValue(remainder);
      }
    const JSONValue *extraUserContactsRequestComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNewContacts)
          {
            if (remainder == 0)
                return extraNewContactsToJSON();
            --remainder;
          }
        return extraUserContactsAddRequestComponentValue(remainder);
      }
    JSONValue *extraUserContactsRequestLookup(const char *field_name)
      {
        if (strcmp(field_name, "NewContacts") == 0)
            return (flagHasNewContacts ? extraNewContactsToJSON() : NULL);
        return extraUserContactsAddRequestLookup(field_name);
      }
    const JSONValue *extraUserContactsRequestLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NewContacts") == 0)
            return (flagHasNewContacts ? extraNewContactsToJSON() : NULL);
        return extraUserContactsAddRequestLookup(field_name);
      }

    void initNewContacts(void)
      {
        if (flagHasNewContacts)
          {
            for (size_t num2 = 0; num2 < storeNewContacts.size(); ++num2)
              {
                storeNewContacts[num2]->remove_reference();
              }
          }
        flagHasNewContacts = true;
        storeNewContacts.clear();
      }
    void appendNewContacts(OneContactJSON * to_append)
      {
        if (!flagHasNewContacts)
          {
            flagHasNewContacts = true;
            storeNewContacts.clear();
          }
        assert(flagHasNewContacts);
        to_append->add_reference();
        storeNewContacts.push_back(to_append);
      }
    void unsetNewContacts(void)
      {
        if (flagHasNewContacts)
          {
            for (size_t num3 = 0; num3 < storeNewContacts.size(); ++num3)
              {
                storeNewContacts[num3]->remove_reference();
              }
          }
        flagHasNewContacts = false;
        storeNewContacts.clear();
      }

    virtual void extraUserContactsAddRequestAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserContactsAddRequestSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserContactsAddRequestLookup(key);
        if (old_field == NULL)
          {
            extraUserContactsAddRequestAppendPair(key, new_component);
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
        if (strcmp(key, "NewContacts") == 0)
            {
            fromJSONNewContacts(new_component, false);
            return;
            }
        extraUserContactsAddRequestAppendPair(key, new_component);
      }
    void extraUserContactsRequestSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NewContacts") == 0)
            {
            fromJSONNewContacts(new_component, false);
            return;
            }
        extraUserContactsAddRequestSetField(key, new_component);
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
        assert(flagHasNewContacts);
        handler->start_pair("NewContacts");
        assert(storeNewContacts.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeNewContacts.size(); ++num1)
          {
            storeNewContacts[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNewContacts()))
          {
            return "When parsing the object for %what%, the \"NewContacts\" field was missing.";
          }
        return NULL;
      }

    static UserContactsAddRequestJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserContactsAddRequestJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserContactsAddRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsAddRequestJSON>, UserContactsAddRequestJSON *, bool> generator("Type UserContactsAddRequest", ignore_extras);
            parse_json_value(text, "Text for UserContactsAddRequestJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserContactsAddRequestJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserContactsAddRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsAddRequestJSON>, UserContactsAddRequestJSON *, bool> generator("Type UserContactsAddRequest", ignore_extras);
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
        JSONHoldingArrayGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorNewContacts;
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
            if (!(strcmp(getUserContactsRequestJSONKey().c_str(), "Add") == 0))
                throw("The key field has a value other than `Add'.");
            UserContactsAddRequestJSON *result = new UserContactsAddRequestJSON();
            assert(result != NULL);
            RCHandle<UserContactsAddRequestJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserContactsAddRequestAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UserContactsRequestJSON *new_result)
          {
            handle_result((UserContactsAddRequestJSON *)new_result);
          }
        void finish(UserContactsAddRequestJSON *result)
          {
            if (fieldGeneratorNewContacts.have_value)
              {
                result->initNewContacts();
                size_t count = fieldGeneratorNewContacts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNewContacts(fieldGeneratorNewContacts.value[num].referenced());
                  }
                fieldGeneratorNewContacts.value.clear();
                fieldGeneratorNewContacts.have_value = false;
              }
            else if (!(result->hasNewContacts()))
              {
                error("When parsing the object for %what%, the \"NewContacts\" field was missing.");
              }
            UserContactsRequestJSON::Generator::finish(result);
          }
        virtual void handle_result(UserContactsAddRequestJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NewContacts") == 0)
                return &fieldGeneratorNewContacts;
            return UserContactsRequestJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UserContactsRequestJSON::Generator(ignore_extras), fieldGeneratorNewContacts("field \"NewContacts\" of the UserContactsAddRequest class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserContactsAddRequest class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNewContacts.reset();
            UserContactsRequestJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERCONTACTSADDREQUESTJSON_H */
