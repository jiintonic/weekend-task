/* file "SportsOlympicsGamesCodeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSGAMESCODEJSON_H
#define SPORTSOLYMPICSGAMESCODEJSON_H

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


class SportsOlympicsGamesCodeJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_1986Athens,
        Value_1900Paris,
        Value_1904StLouis,
        Value_1908London,
        Value_1912Stockholm,
        Value_1920Antwerp,
        Value_1924Chamonix,
        Value_1924Paris,
        Value_1928StMoritz,
        Value_1928Amsterdam,
        Value_1932LakePlacid,
        Value_1932LosAngeles,
        Value_1936GarmischPartenkirchen,
        Value_1936Berlin,
        Value_1948StMoritz,
        Value_1948London,
        Value_1952Oslo,
        Value_1952Helsinki,
        Value_1956CortinaDAmpezzo,
        Value_1956Melbourne,
        Value_1960SquawValley,
        Value_1960Rome,
        Value_1964Innsbruck,
        Value_1964Tokyo,
        Value_1968Grenoble,
        Value_1968MexicoCity,
        Value_1972Sapporo,
        Value_1972Munich,
        Value_1976Innsbruck,
        Value_1976Montreal,
        Value_1980LakePlacid,
        Value_1980Moscow,
        Value_1984Sarajevo,
        Value_1984LosAngeles,
        Value_1988Calgary,
        Value_1988Seoul,
        Value_1992Albertville,
        Value_1992Barcelona,
        Value_1994Lillehammer,
        Value_1996Atlanta,
        Value_1998Nagano,
        Value_2000Sydney,
        Value_2002SaltLakeCity,
        Value_2004Athens,
        Value_2006Turin,
        Value_2008Beijing,
        Value_2010Vancouver,
        Value_2012London,
        Value_2014Sochi,
        Value_2016RioDeJaneiro,
        Value_2018Pyeongchang,
        Value_2020Tokyo,
        Value_2022Beijing,
        Value_2024Paris,
        Value_2026TBD,
        Value_2028LosAngeles,
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

    SportsOlympicsGamesCodeJSON(const SportsOlympicsGamesCodeJSON &);
    SportsOlympicsGamesCodeJSON & operator=(const SportsOlympicsGamesCodeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsGamesCodeJSON(void);
    SportsOlympicsGamesCodeJSON(TypeValue init_value);
    SportsOlympicsGamesCodeJSON(const char *init_value);
    SportsOlympicsGamesCodeJSON(std::string init_value);
    SportsOlympicsGamesCodeJSON(TypeValueKnownValues init_value);
    virtual ~SportsOlympicsGamesCodeJSON(void);
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
                case Value_1986Athens:
                    handler->string_value("1986Athens");
                    break;
                case Value_1900Paris:
                    handler->string_value("1900Paris");
                    break;
                case Value_1904StLouis:
                    handler->string_value("1904StLouis");
                    break;
                case Value_1908London:
                    handler->string_value("1908London");
                    break;
                case Value_1912Stockholm:
                    handler->string_value("1912Stockholm");
                    break;
                case Value_1920Antwerp:
                    handler->string_value("1920Antwerp");
                    break;
                case Value_1924Chamonix:
                    handler->string_value("1924Chamonix");
                    break;
                case Value_1924Paris:
                    handler->string_value("1924Paris");
                    break;
                case Value_1928StMoritz:
                    handler->string_value("1928StMoritz");
                    break;
                case Value_1928Amsterdam:
                    handler->string_value("1928Amsterdam");
                    break;
                case Value_1932LakePlacid:
                    handler->string_value("1932LakePlacid");
                    break;
                case Value_1932LosAngeles:
                    handler->string_value("1932LosAngeles");
                    break;
                case Value_1936GarmischPartenkirchen:
                    handler->string_value("1936GarmischPartenkirchen");
                    break;
                case Value_1936Berlin:
                    handler->string_value("1936Berlin");
                    break;
                case Value_1948StMoritz:
                    handler->string_value("1948StMoritz");
                    break;
                case Value_1948London:
                    handler->string_value("1948London");
                    break;
                case Value_1952Oslo:
                    handler->string_value("1952Oslo");
                    break;
                case Value_1952Helsinki:
                    handler->string_value("1952Helsinki");
                    break;
                case Value_1956CortinaDAmpezzo:
                    handler->string_value("1956CortinaDAmpezzo");
                    break;
                case Value_1956Melbourne:
                    handler->string_value("1956Melbourne");
                    break;
                case Value_1960SquawValley:
                    handler->string_value("1960SquawValley");
                    break;
                case Value_1960Rome:
                    handler->string_value("1960Rome");
                    break;
                case Value_1964Innsbruck:
                    handler->string_value("1964Innsbruck");
                    break;
                case Value_1964Tokyo:
                    handler->string_value("1964Tokyo");
                    break;
                case Value_1968Grenoble:
                    handler->string_value("1968Grenoble");
                    break;
                case Value_1968MexicoCity:
                    handler->string_value("1968MexicoCity");
                    break;
                case Value_1972Sapporo:
                    handler->string_value("1972Sapporo");
                    break;
                case Value_1972Munich:
                    handler->string_value("1972Munich");
                    break;
                case Value_1976Innsbruck:
                    handler->string_value("1976Innsbruck");
                    break;
                case Value_1976Montreal:
                    handler->string_value("1976Montreal");
                    break;
                case Value_1980LakePlacid:
                    handler->string_value("1980LakePlacid");
                    break;
                case Value_1980Moscow:
                    handler->string_value("1980Moscow");
                    break;
                case Value_1984Sarajevo:
                    handler->string_value("1984Sarajevo");
                    break;
                case Value_1984LosAngeles:
                    handler->string_value("1984LosAngeles");
                    break;
                case Value_1988Calgary:
                    handler->string_value("1988Calgary");
                    break;
                case Value_1988Seoul:
                    handler->string_value("1988Seoul");
                    break;
                case Value_1992Albertville:
                    handler->string_value("1992Albertville");
                    break;
                case Value_1992Barcelona:
                    handler->string_value("1992Barcelona");
                    break;
                case Value_1994Lillehammer:
                    handler->string_value("1994Lillehammer");
                    break;
                case Value_1996Atlanta:
                    handler->string_value("1996Atlanta");
                    break;
                case Value_1998Nagano:
                    handler->string_value("1998Nagano");
                    break;
                case Value_2000Sydney:
                    handler->string_value("2000Sydney");
                    break;
                case Value_2002SaltLakeCity:
                    handler->string_value("2002SaltLakeCity");
                    break;
                case Value_2004Athens:
                    handler->string_value("2004Athens");
                    break;
                case Value_2006Turin:
                    handler->string_value("2006Turin");
                    break;
                case Value_2008Beijing:
                    handler->string_value("2008Beijing");
                    break;
                case Value_2010Vancouver:
                    handler->string_value("2010Vancouver");
                    break;
                case Value_2012London:
                    handler->string_value("2012London");
                    break;
                case Value_2014Sochi:
                    handler->string_value("2014Sochi");
                    break;
                case Value_2016RioDeJaneiro:
                    handler->string_value("2016RioDeJaneiro");
                    break;
                case Value_2018Pyeongchang:
                    handler->string_value("2018Pyeongchang");
                    break;
                case Value_2020Tokyo:
                    handler->string_value("2020Tokyo");
                    break;
                case Value_2022Beijing:
                    handler->string_value("2022Beijing");
                    break;
                case Value_2024Paris:
                    handler->string_value("2024Paris");
                    break;
                case Value_2026TBD:
                    handler->string_value("2026TBD");
                    break;
                case Value_2028LosAngeles:
                    handler->string_value("2028LosAngeles");
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

    static SportsOlympicsGamesCodeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsGamesCodeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsGamesCodeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesCodeJSON>, SportsOlympicsGamesCodeJSON *, bool> generator("Type SportsOlympicsGamesCode", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsGamesCodeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsGamesCodeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsGamesCodeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesCodeJSON>, SportsOlympicsGamesCodeJSON *, bool> generator("Type SportsOlympicsGamesCode", ignore_extras);
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
            SportsOlympicsGamesCodeJSON *result = new SportsOlympicsGamesCodeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsOlympicsGamesCodeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSOLYMPICSGAMESCODEJSON_H */
