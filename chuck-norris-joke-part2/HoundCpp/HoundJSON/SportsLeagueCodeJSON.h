/* file "SportsLeagueCodeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUECODEJSON_H
#define SPORTSLEAGUECODEJSON_H

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


class SportsLeagueCodeJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_MLB,
        Value_NBA,
        Value_NFL,
        Value_NHL,
        Value_NCAAMB,
        Value_NCAAFB,
        Value_MLS,
        Value_CFL,
        Value_SoccerUEFAChampionsLeague,
        Value_SoccerPrimeraDivision,
        Value_SoccerPremierLeague,
        Value_SoccerSerieA,
        Value_SoccerLigue1,
        Value_SoccerBundesliga,
        Value_SoccerEredivisie,
        Value_SoccerFirstDivisionA,
        Value_SoccerSuperLig,
        Value_SoccerSuperLeague,
        Value_SoccerPremierLeagueRUS,
        Value_SoccerPremierLeagueUKR,
        Value_SoccerPrimeiraLiga,
        Value_SoccerUEFASuperCup,
        Value_SoccerEuropaLeague,
        Value_SoccerYouthLeague,
        Value_CricketICC,
        Value_CricketIPL,
        Value_SoccerPrimeraDivisionARG,
        Value_SoccerPrimeraDivisionMEX,
        Value_SoccerBrasileiroSerieA,
        Value_SoccerInternational,
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

    SportsLeagueCodeJSON(const SportsLeagueCodeJSON &);
    SportsLeagueCodeJSON & operator=(const SportsLeagueCodeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueCodeJSON(void);
    SportsLeagueCodeJSON(TypeValue init_value);
    SportsLeagueCodeJSON(const char *init_value);
    SportsLeagueCodeJSON(std::string init_value);
    SportsLeagueCodeJSON(TypeValueKnownValues init_value);
    virtual ~SportsLeagueCodeJSON(void);
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
                case Value_MLB:
                    handler->string_value("MLB");
                    break;
                case Value_NBA:
                    handler->string_value("NBA");
                    break;
                case Value_NFL:
                    handler->string_value("NFL");
                    break;
                case Value_NHL:
                    handler->string_value("NHL");
                    break;
                case Value_NCAAMB:
                    handler->string_value("NCAAMB");
                    break;
                case Value_NCAAFB:
                    handler->string_value("NCAAFB");
                    break;
                case Value_MLS:
                    handler->string_value("MLS");
                    break;
                case Value_CFL:
                    handler->string_value("CFL");
                    break;
                case Value_SoccerUEFAChampionsLeague:
                    handler->string_value("SoccerUEFAChampionsLeague");
                    break;
                case Value_SoccerPrimeraDivision:
                    handler->string_value("SoccerPrimeraDivision");
                    break;
                case Value_SoccerPremierLeague:
                    handler->string_value("SoccerPremierLeague");
                    break;
                case Value_SoccerSerieA:
                    handler->string_value("SoccerSerieA");
                    break;
                case Value_SoccerLigue1:
                    handler->string_value("SoccerLigue1");
                    break;
                case Value_SoccerBundesliga:
                    handler->string_value("SoccerBundesliga");
                    break;
                case Value_SoccerEredivisie:
                    handler->string_value("SoccerEredivisie");
                    break;
                case Value_SoccerFirstDivisionA:
                    handler->string_value("SoccerFirstDivisionA");
                    break;
                case Value_SoccerSuperLig:
                    handler->string_value("SoccerSuperLig");
                    break;
                case Value_SoccerSuperLeague:
                    handler->string_value("SoccerSuperLeague");
                    break;
                case Value_SoccerPremierLeagueRUS:
                    handler->string_value("SoccerPremierLeagueRUS");
                    break;
                case Value_SoccerPremierLeagueUKR:
                    handler->string_value("SoccerPremierLeagueUKR");
                    break;
                case Value_SoccerPrimeiraLiga:
                    handler->string_value("SoccerPrimeiraLiga");
                    break;
                case Value_SoccerUEFASuperCup:
                    handler->string_value("SoccerUEFASuperCup");
                    break;
                case Value_SoccerEuropaLeague:
                    handler->string_value("SoccerEuropaLeague");
                    break;
                case Value_SoccerYouthLeague:
                    handler->string_value("SoccerYouthLeague");
                    break;
                case Value_CricketICC:
                    handler->string_value("CricketICC");
                    break;
                case Value_CricketIPL:
                    handler->string_value("CricketIPL");
                    break;
                case Value_SoccerPrimeraDivisionARG:
                    handler->string_value("SoccerPrimeraDivisionARG");
                    break;
                case Value_SoccerPrimeraDivisionMEX:
                    handler->string_value("SoccerPrimeraDivisionMEX");
                    break;
                case Value_SoccerBrasileiroSerieA:
                    handler->string_value("SoccerBrasileiroSerieA");
                    break;
                case Value_SoccerInternational:
                    handler->string_value("SoccerInternational");
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

    static SportsLeagueCodeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueCodeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueCodeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool> generator("Type SportsLeagueCode", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueCodeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueCodeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueCodeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool> generator("Type SportsLeagueCode", ignore_extras);
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
            SportsLeagueCodeJSON *result = new SportsLeagueCodeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsLeagueCodeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSLEAGUECODEJSON_H */
