/* file "MusicSearchCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICSEARCHCOMMANDJSON_H
#define MUSICSEARCHCOMMANDJSON_H

#pragma interface

#include "MusicCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "MusicSearchCommandNativeDataJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicSearchCommandJSON : public MusicCommandJSON
  {
  private:
    bool flagHasNativeData;
    MusicSearchCommandNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MusicSearchCommandJSON(const MusicSearchCommandJSON &);
    MusicSearchCommandJSON & operator=(const MusicSearchCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicSearchCommandJSON(void);
    virtual ~MusicSearchCommandJSON(void);
    const char * getMusicCommandKind(void) const;
    bool  hasNativeData(void) const;
    MusicSearchCommandNativeDataJSON *  getNativeData(void);
    const MusicSearchCommandNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraMusicSearchCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMusicSearchCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMusicSearchCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMusicSearchCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMusicSearchCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMusicSearchCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraMusicCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraMusicSearchCommandComponentCount();
        return result;
      }
    const char *extraMusicCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraMusicSearchCommandComponentKey(remainder);
      }
    JSONValue *extraMusicCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraMusicSearchCommandComponentValue(remainder);
      }
    const JSONValue *extraMusicCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraMusicSearchCommandComponentValue(remainder);
      }
    JSONValue *extraMusicCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraMusicSearchCommandLookup(field_name);
      }
    const JSONValue *extraMusicCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraMusicSearchCommandLookup(field_name);
      }

    void setNativeData(MusicSearchCommandNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
        JSONHoldingGenerator<MusicCommandNativeDataJSON::Generator, RCHandle<MusicCommandNativeDataJSON>, MusicCommandNativeDataJSON *> convert_handler("Type MusicCommandNativeDataJSON");
        new_value->write_as_json(&convert_handler);
        MusicCommandJSON::setNativeData(convert_handler.value.referenced());
      }
    void setNativeData(MusicCommandNativeDataJSON * new_value)
      {
        JSONHoldingGenerator<MusicSearchCommandNativeDataJSON::Generator, RCHandle<MusicSearchCommandNativeDataJSON>, MusicSearchCommandNativeDataJSON *> convert_handler("Type MusicSearchCommandNativeDataJSON");
        new_value->write_as_json(&convert_handler);
        setNativeData(convert_handler.value.referenced());
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
        MusicCommandJSON::unsetNativeData();
      }

    virtual void extraMusicSearchCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMusicSearchCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMusicSearchCommandLookup(key);
        if (old_field == NULL)
          {
            extraMusicSearchCommandAppendPair(key, new_component);
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
    void extraMusicCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraMusicSearchCommandAppendPair(key, new_component);
      }
    void extraMusicCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraMusicSearchCommandSetField(key, new_component);
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
        MusicCommandJSON::write_fields_as_json(handler);
      }
    virtual void writeFieldNativeData(JSONHandler *handler) const
      {
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static MusicSearchCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicSearchCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicSearchCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchCommandJSON>, MusicSearchCommandJSON *, bool> generator("Type MusicSearchCommand", ignore_extras);
            parse_json_value(text, "Text for MusicSearchCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicSearchCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicSearchCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchCommandJSON>, MusicSearchCommandJSON *, bool> generator("Type MusicSearchCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MusicCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<MusicSearchCommandNativeDataJSON::Generator, RCHandle<MusicSearchCommandNativeDataJSON>, MusicSearchCommandNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getMusicCommandJSONKey().c_str(), "MusicSearchCommand") == 0))
                throw("The key field has a value other than `MusicSearchCommand'.");
            MusicSearchCommandJSON *result = new MusicSearchCommandJSON();
            assert(result != NULL);
            RCHandle<MusicSearchCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicSearchCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(MusicCommandJSON *new_result)
          {
            handle_result((MusicSearchCommandJSON *)new_result);
          }
        void finish(MusicSearchCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            MusicCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicSearchCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return MusicCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MusicCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the MusicSearchCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MusicSearchCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            MusicCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MUSICSEARCHCOMMANDJSON_H */
