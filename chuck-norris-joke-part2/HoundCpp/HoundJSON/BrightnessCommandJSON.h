/* file "BrightnessCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BRIGHTNESSCOMMANDJSON_H
#define BRIGHTNESSCOMMANDJSON_H

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


class BrightnessCommandJSON : public DeviceControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_AdjustBrightness,
        CommandType_SetBrightness,
        CommandType_InvertColorsOn,
        CommandType_InvertColorsOff,
        CommandType_NightShiftOn,
        CommandType_NightShiftOff
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasBrightnessValue;
    double storeBrightnessValue;
    std::string textStoreBrightnessValue;
    bool flagHasBrightnessLevel;
    double storeBrightnessLevel;
    std::string textStoreBrightnessLevel;
    bool flagHasBrightnessDelta;
    double storeBrightnessDelta;
    std::string textStoreBrightnessDelta;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BrightnessCommandJSON(const BrightnessCommandJSON &);
    BrightnessCommandJSON & operator=(const BrightnessCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraBrightnessValueToJSON(void) const;
    JSONValue * extraBrightnessLevelToJSON(void) const;
    JSONValue * extraBrightnessDeltaToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBrightnessValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBrightnessLevel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBrightnessDelta(JSONValue *json_value, bool ignore_extras = false);


  public:
    BrightnessCommandJSON(void);
    virtual ~BrightnessCommandJSON(void);
    const char * getDeviceControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasBrightnessValue(void) const;
    double  getBrightnessValue(void);
    const double  getBrightnessValue(void) const;
    std::string  getBrightnessValueAsText(void) const;
    bool  hasBrightnessLevel(void) const;
    double  getBrightnessLevel(void);
    const double  getBrightnessLevel(void) const;
    std::string  getBrightnessLevelAsText(void) const;
    bool  hasBrightnessDelta(void) const;
    double  getBrightnessDelta(void);
    const double  getBrightnessDelta(void) const;
    std::string  getBrightnessDeltaAsText(void) const;

    virtual size_t extraBrightnessCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBrightnessCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBrightnessCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBrightnessCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBrightnessCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBrightnessCommandLookup(const char *field_name) const
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
        if (flagHasBrightnessValue)
            ++result;
        if (flagHasBrightnessLevel)
            ++result;
        if (flagHasBrightnessDelta)
            ++result;
        result += extraBrightnessCommandComponentCount();
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
        if (flagHasBrightnessValue)
          {
            if (remainder == 0)
                return "BrightnessValue";
            --remainder;
          }
        if (flagHasBrightnessLevel)
          {
            if (remainder == 0)
                return "BrightnessLevel";
            --remainder;
          }
        if (flagHasBrightnessDelta)
          {
            if (remainder == 0)
                return "BrightnessDelta";
            --remainder;
          }
        return extraBrightnessCommandComponentKey(remainder);
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
        if (flagHasBrightnessValue)
          {
            if (remainder == 0)
                return extraBrightnessValueToJSON();
            --remainder;
          }
        if (flagHasBrightnessLevel)
          {
            if (remainder == 0)
                return extraBrightnessLevelToJSON();
            --remainder;
          }
        if (flagHasBrightnessDelta)
          {
            if (remainder == 0)
                return extraBrightnessDeltaToJSON();
            --remainder;
          }
        return extraBrightnessCommandComponentValue(remainder);
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
        if (flagHasBrightnessValue)
          {
            if (remainder == 0)
                return extraBrightnessValueToJSON();
            --remainder;
          }
        if (flagHasBrightnessLevel)
          {
            if (remainder == 0)
                return extraBrightnessLevelToJSON();
            --remainder;
          }
        if (flagHasBrightnessDelta)
          {
            if (remainder == 0)
                return extraBrightnessDeltaToJSON();
            --remainder;
          }
        return extraBrightnessCommandComponentValue(remainder);
      }
    JSONValue *extraDeviceControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strncmp(&(field_name[1]), "rightness", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[11]), "elta") == 0)
                                return (flagHasBrightnessDelta ? extraBrightnessDeltaToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[11]), "evel") == 0)
                                return (flagHasBrightnessLevel ? extraBrightnessLevelToJSON() : NULL);
                            break;
                        case 'V':
                            if (strcmp(&(field_name[11]), "alue") == 0)
                                return (flagHasBrightnessValue ? extraBrightnessValueToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBrightnessCommandLookup(field_name);
      }
    const JSONValue *extraDeviceControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strncmp(&(field_name[1]), "rightness", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[11]), "elta") == 0)
                                return (flagHasBrightnessDelta ? extraBrightnessDeltaToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[11]), "evel") == 0)
                                return (flagHasBrightnessLevel ? extraBrightnessLevelToJSON() : NULL);
                            break;
                        case 'V':
                            if (strcmp(&(field_name[11]), "alue") == 0)
                                return (flagHasBrightnessValue ? extraBrightnessValueToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBrightnessCommandLookup(field_name);
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
    void setBrightnessValue(double new_value)
      {
        flagHasBrightnessValue = true;
        if (new_value < 0)
            throw("The value for field BrightnessValue of BrightnessCommandJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field BrightnessValue of BrightnessCommandJSON is greater than the upper bound (1) for that field.");
        storeBrightnessValue = new_value;
        textStoreBrightnessValue = "";
      }
    void setBrightnessValueText(std::string new_value)
      {
        flagHasBrightnessValue = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BrightnessValue of BrightnessCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field BrightnessValue of BrightnessCommandJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field BrightnessValue of BrightnessCommandJSON is greater than the upper bound (1) for that field.");
        textStoreBrightnessValue = new_value;
      }
    void unsetBrightnessValue(void)
      {
        flagHasBrightnessValue = false;
      }
    void setBrightnessLevel(double new_value)
      {
        flagHasBrightnessLevel = true;
        storeBrightnessLevel = new_value;
        textStoreBrightnessLevel = "";
      }
    void setBrightnessLevelText(std::string new_value)
      {
        flagHasBrightnessLevel = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BrightnessLevel of BrightnessCommandJSON is not a valid number.");
        textStoreBrightnessLevel = new_value;
      }
    void unsetBrightnessLevel(void)
      {
        flagHasBrightnessLevel = false;
      }
    void setBrightnessDelta(double new_value)
      {
        flagHasBrightnessDelta = true;
        if (new_value < -1)
            throw("The value for field BrightnessDelta of BrightnessCommandJSON is less than the lower bound (-1) for that field.");
        if (new_value > 1)
            throw("The value for field BrightnessDelta of BrightnessCommandJSON is greater than the upper bound (1) for that field.");
        storeBrightnessDelta = new_value;
        textStoreBrightnessDelta = "";
      }
    void setBrightnessDeltaText(std::string new_value)
      {
        flagHasBrightnessDelta = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BrightnessDelta of BrightnessCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field BrightnessDelta of BrightnessCommandJSON is less than the lower bound (-1) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field BrightnessDelta of BrightnessCommandJSON is greater than the upper bound (1) for that field.");
        textStoreBrightnessDelta = new_value;
      }
    void unsetBrightnessDelta(void)
      {
        flagHasBrightnessDelta = false;
      }

    virtual void extraBrightnessCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBrightnessCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBrightnessCommandLookup(key);
        if (old_field == NULL)
          {
            extraBrightnessCommandAppendPair(key, new_component);
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
            case 'B':
                if (strncmp(&(key[1]), "rightness", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 'D':
                            if (strcmp(&(key[11]), "elta") == 0)
                                {
                                fromJSONBrightnessDelta(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[11]), "evel") == 0)
                                {
                                fromJSONBrightnessLevel(new_component, false);
                                return;
                                }
                            break;
                        case 'V':
                            if (strcmp(&(key[11]), "alue") == 0)
                                {
                                fromJSONBrightnessValue(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBrightnessCommandAppendPair(key, new_component);
      }
    void extraDeviceControlCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'B':
                if (strncmp(&(key[1]), "rightness", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 'D':
                            if (strcmp(&(key[11]), "elta") == 0)
                                {
                                fromJSONBrightnessDelta(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[11]), "evel") == 0)
                                {
                                fromJSONBrightnessLevel(new_component, false);
                                return;
                                }
                            break;
                        case 'V':
                            if (strcmp(&(key[11]), "alue") == 0)
                                {
                                fromJSONBrightnessValue(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBrightnessCommandSetField(key, new_component);
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
            case CommandType_AdjustBrightness:
                handler->string_value("AdjustBrightness");
                break;
            case CommandType_SetBrightness:
                handler->string_value("SetBrightness");
                break;
            case CommandType_InvertColorsOn:
                handler->string_value("InvertColorsOn");
                break;
            case CommandType_InvertColorsOff:
                handler->string_value("InvertColorsOff");
                break;
            case CommandType_NightShiftOn:
                handler->string_value("NightShiftOn");
                break;
            case CommandType_NightShiftOff:
                handler->string_value("NightShiftOff");
                break;
            default:
                assert(false);
          }
        if (flagHasBrightnessValue)
          {
            handler->start_pair("BrightnessValue");
            if (textStoreBrightnessValue != "")
                handler->number_value(textStoreBrightnessValue.c_str());
            else if (((double)(long int)storeBrightnessValue) == storeBrightnessValue)
                handler->number_value((long int)storeBrightnessValue);
            else
                handler->number_value(storeBrightnessValue);
          }
        if (flagHasBrightnessLevel)
          {
            handler->start_pair("BrightnessLevel");
            if (textStoreBrightnessLevel != "")
                handler->number_value(textStoreBrightnessLevel.c_str());
            else if (((double)(long int)storeBrightnessLevel) == storeBrightnessLevel)
                handler->number_value((long int)storeBrightnessLevel);
            else
                handler->number_value(storeBrightnessLevel);
          }
        if (flagHasBrightnessDelta)
          {
            handler->start_pair("BrightnessDelta");
            if (textStoreBrightnessDelta != "")
                handler->number_value(textStoreBrightnessDelta.c_str());
            else if (((double)(long int)storeBrightnessDelta) == storeBrightnessDelta)
                handler->number_value((long int)storeBrightnessDelta);
            else
                handler->number_value(storeBrightnessDelta);
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

    static BrightnessCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BrightnessCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BrightnessCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BrightnessCommandJSON>, BrightnessCommandJSON *, bool> generator("Type BrightnessCommand", ignore_extras);
            parse_json_value(text, "Text for BrightnessCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BrightnessCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BrightnessCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BrightnessCommandJSON>, BrightnessCommandJSON *, bool> generator("Type BrightnessCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBrightnessValue;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBrightnessLevel;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBrightnessDelta;
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
            if (!(strcmp(getDeviceControlCommandJSONKey().c_str(), "BrightnessCommand") == 0))
                throw("The key field has a value other than `BrightnessCommand'.");
            BrightnessCommandJSON *result = new BrightnessCommandJSON();
            assert(result != NULL);
            RCHandle<BrightnessCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBrightnessCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DeviceControlCommandJSON *new_result)
          {
            handle_result((BrightnessCommandJSON *)new_result);
          }
        void finish(BrightnessCommandJSON *result)
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
            if (fieldGeneratorBrightnessValue.have_value)
              {
                result->setBrightnessValueText(fieldGeneratorBrightnessValue.value);
                fieldGeneratorBrightnessValue.have_value = false;
              }
            if (fieldGeneratorBrightnessLevel.have_value)
              {
                result->setBrightnessLevelText(fieldGeneratorBrightnessLevel.value);
                fieldGeneratorBrightnessLevel.have_value = false;
              }
            if (fieldGeneratorBrightnessDelta.have_value)
              {
                result->setBrightnessDeltaText(fieldGeneratorBrightnessDelta.value);
                fieldGeneratorBrightnessDelta.have_value = false;
              }
            DeviceControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(BrightnessCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strncmp(&(field_name[1]), "rightness", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[11]), "elta") == 0)
                                    return &fieldGeneratorBrightnessDelta;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[11]), "evel") == 0)
                                    return &fieldGeneratorBrightnessLevel;
                                break;
                            case 'V':
                                if (strcmp(&(field_name[11]), "alue") == 0)
                                    return &fieldGeneratorBrightnessValue;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                default:
                    break;
              }
            return DeviceControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DeviceControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the BrightnessCommand class"), fieldGeneratorBrightnessValue("field \"BrightnessValue\" of the BrightnessCommand class"), fieldGeneratorBrightnessLevel("field \"BrightnessLevel\" of the BrightnessCommand class"), fieldGeneratorBrightnessDelta("field \"BrightnessDelta\" of the BrightnessCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BrightnessCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorBrightnessValue.reset();
            fieldGeneratorBrightnessLevel.reset();
            fieldGeneratorBrightnessDelta.reset();
            DeviceControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BRIGHTNESSCOMMANDJSON_H */
