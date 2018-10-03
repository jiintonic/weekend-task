/* file "SportsOlympicsEventCategoryJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTCATEGORYJSON_H
#define SPORTSOLYMPICSEVENTCATEGORYJSON_H

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


class SportsOlympicsEventCategoryJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_AlpineSkiing,
        Value_Biathlon,
        Value_Bobsleigh,
        Value_CrossCountrySkiing,
        Value_Curling,
        Value_FigureSkating,
        Value_FreestyleSkiing,
        Value_IceHockey,
        Value_Luge,
        Value_NordicCombined,
        Value_ShortTrackSpeedSkating,
        Value_Skeleton,
        Value_SkiJumping,
        Value_Snowboarding,
        Value_SpeedSkating,
        Value_Archery,
        Value_Athletics,
        Value_Badminton,
        Value_Baseball,
        Value_Basketball,
        Value_Boxing,
        Value_Canoeing,
        Value_Cycling,
        Value_Diving,
        Value_Equestrian,
        Value_Fencing,
        Value_FieldHockey,
        Value_Football,
        Value_Golf,
        Value_Gymnastics,
        Value_Handball,
        Value_Judo,
        Value_ModernPentathlon,
        Value_Rowing,
        Value_Rugby,
        Value_Sailing,
        Value_Shooting,
        Value_Softball,
        Value_Swimming,
        Value_SynchronizedSwimming,
        Value_TableTennis,
        Value_Taekwondo,
        Value_Tennis,
        Value_Triathlon,
        Value_Volleyball,
        Value_WaterPolo,
        Value_Weightlifting,
        Value_Wrestling,
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

    SportsOlympicsEventCategoryJSON(const SportsOlympicsEventCategoryJSON &);
    SportsOlympicsEventCategoryJSON & operator=(const SportsOlympicsEventCategoryJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventCategoryJSON(void);
    SportsOlympicsEventCategoryJSON(TypeValue init_value);
    SportsOlympicsEventCategoryJSON(const char *init_value);
    SportsOlympicsEventCategoryJSON(std::string init_value);
    SportsOlympicsEventCategoryJSON(TypeValueKnownValues init_value);
    virtual ~SportsOlympicsEventCategoryJSON(void);
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
                case Value_AlpineSkiing:
                    handler->string_value("AlpineSkiing");
                    break;
                case Value_Biathlon:
                    handler->string_value("Biathlon");
                    break;
                case Value_Bobsleigh:
                    handler->string_value("Bobsleigh");
                    break;
                case Value_CrossCountrySkiing:
                    handler->string_value("CrossCountrySkiing");
                    break;
                case Value_Curling:
                    handler->string_value("Curling");
                    break;
                case Value_FigureSkating:
                    handler->string_value("FigureSkating");
                    break;
                case Value_FreestyleSkiing:
                    handler->string_value("FreestyleSkiing");
                    break;
                case Value_IceHockey:
                    handler->string_value("IceHockey");
                    break;
                case Value_Luge:
                    handler->string_value("Luge");
                    break;
                case Value_NordicCombined:
                    handler->string_value("NordicCombined");
                    break;
                case Value_ShortTrackSpeedSkating:
                    handler->string_value("ShortTrackSpeedSkating");
                    break;
                case Value_Skeleton:
                    handler->string_value("Skeleton");
                    break;
                case Value_SkiJumping:
                    handler->string_value("SkiJumping");
                    break;
                case Value_Snowboarding:
                    handler->string_value("Snowboarding");
                    break;
                case Value_SpeedSkating:
                    handler->string_value("SpeedSkating");
                    break;
                case Value_Archery:
                    handler->string_value("Archery");
                    break;
                case Value_Athletics:
                    handler->string_value("Athletics");
                    break;
                case Value_Badminton:
                    handler->string_value("Badminton");
                    break;
                case Value_Baseball:
                    handler->string_value("Baseball");
                    break;
                case Value_Basketball:
                    handler->string_value("Basketball");
                    break;
                case Value_Boxing:
                    handler->string_value("Boxing");
                    break;
                case Value_Canoeing:
                    handler->string_value("Canoeing");
                    break;
                case Value_Cycling:
                    handler->string_value("Cycling");
                    break;
                case Value_Diving:
                    handler->string_value("Diving");
                    break;
                case Value_Equestrian:
                    handler->string_value("Equestrian");
                    break;
                case Value_Fencing:
                    handler->string_value("Fencing");
                    break;
                case Value_FieldHockey:
                    handler->string_value("FieldHockey");
                    break;
                case Value_Football:
                    handler->string_value("Football");
                    break;
                case Value_Golf:
                    handler->string_value("Golf");
                    break;
                case Value_Gymnastics:
                    handler->string_value("Gymnastics");
                    break;
                case Value_Handball:
                    handler->string_value("Handball");
                    break;
                case Value_Judo:
                    handler->string_value("Judo");
                    break;
                case Value_ModernPentathlon:
                    handler->string_value("ModernPentathlon");
                    break;
                case Value_Rowing:
                    handler->string_value("Rowing");
                    break;
                case Value_Rugby:
                    handler->string_value("Rugby");
                    break;
                case Value_Sailing:
                    handler->string_value("Sailing");
                    break;
                case Value_Shooting:
                    handler->string_value("Shooting");
                    break;
                case Value_Softball:
                    handler->string_value("Softball");
                    break;
                case Value_Swimming:
                    handler->string_value("Swimming");
                    break;
                case Value_SynchronizedSwimming:
                    handler->string_value("SynchronizedSwimming");
                    break;
                case Value_TableTennis:
                    handler->string_value("TableTennis");
                    break;
                case Value_Taekwondo:
                    handler->string_value("Taekwondo");
                    break;
                case Value_Tennis:
                    handler->string_value("Tennis");
                    break;
                case Value_Triathlon:
                    handler->string_value("Triathlon");
                    break;
                case Value_Volleyball:
                    handler->string_value("Volleyball");
                    break;
                case Value_WaterPolo:
                    handler->string_value("WaterPolo");
                    break;
                case Value_Weightlifting:
                    handler->string_value("Weightlifting");
                    break;
                case Value_Wrestling:
                    handler->string_value("Wrestling");
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

    static SportsOlympicsEventCategoryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventCategoryJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventCategoryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventCategoryJSON>, SportsOlympicsEventCategoryJSON *, bool> generator("Type SportsOlympicsEventCategory", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventCategoryJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventCategoryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventCategoryJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventCategoryJSON>, SportsOlympicsEventCategoryJSON *, bool> generator("Type SportsOlympicsEventCategory", ignore_extras);
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
            SportsOlympicsEventCategoryJSON *result = new SportsOlympicsEventCategoryJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsOlympicsEventCategoryJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSOLYMPICSEVENTCATEGORYJSON_H */
