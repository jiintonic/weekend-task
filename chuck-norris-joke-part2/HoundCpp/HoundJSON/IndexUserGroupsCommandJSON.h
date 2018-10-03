/* file "IndexUserGroupsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef INDEXUSERGROUPSCOMMANDJSON_H
#define INDEXUSERGROUPSCOMMANDJSON_H

#pragma interface

#include "EditDeviceCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class IndexUserGroupsCommandJSON : public EditDeviceCommandJSON
  {
  private:
    bool flagHasIndexedUserGroupsCount;
    OInteger storeIndexedUserGroupsCount;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    IndexUserGroupsCommandJSON(const IndexUserGroupsCommandJSON &);
    IndexUserGroupsCommandJSON & operator=(const IndexUserGroupsCommandJSON &other);

    JSONValue * extraIndexedUserGroupsCountToJSON(void) const;

    void  fromJSONIndexedUserGroupsCount(JSONValue *json_value, bool ignore_extras = false);


  public:
    IndexUserGroupsCommandJSON(void);
    virtual ~IndexUserGroupsCommandJSON(void);
    const char * getEditDeviceCommandKind(void) const;
    bool  hasIndexedUserGroupsCount(void) const;
    OInteger  getIndexedUserGroupsCount(void);
    const OInteger  getIndexedUserGroupsCount(void) const;

    virtual size_t extraIndexUserGroupsCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraIndexUserGroupsCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraIndexUserGroupsCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraIndexUserGroupsCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraIndexUserGroupsCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraIndexUserGroupsCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraEditDeviceCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasIndexedUserGroupsCount)
            ++result;
        result += extraIndexUserGroupsCommandComponentCount();
        return result;
      }
    const char *extraEditDeviceCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIndexedUserGroupsCount)
          {
            if (remainder == 0)
                return "IndexedUserGroupsCount";
            --remainder;
          }
        return extraIndexUserGroupsCommandComponentKey(remainder);
      }
    JSONValue *extraEditDeviceCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasIndexedUserGroupsCount)
          {
            if (remainder == 0)
                return extraIndexedUserGroupsCountToJSON();
            --remainder;
          }
        return extraIndexUserGroupsCommandComponentValue(remainder);
      }
    const JSONValue *extraEditDeviceCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIndexedUserGroupsCount)
          {
            if (remainder == 0)
                return extraIndexedUserGroupsCountToJSON();
            --remainder;
          }
        return extraIndexUserGroupsCommandComponentValue(remainder);
      }
    JSONValue *extraEditDeviceCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "IndexedUserGroupsCount") == 0)
            return (flagHasIndexedUserGroupsCount ? extraIndexedUserGroupsCountToJSON() : NULL);
        return extraIndexUserGroupsCommandLookup(field_name);
      }
    const JSONValue *extraEditDeviceCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "IndexedUserGroupsCount") == 0)
            return (flagHasIndexedUserGroupsCount ? extraIndexedUserGroupsCountToJSON() : NULL);
        return extraIndexUserGroupsCommandLookup(field_name);
      }

    void setIndexedUserGroupsCount(OInteger new_value)
      {
        flagHasIndexedUserGroupsCount = true;
        if (new_value < 0)
            throw("The value for field IndexedUserGroupsCount of IndexUserGroupsCommandJSON is less than the lower bound (0) for that field.");
        storeIndexedUserGroupsCount = new_value;
      }
    void unsetIndexedUserGroupsCount(void)
      {
        flagHasIndexedUserGroupsCount = false;
      }

    virtual void extraIndexUserGroupsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraIndexUserGroupsCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraIndexUserGroupsCommandLookup(key);
        if (old_field == NULL)
          {
            extraIndexUserGroupsCommandAppendPair(key, new_component);
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
    void extraEditDeviceCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "IndexedUserGroupsCount") == 0)
            {
            fromJSONIndexedUserGroupsCount(new_component, false);
            return;
            }
        extraIndexUserGroupsCommandAppendPair(key, new_component);
      }
    void extraEditDeviceCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "IndexedUserGroupsCount") == 0)
            {
            fromJSONIndexedUserGroupsCount(new_component, false);
            return;
            }
        extraIndexUserGroupsCommandSetField(key, new_component);
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
        EditDeviceCommandJSON::write_fields_as_json(handler);
        assert(flagHasIndexedUserGroupsCount);
        handler->start_pair("IndexedUserGroupsCount");
        handler->number_value(storeIndexedUserGroupsCount.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasIndexedUserGroupsCount()))
          {
            return "When parsing the object for %what%, the \"IndexedUserGroupsCount\" field was missing.";
          }
        return NULL;
      }

    static IndexUserGroupsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static IndexUserGroupsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        IndexUserGroupsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IndexUserGroupsCommandJSON>, IndexUserGroupsCommandJSON *, bool> generator("Type IndexUserGroupsCommand", ignore_extras);
            parse_json_value(text, "Text for IndexUserGroupsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static IndexUserGroupsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        IndexUserGroupsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IndexUserGroupsCommandJSON>, IndexUserGroupsCommandJSON *, bool> generator("Type IndexUserGroupsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public EditDeviceCommandJSON::Generator
      {
      private:
        static char lowerBoundIndexedUserGroupsCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundIndexedUserGroupsCount>, OInteger, o_integer > fieldGeneratorIndexedUserGroupsCount;
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
            if (!(strcmp(getEditDeviceCommandJSONKey().c_str(), "IndexUserGroups") == 0))
                throw("The key field has a value other than `IndexUserGroups'.");
            IndexUserGroupsCommandJSON *result = new IndexUserGroupsCommandJSON();
            assert(result != NULL);
            RCHandle<IndexUserGroupsCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraIndexUserGroupsCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(EditDeviceCommandJSON *new_result)
          {
            handle_result((IndexUserGroupsCommandJSON *)new_result);
          }
        void finish(IndexUserGroupsCommandJSON *result)
          {
            if (fieldGeneratorIndexedUserGroupsCount.have_value)
              {
                result->setIndexedUserGroupsCount(fieldGeneratorIndexedUserGroupsCount.value);
                fieldGeneratorIndexedUserGroupsCount.have_value = false;
              }
            else if (!(result->hasIndexedUserGroupsCount()))
              {
                error("When parsing the object for %what%, the \"IndexedUserGroupsCount\" field was missing.");
              }
            EditDeviceCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(IndexUserGroupsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "IndexedUserGroupsCount") == 0)
                return &fieldGeneratorIndexedUserGroupsCount;
            return EditDeviceCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : EditDeviceCommandJSON::Generator(ignore_extras), fieldGeneratorIndexedUserGroupsCount("field \"IndexedUserGroupsCount\" of the IndexUserGroupsCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the IndexUserGroupsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIndexedUserGroupsCount.reset();
            EditDeviceCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* INDEXUSERGROUPSCOMMANDJSON_H */
