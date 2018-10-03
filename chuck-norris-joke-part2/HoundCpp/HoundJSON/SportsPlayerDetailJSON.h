/* file "SportsPlayerDetailJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYERDETAILJSON_H
#define SPORTSPLAYERDETAILJSON_H

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


class SportsPlayerDetailJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_Team,
        Value_League,
        Value_Position,
        Value_JerseyNumber,
        Value_Weight,
        Value_Height,
        Value_ThrowHand,
        Value_BatHand,
        Value_BirthDate,
        Value_Age,
        Value_BirthLocation,
        Value_College,
        Value_HighSchool,
        Value_Experience,
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

    SportsPlayerDetailJSON(const SportsPlayerDetailJSON &);
    SportsPlayerDetailJSON & operator=(const SportsPlayerDetailJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayerDetailJSON(void);
    SportsPlayerDetailJSON(TypeValue init_value);
    SportsPlayerDetailJSON(const char *init_value);
    SportsPlayerDetailJSON(std::string init_value);
    SportsPlayerDetailJSON(TypeValueKnownValues init_value);
    virtual ~SportsPlayerDetailJSON(void);
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
                case Value_Team:
                    handler->string_value("Team");
                    break;
                case Value_League:
                    handler->string_value("League");
                    break;
                case Value_Position:
                    handler->string_value("Position");
                    break;
                case Value_JerseyNumber:
                    handler->string_value("JerseyNumber");
                    break;
                case Value_Weight:
                    handler->string_value("Weight");
                    break;
                case Value_Height:
                    handler->string_value("Height");
                    break;
                case Value_ThrowHand:
                    handler->string_value("ThrowHand");
                    break;
                case Value_BatHand:
                    handler->string_value("BatHand");
                    break;
                case Value_BirthDate:
                    handler->string_value("BirthDate");
                    break;
                case Value_Age:
                    handler->string_value("Age");
                    break;
                case Value_BirthLocation:
                    handler->string_value("BirthLocation");
                    break;
                case Value_College:
                    handler->string_value("College");
                    break;
                case Value_HighSchool:
                    handler->string_value("HighSchool");
                    break;
                case Value_Experience:
                    handler->string_value("Experience");
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

    static SportsPlayerDetailJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayerDetailJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayerDetailJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerDetailJSON>, SportsPlayerDetailJSON *, bool> generator("Type SportsPlayerDetail", ignore_extras);
            parse_json_value(text, "Text for SportsPlayerDetailJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayerDetailJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayerDetailJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerDetailJSON>, SportsPlayerDetailJSON *, bool> generator("Type SportsPlayerDetail", ignore_extras);
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
            SportsPlayerDetailJSON *result = new SportsPlayerDetailJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsPlayerDetailJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSPLAYERDETAILJSON_H */
