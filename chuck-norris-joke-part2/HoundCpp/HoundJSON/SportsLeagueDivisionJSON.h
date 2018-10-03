/* file "SportsLeagueDivisionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUEDIVISIONJSON_H
#define SPORTSLEAGUEDIVISIONJSON_H

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


class SportsLeagueDivisionJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_MLBNationalLeague,
        Value_MLBNationalLeagueEast,
        Value_MLBNationalLeagueCentral,
        Value_MLBNationalLeagueWest,
        Value_MLBAmericanLeague,
        Value_MLBAmericanLeagueEast,
        Value_MLBAmericanLeagueCentral,
        Value_MLBAmericanLeagueWest,
        Value_NBAEastern,
        Value_NBAEasternAtlantic,
        Value_NBAEasternCentral,
        Value_NBAEasternSoutheast,
        Value_NBAWestern,
        Value_NBAWesternNorthwest,
        Value_NBAWesternPacific,
        Value_NBAWesternSouthwest,
        Value_NFLAFC,
        Value_NFLAFCEast,
        Value_NFLAFCNorth,
        Value_NFLAFCSouth,
        Value_NFLAFCWest,
        Value_NFLNFC,
        Value_NFLNFCEast,
        Value_NFLNFCNorth,
        Value_NFLNFCSouth,
        Value_NFLNFCWest,
        Value_NHLEastern,
        Value_NHLEasternAtlantic,
        Value_NHLEasternMetropolitan,
        Value_NHLWestern,
        Value_NHLWesternCentral,
        Value_NHLWesternPacific,
        Value_NCAAMBDivisionI,
        Value_NCAAMBDivisionIAmericaEast,
        Value_NCAAMBDivisionIAmericanAthleticConference,
        Value_NCAAMBDivisionIAtlantic10,
        Value_NCAAMBDivisionIAtlanticCoast,
        Value_NCAAMBDivisionIAtlanticSun,
        Value_NCAAMBDivisionIBig10,
        Value_NCAAMBDivisionIBig12,
        Value_NCAAMBDivisionIBigEast,
        Value_NCAAMBDivisionIBigSky,
        Value_NCAAMBDivisionIBigSouth,
        Value_NCAAMBDivisionIBigWest,
        Value_NCAAMBDivisionIColonialAthleticAssociation,
        Value_NCAAMBDivisionIConferenceUSA,
        Value_NCAAMBDivisionIHorizon,
        Value_NCAAMBDivisionIIvyLeague,
        Value_NCAAMBDivisionIMetroAtlanticAthletic,
        Value_NCAAMBDivisionIMidAmerican,
        Value_NCAAMBDivisionIMidAmericanEast,
        Value_NCAAMBDivisionIMidAmericanWest,
        Value_NCAAMBDivisionIMidEastern,
        Value_NCAAMBDivisionIMissouriValley,
        Value_NCAAMBDivisionIMountainWest,
        Value_NCAAMBDivisionINortheast,
        Value_NCAAMBDivisionIOhioValley,
        Value_NCAAMBDivisionIOhioValleyEast,
        Value_NCAAMBDivisionIOhioValleyWest,
        Value_NCAAMBDivisionIPac12,
        Value_NCAAMBDivisionIPatriotLeague,
        Value_NCAAMBDivisionISoutheastern,
        Value_NCAAMBDivisionISouthern,
        Value_NCAAMBDivisionISouthland,
        Value_NCAAMBDivisionISouthwesternAtlantic,
        Value_NCAAMBDivisionISummitLeague,
        Value_NCAAMBDivisionISunBelt,
        Value_NCAAMBDivisionIWestCoast,
        Value_NCAAMBDivisionIWesternAthletic,
        Value_NCAAFBFBS,
        Value_NCAAFBFBSAtlanticCoast,
        Value_NCAAFBFBSAtlanticCoastAtlantic,
        Value_NCAAFBFBSAtlanticCoastCoastal,
        Value_NCAAFBFBSAmericanAthleticConference,
        Value_NCAAFBFBSAmericanAthleticConferenceWest,
        Value_NCAAFBFBSAmericanAthleticConferenceEast,
        Value_NCAAFBFBSBig12,
        Value_NCAAFBFBSBig10,
        Value_NCAAFBFBSBig10East,
        Value_NCAAFBFBSBig10West,
        Value_NCAAFBFBSConferenceUSA,
        Value_NCAAFBFBSConferenceUSAEast,
        Value_NCAAFBFBSConferenceUSAWest,
        Value_NCAAFBFBSIndependents,
        Value_NCAAFBFBSMidAmerican,
        Value_NCAAFBFBSMidAmericanWest,
        Value_NCAAFBFBSMidAmericanEast,
        Value_NCAAFBFBSMountainWest,
        Value_NCAAFBFBSMountainWestWest,
        Value_NCAAFBFBSMountainWestMountain,
        Value_NCAAFBFBSPac12,
        Value_NCAAFBFBSPac12North,
        Value_NCAAFBFBSPac12South,
        Value_NCAAFBFBSSoutheastern,
        Value_NCAAFBFBSSoutheasternWest,
        Value_NCAAFBFBSSoutheasternEast,
        Value_NCAAFBFBSSunBelt,
        Value_NCAAFBFCS,
        Value_NCAAFBFCSBigSky,
        Value_NCAAFBFCSBigSouth,
        Value_NCAAFBFCSColonialAthleticAssociation,
        Value_NCAAFBFCSIndependents,
        Value_NCAAFBFCSIvyLeague,
        Value_NCAAFBFCSMidEasternAthletic,
        Value_NCAAFBFCSMissouriValley,
        Value_NCAAFBFCSNortheast,
        Value_NCAAFBFCSOhioValley,
        Value_NCAAFBFCSPatriotLeague,
        Value_NCAAFBFCSPioneerLeague,
        Value_NCAAFBFCSSouthern,
        Value_NCAAFBFCSSouthland,
        Value_NCAAFBFCSSouthwesternAthletic,
        Value_NCAAFBFCSSouthwesternAthleticWest,
        Value_NCAAFBFCSSouthwesternAthleticEast,
        Value_MLSEastern,
        Value_MLSWestern,
        Value_CFLEast,
        Value_CFLWest,
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

    SportsLeagueDivisionJSON(const SportsLeagueDivisionJSON &);
    SportsLeagueDivisionJSON & operator=(const SportsLeagueDivisionJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueDivisionJSON(void);
    SportsLeagueDivisionJSON(TypeValue init_value);
    SportsLeagueDivisionJSON(const char *init_value);
    SportsLeagueDivisionJSON(std::string init_value);
    SportsLeagueDivisionJSON(TypeValueKnownValues init_value);
    virtual ~SportsLeagueDivisionJSON(void);
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
                case Value_MLBNationalLeague:
                    handler->string_value("MLBNationalLeague");
                    break;
                case Value_MLBNationalLeagueEast:
                    handler->string_value("MLBNationalLeagueEast");
                    break;
                case Value_MLBNationalLeagueCentral:
                    handler->string_value("MLBNationalLeagueCentral");
                    break;
                case Value_MLBNationalLeagueWest:
                    handler->string_value("MLBNationalLeagueWest");
                    break;
                case Value_MLBAmericanLeague:
                    handler->string_value("MLBAmericanLeague");
                    break;
                case Value_MLBAmericanLeagueEast:
                    handler->string_value("MLBAmericanLeagueEast");
                    break;
                case Value_MLBAmericanLeagueCentral:
                    handler->string_value("MLBAmericanLeagueCentral");
                    break;
                case Value_MLBAmericanLeagueWest:
                    handler->string_value("MLBAmericanLeagueWest");
                    break;
                case Value_NBAEastern:
                    handler->string_value("NBAEastern");
                    break;
                case Value_NBAEasternAtlantic:
                    handler->string_value("NBAEasternAtlantic");
                    break;
                case Value_NBAEasternCentral:
                    handler->string_value("NBAEasternCentral");
                    break;
                case Value_NBAEasternSoutheast:
                    handler->string_value("NBAEasternSoutheast");
                    break;
                case Value_NBAWestern:
                    handler->string_value("NBAWestern");
                    break;
                case Value_NBAWesternNorthwest:
                    handler->string_value("NBAWesternNorthwest");
                    break;
                case Value_NBAWesternPacific:
                    handler->string_value("NBAWesternPacific");
                    break;
                case Value_NBAWesternSouthwest:
                    handler->string_value("NBAWesternSouthwest");
                    break;
                case Value_NFLAFC:
                    handler->string_value("NFLAFC");
                    break;
                case Value_NFLAFCEast:
                    handler->string_value("NFLAFCEast");
                    break;
                case Value_NFLAFCNorth:
                    handler->string_value("NFLAFCNorth");
                    break;
                case Value_NFLAFCSouth:
                    handler->string_value("NFLAFCSouth");
                    break;
                case Value_NFLAFCWest:
                    handler->string_value("NFLAFCWest");
                    break;
                case Value_NFLNFC:
                    handler->string_value("NFLNFC");
                    break;
                case Value_NFLNFCEast:
                    handler->string_value("NFLNFCEast");
                    break;
                case Value_NFLNFCNorth:
                    handler->string_value("NFLNFCNorth");
                    break;
                case Value_NFLNFCSouth:
                    handler->string_value("NFLNFCSouth");
                    break;
                case Value_NFLNFCWest:
                    handler->string_value("NFLNFCWest");
                    break;
                case Value_NHLEastern:
                    handler->string_value("NHLEastern");
                    break;
                case Value_NHLEasternAtlantic:
                    handler->string_value("NHLEasternAtlantic");
                    break;
                case Value_NHLEasternMetropolitan:
                    handler->string_value("NHLEasternMetropolitan");
                    break;
                case Value_NHLWestern:
                    handler->string_value("NHLWestern");
                    break;
                case Value_NHLWesternCentral:
                    handler->string_value("NHLWesternCentral");
                    break;
                case Value_NHLWesternPacific:
                    handler->string_value("NHLWesternPacific");
                    break;
                case Value_NCAAMBDivisionI:
                    handler->string_value("NCAAMBDivisionI");
                    break;
                case Value_NCAAMBDivisionIAmericaEast:
                    handler->string_value("NCAAMBDivisionIAmericaEast");
                    break;
                case Value_NCAAMBDivisionIAmericanAthleticConference:
                    handler->string_value("NCAAMBDivisionIAmericanAthleticConference");
                    break;
                case Value_NCAAMBDivisionIAtlantic10:
                    handler->string_value("NCAAMBDivisionIAtlantic10");
                    break;
                case Value_NCAAMBDivisionIAtlanticCoast:
                    handler->string_value("NCAAMBDivisionIAtlanticCoast");
                    break;
                case Value_NCAAMBDivisionIAtlanticSun:
                    handler->string_value("NCAAMBDivisionIAtlanticSun");
                    break;
                case Value_NCAAMBDivisionIBig10:
                    handler->string_value("NCAAMBDivisionIBig10");
                    break;
                case Value_NCAAMBDivisionIBig12:
                    handler->string_value("NCAAMBDivisionIBig12");
                    break;
                case Value_NCAAMBDivisionIBigEast:
                    handler->string_value("NCAAMBDivisionIBigEast");
                    break;
                case Value_NCAAMBDivisionIBigSky:
                    handler->string_value("NCAAMBDivisionIBigSky");
                    break;
                case Value_NCAAMBDivisionIBigSouth:
                    handler->string_value("NCAAMBDivisionIBigSouth");
                    break;
                case Value_NCAAMBDivisionIBigWest:
                    handler->string_value("NCAAMBDivisionIBigWest");
                    break;
                case Value_NCAAMBDivisionIColonialAthleticAssociation:
                    handler->string_value("NCAAMBDivisionIColonialAthleticAssociation");
                    break;
                case Value_NCAAMBDivisionIConferenceUSA:
                    handler->string_value("NCAAMBDivisionIConferenceUSA");
                    break;
                case Value_NCAAMBDivisionIHorizon:
                    handler->string_value("NCAAMBDivisionIHorizon");
                    break;
                case Value_NCAAMBDivisionIIvyLeague:
                    handler->string_value("NCAAMBDivisionIIvyLeague");
                    break;
                case Value_NCAAMBDivisionIMetroAtlanticAthletic:
                    handler->string_value("NCAAMBDivisionIMetroAtlanticAthletic");
                    break;
                case Value_NCAAMBDivisionIMidAmerican:
                    handler->string_value("NCAAMBDivisionIMidAmerican");
                    break;
                case Value_NCAAMBDivisionIMidAmericanEast:
                    handler->string_value("NCAAMBDivisionIMidAmericanEast");
                    break;
                case Value_NCAAMBDivisionIMidAmericanWest:
                    handler->string_value("NCAAMBDivisionIMidAmericanWest");
                    break;
                case Value_NCAAMBDivisionIMidEastern:
                    handler->string_value("NCAAMBDivisionIMidEastern");
                    break;
                case Value_NCAAMBDivisionIMissouriValley:
                    handler->string_value("NCAAMBDivisionIMissouriValley");
                    break;
                case Value_NCAAMBDivisionIMountainWest:
                    handler->string_value("NCAAMBDivisionIMountainWest");
                    break;
                case Value_NCAAMBDivisionINortheast:
                    handler->string_value("NCAAMBDivisionINortheast");
                    break;
                case Value_NCAAMBDivisionIOhioValley:
                    handler->string_value("NCAAMBDivisionIOhioValley");
                    break;
                case Value_NCAAMBDivisionIOhioValleyEast:
                    handler->string_value("NCAAMBDivisionIOhioValleyEast");
                    break;
                case Value_NCAAMBDivisionIOhioValleyWest:
                    handler->string_value("NCAAMBDivisionIOhioValleyWest");
                    break;
                case Value_NCAAMBDivisionIPac12:
                    handler->string_value("NCAAMBDivisionIPac12");
                    break;
                case Value_NCAAMBDivisionIPatriotLeague:
                    handler->string_value("NCAAMBDivisionIPatriotLeague");
                    break;
                case Value_NCAAMBDivisionISoutheastern:
                    handler->string_value("NCAAMBDivisionISoutheastern");
                    break;
                case Value_NCAAMBDivisionISouthern:
                    handler->string_value("NCAAMBDivisionISouthern");
                    break;
                case Value_NCAAMBDivisionISouthland:
                    handler->string_value("NCAAMBDivisionISouthland");
                    break;
                case Value_NCAAMBDivisionISouthwesternAtlantic:
                    handler->string_value("NCAAMBDivisionISouthwesternAtlantic");
                    break;
                case Value_NCAAMBDivisionISummitLeague:
                    handler->string_value("NCAAMBDivisionISummitLeague");
                    break;
                case Value_NCAAMBDivisionISunBelt:
                    handler->string_value("NCAAMBDivisionISunBelt");
                    break;
                case Value_NCAAMBDivisionIWestCoast:
                    handler->string_value("NCAAMBDivisionIWestCoast");
                    break;
                case Value_NCAAMBDivisionIWesternAthletic:
                    handler->string_value("NCAAMBDivisionIWesternAthletic");
                    break;
                case Value_NCAAFBFBS:
                    handler->string_value("NCAAFBFBS");
                    break;
                case Value_NCAAFBFBSAtlanticCoast:
                    handler->string_value("NCAAFBFBSAtlanticCoast");
                    break;
                case Value_NCAAFBFBSAtlanticCoastAtlantic:
                    handler->string_value("NCAAFBFBSAtlanticCoastAtlantic");
                    break;
                case Value_NCAAFBFBSAtlanticCoastCoastal:
                    handler->string_value("NCAAFBFBSAtlanticCoastCoastal");
                    break;
                case Value_NCAAFBFBSAmericanAthleticConference:
                    handler->string_value("NCAAFBFBSAmericanAthleticConference");
                    break;
                case Value_NCAAFBFBSAmericanAthleticConferenceWest:
                    handler->string_value("NCAAFBFBSAmericanAthleticConferenceWest");
                    break;
                case Value_NCAAFBFBSAmericanAthleticConferenceEast:
                    handler->string_value("NCAAFBFBSAmericanAthleticConferenceEast");
                    break;
                case Value_NCAAFBFBSBig12:
                    handler->string_value("NCAAFBFBSBig12");
                    break;
                case Value_NCAAFBFBSBig10:
                    handler->string_value("NCAAFBFBSBig10");
                    break;
                case Value_NCAAFBFBSBig10East:
                    handler->string_value("NCAAFBFBSBig10East");
                    break;
                case Value_NCAAFBFBSBig10West:
                    handler->string_value("NCAAFBFBSBig10West");
                    break;
                case Value_NCAAFBFBSConferenceUSA:
                    handler->string_value("NCAAFBFBSConferenceUSA");
                    break;
                case Value_NCAAFBFBSConferenceUSAEast:
                    handler->string_value("NCAAFBFBSConferenceUSAEast");
                    break;
                case Value_NCAAFBFBSConferenceUSAWest:
                    handler->string_value("NCAAFBFBSConferenceUSAWest");
                    break;
                case Value_NCAAFBFBSIndependents:
                    handler->string_value("NCAAFBFBSIndependents");
                    break;
                case Value_NCAAFBFBSMidAmerican:
                    handler->string_value("NCAAFBFBSMidAmerican");
                    break;
                case Value_NCAAFBFBSMidAmericanWest:
                    handler->string_value("NCAAFBFBSMidAmericanWest");
                    break;
                case Value_NCAAFBFBSMidAmericanEast:
                    handler->string_value("NCAAFBFBSMidAmericanEast");
                    break;
                case Value_NCAAFBFBSMountainWest:
                    handler->string_value("NCAAFBFBSMountainWest");
                    break;
                case Value_NCAAFBFBSMountainWestWest:
                    handler->string_value("NCAAFBFBSMountainWestWest");
                    break;
                case Value_NCAAFBFBSMountainWestMountain:
                    handler->string_value("NCAAFBFBSMountainWestMountain");
                    break;
                case Value_NCAAFBFBSPac12:
                    handler->string_value("NCAAFBFBSPac12");
                    break;
                case Value_NCAAFBFBSPac12North:
                    handler->string_value("NCAAFBFBSPac12North");
                    break;
                case Value_NCAAFBFBSPac12South:
                    handler->string_value("NCAAFBFBSPac12South");
                    break;
                case Value_NCAAFBFBSSoutheastern:
                    handler->string_value("NCAAFBFBSSoutheastern");
                    break;
                case Value_NCAAFBFBSSoutheasternWest:
                    handler->string_value("NCAAFBFBSSoutheasternWest");
                    break;
                case Value_NCAAFBFBSSoutheasternEast:
                    handler->string_value("NCAAFBFBSSoutheasternEast");
                    break;
                case Value_NCAAFBFBSSunBelt:
                    handler->string_value("NCAAFBFBSSunBelt");
                    break;
                case Value_NCAAFBFCS:
                    handler->string_value("NCAAFBFCS");
                    break;
                case Value_NCAAFBFCSBigSky:
                    handler->string_value("NCAAFBFCSBigSky");
                    break;
                case Value_NCAAFBFCSBigSouth:
                    handler->string_value("NCAAFBFCSBigSouth");
                    break;
                case Value_NCAAFBFCSColonialAthleticAssociation:
                    handler->string_value("NCAAFBFCSColonialAthleticAssociation");
                    break;
                case Value_NCAAFBFCSIndependents:
                    handler->string_value("NCAAFBFCSIndependents");
                    break;
                case Value_NCAAFBFCSIvyLeague:
                    handler->string_value("NCAAFBFCSIvyLeague");
                    break;
                case Value_NCAAFBFCSMidEasternAthletic:
                    handler->string_value("NCAAFBFCSMidEasternAthletic");
                    break;
                case Value_NCAAFBFCSMissouriValley:
                    handler->string_value("NCAAFBFCSMissouriValley");
                    break;
                case Value_NCAAFBFCSNortheast:
                    handler->string_value("NCAAFBFCSNortheast");
                    break;
                case Value_NCAAFBFCSOhioValley:
                    handler->string_value("NCAAFBFCSOhioValley");
                    break;
                case Value_NCAAFBFCSPatriotLeague:
                    handler->string_value("NCAAFBFCSPatriotLeague");
                    break;
                case Value_NCAAFBFCSPioneerLeague:
                    handler->string_value("NCAAFBFCSPioneerLeague");
                    break;
                case Value_NCAAFBFCSSouthern:
                    handler->string_value("NCAAFBFCSSouthern");
                    break;
                case Value_NCAAFBFCSSouthland:
                    handler->string_value("NCAAFBFCSSouthland");
                    break;
                case Value_NCAAFBFCSSouthwesternAthletic:
                    handler->string_value("NCAAFBFCSSouthwesternAthletic");
                    break;
                case Value_NCAAFBFCSSouthwesternAthleticWest:
                    handler->string_value("NCAAFBFCSSouthwesternAthleticWest");
                    break;
                case Value_NCAAFBFCSSouthwesternAthleticEast:
                    handler->string_value("NCAAFBFCSSouthwesternAthleticEast");
                    break;
                case Value_MLSEastern:
                    handler->string_value("MLSEastern");
                    break;
                case Value_MLSWestern:
                    handler->string_value("MLSWestern");
                    break;
                case Value_CFLEast:
                    handler->string_value("CFLEast");
                    break;
                case Value_CFLWest:
                    handler->string_value("CFLWest");
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

    static SportsLeagueDivisionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueDivisionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueDivisionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool> generator("Type SportsLeagueDivision", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueDivisionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueDivisionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueDivisionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool> generator("Type SportsLeagueDivision", ignore_extras);
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
            SportsLeagueDivisionJSON *result = new SportsLeagueDivisionJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsLeagueDivisionJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSLEAGUEDIVISIONJSON_H */
