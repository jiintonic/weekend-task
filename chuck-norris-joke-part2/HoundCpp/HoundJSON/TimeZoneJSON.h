/* file "TimeZoneJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEZONEJSON_H
#define TIMEZONEJSON_H

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


class TimeZoneJSON : public ReferenceCounted
  {
  private:
    bool flagHasOlsonName;
    std::string storeOlsonName;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasSpokenLabel;
    std::string storeSpokenLabel;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeZoneJSON(const TimeZoneJSON &);
    TimeZoneJSON & operator=(const TimeZoneJSON &other);

    void  fromJSONOlsonName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeZoneJSON(void);
    virtual ~TimeZoneJSON(void);
    bool  hasOlsonName(void) const;
    std::string  getOlsonName(void);
    const std::string  getOlsonName(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasSpokenLabel(void) const;
    std::string  getSpokenLabel(void);
    const std::string  getSpokenLabel(void) const;

    virtual size_t extraTimeZoneComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeZoneComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeZoneComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeZoneComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeZoneLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeZoneLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setOlsonName(std::string new_value)
      {
        flagHasOlsonName = true;
        storeOlsonName = new_value;
      }
    void unsetOlsonName(void)
      {
        flagHasOlsonName = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }
    void setSpokenLabel(std::string new_value)
      {
        flagHasSpokenLabel = true;
        storeSpokenLabel = new_value;
      }
    void unsetSpokenLabel(void)
      {
        flagHasSpokenLabel = false;
      }

    virtual void extraTimeZoneAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeZoneSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeZoneLookup(key);
        if (old_field == NULL)
          {
            extraTimeZoneAppendPair(key, new_component);
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
        assert(flagHasOlsonName);
        handler->start_pair("OlsonName");
        handler->string_value(storeOlsonName);
        if (flagHasLabel)
          {
            handler->start_pair("Label");
            handler->string_value(storeLabel);
          }
        if (flagHasSpokenLabel)
          {
            handler->start_pair("SpokenLabel");
            handler->string_value(storeSpokenLabel);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOlsonName()))
          {
            return "When parsing the object for %what%, the \"OlsonName\" field was missing.";
          }
        return NULL;
      }

    static TimeZoneJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeZoneJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeZoneJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool> generator("Type TimeZone", ignore_extras);
            parse_json_value(text, "Text for TimeZoneJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeZoneJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeZoneJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool> generator("Type TimeZone", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOlsonName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenLabel;
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
            TimeZoneJSON *result = new TimeZoneJSON();
            assert(result != NULL);
            RCHandle<TimeZoneJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeZoneAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimeZoneJSON *result)
          {
            if (fieldGeneratorOlsonName.have_value)
              {
                result->setOlsonName(fieldGeneratorOlsonName.value);
                fieldGeneratorOlsonName.have_value = false;
              }
            else if (!(result->hasOlsonName()))
              {
                error("When parsing the object for %what%, the \"OlsonName\" field was missing.");
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            if (fieldGeneratorSpokenLabel.have_value)
              {
                result->setSpokenLabel(fieldGeneratorSpokenLabel.value);
                fieldGeneratorSpokenLabel.have_value = false;
              }
          }
        virtual void handle_result(TimeZoneJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "lsonName") == 0)
                        return &fieldGeneratorOlsonName;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenLabel") == 0)
                        return &fieldGeneratorSpokenLabel;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOlsonName("field \"OlsonName\" of the TimeZone class"), fieldGeneratorLabel("field \"Label\" of the TimeZone class"), fieldGeneratorSpokenLabel("field \"SpokenLabel\" of the TimeZone class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeZone class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOlsonName.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorSpokenLabel.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEZONEJSON_H */
