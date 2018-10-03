/* file "SportsPlayerPositionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYERPOSITIONJSON_H
#define SPORTSPLAYERPOSITIONJSON_H

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


class SportsPlayerPositionJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_Unknown,
        Value_MLBCatcher,
        Value_MLBInfield,
        Value_MLBFirstBase,
        Value_MLBSecondBase,
        Value_MLBThirdBase,
        Value_MLBShortStop,
        Value_MLBOutfield,
        Value_MLBLeftField,
        Value_MLBCenterField,
        Value_MLBPitcher,
        Value_MLBRightField,
        Value_MLBReliefPitcher,
        Value_MLBStartingPitcher,
        Value_MLBDesignatedHitter,
        Value_NHLUnknown,
        Value_NHLCenter,
        Value_NHLForward,
        Value_NHLDefense,
        Value_NHLGoalie,
        Value_NHLLeftWing,
        Value_NHLRightWing,
        Value_NBAUnknown,
        Value_NBACenter,
        Value_NBAPowerForward,
        Value_NBAPointGuard,
        Value_NBASmallForward,
        Value_NBAShootingGuard,
        Value_NCAAMBUnknown,
        Value_NCAAMBCenter,
        Value_NCAAMBCenterForward,
        Value_NCAAMBForward,
        Value_NCAAMBForwardCenter,
        Value_NCAAMBForwardGuard,
        Value_NCAAMBGuard,
        Value_NCAAMBGuardForward,
        Value_NFLUnknown,
        Value_NFLCenter,
        Value_NFLFullback,
        Value_NFLOffensiveGuard,
        Value_NFLOffensiveLineman,
        Value_NFLOffensiveTackle,
        Value_NFLQuarterback,
        Value_NFLRunningBack,
        Value_NFLTightEnd,
        Value_NFLWideReceiver,
        Value_NFLCornerback,
        Value_NFLDefensiveBack,
        Value_NFLDefensiveEnd,
        Value_NFLDefensiveTackle,
        Value_NFLFreeSafety,
        Value_NFLLinebacker,
        Value_NFLMiddleLinebacker,
        Value_NFLNoseTackle,
        Value_NFLOutsideLinebacker,
        Value_NFLSafety,
        Value_NFLStrongSafety,
        Value_NFLKicker,
        Value_NFLLongSnapper,
        Value_NFLPunter,
        Value_NFLGeneralDefense,
        Value_NFLGeneralDefensiveLine,
        Value_NFLGeneralOffense,
        Value_NFLGeneralSpecialTeams,
        Value_NCAAFBUnknown,
        Value_NCAAFBCenter,
        Value_NCAAFBFullback,
        Value_NCAAFBOffensiveGuard,
        Value_NCAAFBOffensiveLineman,
        Value_NCAAFBOffensiveTackle,
        Value_NCAAFBQuarterback,
        Value_NCAAFBRunningBack,
        Value_NCAAFBTightEnd,
        Value_NCAAFBWideReceiver,
        Value_NCAAFBCornerback,
        Value_NCAAFBDefensiveLine,
        Value_NCAAFBDefensiveBack,
        Value_NCAAFBDefensiveEnd,
        Value_NCAAFBDefensiveTackle,
        Value_NCAAFBFreeSafety,
        Value_NCAAFBLinebacker,
        Value_NCAAFBMiddleLinebacker,
        Value_NCAAFBNoseTackle,
        Value_NCAAFBOutsideLinebacker,
        Value_NCAAFBSafety,
        Value_NCAAFBStrongSafety,
        Value_NCAAFBKicker,
        Value_NCAAFBLongSnapper,
        Value_NCAAFBPunter,
        Value_NCAAFBKickerPunter,
        Value_NCAAFBAthlete,
        Value_NCAAFBGeneralDefense,
        Value_NCAAFBGeneralOffense,
        Value_NCAAFBGeneralSpecialTeams,
        Value_SoccerForward,
        Value_SoccerMidfielder,
        Value_SoccerDefender,
        Value_SoccerGoalkeeper,
        Value_CricketBatsman,
        Value_CricketBowler,
        Value_CricketAllRounder,
        Value_CricketWicketKeeper,
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

    SportsPlayerPositionJSON(const SportsPlayerPositionJSON &);
    SportsPlayerPositionJSON & operator=(const SportsPlayerPositionJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayerPositionJSON(void);
    SportsPlayerPositionJSON(TypeValue init_value);
    SportsPlayerPositionJSON(const char *init_value);
    SportsPlayerPositionJSON(std::string init_value);
    SportsPlayerPositionJSON(TypeValueKnownValues init_value);
    virtual ~SportsPlayerPositionJSON(void);
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
                case Value_Unknown:
                    handler->string_value("Unknown");
                    break;
                case Value_MLBCatcher:
                    handler->string_value("MLBCatcher");
                    break;
                case Value_MLBInfield:
                    handler->string_value("MLBInfield");
                    break;
                case Value_MLBFirstBase:
                    handler->string_value("MLBFirstBase");
                    break;
                case Value_MLBSecondBase:
                    handler->string_value("MLBSecondBase");
                    break;
                case Value_MLBThirdBase:
                    handler->string_value("MLBThirdBase");
                    break;
                case Value_MLBShortStop:
                    handler->string_value("MLBShortStop");
                    break;
                case Value_MLBOutfield:
                    handler->string_value("MLBOutfield");
                    break;
                case Value_MLBLeftField:
                    handler->string_value("MLBLeftField");
                    break;
                case Value_MLBCenterField:
                    handler->string_value("MLBCenterField");
                    break;
                case Value_MLBPitcher:
                    handler->string_value("MLBPitcher");
                    break;
                case Value_MLBRightField:
                    handler->string_value("MLBRightField");
                    break;
                case Value_MLBReliefPitcher:
                    handler->string_value("MLBReliefPitcher");
                    break;
                case Value_MLBStartingPitcher:
                    handler->string_value("MLBStartingPitcher");
                    break;
                case Value_MLBDesignatedHitter:
                    handler->string_value("MLBDesignatedHitter");
                    break;
                case Value_NHLUnknown:
                    handler->string_value("NHLUnknown");
                    break;
                case Value_NHLCenter:
                    handler->string_value("NHLCenter");
                    break;
                case Value_NHLForward:
                    handler->string_value("NHLForward");
                    break;
                case Value_NHLDefense:
                    handler->string_value("NHLDefense");
                    break;
                case Value_NHLGoalie:
                    handler->string_value("NHLGoalie");
                    break;
                case Value_NHLLeftWing:
                    handler->string_value("NHLLeftWing");
                    break;
                case Value_NHLRightWing:
                    handler->string_value("NHLRightWing");
                    break;
                case Value_NBAUnknown:
                    handler->string_value("NBAUnknown");
                    break;
                case Value_NBACenter:
                    handler->string_value("NBACenter");
                    break;
                case Value_NBAPowerForward:
                    handler->string_value("NBAPowerForward");
                    break;
                case Value_NBAPointGuard:
                    handler->string_value("NBAPointGuard");
                    break;
                case Value_NBASmallForward:
                    handler->string_value("NBASmallForward");
                    break;
                case Value_NBAShootingGuard:
                    handler->string_value("NBAShootingGuard");
                    break;
                case Value_NCAAMBUnknown:
                    handler->string_value("NCAAMBUnknown");
                    break;
                case Value_NCAAMBCenter:
                    handler->string_value("NCAAMBCenter");
                    break;
                case Value_NCAAMBCenterForward:
                    handler->string_value("NCAAMBCenterForward");
                    break;
                case Value_NCAAMBForward:
                    handler->string_value("NCAAMBForward");
                    break;
                case Value_NCAAMBForwardCenter:
                    handler->string_value("NCAAMBForwardCenter");
                    break;
                case Value_NCAAMBForwardGuard:
                    handler->string_value("NCAAMBForwardGuard");
                    break;
                case Value_NCAAMBGuard:
                    handler->string_value("NCAAMBGuard");
                    break;
                case Value_NCAAMBGuardForward:
                    handler->string_value("NCAAMBGuardForward");
                    break;
                case Value_NFLUnknown:
                    handler->string_value("NFLUnknown");
                    break;
                case Value_NFLCenter:
                    handler->string_value("NFLCenter");
                    break;
                case Value_NFLFullback:
                    handler->string_value("NFLFullback");
                    break;
                case Value_NFLOffensiveGuard:
                    handler->string_value("NFLOffensiveGuard");
                    break;
                case Value_NFLOffensiveLineman:
                    handler->string_value("NFLOffensiveLineman");
                    break;
                case Value_NFLOffensiveTackle:
                    handler->string_value("NFLOffensiveTackle");
                    break;
                case Value_NFLQuarterback:
                    handler->string_value("NFLQuarterback");
                    break;
                case Value_NFLRunningBack:
                    handler->string_value("NFLRunningBack");
                    break;
                case Value_NFLTightEnd:
                    handler->string_value("NFLTightEnd");
                    break;
                case Value_NFLWideReceiver:
                    handler->string_value("NFLWideReceiver");
                    break;
                case Value_NFLCornerback:
                    handler->string_value("NFLCornerback");
                    break;
                case Value_NFLDefensiveBack:
                    handler->string_value("NFLDefensiveBack");
                    break;
                case Value_NFLDefensiveEnd:
                    handler->string_value("NFLDefensiveEnd");
                    break;
                case Value_NFLDefensiveTackle:
                    handler->string_value("NFLDefensiveTackle");
                    break;
                case Value_NFLFreeSafety:
                    handler->string_value("NFLFreeSafety");
                    break;
                case Value_NFLLinebacker:
                    handler->string_value("NFLLinebacker");
                    break;
                case Value_NFLMiddleLinebacker:
                    handler->string_value("NFLMiddleLinebacker");
                    break;
                case Value_NFLNoseTackle:
                    handler->string_value("NFLNoseTackle");
                    break;
                case Value_NFLOutsideLinebacker:
                    handler->string_value("NFLOutsideLinebacker");
                    break;
                case Value_NFLSafety:
                    handler->string_value("NFLSafety");
                    break;
                case Value_NFLStrongSafety:
                    handler->string_value("NFLStrongSafety");
                    break;
                case Value_NFLKicker:
                    handler->string_value("NFLKicker");
                    break;
                case Value_NFLLongSnapper:
                    handler->string_value("NFLLongSnapper");
                    break;
                case Value_NFLPunter:
                    handler->string_value("NFLPunter");
                    break;
                case Value_NFLGeneralDefense:
                    handler->string_value("NFLGeneralDefense");
                    break;
                case Value_NFLGeneralDefensiveLine:
                    handler->string_value("NFLGeneralDefensiveLine");
                    break;
                case Value_NFLGeneralOffense:
                    handler->string_value("NFLGeneralOffense");
                    break;
                case Value_NFLGeneralSpecialTeams:
                    handler->string_value("NFLGeneralSpecialTeams");
                    break;
                case Value_NCAAFBUnknown:
                    handler->string_value("NCAAFBUnknown");
                    break;
                case Value_NCAAFBCenter:
                    handler->string_value("NCAAFBCenter");
                    break;
                case Value_NCAAFBFullback:
                    handler->string_value("NCAAFBFullback");
                    break;
                case Value_NCAAFBOffensiveGuard:
                    handler->string_value("NCAAFBOffensiveGuard");
                    break;
                case Value_NCAAFBOffensiveLineman:
                    handler->string_value("NCAAFBOffensiveLineman");
                    break;
                case Value_NCAAFBOffensiveTackle:
                    handler->string_value("NCAAFBOffensiveTackle");
                    break;
                case Value_NCAAFBQuarterback:
                    handler->string_value("NCAAFBQuarterback");
                    break;
                case Value_NCAAFBRunningBack:
                    handler->string_value("NCAAFBRunningBack");
                    break;
                case Value_NCAAFBTightEnd:
                    handler->string_value("NCAAFBTightEnd");
                    break;
                case Value_NCAAFBWideReceiver:
                    handler->string_value("NCAAFBWideReceiver");
                    break;
                case Value_NCAAFBCornerback:
                    handler->string_value("NCAAFBCornerback");
                    break;
                case Value_NCAAFBDefensiveLine:
                    handler->string_value("NCAAFBDefensiveLine");
                    break;
                case Value_NCAAFBDefensiveBack:
                    handler->string_value("NCAAFBDefensiveBack");
                    break;
                case Value_NCAAFBDefensiveEnd:
                    handler->string_value("NCAAFBDefensiveEnd");
                    break;
                case Value_NCAAFBDefensiveTackle:
                    handler->string_value("NCAAFBDefensiveTackle");
                    break;
                case Value_NCAAFBFreeSafety:
                    handler->string_value("NCAAFBFreeSafety");
                    break;
                case Value_NCAAFBLinebacker:
                    handler->string_value("NCAAFBLinebacker");
                    break;
                case Value_NCAAFBMiddleLinebacker:
                    handler->string_value("NCAAFBMiddleLinebacker");
                    break;
                case Value_NCAAFBNoseTackle:
                    handler->string_value("NCAAFBNoseTackle");
                    break;
                case Value_NCAAFBOutsideLinebacker:
                    handler->string_value("NCAAFBOutsideLinebacker");
                    break;
                case Value_NCAAFBSafety:
                    handler->string_value("NCAAFBSafety");
                    break;
                case Value_NCAAFBStrongSafety:
                    handler->string_value("NCAAFBStrongSafety");
                    break;
                case Value_NCAAFBKicker:
                    handler->string_value("NCAAFBKicker");
                    break;
                case Value_NCAAFBLongSnapper:
                    handler->string_value("NCAAFBLongSnapper");
                    break;
                case Value_NCAAFBPunter:
                    handler->string_value("NCAAFBPunter");
                    break;
                case Value_NCAAFBKickerPunter:
                    handler->string_value("NCAAFBKickerPunter");
                    break;
                case Value_NCAAFBAthlete:
                    handler->string_value("NCAAFBAthlete");
                    break;
                case Value_NCAAFBGeneralDefense:
                    handler->string_value("NCAAFBGeneralDefense");
                    break;
                case Value_NCAAFBGeneralOffense:
                    handler->string_value("NCAAFBGeneralOffense");
                    break;
                case Value_NCAAFBGeneralSpecialTeams:
                    handler->string_value("NCAAFBGeneralSpecialTeams");
                    break;
                case Value_SoccerForward:
                    handler->string_value("SoccerForward");
                    break;
                case Value_SoccerMidfielder:
                    handler->string_value("SoccerMidfielder");
                    break;
                case Value_SoccerDefender:
                    handler->string_value("SoccerDefender");
                    break;
                case Value_SoccerGoalkeeper:
                    handler->string_value("SoccerGoalkeeper");
                    break;
                case Value_CricketBatsman:
                    handler->string_value("CricketBatsman");
                    break;
                case Value_CricketBowler:
                    handler->string_value("CricketBowler");
                    break;
                case Value_CricketAllRounder:
                    handler->string_value("CricketAllRounder");
                    break;
                case Value_CricketWicketKeeper:
                    handler->string_value("CricketWicketKeeper");
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

    static SportsPlayerPositionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayerPositionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayerPositionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerPositionJSON>, SportsPlayerPositionJSON *, bool> generator("Type SportsPlayerPosition", ignore_extras);
            parse_json_value(text, "Text for SportsPlayerPositionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayerPositionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayerPositionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerPositionJSON>, SportsPlayerPositionJSON *, bool> generator("Type SportsPlayerPosition", ignore_extras);
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
            SportsPlayerPositionJSON *result = new SportsPlayerPositionJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsPlayerPositionJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSPLAYERPOSITIONJSON_H */
