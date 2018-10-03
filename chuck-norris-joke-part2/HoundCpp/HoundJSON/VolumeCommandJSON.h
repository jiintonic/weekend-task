/* file "VolumeCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef VOLUMECOMMANDJSON_H
#define VOLUMECOMMANDJSON_H

#pragma interface

#include "DeviceControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
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


class VolumeCommandJSON : public DeviceControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_AdjustVolume,
        CommandType_SetVolume,
        CommandType_MuteSound,
        CommandType_UnMuteSound
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasVolumeValue;
    double storeVolumeValue;
    std::string textStoreVolumeValue;
    bool flagHasVolumeLevel;
    double storeVolumeLevel;
    std::string textStoreVolumeLevel;
    bool flagHasVolumeDelta;
    double storeVolumeDelta;
    std::string textStoreVolumeDelta;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    VolumeCommandJSON(const VolumeCommandJSON &);
    VolumeCommandJSON & operator=(const VolumeCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraVolumeValueToJSON(void) const;
    JSONValue * extraVolumeLevelToJSON(void) const;
    JSONValue * extraVolumeDeltaToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolumeValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolumeLevel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolumeDelta(JSONValue *json_value, bool ignore_extras = false);


  public:
    VolumeCommandJSON(void);
    virtual ~VolumeCommandJSON(void);
    const char * getDeviceControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasVolumeValue(void) const;
    double  getVolumeValue(void);
    const double  getVolumeValue(void) const;
    std::string  getVolumeValueAsText(void) const;
    bool  hasVolumeLevel(void) const;
    double  getVolumeLevel(void);
    const double  getVolumeLevel(void) const;
    std::string  getVolumeLevelAsText(void) const;
    bool  hasVolumeDelta(void) const;
    double  getVolumeDelta(void);
    const double  getVolumeDelta(void) const;
    std::string  getVolumeDeltaAsText(void) const;

    virtual size_t extraVolumeCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraVolumeCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraVolumeCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraVolumeCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraVolumeCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraVolumeCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDeviceControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCommandType)
            ++result;
        if (flagHasVolumeValue)
            ++result;
        if (flagHasVolumeLevel)
            ++result;
        if (flagHasVolumeDelta)
            ++result;
        result += extraVolumeCommandComponentCount();
        return result;
      }
    const char *extraDeviceControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return "CommandType";
            --remainder;
          }
        if (flagHasVolumeValue)
          {
            if (remainder == 0)
                return "VolumeValue";
            --remainder;
          }
        if (flagHasVolumeLevel)
          {
            if (remainder == 0)
                return "VolumeLevel";
            --remainder;
          }
        if (flagHasVolumeDelta)
          {
            if (remainder == 0)
                return "VolumeDelta";
            --remainder;
          }
        return extraVolumeCommandComponentKey(remainder);
      }
    JSONValue *extraDeviceControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasVolumeValue)
          {
            if (remainder == 0)
                return extraVolumeValueToJSON();
            --remainder;
          }
        if (flagHasVolumeLevel)
          {
            if (remainder == 0)
                return extraVolumeLevelToJSON();
            --remainder;
          }
        if (flagHasVolumeDelta)
          {
            if (remainder == 0)
                return extraVolumeDeltaToJSON();
            --remainder;
          }
        return extraVolumeCommandComponentValue(remainder);
      }
    const JSONValue *extraDeviceControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasVolumeValue)
          {
            if (remainder == 0)
                return extraVolumeValueToJSON();
            --remainder;
          }
        if (flagHasVolumeLevel)
          {
            if (remainder == 0)
                return extraVolumeLevelToJSON();
            --remainder;
          }
        if (flagHasVolumeDelta)
          {
            if (remainder == 0)
                return extraVolumeDeltaToJSON();
            --remainder;
          }
        return extraVolumeCommandComponentValue(remainder);
      }
    JSONValue *extraDeviceControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'V':
                if (strncmp(&(field_name[1]), "olume", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[7]), "elta") == 0)
                                return (flagHasVolumeDelta ? extraVolumeDeltaToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[7]), "evel") == 0)
                                return (flagHasVolumeLevel ? extraVolumeLevelToJSON() : NULL);
                            break;
                        case 'V':
                            if (strcmp(&(field_name[7]), "alue") == 0)
                                return (flagHasVolumeValue ? extraVolumeValueToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraVolumeCommandLookup(field_name);
      }
    const JSONValue *extraDeviceControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'V':
                if (strncmp(&(field_name[1]), "olume", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[7]), "elta") == 0)
                                return (flagHasVolumeDelta ? extraVolumeDeltaToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[7]), "evel") == 0)
                                return (flagHasVolumeLevel ? extraVolumeLevelToJSON() : NULL);
                            break;
                        case 'V':
                            if (strcmp(&(field_name[7]), "alue") == 0)
                                return (flagHasVolumeValue ? extraVolumeValueToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraVolumeCommandLookup(field_name);
      }

    void setCommandType(TypeCommandType new_value)
      {
        flagHasCommandType = true;
        storeCommandType = new_value;
      }
    void setCommandType(const char *chars)
      {
        setCommandType(stringToCommandType(chars));
      }
    void setCommandType(std::string the_string)
      {
        setCommandType(stringToCommandType(the_string.c_str()));
      }
    void unsetCommandType(void)
      {
        flagHasCommandType = false;
      }
    void setVolumeValue(double new_value)
      {
        flagHasVolumeValue = true;
        if (new_value < 0)
            throw("The value for field VolumeValue of VolumeCommandJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field VolumeValue of VolumeCommandJSON is greater than the upper bound (1) for that field.");
        storeVolumeValue = new_value;
        textStoreVolumeValue = "";
      }
    void setVolumeValueText(std::string new_value)
      {
        flagHasVolumeValue = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field VolumeValue of VolumeCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field VolumeValue of VolumeCommandJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field VolumeValue of VolumeCommandJSON is greater than the upper bound (1) for that field.");
        textStoreVolumeValue = new_value;
      }
    void unsetVolumeValue(void)
      {
        flagHasVolumeValue = false;
      }
    void setVolumeLevel(double new_value)
      {
        flagHasVolumeLevel = true;
        storeVolumeLevel = new_value;
        textStoreVolumeLevel = "";
      }
    void setVolumeLevelText(std::string new_value)
      {
        flagHasVolumeLevel = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field VolumeLevel of VolumeCommandJSON is not a valid number.");
        textStoreVolumeLevel = new_value;
      }
    void unsetVolumeLevel(void)
      {
        flagHasVolumeLevel = false;
      }
    void setVolumeDelta(double new_value)
      {
        flagHasVolumeDelta = true;
        if (new_value < -1)
            throw("The value for field VolumeDelta of VolumeCommandJSON is less than the lower bound (-1) for that field.");
        if (new_value > 1)
            throw("The value for field VolumeDelta of VolumeCommandJSON is greater than the upper bound (1) for that field.");
        storeVolumeDelta = new_value;
        textStoreVolumeDelta = "";
      }
    void setVolumeDeltaText(std::string new_value)
      {
        flagHasVolumeDelta = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field VolumeDelta of VolumeCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field VolumeDelta of VolumeCommandJSON is less than the lower bound (-1) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field VolumeDelta of VolumeCommandJSON is greater than the upper bound (1) for that field.");
        textStoreVolumeDelta = new_value;
      }
    void unsetVolumeDelta(void)
      {
        flagHasVolumeDelta = false;
      }

    virtual void extraVolumeCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraVolumeCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraVolumeCommandLookup(key);
        if (old_field == NULL)
          {
            extraVolumeCommandAppendPair(key, new_component);
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
    void extraDeviceControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strncmp(&(key[1]), "olume", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'D':
                            if (strcmp(&(key[7]), "elta") == 0)
                                {
                                fromJSONVolumeDelta(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[7]), "evel") == 0)
                                {
                                fromJSONVolumeLevel(new_component, false);
                                return;
                                }
                            break;
                        case 'V':
                            if (strcmp(&(key[7]), "alue") == 0)
                                {
                                fromJSONVolumeValue(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraVolumeCommandAppendPair(key, new_component);
      }
    void extraDeviceControlCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strncmp(&(key[1]), "olume", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'D':
                            if (strcmp(&(key[7]), "elta") == 0)
                                {
                                fromJSONVolumeDelta(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[7]), "evel") == 0)
                                {
                                fromJSONVolumeLevel(new_component, false);
                                return;
                                }
                            break;
                        case 'V':
                            if (strcmp(&(key[7]), "alue") == 0)
                                {
                                fromJSONVolumeValue(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraVolumeCommandSetField(key, new_component);
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
        DeviceControlCommandJSON::write_fields_as_json(handler);
        assert(flagHasCommandType);
        handler->start_pair("CommandType");
        switch (storeCommandType)
          {
            case CommandType_AdjustVolume:
                handler->string_value("AdjustVolume");
                break;
            case CommandType_SetVolume:
                handler->string_value("SetVolume");
                break;
            case CommandType_MuteSound:
                handler->string_value("MuteSound");
                break;
            case CommandType_UnMuteSound:
                handler->string_value("UnMuteSound");
                break;
            default:
                assert(false);
          }
        if (flagHasVolumeValue)
          {
            handler->start_pair("VolumeValue");
            if (textStoreVolumeValue != "")
                handler->number_value(textStoreVolumeValue.c_str());
            else if (((double)(long int)storeVolumeValue) == storeVolumeValue)
                handler->number_value((long int)storeVolumeValue);
            else
                handler->number_value(storeVolumeValue);
          }
        if (flagHasVolumeLevel)
          {
            handler->start_pair("VolumeLevel");
            if (textStoreVolumeLevel != "")
                handler->number_value(textStoreVolumeLevel.c_str());
            else if (((double)(long int)storeVolumeLevel) == storeVolumeLevel)
                handler->number_value((long int)storeVolumeLevel);
            else
                handler->number_value(storeVolumeLevel);
          }
        if (flagHasVolumeDelta)
          {
            handler->start_pair("VolumeDelta");
            if (textStoreVolumeDelta != "")
                handler->number_value(textStoreVolumeDelta.c_str());
            else if (((double)(long int)storeVolumeDelta) == storeVolumeDelta)
                handler->number_value((long int)storeVolumeDelta);
            else
                handler->number_value(storeVolumeDelta);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        return NULL;
      }

    static VolumeCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static VolumeCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        VolumeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VolumeCommandJSON>, VolumeCommandJSON *, bool> generator("Type VolumeCommand", ignore_extras);
            parse_json_value(text, "Text for VolumeCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static VolumeCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        VolumeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VolumeCommandJSON>, VolumeCommandJSON *, bool> generator("Type VolumeCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DeviceControlCommandJSON::Generator
      {
      private:
    class FieldGeneratorCommandType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandType(result));
              }
            virtual void handle_result(TypeCommandType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandType, TypeCommandType, TypeCommandType > fieldGeneratorCommandType;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorVolumeValue;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorVolumeLevel;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorVolumeDelta;
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
            if (!(strcmp(getDeviceControlCommandJSONKey().c_str(), "VolumeCommand") == 0))
                throw("The key field has a value other than `VolumeCommand'.");
            VolumeCommandJSON *result = new VolumeCommandJSON();
            assert(result != NULL);
            RCHandle<VolumeCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraVolumeCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DeviceControlCommandJSON *new_result)
          {
            handle_result((VolumeCommandJSON *)new_result);
          }
        void finish(VolumeCommandJSON *result)
          {
            if (fieldGeneratorCommandType.have_value)
              {
                result->setCommandType(fieldGeneratorCommandType.value);
                fieldGeneratorCommandType.have_value = false;
              }
            else if (!(result->hasCommandType()))
              {
                error("When parsing the object for %what%, the \"CommandType\" field was missing.");
              }
            if (fieldGeneratorVolumeValue.have_value)
              {
                result->setVolumeValueText(fieldGeneratorVolumeValue.value);
                fieldGeneratorVolumeValue.have_value = false;
              }
            if (fieldGeneratorVolumeLevel.have_value)
              {
                result->setVolumeLevelText(fieldGeneratorVolumeLevel.value);
                fieldGeneratorVolumeLevel.have_value = false;
              }
            if (fieldGeneratorVolumeDelta.have_value)
              {
                result->setVolumeDeltaText(fieldGeneratorVolumeDelta.value);
                fieldGeneratorVolumeDelta.have_value = false;
              }
            DeviceControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(VolumeCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'V':
                    if (strncmp(&(field_name[1]), "olume", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[7]), "elta") == 0)
                                    return &fieldGeneratorVolumeDelta;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[7]), "evel") == 0)
                                    return &fieldGeneratorVolumeLevel;
                                break;
                            case 'V':
                                if (strcmp(&(field_name[7]), "alue") == 0)
                                    return &fieldGeneratorVolumeValue;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return DeviceControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DeviceControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the VolumeCommand class"), fieldGeneratorVolumeValue("field \"VolumeValue\" of the VolumeCommand class"), fieldGeneratorVolumeLevel("field \"VolumeLevel\" of the VolumeCommand class"), fieldGeneratorVolumeDelta("field \"VolumeDelta\" of the VolumeCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the VolumeCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorVolumeValue.reset();
            fieldGeneratorVolumeLevel.reset();
            fieldGeneratorVolumeDelta.reset();
            DeviceControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* VOLUMECOMMANDJSON_H */
