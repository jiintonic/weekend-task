/* file "VoiceParametersJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef VOICEPARAMETERSJSON_H
#define VOICEPARAMETERSJSON_H

#pragma interface

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


class VoiceParametersJSON : public ReferenceCounted
  {
  private:
    bool flagHasSpeed;
    uint8_t storeSpeed;
    bool flagHasVolume;
    uint16_t storeVolume;
    bool flagHasPitch;
    uint8_t storePitch;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    VoiceParametersJSON(const VoiceParametersJSON &);
    VoiceParametersJSON & operator=(const VoiceParametersJSON &other);

    void  fromJSONSpeed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolume(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPitch(JSONValue *json_value, bool ignore_extras = false);


  public:
    VoiceParametersJSON(void);
    virtual ~VoiceParametersJSON(void);
    bool  hasSpeed(void) const;
    uint8_t  getSpeed(void);
    const uint8_t  getSpeed(void) const;
    bool  hasVolume(void) const;
    uint16_t  getVolume(void);
    const uint16_t  getVolume(void) const;
    bool  hasPitch(void) const;
    uint8_t  getPitch(void);
    const uint8_t  getPitch(void) const;

    virtual size_t extraVoiceParametersComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraVoiceParametersComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraVoiceParametersComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraVoiceParametersComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraVoiceParametersLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraVoiceParametersLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSpeed(uint8_t new_value)
      {
        flagHasSpeed = true;
        if (new_value < 50)
            throw("The value for field Speed of VoiceParametersJSON is less than the lower bound (50) for that field.");
        if (new_value > 200)
            throw("The value for field Speed of VoiceParametersJSON is greater than the upper bound (200) for that field.");
        storeSpeed = new_value;
      }
    void unsetSpeed(void)
      {
        flagHasSpeed = false;
      }
    void setVolume(uint16_t new_value)
      {
        flagHasVolume = true;
        if (new_value < 0)
            throw("The value for field Volume of VoiceParametersJSON is less than the lower bound (0) for that field.");
        if (new_value > 500)
            throw("The value for field Volume of VoiceParametersJSON is greater than the upper bound (500) for that field.");
        storeVolume = new_value;
      }
    void unsetVolume(void)
      {
        flagHasVolume = false;
      }
    void setPitch(uint8_t new_value)
      {
        flagHasPitch = true;
        if (new_value < 80)
            throw("The value for field Pitch of VoiceParametersJSON is less than the lower bound (80) for that field.");
        if (new_value > 120)
            throw("The value for field Pitch of VoiceParametersJSON is greater than the upper bound (120) for that field.");
        storePitch = new_value;
      }
    void unsetPitch(void)
      {
        flagHasPitch = false;
      }

    virtual void extraVoiceParametersAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraVoiceParametersSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraVoiceParametersLookup(key);
        if (old_field == NULL)
          {
            extraVoiceParametersAppendPair(key, new_component);
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
        if (flagHasSpeed)
          {
            handler->start_pair("Speed");
            handler->number_value(storeSpeed);
          }
        if (flagHasVolume)
          {
            handler->start_pair("Volume");
            handler->number_value(storeVolume);
          }
        if (flagHasPitch)
          {
            handler->start_pair("Pitch");
            handler->number_value(storePitch);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static VoiceParametersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static VoiceParametersJSON *from_text(const char *text, bool ignore_extras = false)
      {
        VoiceParametersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VoiceParametersJSON>, VoiceParametersJSON *, bool> generator("Type VoiceParameters", ignore_extras);
            parse_json_value(text, "Text for VoiceParametersJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static VoiceParametersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        VoiceParametersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VoiceParametersJSON>, VoiceParametersJSON *, bool> generator("Type VoiceParameters", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 50, 200>, uint8_t, uint8_t > fieldGeneratorSpeed;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 0, 500>, uint16_t, uint16_t > fieldGeneratorVolume;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 80, 120>, uint8_t, uint8_t > fieldGeneratorPitch;
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
            VoiceParametersJSON *result = new VoiceParametersJSON();
            assert(result != NULL);
            RCHandle<VoiceParametersJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraVoiceParametersAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(VoiceParametersJSON *result)
          {
            if (fieldGeneratorSpeed.have_value)
              {
                result->setSpeed(fieldGeneratorSpeed.value);
                fieldGeneratorSpeed.have_value = false;
              }
            if (fieldGeneratorVolume.have_value)
              {
                result->setVolume(fieldGeneratorVolume.value);
                fieldGeneratorVolume.have_value = false;
              }
            if (fieldGeneratorPitch.have_value)
              {
                result->setPitch(fieldGeneratorPitch.value);
                fieldGeneratorPitch.have_value = false;
              }
          }
        virtual void handle_result(VoiceParametersJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'P':
                    if (strcmp(&(field_name[1]), "itch") == 0)
                        return &fieldGeneratorPitch;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "peed") == 0)
                        return &fieldGeneratorSpeed;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "olume") == 0)
                        return &fieldGeneratorVolume;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpeed("field \"Speed\" of the VoiceParameters class"), fieldGeneratorVolume("field \"Volume\" of the VoiceParameters class"), fieldGeneratorPitch("field \"Pitch\" of the VoiceParameters class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the VoiceParameters class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpeed.reset();
            fieldGeneratorVolume.reset();
            fieldGeneratorPitch.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* VOICEPARAMETERSJSON_H */
