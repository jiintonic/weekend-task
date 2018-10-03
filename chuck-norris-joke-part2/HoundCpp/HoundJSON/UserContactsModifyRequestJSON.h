/* file "UserContactsModifyRequestJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef USERCONTACTSMODIFYREQUESTJSON_H
#define USERCONTACTSMODIFYREQUESTJSON_H

#pragma interface

#include "UserContactsRequestJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONObjectValueGenerator.h"
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


class UserContactsModifyRequestJSON : public UserContactsRequestJSON
  {
  private:
    bool flagHasKeyFieldName;
    std::string storeKeyFieldName;
    bool flagHasMatchValue;
    JSONValue * storeMatchValue;
    bool flagHasNewFieldData;
    JSONObjectValue * storeNewFieldData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UserContactsModifyRequestJSON(const UserContactsModifyRequestJSON &);
    UserContactsModifyRequestJSON & operator=(const UserContactsModifyRequestJSON &other);

    JSONValue * extraKeyFieldNameToJSON(void) const;
    JSONValue * extraMatchValueToJSON(void) const;
    JSONValue * extraNewFieldDataToJSON(void) const;

    void  fromJSONKeyFieldName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMatchValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewFieldData(JSONValue *json_value, bool ignore_extras = false);


  public:
    UserContactsModifyRequestJSON(void);
    virtual ~UserContactsModifyRequestJSON(void);
    const char * getRequestKind(void) const;
    bool  hasKeyFieldName(void) const;
    std::string  getKeyFieldName(void);
    const std::string  getKeyFieldName(void) const;
    bool  hasMatchValue(void) const;
    JSONValue *  getMatchValue(void);
    const JSONValue *  getMatchValue(void) const;
    bool  hasNewFieldData(void) const;
    JSONObjectValue *  getNewFieldData(void);
    const JSONObjectValue *  getNewFieldData(void) const;

    virtual size_t extraUserContactsModifyRequestComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUserContactsModifyRequestComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUserContactsModifyRequestComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUserContactsModifyRequestComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUserContactsModifyRequestLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUserContactsModifyRequestLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUserContactsRequestComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasKeyFieldName)
            ++result;
        if (flagHasMatchValue)
            ++result;
        if (flagHasNewFieldData)
            ++result;
        result += extraUserContactsModifyRequestComponentCount();
        return result;
      }
    const char *extraUserContactsRequestComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasKeyFieldName)
          {
            if (remainder == 0)
                return "KeyFieldName";
            --remainder;
          }
        if (flagHasMatchValue)
          {
            if (remainder == 0)
                return "MatchValue";
            --remainder;
          }
        if (flagHasNewFieldData)
          {
            if (remainder == 0)
                return "NewFieldData";
            --remainder;
          }
        return extraUserContactsModifyRequestComponentKey(remainder);
      }
    JSONValue *extraUserContactsRequestComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasKeyFieldName)
          {
            if (remainder == 0)
                return extraKeyFieldNameToJSON();
            --remainder;
          }
        if (flagHasMatchValue)
          {
            if (remainder == 0)
                return extraMatchValueToJSON();
            --remainder;
          }
        if (flagHasNewFieldData)
          {
            if (remainder == 0)
                return extraNewFieldDataToJSON();
            --remainder;
          }
        return extraUserContactsModifyRequestComponentValue(remainder);
      }
    const JSONValue *extraUserContactsRequestComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasKeyFieldName)
          {
            if (remainder == 0)
                return extraKeyFieldNameToJSON();
            --remainder;
          }
        if (flagHasMatchValue)
          {
            if (remainder == 0)
                return extraMatchValueToJSON();
            --remainder;
          }
        if (flagHasNewFieldData)
          {
            if (remainder == 0)
                return extraNewFieldDataToJSON();
            --remainder;
          }
        return extraUserContactsModifyRequestComponentValue(remainder);
      }
    JSONValue *extraUserContactsRequestLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'K':
                if (strcmp(&(field_name[1]), "eyFieldName") == 0)
                    return (flagHasKeyFieldName ? extraKeyFieldNameToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "atchValue") == 0)
                    return (flagHasMatchValue ? extraMatchValueToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ewFieldData") == 0)
                    return (flagHasNewFieldData ? extraNewFieldDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUserContactsModifyRequestLookup(field_name);
      }
    const JSONValue *extraUserContactsRequestLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'K':
                if (strcmp(&(field_name[1]), "eyFieldName") == 0)
                    return (flagHasKeyFieldName ? extraKeyFieldNameToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "atchValue") == 0)
                    return (flagHasMatchValue ? extraMatchValueToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ewFieldData") == 0)
                    return (flagHasNewFieldData ? extraNewFieldDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUserContactsModifyRequestLookup(field_name);
      }

    void setKeyFieldName(std::string new_value)
      {
        flagHasKeyFieldName = true;
        storeKeyFieldName = new_value;
      }
    void unsetKeyFieldName(void)
      {
        flagHasKeyFieldName = false;
      }
    void setMatchValue(JSONValue * new_value)
      {
        new_value->add_reference();
        if (flagHasMatchValue)
          {
            storeMatchValue->remove_reference();
          }
        flagHasMatchValue = true;
        storeMatchValue = new_value;
      }
    void unsetMatchValue(void)
      {
        if (flagHasMatchValue)
          {
            storeMatchValue->remove_reference();
          }
        flagHasMatchValue = false;
      }
    void setNewFieldData(JSONObjectValue * new_value)
      {
        new_value->add_reference();
        if (flagHasNewFieldData)
          {
            storeNewFieldData->remove_reference();
          }
        flagHasNewFieldData = true;
        storeNewFieldData = new_value;
      }
    void unsetNewFieldData(void)
      {
        if (flagHasNewFieldData)
          {
            storeNewFieldData->remove_reference();
          }
        flagHasNewFieldData = false;
      }

    virtual void extraUserContactsModifyRequestAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUserContactsModifyRequestSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUserContactsModifyRequestLookup(key);
        if (old_field == NULL)
          {
            extraUserContactsModifyRequestAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'K':
                if (strcmp(&(key[1]), "eyFieldName") == 0)
                    {
                    fromJSONKeyFieldName(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "atchValue") == 0)
                    {
                    fromJSONMatchValue(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ewFieldData") == 0)
                    {
                    fromJSONNewFieldData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUserContactsModifyRequestAppendPair(key, new_component);
      }
    void extraUserContactsRequestSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'K':
                if (strcmp(&(key[1]), "eyFieldName") == 0)
                    {
                    fromJSONKeyFieldName(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "atchValue") == 0)
                    {
                    fromJSONMatchValue(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ewFieldData") == 0)
                    {
                    fromJSONNewFieldData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUserContactsModifyRequestSetField(key, new_component);
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
        assert(flagHasKeyFieldName);
        handler->start_pair("KeyFieldName");
        handler->string_value(storeKeyFieldName);
        assert(flagHasMatchValue);
        handler->start_pair("MatchValue");
        storeMatchValue->write(handler);
        assert(flagHasNewFieldData);
        handler->start_pair("NewFieldData");
        storeNewFieldData->write(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasKeyFieldName()))
          {
            return "When parsing the object for %what%, the \"KeyFieldName\" field was missing.";
          }
        if (!(hasMatchValue()))
          {
            return "When parsing the object for %what%, the \"MatchValue\" field was missing.";
          }
        if (!(hasNewFieldData()))
          {
            return "When parsing the object for %what%, the \"NewFieldData\" field was missing.";
          }
        return NULL;
      }

    static UserContactsModifyRequestJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UserContactsModifyRequestJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UserContactsModifyRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsModifyRequestJSON>, UserContactsModifyRequestJSON *, bool> generator("Type UserContactsModifyRequest", ignore_extras);
            parse_json_value(text, "Text for UserContactsModifyRequestJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UserContactsModifyRequestJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UserContactsModifyRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UserContactsModifyRequestJSON>, UserContactsModifyRequestJSON *, bool> generator("Type UserContactsModifyRequest", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorKeyFieldName;
        JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorMatchValue;
        JSONHoldingGenerator<JSONObjectValueGenerator, RCHandle<JSONObjectValue>, JSONObjectValue * > fieldGeneratorNewFieldData;
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
            if (!(strcmp(getUserContactsRequestJSONKey().c_str(), "Modify") == 0))
                throw("The key field has a value other than `Modify'.");
            UserContactsModifyRequestJSON *result = new UserContactsModifyRequestJSON();
            assert(result != NULL);
            RCHandle<UserContactsModifyRequestJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUserContactsModifyRequestAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UserContactsRequestJSON *new_result)
          {
            handle_result((UserContactsModifyRequestJSON *)new_result);
          }
        void finish(UserContactsModifyRequestJSON *result)
          {
            if (fieldGeneratorKeyFieldName.have_value)
              {
                result->setKeyFieldName(fieldGeneratorKeyFieldName.value);
                fieldGeneratorKeyFieldName.have_value = false;
              }
            else if (!(result->hasKeyFieldName()))
              {
                error("When parsing the object for %what%, the \"KeyFieldName\" field was missing.");
              }
            if (fieldGeneratorMatchValue.have_value)
              {
                result->setMatchValue(fieldGeneratorMatchValue.value.referenced());
                fieldGeneratorMatchValue.have_value = false;
              }
            else if (!(result->hasMatchValue()))
              {
                error("When parsing the object for %what%, the \"MatchValue\" field was missing.");
              }
            if (fieldGeneratorNewFieldData.have_value)
              {
                result->setNewFieldData(fieldGeneratorNewFieldData.value.referenced());
                fieldGeneratorNewFieldData.have_value = false;
              }
            else if (!(result->hasNewFieldData()))
              {
                error("When parsing the object for %what%, the \"NewFieldData\" field was missing.");
              }
            UserContactsRequestJSON::Generator::finish(result);
          }
        virtual void handle_result(UserContactsModifyRequestJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'K':
                    if (strcmp(&(field_name[1]), "eyFieldName") == 0)
                        return &fieldGeneratorKeyFieldName;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "atchValue") == 0)
                        return &fieldGeneratorMatchValue;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ewFieldData") == 0)
                        return &fieldGeneratorNewFieldData;
                    break;
                default:
                    break;
              }
            return UserContactsRequestJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UserContactsRequestJSON::Generator(ignore_extras), fieldGeneratorKeyFieldName("field \"KeyFieldName\" of the UserContactsModifyRequest class"), fieldGeneratorMatchValue("field \"MatchValue\" of the UserContactsModifyRequest class"), fieldGeneratorNewFieldData("field \"NewFieldData\" of the UserContactsModifyRequest class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UserContactsModifyRequest class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorKeyFieldName.reset();
            fieldGeneratorMatchValue.reset();
            fieldGeneratorNewFieldData.reset();
            UserContactsRequestJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* USERCONTACTSMODIFYREQUESTJSON_H */
