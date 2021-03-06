/* file "SiriusChannelCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SIRIUSCHANNELCOMMANDJSON_H
#define SIRIUSCHANNELCOMMANDJSON_H

#pragma interface

#include "RadioCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <stdint.h>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SiriusChannelCommandJSON : public RadioCommandJSON
  {
  private:
    bool flagHasChannel;
    uint8_t storeChannel;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SiriusChannelCommandJSON(const SiriusChannelCommandJSON &);
    SiriusChannelCommandJSON & operator=(const SiriusChannelCommandJSON &other);

    JSONValue * extraChannelToJSON(void) const;

    void  fromJSONChannel(JSONValue *json_value, bool ignore_extras = false);


  public:
    SiriusChannelCommandJSON(void);
    virtual ~SiriusChannelCommandJSON(void);
    const char * getRadioCommandKind(void) const;
    bool  hasChannel(void) const;
    uint8_t  getChannel(void);
    const uint8_t  getChannel(void) const;

    virtual size_t extraSiriusChannelCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSiriusChannelCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSiriusChannelCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSiriusChannelCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSiriusChannelCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSiriusChannelCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRadioCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasChannel)
            ++result;
        result += extraSiriusChannelCommandComponentCount();
        return result;
      }
    const char *extraRadioCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChannel)
          {
            if (remainder == 0)
                return "Channel";
            --remainder;
          }
        return extraSiriusChannelCommandComponentKey(remainder);
      }
    JSONValue *extraRadioCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasChannel)
          {
            if (remainder == 0)
                return extraChannelToJSON();
            --remainder;
          }
        return extraSiriusChannelCommandComponentValue(remainder);
      }
    const JSONValue *extraRadioCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChannel)
          {
            if (remainder == 0)
                return extraChannelToJSON();
            --remainder;
          }
        return extraSiriusChannelCommandComponentValue(remainder);
      }
    JSONValue *extraRadioCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Channel") == 0)
            return (flagHasChannel ? extraChannelToJSON() : NULL);
        return extraSiriusChannelCommandLookup(field_name);
      }
    const JSONValue *extraRadioCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Channel") == 0)
            return (flagHasChannel ? extraChannelToJSON() : NULL);
        return extraSiriusChannelCommandLookup(field_name);
      }

    void setChannel(uint8_t new_value)
      {
        flagHasChannel = true;
        if (new_value < 1)
            throw("The value for field Channel of SiriusChannelCommandJSON is less than the lower bound (1) for that field.");
        if (new_value > 233)
            throw("The value for field Channel of SiriusChannelCommandJSON is greater than the upper bound (233) for that field.");
        storeChannel = new_value;
      }
    void unsetChannel(void)
      {
        flagHasChannel = false;
      }

    virtual void extraSiriusChannelCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSiriusChannelCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSiriusChannelCommandLookup(key);
        if (old_field == NULL)
          {
            extraSiriusChannelCommandAppendPair(key, new_component);
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
    void extraRadioCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Channel") == 0)
            {
            fromJSONChannel(new_component, false);
            return;
            }
        extraSiriusChannelCommandAppendPair(key, new_component);
      }
    void extraRadioCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Channel") == 0)
            {
            fromJSONChannel(new_component, false);
            return;
            }
        extraSiriusChannelCommandSetField(key, new_component);
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
        RadioCommandJSON::write_fields_as_json(handler);
        assert(flagHasChannel);
        handler->start_pair("Channel");
        handler->number_value(storeChannel);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasChannel()))
          {
            return "When parsing the object for %what%, the \"Channel\" field was missing.";
          }
        return NULL;
      }

    static SiriusChannelCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SiriusChannelCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SiriusChannelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SiriusChannelCommandJSON>, SiriusChannelCommandJSON *, bool> generator("Type SiriusChannelCommand", ignore_extras);
            parse_json_value(text, "Text for SiriusChannelCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SiriusChannelCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SiriusChannelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SiriusChannelCommandJSON>, SiriusChannelCommandJSON *, bool> generator("Type SiriusChannelCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RadioCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 233>, uint8_t, uint8_t > fieldGeneratorChannel;
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
            if (!(strcmp(getRadioCommandJSONKey().c_str(), "SiriusChannel") == 0))
                throw("The key field has a value other than `SiriusChannel'.");
            SiriusChannelCommandJSON *result = new SiriusChannelCommandJSON();
            assert(result != NULL);
            RCHandle<SiriusChannelCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSiriusChannelCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RadioCommandJSON *new_result)
          {
            handle_result((SiriusChannelCommandJSON *)new_result);
          }
        void finish(SiriusChannelCommandJSON *result)
          {
            if (fieldGeneratorChannel.have_value)
              {
                result->setChannel(fieldGeneratorChannel.value);
                fieldGeneratorChannel.have_value = false;
              }
            else if (!(result->hasChannel()))
              {
                error("When parsing the object for %what%, the \"Channel\" field was missing.");
              }
            RadioCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(SiriusChannelCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Channel") == 0)
                return &fieldGeneratorChannel;
            return RadioCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RadioCommandJSON::Generator(ignore_extras), fieldGeneratorChannel("field \"Channel\" of the SiriusChannelCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SiriusChannelCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorChannel.reset();
            RadioCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SIRIUSCHANNELCOMMANDJSON_H */
