/* file "UnitOfMeasureJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNITOFMEASUREJSON_H
#define UNITOFMEASUREJSON_H

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


class UnitOfMeasureJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_Unknown,
        Value_Fathom,
        Value_League,
        Value_LightYear,
        Value_AstronomicalUnit,
        Value_Parsec,
        Value_Angstrom,
        Value_Rope,
        Value_Perch,
        Value_Cubit,
        Value_Pole,
        Value_Ell,
        Value_Furlong,
        Value_Chain,
        Value_Rod,
        Value_Inch,
        Value_Foot,
        Value_Yard,
        Value_Mile,
        Value_NauticalMile,
        Value_Yoctometer,
        Value_Zeptometer,
        Value_Attometer,
        Value_Femtometer,
        Value_Picometer,
        Value_Nanometer,
        Value_Micrometer,
        Value_Millimeter,
        Value_Centimeter,
        Value_Decimeter,
        Value_Meter,
        Value_Decameter,
        Value_Hectometer,
        Value_Kilometer,
        Value_Megameter,
        Value_Gigameter,
        Value_Terameter,
        Value_Petameter,
        Value_Exameter,
        Value_Zettameter,
        Value_Yottameter,
        Value_Marathon,
        Value_HalfMarathon,
        Value_TenKRun,
        Value_FiveKRun,
        Value_OlympicPoolLap,
        Value_DegreeFahrenheit,
        Value_DegreeCelsius,
        Value_Kelvin,
        Value_Pascal,
        Value_Kilopascal,
        Value_Hectopascal,
        Value_Bar,
        Value_Millibar,
        Value_PoundPerSquareInch,
        Value_InchOfMercury,
        Value_Atmosphere,
        Value_Torr,
        Value_Bit,
        Value_Byte,
        Value_Kilobit,
        Value_Kilobyte,
        Value_Megabit,
        Value_Megabyte,
        Value_Gigabit,
        Value_Gigabyte,
        Value_Terabit,
        Value_Terabyte,
        Value_Petabit,
        Value_Petabyte,
        Value_Nanosecond,
        Value_Millisecond,
        Value_Microsecond,
        Value_Second,
        Value_Minute,
        Value_Hour,
        Value_Day,
        Value_Week,
        Value_Fortnight,
        Value_Month,
        Value_Year,
        Value_Decade,
        Value_Century,
        Value_Millenium,
        Value_SquareInch,
        Value_SquareFoot,
        Value_SquareYard,
        Value_SquareMile,
        Value_SquareMillimeter,
        Value_SquareCentimeter,
        Value_SquareMeter,
        Value_SquareKilometer,
        Value_Hectare,
        Value_Acre,
        Value_Yoctogram,
        Value_Zeptogram,
        Value_Attogram,
        Value_Femtogram,
        Value_Picogram,
        Value_Nanogram,
        Value_Microgram,
        Value_Milligram,
        Value_Centigram,
        Value_Decigram,
        Value_Gram,
        Value_Decagram,
        Value_Hectogram,
        Value_Kilogram,
        Value_Megagram,
        Value_Gigagram,
        Value_Teragram,
        Value_Petagram,
        Value_Exagram,
        Value_Zettagram,
        Value_Yottagram,
        Value_MetricTon,
        Value_OunceWeight,
        Value_Pound,
        Value_Grain,
        Value_Carat,
        Value_TroyPound,
        Value_TroyOunce,
        Value_PennyWeight,
        Value_Quarter,
        Value_Stone,
        Value_Ton,
        Value_LongTon,
        Value_CubicInch,
        Value_CubicFoot,
        Value_CubicMeter,
        Value_USTeaspoon,
        Value_UKTeaspoon,
        Value_USTablespoon,
        Value_UKTablespoon,
        Value_USOunceVolume,
        Value_UKOunceVolume,
        Value_Cup,
        Value_Shot,
        Value_USPint,
        Value_USLiquidQuart,
        Value_USDryQuart,
        Value_USGallon,
        Value_UKPint,
        Value_UKQuart,
        Value_UKGallon,
        Value_Milliliter,
        Value_CubicCentimeter,
        Value_Liter,
        Value_Yoctoliter,
        Value_Zeptoliter,
        Value_Attoliter,
        Value_Femtoliter,
        Value_Picoliter,
        Value_Nanoliter,
        Value_Microliter,
        Value_Centiliter,
        Value_Deciliter,
        Value_Decaliter,
        Value_Hectoliter,
        Value_Kiloliter,
        Value_Megaliter,
        Value_Gigaliter,
        Value_Teraliter,
        Value_Petaliter,
        Value_Exaliter,
        Value_Zettaliter,
        Value_Yottaliter,
        Value_USBushel,
        Value_UKBushel,
        Value_USPeck,
        Value_UKPeck,
        Value_USHogshead,
        Value_USBarrel,
        Value_USTierce,
        Value_Newton,
        Value_Kilonewton,
        Value_Dyne,
        Value_Poundal,
        Value_Pond,
        Value_Kilopond,
        Value_OunceForce,
        Value_PoundForce,
        Value_Joule,
        Value_Kilojoule,
        Value_Calorie,
        Value_Kilocalorie,
        Value_KilowattHour,
        Value_Btu,
        Value_Watt,
        Value_Kilowatt,
        Value_Horsepower,
        Value_MetricHorsepower,
        Value_FootPoundPerMinute,
        Value_ErgPerSecond,
        Value_CaloriesPerSecond,
        Value_MeterPerSecondSquared,
        Value_InchPerSecondSquared,
        Value_FootPerSecondSquared,
        Value_Galileo,
        Value_G,
        Value_KilometerPerHour,
        Value_MilePerHour,
        Value_FootPerSecond,
        Value_MeterPerSecond,
        Value_Knot,
        Value_Mach,
        Value_Yoctohertz,
        Value_Zeptohertz,
        Value_Attohertz,
        Value_Femtohertz,
        Value_Picohertz,
        Value_Nanohertz,
        Value_Microhertz,
        Value_Millihertz,
        Value_Centihertz,
        Value_Decihertz,
        Value_Hertz,
        Value_Decahertz,
        Value_Hectohertz,
        Value_Kilohertz,
        Value_Megahertz,
        Value_Gigahertz,
        Value_Terahertz,
        Value_Petahertz,
        Value_Exahertz,
        Value_Zettahertz,
        Value_Yottahertz,
        Value_Radian,
        Value_Degree,
        Value_Turn,
        Value_Quadrant,
        Value_Sextant,
        Value_MinuteOfArc,
        Value_SecondOfArc,
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

    UnitOfMeasureJSON(const UnitOfMeasureJSON &);
    UnitOfMeasureJSON & operator=(const UnitOfMeasureJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    UnitOfMeasureJSON(void);
    UnitOfMeasureJSON(TypeValue init_value);
    UnitOfMeasureJSON(const char *init_value);
    UnitOfMeasureJSON(std::string init_value);
    UnitOfMeasureJSON(TypeValueKnownValues init_value);
    virtual ~UnitOfMeasureJSON(void);
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
                case Value_Fathom:
                    handler->string_value("Fathom");
                    break;
                case Value_League:
                    handler->string_value("League");
                    break;
                case Value_LightYear:
                    handler->string_value("LightYear");
                    break;
                case Value_AstronomicalUnit:
                    handler->string_value("AstronomicalUnit");
                    break;
                case Value_Parsec:
                    handler->string_value("Parsec");
                    break;
                case Value_Angstrom:
                    handler->string_value("Angstrom");
                    break;
                case Value_Rope:
                    handler->string_value("Rope");
                    break;
                case Value_Perch:
                    handler->string_value("Perch");
                    break;
                case Value_Cubit:
                    handler->string_value("Cubit");
                    break;
                case Value_Pole:
                    handler->string_value("Pole");
                    break;
                case Value_Ell:
                    handler->string_value("Ell");
                    break;
                case Value_Furlong:
                    handler->string_value("Furlong");
                    break;
                case Value_Chain:
                    handler->string_value("Chain");
                    break;
                case Value_Rod:
                    handler->string_value("Rod");
                    break;
                case Value_Inch:
                    handler->string_value("Inch");
                    break;
                case Value_Foot:
                    handler->string_value("Foot");
                    break;
                case Value_Yard:
                    handler->string_value("Yard");
                    break;
                case Value_Mile:
                    handler->string_value("Mile");
                    break;
                case Value_NauticalMile:
                    handler->string_value("NauticalMile");
                    break;
                case Value_Yoctometer:
                    handler->string_value("Yoctometer");
                    break;
                case Value_Zeptometer:
                    handler->string_value("Zeptometer");
                    break;
                case Value_Attometer:
                    handler->string_value("Attometer");
                    break;
                case Value_Femtometer:
                    handler->string_value("Femtometer");
                    break;
                case Value_Picometer:
                    handler->string_value("Picometer");
                    break;
                case Value_Nanometer:
                    handler->string_value("Nanometer");
                    break;
                case Value_Micrometer:
                    handler->string_value("Micrometer");
                    break;
                case Value_Millimeter:
                    handler->string_value("Millimeter");
                    break;
                case Value_Centimeter:
                    handler->string_value("Centimeter");
                    break;
                case Value_Decimeter:
                    handler->string_value("Decimeter");
                    break;
                case Value_Meter:
                    handler->string_value("Meter");
                    break;
                case Value_Decameter:
                    handler->string_value("Decameter");
                    break;
                case Value_Hectometer:
                    handler->string_value("Hectometer");
                    break;
                case Value_Kilometer:
                    handler->string_value("Kilometer");
                    break;
                case Value_Megameter:
                    handler->string_value("Megameter");
                    break;
                case Value_Gigameter:
                    handler->string_value("Gigameter");
                    break;
                case Value_Terameter:
                    handler->string_value("Terameter");
                    break;
                case Value_Petameter:
                    handler->string_value("Petameter");
                    break;
                case Value_Exameter:
                    handler->string_value("Exameter");
                    break;
                case Value_Zettameter:
                    handler->string_value("Zettameter");
                    break;
                case Value_Yottameter:
                    handler->string_value("Yottameter");
                    break;
                case Value_Marathon:
                    handler->string_value("Marathon");
                    break;
                case Value_HalfMarathon:
                    handler->string_value("HalfMarathon");
                    break;
                case Value_TenKRun:
                    handler->string_value("TenKRun");
                    break;
                case Value_FiveKRun:
                    handler->string_value("FiveKRun");
                    break;
                case Value_OlympicPoolLap:
                    handler->string_value("OlympicPoolLap");
                    break;
                case Value_DegreeFahrenheit:
                    handler->string_value("DegreeFahrenheit");
                    break;
                case Value_DegreeCelsius:
                    handler->string_value("DegreeCelsius");
                    break;
                case Value_Kelvin:
                    handler->string_value("Kelvin");
                    break;
                case Value_Pascal:
                    handler->string_value("Pascal");
                    break;
                case Value_Kilopascal:
                    handler->string_value("Kilopascal");
                    break;
                case Value_Hectopascal:
                    handler->string_value("Hectopascal");
                    break;
                case Value_Bar:
                    handler->string_value("Bar");
                    break;
                case Value_Millibar:
                    handler->string_value("Millibar");
                    break;
                case Value_PoundPerSquareInch:
                    handler->string_value("PoundPerSquareInch");
                    break;
                case Value_InchOfMercury:
                    handler->string_value("InchOfMercury");
                    break;
                case Value_Atmosphere:
                    handler->string_value("Atmosphere");
                    break;
                case Value_Torr:
                    handler->string_value("Torr");
                    break;
                case Value_Bit:
                    handler->string_value("Bit");
                    break;
                case Value_Byte:
                    handler->string_value("Byte");
                    break;
                case Value_Kilobit:
                    handler->string_value("Kilobit");
                    break;
                case Value_Kilobyte:
                    handler->string_value("Kilobyte");
                    break;
                case Value_Megabit:
                    handler->string_value("Megabit");
                    break;
                case Value_Megabyte:
                    handler->string_value("Megabyte");
                    break;
                case Value_Gigabit:
                    handler->string_value("Gigabit");
                    break;
                case Value_Gigabyte:
                    handler->string_value("Gigabyte");
                    break;
                case Value_Terabit:
                    handler->string_value("Terabit");
                    break;
                case Value_Terabyte:
                    handler->string_value("Terabyte");
                    break;
                case Value_Petabit:
                    handler->string_value("Petabit");
                    break;
                case Value_Petabyte:
                    handler->string_value("Petabyte");
                    break;
                case Value_Nanosecond:
                    handler->string_value("Nanosecond");
                    break;
                case Value_Millisecond:
                    handler->string_value("Millisecond");
                    break;
                case Value_Microsecond:
                    handler->string_value("Microsecond");
                    break;
                case Value_Second:
                    handler->string_value("Second");
                    break;
                case Value_Minute:
                    handler->string_value("Minute");
                    break;
                case Value_Hour:
                    handler->string_value("Hour");
                    break;
                case Value_Day:
                    handler->string_value("Day");
                    break;
                case Value_Week:
                    handler->string_value("Week");
                    break;
                case Value_Fortnight:
                    handler->string_value("Fortnight");
                    break;
                case Value_Month:
                    handler->string_value("Month");
                    break;
                case Value_Year:
                    handler->string_value("Year");
                    break;
                case Value_Decade:
                    handler->string_value("Decade");
                    break;
                case Value_Century:
                    handler->string_value("Century");
                    break;
                case Value_Millenium:
                    handler->string_value("Millenium");
                    break;
                case Value_SquareInch:
                    handler->string_value("SquareInch");
                    break;
                case Value_SquareFoot:
                    handler->string_value("SquareFoot");
                    break;
                case Value_SquareYard:
                    handler->string_value("SquareYard");
                    break;
                case Value_SquareMile:
                    handler->string_value("SquareMile");
                    break;
                case Value_SquareMillimeter:
                    handler->string_value("SquareMillimeter");
                    break;
                case Value_SquareCentimeter:
                    handler->string_value("SquareCentimeter");
                    break;
                case Value_SquareMeter:
                    handler->string_value("SquareMeter");
                    break;
                case Value_SquareKilometer:
                    handler->string_value("SquareKilometer");
                    break;
                case Value_Hectare:
                    handler->string_value("Hectare");
                    break;
                case Value_Acre:
                    handler->string_value("Acre");
                    break;
                case Value_Yoctogram:
                    handler->string_value("Yoctogram");
                    break;
                case Value_Zeptogram:
                    handler->string_value("Zeptogram");
                    break;
                case Value_Attogram:
                    handler->string_value("Attogram");
                    break;
                case Value_Femtogram:
                    handler->string_value("Femtogram");
                    break;
                case Value_Picogram:
                    handler->string_value("Picogram");
                    break;
                case Value_Nanogram:
                    handler->string_value("Nanogram");
                    break;
                case Value_Microgram:
                    handler->string_value("Microgram");
                    break;
                case Value_Milligram:
                    handler->string_value("Milligram");
                    break;
                case Value_Centigram:
                    handler->string_value("Centigram");
                    break;
                case Value_Decigram:
                    handler->string_value("Decigram");
                    break;
                case Value_Gram:
                    handler->string_value("Gram");
                    break;
                case Value_Decagram:
                    handler->string_value("Decagram");
                    break;
                case Value_Hectogram:
                    handler->string_value("Hectogram");
                    break;
                case Value_Kilogram:
                    handler->string_value("Kilogram");
                    break;
                case Value_Megagram:
                    handler->string_value("Megagram");
                    break;
                case Value_Gigagram:
                    handler->string_value("Gigagram");
                    break;
                case Value_Teragram:
                    handler->string_value("Teragram");
                    break;
                case Value_Petagram:
                    handler->string_value("Petagram");
                    break;
                case Value_Exagram:
                    handler->string_value("Exagram");
                    break;
                case Value_Zettagram:
                    handler->string_value("Zettagram");
                    break;
                case Value_Yottagram:
                    handler->string_value("Yottagram");
                    break;
                case Value_MetricTon:
                    handler->string_value("MetricTon");
                    break;
                case Value_OunceWeight:
                    handler->string_value("OunceWeight");
                    break;
                case Value_Pound:
                    handler->string_value("Pound");
                    break;
                case Value_Grain:
                    handler->string_value("Grain");
                    break;
                case Value_Carat:
                    handler->string_value("Carat");
                    break;
                case Value_TroyPound:
                    handler->string_value("TroyPound");
                    break;
                case Value_TroyOunce:
                    handler->string_value("TroyOunce");
                    break;
                case Value_PennyWeight:
                    handler->string_value("PennyWeight");
                    break;
                case Value_Quarter:
                    handler->string_value("Quarter");
                    break;
                case Value_Stone:
                    handler->string_value("Stone");
                    break;
                case Value_Ton:
                    handler->string_value("Ton");
                    break;
                case Value_LongTon:
                    handler->string_value("LongTon");
                    break;
                case Value_CubicInch:
                    handler->string_value("CubicInch");
                    break;
                case Value_CubicFoot:
                    handler->string_value("CubicFoot");
                    break;
                case Value_CubicMeter:
                    handler->string_value("CubicMeter");
                    break;
                case Value_USTeaspoon:
                    handler->string_value("USTeaspoon");
                    break;
                case Value_UKTeaspoon:
                    handler->string_value("UKTeaspoon");
                    break;
                case Value_USTablespoon:
                    handler->string_value("USTablespoon");
                    break;
                case Value_UKTablespoon:
                    handler->string_value("UKTablespoon");
                    break;
                case Value_USOunceVolume:
                    handler->string_value("USOunceVolume");
                    break;
                case Value_UKOunceVolume:
                    handler->string_value("UKOunceVolume");
                    break;
                case Value_Cup:
                    handler->string_value("Cup");
                    break;
                case Value_Shot:
                    handler->string_value("Shot");
                    break;
                case Value_USPint:
                    handler->string_value("USPint");
                    break;
                case Value_USLiquidQuart:
                    handler->string_value("USLiquidQuart");
                    break;
                case Value_USDryQuart:
                    handler->string_value("USDryQuart");
                    break;
                case Value_USGallon:
                    handler->string_value("USGallon");
                    break;
                case Value_UKPint:
                    handler->string_value("UKPint");
                    break;
                case Value_UKQuart:
                    handler->string_value("UKQuart");
                    break;
                case Value_UKGallon:
                    handler->string_value("UKGallon");
                    break;
                case Value_Milliliter:
                    handler->string_value("Milliliter");
                    break;
                case Value_CubicCentimeter:
                    handler->string_value("CubicCentimeter");
                    break;
                case Value_Liter:
                    handler->string_value("Liter");
                    break;
                case Value_Yoctoliter:
                    handler->string_value("Yoctoliter");
                    break;
                case Value_Zeptoliter:
                    handler->string_value("Zeptoliter");
                    break;
                case Value_Attoliter:
                    handler->string_value("Attoliter");
                    break;
                case Value_Femtoliter:
                    handler->string_value("Femtoliter");
                    break;
                case Value_Picoliter:
                    handler->string_value("Picoliter");
                    break;
                case Value_Nanoliter:
                    handler->string_value("Nanoliter");
                    break;
                case Value_Microliter:
                    handler->string_value("Microliter");
                    break;
                case Value_Centiliter:
                    handler->string_value("Centiliter");
                    break;
                case Value_Deciliter:
                    handler->string_value("Deciliter");
                    break;
                case Value_Decaliter:
                    handler->string_value("Decaliter");
                    break;
                case Value_Hectoliter:
                    handler->string_value("Hectoliter");
                    break;
                case Value_Kiloliter:
                    handler->string_value("Kiloliter");
                    break;
                case Value_Megaliter:
                    handler->string_value("Megaliter");
                    break;
                case Value_Gigaliter:
                    handler->string_value("Gigaliter");
                    break;
                case Value_Teraliter:
                    handler->string_value("Teraliter");
                    break;
                case Value_Petaliter:
                    handler->string_value("Petaliter");
                    break;
                case Value_Exaliter:
                    handler->string_value("Exaliter");
                    break;
                case Value_Zettaliter:
                    handler->string_value("Zettaliter");
                    break;
                case Value_Yottaliter:
                    handler->string_value("Yottaliter");
                    break;
                case Value_USBushel:
                    handler->string_value("USBushel");
                    break;
                case Value_UKBushel:
                    handler->string_value("UKBushel");
                    break;
                case Value_USPeck:
                    handler->string_value("USPeck");
                    break;
                case Value_UKPeck:
                    handler->string_value("UKPeck");
                    break;
                case Value_USHogshead:
                    handler->string_value("USHogshead");
                    break;
                case Value_USBarrel:
                    handler->string_value("USBarrel");
                    break;
                case Value_USTierce:
                    handler->string_value("USTierce");
                    break;
                case Value_Newton:
                    handler->string_value("Newton");
                    break;
                case Value_Kilonewton:
                    handler->string_value("Kilonewton");
                    break;
                case Value_Dyne:
                    handler->string_value("Dyne");
                    break;
                case Value_Poundal:
                    handler->string_value("Poundal");
                    break;
                case Value_Pond:
                    handler->string_value("Pond");
                    break;
                case Value_Kilopond:
                    handler->string_value("Kilopond");
                    break;
                case Value_OunceForce:
                    handler->string_value("OunceForce");
                    break;
                case Value_PoundForce:
                    handler->string_value("PoundForce");
                    break;
                case Value_Joule:
                    handler->string_value("Joule");
                    break;
                case Value_Kilojoule:
                    handler->string_value("Kilojoule");
                    break;
                case Value_Calorie:
                    handler->string_value("Calorie");
                    break;
                case Value_Kilocalorie:
                    handler->string_value("Kilocalorie");
                    break;
                case Value_KilowattHour:
                    handler->string_value("KilowattHour");
                    break;
                case Value_Btu:
                    handler->string_value("Btu");
                    break;
                case Value_Watt:
                    handler->string_value("Watt");
                    break;
                case Value_Kilowatt:
                    handler->string_value("Kilowatt");
                    break;
                case Value_Horsepower:
                    handler->string_value("Horsepower");
                    break;
                case Value_MetricHorsepower:
                    handler->string_value("MetricHorsepower");
                    break;
                case Value_FootPoundPerMinute:
                    handler->string_value("FootPoundPerMinute");
                    break;
                case Value_ErgPerSecond:
                    handler->string_value("ErgPerSecond");
                    break;
                case Value_CaloriesPerSecond:
                    handler->string_value("CaloriesPerSecond");
                    break;
                case Value_MeterPerSecondSquared:
                    handler->string_value("MeterPerSecondSquared");
                    break;
                case Value_InchPerSecondSquared:
                    handler->string_value("InchPerSecondSquared");
                    break;
                case Value_FootPerSecondSquared:
                    handler->string_value("FootPerSecondSquared");
                    break;
                case Value_Galileo:
                    handler->string_value("Galileo");
                    break;
                case Value_G:
                    handler->string_value("G");
                    break;
                case Value_KilometerPerHour:
                    handler->string_value("KilometerPerHour");
                    break;
                case Value_MilePerHour:
                    handler->string_value("MilePerHour");
                    break;
                case Value_FootPerSecond:
                    handler->string_value("FootPerSecond");
                    break;
                case Value_MeterPerSecond:
                    handler->string_value("MeterPerSecond");
                    break;
                case Value_Knot:
                    handler->string_value("Knot");
                    break;
                case Value_Mach:
                    handler->string_value("Mach");
                    break;
                case Value_Yoctohertz:
                    handler->string_value("Yoctohertz");
                    break;
                case Value_Zeptohertz:
                    handler->string_value("Zeptohertz");
                    break;
                case Value_Attohertz:
                    handler->string_value("Attohertz");
                    break;
                case Value_Femtohertz:
                    handler->string_value("Femtohertz");
                    break;
                case Value_Picohertz:
                    handler->string_value("Picohertz");
                    break;
                case Value_Nanohertz:
                    handler->string_value("Nanohertz");
                    break;
                case Value_Microhertz:
                    handler->string_value("Microhertz");
                    break;
                case Value_Millihertz:
                    handler->string_value("Millihertz");
                    break;
                case Value_Centihertz:
                    handler->string_value("Centihertz");
                    break;
                case Value_Decihertz:
                    handler->string_value("Decihertz");
                    break;
                case Value_Hertz:
                    handler->string_value("Hertz");
                    break;
                case Value_Decahertz:
                    handler->string_value("Decahertz");
                    break;
                case Value_Hectohertz:
                    handler->string_value("Hectohertz");
                    break;
                case Value_Kilohertz:
                    handler->string_value("Kilohertz");
                    break;
                case Value_Megahertz:
                    handler->string_value("Megahertz");
                    break;
                case Value_Gigahertz:
                    handler->string_value("Gigahertz");
                    break;
                case Value_Terahertz:
                    handler->string_value("Terahertz");
                    break;
                case Value_Petahertz:
                    handler->string_value("Petahertz");
                    break;
                case Value_Exahertz:
                    handler->string_value("Exahertz");
                    break;
                case Value_Zettahertz:
                    handler->string_value("Zettahertz");
                    break;
                case Value_Yottahertz:
                    handler->string_value("Yottahertz");
                    break;
                case Value_Radian:
                    handler->string_value("Radian");
                    break;
                case Value_Degree:
                    handler->string_value("Degree");
                    break;
                case Value_Turn:
                    handler->string_value("Turn");
                    break;
                case Value_Quadrant:
                    handler->string_value("Quadrant");
                    break;
                case Value_Sextant:
                    handler->string_value("Sextant");
                    break;
                case Value_MinuteOfArc:
                    handler->string_value("MinuteOfArc");
                    break;
                case Value_SecondOfArc:
                    handler->string_value("SecondOfArc");
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

    static UnitOfMeasureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UnitOfMeasureJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UnitOfMeasureJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitOfMeasureJSON>, UnitOfMeasureJSON *, bool> generator("Type UnitOfMeasure", ignore_extras);
            parse_json_value(text, "Text for UnitOfMeasureJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UnitOfMeasureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UnitOfMeasureJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitOfMeasureJSON>, UnitOfMeasureJSON *, bool> generator("Type UnitOfMeasure", ignore_extras);
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
            UnitOfMeasureJSON *result = new UnitOfMeasureJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(UnitOfMeasureJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* UNITOFMEASUREJSON_H */
