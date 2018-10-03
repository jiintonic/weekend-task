/* file "VoiceActivityDetectionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef VOICEACTIVITYDETECTIONJSON_H
#define VOICEACTIVITYDETECTIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class VoiceActivityDetectionJSON : public ReferenceCounted
  {
  private:
    bool flagHasMaxSilenceSeconds;
    double storeMaxSilenceSeconds;
    std::string textStoreMaxSilenceSeconds;
    bool flagHasMaxSilenceAfterFullQuerySeconds;
    double storeMaxSilenceAfterFullQuerySeconds;
    std::string textStoreMaxSilenceAfterFullQuerySeconds;
    bool flagHasMaxSilenceAfterPartialQuerySeconds;
    double storeMaxSilenceAfterPartialQuerySeconds;
    std::string textStoreMaxSilenceAfterPartialQuerySeconds;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    VoiceActivityDetectionJSON(const VoiceActivityDetectionJSON &);
    VoiceActivityDetectionJSON & operator=(const VoiceActivityDetectionJSON &other);

    void  fromJSONMaxSilenceSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxSilenceAfterFullQuerySeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxSilenceAfterPartialQuerySeconds(JSONValue *json_value, bool ignore_extras = false);


  public:
    VoiceActivityDetectionJSON(void);
    virtual ~VoiceActivityDetectionJSON(void);
    bool  hasMaxSilenceSeconds(void) const;
    double  getMaxSilenceSeconds(void);
    const double  getMaxSilenceSeconds(void) const;
    std::string  getMaxSilenceSecondsAsText(void) const;
    bool  hasMaxSilenceAfterFullQuerySeconds(void) const;
    double  getMaxSilenceAfterFullQuerySeconds(void);
    const double  getMaxSilenceAfterFullQuerySeconds(void) const;
    std::string  getMaxSilenceAfterFullQuerySecondsAsText(void) const;
    bool  hasMaxSilenceAfterPartialQuerySeconds(void) const;
    double  getMaxSilenceAfterPartialQuerySeconds(void);
    const double  getMaxSilenceAfterPartialQuerySeconds(void) const;
    std::string  getMaxSilenceAfterPartialQuerySecondsAsText(void) const;

    virtual size_t extraVoiceActivityDetectionComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraVoiceActivityDetectionComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraVoiceActivityDetectionComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraVoiceActivityDetectionComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraVoiceActivityDetectionLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraVoiceActivityDetectionLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setMaxSilenceSeconds(double new_value)
      {
        flagHasMaxSilenceSeconds = true;
        if (new_value < 0)
            throw("The value for field MaxSilenceSeconds of VoiceActivityDetectionJSON is less than the lower bound (0) for that field.");
        storeMaxSilenceSeconds = new_value;
        textStoreMaxSilenceSeconds = "";
      }
    void setMaxSilenceSecondsText(std::string new_value)
      {
        flagHasMaxSilenceSeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field MaxSilenceSeconds of VoiceActivityDetectionJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field MaxSilenceSeconds of VoiceActivityDetectionJSON is less than the lower bound (0) for that field.");
        textStoreMaxSilenceSeconds = new_value;
      }
    void unsetMaxSilenceSeconds(void)
      {
        flagHasMaxSilenceSeconds = false;
      }
    void setMaxSilenceAfterFullQuerySeconds(double new_value)
      {
        flagHasMaxSilenceAfterFullQuerySeconds = true;
        if (new_value < 0)
            throw("The value for field MaxSilenceAfterFullQuerySeconds of VoiceActivityDetectionJSON is less than the lower bound (0) for that field.");
        storeMaxSilenceAfterFullQuerySeconds = new_value;
        textStoreMaxSilenceAfterFullQuerySeconds = "";
      }
    void setMaxSilenceAfterFullQuerySecondsText(std::string new_value)
      {
        flagHasMaxSilenceAfterFullQuerySeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field MaxSilenceAfterFullQuerySeconds of VoiceActivityDetectionJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field MaxSilenceAfterFullQuerySeconds of VoiceActivityDetectionJSON is less than the lower bound (0) for that field.");
        textStoreMaxSilenceAfterFullQuerySeconds = new_value;
      }
    void unsetMaxSilenceAfterFullQuerySeconds(void)
      {
        flagHasMaxSilenceAfterFullQuerySeconds = false;
      }
    void setMaxSilenceAfterPartialQuerySeconds(double new_value)
      {
        flagHasMaxSilenceAfterPartialQuerySeconds = true;
        if (new_value < 0)
            throw("The value for field MaxSilenceAfterPartialQuerySeconds of VoiceActivityDetectionJSON is less than the lower bound (0) for that field.");
        storeMaxSilenceAfterPartialQuerySeconds = new_value;
        textStoreMaxSilenceAfterPartialQuerySeconds = "";
      }
    void setMaxSilenceAfterPartialQuerySecondsText(std::string new_value)
      {
        flagHasMaxSilenceAfterPartialQuerySeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field MaxSilenceAfterPartialQuerySeconds of VoiceActivityDetectionJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field MaxSilenceAfterPartialQuerySeconds of VoiceActivityDetectionJSON is less than the lower bound (0) for that field.");
        textStoreMaxSilenceAfterPartialQuerySeconds = new_value;
      }
    void unsetMaxSilenceAfterPartialQuerySeconds(void)
      {
        flagHasMaxSilenceAfterPartialQuerySeconds = false;
      }

    virtual void extraVoiceActivityDetectionAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraVoiceActivityDetectionSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraVoiceActivityDetectionLookup(key);
        if (old_field == NULL)
          {
            extraVoiceActivityDetectionAppendPair(key, new_component);
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
        if (flagHasMaxSilenceSeconds)
          {
            handler->start_pair("MaxSilenceSeconds");
            if (textStoreMaxSilenceSeconds != "")
                handler->number_value(textStoreMaxSilenceSeconds.c_str());
            else if (((double)(long int)storeMaxSilenceSeconds) == storeMaxSilenceSeconds)
                handler->number_value((long int)storeMaxSilenceSeconds);
            else
                handler->number_value(storeMaxSilenceSeconds);
          }
        if (flagHasMaxSilenceAfterFullQuerySeconds)
          {
            handler->start_pair("MaxSilenceAfterFullQuerySeconds");
            if (textStoreMaxSilenceAfterFullQuerySeconds != "")
                handler->number_value(textStoreMaxSilenceAfterFullQuerySeconds.c_str());
            else if (((double)(long int)storeMaxSilenceAfterFullQuerySeconds) == storeMaxSilenceAfterFullQuerySeconds)
                handler->number_value((long int)storeMaxSilenceAfterFullQuerySeconds);
            else
                handler->number_value(storeMaxSilenceAfterFullQuerySeconds);
          }
        if (flagHasMaxSilenceAfterPartialQuerySeconds)
          {
            handler->start_pair("MaxSilenceAfterPartialQuerySeconds");
            if (textStoreMaxSilenceAfterPartialQuerySeconds != "")
                handler->number_value(textStoreMaxSilenceAfterPartialQuerySeconds.c_str());
            else if (((double)(long int)storeMaxSilenceAfterPartialQuerySeconds) == storeMaxSilenceAfterPartialQuerySeconds)
                handler->number_value((long int)storeMaxSilenceAfterPartialQuerySeconds);
            else
                handler->number_value(storeMaxSilenceAfterPartialQuerySeconds);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static VoiceActivityDetectionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static VoiceActivityDetectionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        VoiceActivityDetectionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VoiceActivityDetectionJSON>, VoiceActivityDetectionJSON *, bool> generator("Type VoiceActivityDetection", ignore_extras);
            parse_json_value(text, "Text for VoiceActivityDetectionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static VoiceActivityDetectionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        VoiceActivityDetectionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VoiceActivityDetectionJSON>, VoiceActivityDetectionJSON *, bool> generator("Type VoiceActivityDetection", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMaxSilenceSeconds;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMaxSilenceAfterFullQuerySeconds;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMaxSilenceAfterPartialQuerySeconds;
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
            VoiceActivityDetectionJSON *result = new VoiceActivityDetectionJSON();
            assert(result != NULL);
            RCHandle<VoiceActivityDetectionJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraVoiceActivityDetectionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(VoiceActivityDetectionJSON *result)
          {
            if (fieldGeneratorMaxSilenceSeconds.have_value)
              {
                result->setMaxSilenceSecondsText(fieldGeneratorMaxSilenceSeconds.value);
                fieldGeneratorMaxSilenceSeconds.have_value = false;
              }
            if (fieldGeneratorMaxSilenceAfterFullQuerySeconds.have_value)
              {
                result->setMaxSilenceAfterFullQuerySecondsText(fieldGeneratorMaxSilenceAfterFullQuerySeconds.value);
                fieldGeneratorMaxSilenceAfterFullQuerySeconds.have_value = false;
              }
            if (fieldGeneratorMaxSilenceAfterPartialQuerySeconds.have_value)
              {
                result->setMaxSilenceAfterPartialQuerySecondsText(fieldGeneratorMaxSilenceAfterPartialQuerySeconds.value);
                fieldGeneratorMaxSilenceAfterPartialQuerySeconds.have_value = false;
              }
          }
        virtual void handle_result(VoiceActivityDetectionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "MaxSilence", 10) == 0)
              {
                switch ((unsigned char)(field_name[10]))
                  {
                    case 'A':
                        if (strncmp(&(field_name[11]), "fter", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[15]))
                              {
                                case 'F':
                                    if (strcmp(&(field_name[16]), "ullQuerySeconds") == 0)
                                        return &fieldGeneratorMaxSilenceAfterFullQuerySeconds;
                                    break;
                                case 'P':
                                    if (strcmp(&(field_name[16]), "artialQuerySeconds") == 0)
                                        return &fieldGeneratorMaxSilenceAfterPartialQuerySeconds;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(field_name[11]), "econds") == 0)
                            return &fieldGeneratorMaxSilenceSeconds;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMaxSilenceSeconds("field \"MaxSilenceSeconds\" of the VoiceActivityDetection class"), fieldGeneratorMaxSilenceAfterFullQuerySeconds("field \"MaxSilenceAfterFullQuerySeconds\" of the VoiceActivityDetection class"), fieldGeneratorMaxSilenceAfterPartialQuerySeconds("field \"MaxSilenceAfterPartialQuerySeconds\" of the VoiceActivityDetection class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the VoiceActivityDetection class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMaxSilenceSeconds.reset();
            fieldGeneratorMaxSilenceAfterFullQuerySeconds.reset();
            fieldGeneratorMaxSilenceAfterPartialQuerySeconds.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* VOICEACTIVITYDETECTIONJSON_H */
