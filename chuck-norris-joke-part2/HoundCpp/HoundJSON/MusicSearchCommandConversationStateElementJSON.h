/* file "MusicSearchCommandConversationStateElementJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICSEARCHCOMMANDCONVERSATIONSTATEELEMENTJSON_H
#define MUSICSEARCHCOMMANDCONVERSATIONSTATEELEMENTJSON_H

#pragma interface

#include "MusicCommandConversationStateElementJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicSearchCommandConversationStateElementJSON : public MusicCommandConversationStateElementJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MusicSearchCommandConversationStateElementJSON(const MusicSearchCommandConversationStateElementJSON &);
    MusicSearchCommandConversationStateElementJSON & operator=(const MusicSearchCommandConversationStateElementJSON &other);

  public:
    MusicSearchCommandConversationStateElementJSON(void);
    virtual ~MusicSearchCommandConversationStateElementJSON(void);
    const char * getMusicCommandConversationStateElementKind(void) const;

    virtual size_t extraMusicSearchCommandConversationStateElementComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMusicSearchCommandConversationStateElementComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMusicSearchCommandConversationStateElementComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMusicSearchCommandConversationStateElementComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMusicSearchCommandConversationStateElementLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMusicSearchCommandConversationStateElementLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraMusicCommandConversationStateElementComponentCount(void) const
      {
        size_t result = 0;
        result += extraMusicSearchCommandConversationStateElementComponentCount();
        return result;
      }
    const char *extraMusicCommandConversationStateElementComponentKey(size_t component_num) const
      {
        return extraMusicSearchCommandConversationStateElementComponentKey(component_num);
      }
    JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num)
      {
        return extraMusicSearchCommandConversationStateElementComponentValue(component_num);
      }
    const JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num) const
      {
        return extraMusicSearchCommandConversationStateElementComponentValue(component_num);
      }
    JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name)
      {
        return extraMusicSearchCommandConversationStateElementLookup(field_name);
      }
    const JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name) const
      {
        return extraMusicSearchCommandConversationStateElementLookup(field_name);
      }


    virtual void extraMusicSearchCommandConversationStateElementAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMusicSearchCommandConversationStateElementSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMusicSearchCommandConversationStateElementLookup(key);
        if (old_field == NULL)
          {
            extraMusicSearchCommandConversationStateElementAppendPair(key, new_component);
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
    void extraMusicCommandConversationStateElementAppendPair(const char *key, JSONValue *new_component)
      {
        extraMusicSearchCommandConversationStateElementAppendPair(key, new_component);
      }
    void extraMusicCommandConversationStateElementSetField(const char *key, JSONValue *new_component)
      {
        extraMusicSearchCommandConversationStateElementSetField(key, new_component);
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
        MusicCommandConversationStateElementJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicSearchCommandConversationStateElementJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicSearchCommandConversationStateElementJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicSearchCommandConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchCommandConversationStateElementJSON>, MusicSearchCommandConversationStateElementJSON *, bool> generator("Type MusicSearchCommandConversationStateElement", ignore_extras);
            parse_json_value(text, "Text for MusicSearchCommandConversationStateElementJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicSearchCommandConversationStateElementJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicSearchCommandConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchCommandConversationStateElementJSON>, MusicSearchCommandConversationStateElementJSON *, bool> generator("Type MusicSearchCommandConversationStateElement", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MusicCommandConversationStateElementJSON::Generator
      {
      private:
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
            if (!(strcmp(getMusicCommandConversationStateElementJSONKey().c_str(), "MusicSearchCommandConversationStateElement") == 0))
                throw("The key field has a value other than `MusicSearchCommandConversationStateElement'.");
            MusicSearchCommandConversationStateElementJSON *result = new MusicSearchCommandConversationStateElementJSON();
            assert(result != NULL);
            RCHandle<MusicSearchCommandConversationStateElementJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicSearchCommandConversationStateElementAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(MusicCommandConversationStateElementJSON *new_result)
          {
            handle_result((MusicSearchCommandConversationStateElementJSON *)new_result);
          }
        void finish(MusicSearchCommandConversationStateElementJSON *result)
          {
            MusicCommandConversationStateElementJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicSearchCommandConversationStateElementJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return MusicCommandConversationStateElementJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MusicCommandConversationStateElementJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MusicSearchCommandConversationStateElement class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            MusicCommandConversationStateElementJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MUSICSEARCHCOMMANDCONVERSATIONSTATEELEMENTJSON_H */
