/* file "UserCurrentLocationIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERCURRENTLOCATIONINTENTJSON_H
#define USERCURRENTLOCATIONINTENTJSON_H

#pragma interface

#include "LocationIntentJSON.h"
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


class UserCurrentLocationIntentJSON : public LocationIntentJSON
  {
  private:
    bool flagHasLabel;
    std::string storeLabel;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserCurrentLocationIntentJSON(const UserCurrentLocationIntentJSON &);
    UserCurrentLocationIntentJSON & operator=(const UserCurrentLocationIntentJSON &other);

    JSONValue * extraLabelToJSON(void) const;

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserCurrentLocationIntentJSON(void);
    virtual ~UserCurrentLocationIntentJSON(void);
    const char * getLocationIntentKind(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;

    virtual size_t extraUserCurrentLocationIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserCurrentLocationIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserCurrentLocationIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserCurrentLocationIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserCurrentLocationIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserCurrentLocationIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraLocationIntentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasLabel)
            ++result;
        result += extraUserCurrentLocationIntentComponentCount();
        return result;
      }
    const char *extraLocationIntentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLabel)
          {
            if (remainder == 0)
                return "Label";
            --remainder;
          }
        return extraUserCurrentLocationIntentComponentKey(remainder);
      }
    JSONValue *extraLocationIntentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasLabel)
          {
            if (remainder == 0)
                return extraLabelToJSON();
            --remainder;
          }
        return extraUserCurrentLocationIntentComponentValue(remainder);
      }
    const JSONValue *extraLocationIntentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLabel)
          {
            if (remainder == 0)
                return extraLabelToJSON();
            --remainder;
          }
        return extraUserCurrentLocationIntentComponentValue(remainder);
      }
    JSONValue *extraLocationIntentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Label") == 0)
            return (flagHasLabel ? extraLabelToJSON() : NULL);
        return extraUserCurrentLocationIntentLookup(field_name);
      }
    const JSONValue *extraLocationIntentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Label") == 0)
            return (flagHasLabel ? extraLabelToJSON() : NULL);
        return extraUserCurrentLocationIntentLookup(field_name);
      }

    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }

    virtual void extraUserCurrentLocationIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserCurrentLocationIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserCurrentLocationIntentLookup(key);
        if (old_field == NULL)
          {
            extraUserCurrentLocationIntentAppendPair(key, new_component);
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
    void extraLocationIntentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Label") == 0)
            {
            fromJSONLabel(new_component, false);
            return;
            }
        extraUserCurrentLocationIntentAppendPair(key, new_component);
      }
    void extraLocationIntentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Label") == 0)
            {
            fromJSONLabel(new_component, false);
            return;
            }
        extraUserCurrentLocationIntentSetField(key, new_component);
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
        LocationIntentJSON::write_fields_as_json(handler);
        if (flagHasLabel)
          {
            handler->start_pair("Label");
            handler->string_value(storeLabel);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UserCurrentLocationIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserCurrentLocationIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserCurrentLocationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserCurrentLocationIntentJSON>, UserCurrentLocationIntentJSON *, bool> generator("Type UserCurrentLocationIntent", ignore_extras);
            parse_json_value(text, "Text for UserCurrentLocationIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserCurrentLocationIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserCurrentLocationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserCurrentLocationIntentJSON>, UserCurrentLocationIntentJSON *, bool> generator("Type UserCurrentLocationIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public LocationIntentJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
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
            if (!(strcmp(getLocationIntentJSONKey().c_str(), "UserCurrentLocation") == 0))
                throw("The key field has a value other than `UserCurrentLocation'.");
            UserCurrentLocationIntentJSON *result = new UserCurrentLocationIntentJSON();
            assert(result != NULL);
            RCHandle<UserCurrentLocationIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserCurrentLocationIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(LocationIntentJSON *new_result)
          {
            handle_result((UserCurrentLocationIntentJSON *)new_result);
          }
        void finish(UserCurrentLocationIntentJSON *result)
          {
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            LocationIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(UserCurrentLocationIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Label") == 0)
                return &fieldGeneratorLabel;
            return LocationIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : LocationIntentJSON::Generator(ignore_extras), fieldGeneratorLabel("field \"Label\" of the UserCurrentLocationIntent class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserCurrentLocationIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLabel.reset();
            LocationIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERCURRENTLOCATIONINTENTJSON_H */
