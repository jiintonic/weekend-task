/* file "SportsPlayoffSpecialGameJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYOFFSPECIALGAMEJSON_H
#define SPORTSPLAYOFFSPECIALGAMEJSON_H

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


class SportsPlayoffSpecialGameJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_NFLWildcardAFC,
        Value_NFLWildcardNFC,
        Value_NFLDivisionalAFC,
        Value_NFLDivisionalNFC,
        Value_NFLConferenceAFC,
        Value_NFLConferenceNFC,
        Value_NFLSuperBowl,
        Value_NHLConferenceQuarterFinalsEastern,
        Value_NHLConferenceQuarterFinalsWestern,
        Value_NHLConferenceSemiFinalsEastern,
        Value_NHLConferenceSemiFinalsWestern,
        Value_NHLConferenceFinalsEastern,
        Value_NHLConferenceFinalsWestern,
        Value_NHLStanleyCup,
        Value_NHLAllStarGame,
        Value_NHLAllStarGameFinals,
        Value_NHLAllStarGameAtlanticMetropolitan,
        Value_NHLAllStarGamePacificCentral,
        Value_MLBWildcardAmericanLeague,
        Value_MLBWildcardNationalLeague,
        Value_MLBDivisionalAmericanLeague,
        Value_MLBDivisionalNationalLeague,
        Value_MLBChampionshipAmericanLeague,
        Value_MLBChampionshipNationalLeague,
        Value_MLBWorldSeries,
        Value_MLBAllStarGame,
        Value_NBAConferenceQuarterFinalsEastern,
        Value_NBAConferenceQuarterFinalsWestern,
        Value_NBAConferenceSemiFinalsEastern,
        Value_NBAConferenceSemiFinalsWestern,
        Value_NBAConferenceFinalsEastern,
        Value_NBAConferenceFinalsWestern,
        Value_NBAFinals,
        Value_NBAAllStarGame,
        Value_MLSConferenceQuarterFinalsEastern,
        Value_MLSConferenceQuarterFinalsWestern,
        Value_MLSConferenceSemiFinalsEastern,
        Value_MLSConferenceSemiFinalsWestern,
        Value_MLSConferenceFinalsEastern,
        Value_MLSConferenceFinalsWestern,
        Value_MLSCup,
        Value_NCAAFBRoseBowl,
        Value_NCAAFBOrangeBowl,
        Value_NCAAFBSugarBowl,
        Value_NCAAFBCottonBowlClassic,
        Value_NCAAFBPeachBowl,
        Value_NCAAFBFiestaBowl,
        Value_NCAAFBSunBowl,
        Value_NCAAFBTaxSlayerBowl,
        Value_NCAAFBCitrusBowl,
        Value_NCAAFBLibertyBowl,
        Value_NCAAFBIndependenceBowl,
        Value_NCAAFBHolidayBowl,
        Value_NCAAFBOutbackBowl,
        Value_NCAAFBCactusBowl,
        Value_NCAAFBRussellAthleticBowl,
        Value_NCAAFBLasVegasBowl,
        Value_NCAAFBAlamoBowl,
        Value_NCAAFBFamousIdahoPotatoBowl,
        Value_NCAAFBMusicCityBowl,
        Value_NCAAFBGoDaddyBowl,
        Value_NCAAFBNewOrleansBowl,
        Value_NCAAFBFosterFarmsBowl,
        Value_NCAAFBHawaiiBowl,
        Value_NCAAFBBelkBowl,
        Value_NCAAFBArmedForcesBowl,
        Value_NCAAFBPoinsettiaBowl,
        Value_NCAAFBTexasBowl,
        Value_NCAAFBBirminghamBowl,
        Value_NCAAFBNewMexicoBowl,
        Value_NCAAFBMilitaryBowl,
        Value_NCAAFBStPetersburgBowl,
        Value_NCAAFBPinstripeBowl,
        Value_NCAAFBHeartOfDallasBowl,
        Value_NCAAFBBahamasBowl,
        Value_NCAAFBBocaRatonBowl,
        Value_NCAAFBCamelliaBowl,
        Value_NCAAFBMiamiBeachBowl,
        Value_NCAAFBQuickLaneBowl,
        Value_NCAAFBCureBowl,
        Value_NCAAFBArizonaBowl,
        Value_NCAAFBPAC12Championship,
        Value_NCAAFBConferenceUSAChampionship,
        Value_NCAAFBBigTenChampionship,
        Value_NCAAFBCFPNationalChampionship,
        Value_NCAAFBSECChampionship,
        Value_NCAAFBMACChampionship,
        Value_NCAAFBACCChampionship,
        Value_NCAAFBMWCChampionship,
        Value_NCAAMBFirstFour,
        Value_NCAAMBMidwestRegionalFirstRound,
        Value_NCAAMBSouthRegionalFirstRound,
        Value_NCAAMBWestRegionalFirstRound,
        Value_NCAAMBEastRegionalFirstRound,
        Value_NCAAMBMidwestRegionalSecondRound,
        Value_NCAAMBSouthRegionalSecondRound,
        Value_NCAAMBWestRegionalSecondRound,
        Value_NCAAMBEastRegionalSecondRound,
        Value_NCAAMBMidwestRegionalThirdRound,
        Value_NCAAMBSouthRegionalThirdRound,
        Value_NCAAMBWestRegionalThirdRound,
        Value_NCAAMBEastRegionalThirdRound,
        Value_NCAAMBMidwestRegionalSweet16,
        Value_NCAAMBSouthRegionalSweet16,
        Value_NCAAMBWestRegionalSweet16,
        Value_NCAAMBEastRegionalSweet16,
        Value_NCAAMBMidwestRegionalElite8,
        Value_NCAAMBSouthRegionalElite8,
        Value_NCAAMBWestRegionalElite8,
        Value_NCAAMBEastRegionalElite8,
        Value_NCAAMBFinalFourSemiFinals,
        Value_NCAAMBFinalFourFinals,
        Value_NCAAMBTournament,
        Value_NCAAMBCITFirstRound,
        Value_NCAAMBCITSecondRound,
        Value_NCAAMBCITQuarterfinals,
        Value_NCAAMBCITSemifinals,
        Value_NCAAMBCITChampionship,
        Value_NCAAMBCIT,
        Value_NCAAMBCBIFirstRound,
        Value_NCAAMBCBIQuarterfinals,
        Value_NCAAMBCBISemifinals,
        Value_NCAAMBCBIChampionship,
        Value_NCAAMBCBI,
        Value_NCAAMBNITFirstRound,
        Value_NCAAMBNITSecondRound,
        Value_NCAAMBNITQuarterfinals,
        Value_NCAAMBNITSemifinals,
        Value_NCAAMBNITChampionship,
        Value_NCAAMBNIT,
        Value_CFLSemiFinalsEast,
        Value_CFLSemiFinalsWest,
        Value_CFLFinalsEast,
        Value_CFLFinalsWest,
        Value_CFLGreyCup,
        Value_UEFAChampionsLeagueRoundOf16,
        Value_UEFAChampionsLeagueQuarterFinals,
        Value_UEFAChampionsLeagueSemiFinals,
        Value_UEFAChampionsLeagueFinal,
        Value_EuropaLeagueRoundOf32,
        Value_EuropaLeagueRoundOf16,
        Value_EuropaLeagueQuarterFinals,
        Value_EuropaLeagueSemiFinals,
        Value_EuropaLeagueFinal,
        Value_UEFASuperCup,
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

    SportsPlayoffSpecialGameJSON(const SportsPlayoffSpecialGameJSON &);
    SportsPlayoffSpecialGameJSON & operator=(const SportsPlayoffSpecialGameJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayoffSpecialGameJSON(void);
    SportsPlayoffSpecialGameJSON(TypeValue init_value);
    SportsPlayoffSpecialGameJSON(const char *init_value);
    SportsPlayoffSpecialGameJSON(std::string init_value);
    SportsPlayoffSpecialGameJSON(TypeValueKnownValues init_value);
    virtual ~SportsPlayoffSpecialGameJSON(void);
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
                case Value_NFLWildcardAFC:
                    handler->string_value("NFLWildcardAFC");
                    break;
                case Value_NFLWildcardNFC:
                    handler->string_value("NFLWildcardNFC");
                    break;
                case Value_NFLDivisionalAFC:
                    handler->string_value("NFLDivisionalAFC");
                    break;
                case Value_NFLDivisionalNFC:
                    handler->string_value("NFLDivisionalNFC");
                    break;
                case Value_NFLConferenceAFC:
                    handler->string_value("NFLConferenceAFC");
                    break;
                case Value_NFLConferenceNFC:
                    handler->string_value("NFLConferenceNFC");
                    break;
                case Value_NFLSuperBowl:
                    handler->string_value("NFLSuperBowl");
                    break;
                case Value_NHLConferenceQuarterFinalsEastern:
                    handler->string_value("NHLConferenceQuarterFinalsEastern");
                    break;
                case Value_NHLConferenceQuarterFinalsWestern:
                    handler->string_value("NHLConferenceQuarterFinalsWestern");
                    break;
                case Value_NHLConferenceSemiFinalsEastern:
                    handler->string_value("NHLConferenceSemiFinalsEastern");
                    break;
                case Value_NHLConferenceSemiFinalsWestern:
                    handler->string_value("NHLConferenceSemiFinalsWestern");
                    break;
                case Value_NHLConferenceFinalsEastern:
                    handler->string_value("NHLConferenceFinalsEastern");
                    break;
                case Value_NHLConferenceFinalsWestern:
                    handler->string_value("NHLConferenceFinalsWestern");
                    break;
                case Value_NHLStanleyCup:
                    handler->string_value("NHLStanleyCup");
                    break;
                case Value_NHLAllStarGame:
                    handler->string_value("NHLAllStarGame");
                    break;
                case Value_NHLAllStarGameFinals:
                    handler->string_value("NHLAllStarGameFinals");
                    break;
                case Value_NHLAllStarGameAtlanticMetropolitan:
                    handler->string_value("NHLAllStarGameAtlanticMetropolitan");
                    break;
                case Value_NHLAllStarGamePacificCentral:
                    handler->string_value("NHLAllStarGamePacificCentral");
                    break;
                case Value_MLBWildcardAmericanLeague:
                    handler->string_value("MLBWildcardAmericanLeague");
                    break;
                case Value_MLBWildcardNationalLeague:
                    handler->string_value("MLBWildcardNationalLeague");
                    break;
                case Value_MLBDivisionalAmericanLeague:
                    handler->string_value("MLBDivisionalAmericanLeague");
                    break;
                case Value_MLBDivisionalNationalLeague:
                    handler->string_value("MLBDivisionalNationalLeague");
                    break;
                case Value_MLBChampionshipAmericanLeague:
                    handler->string_value("MLBChampionshipAmericanLeague");
                    break;
                case Value_MLBChampionshipNationalLeague:
                    handler->string_value("MLBChampionshipNationalLeague");
                    break;
                case Value_MLBWorldSeries:
                    handler->string_value("MLBWorldSeries");
                    break;
                case Value_MLBAllStarGame:
                    handler->string_value("MLBAllStarGame");
                    break;
                case Value_NBAConferenceQuarterFinalsEastern:
                    handler->string_value("NBAConferenceQuarterFinalsEastern");
                    break;
                case Value_NBAConferenceQuarterFinalsWestern:
                    handler->string_value("NBAConferenceQuarterFinalsWestern");
                    break;
                case Value_NBAConferenceSemiFinalsEastern:
                    handler->string_value("NBAConferenceSemiFinalsEastern");
                    break;
                case Value_NBAConferenceSemiFinalsWestern:
                    handler->string_value("NBAConferenceSemiFinalsWestern");
                    break;
                case Value_NBAConferenceFinalsEastern:
                    handler->string_value("NBAConferenceFinalsEastern");
                    break;
                case Value_NBAConferenceFinalsWestern:
                    handler->string_value("NBAConferenceFinalsWestern");
                    break;
                case Value_NBAFinals:
                    handler->string_value("NBAFinals");
                    break;
                case Value_NBAAllStarGame:
                    handler->string_value("NBAAllStarGame");
                    break;
                case Value_MLSConferenceQuarterFinalsEastern:
                    handler->string_value("MLSConferenceQuarterFinalsEastern");
                    break;
                case Value_MLSConferenceQuarterFinalsWestern:
                    handler->string_value("MLSConferenceQuarterFinalsWestern");
                    break;
                case Value_MLSConferenceSemiFinalsEastern:
                    handler->string_value("MLSConferenceSemiFinalsEastern");
                    break;
                case Value_MLSConferenceSemiFinalsWestern:
                    handler->string_value("MLSConferenceSemiFinalsWestern");
                    break;
                case Value_MLSConferenceFinalsEastern:
                    handler->string_value("MLSConferenceFinalsEastern");
                    break;
                case Value_MLSConferenceFinalsWestern:
                    handler->string_value("MLSConferenceFinalsWestern");
                    break;
                case Value_MLSCup:
                    handler->string_value("MLSCup");
                    break;
                case Value_NCAAFBRoseBowl:
                    handler->string_value("NCAAFBRoseBowl");
                    break;
                case Value_NCAAFBOrangeBowl:
                    handler->string_value("NCAAFBOrangeBowl");
                    break;
                case Value_NCAAFBSugarBowl:
                    handler->string_value("NCAAFBSugarBowl");
                    break;
                case Value_NCAAFBCottonBowlClassic:
                    handler->string_value("NCAAFBCottonBowlClassic");
                    break;
                case Value_NCAAFBPeachBowl:
                    handler->string_value("NCAAFBPeachBowl");
                    break;
                case Value_NCAAFBFiestaBowl:
                    handler->string_value("NCAAFBFiestaBowl");
                    break;
                case Value_NCAAFBSunBowl:
                    handler->string_value("NCAAFBSunBowl");
                    break;
                case Value_NCAAFBTaxSlayerBowl:
                    handler->string_value("NCAAFBTaxSlayerBowl");
                    break;
                case Value_NCAAFBCitrusBowl:
                    handler->string_value("NCAAFBCitrusBowl");
                    break;
                case Value_NCAAFBLibertyBowl:
                    handler->string_value("NCAAFBLibertyBowl");
                    break;
                case Value_NCAAFBIndependenceBowl:
                    handler->string_value("NCAAFBIndependenceBowl");
                    break;
                case Value_NCAAFBHolidayBowl:
                    handler->string_value("NCAAFBHolidayBowl");
                    break;
                case Value_NCAAFBOutbackBowl:
                    handler->string_value("NCAAFBOutbackBowl");
                    break;
                case Value_NCAAFBCactusBowl:
                    handler->string_value("NCAAFBCactusBowl");
                    break;
                case Value_NCAAFBRussellAthleticBowl:
                    handler->string_value("NCAAFBRussellAthleticBowl");
                    break;
                case Value_NCAAFBLasVegasBowl:
                    handler->string_value("NCAAFBLasVegasBowl");
                    break;
                case Value_NCAAFBAlamoBowl:
                    handler->string_value("NCAAFBAlamoBowl");
                    break;
                case Value_NCAAFBFamousIdahoPotatoBowl:
                    handler->string_value("NCAAFBFamousIdahoPotatoBowl");
                    break;
                case Value_NCAAFBMusicCityBowl:
                    handler->string_value("NCAAFBMusicCityBowl");
                    break;
                case Value_NCAAFBGoDaddyBowl:
                    handler->string_value("NCAAFBGoDaddyBowl");
                    break;
                case Value_NCAAFBNewOrleansBowl:
                    handler->string_value("NCAAFBNewOrleansBowl");
                    break;
                case Value_NCAAFBFosterFarmsBowl:
                    handler->string_value("NCAAFBFosterFarmsBowl");
                    break;
                case Value_NCAAFBHawaiiBowl:
                    handler->string_value("NCAAFBHawaiiBowl");
                    break;
                case Value_NCAAFBBelkBowl:
                    handler->string_value("NCAAFBBelkBowl");
                    break;
                case Value_NCAAFBArmedForcesBowl:
                    handler->string_value("NCAAFBArmedForcesBowl");
                    break;
                case Value_NCAAFBPoinsettiaBowl:
                    handler->string_value("NCAAFBPoinsettiaBowl");
                    break;
                case Value_NCAAFBTexasBowl:
                    handler->string_value("NCAAFBTexasBowl");
                    break;
                case Value_NCAAFBBirminghamBowl:
                    handler->string_value("NCAAFBBirminghamBowl");
                    break;
                case Value_NCAAFBNewMexicoBowl:
                    handler->string_value("NCAAFBNewMexicoBowl");
                    break;
                case Value_NCAAFBMilitaryBowl:
                    handler->string_value("NCAAFBMilitaryBowl");
                    break;
                case Value_NCAAFBStPetersburgBowl:
                    handler->string_value("NCAAFBStPetersburgBowl");
                    break;
                case Value_NCAAFBPinstripeBowl:
                    handler->string_value("NCAAFBPinstripeBowl");
                    break;
                case Value_NCAAFBHeartOfDallasBowl:
                    handler->string_value("NCAAFBHeartOfDallasBowl");
                    break;
                case Value_NCAAFBBahamasBowl:
                    handler->string_value("NCAAFBBahamasBowl");
                    break;
                case Value_NCAAFBBocaRatonBowl:
                    handler->string_value("NCAAFBBocaRatonBowl");
                    break;
                case Value_NCAAFBCamelliaBowl:
                    handler->string_value("NCAAFBCamelliaBowl");
                    break;
                case Value_NCAAFBMiamiBeachBowl:
                    handler->string_value("NCAAFBMiamiBeachBowl");
                    break;
                case Value_NCAAFBQuickLaneBowl:
                    handler->string_value("NCAAFBQuickLaneBowl");
                    break;
                case Value_NCAAFBCureBowl:
                    handler->string_value("NCAAFBCureBowl");
                    break;
                case Value_NCAAFBArizonaBowl:
                    handler->string_value("NCAAFBArizonaBowl");
                    break;
                case Value_NCAAFBPAC12Championship:
                    handler->string_value("NCAAFBPAC12Championship");
                    break;
                case Value_NCAAFBConferenceUSAChampionship:
                    handler->string_value("NCAAFBConferenceUSAChampionship");
                    break;
                case Value_NCAAFBBigTenChampionship:
                    handler->string_value("NCAAFBBigTenChampionship");
                    break;
                case Value_NCAAFBCFPNationalChampionship:
                    handler->string_value("NCAAFBCFPNationalChampionship");
                    break;
                case Value_NCAAFBSECChampionship:
                    handler->string_value("NCAAFBSECChampionship");
                    break;
                case Value_NCAAFBMACChampionship:
                    handler->string_value("NCAAFBMACChampionship");
                    break;
                case Value_NCAAFBACCChampionship:
                    handler->string_value("NCAAFBACCChampionship");
                    break;
                case Value_NCAAFBMWCChampionship:
                    handler->string_value("NCAAFBMWCChampionship");
                    break;
                case Value_NCAAMBFirstFour:
                    handler->string_value("NCAAMBFirstFour");
                    break;
                case Value_NCAAMBMidwestRegionalFirstRound:
                    handler->string_value("NCAAMBMidwestRegionalFirstRound");
                    break;
                case Value_NCAAMBSouthRegionalFirstRound:
                    handler->string_value("NCAAMBSouthRegionalFirstRound");
                    break;
                case Value_NCAAMBWestRegionalFirstRound:
                    handler->string_value("NCAAMBWestRegionalFirstRound");
                    break;
                case Value_NCAAMBEastRegionalFirstRound:
                    handler->string_value("NCAAMBEastRegionalFirstRound");
                    break;
                case Value_NCAAMBMidwestRegionalSecondRound:
                    handler->string_value("NCAAMBMidwestRegionalSecondRound");
                    break;
                case Value_NCAAMBSouthRegionalSecondRound:
                    handler->string_value("NCAAMBSouthRegionalSecondRound");
                    break;
                case Value_NCAAMBWestRegionalSecondRound:
                    handler->string_value("NCAAMBWestRegionalSecondRound");
                    break;
                case Value_NCAAMBEastRegionalSecondRound:
                    handler->string_value("NCAAMBEastRegionalSecondRound");
                    break;
                case Value_NCAAMBMidwestRegionalThirdRound:
                    handler->string_value("NCAAMBMidwestRegionalThirdRound");
                    break;
                case Value_NCAAMBSouthRegionalThirdRound:
                    handler->string_value("NCAAMBSouthRegionalThirdRound");
                    break;
                case Value_NCAAMBWestRegionalThirdRound:
                    handler->string_value("NCAAMBWestRegionalThirdRound");
                    break;
                case Value_NCAAMBEastRegionalThirdRound:
                    handler->string_value("NCAAMBEastRegionalThirdRound");
                    break;
                case Value_NCAAMBMidwestRegionalSweet16:
                    handler->string_value("NCAAMBMidwestRegionalSweet16");
                    break;
                case Value_NCAAMBSouthRegionalSweet16:
                    handler->string_value("NCAAMBSouthRegionalSweet16");
                    break;
                case Value_NCAAMBWestRegionalSweet16:
                    handler->string_value("NCAAMBWestRegionalSweet16");
                    break;
                case Value_NCAAMBEastRegionalSweet16:
                    handler->string_value("NCAAMBEastRegionalSweet16");
                    break;
                case Value_NCAAMBMidwestRegionalElite8:
                    handler->string_value("NCAAMBMidwestRegionalElite8");
                    break;
                case Value_NCAAMBSouthRegionalElite8:
                    handler->string_value("NCAAMBSouthRegionalElite8");
                    break;
                case Value_NCAAMBWestRegionalElite8:
                    handler->string_value("NCAAMBWestRegionalElite8");
                    break;
                case Value_NCAAMBEastRegionalElite8:
                    handler->string_value("NCAAMBEastRegionalElite8");
                    break;
                case Value_NCAAMBFinalFourSemiFinals:
                    handler->string_value("NCAAMBFinalFourSemiFinals");
                    break;
                case Value_NCAAMBFinalFourFinals:
                    handler->string_value("NCAAMBFinalFourFinals");
                    break;
                case Value_NCAAMBTournament:
                    handler->string_value("NCAAMBTournament");
                    break;
                case Value_NCAAMBCITFirstRound:
                    handler->string_value("NCAAMBCITFirstRound");
                    break;
                case Value_NCAAMBCITSecondRound:
                    handler->string_value("NCAAMBCITSecondRound");
                    break;
                case Value_NCAAMBCITQuarterfinals:
                    handler->string_value("NCAAMBCITQuarterfinals");
                    break;
                case Value_NCAAMBCITSemifinals:
                    handler->string_value("NCAAMBCITSemifinals");
                    break;
                case Value_NCAAMBCITChampionship:
                    handler->string_value("NCAAMBCITChampionship");
                    break;
                case Value_NCAAMBCIT:
                    handler->string_value("NCAAMBCIT");
                    break;
                case Value_NCAAMBCBIFirstRound:
                    handler->string_value("NCAAMBCBIFirstRound");
                    break;
                case Value_NCAAMBCBIQuarterfinals:
                    handler->string_value("NCAAMBCBIQuarterfinals");
                    break;
                case Value_NCAAMBCBISemifinals:
                    handler->string_value("NCAAMBCBISemifinals");
                    break;
                case Value_NCAAMBCBIChampionship:
                    handler->string_value("NCAAMBCBIChampionship");
                    break;
                case Value_NCAAMBCBI:
                    handler->string_value("NCAAMBCBI");
                    break;
                case Value_NCAAMBNITFirstRound:
                    handler->string_value("NCAAMBNITFirstRound");
                    break;
                case Value_NCAAMBNITSecondRound:
                    handler->string_value("NCAAMBNITSecondRound");
                    break;
                case Value_NCAAMBNITQuarterfinals:
                    handler->string_value("NCAAMBNITQuarterfinals");
                    break;
                case Value_NCAAMBNITSemifinals:
                    handler->string_value("NCAAMBNITSemifinals");
                    break;
                case Value_NCAAMBNITChampionship:
                    handler->string_value("NCAAMBNITChampionship");
                    break;
                case Value_NCAAMBNIT:
                    handler->string_value("NCAAMBNIT");
                    break;
                case Value_CFLSemiFinalsEast:
                    handler->string_value("CFLSemiFinalsEast");
                    break;
                case Value_CFLSemiFinalsWest:
                    handler->string_value("CFLSemiFinalsWest");
                    break;
                case Value_CFLFinalsEast:
                    handler->string_value("CFLFinalsEast");
                    break;
                case Value_CFLFinalsWest:
                    handler->string_value("CFLFinalsWest");
                    break;
                case Value_CFLGreyCup:
                    handler->string_value("CFLGreyCup");
                    break;
                case Value_UEFAChampionsLeagueRoundOf16:
                    handler->string_value("UEFAChampionsLeagueRoundOf16");
                    break;
                case Value_UEFAChampionsLeagueQuarterFinals:
                    handler->string_value("UEFAChampionsLeagueQuarterFinals");
                    break;
                case Value_UEFAChampionsLeagueSemiFinals:
                    handler->string_value("UEFAChampionsLeagueSemiFinals");
                    break;
                case Value_UEFAChampionsLeagueFinal:
                    handler->string_value("UEFAChampionsLeagueFinal");
                    break;
                case Value_EuropaLeagueRoundOf32:
                    handler->string_value("EuropaLeagueRoundOf32");
                    break;
                case Value_EuropaLeagueRoundOf16:
                    handler->string_value("EuropaLeagueRoundOf16");
                    break;
                case Value_EuropaLeagueQuarterFinals:
                    handler->string_value("EuropaLeagueQuarterFinals");
                    break;
                case Value_EuropaLeagueSemiFinals:
                    handler->string_value("EuropaLeagueSemiFinals");
                    break;
                case Value_EuropaLeagueFinal:
                    handler->string_value("EuropaLeagueFinal");
                    break;
                case Value_UEFASuperCup:
                    handler->string_value("UEFASuperCup");
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

    static SportsPlayoffSpecialGameJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayoffSpecialGameJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayoffSpecialGameJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool> generator("Type SportsPlayoffSpecialGame", ignore_extras);
            parse_json_value(text, "Text for SportsPlayoffSpecialGameJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayoffSpecialGameJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayoffSpecialGameJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool> generator("Type SportsPlayoffSpecialGame", ignore_extras);
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
            SportsPlayoffSpecialGameJSON *result = new SportsPlayoffSpecialGameJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsPlayoffSpecialGameJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSPLAYOFFSPECIALGAMEJSON_H */
