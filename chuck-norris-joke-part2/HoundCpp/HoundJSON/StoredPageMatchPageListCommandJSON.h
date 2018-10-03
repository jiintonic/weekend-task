/* file "StoredPageMatchPageListCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOREDPAGEMATCHPAGELISTCOMMANDJSON_H
#define STOREDPAGEMATCHPAGELISTCOMMANDJSON_H

#pragma interface

#include "StoredPageMatchCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StoredPageMatchPageListCommandJSON : public StoredPageMatchCommandJSON
  {
  private:
    bool flagHasPages;
    std::vector< std::string > storePages;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StoredPageMatchPageListCommandJSON(const StoredPageMatchPageListCommandJSON &);
    StoredPageMatchPageListCommandJSON & operator=(const StoredPageMatchPageListCommandJSON &other);

    JSONValue * extraPagesToJSON(void) const;

    void  fromJSONPages(JSONValue *json_value, bool ignore_extras = false);


  public:
    StoredPageMatchPageListCommandJSON(void);
    virtual ~StoredPageMatchPageListCommandJSON(void);
    const char * getStoredPageMatchCommandKind(void) const;
    bool  hasPages(void) const;
    size_t  countOfPages(void) const;
    std::string  elementOfPages(size_t element_num);
    const std::string  elementOfPages(size_t element_num) const;
    std::vector< std::string >  getPages(void);
    const std::vector< std::string >  getPages(void) const;

    virtual size_t extraStoredPageMatchPageListCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStoredPageMatchPageListCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStoredPageMatchPageListCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStoredPageMatchPageListCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStoredPageMatchPageListCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStoredPageMatchPageListCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraStoredPageMatchCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasPages)
            ++result;
        result += extraStoredPageMatchPageListCommandComponentCount();
        return result;
      }
    const char *extraStoredPageMatchCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPages)
          {
            if (remainder == 0)
                return "Pages";
            --remainder;
          }
        return extraStoredPageMatchPageListCommandComponentKey(remainder);
      }
    JSONValue *extraStoredPageMatchCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasPages)
          {
            if (remainder == 0)
                return extraPagesToJSON();
            --remainder;
          }
        return extraStoredPageMatchPageListCommandComponentValue(remainder);
      }
    const JSONValue *extraStoredPageMatchCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPages)
          {
            if (remainder == 0)
                return extraPagesToJSON();
            --remainder;
          }
        return extraStoredPageMatchPageListCommandComponentValue(remainder);
      }
    JSONValue *extraStoredPageMatchCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Pages") == 0)
            return (flagHasPages ? extraPagesToJSON() : NULL);
        return extraStoredPageMatchPageListCommandLookup(field_name);
      }
    const JSONValue *extraStoredPageMatchCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Pages") == 0)
            return (flagHasPages ? extraPagesToJSON() : NULL);
        return extraStoredPageMatchPageListCommandLookup(field_name);
      }

    void initPages(void)
      {
        flagHasPages = true;
        storePages.clear();
      }
    void appendPages(std::string to_append)
      {
        if (!flagHasPages)
          {
            flagHasPages = true;
            storePages.clear();
          }
        assert(flagHasPages);
        storePages.push_back(to_append);
      }
    void unsetPages(void)
      {
        flagHasPages = false;
        storePages.clear();
      }

    virtual void extraStoredPageMatchPageListCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStoredPageMatchPageListCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStoredPageMatchPageListCommandLookup(key);
        if (old_field == NULL)
          {
            extraStoredPageMatchPageListCommandAppendPair(key, new_component);
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
        if (strcmp(key, "Pages") == 0)
            {
            fromJSONPages(new_component, false);
            return;
            }
        extraStoredPageMatchPageListCommandAppendPair(key, new_component);
      }
    void extraStoredPageMatchCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Pages") == 0)
            {
            fromJSONPages(new_component, false);
            return;
            }
        extraStoredPageMatchPageListCommandSetField(key, new_component);
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
        assert(flagHasPages);
        handler->start_pair("Pages");
        handler->start_array();
        for (size_t num1 = 0; num1 < storePages.size(); ++num1)
          {
            handler->string_value(storePages[num1]);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPages()))
          {
            return "When parsing the object for %what%, the \"Pages\" field was missing.";
          }
        return NULL;
      }

    static StoredPageMatchPageListCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StoredPageMatchPageListCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StoredPageMatchPageListCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchPageListCommandJSON>, StoredPageMatchPageListCommandJSON *, bool> generator("Type StoredPageMatchPageListCommand", ignore_extras);
            parse_json_value(text, "Text for StoredPageMatchPageListCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StoredPageMatchPageListCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StoredPageMatchPageListCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchPageListCommandJSON>, StoredPageMatchPageListCommandJSON *, bool> generator("Type StoredPageMatchPageListCommand", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPages;
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
            if (!(strcmp(getStoredPageMatchCommandJSONKey().c_str(), "PageList") == 0))
                throw("The key field has a value other than `PageList'.");
            StoredPageMatchPageListCommandJSON *result = new StoredPageMatchPageListCommandJSON();
            assert(result != NULL);
            RCHandle<StoredPageMatchPageListCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStoredPageMatchPageListCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(StoredPageMatchCommandJSON *new_result)
          {
            handle_result((StoredPageMatchPageListCommandJSON *)new_result);
          }
        void finish(StoredPageMatchPageListCommandJSON *result)
          {
            if (fieldGeneratorPages.have_value)
              {
                result->initPages();
                size_t count = fieldGeneratorPages.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPages(fieldGeneratorPages.value[num]);
                  }
                fieldGeneratorPages.value.clear();
                fieldGeneratorPages.have_value = false;
              }
            else if (!(result->hasPages()))
              {
                error("When parsing the object for %what%, the \"Pages\" field was missing.");
              }
            StoredPageMatchCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(StoredPageMatchPageListCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Pages") == 0)
                return &fieldGeneratorPages;
            return StoredPageMatchCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : StoredPageMatchCommandJSON::Generator(ignore_extras), fieldGeneratorPages("field \"Pages\" of the StoredPageMatchPageListCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StoredPageMatchPageListCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPages.reset();
            StoredPageMatchCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOREDPAGEMATCHPAGELISTCOMMANDJSON_H */
