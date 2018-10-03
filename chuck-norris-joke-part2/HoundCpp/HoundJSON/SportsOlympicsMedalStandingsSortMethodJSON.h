/* file "SportsOlympicsMedalStandingsSortMethodJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSSORTMETHODJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSSORTMETHODJSON_H

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


class SportsOlympicsMedalStandingsSortMethodJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_DefaultIOC,
        Value_TotalMedals,
        Value_GoldMedals,
        Value_SilverMedals,
        Value_BronzeMedals,
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

    SportsOlympicsMedalStandingsSortMethodJSON(const SportsOlympicsMedalStandingsSortMethodJSON &);
    SportsOlympicsMedalStandingsSortMethodJSON & operator=(const SportsOlympicsMedalStandingsSortMethodJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsSortMethodJSON(void);
    SportsOlympicsMedalStandingsSortMethodJSON(TypeValue init_value);
    SportsOlympicsMedalStandingsSortMethodJSON(const char *init_value);
    SportsOlympicsMedalStandingsSortMethodJSON(std::string init_value);
    SportsOlympicsMedalStandingsSortMethodJSON(TypeValueKnownValues init_value);
    virtual ~SportsOlympicsMedalStandingsSortMethodJSON(void);
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
                case Value_DefaultIOC:
                    handler->string_value("DefaultIOC");
                    break;
                case Value_TotalMedals:
                    handler->string_value("TotalMedals");
                    break;
                case Value_GoldMedals:
                    handler->string_value("GoldMedals");
                    break;
                case Value_SilverMedals:
                    handler->string_value("SilverMedals");
                    break;
                case Value_BronzeMedals:
                    handler->string_value("BronzeMedals");
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

    static SportsOlympicsMedalStandingsSortMethodJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsSortMethodJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsSortMethodJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsSortMethodJSON>, SportsOlympicsMedalStandingsSortMethodJSON *, bool> generator("Type SportsOlympicsMedalStandingsSortMethod", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsSortMethodJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsSortMethodJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsSortMethodJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsSortMethodJSON>, SportsOlympicsMedalStandingsSortMethodJSON *, bool> generator("Type SportsOlympicsMedalStandingsSortMethod", ignore_extras);
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
            SportsOlympicsMedalStandingsSortMethodJSON *result = new SportsOlympicsMedalStandingsSortMethodJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsOlympicsMedalStandingsSortMethodJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSSORTMETHODJSON_H */