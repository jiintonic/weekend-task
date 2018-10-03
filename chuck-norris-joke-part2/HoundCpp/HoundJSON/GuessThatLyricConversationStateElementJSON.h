/* file "GuessThatLyricConversationStateElementJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GUESSTHATLYRICCONVERSATIONSTATEELEMENTJSON_H
#define GUESSTHATLYRICCONVERSATIONSTATEELEMENTJSON_H

#pragma interface

#include "MusicCommandConversationStateElementJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GuessThatLyricConversationStateElementJSON : public MusicCommandConversationStateElementJSON
  {
  public:
    enum TypeCommandKind
      {
        CommandKind_GuessThatLyricCommand
      };

    static TypeCommandKind  stringToCommandKind(const char *chars);
    static const char * stringFromCommandKind(TypeCommandKind the_enum);

  private:
    bool flagHasCommandKind;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    GuessThatLyricConversationStateElementJSON(const GuessThatLyricConversationStateElementJSON &);
    GuessThatLyricConversationStateElementJSON & operator=(const GuessThatLyricConversationStateElementJSON &other);

    JSONValue * extraCommandKindToJSON(void) const;

    void  fromJSONCommandKind(JSONValue *json_value, bool ignore_extras = false);


  public:
    GuessThatLyricConversationStateElementJSON(void);
    virtual ~GuessThatLyricConversationStateElementJSON(void);
    const char * getMusicCommandConversationStateElementKind(void) const;
    bool  hasCommandKind(void) const;
    TypeCommandKind  getCommandKind(void);
    const TypeCommandKind  getCommandKind(void) const;
    const char * getCommandKindAsChars(void) const;
    std::string  getCommandKindAsString(void) const;

    virtual size_t extraGuessThatLyricConversationStateElementComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraGuessThatLyricConversationStateElementComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraGuessThatLyricConversationStateElementComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraGuessThatLyricConversationStateElementComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraGuessThatLyricConversationStateElementLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraGuessThatLyricConversationStateElementLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraMusicCommandConversationStateElementComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCommandKind)
            ++result;
        result += extraGuessThatLyricConversationStateElementComponentCount();
        return result;
      }
    const char *extraMusicCommandConversationStateElementComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandKind)
          {
            if (remainder == 0)
                return "CommandKind";
            --remainder;
          }
        return extraGuessThatLyricConversationStateElementComponentKey(remainder);
      }
    JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCommandKind)
          {
            if (remainder == 0)
                return extraCommandKindToJSON();
            --remainder;
          }
        return extraGuessThatLyricConversationStateElementComponentValue(remainder);
      }
    const JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandKind)
          {
            if (remainder == 0)
                return extraCommandKindToJSON();
            --remainder;
          }
        return extraGuessThatLyricConversationStateElementComponentValue(remainder);
      }
    JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name)
      {
        if (strcmp(field_name, "CommandKind") == 0)
            return (flagHasCommandKind ? extraCommandKindToJSON() : NULL);
        return extraGuessThatLyricConversationStateElementLookup(field_name);
      }
    const JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name) const
      {
        if (strcmp(field_name, "CommandKind") == 0)
            return (flagHasCommandKind ? extraCommandKindToJSON() : NULL);
        return extraGuessThatLyricConversationStateElementLookup(field_name);
      }

    void setCommandKind(void)
      {
        flagHasCommandKind = true;
      }
    void setCommandKind(TypeCommandKind new_value)
      {
        setCommandKind();
      }
    void setCommandKind(const char *chars)
      {
        setCommandKind(stringToCommandKind(chars));
      }
    void setCommandKind(std::string the_string)
      {
        setCommandKind(stringToCommandKind(the_string.c_str()));
      }
    void unsetCommandKind(void)
      {
        flagHasCommandKind = false;
      }

    virtual void extraGuessThatLyricConversationStateElementAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraGuessThatLyricConversationStateElementSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraGuessThatLyricConversationStateElementLookup(key);
        if (old_field == NULL)
          {
            extraGuessThatLyricConversationStateElementAppendPair(key, new_component);
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
        if (strcmp(key, "CommandKind") == 0)
            {
            fromJSONCommandKind(new_component, false);
            return;
            }
        extraGuessThatLyricConversationStateElementAppendPair(key, new_component);
      }
    void extraMusicCommandConversationStateElementSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "CommandKind") == 0)
            {
            fromJSONCommandKind(new_component, false);
            return;
            }
        extraGuessThatLyricConversationStateElementSetField(key, new_component);
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
        if (flagHasCommandKind)
          {
            handler->start_pair("CommandKind");
            handler->string_value("GuessThatLyricCommand");
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static GuessThatLyricConversationStateElementJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GuessThatLyricConversationStateElementJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GuessThatLyricConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricConversationStateElementJSON>, GuessThatLyricConversationStateElementJSON *, bool> generator("Type GuessThatLyricConversationStateElement", ignore_extras);
            parse_json_value(text, "Text for GuessThatLyricConversationStateElementJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GuessThatLyricConversationStateElementJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GuessThatLyricConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricConversationStateElementJSON>, GuessThatLyricConversationStateElementJSON *, bool> generator("Type GuessThatLyricConversationStateElement", ignore_extras);
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
    class FieldGeneratorCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandKind(result));
              }
            virtual void handle_result(TypeCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandKind, TypeCommandKind, TypeCommandKind > fieldGeneratorCommandKind;
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
            if (!(strcmp(getMusicCommandConversationStateElementJSONKey().c_str(), "GuessThatLyricConversationStateElement") == 0))
                throw("The key field has a value other than `GuessThatLyricConversationStateElement'.");
            GuessThatLyricConversationStateElementJSON *result = new GuessThatLyricConversationStateElementJSON();
            assert(result != NULL);
            RCHandle<GuessThatLyricConversationStateElementJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraGuessThatLyricConversationStateElementAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(MusicCommandConversationStateElementJSON *new_result)
          {
            handle_result((GuessThatLyricConversationStateElementJSON *)new_result);
          }
        void finish(GuessThatLyricConversationStateElementJSON *result)
          {
            if (fieldGeneratorCommandKind.have_value)
              {
                result->setCommandKind();
                fieldGeneratorCommandKind.have_value = false;
              }
            MusicCommandConversationStateElementJSON::Generator::finish(result);
          }
        virtual void handle_result(GuessThatLyricConversationStateElementJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "CommandKind") == 0)
                return &fieldGeneratorCommandKind;
            return MusicCommandConversationStateElementJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MusicCommandConversationStateElementJSON::Generator(ignore_extras), fieldGeneratorCommandKind("field \"CommandKind\" of the GuessThatLyricConversationStateElement class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the GuessThatLyricConversationStateElement class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandKind.reset();
            MusicCommandConversationStateElementJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* GUESSTHATLYRICCONVERSATIONSTATEELEMENTJSON_H */
