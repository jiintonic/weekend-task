/* file "CoreUnitsUnitJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COREUNITSUNITJSON_H
#define COREUNITSUNITJSON_H

#pragma interface

#include "UnitJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CoreUnitsUnitJSON : public UnitJSON
  {
  public:
    enum TypeTagKnownValues
      {
        Tag_inch,
        Tag_thou,
        Tag_barleycorn,
        Tag_hand,
        Tag_foot,
        Tag_yard,
        Tag_rod,
        Tag_link,
        Tag_chain,
        Tag_furlong,
        Tag_mile,
        Tag_league,
        Tag_nautical_mile,
        Tag_cable,
        Tag_fathom,
        Tag_acre,
        Tag_rood,
        Tag_us_gallon,
        Tag_imperial_gallon,
        Tag_us_dry_gallon,
        Tag_us_quart,
        Tag_imperial_quart,
        Tag_us_dry_quart,
        Tag_us_pint,
        Tag_imperial_pint,
        Tag_us_dry_pint,
        Tag_us_gill,
        Tag_imperial_gill,
        Tag_us_customary_cup,
        Tag_us_legal_cup,
        Tag_metric_cup,
        Tag_imperial_cup,
        Tag_us_fluid_ounce,
        Tag_imperial_fluid_ounce,
        Tag_us_fluid_dram,
        Tag_imperial_fluid_dram,
        Tag_us_fluid_scruple,
        Tag_imperial_fluid_scruple,
        Tag_us_minim,
        Tag_imperial_minim,
        Tag_us_customary_tablespoon,
        Tag_us_legal_tablespoon,
        Tag_australian_tablespoon,
        Tag_us_customary_teaspoon,
        Tag_metric_teaspoon,
        Tag_pound,
        Tag_ounce,
        Tag_troy_ounce,
        Tag_dram,
        Tag_grain,
        Tag_stone,
        Tag_short_hundredweight,
        Tag_long_hundredweight,
        Tag_short_ton,
        Tag_long_ton,
        Tag_oil_barrel,
        Tag_degree_fahrenheit,
        Tag_british_thermal_unit,
        Tag_calorie,
        Tag_kilocalorie,
        Tag_mechanical_horsepower,
        Tag_metric_horsepower,
        Tag_us_bushel,
        Tag_meter,
        Tag_yoctometer,
        Tag_zeptometer,
        Tag_attometer,
        Tag_femtometer,
        Tag_picometer,
        Tag_nanometer,
        Tag_micrometer,
        Tag_millimeter,
        Tag_centimeter,
        Tag_decimeter,
        Tag_decameter,
        Tag_hectometer,
        Tag_kilometer,
        Tag_megameter,
        Tag_gigameter,
        Tag_terameter,
        Tag_petameter,
        Tag_exameter,
        Tag_zettameter,
        Tag_yottameter,
        Tag_gram,
        Tag_yoctogram,
        Tag_zeptogram,
        Tag_attogram,
        Tag_femtogram,
        Tag_picogram,
        Tag_nanogram,
        Tag_microgram,
        Tag_milligram,
        Tag_centigram,
        Tag_decigram,
        Tag_decagram,
        Tag_hectogram,
        Tag_kilogram,
        Tag_megagram,
        Tag_gigagram,
        Tag_teragram,
        Tag_petagram,
        Tag_exagram,
        Tag_zettagram,
        Tag_yottagram,
        Tag_second,
        Tag_yoctosecond,
        Tag_zeptosecond,
        Tag_attosecond,
        Tag_femtosecond,
        Tag_picosecond,
        Tag_nanosecond,
        Tag_microsecond,
        Tag_millisecond,
        Tag_centisecond,
        Tag_decisecond,
        Tag_decasecond,
        Tag_hectosecond,
        Tag_kilosecond,
        Tag_megasecond,
        Tag_gigasecond,
        Tag_terasecond,
        Tag_petasecond,
        Tag_exasecond,
        Tag_zettasecond,
        Tag_yottasecond,
        Tag_ampere,
        Tag_yoctoampere,
        Tag_zeptoampere,
        Tag_attoampere,
        Tag_femtoampere,
        Tag_picoampere,
        Tag_nanoampere,
        Tag_microampere,
        Tag_milliampere,
        Tag_centiampere,
        Tag_deciampere,
        Tag_decaampere,
        Tag_hectoampere,
        Tag_kiloampere,
        Tag_megaampere,
        Tag_gigaampere,
        Tag_teraampere,
        Tag_petaampere,
        Tag_exaampere,
        Tag_zettaampere,
        Tag_yottaampere,
        Tag_kelvin,
        Tag_yoctokelvin,
        Tag_zeptokelvin,
        Tag_attokelvin,
        Tag_femtokelvin,
        Tag_picokelvin,
        Tag_nanokelvin,
        Tag_microkelvin,
        Tag_millikelvin,
        Tag_centikelvin,
        Tag_decikelvin,
        Tag_decakelvin,
        Tag_hectokelvin,
        Tag_kilokelvin,
        Tag_megakelvin,
        Tag_gigakelvin,
        Tag_terakelvin,
        Tag_petakelvin,
        Tag_exakelvin,
        Tag_zettakelvin,
        Tag_yottakelvin,
        Tag_mole,
        Tag_yoctomole,
        Tag_zeptomole,
        Tag_attomole,
        Tag_femtomole,
        Tag_picomole,
        Tag_nanomole,
        Tag_micromole,
        Tag_millimole,
        Tag_centimole,
        Tag_decimole,
        Tag_decamole,
        Tag_hectomole,
        Tag_kilomole,
        Tag_megamole,
        Tag_gigamole,
        Tag_teramole,
        Tag_petamole,
        Tag_examole,
        Tag_zettamole,
        Tag_yottamole,
        Tag_candela,
        Tag_yoctocandela,
        Tag_zeptocandela,
        Tag_attocandela,
        Tag_femtocandela,
        Tag_picocandela,
        Tag_nanocandela,
        Tag_microcandela,
        Tag_millicandela,
        Tag_centicandela,
        Tag_decicandela,
        Tag_decacandela,
        Tag_hectocandela,
        Tag_kilocandela,
        Tag_megacandela,
        Tag_gigacandela,
        Tag_teracandela,
        Tag_petacandela,
        Tag_exacandela,
        Tag_zettacandela,
        Tag_yottacandela,
        Tag_radian,
        Tag_yoctoradian,
        Tag_zeptoradian,
        Tag_attoradian,
        Tag_femtoradian,
        Tag_picoradian,
        Tag_nanoradian,
        Tag_microradian,
        Tag_milliradian,
        Tag_centiradian,
        Tag_deciradian,
        Tag_decaradian,
        Tag_hectoradian,
        Tag_kiloradian,
        Tag_megaradian,
        Tag_gigaradian,
        Tag_teraradian,
        Tag_petaradian,
        Tag_exaradian,
        Tag_zettaradian,
        Tag_yottaradian,
        Tag_steradian,
        Tag_yoctosteradian,
        Tag_zeptosteradian,
        Tag_attosteradian,
        Tag_femtosteradian,
        Tag_picosteradian,
        Tag_nanosteradian,
        Tag_microsteradian,
        Tag_millisteradian,
        Tag_centisteradian,
        Tag_decisteradian,
        Tag_decasteradian,
        Tag_hectosteradian,
        Tag_kilosteradian,
        Tag_megasteradian,
        Tag_gigasteradian,
        Tag_terasteradian,
        Tag_petasteradian,
        Tag_exasteradian,
        Tag_zettasteradian,
        Tag_yottasteradian,
        Tag_hertz,
        Tag_yoctohertz,
        Tag_zeptohertz,
        Tag_attohertz,
        Tag_femtohertz,
        Tag_picohertz,
        Tag_nanohertz,
        Tag_microhertz,
        Tag_millihertz,
        Tag_centihertz,
        Tag_decihertz,
        Tag_decahertz,
        Tag_hectohertz,
        Tag_kilohertz,
        Tag_megahertz,
        Tag_gigahertz,
        Tag_terahertz,
        Tag_petahertz,
        Tag_exahertz,
        Tag_zettahertz,
        Tag_yottahertz,
        Tag_newton,
        Tag_yoctonewton,
        Tag_zeptonewton,
        Tag_attonewton,
        Tag_femtonewton,
        Tag_piconewton,
        Tag_nanonewton,
        Tag_micronewton,
        Tag_millinewton,
        Tag_centinewton,
        Tag_decinewton,
        Tag_decanewton,
        Tag_hectonewton,
        Tag_kilonewton,
        Tag_meganewton,
        Tag_giganewton,
        Tag_teranewton,
        Tag_petanewton,
        Tag_exanewton,
        Tag_zettanewton,
        Tag_yottanewton,
        Tag_pascal,
        Tag_yoctopascal,
        Tag_zeptopascal,
        Tag_attopascal,
        Tag_femtopascal,
        Tag_picopascal,
        Tag_nanopascal,
        Tag_micropascal,
        Tag_millipascal,
        Tag_centipascal,
        Tag_decipascal,
        Tag_decapascal,
        Tag_hectopascal,
        Tag_kilopascal,
        Tag_megapascal,
        Tag_gigapascal,
        Tag_terapascal,
        Tag_petapascal,
        Tag_exapascal,
        Tag_zettapascal,
        Tag_yottapascal,
        Tag_joule,
        Tag_yoctojoule,
        Tag_zeptojoule,
        Tag_attojoule,
        Tag_femtojoule,
        Tag_picojoule,
        Tag_nanojoule,
        Tag_microjoule,
        Tag_millijoule,
        Tag_centijoule,
        Tag_decijoule,
        Tag_decajoule,
        Tag_hectojoule,
        Tag_kilojoule,
        Tag_megajoule,
        Tag_gigajoule,
        Tag_terajoule,
        Tag_petajoule,
        Tag_exajoule,
        Tag_zettajoule,
        Tag_yottajoule,
        Tag_watt,
        Tag_yoctowatt,
        Tag_zeptowatt,
        Tag_attowatt,
        Tag_femtowatt,
        Tag_picowatt,
        Tag_nanowatt,
        Tag_microwatt,
        Tag_milliwatt,
        Tag_centiwatt,
        Tag_deciwatt,
        Tag_decawatt,
        Tag_hectowatt,
        Tag_kilowatt,
        Tag_megawatt,
        Tag_gigawatt,
        Tag_terawatt,
        Tag_petawatt,
        Tag_exawatt,
        Tag_zettawatt,
        Tag_yottawatt,
        Tag_coulomb,
        Tag_yoctocoulomb,
        Tag_zeptocoulomb,
        Tag_attocoulomb,
        Tag_femtocoulomb,
        Tag_picocoulomb,
        Tag_nanocoulomb,
        Tag_microcoulomb,
        Tag_millicoulomb,
        Tag_centicoulomb,
        Tag_decicoulomb,
        Tag_decacoulomb,
        Tag_hectocoulomb,
        Tag_kilocoulomb,
        Tag_megacoulomb,
        Tag_gigacoulomb,
        Tag_teracoulomb,
        Tag_petacoulomb,
        Tag_exacoulomb,
        Tag_zettacoulomb,
        Tag_yottacoulomb,
        Tag_volt,
        Tag_yoctovolt,
        Tag_zeptovolt,
        Tag_attovolt,
        Tag_femtovolt,
        Tag_picovolt,
        Tag_nanovolt,
        Tag_microvolt,
        Tag_millivolt,
        Tag_centivolt,
        Tag_decivolt,
        Tag_decavolt,
        Tag_hectovolt,
        Tag_kilovolt,
        Tag_megavolt,
        Tag_gigavolt,
        Tag_teravolt,
        Tag_petavolt,
        Tag_exavolt,
        Tag_zettavolt,
        Tag_yottavolt,
        Tag_farad,
        Tag_yoctofarad,
        Tag_zeptofarad,
        Tag_attofarad,
        Tag_femtofarad,
        Tag_picofarad,
        Tag_nanofarad,
        Tag_microfarad,
        Tag_millifarad,
        Tag_centifarad,
        Tag_decifarad,
        Tag_decafarad,
        Tag_hectofarad,
        Tag_kilofarad,
        Tag_megafarad,
        Tag_gigafarad,
        Tag_terafarad,
        Tag_petafarad,
        Tag_exafarad,
        Tag_zettafarad,
        Tag_yottafarad,
        Tag_ohm,
        Tag_yoctoohm,
        Tag_zeptoohm,
        Tag_attoohm,
        Tag_femtoohm,
        Tag_picoohm,
        Tag_nanoohm,
        Tag_microohm,
        Tag_milliohm,
        Tag_centiohm,
        Tag_deciohm,
        Tag_decaohm,
        Tag_hectoohm,
        Tag_kiloohm,
        Tag_megaohm,
        Tag_gigaohm,
        Tag_teraohm,
        Tag_petaohm,
        Tag_exaohm,
        Tag_zettaohm,
        Tag_yottaohm,
        Tag_siemens,
        Tag_yoctosiemens,
        Tag_zeptosiemens,
        Tag_attosiemens,
        Tag_femtosiemens,
        Tag_picosiemens,
        Tag_nanosiemens,
        Tag_microsiemens,
        Tag_millisiemens,
        Tag_centisiemens,
        Tag_decisiemens,
        Tag_decasiemens,
        Tag_hectosiemens,
        Tag_kilosiemens,
        Tag_megasiemens,
        Tag_gigasiemens,
        Tag_terasiemens,
        Tag_petasiemens,
        Tag_exasiemens,
        Tag_zettasiemens,
        Tag_yottasiemens,
        Tag_weber,
        Tag_yoctoweber,
        Tag_zeptoweber,
        Tag_attoweber,
        Tag_femtoweber,
        Tag_picoweber,
        Tag_nanoweber,
        Tag_microweber,
        Tag_milliweber,
        Tag_centiweber,
        Tag_deciweber,
        Tag_decaweber,
        Tag_hectoweber,
        Tag_kiloweber,
        Tag_megaweber,
        Tag_gigaweber,
        Tag_teraweber,
        Tag_petaweber,
        Tag_exaweber,
        Tag_zettaweber,
        Tag_yottaweber,
        Tag_tesla,
        Tag_yoctotesla,
        Tag_zeptotesla,
        Tag_attotesla,
        Tag_femtotesla,
        Tag_picotesla,
        Tag_nanotesla,
        Tag_microtesla,
        Tag_millitesla,
        Tag_centitesla,
        Tag_decitesla,
        Tag_decatesla,
        Tag_hectotesla,
        Tag_kilotesla,
        Tag_megatesla,
        Tag_gigatesla,
        Tag_teratesla,
        Tag_petatesla,
        Tag_exatesla,
        Tag_zettatesla,
        Tag_yottatesla,
        Tag_henry,
        Tag_yoctohenry,
        Tag_zeptohenry,
        Tag_attohenry,
        Tag_femtohenry,
        Tag_picohenry,
        Tag_nanohenry,
        Tag_microhenry,
        Tag_millihenry,
        Tag_centihenry,
        Tag_decihenry,
        Tag_decahenry,
        Tag_hectohenry,
        Tag_kilohenry,
        Tag_megahenry,
        Tag_gigahenry,
        Tag_terahenry,
        Tag_petahenry,
        Tag_exahenry,
        Tag_zettahenry,
        Tag_yottahenry,
        Tag_degree_celsius,
        Tag_yoctodegree_celsius,
        Tag_zeptodegree_celsius,
        Tag_attodegree_celsius,
        Tag_femtodegree_celsius,
        Tag_picodegree_celsius,
        Tag_nanodegree_celsius,
        Tag_microdegree_celsius,
        Tag_millidegree_celsius,
        Tag_centidegree_celsius,
        Tag_decidegree_celsius,
        Tag_decadegree_celsius,
        Tag_hectodegree_celsius,
        Tag_kilodegree_celsius,
        Tag_megadegree_celsius,
        Tag_gigadegree_celsius,
        Tag_teradegree_celsius,
        Tag_petadegree_celsius,
        Tag_exadegree_celsius,
        Tag_zettadegree_celsius,
        Tag_yottadegree_celsius,
        Tag_lumen,
        Tag_yoctolumen,
        Tag_zeptolumen,
        Tag_attolumen,
        Tag_femtolumen,
        Tag_picolumen,
        Tag_nanolumen,
        Tag_microlumen,
        Tag_millilumen,
        Tag_centilumen,
        Tag_decilumen,
        Tag_decalumen,
        Tag_hectolumen,
        Tag_kilolumen,
        Tag_megalumen,
        Tag_gigalumen,
        Tag_teralumen,
        Tag_petalumen,
        Tag_exalumen,
        Tag_zettalumen,
        Tag_yottalumen,
        Tag_lux,
        Tag_yoctolux,
        Tag_zeptolux,
        Tag_attolux,
        Tag_femtolux,
        Tag_picolux,
        Tag_nanolux,
        Tag_microlux,
        Tag_millilux,
        Tag_centilux,
        Tag_decilux,
        Tag_decalux,
        Tag_hectolux,
        Tag_kilolux,
        Tag_megalux,
        Tag_gigalux,
        Tag_teralux,
        Tag_petalux,
        Tag_exalux,
        Tag_zettalux,
        Tag_yottalux,
        Tag_becquerel,
        Tag_yoctobecquerel,
        Tag_zeptobecquerel,
        Tag_attobecquerel,
        Tag_femtobecquerel,
        Tag_picobecquerel,
        Tag_nanobecquerel,
        Tag_microbecquerel,
        Tag_millibecquerel,
        Tag_centibecquerel,
        Tag_decibecquerel,
        Tag_decabecquerel,
        Tag_hectobecquerel,
        Tag_kilobecquerel,
        Tag_megabecquerel,
        Tag_gigabecquerel,
        Tag_terabecquerel,
        Tag_petabecquerel,
        Tag_exabecquerel,
        Tag_zettabecquerel,
        Tag_yottabecquerel,
        Tag_gray,
        Tag_yoctogray,
        Tag_zeptogray,
        Tag_attogray,
        Tag_femtogray,
        Tag_picogray,
        Tag_nanogray,
        Tag_microgray,
        Tag_milligray,
        Tag_centigray,
        Tag_decigray,
        Tag_decagray,
        Tag_hectogray,
        Tag_kilogray,
        Tag_megagray,
        Tag_gigagray,
        Tag_teragray,
        Tag_petagray,
        Tag_exagray,
        Tag_zettagray,
        Tag_yottagray,
        Tag_sievert,
        Tag_yoctosievert,
        Tag_zeptosievert,
        Tag_attosievert,
        Tag_femtosievert,
        Tag_picosievert,
        Tag_nanosievert,
        Tag_microsievert,
        Tag_millisievert,
        Tag_centisievert,
        Tag_decisievert,
        Tag_decasievert,
        Tag_hectosievert,
        Tag_kilosievert,
        Tag_megasievert,
        Tag_gigasievert,
        Tag_terasievert,
        Tag_petasievert,
        Tag_exasievert,
        Tag_zettasievert,
        Tag_yottasievert,
        Tag_katal,
        Tag_yoctokatal,
        Tag_zeptokatal,
        Tag_attokatal,
        Tag_femtokatal,
        Tag_picokatal,
        Tag_nanokatal,
        Tag_microkatal,
        Tag_millikatal,
        Tag_centikatal,
        Tag_decikatal,
        Tag_decakatal,
        Tag_hectokatal,
        Tag_kilokatal,
        Tag_megakatal,
        Tag_gigakatal,
        Tag_terakatal,
        Tag_petakatal,
        Tag_exakatal,
        Tag_zettakatal,
        Tag_yottakatal,
        Tag_hectare,
        Tag_liter,
        Tag_yoctoliter,
        Tag_zeptoliter,
        Tag_attoliter,
        Tag_femtoliter,
        Tag_picoliter,
        Tag_nanoliter,
        Tag_microliter,
        Tag_milliliter,
        Tag_centiliter,
        Tag_deciliter,
        Tag_decaliter,
        Tag_hectoliter,
        Tag_kiloliter,
        Tag_megaliter,
        Tag_gigaliter,
        Tag_teraliter,
        Tag_petaliter,
        Tag_exaliter,
        Tag_zettaliter,
        Tag_yottaliter,
        Tag_tonne,
        Tag_yoctotonne,
        Tag_zeptotonne,
        Tag_attotonne,
        Tag_femtotonne,
        Tag_picotonne,
        Tag_nanotonne,
        Tag_microtonne,
        Tag_millitonne,
        Tag_centitonne,
        Tag_decitonne,
        Tag_decatonne,
        Tag_hectotonne,
        Tag_kilotonne,
        Tag_megatonne,
        Tag_gigatonne,
        Tag_teratonne,
        Tag_petatonne,
        Tag_exatonne,
        Tag_zettatonne,
        Tag_yottatonne,
        Tag_astronomical_unit,
        Tag_angstrom,
        Tag_minute,
        Tag_hour,
        Tag_day,
        Tag_week,
        Tag_fortnight,
        Tag_month,
        Tag_year,
        Tag_biennium,
        Tag_triennium,
        Tag_quadrennium,
        Tag_lustrum,
        Tag_decade,
        Tag_century,
        Tag_millennium,
        Tag_sidereal_day,
        Tag_sidereal_year,
        Tag_helek,
        Tag_Planck_time,
        Tag_shake,
        Tag_svedberg,
        Tag_parsec,
        Tag__none
      };
    struct TypeTag
      {
        bool in_known_list;
        std::string string_value;
        TypeTagKnownValues list_value;

        TypeTag(void);
        TypeTag(const TypeTag &other);
        TypeTag(TypeTagKnownValues other);
        bool  operator==(const TypeTag &other) const;
        bool  operator!=(const TypeTag &other) const;
        bool  operator<(const TypeTag &other) const;
        bool  operator>(const TypeTag &other) const;
        bool  operator>=(const TypeTag &other) const;
        bool  operator<=(const TypeTag &other) const;

      };

    static TypeTagKnownValues  stringToTag(const char *chars);
    static const char * stringFromTag(TypeTagKnownValues the_enum);

  private:
    bool flagHasTag;
    TypeTag storeTag;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CoreUnitsUnitJSON(const CoreUnitsUnitJSON &);
    CoreUnitsUnitJSON & operator=(const CoreUnitsUnitJSON &other);

    JSONValue * extraTagToJSON(void) const;

    void  fromJSONTag(JSONValue *json_value, bool ignore_extras = false);


  public:
    CoreUnitsUnitJSON(void);
    virtual ~CoreUnitsUnitJSON(void);
    const char * getUnitKind(void) const;
    bool  hasTag(void) const;
    TypeTag  getTag(void);
    const TypeTag  getTag(void) const;
    const char * getTagAsChars(void) const;
    std::string  getTagAsString(void) const;

    virtual size_t extraCoreUnitsUnitComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCoreUnitsUnitComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCoreUnitsUnitComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCoreUnitsUnitComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCoreUnitsUnitLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCoreUnitsUnitLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUnitComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTag)
            ++result;
        result += extraCoreUnitsUnitComponentCount();
        return result;
      }
    const char *extraUnitComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTag)
          {
            if (remainder == 0)
                return "Tag";
            --remainder;
          }
        return extraCoreUnitsUnitComponentKey(remainder);
      }
    JSONValue *extraUnitComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTag)
          {
            if (remainder == 0)
                return extraTagToJSON();
            --remainder;
          }
        return extraCoreUnitsUnitComponentValue(remainder);
      }
    const JSONValue *extraUnitComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTag)
          {
            if (remainder == 0)
                return extraTagToJSON();
            --remainder;
          }
        return extraCoreUnitsUnitComponentValue(remainder);
      }
    JSONValue *extraUnitLookup(const char *field_name)
      {
        if (strcmp(field_name, "Tag") == 0)
            return (flagHasTag ? extraTagToJSON() : NULL);
        return extraCoreUnitsUnitLookup(field_name);
      }
    const JSONValue *extraUnitLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Tag") == 0)
            return (flagHasTag ? extraTagToJSON() : NULL);
        return extraCoreUnitsUnitLookup(field_name);
      }

    void setTag(TypeTag new_value)
      {
        flagHasTag = true;
        storeTag = new_value;
      }
    void setTag(const char *chars)
      {
        TypeTagKnownValues known = stringToTag(chars);
        TypeTag new_value;
        if (known == Tag__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setTag(new_value);
      }
    void setTag(std::string the_string)
      {
        setTag(the_string.c_str());
      }
    void setTag(TypeTagKnownValues new_value)
      {
        TypeTag new_full_value;
        assert(new_value != Tag__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setTag(new_full_value);
      }
    void unsetTag(void)
      {
        flagHasTag = false;
      }

    virtual void extraCoreUnitsUnitAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCoreUnitsUnitSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCoreUnitsUnitLookup(key);
        if (old_field == NULL)
          {
            extraCoreUnitsUnitAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }
    void extraUnitAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Tag") == 0)
            {
            fromJSONTag(new_component, false);
            return;
            }
        extraCoreUnitsUnitAppendPair(key, new_component);
      }
    void extraUnitSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Tag") == 0)
            {
            fromJSONTag(new_component, false);
            return;
            }
        extraCoreUnitsUnitSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        UnitJSON::write_fields_as_json(handler);
        assert(flagHasTag);
        handler->start_pair("Tag");
        if (storeTag.in_known_list)
          {
            switch (storeTag.list_value)
              {
                case Tag_inch:
                    handler->string_value("inch");
                    break;
                case Tag_thou:
                    handler->string_value("thou");
                    break;
                case Tag_barleycorn:
                    handler->string_value("barleycorn");
                    break;
                case Tag_hand:
                    handler->string_value("hand");
                    break;
                case Tag_foot:
                    handler->string_value("foot");
                    break;
                case Tag_yard:
                    handler->string_value("yard");
                    break;
                case Tag_rod:
                    handler->string_value("rod");
                    break;
                case Tag_link:
                    handler->string_value("link");
                    break;
                case Tag_chain:
                    handler->string_value("chain");
                    break;
                case Tag_furlong:
                    handler->string_value("furlong");
                    break;
                case Tag_mile:
                    handler->string_value("mile");
                    break;
                case Tag_league:
                    handler->string_value("league");
                    break;
                case Tag_nautical_mile:
                    handler->string_value("nautical_mile");
                    break;
                case Tag_cable:
                    handler->string_value("cable");
                    break;
                case Tag_fathom:
                    handler->string_value("fathom");
                    break;
                case Tag_acre:
                    handler->string_value("acre");
                    break;
                case Tag_rood:
                    handler->string_value("rood");
                    break;
                case Tag_us_gallon:
                    handler->string_value("us_gallon");
                    break;
                case Tag_imperial_gallon:
                    handler->string_value("imperial_gallon");
                    break;
                case Tag_us_dry_gallon:
                    handler->string_value("us_dry_gallon");
                    break;
                case Tag_us_quart:
                    handler->string_value("us_quart");
                    break;
                case Tag_imperial_quart:
                    handler->string_value("imperial_quart");
                    break;
                case Tag_us_dry_quart:
                    handler->string_value("us_dry_quart");
                    break;
                case Tag_us_pint:
                    handler->string_value("us_pint");
                    break;
                case Tag_imperial_pint:
                    handler->string_value("imperial_pint");
                    break;
                case Tag_us_dry_pint:
                    handler->string_value("us_dry_pint");
                    break;
                case Tag_us_gill:
                    handler->string_value("us_gill");
                    break;
                case Tag_imperial_gill:
                    handler->string_value("imperial_gill");
                    break;
                case Tag_us_customary_cup:
                    handler->string_value("us_customary_cup");
                    break;
                case Tag_us_legal_cup:
                    handler->string_value("us_legal_cup");
                    break;
                case Tag_metric_cup:
                    handler->string_value("metric_cup");
                    break;
                case Tag_imperial_cup:
                    handler->string_value("imperial_cup");
                    break;
                case Tag_us_fluid_ounce:
                    handler->string_value("us_fluid_ounce");
                    break;
                case Tag_imperial_fluid_ounce:
                    handler->string_value("imperial_fluid_ounce");
                    break;
                case Tag_us_fluid_dram:
                    handler->string_value("us_fluid_dram");
                    break;
                case Tag_imperial_fluid_dram:
                    handler->string_value("imperial_fluid_dram");
                    break;
                case Tag_us_fluid_scruple:
                    handler->string_value("us_fluid_scruple");
                    break;
                case Tag_imperial_fluid_scruple:
                    handler->string_value("imperial_fluid_scruple");
                    break;
                case Tag_us_minim:
                    handler->string_value("us_minim");
                    break;
                case Tag_imperial_minim:
                    handler->string_value("imperial_minim");
                    break;
                case Tag_us_customary_tablespoon:
                    handler->string_value("us_customary_tablespoon");
                    break;
                case Tag_us_legal_tablespoon:
                    handler->string_value("us_legal_tablespoon");
                    break;
                case Tag_australian_tablespoon:
                    handler->string_value("australian_tablespoon");
                    break;
                case Tag_us_customary_teaspoon:
                    handler->string_value("us_customary_teaspoon");
                    break;
                case Tag_metric_teaspoon:
                    handler->string_value("metric_teaspoon");
                    break;
                case Tag_pound:
                    handler->string_value("pound");
                    break;
                case Tag_ounce:
                    handler->string_value("ounce");
                    break;
                case Tag_troy_ounce:
                    handler->string_value("troy_ounce");
                    break;
                case Tag_dram:
                    handler->string_value("dram");
                    break;
                case Tag_grain:
                    handler->string_value("grain");
                    break;
                case Tag_stone:
                    handler->string_value("stone");
                    break;
                case Tag_short_hundredweight:
                    handler->string_value("short_hundredweight");
                    break;
                case Tag_long_hundredweight:
                    handler->string_value("long_hundredweight");
                    break;
                case Tag_short_ton:
                    handler->string_value("short_ton");
                    break;
                case Tag_long_ton:
                    handler->string_value("long_ton");
                    break;
                case Tag_oil_barrel:
                    handler->string_value("oil_barrel");
                    break;
                case Tag_degree_fahrenheit:
                    handler->string_value("degree_fahrenheit");
                    break;
                case Tag_british_thermal_unit:
                    handler->string_value("british_thermal_unit");
                    break;
                case Tag_calorie:
                    handler->string_value("calorie");
                    break;
                case Tag_kilocalorie:
                    handler->string_value("kilocalorie");
                    break;
                case Tag_mechanical_horsepower:
                    handler->string_value("mechanical_horsepower");
                    break;
                case Tag_metric_horsepower:
                    handler->string_value("metric_horsepower");
                    break;
                case Tag_us_bushel:
                    handler->string_value("us_bushel");
                    break;
                case Tag_meter:
                    handler->string_value("meter");
                    break;
                case Tag_yoctometer:
                    handler->string_value("yoctometer");
                    break;
                case Tag_zeptometer:
                    handler->string_value("zeptometer");
                    break;
                case Tag_attometer:
                    handler->string_value("attometer");
                    break;
                case Tag_femtometer:
                    handler->string_value("femtometer");
                    break;
                case Tag_picometer:
                    handler->string_value("picometer");
                    break;
                case Tag_nanometer:
                    handler->string_value("nanometer");
                    break;
                case Tag_micrometer:
                    handler->string_value("micrometer");
                    break;
                case Tag_millimeter:
                    handler->string_value("millimeter");
                    break;
                case Tag_centimeter:
                    handler->string_value("centimeter");
                    break;
                case Tag_decimeter:
                    handler->string_value("decimeter");
                    break;
                case Tag_decameter:
                    handler->string_value("decameter");
                    break;
                case Tag_hectometer:
                    handler->string_value("hectometer");
                    break;
                case Tag_kilometer:
                    handler->string_value("kilometer");
                    break;
                case Tag_megameter:
                    handler->string_value("megameter");
                    break;
                case Tag_gigameter:
                    handler->string_value("gigameter");
                    break;
                case Tag_terameter:
                    handler->string_value("terameter");
                    break;
                case Tag_petameter:
                    handler->string_value("petameter");
                    break;
                case Tag_exameter:
                    handler->string_value("exameter");
                    break;
                case Tag_zettameter:
                    handler->string_value("zettameter");
                    break;
                case Tag_yottameter:
                    handler->string_value("yottameter");
                    break;
                case Tag_gram:
                    handler->string_value("gram");
                    break;
                case Tag_yoctogram:
                    handler->string_value("yoctogram");
                    break;
                case Tag_zeptogram:
                    handler->string_value("zeptogram");
                    break;
                case Tag_attogram:
                    handler->string_value("attogram");
                    break;
                case Tag_femtogram:
                    handler->string_value("femtogram");
                    break;
                case Tag_picogram:
                    handler->string_value("picogram");
                    break;
                case Tag_nanogram:
                    handler->string_value("nanogram");
                    break;
                case Tag_microgram:
                    handler->string_value("microgram");
                    break;
                case Tag_milligram:
                    handler->string_value("milligram");
                    break;
                case Tag_centigram:
                    handler->string_value("centigram");
                    break;
                case Tag_decigram:
                    handler->string_value("decigram");
                    break;
                case Tag_decagram:
                    handler->string_value("decagram");
                    break;
                case Tag_hectogram:
                    handler->string_value("hectogram");
                    break;
                case Tag_kilogram:
                    handler->string_value("kilogram");
                    break;
                case Tag_megagram:
                    handler->string_value("megagram");
                    break;
                case Tag_gigagram:
                    handler->string_value("gigagram");
                    break;
                case Tag_teragram:
                    handler->string_value("teragram");
                    break;
                case Tag_petagram:
                    handler->string_value("petagram");
                    break;
                case Tag_exagram:
                    handler->string_value("exagram");
                    break;
                case Tag_zettagram:
                    handler->string_value("zettagram");
                    break;
                case Tag_yottagram:
                    handler->string_value("yottagram");
                    break;
                case Tag_second:
                    handler->string_value("second");
                    break;
                case Tag_yoctosecond:
                    handler->string_value("yoctosecond");
                    break;
                case Tag_zeptosecond:
                    handler->string_value("zeptosecond");
                    break;
                case Tag_attosecond:
                    handler->string_value("attosecond");
                    break;
                case Tag_femtosecond:
                    handler->string_value("femtosecond");
                    break;
                case Tag_picosecond:
                    handler->string_value("picosecond");
                    break;
                case Tag_nanosecond:
                    handler->string_value("nanosecond");
                    break;
                case Tag_microsecond:
                    handler->string_value("microsecond");
                    break;
                case Tag_millisecond:
                    handler->string_value("millisecond");
                    break;
                case Tag_centisecond:
                    handler->string_value("centisecond");
                    break;
                case Tag_decisecond:
                    handler->string_value("decisecond");
                    break;
                case Tag_decasecond:
                    handler->string_value("decasecond");
                    break;
                case Tag_hectosecond:
                    handler->string_value("hectosecond");
                    break;
                case Tag_kilosecond:
                    handler->string_value("kilosecond");
                    break;
                case Tag_megasecond:
                    handler->string_value("megasecond");
                    break;
                case Tag_gigasecond:
                    handler->string_value("gigasecond");
                    break;
                case Tag_terasecond:
                    handler->string_value("terasecond");
                    break;
                case Tag_petasecond:
                    handler->string_value("petasecond");
                    break;
                case Tag_exasecond:
                    handler->string_value("exasecond");
                    break;
                case Tag_zettasecond:
                    handler->string_value("zettasecond");
                    break;
                case Tag_yottasecond:
                    handler->string_value("yottasecond");
                    break;
                case Tag_ampere:
                    handler->string_value("ampere");
                    break;
                case Tag_yoctoampere:
                    handler->string_value("yoctoampere");
                    break;
                case Tag_zeptoampere:
                    handler->string_value("zeptoampere");
                    break;
                case Tag_attoampere:
                    handler->string_value("attoampere");
                    break;
                case Tag_femtoampere:
                    handler->string_value("femtoampere");
                    break;
                case Tag_picoampere:
                    handler->string_value("picoampere");
                    break;
                case Tag_nanoampere:
                    handler->string_value("nanoampere");
                    break;
                case Tag_microampere:
                    handler->string_value("microampere");
                    break;
                case Tag_milliampere:
                    handler->string_value("milliampere");
                    break;
                case Tag_centiampere:
                    handler->string_value("centiampere");
                    break;
                case Tag_deciampere:
                    handler->string_value("deciampere");
                    break;
                case Tag_decaampere:
                    handler->string_value("decaampere");
                    break;
                case Tag_hectoampere:
                    handler->string_value("hectoampere");
                    break;
                case Tag_kiloampere:
                    handler->string_value("kiloampere");
                    break;
                case Tag_megaampere:
                    handler->string_value("megaampere");
                    break;
                case Tag_gigaampere:
                    handler->string_value("gigaampere");
                    break;
                case Tag_teraampere:
                    handler->string_value("teraampere");
                    break;
                case Tag_petaampere:
                    handler->string_value("petaampere");
                    break;
                case Tag_exaampere:
                    handler->string_value("exaampere");
                    break;
                case Tag_zettaampere:
                    handler->string_value("zettaampere");
                    break;
                case Tag_yottaampere:
                    handler->string_value("yottaampere");
                    break;
                case Tag_kelvin:
                    handler->string_value("kelvin");
                    break;
                case Tag_yoctokelvin:
                    handler->string_value("yoctokelvin");
                    break;
                case Tag_zeptokelvin:
                    handler->string_value("zeptokelvin");
                    break;
                case Tag_attokelvin:
                    handler->string_value("attokelvin");
                    break;
                case Tag_femtokelvin:
                    handler->string_value("femtokelvin");
                    break;
                case Tag_picokelvin:
                    handler->string_value("picokelvin");
                    break;
                case Tag_nanokelvin:
                    handler->string_value("nanokelvin");
                    break;
                case Tag_microkelvin:
                    handler->string_value("microkelvin");
                    break;
                case Tag_millikelvin:
                    handler->string_value("millikelvin");
                    break;
                case Tag_centikelvin:
                    handler->string_value("centikelvin");
                    break;
                case Tag_decikelvin:
                    handler->string_value("decikelvin");
                    break;
                case Tag_decakelvin:
                    handler->string_value("decakelvin");
                    break;
                case Tag_hectokelvin:
                    handler->string_value("hectokelvin");
                    break;
                case Tag_kilokelvin:
                    handler->string_value("kilokelvin");
                    break;
                case Tag_megakelvin:
                    handler->string_value("megakelvin");
                    break;
                case Tag_gigakelvin:
                    handler->string_value("gigakelvin");
                    break;
                case Tag_terakelvin:
                    handler->string_value("terakelvin");
                    break;
                case Tag_petakelvin:
                    handler->string_value("petakelvin");
                    break;
                case Tag_exakelvin:
                    handler->string_value("exakelvin");
                    break;
                case Tag_zettakelvin:
                    handler->string_value("zettakelvin");
                    break;
                case Tag_yottakelvin:
                    handler->string_value("yottakelvin");
                    break;
                case Tag_mole:
                    handler->string_value("mole");
                    break;
                case Tag_yoctomole:
                    handler->string_value("yoctomole");
                    break;
                case Tag_zeptomole:
                    handler->string_value("zeptomole");
                    break;
                case Tag_attomole:
                    handler->string_value("attomole");
                    break;
                case Tag_femtomole:
                    handler->string_value("femtomole");
                    break;
                case Tag_picomole:
                    handler->string_value("picomole");
                    break;
                case Tag_nanomole:
                    handler->string_value("nanomole");
                    break;
                case Tag_micromole:
                    handler->string_value("micromole");
                    break;
                case Tag_millimole:
                    handler->string_value("millimole");
                    break;
                case Tag_centimole:
                    handler->string_value("centimole");
                    break;
                case Tag_decimole:
                    handler->string_value("decimole");
                    break;
                case Tag_decamole:
                    handler->string_value("decamole");
                    break;
                case Tag_hectomole:
                    handler->string_value("hectomole");
                    break;
                case Tag_kilomole:
                    handler->string_value("kilomole");
                    break;
                case Tag_megamole:
                    handler->string_value("megamole");
                    break;
                case Tag_gigamole:
                    handler->string_value("gigamole");
                    break;
                case Tag_teramole:
                    handler->string_value("teramole");
                    break;
                case Tag_petamole:
                    handler->string_value("petamole");
                    break;
                case Tag_examole:
                    handler->string_value("examole");
                    break;
                case Tag_zettamole:
                    handler->string_value("zettamole");
                    break;
                case Tag_yottamole:
                    handler->string_value("yottamole");
                    break;
                case Tag_candela:
                    handler->string_value("candela");
                    break;
                case Tag_yoctocandela:
                    handler->string_value("yoctocandela");
                    break;
                case Tag_zeptocandela:
                    handler->string_value("zeptocandela");
                    break;
                case Tag_attocandela:
                    handler->string_value("attocandela");
                    break;
                case Tag_femtocandela:
                    handler->string_value("femtocandela");
                    break;
                case Tag_picocandela:
                    handler->string_value("picocandela");
                    break;
                case Tag_nanocandela:
                    handler->string_value("nanocandela");
                    break;
                case Tag_microcandela:
                    handler->string_value("microcandela");
                    break;
                case Tag_millicandela:
                    handler->string_value("millicandela");
                    break;
                case Tag_centicandela:
                    handler->string_value("centicandela");
                    break;
                case Tag_decicandela:
                    handler->string_value("decicandela");
                    break;
                case Tag_decacandela:
                    handler->string_value("decacandela");
                    break;
                case Tag_hectocandela:
                    handler->string_value("hectocandela");
                    break;
                case Tag_kilocandela:
                    handler->string_value("kilocandela");
                    break;
                case Tag_megacandela:
                    handler->string_value("megacandela");
                    break;
                case Tag_gigacandela:
                    handler->string_value("gigacandela");
                    break;
                case Tag_teracandela:
                    handler->string_value("teracandela");
                    break;
                case Tag_petacandela:
                    handler->string_value("petacandela");
                    break;
                case Tag_exacandela:
                    handler->string_value("exacandela");
                    break;
                case Tag_zettacandela:
                    handler->string_value("zettacandela");
                    break;
                case Tag_yottacandela:
                    handler->string_value("yottacandela");
                    break;
                case Tag_radian:
                    handler->string_value("radian");
                    break;
                case Tag_yoctoradian:
                    handler->string_value("yoctoradian");
                    break;
                case Tag_zeptoradian:
                    handler->string_value("zeptoradian");
                    break;
                case Tag_attoradian:
                    handler->string_value("attoradian");
                    break;
                case Tag_femtoradian:
                    handler->string_value("femtoradian");
                    break;
                case Tag_picoradian:
                    handler->string_value("picoradian");
                    break;
                case Tag_nanoradian:
                    handler->string_value("nanoradian");
                    break;
                case Tag_microradian:
                    handler->string_value("microradian");
                    break;
                case Tag_milliradian:
                    handler->string_value("milliradian");
                    break;
                case Tag_centiradian:
                    handler->string_value("centiradian");
                    break;
                case Tag_deciradian:
                    handler->string_value("deciradian");
                    break;
                case Tag_decaradian:
                    handler->string_value("decaradian");
                    break;
                case Tag_hectoradian:
                    handler->string_value("hectoradian");
                    break;
                case Tag_kiloradian:
                    handler->string_value("kiloradian");
                    break;
                case Tag_megaradian:
                    handler->string_value("megaradian");
                    break;
                case Tag_gigaradian:
                    handler->string_value("gigaradian");
                    break;
                case Tag_teraradian:
                    handler->string_value("teraradian");
                    break;
                case Tag_petaradian:
                    handler->string_value("petaradian");
                    break;
                case Tag_exaradian:
                    handler->string_value("exaradian");
                    break;
                case Tag_zettaradian:
                    handler->string_value("zettaradian");
                    break;
                case Tag_yottaradian:
                    handler->string_value("yottaradian");
                    break;
                case Tag_steradian:
                    handler->string_value("steradian");
                    break;
                case Tag_yoctosteradian:
                    handler->string_value("yoctosteradian");
                    break;
                case Tag_zeptosteradian:
                    handler->string_value("zeptosteradian");
                    break;
                case Tag_attosteradian:
                    handler->string_value("attosteradian");
                    break;
                case Tag_femtosteradian:
                    handler->string_value("femtosteradian");
                    break;
                case Tag_picosteradian:
                    handler->string_value("picosteradian");
                    break;
                case Tag_nanosteradian:
                    handler->string_value("nanosteradian");
                    break;
                case Tag_microsteradian:
                    handler->string_value("microsteradian");
                    break;
                case Tag_millisteradian:
                    handler->string_value("millisteradian");
                    break;
                case Tag_centisteradian:
                    handler->string_value("centisteradian");
                    break;
                case Tag_decisteradian:
                    handler->string_value("decisteradian");
                    break;
                case Tag_decasteradian:
                    handler->string_value("decasteradian");
                    break;
                case Tag_hectosteradian:
                    handler->string_value("hectosteradian");
                    break;
                case Tag_kilosteradian:
                    handler->string_value("kilosteradian");
                    break;
                case Tag_megasteradian:
                    handler->string_value("megasteradian");
                    break;
                case Tag_gigasteradian:
                    handler->string_value("gigasteradian");
                    break;
                case Tag_terasteradian:
                    handler->string_value("terasteradian");
                    break;
                case Tag_petasteradian:
                    handler->string_value("petasteradian");
                    break;
                case Tag_exasteradian:
                    handler->string_value("exasteradian");
                    break;
                case Tag_zettasteradian:
                    handler->string_value("zettasteradian");
                    break;
                case Tag_yottasteradian:
                    handler->string_value("yottasteradian");
                    break;
                case Tag_hertz:
                    handler->string_value("hertz");
                    break;
                case Tag_yoctohertz:
                    handler->string_value("yoctohertz");
                    break;
                case Tag_zeptohertz:
                    handler->string_value("zeptohertz");
                    break;
                case Tag_attohertz:
                    handler->string_value("attohertz");
                    break;
                case Tag_femtohertz:
                    handler->string_value("femtohertz");
                    break;
                case Tag_picohertz:
                    handler->string_value("picohertz");
                    break;
                case Tag_nanohertz:
                    handler->string_value("nanohertz");
                    break;
                case Tag_microhertz:
                    handler->string_value("microhertz");
                    break;
                case Tag_millihertz:
                    handler->string_value("millihertz");
                    break;
                case Tag_centihertz:
                    handler->string_value("centihertz");
                    break;
                case Tag_decihertz:
                    handler->string_value("decihertz");
                    break;
                case Tag_decahertz:
                    handler->string_value("decahertz");
                    break;
                case Tag_hectohertz:
                    handler->string_value("hectohertz");
                    break;
                case Tag_kilohertz:
                    handler->string_value("kilohertz");
                    break;
                case Tag_megahertz:
                    handler->string_value("megahertz");
                    break;
                case Tag_gigahertz:
                    handler->string_value("gigahertz");
                    break;
                case Tag_terahertz:
                    handler->string_value("terahertz");
                    break;
                case Tag_petahertz:
                    handler->string_value("petahertz");
                    break;
                case Tag_exahertz:
                    handler->string_value("exahertz");
                    break;
                case Tag_zettahertz:
                    handler->string_value("zettahertz");
                    break;
                case Tag_yottahertz:
                    handler->string_value("yottahertz");
                    break;
                case Tag_newton:
                    handler->string_value("newton");
                    break;
                case Tag_yoctonewton:
                    handler->string_value("yoctonewton");
                    break;
                case Tag_zeptonewton:
                    handler->string_value("zeptonewton");
                    break;
                case Tag_attonewton:
                    handler->string_value("attonewton");
                    break;
                case Tag_femtonewton:
                    handler->string_value("femtonewton");
                    break;
                case Tag_piconewton:
                    handler->string_value("piconewton");
                    break;
                case Tag_nanonewton:
                    handler->string_value("nanonewton");
                    break;
                case Tag_micronewton:
                    handler->string_value("micronewton");
                    break;
                case Tag_millinewton:
                    handler->string_value("millinewton");
                    break;
                case Tag_centinewton:
                    handler->string_value("centinewton");
                    break;
                case Tag_decinewton:
                    handler->string_value("decinewton");
                    break;
                case Tag_decanewton:
                    handler->string_value("decanewton");
                    break;
                case Tag_hectonewton:
                    handler->string_value("hectonewton");
                    break;
                case Tag_kilonewton:
                    handler->string_value("kilonewton");
                    break;
                case Tag_meganewton:
                    handler->string_value("meganewton");
                    break;
                case Tag_giganewton:
                    handler->string_value("giganewton");
                    break;
                case Tag_teranewton:
                    handler->string_value("teranewton");
                    break;
                case Tag_petanewton:
                    handler->string_value("petanewton");
                    break;
                case Tag_exanewton:
                    handler->string_value("exanewton");
                    break;
                case Tag_zettanewton:
                    handler->string_value("zettanewton");
                    break;
                case Tag_yottanewton:
                    handler->string_value("yottanewton");
                    break;
                case Tag_pascal:
                    handler->string_value("pascal");
                    break;
                case Tag_yoctopascal:
                    handler->string_value("yoctopascal");
                    break;
                case Tag_zeptopascal:
                    handler->string_value("zeptopascal");
                    break;
                case Tag_attopascal:
                    handler->string_value("attopascal");
                    break;
                case Tag_femtopascal:
                    handler->string_value("femtopascal");
                    break;
                case Tag_picopascal:
                    handler->string_value("picopascal");
                    break;
                case Tag_nanopascal:
                    handler->string_value("nanopascal");
                    break;
                case Tag_micropascal:
                    handler->string_value("micropascal");
                    break;
                case Tag_millipascal:
                    handler->string_value("millipascal");
                    break;
                case Tag_centipascal:
                    handler->string_value("centipascal");
                    break;
                case Tag_decipascal:
                    handler->string_value("decipascal");
                    break;
                case Tag_decapascal:
                    handler->string_value("decapascal");
                    break;
                case Tag_hectopascal:
                    handler->string_value("hectopascal");
                    break;
                case Tag_kilopascal:
                    handler->string_value("kilopascal");
                    break;
                case Tag_megapascal:
                    handler->string_value("megapascal");
                    break;
                case Tag_gigapascal:
                    handler->string_value("gigapascal");
                    break;
                case Tag_terapascal:
                    handler->string_value("terapascal");
                    break;
                case Tag_petapascal:
                    handler->string_value("petapascal");
                    break;
                case Tag_exapascal:
                    handler->string_value("exapascal");
                    break;
                case Tag_zettapascal:
                    handler->string_value("zettapascal");
                    break;
                case Tag_yottapascal:
                    handler->string_value("yottapascal");
                    break;
                case Tag_joule:
                    handler->string_value("joule");
                    break;
                case Tag_yoctojoule:
                    handler->string_value("yoctojoule");
                    break;
                case Tag_zeptojoule:
                    handler->string_value("zeptojoule");
                    break;
                case Tag_attojoule:
                    handler->string_value("attojoule");
                    break;
                case Tag_femtojoule:
                    handler->string_value("femtojoule");
                    break;
                case Tag_picojoule:
                    handler->string_value("picojoule");
                    break;
                case Tag_nanojoule:
                    handler->string_value("nanojoule");
                    break;
                case Tag_microjoule:
                    handler->string_value("microjoule");
                    break;
                case Tag_millijoule:
                    handler->string_value("millijoule");
                    break;
                case Tag_centijoule:
                    handler->string_value("centijoule");
                    break;
                case Tag_decijoule:
                    handler->string_value("decijoule");
                    break;
                case Tag_decajoule:
                    handler->string_value("decajoule");
                    break;
                case Tag_hectojoule:
                    handler->string_value("hectojoule");
                    break;
                case Tag_kilojoule:
                    handler->string_value("kilojoule");
                    break;
                case Tag_megajoule:
                    handler->string_value("megajoule");
                    break;
                case Tag_gigajoule:
                    handler->string_value("gigajoule");
                    break;
                case Tag_terajoule:
                    handler->string_value("terajoule");
                    break;
                case Tag_petajoule:
                    handler->string_value("petajoule");
                    break;
                case Tag_exajoule:
                    handler->string_value("exajoule");
                    break;
                case Tag_zettajoule:
                    handler->string_value("zettajoule");
                    break;
                case Tag_yottajoule:
                    handler->string_value("yottajoule");
                    break;
                case Tag_watt:
                    handler->string_value("watt");
                    break;
                case Tag_yoctowatt:
                    handler->string_value("yoctowatt");
                    break;
                case Tag_zeptowatt:
                    handler->string_value("zeptowatt");
                    break;
                case Tag_attowatt:
                    handler->string_value("attowatt");
                    break;
                case Tag_femtowatt:
                    handler->string_value("femtowatt");
                    break;
                case Tag_picowatt:
                    handler->string_value("picowatt");
                    break;
                case Tag_nanowatt:
                    handler->string_value("nanowatt");
                    break;
                case Tag_microwatt:
                    handler->string_value("microwatt");
                    break;
                case Tag_milliwatt:
                    handler->string_value("milliwatt");
                    break;
                case Tag_centiwatt:
                    handler->string_value("centiwatt");
                    break;
                case Tag_deciwatt:
                    handler->string_value("deciwatt");
                    break;
                case Tag_decawatt:
                    handler->string_value("decawatt");
                    break;
                case Tag_hectowatt:
                    handler->string_value("hectowatt");
                    break;
                case Tag_kilowatt:
                    handler->string_value("kilowatt");
                    break;
                case Tag_megawatt:
                    handler->string_value("megawatt");
                    break;
                case Tag_gigawatt:
                    handler->string_value("gigawatt");
                    break;
                case Tag_terawatt:
                    handler->string_value("terawatt");
                    break;
                case Tag_petawatt:
                    handler->string_value("petawatt");
                    break;
                case Tag_exawatt:
                    handler->string_value("exawatt");
                    break;
                case Tag_zettawatt:
                    handler->string_value("zettawatt");
                    break;
                case Tag_yottawatt:
                    handler->string_value("yottawatt");
                    break;
                case Tag_coulomb:
                    handler->string_value("coulomb");
                    break;
                case Tag_yoctocoulomb:
                    handler->string_value("yoctocoulomb");
                    break;
                case Tag_zeptocoulomb:
                    handler->string_value("zeptocoulomb");
                    break;
                case Tag_attocoulomb:
                    handler->string_value("attocoulomb");
                    break;
                case Tag_femtocoulomb:
                    handler->string_value("femtocoulomb");
                    break;
                case Tag_picocoulomb:
                    handler->string_value("picocoulomb");
                    break;
                case Tag_nanocoulomb:
                    handler->string_value("nanocoulomb");
                    break;
                case Tag_microcoulomb:
                    handler->string_value("microcoulomb");
                    break;
                case Tag_millicoulomb:
                    handler->string_value("millicoulomb");
                    break;
                case Tag_centicoulomb:
                    handler->string_value("centicoulomb");
                    break;
                case Tag_decicoulomb:
                    handler->string_value("decicoulomb");
                    break;
                case Tag_decacoulomb:
                    handler->string_value("decacoulomb");
                    break;
                case Tag_hectocoulomb:
                    handler->string_value("hectocoulomb");
                    break;
                case Tag_kilocoulomb:
                    handler->string_value("kilocoulomb");
                    break;
                case Tag_megacoulomb:
                    handler->string_value("megacoulomb");
                    break;
                case Tag_gigacoulomb:
                    handler->string_value("gigacoulomb");
                    break;
                case Tag_teracoulomb:
                    handler->string_value("teracoulomb");
                    break;
                case Tag_petacoulomb:
                    handler->string_value("petacoulomb");
                    break;
                case Tag_exacoulomb:
                    handler->string_value("exacoulomb");
                    break;
                case Tag_zettacoulomb:
                    handler->string_value("zettacoulomb");
                    break;
                case Tag_yottacoulomb:
                    handler->string_value("yottacoulomb");
                    break;
                case Tag_volt:
                    handler->string_value("volt");
                    break;
                case Tag_yoctovolt:
                    handler->string_value("yoctovolt");
                    break;
                case Tag_zeptovolt:
                    handler->string_value("zeptovolt");
                    break;
                case Tag_attovolt:
                    handler->string_value("attovolt");
                    break;
                case Tag_femtovolt:
                    handler->string_value("femtovolt");
                    break;
                case Tag_picovolt:
                    handler->string_value("picovolt");
                    break;
                case Tag_nanovolt:
                    handler->string_value("nanovolt");
                    break;
                case Tag_microvolt:
                    handler->string_value("microvolt");
                    break;
                case Tag_millivolt:
                    handler->string_value("millivolt");
                    break;
                case Tag_centivolt:
                    handler->string_value("centivolt");
                    break;
                case Tag_decivolt:
                    handler->string_value("decivolt");
                    break;
                case Tag_decavolt:
                    handler->string_value("decavolt");
                    break;
                case Tag_hectovolt:
                    handler->string_value("hectovolt");
                    break;
                case Tag_kilovolt:
                    handler->string_value("kilovolt");
                    break;
                case Tag_megavolt:
                    handler->string_value("megavolt");
                    break;
                case Tag_gigavolt:
                    handler->string_value("gigavolt");
                    break;
                case Tag_teravolt:
                    handler->string_value("teravolt");
                    break;
                case Tag_petavolt:
                    handler->string_value("petavolt");
                    break;
                case Tag_exavolt:
                    handler->string_value("exavolt");
                    break;
                case Tag_zettavolt:
                    handler->string_value("zettavolt");
                    break;
                case Tag_yottavolt:
                    handler->string_value("yottavolt");
                    break;
                case Tag_farad:
                    handler->string_value("farad");
                    break;
                case Tag_yoctofarad:
                    handler->string_value("yoctofarad");
                    break;
                case Tag_zeptofarad:
                    handler->string_value("zeptofarad");
                    break;
                case Tag_attofarad:
                    handler->string_value("attofarad");
                    break;
                case Tag_femtofarad:
                    handler->string_value("femtofarad");
                    break;
                case Tag_picofarad:
                    handler->string_value("picofarad");
                    break;
                case Tag_nanofarad:
                    handler->string_value("nanofarad");
                    break;
                case Tag_microfarad:
                    handler->string_value("microfarad");
                    break;
                case Tag_millifarad:
                    handler->string_value("millifarad");
                    break;
                case Tag_centifarad:
                    handler->string_value("centifarad");
                    break;
                case Tag_decifarad:
                    handler->string_value("decifarad");
                    break;
                case Tag_decafarad:
                    handler->string_value("decafarad");
                    break;
                case Tag_hectofarad:
                    handler->string_value("hectofarad");
                    break;
                case Tag_kilofarad:
                    handler->string_value("kilofarad");
                    break;
                case Tag_megafarad:
                    handler->string_value("megafarad");
                    break;
                case Tag_gigafarad:
                    handler->string_value("gigafarad");
                    break;
                case Tag_terafarad:
                    handler->string_value("terafarad");
                    break;
                case Tag_petafarad:
                    handler->string_value("petafarad");
                    break;
                case Tag_exafarad:
                    handler->string_value("exafarad");
                    break;
                case Tag_zettafarad:
                    handler->string_value("zettafarad");
                    break;
                case Tag_yottafarad:
                    handler->string_value("yottafarad");
                    break;
                case Tag_ohm:
                    handler->string_value("ohm");
                    break;
                case Tag_yoctoohm:
                    handler->string_value("yoctoohm");
                    break;
                case Tag_zeptoohm:
                    handler->string_value("zeptoohm");
                    break;
                case Tag_attoohm:
                    handler->string_value("attoohm");
                    break;
                case Tag_femtoohm:
                    handler->string_value("femtoohm");
                    break;
                case Tag_picoohm:
                    handler->string_value("picoohm");
                    break;
                case Tag_nanoohm:
                    handler->string_value("nanoohm");
                    break;
                case Tag_microohm:
                    handler->string_value("microohm");
                    break;
                case Tag_milliohm:
                    handler->string_value("milliohm");
                    break;
                case Tag_centiohm:
                    handler->string_value("centiohm");
                    break;
                case Tag_deciohm:
                    handler->string_value("deciohm");
                    break;
                case Tag_decaohm:
                    handler->string_value("decaohm");
                    break;
                case Tag_hectoohm:
                    handler->string_value("hectoohm");
                    break;
                case Tag_kiloohm:
                    handler->string_value("kiloohm");
                    break;
                case Tag_megaohm:
                    handler->string_value("megaohm");
                    break;
                case Tag_gigaohm:
                    handler->string_value("gigaohm");
                    break;
                case Tag_teraohm:
                    handler->string_value("teraohm");
                    break;
                case Tag_petaohm:
                    handler->string_value("petaohm");
                    break;
                case Tag_exaohm:
                    handler->string_value("exaohm");
                    break;
                case Tag_zettaohm:
                    handler->string_value("zettaohm");
                    break;
                case Tag_yottaohm:
                    handler->string_value("yottaohm");
                    break;
                case Tag_siemens:
                    handler->string_value("siemens");
                    break;
                case Tag_yoctosiemens:
                    handler->string_value("yoctosiemens");
                    break;
                case Tag_zeptosiemens:
                    handler->string_value("zeptosiemens");
                    break;
                case Tag_attosiemens:
                    handler->string_value("attosiemens");
                    break;
                case Tag_femtosiemens:
                    handler->string_value("femtosiemens");
                    break;
                case Tag_picosiemens:
                    handler->string_value("picosiemens");
                    break;
                case Tag_nanosiemens:
                    handler->string_value("nanosiemens");
                    break;
                case Tag_microsiemens:
                    handler->string_value("microsiemens");
                    break;
                case Tag_millisiemens:
                    handler->string_value("millisiemens");
                    break;
                case Tag_centisiemens:
                    handler->string_value("centisiemens");
                    break;
                case Tag_decisiemens:
                    handler->string_value("decisiemens");
                    break;
                case Tag_decasiemens:
                    handler->string_value("decasiemens");
                    break;
                case Tag_hectosiemens:
                    handler->string_value("hectosiemens");
                    break;
                case Tag_kilosiemens:
                    handler->string_value("kilosiemens");
                    break;
                case Tag_megasiemens:
                    handler->string_value("megasiemens");
                    break;
                case Tag_gigasiemens:
                    handler->string_value("gigasiemens");
                    break;
                case Tag_terasiemens:
                    handler->string_value("terasiemens");
                    break;
                case Tag_petasiemens:
                    handler->string_value("petasiemens");
                    break;
                case Tag_exasiemens:
                    handler->string_value("exasiemens");
                    break;
                case Tag_zettasiemens:
                    handler->string_value("zettasiemens");
                    break;
                case Tag_yottasiemens:
                    handler->string_value("yottasiemens");
                    break;
                case Tag_weber:
                    handler->string_value("weber");
                    break;
                case Tag_yoctoweber:
                    handler->string_value("yoctoweber");
                    break;
                case Tag_zeptoweber:
                    handler->string_value("zeptoweber");
                    break;
                case Tag_attoweber:
                    handler->string_value("attoweber");
                    break;
                case Tag_femtoweber:
                    handler->string_value("femtoweber");
                    break;
                case Tag_picoweber:
                    handler->string_value("picoweber");
                    break;
                case Tag_nanoweber:
                    handler->string_value("nanoweber");
                    break;
                case Tag_microweber:
                    handler->string_value("microweber");
                    break;
                case Tag_milliweber:
                    handler->string_value("milliweber");
                    break;
                case Tag_centiweber:
                    handler->string_value("centiweber");
                    break;
                case Tag_deciweber:
                    handler->string_value("deciweber");
                    break;
                case Tag_decaweber:
                    handler->string_value("decaweber");
                    break;
                case Tag_hectoweber:
                    handler->string_value("hectoweber");
                    break;
                case Tag_kiloweber:
                    handler->string_value("kiloweber");
                    break;
                case Tag_megaweber:
                    handler->string_value("megaweber");
                    break;
                case Tag_gigaweber:
                    handler->string_value("gigaweber");
                    break;
                case Tag_teraweber:
                    handler->string_value("teraweber");
                    break;
                case Tag_petaweber:
                    handler->string_value("petaweber");
                    break;
                case Tag_exaweber:
                    handler->string_value("exaweber");
                    break;
                case Tag_zettaweber:
                    handler->string_value("zettaweber");
                    break;
                case Tag_yottaweber:
                    handler->string_value("yottaweber");
                    break;
                case Tag_tesla:
                    handler->string_value("tesla");
                    break;
                case Tag_yoctotesla:
                    handler->string_value("yoctotesla");
                    break;
                case Tag_zeptotesla:
                    handler->string_value("zeptotesla");
                    break;
                case Tag_attotesla:
                    handler->string_value("attotesla");
                    break;
                case Tag_femtotesla:
                    handler->string_value("femtotesla");
                    break;
                case Tag_picotesla:
                    handler->string_value("picotesla");
                    break;
                case Tag_nanotesla:
                    handler->string_value("nanotesla");
                    break;
                case Tag_microtesla:
                    handler->string_value("microtesla");
                    break;
                case Tag_millitesla:
                    handler->string_value("millitesla");
                    break;
                case Tag_centitesla:
                    handler->string_value("centitesla");
                    break;
                case Tag_decitesla:
                    handler->string_value("decitesla");
                    break;
                case Tag_decatesla:
                    handler->string_value("decatesla");
                    break;
                case Tag_hectotesla:
                    handler->string_value("hectotesla");
                    break;
                case Tag_kilotesla:
                    handler->string_value("kilotesla");
                    break;
                case Tag_megatesla:
                    handler->string_value("megatesla");
                    break;
                case Tag_gigatesla:
                    handler->string_value("gigatesla");
                    break;
                case Tag_teratesla:
                    handler->string_value("teratesla");
                    break;
                case Tag_petatesla:
                    handler->string_value("petatesla");
                    break;
                case Tag_exatesla:
                    handler->string_value("exatesla");
                    break;
                case Tag_zettatesla:
                    handler->string_value("zettatesla");
                    break;
                case Tag_yottatesla:
                    handler->string_value("yottatesla");
                    break;
                case Tag_henry:
                    handler->string_value("henry");
                    break;
                case Tag_yoctohenry:
                    handler->string_value("yoctohenry");
                    break;
                case Tag_zeptohenry:
                    handler->string_value("zeptohenry");
                    break;
                case Tag_attohenry:
                    handler->string_value("attohenry");
                    break;
                case Tag_femtohenry:
                    handler->string_value("femtohenry");
                    break;
                case Tag_picohenry:
                    handler->string_value("picohenry");
                    break;
                case Tag_nanohenry:
                    handler->string_value("nanohenry");
                    break;
                case Tag_microhenry:
                    handler->string_value("microhenry");
                    break;
                case Tag_millihenry:
                    handler->string_value("millihenry");
                    break;
                case Tag_centihenry:
                    handler->string_value("centihenry");
                    break;
                case Tag_decihenry:
                    handler->string_value("decihenry");
                    break;
                case Tag_decahenry:
                    handler->string_value("decahenry");
                    break;
                case Tag_hectohenry:
                    handler->string_value("hectohenry");
                    break;
                case Tag_kilohenry:
                    handler->string_value("kilohenry");
                    break;
                case Tag_megahenry:
                    handler->string_value("megahenry");
                    break;
                case Tag_gigahenry:
                    handler->string_value("gigahenry");
                    break;
                case Tag_terahenry:
                    handler->string_value("terahenry");
                    break;
                case Tag_petahenry:
                    handler->string_value("petahenry");
                    break;
                case Tag_exahenry:
                    handler->string_value("exahenry");
                    break;
                case Tag_zettahenry:
                    handler->string_value("zettahenry");
                    break;
                case Tag_yottahenry:
                    handler->string_value("yottahenry");
                    break;
                case Tag_degree_celsius:
                    handler->string_value("degree_celsius");
                    break;
                case Tag_yoctodegree_celsius:
                    handler->string_value("yoctodegree_celsius");
                    break;
                case Tag_zeptodegree_celsius:
                    handler->string_value("zeptodegree_celsius");
                    break;
                case Tag_attodegree_celsius:
                    handler->string_value("attodegree_celsius");
                    break;
                case Tag_femtodegree_celsius:
                    handler->string_value("femtodegree_celsius");
                    break;
                case Tag_picodegree_celsius:
                    handler->string_value("picodegree_celsius");
                    break;
                case Tag_nanodegree_celsius:
                    handler->string_value("nanodegree_celsius");
                    break;
                case Tag_microdegree_celsius:
                    handler->string_value("microdegree_celsius");
                    break;
                case Tag_millidegree_celsius:
                    handler->string_value("millidegree_celsius");
                    break;
                case Tag_centidegree_celsius:
                    handler->string_value("centidegree_celsius");
                    break;
                case Tag_decidegree_celsius:
                    handler->string_value("decidegree_celsius");
                    break;
                case Tag_decadegree_celsius:
                    handler->string_value("decadegree_celsius");
                    break;
                case Tag_hectodegree_celsius:
                    handler->string_value("hectodegree_celsius");
                    break;
                case Tag_kilodegree_celsius:
                    handler->string_value("kilodegree_celsius");
                    break;
                case Tag_megadegree_celsius:
                    handler->string_value("megadegree_celsius");
                    break;
                case Tag_gigadegree_celsius:
                    handler->string_value("gigadegree_celsius");
                    break;
                case Tag_teradegree_celsius:
                    handler->string_value("teradegree_celsius");
                    break;
                case Tag_petadegree_celsius:
                    handler->string_value("petadegree_celsius");
                    break;
                case Tag_exadegree_celsius:
                    handler->string_value("exadegree_celsius");
                    break;
                case Tag_zettadegree_celsius:
                    handler->string_value("zettadegree_celsius");
                    break;
                case Tag_yottadegree_celsius:
                    handler->string_value("yottadegree_celsius");
                    break;
                case Tag_lumen:
                    handler->string_value("lumen");
                    break;
                case Tag_yoctolumen:
                    handler->string_value("yoctolumen");
                    break;
                case Tag_zeptolumen:
                    handler->string_value("zeptolumen");
                    break;
                case Tag_attolumen:
                    handler->string_value("attolumen");
                    break;
                case Tag_femtolumen:
                    handler->string_value("femtolumen");
                    break;
                case Tag_picolumen:
                    handler->string_value("picolumen");
                    break;
                case Tag_nanolumen:
                    handler->string_value("nanolumen");
                    break;
                case Tag_microlumen:
                    handler->string_value("microlumen");
                    break;
                case Tag_millilumen:
                    handler->string_value("millilumen");
                    break;
                case Tag_centilumen:
                    handler->string_value("centilumen");
                    break;
                case Tag_decilumen:
                    handler->string_value("decilumen");
                    break;
                case Tag_decalumen:
                    handler->string_value("decalumen");
                    break;
                case Tag_hectolumen:
                    handler->string_value("hectolumen");
                    break;
                case Tag_kilolumen:
                    handler->string_value("kilolumen");
                    break;
                case Tag_megalumen:
                    handler->string_value("megalumen");
                    break;
                case Tag_gigalumen:
                    handler->string_value("gigalumen");
                    break;
                case Tag_teralumen:
                    handler->string_value("teralumen");
                    break;
                case Tag_petalumen:
                    handler->string_value("petalumen");
                    break;
                case Tag_exalumen:
                    handler->string_value("exalumen");
                    break;
                case Tag_zettalumen:
                    handler->string_value("zettalumen");
                    break;
                case Tag_yottalumen:
                    handler->string_value("yottalumen");
                    break;
                case Tag_lux:
                    handler->string_value("lux");
                    break;
                case Tag_yoctolux:
                    handler->string_value("yoctolux");
                    break;
                case Tag_zeptolux:
                    handler->string_value("zeptolux");
                    break;
                case Tag_attolux:
                    handler->string_value("attolux");
                    break;
                case Tag_femtolux:
                    handler->string_value("femtolux");
                    break;
                case Tag_picolux:
                    handler->string_value("picolux");
                    break;
                case Tag_nanolux:
                    handler->string_value("nanolux");
                    break;
                case Tag_microlux:
                    handler->string_value("microlux");
                    break;
                case Tag_millilux:
                    handler->string_value("millilux");
                    break;
                case Tag_centilux:
                    handler->string_value("centilux");
                    break;
                case Tag_decilux:
                    handler->string_value("decilux");
                    break;
                case Tag_decalux:
                    handler->string_value("decalux");
                    break;
                case Tag_hectolux:
                    handler->string_value("hectolux");
                    break;
                case Tag_kilolux:
                    handler->string_value("kilolux");
                    break;
                case Tag_megalux:
                    handler->string_value("megalux");
                    break;
                case Tag_gigalux:
                    handler->string_value("gigalux");
                    break;
                case Tag_teralux:
                    handler->string_value("teralux");
                    break;
                case Tag_petalux:
                    handler->string_value("petalux");
                    break;
                case Tag_exalux:
                    handler->string_value("exalux");
                    break;
                case Tag_zettalux:
                    handler->string_value("zettalux");
                    break;
                case Tag_yottalux:
                    handler->string_value("yottalux");
                    break;
                case Tag_becquerel:
                    handler->string_value("becquerel");
                    break;
                case Tag_yoctobecquerel:
                    handler->string_value("yoctobecquerel");
                    break;
                case Tag_zeptobecquerel:
                    handler->string_value("zeptobecquerel");
                    break;
                case Tag_attobecquerel:
                    handler->string_value("attobecquerel");
                    break;
                case Tag_femtobecquerel:
                    handler->string_value("femtobecquerel");
                    break;
                case Tag_picobecquerel:
                    handler->string_value("picobecquerel");
                    break;
                case Tag_nanobecquerel:
                    handler->string_value("nanobecquerel");
                    break;
                case Tag_microbecquerel:
                    handler->string_value("microbecquerel");
                    break;
                case Tag_millibecquerel:
                    handler->string_value("millibecquerel");
                    break;
                case Tag_centibecquerel:
                    handler->string_value("centibecquerel");
                    break;
                case Tag_decibecquerel:
                    handler->string_value("decibecquerel");
                    break;
                case Tag_decabecquerel:
                    handler->string_value("decabecquerel");
                    break;
                case Tag_hectobecquerel:
                    handler->string_value("hectobecquerel");
                    break;
                case Tag_kilobecquerel:
                    handler->string_value("kilobecquerel");
                    break;
                case Tag_megabecquerel:
                    handler->string_value("megabecquerel");
                    break;
                case Tag_gigabecquerel:
                    handler->string_value("gigabecquerel");
                    break;
                case Tag_terabecquerel:
                    handler->string_value("terabecquerel");
                    break;
                case Tag_petabecquerel:
                    handler->string_value("petabecquerel");
                    break;
                case Tag_exabecquerel:
                    handler->string_value("exabecquerel");
                    break;
                case Tag_zettabecquerel:
                    handler->string_value("zettabecquerel");
                    break;
                case Tag_yottabecquerel:
                    handler->string_value("yottabecquerel");
                    break;
                case Tag_gray:
                    handler->string_value("gray");
                    break;
                case Tag_yoctogray:
                    handler->string_value("yoctogray");
                    break;
                case Tag_zeptogray:
                    handler->string_value("zeptogray");
                    break;
                case Tag_attogray:
                    handler->string_value("attogray");
                    break;
                case Tag_femtogray:
                    handler->string_value("femtogray");
                    break;
                case Tag_picogray:
                    handler->string_value("picogray");
                    break;
                case Tag_nanogray:
                    handler->string_value("nanogray");
                    break;
                case Tag_microgray:
                    handler->string_value("microgray");
                    break;
                case Tag_milligray:
                    handler->string_value("milligray");
                    break;
                case Tag_centigray:
                    handler->string_value("centigray");
                    break;
                case Tag_decigray:
                    handler->string_value("decigray");
                    break;
                case Tag_decagray:
                    handler->string_value("decagray");
                    break;
                case Tag_hectogray:
                    handler->string_value("hectogray");
                    break;
                case Tag_kilogray:
                    handler->string_value("kilogray");
                    break;
                case Tag_megagray:
                    handler->string_value("megagray");
                    break;
                case Tag_gigagray:
                    handler->string_value("gigagray");
                    break;
                case Tag_teragray:
                    handler->string_value("teragray");
                    break;
                case Tag_petagray:
                    handler->string_value("petagray");
                    break;
                case Tag_exagray:
                    handler->string_value("exagray");
                    break;
                case Tag_zettagray:
                    handler->string_value("zettagray");
                    break;
                case Tag_yottagray:
                    handler->string_value("yottagray");
                    break;
                case Tag_sievert:
                    handler->string_value("sievert");
                    break;
                case Tag_yoctosievert:
                    handler->string_value("yoctosievert");
                    break;
                case Tag_zeptosievert:
                    handler->string_value("zeptosievert");
                    break;
                case Tag_attosievert:
                    handler->string_value("attosievert");
                    break;
                case Tag_femtosievert:
                    handler->string_value("femtosievert");
                    break;
                case Tag_picosievert:
                    handler->string_value("picosievert");
                    break;
                case Tag_nanosievert:
                    handler->string_value("nanosievert");
                    break;
                case Tag_microsievert:
                    handler->string_value("microsievert");
                    break;
                case Tag_millisievert:
                    handler->string_value("millisievert");
                    break;
                case Tag_centisievert:
                    handler->string_value("centisievert");
                    break;
                case Tag_decisievert:
                    handler->string_value("decisievert");
                    break;
                case Tag_decasievert:
                    handler->string_value("decasievert");
                    break;
                case Tag_hectosievert:
                    handler->string_value("hectosievert");
                    break;
                case Tag_kilosievert:
                    handler->string_value("kilosievert");
                    break;
                case Tag_megasievert:
                    handler->string_value("megasievert");
                    break;
                case Tag_gigasievert:
                    handler->string_value("gigasievert");
                    break;
                case Tag_terasievert:
                    handler->string_value("terasievert");
                    break;
                case Tag_petasievert:
                    handler->string_value("petasievert");
                    break;
                case Tag_exasievert:
                    handler->string_value("exasievert");
                    break;
                case Tag_zettasievert:
                    handler->string_value("zettasievert");
                    break;
                case Tag_yottasievert:
                    handler->string_value("yottasievert");
                    break;
                case Tag_katal:
                    handler->string_value("katal");
                    break;
                case Tag_yoctokatal:
                    handler->string_value("yoctokatal");
                    break;
                case Tag_zeptokatal:
                    handler->string_value("zeptokatal");
                    break;
                case Tag_attokatal:
                    handler->string_value("attokatal");
                    break;
                case Tag_femtokatal:
                    handler->string_value("femtokatal");
                    break;
                case Tag_picokatal:
                    handler->string_value("picokatal");
                    break;
                case Tag_nanokatal:
                    handler->string_value("nanokatal");
                    break;
                case Tag_microkatal:
                    handler->string_value("microkatal");
                    break;
                case Tag_millikatal:
                    handler->string_value("millikatal");
                    break;
                case Tag_centikatal:
                    handler->string_value("centikatal");
                    break;
                case Tag_decikatal:
                    handler->string_value("decikatal");
                    break;
                case Tag_decakatal:
                    handler->string_value("decakatal");
                    break;
                case Tag_hectokatal:
                    handler->string_value("hectokatal");
                    break;
                case Tag_kilokatal:
                    handler->string_value("kilokatal");
                    break;
                case Tag_megakatal:
                    handler->string_value("megakatal");
                    break;
                case Tag_gigakatal:
                    handler->string_value("gigakatal");
                    break;
                case Tag_terakatal:
                    handler->string_value("terakatal");
                    break;
                case Tag_petakatal:
                    handler->string_value("petakatal");
                    break;
                case Tag_exakatal:
                    handler->string_value("exakatal");
                    break;
                case Tag_zettakatal:
                    handler->string_value("zettakatal");
                    break;
                case Tag_yottakatal:
                    handler->string_value("yottakatal");
                    break;
                case Tag_hectare:
                    handler->string_value("hectare");
                    break;
                case Tag_liter:
                    handler->string_value("liter");
                    break;
                case Tag_yoctoliter:
                    handler->string_value("yoctoliter");
                    break;
                case Tag_zeptoliter:
                    handler->string_value("zeptoliter");
                    break;
                case Tag_attoliter:
                    handler->string_value("attoliter");
                    break;
                case Tag_femtoliter:
                    handler->string_value("femtoliter");
                    break;
                case Tag_picoliter:
                    handler->string_value("picoliter");
                    break;
                case Tag_nanoliter:
                    handler->string_value("nanoliter");
                    break;
                case Tag_microliter:
                    handler->string_value("microliter");
                    break;
                case Tag_milliliter:
                    handler->string_value("milliliter");
                    break;
                case Tag_centiliter:
                    handler->string_value("centiliter");
                    break;
                case Tag_deciliter:
                    handler->string_value("deciliter");
                    break;
                case Tag_decaliter:
                    handler->string_value("decaliter");
                    break;
                case Tag_hectoliter:
                    handler->string_value("hectoliter");
                    break;
                case Tag_kiloliter:
                    handler->string_value("kiloliter");
                    break;
                case Tag_megaliter:
                    handler->string_value("megaliter");
                    break;
                case Tag_gigaliter:
                    handler->string_value("gigaliter");
                    break;
                case Tag_teraliter:
                    handler->string_value("teraliter");
                    break;
                case Tag_petaliter:
                    handler->string_value("petaliter");
                    break;
                case Tag_exaliter:
                    handler->string_value("exaliter");
                    break;
                case Tag_zettaliter:
                    handler->string_value("zettaliter");
                    break;
                case Tag_yottaliter:
                    handler->string_value("yottaliter");
                    break;
                case Tag_tonne:
                    handler->string_value("tonne");
                    break;
                case Tag_yoctotonne:
                    handler->string_value("yoctotonne");
                    break;
                case Tag_zeptotonne:
                    handler->string_value("zeptotonne");
                    break;
                case Tag_attotonne:
                    handler->string_value("attotonne");
                    break;
                case Tag_femtotonne:
                    handler->string_value("femtotonne");
                    break;
                case Tag_picotonne:
                    handler->string_value("picotonne");
                    break;
                case Tag_nanotonne:
                    handler->string_value("nanotonne");
                    break;
                case Tag_microtonne:
                    handler->string_value("microtonne");
                    break;
                case Tag_millitonne:
                    handler->string_value("millitonne");
                    break;
                case Tag_centitonne:
                    handler->string_value("centitonne");
                    break;
                case Tag_decitonne:
                    handler->string_value("decitonne");
                    break;
                case Tag_decatonne:
                    handler->string_value("decatonne");
                    break;
                case Tag_hectotonne:
                    handler->string_value("hectotonne");
                    break;
                case Tag_kilotonne:
                    handler->string_value("kilotonne");
                    break;
                case Tag_megatonne:
                    handler->string_value("megatonne");
                    break;
                case Tag_gigatonne:
                    handler->string_value("gigatonne");
                    break;
                case Tag_teratonne:
                    handler->string_value("teratonne");
                    break;
                case Tag_petatonne:
                    handler->string_value("petatonne");
                    break;
                case Tag_exatonne:
                    handler->string_value("exatonne");
                    break;
                case Tag_zettatonne:
                    handler->string_value("zettatonne");
                    break;
                case Tag_yottatonne:
                    handler->string_value("yottatonne");
                    break;
                case Tag_astronomical_unit:
                    handler->string_value("astronomical_unit");
                    break;
                case Tag_angstrom:
                    handler->string_value("angstrom");
                    break;
                case Tag_minute:
                    handler->string_value("minute");
                    break;
                case Tag_hour:
                    handler->string_value("hour");
                    break;
                case Tag_day:
                    handler->string_value("day");
                    break;
                case Tag_week:
                    handler->string_value("week");
                    break;
                case Tag_fortnight:
                    handler->string_value("fortnight");
                    break;
                case Tag_month:
                    handler->string_value("month");
                    break;
                case Tag_year:
                    handler->string_value("year");
                    break;
                case Tag_biennium:
                    handler->string_value("biennium");
                    break;
                case Tag_triennium:
                    handler->string_value("triennium");
                    break;
                case Tag_quadrennium:
                    handler->string_value("quadrennium");
                    break;
                case Tag_lustrum:
                    handler->string_value("lustrum");
                    break;
                case Tag_decade:
                    handler->string_value("decade");
                    break;
                case Tag_century:
                    handler->string_value("century");
                    break;
                case Tag_millennium:
                    handler->string_value("millennium");
                    break;
                case Tag_sidereal_day:
                    handler->string_value("sidereal_day");
                    break;
                case Tag_sidereal_year:
                    handler->string_value("sidereal_year");
                    break;
                case Tag_helek:
                    handler->string_value("helek");
                    break;
                case Tag_Planck_time:
                    handler->string_value("Planck_time");
                    break;
                case Tag_shake:
                    handler->string_value("shake");
                    break;
                case Tag_svedberg:
                    handler->string_value("svedberg");
                    break;
                case Tag_parsec:
                    handler->string_value("parsec");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeTag.string_value);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTag()))
          {
            return "When parsing the object for %what%, the \"Tag\" field was missing.";
          }
        return NULL;
      }

    static CoreUnitsUnitJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CoreUnitsUnitJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CoreUnitsUnitJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CoreUnitsUnitJSON>, CoreUnitsUnitJSON *, bool> generator("Type CoreUnitsUnit", ignore_extras);
            parse_json_value(text, "Text for CoreUnitsUnitJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CoreUnitsUnitJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CoreUnitsUnitJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CoreUnitsUnitJSON>, CoreUnitsUnitJSON *, bool> generator("Type CoreUnitsUnit", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UnitJSON::Generator
      {
      private:
    class FieldGeneratorTag : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTag(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTag(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTagKnownValues known = stringToTag(result);
                TypeTag new_value;
                if (known == Tag__none)
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
            virtual void handle_result(TypeTag result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTag, TypeTag, TypeTag > fieldGeneratorTag;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getUnitJSONKey().c_str(), "Core") == 0))
                throw("The key field has a value other than `Core'.");
            CoreUnitsUnitJSON *result = new CoreUnitsUnitJSON();
            assert(result != NULL);
            RCHandle<CoreUnitsUnitJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCoreUnitsUnitAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UnitJSON *new_result)
          {
            handle_result((CoreUnitsUnitJSON *)new_result);
          }
        void finish(CoreUnitsUnitJSON *result)
          {
            if (fieldGeneratorTag.have_value)
              {
                result->setTag(fieldGeneratorTag.value);
                fieldGeneratorTag.have_value = false;
              }
            else if (!(result->hasTag()))
              {
                error("When parsing the object for %what%, the \"Tag\" field was missing.");
              }
            UnitJSON::Generator::finish(result);
          }
        virtual void handle_result(CoreUnitsUnitJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Tag") == 0)
                return &fieldGeneratorTag;
            return UnitJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UnitJSON::Generator(ignore_extras), fieldGeneratorTag("field \"Tag\" of the CoreUnitsUnit class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CoreUnitsUnit class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTag.reset();
            UnitJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COREUNITSUNITJSON_H */
