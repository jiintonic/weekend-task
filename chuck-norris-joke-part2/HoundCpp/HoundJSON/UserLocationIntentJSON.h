/* file "UserLocationIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERLOCATIONINTENTJSON_H
#define USERLOCATIONINTENTJSON_H

#pragma interface

#include "LocationIntentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UserLocationIntentJSON : public LocationIntentJSON
  {
  private:
    bool flagHasIsOwned;
    bool storeIsOwned;
    bool flagHasLabel;
    std::string storeLabel;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserLocationIntentJSON(const UserLocationIntentJSON &);
    UserLocationIntentJSON & operator=(const UserLocationIntentJSON &other);

    JSONValue * extraIsOwnedToJSON(void) const;
    JSONValue * extraLabelToJSON(void) const;

    void  fromJSONIsOwned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserLocationIntentJSON(void);
    virtual ~UserLocationIntentJSON(void);
    const char * getLocationIntentKind(void) const;
    bool  hasIsOwned(void) const;
    bool  getIsOwned(void);
    const bool  getIsOwned(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;

    virtual size_t extraUserLocationIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserLocationIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserLocationIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserLocationIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserLocationIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserLocationIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraLocationIntentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasIsOwned)
            ++result;
        if (flagHasLabel)
            ++result;
        result += extraUserLocationIntentComponentCount();
        return result;
      }
    const char *extraLocationIntentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIsOwned)
          {
            if (remainder == 0)
                return "IsOwned";
            --remainder;
          }
        if (flagHasLabel)
          {
            if (remainder == 0)
                return "Label";
            --remainder;
          }
        return extraUserLocationIntentComponentKey(remainder);
      }
    JSONValue *extraLocationIntentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasIsOwned)
          {
            if (remainder == 0)
                return extraIsOwnedToJSON();
            --remainder;
          }
        if (flagHasLabel)
          {
            if (remainder == 0)
                return extraLabelToJSON();
            --remainder;
          }
        return extraUserLocationIntentComponentValue(remainder);
      }
    const JSONValue *extraLocationIntentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIsOwned)
          {
            if (remainder == 0)
                return extraIsOwnedToJSON();
            --remainder;
          }
        if (flagHasLabel)
          {
            if (remainder == 0)
                return extraLabelToJSON();
            --remainder;
          }
        return extraUserLocationIntentComponentValue(remainder);
      }
    JSONValue *extraLocationIntentLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sOwned") == 0)
                    return (flagHasIsOwned ? extraIsOwnedToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "abel") == 0)
                    return (flagHasLabel ? extraLabelToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUserLocationIntentLookup(field_name);
      }
    const JSONValue *extraLocationIntentLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strcmp(&(field_name[1]), "sOwned") == 0)
                    return (flagHasIsOwned ? extraIsOwnedToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "abel") == 0)
                    return (flagHasLabel ? extraLabelToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUserLocationIntentLookup(field_name);
      }

    void setIsOwned(bool new_value)
      {
        flagHasIsOwned = true;
        storeIsOwned = new_value;
      }
    void unsetIsOwned(void)
      {
        flagHasIsOwned = false;
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

    virtual void extraUserLocationIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserLocationIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserLocationIntentLookup(key);
        if (old_field == NULL)
          {
            extraUserLocationIntentAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sOwned") == 0)
                    {
                    fromJSONIsOwned(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "abel") == 0)
                    {
                    fromJSONLabel(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUserLocationIntentAppendPair(key, new_component);
      }
    void extraLocationIntentSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strcmp(&(key[1]), "sOwned") == 0)
                    {
                    fromJSONIsOwned(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "abel") == 0)
                    {
                    fromJSONLabel(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUserLocationIntentSetField(key, new_component);
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
        assert(flagHasIsOwned);
        handler->start_pair("IsOwned");
        handler->boolean_value(storeIsOwned);
        assert(flagHasLabel);
        handler->start_pair("Label");
        handler->string_value(storeLabel);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasIsOwned()))
          {
            return "When parsing the object for %what%, the \"IsOwned\" field was missing.";
          }
        if (!(hasLabel()))
          {
            return "When parsing the object for %what%, the \"Label\" field was missing.";
          }
        return NULL;
      }

    static UserLocationIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserLocationIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserLocationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserLocationIntentJSON>, UserLocationIntentJSON *, bool> generator("Type UserLocationIntent", ignore_extras);
            parse_json_value(text, "Text for UserLocationIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserLocationIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserLocationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserLocationIntentJSON>, UserLocationIntentJSON *, bool> generator("Type UserLocationIntent", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsOwned;
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
            if (!(strcmp(getLocationIntentJSONKey().c_str(), "User") == 0))
                throw("The key field has a value other than `User'.");
            UserLocationIntentJSON *result = new UserLocationIntentJSON();
            assert(result != NULL);
            RCHandle<UserLocationIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserLocationIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(LocationIntentJSON *new_result)
          {
            handle_result((UserLocationIntentJSON *)new_result);
          }
        void finish(UserLocationIntentJSON *result)
          {
            if (fieldGeneratorIsOwned.have_value)
              {
                result->setIsOwned(fieldGeneratorIsOwned.value);
                fieldGeneratorIsOwned.have_value = false;
              }
            else if (!(result->hasIsOwned()))
              {
                error("When parsing the object for %what%, the \"IsOwned\" field was missing.");
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            else if (!(result->hasLabel()))
              {
                error("When parsing the object for %what%, the \"Label\" field was missing.");
              }
            LocationIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(UserLocationIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "sOwned") == 0)
                        return &fieldGeneratorIsOwned;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                default:
                    break;
              }
            return LocationIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : LocationIntentJSON::Generator(ignore_extras), fieldGeneratorIsOwned("field \"IsOwned\" of the UserLocationIntent class"), fieldGeneratorLabel("field \"Label\" of the UserLocationIntent class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserLocationIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIsOwned.reset();
            fieldGeneratorLabel.reset();
            LocationIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERLOCATIONINTENTJSON_H */
