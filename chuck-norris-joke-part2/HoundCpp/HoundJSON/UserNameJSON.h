/* file "UserNameJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERNAMEJSON_H
#define USERNAMEJSON_H

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


class UserNameJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasSpokenName;
    std::string storeSpokenName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserNameJSON(const UserNameJSON &);
    UserNameJSON & operator=(const UserNameJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenName(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserNameJSON(void);
    virtual ~UserNameJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasSpokenName(void) const;
    std::string  getSpokenName(void);
    const std::string  getSpokenName(void) const;

    virtual size_t extraUserNameComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserNameComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserNameComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserNameComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserNameLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserNameLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setSpokenName(std::string new_value)
      {
        flagHasSpokenName = true;
        storeSpokenName = new_value;
      }
    void unsetSpokenName(void)
      {
        flagHasSpokenName = false;
      }

    virtual void extraUserNameAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserNameSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserNameLookup(key);
        if (old_field == NULL)
          {
            extraUserNameAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasSpokenName)
          {
            handler->start_pair("SpokenName");
            handler->string_value(storeSpokenName);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static UserNameJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserNameJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserNameJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserNameJSON>, UserNameJSON *, bool> generator("Type UserName", ignore_extras);
            parse_json_value(text, "Text for UserNameJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserNameJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserNameJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserNameJSON>, UserNameJSON *, bool> generator("Type UserName", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenName;
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
            UserNameJSON *result = new UserNameJSON();
            assert(result != NULL);
            RCHandle<UserNameJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserNameAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UserNameJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorSpokenName.have_value)
              {
                result->setSpokenName(fieldGeneratorSpokenName.value);
                fieldGeneratorSpokenName.have_value = false;
              }
          }
        virtual void handle_result(UserNameJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenName") == 0)
                        return &fieldGeneratorSpokenName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the UserName class"), fieldGeneratorSpokenName("field \"SpokenName\" of the UserName class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserName class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorSpokenName.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERNAMEJSON_H */
