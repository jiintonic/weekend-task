/* file "StoredPageMatchWriteCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOREDPAGEMATCHWRITECOMMANDJSON_H
#define STOREDPAGEMATCHWRITECOMMANDJSON_H

#pragma interface

#include "StoredPageMatchCommandJSON.h"
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


class StoredPageMatchWriteCommandJSON : public StoredPageMatchCommandJSON
  {
  private:
    bool flagHasPageName;
    std::string storePageName;
    bool flagHasPageIsGlobal;
    bool storePageIsGlobal;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StoredPageMatchWriteCommandJSON(const StoredPageMatchWriteCommandJSON &);
    StoredPageMatchWriteCommandJSON & operator=(const StoredPageMatchWriteCommandJSON &other);

    JSONValue * extraPageNameToJSON(void) const;
    JSONValue * extraPageIsGlobalToJSON(void) const;

    void  fromJSONPageName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPageIsGlobal(JSONValue *json_value, bool ignore_extras = false);


  public:
    StoredPageMatchWriteCommandJSON(void);
    virtual ~StoredPageMatchWriteCommandJSON(void);
    const char * getStoredPageMatchCommandKind(void) const;
    bool  hasPageName(void) const;
    std::string  getPageName(void);
    const std::string  getPageName(void) const;
    bool  hasPageIsGlobal(void) const;
    bool  getPageIsGlobal(void);
    const bool  getPageIsGlobal(void) const;

    virtual size_t extraStoredPageMatchWriteCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStoredPageMatchWriteCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStoredPageMatchWriteCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStoredPageMatchWriteCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStoredPageMatchWriteCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStoredPageMatchWriteCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraStoredPageMatchCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasPageName)
            ++result;
        if (flagHasPageIsGlobal)
            ++result;
        result += extraStoredPageMatchWriteCommandComponentCount();
        return result;
      }
    const char *extraStoredPageMatchCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPageName)
          {
            if (remainder == 0)
                return "PageName";
            --remainder;
          }
        if (flagHasPageIsGlobal)
          {
            if (remainder == 0)
                return "PageIsGlobal";
            --remainder;
          }
        return extraStoredPageMatchWriteCommandComponentKey(remainder);
      }
    JSONValue *extraStoredPageMatchCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasPageName)
          {
            if (remainder == 0)
                return extraPageNameToJSON();
            --remainder;
          }
        if (flagHasPageIsGlobal)
          {
            if (remainder == 0)
                return extraPageIsGlobalToJSON();
            --remainder;
          }
        return extraStoredPageMatchWriteCommandComponentValue(remainder);
      }
    const JSONValue *extraStoredPageMatchCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPageName)
          {
            if (remainder == 0)
                return extraPageNameToJSON();
            --remainder;
          }
        if (flagHasPageIsGlobal)
          {
            if (remainder == 0)
                return extraPageIsGlobalToJSON();
            --remainder;
          }
        return extraStoredPageMatchWriteCommandComponentValue(remainder);
      }
    JSONValue *extraStoredPageMatchCommandLookup(const char *field_name)
      {
        if (strncmp(field_name, "Page", 4) == 0)
          {
            switch ((unsigned char)(field_name[4]))
              {
                case 'I':
                    if (strcmp(&(field_name[5]), "sGlobal") == 0)
                        return (flagHasPageIsGlobal ? extraPageIsGlobalToJSON() : NULL);
                    break;
                case 'N':
                    if (strcmp(&(field_name[5]), "ame") == 0)
                        return (flagHasPageName ? extraPageNameToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraStoredPageMatchWriteCommandLookup(field_name);
      }
    const JSONValue *extraStoredPageMatchCommandLookup(const char *field_name) const
      {
        if (strncmp(field_name, "Page", 4) == 0)
          {
            switch ((unsigned char)(field_name[4]))
              {
                case 'I':
                    if (strcmp(&(field_name[5]), "sGlobal") == 0)
                        return (flagHasPageIsGlobal ? extraPageIsGlobalToJSON() : NULL);
                    break;
                case 'N':
                    if (strcmp(&(field_name[5]), "ame") == 0)
                        return (flagHasPageName ? extraPageNameToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraStoredPageMatchWriteCommandLookup(field_name);
      }

    void setPageName(std::string new_value)
      {
        flagHasPageName = true;
        storePageName = new_value;
      }
    void unsetPageName(void)
      {
        flagHasPageName = false;
      }
    void setPageIsGlobal(bool new_value)
      {
        flagHasPageIsGlobal = true;
        storePageIsGlobal = new_value;
      }
    void unsetPageIsGlobal(void)
      {
        flagHasPageIsGlobal = false;
      }

    virtual void extraStoredPageMatchWriteCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStoredPageMatchWriteCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStoredPageMatchWriteCommandLookup(key);
        if (old_field == NULL)
          {
            extraStoredPageMatchWriteCommandAppendPair(key, new_component);
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
    void extraStoredPageMatchCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Page", 4) == 0)
          {
            switch ((unsigned char)(key[4]))
              {
                case 'I':
                    if (strcmp(&(key[5]), "sGlobal") == 0)
                        {
                        fromJSONPageIsGlobal(new_component, false);
                        return;
                        }
                    break;
                case 'N':
                    if (strcmp(&(key[5]), "ame") == 0)
                        {
                        fromJSONPageName(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraStoredPageMatchWriteCommandAppendPair(key, new_component);
      }
    void extraStoredPageMatchCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Page", 4) == 0)
          {
            switch ((unsigned char)(key[4]))
              {
                case 'I':
                    if (strcmp(&(key[5]), "sGlobal") == 0)
                        {
                        fromJSONPageIsGlobal(new_component, false);
                        return;
                        }
                    break;
                case 'N':
                    if (strcmp(&(key[5]), "ame") == 0)
                        {
                        fromJSONPageName(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraStoredPageMatchWriteCommandSetField(key, new_component);
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
        StoredPageMatchCommandJSON::write_fields_as_json(handler);
        assert(flagHasPageName);
        handler->start_pair("PageName");
        handler->string_value(storePageName);
        assert(flagHasPageIsGlobal);
        handler->start_pair("PageIsGlobal");
        handler->boolean_value(storePageIsGlobal);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPageName()))
          {
            return "When parsing the object for %what%, the \"PageName\" field was missing.";
          }
        if (!(hasPageIsGlobal()))
          {
            return "When parsing the object for %what%, the \"PageIsGlobal\" field was missing.";
          }
        return NULL;
      }

    static StoredPageMatchWriteCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StoredPageMatchWriteCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StoredPageMatchWriteCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchWriteCommandJSON>, StoredPageMatchWriteCommandJSON *, bool> generator("Type StoredPageMatchWriteCommand", ignore_extras);
            parse_json_value(text, "Text for StoredPageMatchWriteCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StoredPageMatchWriteCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StoredPageMatchWriteCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchWriteCommandJSON>, StoredPageMatchWriteCommandJSON *, bool> generator("Type StoredPageMatchWriteCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public StoredPageMatchCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPageName;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPageIsGlobal;
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
            if (!(strcmp(getStoredPageMatchCommandJSONKey().c_str(), "Write") == 0))
                throw("The key field has a value other than `Write'.");
            StoredPageMatchWriteCommandJSON *result = new StoredPageMatchWriteCommandJSON();
            assert(result != NULL);
            RCHandle<StoredPageMatchWriteCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStoredPageMatchWriteCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(StoredPageMatchCommandJSON *new_result)
          {
            handle_result((StoredPageMatchWriteCommandJSON *)new_result);
          }
        void finish(StoredPageMatchWriteCommandJSON *result)
          {
            if (fieldGeneratorPageName.have_value)
              {
                result->setPageName(fieldGeneratorPageName.value);
                fieldGeneratorPageName.have_value = false;
              }
            else if (!(result->hasPageName()))
              {
                error("When parsing the object for %what%, the \"PageName\" field was missing.");
              }
            if (fieldGeneratorPageIsGlobal.have_value)
              {
                result->setPageIsGlobal(fieldGeneratorPageIsGlobal.value);
                fieldGeneratorPageIsGlobal.have_value = false;
              }
            else if (!(result->hasPageIsGlobal()))
              {
                error("When parsing the object for %what%, the \"PageIsGlobal\" field was missing.");
              }
            StoredPageMatchCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(StoredPageMatchWriteCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Page", 4) == 0)
              {
                switch ((unsigned char)(field_name[4]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[5]), "sGlobal") == 0)
                            return &fieldGeneratorPageIsGlobal;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[5]), "ame") == 0)
                            return &fieldGeneratorPageName;
                        break;
                    default:
                        break;
                  }
              }
            return StoredPageMatchCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : StoredPageMatchCommandJSON::Generator(ignore_extras), fieldGeneratorPageName("field \"PageName\" of the StoredPageMatchWriteCommand class"), fieldGeneratorPageIsGlobal("field \"PageIsGlobal\" of the StoredPageMatchWriteCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StoredPageMatchWriteCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPageName.reset();
            fieldGeneratorPageIsGlobal.reset();
            StoredPageMatchCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOREDPAGEMATCHWRITECOMMANDJSON_H */
