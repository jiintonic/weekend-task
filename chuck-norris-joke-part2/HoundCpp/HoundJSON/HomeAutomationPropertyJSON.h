/* file "HomeAutomationPropertyJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONPROPERTYJSON_H
#define HOMEAUTOMATIONPROPERTYJSON_H

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


class HomeAutomationPropertyJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_CurrentTemperature,
        Value_TimeRemaining,
        Value_Stage,
        Value_SensorReading,
        Value_MotionSensor,
        Value_MovementSensor,
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

    HomeAutomationPropertyJSON(const HomeAutomationPropertyJSON &);
    HomeAutomationPropertyJSON & operator=(const HomeAutomationPropertyJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationPropertyJSON(void);
    HomeAutomationPropertyJSON(TypeValue init_value);
    HomeAutomationPropertyJSON(const char *init_value);
    HomeAutomationPropertyJSON(std::string init_value);
    HomeAutomationPropertyJSON(TypeValueKnownValues init_value);
    virtual ~HomeAutomationPropertyJSON(void);
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
                case Value_CurrentTemperature:
                    handler->string_value("CurrentTemperature");
                    break;
                case Value_TimeRemaining:
                    handler->string_value("TimeRemaining");
                    break;
                case Value_Stage:
                    handler->string_value("Stage");
                    break;
                case Value_SensorReading:
                    handler->string_value("SensorReading");
                    break;
                case Value_MotionSensor:
                    handler->string_value("MotionSensor");
                    break;
                case Value_MovementSensor:
                    handler->string_value("MovementSensor");
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

    static HomeAutomationPropertyJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationPropertyJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationPropertyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationPropertyJSON>, HomeAutomationPropertyJSON *, bool> generator("Type HomeAutomationProperty", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationPropertyJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationPropertyJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationPropertyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationPropertyJSON>, HomeAutomationPropertyJSON *, bool> generator("Type HomeAutomationProperty", ignore_extras);
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
            HomeAutomationPropertyJSON *result = new HomeAutomationPropertyJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(HomeAutomationPropertyJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* HOMEAUTOMATIONPROPERTYJSON_H */
