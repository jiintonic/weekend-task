/* file "ScanRadioCommandIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SCANRADIOCOMMANDINTENTJSON_H
#define SCANRADIOCOMMANDINTENTJSON_H

#pragma interface

#include "RadioCommandIntentJSON.h"
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


class ScanRadioCommandIntentJSON : public RadioCommandIntentJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ScanRadioCommandIntentJSON(const ScanRadioCommandIntentJSON &);
    ScanRadioCommandIntentJSON & operator=(const ScanRadioCommandIntentJSON &other);

  public:
    ScanRadioCommandIntentJSON(void);
    virtual ~ScanRadioCommandIntentJSON(void);
    const char * getRadioIntentKind(void) const;

    virtual size_t extraScanRadioCommandIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraScanRadioCommandIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraScanRadioCommandIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraScanRadioCommandIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraScanRadioCommandIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraScanRadioCommandIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRadioCommandIntentComponentCount(void) const
      {
        size_t result = 0;
        result += extraScanRadioCommandIntentComponentCount();
        return result;
      }
    const char *extraRadioCommandIntentComponentKey(size_t component_num) const
      {
        return extraScanRadioCommandIntentComponentKey(component_num);
      }
    JSONValue *extraRadioCommandIntentComponentValue(size_t component_num)
      {
        return extraScanRadioCommandIntentComponentValue(component_num);
      }
    const JSONValue *extraRadioCommandIntentComponentValue(size_t component_num) const
      {
        return extraScanRadioCommandIntentComponentValue(component_num);
      }
    JSONValue *extraRadioCommandIntentLookup(const char *field_name)
      {
        return extraScanRadioCommandIntentLookup(field_name);
      }
    const JSONValue *extraRadioCommandIntentLookup(const char *field_name) const
      {
        return extraScanRadioCommandIntentLookup(field_name);
      }


    virtual void extraScanRadioCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraScanRadioCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraScanRadioCommandIntentLookup(key);
        if (old_field == NULL)
          {
            extraScanRadioCommandIntentAppendPair(key, new_component);
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
    void extraRadioCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        extraScanRadioCommandIntentAppendPair(key, new_component);
      }
    void extraRadioCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        extraScanRadioCommandIntentSetField(key, new_component);
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
        RadioCommandIntentJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ScanRadioCommandIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ScanRadioCommandIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ScanRadioCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ScanRadioCommandIntentJSON>, ScanRadioCommandIntentJSON *, bool> generator("Type ScanRadioCommandIntent", ignore_extras);
            parse_json_value(text, "Text for ScanRadioCommandIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ScanRadioCommandIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ScanRadioCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ScanRadioCommandIntentJSON>, ScanRadioCommandIntentJSON *, bool> generator("Type ScanRadioCommandIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RadioCommandIntentJSON::Generator
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
            if (!(strcmp(getRadioCommandIntentJSONKey().c_str(), "ScanRadio") == 0))
                throw("The key field has a value other than `ScanRadio'.");
            ScanRadioCommandIntentJSON *result = new ScanRadioCommandIntentJSON();
            assert(result != NULL);
            RCHandle<ScanRadioCommandIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraScanRadioCommandIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RadioCommandIntentJSON *new_result)
          {
            handle_result((ScanRadioCommandIntentJSON *)new_result);
          }
        void finish(ScanRadioCommandIntentJSON *result)
          {
            RadioCommandIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(ScanRadioCommandIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return RadioCommandIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RadioCommandIntentJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ScanRadioCommandIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            RadioCommandIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SCANRADIOCOMMANDINTENTJSON_H */
