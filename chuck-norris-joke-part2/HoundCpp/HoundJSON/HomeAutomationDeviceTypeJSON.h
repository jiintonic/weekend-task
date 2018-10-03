/* file "HomeAutomationDeviceTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONDEVICETYPEJSON_H
#define HOMEAUTOMATIONDEVICETYPEJSON_H

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


class HomeAutomationDeviceTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_Switch,
        Value_Light,
        Value_Thermostat,
        Value_AirPurifier,
        Value_Vacuum,
        Value_ClothesWasher,
        Value_Lock,
        Value_Door,
        Value_Alarm,
        Value_Sensor,
        Value_Camera,
        Value_MusicPlayer,
        Value_MediaPlayer,
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

    HomeAutomationDeviceTypeJSON(const HomeAutomationDeviceTypeJSON &);
    HomeAutomationDeviceTypeJSON & operator=(const HomeAutomationDeviceTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationDeviceTypeJSON(void);
    HomeAutomationDeviceTypeJSON(TypeValue init_value);
    HomeAutomationDeviceTypeJSON(const char *init_value);
    HomeAutomationDeviceTypeJSON(std::string init_value);
    HomeAutomationDeviceTypeJSON(TypeValueKnownValues init_value);
    virtual ~HomeAutomationDeviceTypeJSON(void);
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
                case Value_Switch:
                    handler->string_value("Switch");
                    break;
                case Value_Light:
                    handler->string_value("Light");
                    break;
                case Value_Thermostat:
                    handler->string_value("Thermostat");
                    break;
                case Value_AirPurifier:
                    handler->string_value("AirPurifier");
                    break;
                case Value_Vacuum:
                    handler->string_value("Vacuum");
                    break;
                case Value_ClothesWasher:
                    handler->string_value("ClothesWasher");
                    break;
                case Value_Lock:
                    handler->string_value("Lock");
                    break;
                case Value_Door:
                    handler->string_value("Door");
                    break;
                case Value_Alarm:
                    handler->string_value("Alarm");
                    break;
                case Value_Sensor:
                    handler->string_value("Sensor");
                    break;
                case Value_Camera:
                    handler->string_value("Camera");
                    break;
                case Value_MusicPlayer:
                    handler->string_value("MusicPlayer");
                    break;
                case Value_MediaPlayer:
                    handler->string_value("MediaPlayer");
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

    static HomeAutomationDeviceTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationDeviceTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationDeviceTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceTypeJSON>, HomeAutomationDeviceTypeJSON *, bool> generator("Type HomeAutomationDeviceType", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationDeviceTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationDeviceTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationDeviceTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceTypeJSON>, HomeAutomationDeviceTypeJSON *, bool> generator("Type HomeAutomationDeviceType", ignore_extras);
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
            HomeAutomationDeviceTypeJSON *result = new HomeAutomationDeviceTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(HomeAutomationDeviceTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* HOMEAUTOMATIONDEVICETYPEJSON_H */
