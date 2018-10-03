/* file "StoredPageMatchReadCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOREDPAGEMATCHREADCOMMANDJSON_H
#define STOREDPAGEMATCHREADCOMMANDJSON_H

#pragma interface

#include "StoredPageMatchCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "ClientMatchesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StoredPageMatchReadCommandJSON : public StoredPageMatchCommandJSON
  {
  private:
    bool flagHasPageName;
    std::string storePageName;
    bool flagHasPageIsGlobal;
    bool storePageIsGlobal;
    bool flagHasPageData;
    ClientMatchesJSON * storePageData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StoredPageMatchReadCommandJSON(const StoredPageMatchReadCommandJSON &);
    StoredPageMatchReadCommandJSON & operator=(const StoredPageMatchReadCommandJSON &other);

    JSONValue * extraPageNameToJSON(void) const;
    JSONValue * extraPageIsGlobalToJSON(void) const;
    JSONValue * extraPageDataToJSON(void) const;

    void  fromJSONPageName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPageIsGlobal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPageData(JSONValue *json_value, bool ignore_extras = false);


  public:
    StoredPageMatchReadCommandJSON(void);
    virtual ~StoredPageMatchReadCommandJSON(void);
    const char * getStoredPageMatchCommandKind(void) const;
    bool  hasPageName(void) const;
    std::string  getPageName(void);
    const std::string  getPageName(void) const;
    bool  hasPageIsGlobal(void) const;
    bool  getPageIsGlobal(void);
    const bool  getPageIsGlobal(void) const;
    bool  hasPageData(void) const;
    ClientMatchesJSON *  getPageData(void);
    const ClientMatchesJSON *  getPageData(void) const;

    virtual size_t extraStoredPageMatchReadCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStoredPageMatchReadCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStoredPageMatchReadCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStoredPageMatchReadCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStoredPageMatchReadCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStoredPageMatchReadCommandLookup(const char *field_name) const
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
        if (flagHasPageData)
            ++result;
        result += extraStoredPageMatchReadCommandComponentCount();
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
        if (flagHasPageData)
          {
            if (remainder == 0)
                return "PageData";
            --remainder;
          }
        return extraStoredPageMatchReadCommandComponentKey(remainder);
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
        if (flagHasPageData)
          {
            if (remainder == 0)
                return extraPageDataToJSON();
            --remainder;
          }
        return extraStoredPageMatchReadCommandComponentValue(remainder);
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
        if (flagHasPageData)
          {
            if (remainder == 0)
                return extraPageDataToJSON();
            --remainder;
          }
        return extraStoredPageMatchReadCommandComponentValue(remainder);
      }
    JSONValue *extraStoredPageMatchCommandLookup(const char *field_name)
      {
        if (strncmp(field_name, "Page", 4) == 0)
          {
            switch ((unsigned char)(field_name[4]))
              {
                case 'D':
                    if (strcmp(&(field_name[5]), "ata") == 0)
                        return (flagHasPageData ? extraPageDataToJSON() : NULL);
                    break;
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
        return extraStoredPageMatchReadCommandLookup(field_name);
      }
    const JSONValue *extraStoredPageMatchCommandLookup(const char *field_name) const
      {
        if (strncmp(field_name, "Page", 4) == 0)
          {
            switch ((unsigned char)(field_name[4]))
              {
                case 'D':
                    if (strcmp(&(field_name[5]), "ata") == 0)
                        return (flagHasPageData ? extraPageDataToJSON() : NULL);
                    break;
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
        return extraStoredPageMatchReadCommandLookup(field_name);
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
    void setPageData(ClientMatchesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPageData)
          {
            storePageData->remove_reference();
          }
        flagHasPageData = true;
        storePageData = new_value;
      }
    void unsetPageData(void)
      {
        if (flagHasPageData)
          {
            storePageData->remove_reference();
          }
        flagHasPageData = false;
      }

    virtual void extraStoredPageMatchReadCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStoredPageMatchReadCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStoredPageMatchReadCommandLookup(key);
        if (old_field == NULL)
          {
            extraStoredPageMatchReadCommandAppendPair(key, new_component);
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
                case 'D':
                    if (strcmp(&(key[5]), "ata") == 0)
                        {
                        fromJSONPageData(new_component, false);
                        return;
                        }
                    break;
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
        extraStoredPageMatchReadCommandAppendPair(key, new_component);
      }
    void extraStoredPageMatchCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Page", 4) == 0)
          {
            switch ((unsigned char)(key[4]))
              {
                case 'D':
                    if (strcmp(&(key[5]), "ata") == 0)
                        {
                        fromJSONPageData(new_component, false);
                        return;
                        }
                    break;
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
        extraStoredPageMatchReadCommandSetField(key, new_component);
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
        assert(flagHasPageData);
        handler->start_pair("PageData");
        storePageData->write_as_json(handler);
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
        if (!(hasPageData()))
          {
            return "When parsing the object for %what%, the \"PageData\" field was missing.";
          }
        return NULL;
      }

    static StoredPageMatchReadCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StoredPageMatchReadCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StoredPageMatchReadCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchReadCommandJSON>, StoredPageMatchReadCommandJSON *, bool> generator("Type StoredPageMatchReadCommand", ignore_extras);
            parse_json_value(text, "Text for StoredPageMatchReadCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StoredPageMatchReadCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StoredPageMatchReadCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchReadCommandJSON>, StoredPageMatchReadCommandJSON *, bool> generator("Type StoredPageMatchReadCommand", ignore_extras);
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
        JSONHoldingGenerator<ClientMatchesJSON::Generator, RCHandle<ClientMatchesJSON>, ClientMatchesJSON *, bool > fieldGeneratorPageData;
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
            if (!(strcmp(getStoredPageMatchCommandJSONKey().c_str(), "Read") == 0))
                throw("The key field has a value other than `Read'.");
            StoredPageMatchReadCommandJSON *result = new StoredPageMatchReadCommandJSON();
            assert(result != NULL);
            RCHandle<StoredPageMatchReadCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStoredPageMatchReadCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(StoredPageMatchCommandJSON *new_result)
          {
            handle_result((StoredPageMatchReadCommandJSON *)new_result);
          }
        void finish(StoredPageMatchReadCommandJSON *result)
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
            if (fieldGeneratorPageData.have_value)
              {
                result->setPageData(fieldGeneratorPageData.value.referenced());
                fieldGeneratorPageData.have_value = false;
              }
            else if (!(result->hasPageData()))
              {
                error("When parsing the object for %what%, the \"PageData\" field was missing.");
              }
            StoredPageMatchCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(StoredPageMatchReadCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Page", 4) == 0)
              {
                switch ((unsigned char)(field_name[4]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[5]), "ata") == 0)
                            return &fieldGeneratorPageData;
                        break;
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
        Generator(bool ignore_extras = false) : StoredPageMatchCommandJSON::Generator(ignore_extras), fieldGeneratorPageName("field \"PageName\" of the StoredPageMatchReadCommand class"), fieldGeneratorPageIsGlobal("field \"PageIsGlobal\" of the StoredPageMatchReadCommand class"), fieldGeneratorPageData("field \"PageData\" of the StoredPageMatchReadCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StoredPageMatchReadCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPageName.reset();
            fieldGeneratorPageIsGlobal.reset();
            fieldGeneratorPageData.reset();
            StoredPageMatchCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOREDPAGEMATCHREADCOMMANDJSON_H */
