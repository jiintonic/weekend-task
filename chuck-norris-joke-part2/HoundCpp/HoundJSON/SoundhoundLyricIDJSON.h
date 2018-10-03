/* file "SoundhoundLyricIDJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SOUNDHOUNDLYRICIDJSON_H
#define SOUNDHOUNDLYRICIDJSON_H

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


class SoundhoundLyricIDJSON : public ReferenceCounted
  {
  private:
    bool flagHasSoundhoundLyricID;
    std::string storeSoundhoundLyricID;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SoundhoundLyricIDJSON(const SoundhoundLyricIDJSON &);
    SoundhoundLyricIDJSON & operator=(const SoundhoundLyricIDJSON &other);

    void  fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras = false);


  public:
    SoundhoundLyricIDJSON(void);
    virtual ~SoundhoundLyricIDJSON(void);
    bool  hasSoundhoundLyricID(void) const;
    std::string  getSoundhoundLyricID(void);
    const std::string  getSoundhoundLyricID(void) const;

    virtual size_t extraSoundhoundLyricIDComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSoundhoundLyricIDComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSoundhoundLyricIDComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSoundhoundLyricIDComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSoundhoundLyricIDLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSoundhoundLyricIDLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSoundhoundLyricID(std::string new_value)
      {
        flagHasSoundhoundLyricID = true;
        storeSoundhoundLyricID = new_value;
      }
    void unsetSoundhoundLyricID(void)
      {
        flagHasSoundhoundLyricID = false;
      }

    virtual void extraSoundhoundLyricIDAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSoundhoundLyricIDSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSoundhoundLyricIDLookup(key);
        if (old_field == NULL)
          {
            extraSoundhoundLyricIDAppendPair(key, new_component);
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
        assert(flagHasSoundhoundLyricID);
        handler->start_pair("SoundhoundLyricID");
        handler->string_value(storeSoundhoundLyricID);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSoundhoundLyricID()))
          {
            return "When parsing the object for %what%, the \"SoundhoundLyricID\" field was missing.";
          }
        return NULL;
      }

    static SoundhoundLyricIDJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SoundhoundLyricIDJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SoundhoundLyricIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundhoundLyricIDJSON>, SoundhoundLyricIDJSON *, bool> generator("Type SoundhoundLyricID", ignore_extras);
            parse_json_value(text, "Text for SoundhoundLyricIDJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SoundhoundLyricIDJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SoundhoundLyricIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundhoundLyricIDJSON>, SoundhoundLyricIDJSON *, bool> generator("Type SoundhoundLyricID", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundhoundLyricID;
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
            SoundhoundLyricIDJSON *result = new SoundhoundLyricIDJSON();
            assert(result != NULL);
            RCHandle<SoundhoundLyricIDJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSoundhoundLyricIDAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SoundhoundLyricIDJSON *result)
          {
            if (fieldGeneratorSoundhoundLyricID.have_value)
              {
                result->setSoundhoundLyricID(fieldGeneratorSoundhoundLyricID.value);
                fieldGeneratorSoundhoundLyricID.have_value = false;
              }
            else if (!(result->hasSoundhoundLyricID()))
              {
                error("When parsing the object for %what%, the \"SoundhoundLyricID\" field was missing.");
              }
          }
        virtual void handle_result(SoundhoundLyricIDJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "SoundhoundLyricID") == 0)
                return &fieldGeneratorSoundhoundLyricID;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSoundhoundLyricID("field \"SoundhoundLyricID\" of the SoundhoundLyricID class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SoundhoundLyricID class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSoundhoundLyricID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SOUNDHOUNDLYRICIDJSON_H */
