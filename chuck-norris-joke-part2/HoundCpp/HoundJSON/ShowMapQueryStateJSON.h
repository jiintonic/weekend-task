/* file "ShowMapQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWMAPQUERYSTATEJSON_H
#define SHOWMAPQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowMapQueryStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasMapLocationSpecs;
    std::vector< MapLocationJSON * > storeMapLocationSpecs;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowMapQueryStateJSON(const ShowMapQueryStateJSON &);
    ShowMapQueryStateJSON & operator=(const ShowMapQueryStateJSON &other);

    void  fromJSONMapLocationSpecs(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowMapQueryStateJSON(void);
    virtual ~ShowMapQueryStateJSON(void);
    bool  hasMapLocationSpecs(void) const;
    size_t  countOfMapLocationSpecs(void) const;
    MapLocationJSON *  elementOfMapLocationSpecs(size_t element_num);
    const MapLocationJSON *  elementOfMapLocationSpecs(size_t element_num) const;
    std::vector< MapLocationJSON * >  getMapLocationSpecs(void);
    const std::vector< MapLocationJSON * >  getMapLocationSpecs(void) const;

    virtual size_t extraShowMapQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowMapQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowMapQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowMapQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowMapQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowMapQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initMapLocationSpecs(void)
      {
        if (flagHasMapLocationSpecs)
          {
            for (size_t num2 = 0; num2 < storeMapLocationSpecs.size(); ++num2)
              {
                storeMapLocationSpecs[num2]->remove_reference();
              }
          }
        flagHasMapLocationSpecs = true;
        storeMapLocationSpecs.clear();
      }
    void appendMapLocationSpecs(MapLocationJSON * to_append)
      {
        if (!flagHasMapLocationSpecs)
          {
            flagHasMapLocationSpecs = true;
            storeMapLocationSpecs.clear();
          }
        assert(flagHasMapLocationSpecs);
        to_append->add_reference();
        storeMapLocationSpecs.push_back(to_append);
      }
    void unsetMapLocationSpecs(void)
      {
        if (flagHasMapLocationSpecs)
          {
            for (size_t num3 = 0; num3 < storeMapLocationSpecs.size(); ++num3)
              {
                storeMapLocationSpecs[num3]->remove_reference();
              }
          }
        flagHasMapLocationSpecs = false;
        storeMapLocationSpecs.clear();
      }

    virtual void extraShowMapQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowMapQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowMapQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraShowMapQueryStateAppendPair(key, new_component);
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
        assert(flagHasMapLocationSpecs);
        handler->start_pair("MapLocationSpecs");
        assert(storeMapLocationSpecs.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeMapLocationSpecs.size(); ++num1)
          {
            storeMapLocationSpecs[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMapLocationSpecs()))
          {
            return "When parsing the object for %what%, the \"MapLocationSpecs\" field was missing.";
          }
        return NULL;
      }

    static ShowMapQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowMapQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowMapQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowMapQueryStateJSON>, ShowMapQueryStateJSON *, bool> generator("Type ShowMapQueryState", ignore_extras);
            parse_json_value(text, "Text for ShowMapQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowMapQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowMapQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowMapQueryStateJSON>, ShowMapQueryStateJSON *, bool> generator("Type ShowMapQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocationSpecs;
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
            ShowMapQueryStateJSON *result = new ShowMapQueryStateJSON();
            assert(result != NULL);
            RCHandle<ShowMapQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowMapQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ShowMapQueryStateJSON *result)
          {
            if (fieldGeneratorMapLocationSpecs.have_value)
              {
                result->initMapLocationSpecs();
                size_t count = fieldGeneratorMapLocationSpecs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMapLocationSpecs(fieldGeneratorMapLocationSpecs.value[num].referenced());
                  }
                fieldGeneratorMapLocationSpecs.value.clear();
                fieldGeneratorMapLocationSpecs.have_value = false;
              }
            else if (!(result->hasMapLocationSpecs()))
              {
                error("When parsing the object for %what%, the \"MapLocationSpecs\" field was missing.");
              }
          }
        virtual void handle_result(ShowMapQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "MapLocationSpecs") == 0)
                return &fieldGeneratorMapLocationSpecs;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMapLocationSpecs("field \"MapLocationSpecs\" of the ShowMapQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowMapQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMapLocationSpecs.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWMAPQUERYSTATEJSON_H */
