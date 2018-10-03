/* file "HomeAutomationOperationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONOPERATIONJSON_H
#define HOMEAUTOMATIONOPERATIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationOperationJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_Auto,
        Value_Sleep,
        Value_Wake,
        Value_TurnOn,
        Value_TurnOff,
        Value_SetBrightness,
        Value_SetBrightnessDelta,
        Value_SetColor,
        Value_SetColorDelta,
        Value_Heat,
        Value_Cool,
        Value_Dry,
        Value_Wind,
        Value_SetTemperature,
        Value_SetTemperatureDelta,
        Value_SetWindSpeed,
        Value_SetWindSpeedDelta,
        Value_StartCleaning,
        Value_StopCleaning,
        Value_TurboControl,
        Value_Ready,
        Value_Pause,
        Value_Cancel,
        Value_Lock,
        Value_Unlock,
        Value_Open,
        Value_Close,
        Value_Alarm,
        Value_Record,
        Value_PlayMusic,
        Value_PlayVideo,
        Value_ChangeChannel,
        Value_SetVolume,
        Value_SetVolumeDelta,
        Value__none
      };
    struct TypeValue
      {
        bool in_known_list;
        std::string string_value;
        TypeValueKnownValues list_value;

        TypeValue(void);
        TypeValue(const TypeValue &other);
        TypeValue(TypeValueKnownValues other);
        bool  operator==(const TypeValue &other) const;
        bool  operator!=(const TypeValue &other) const;
        bool  operator<(const TypeValue &other) const;
        bool  operator>(const TypeValue &other) const;
        bool  operator>=(const TypeValue &other) const;
        bool  operator<=(const TypeValue &other) const;

      };

    static TypeValueKnownValues  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValueKnownValues the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    HomeAutomationOperationJSON(const HomeAutomationOperationJSON &);
    HomeAutomationOperationJSON & operator=(const HomeAutomationOperationJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationOperationJSON(void);
    HomeAutomationOperationJSON(TypeValue init_value);
    HomeAutomationOperationJSON(const char *init_value);
    HomeAutomationOperationJSON(std::string init_value);
    HomeAutomationOperationJSON(TypeValueKnownValues init_value);
    virtual ~HomeAutomationOperationJSON(void);
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;
    const char * getValueAsChars(void) const;
    std::string  getValueAsString(void) const;


    void setValue(TypeValue new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void setValue(const char *chars)
      {
        TypeValueKnownValues known = stringToValue(chars);
        TypeValue new_value;
        if (known == Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setValue(new_value);
      }
    void setValue(std::string the_string)
      {
        setValue(the_string.c_str());
      }
    void setValue(TypeValueKnownValues new_value)
      {
        TypeValue new_full_value;
        assert(new_value != Value__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setValue(new_full_value);
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        if (storeValue.in_known_list)
          {
            switch (storeValue.list_value)
              {
                case Value_Auto:
                    handler->string_value("Auto");
                    break;
                case Value_Sleep:
                    handler->string_value("Sleep");
                    break;
                case Value_Wake:
                    handler->string_value("Wake");
                    break;
                case Value_TurnOn:
                    handler->string_value("TurnOn");
                    break;
                case Value_TurnOff:
                    handler->string_value("TurnOff");
                    break;
                case Value_SetBrightness:
                    handler->string_value("SetBrightness");
                    break;
                case Value_SetBrightnessDelta:
                    handler->string_value("SetBrightnessDelta");
                    break;
                case Value_SetColor:
                    handler->string_value("SetColor");
                    break;
                case Value_SetColorDelta:
                    handler->string_value("SetColorDelta");
                    break;
                case Value_Heat:
                    handler->string_value("Heat");
                    break;
                case Value_Cool:
                    handler->string_value("Cool");
                    break;
                case Value_Dry:
                    handler->string_value("Dry");
                    break;
                case Value_Wind:
                    handler->string_value("Wind");
                    break;
                case Value_SetTemperature:
                    handler->string_value("SetTemperature");
                    break;
                case Value_SetTemperatureDelta:
                    handler->string_value("SetTemperatureDelta");
                    break;
                case Value_SetWindSpeed:
                    handler->string_value("SetWindSpeed");
                    break;
                case Value_SetWindSpeedDelta:
                    handler->string_value("SetWindSpeedDelta");
                    break;
                case Value_StartCleaning:
                    handler->string_value("StartCleaning");
                    break;
                case Value_StopCleaning:
                    handler->string_value("StopCleaning");
                    break;
                case Value_TurboControl:
                    handler->string_value("TurboControl");
                    break;
                case Value_Ready:
                    handler->string_value("Ready");
                    break;
                case Value_Pause:
                    handler->string_value("Pause");
                    break;
                case Value_Cancel:
                    handler->string_value("Cancel");
                    break;
                case Value_Lock:
                    handler->string_value("Lock");
                    break;
                case Value_Unlock:
                    handler->string_value("Unlock");
                    break;
                case Value_Open:
                    handler->string_value("Open");
                    break;
                case Value_Close:
                    handler->string_value("Close");
                    break;
                case Value_Alarm:
                    handler->string_value("Alarm");
                    break;
                case Value_Record:
                    handler->string_value("Record");
                    break;
                case Value_PlayMusic:
                    handler->string_value("PlayMusic");
                    break;
                case Value_PlayVideo:
                    handler->string_value("PlayVideo");
                    break;
                case Value_ChangeChannel:
                    handler->string_value("ChangeChannel");
                    break;
                case Value_SetVolume:
                    handler->string_value("SetVolume");
                    break;
                case Value_SetVolumeDelta:
                    handler->string_value("SetVolumeDelta");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeValue.string_value);
          }
      }

    static HomeAutomationOperationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationOperationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationOperationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationOperationJSON>, HomeAutomationOperationJSON *, bool> generator("Type HomeAutomationOperation", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationOperationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationOperationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationOperationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationOperationJSON>, HomeAutomationOperationJSON *, bool> generator("Type HomeAutomationOperation", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class FieldGeneratorValue : public JSONStringGenerator
      {
      protected:
        FieldGeneratorValue(const char *what)
          {
            set_what(what);
          }
        FieldGeneratorValue(void)
          {
          }
        void handle_result(const char *result)
          {
            TypeValueKnownValues known = stringToValue(result);
            TypeValue new_value;
            if (known == Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = result;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            handle_result(new_value);
          }
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            HomeAutomationOperationJSON *result = new HomeAutomationOperationJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(HomeAutomationOperationJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* HOMEAUTOMATIONOPERATIONJSON_H */
