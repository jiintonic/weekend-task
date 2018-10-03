/* file "SportsOlympicsEventJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTJSON_H
#define SPORTSOLYMPICSEVENTJSON_H

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


class SportsOlympicsEventJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_AlpineSkiingMensDownhill,
        Value_AlpineSkiingMensSuperG,
        Value_AlpineSkiingMensGiantSlalom,
        Value_AlpineSkiingMensSlalom,
        Value_AlpineSkiingMensCombined,
        Value_AlpineSkiingWomensDownhill,
        Value_AlpineSkiingWomensSuperG,
        Value_AlpineSkiingWomensGiantSlalom,
        Value_AlpineSkiingWomensSlalom,
        Value_AlpineSkiingWomensCombined,
        Value_AlpineSkiingMixedTeam,
        Value_BiathlonMensIndividual,
        Value_BiathlonMensSprint,
        Value_BiathlonMensPursuit,
        Value_BiathlonMensMassStart,
        Value_BiathlonMensRelay,
        Value_BiathlonMensMilitaryPatrol,
        Value_BiathlonWomensIndividual,
        Value_BiathlonWomensSprint,
        Value_BiathlonWomensPursuit,
        Value_BiathlonWomensMassStart,
        Value_BiathlonWomensRelay,
        Value_BiathlonMixedRelay,
        Value_BobsleighMensTwo,
        Value_BobsleighMensFour,
        Value_BobsleighWomensTwo,
        Value_CrossCountrySkiingMens10KMClassical,
        Value_CrossCountrySkiingMens15KMClassical,
        Value_CrossCountrySkiingMens18KM,
        Value_CrossCountrySkiingMens30KMSkiathlon,
        Value_CrossCountrySkiingMens50KMFreestyle,
        Value_CrossCountrySkiingMens4X10KMRelay,
        Value_CrossCountrySkiingMens2X10KMPursuit,
        Value_CrossCountrySkiingMensSprint,
        Value_CrossCountrySkiingMensTeamSprint,
        Value_CrossCountrySkiingWomens5KM,
        Value_CrossCountrySkiingWomens10KMClassical,
        Value_CrossCountrySkiingWomens15KMSkiathlon,
        Value_CrossCountrySkiingWomens20KM,
        Value_CrossCountrySkiingWomens30KMFreestyle,
        Value_CrossCountrySkiingWomens4X5KMRelay,
        Value_CrossCountrySkiingWomens2X5KMPursuit,
        Value_CrossCountrySkiingWomensSprint,
        Value_CrossCountrySkiingWomensTeamSprint,
        Value_CurlingMens,
        Value_CurlingWomens,
        Value_CurlingMixedDoubles,
        Value_FigureSkatingMensSingles,
        Value_FigureSkatingWomensSingles,
        Value_FigureSkatingPair,
        Value_FigureSkatingIceDancing,
        Value_FigureSkatingTeamTrophy,
        Value_FreestyleSkiingMensAerials,
        Value_FreestyleSkiingMensHalfpipe,
        Value_FreestyleSkiingMensMoguls,
        Value_FreestyleSkiingMensSlopestyle,
        Value_FreestyleSkiingMensSkiCross,
        Value_FreestyleSkiingWomensAerials,
        Value_FreestyleSkiingWomensHalfpipe,
        Value_FreestyleSkiingWomensMoguls,
        Value_FreestyleSkiingWomensSlopestyle,
        Value_FreestyleSkiingWomensSkiCross,
        Value_IceHockeyMens,
        Value_IceHockeyWomens,
        Value_LugeMensSingles,
        Value_LugeWomensSingles,
        Value_LugeDoubles,
        Value_LugeTeamRelay,
        Value_NordicCombinedIndividualLargeHill10KM,
        Value_NordicCombinedIndividualNormalHill10KM,
        Value_NordicCombinedTeamLargeHill4X5KM,
        Value_ShortTrackSpeedSkatingMens500M,
        Value_ShortTrackSpeedSkatingMens1000M,
        Value_ShortTrackSpeedSkatingMens1500M,
        Value_ShortTrackSpeedSkatingMens5000MRelay,
        Value_ShortTrackSpeedSkatingWomens500M,
        Value_ShortTrackSpeedSkatingWomens1000M,
        Value_ShortTrackSpeedSkatingWomens1500M,
        Value_ShortTrackSpeedSkatingWomens3000MRelay,
        Value_SkeletonMens,
        Value_SkeletonWomens,
        Value_SkiJumpingMensIndividualNormalHill,
        Value_SkiJumpingMensIndividualLargeHill,
        Value_SkiJumpingMensTeamLargeHill,
        Value_SkiJumpingWomensIndividualNormalHill,
        Value_SnowboardingMensParallelSlalom,
        Value_SnowboardingMensParallelGiantSlalom,
        Value_SnowboardingMensHalfpipe,
        Value_SnowboardingMensSlopestyle,
        Value_SnowboardingMensSnowboardCross,
        Value_SnowboardingMensBigAir,
        Value_SnowboardingWomensParallelSlalom,
        Value_SnowboardingWomensParallelGiantSlalom,
        Value_SnowboardingWomensHalfpipe,
        Value_SnowboardingWomensSlopestyle,
        Value_SnowboardingWomensSnowboardCross,
        Value_SnowboardingWomensBigAir,
        Value_SpeedSkatingMens500M,
        Value_SpeedSkatingMens1000M,
        Value_SpeedSkatingMens1500M,
        Value_SpeedSkatingMens5000M,
        Value_SpeedSkatingMens10000M,
        Value_SpeedSkatingMensTeamPursuit,
        Value_SpeedSkatingMensMassStart,
        Value_SpeedSkatingMensAllRound,
        Value_SpeedSkatingWomens500M,
        Value_SpeedSkatingWomens1000M,
        Value_SpeedSkatingWomens1500M,
        Value_SpeedSkatingWomens3000M,
        Value_SpeedSkatingWomens5000M,
        Value_SpeedSkatingWomensTeamPursuit,
        Value_SpeedSkatingWomensMassStart,
        Value_ArcheryMensIndividual,
        Value_ArcheryMensTeam,
        Value_ArcheryWomensIndividual,
        Value_ArcheryWomensTeam,
        Value_AthleticsMens100M,
        Value_AthleticsMens200M,
        Value_AthleticsMens400M,
        Value_AthleticsMens800M,
        Value_AthleticsMens1500M,
        Value_AthleticsMens5000M,
        Value_AthleticsMens10000M,
        Value_AthleticsMensHurdles110M,
        Value_AthleticsMensHurdles400M,
        Value_AthleticsMensSteeplechase3000M,
        Value_AthleticsMens4X100MRelay,
        Value_AthleticsMens4X400MRelay,
        Value_AthleticsMensMarathon,
        Value_AthleticsMensWalk20KM,
        Value_AthleticsMensWalk50KM,
        Value_AthleticsMensHighJump,
        Value_AthleticsMensPoleVault,
        Value_AthleticsMensLongJump,
        Value_AthleticsMensTripleJump,
        Value_AthleticsMensShotPut,
        Value_AthleticsMensDiscusThrow,
        Value_AthleticsMensHammerThrow,
        Value_AthleticsMensJavelinThrow,
        Value_AthleticsMensDecathlon,
        Value_AthleticsWomens100M,
        Value_AthleticsWomens200M,
        Value_AthleticsWomens400M,
        Value_AthleticsWomens800M,
        Value_AthleticsWomens1500M,
        Value_AthleticsWomens3000M,
        Value_AthleticsWomens5000M,
        Value_AthleticsWomens10000M,
        Value_AthleticsWomensHurdles100M,
        Value_AthleticsWomenshurdles400M,
        Value_AthleticsWomensSteeplechase3000M,
        Value_AthleticsWomens4X100MRelay,
        Value_AthleticsWomens4X400MRelay,
        Value_AthleticsWomensMarathon,
        Value_AthleticsWomensWalk10KM,
        Value_AthleticsWomensWalk20KM,
        Value_AthleticsWomensHighJump,
        Value_AthleticsWomensPoleVault,
        Value_AthleticsWomensLongJump,
        Value_AthleticsWomensTripleJump,
        Value_AthleticsWomensShotPut,
        Value_AthleticsWomensDiscusThrow,
        Value_AthleticsWomensHammerThrow,
        Value_AthleticsWomensJavelinThrow,
        Value_AthleticsWomensHeptathlon,
        Value_BadmintonMensSingles,
        Value_BadmintonMensDoubles,
        Value_BadmintonWomensSingles,
        Value_BadmintonWomensDoubles,
        Value_BadmintonMixedDoubles,
        Value_BaseballMens,
        Value_BasketballMens,
        Value_BasketballWomens,
        Value_BoxingMensLightFlyweight,
        Value_BoxingMensFlyweight,
        Value_BoxingMensBantamweight,
        Value_BoxingMensFeatherweight,
        Value_BoxingMensLightweight,
        Value_BoxingMensLightWelterweight,
        Value_BoxingMensWelterweight,
        Value_BoxingMensLightMiddleweight,
        Value_BoxingMensMiddleweight,
        Value_BoxingMensLightHeavyweight,
        Value_BoxingMensHeavyweight,
        Value_BoxingMensSuperHeavyweight,
        Value_BoxingWomensFlyweight,
        Value_BoxingWomensLightweight,
        Value_BoxingWomensMiddleweight,
        Value_CanoeingMensSlalomC1,
        Value_CanoeingMensSlalomC2,
        Value_CanoeingMensSlalomK1,
        Value_CanoeingMensSprintC1200M,
        Value_CanoeingMensSprintC1500M,
        Value_CanoeingMensSprintC11000M,
        Value_CanoeingMensSprintC2500M,
        Value_CanoeingMensSprintC21000M,
        Value_CanoeingMensSprintK1200M,
        Value_CanoeingMensSprintK1500M,
        Value_CanoeingMensSprintK11000M,
        Value_CanoeingMensSprintK2200M,
        Value_CanoeingMensSprintK2500M,
        Value_CanoeingMensSprintK21000M,
        Value_CanoeingMensSprintK41000M,
        Value_CanoeingWomensSlalomK1,
        Value_CanoeingWomensSprintK1200M,
        Value_CanoeingWomensSprintK1500M,
        Value_CanoeingWomensSprintK2500M,
        Value_CanoeingWomensSprintK4500M,
        Value_CyclingMensRoadCyclingRoadRace,
        Value_CyclingMensRoadCyclingTimeTrial,
        Value_CyclingMensRoadCyclingTeamTimeTrial,
        Value_CyclingMensTrackCyclingKeirin,
        Value_CyclingMensTrackCyclingMadison,
        Value_CyclingMensTrackCyclingOmnium,
        Value_CyclingMensTrackCyclingPointsRace,
        Value_CyclingMensTrackCyclingIndividualPursuit,
        Value_CyclingMensTrackCyclingTeamPursuit,
        Value_CyclingMensTrackCyclingIndividualSprint,
        Value_CyclingMensTrackCyclingTeamSprint,
        Value_CyclingMensTrackCyclingTimeTrial,
        Value_CyclingMensMountainBikingCrossCountry,
        Value_CyclingMensBMX,
        Value_CyclingWomensRoadCyclingRoadRace,
        Value_CyclingWomensRoadCyclingTimeTrial,
        Value_CyclingWomensTrackCyclingKeirin,
        Value_CyclingWomensTrackCyclingMadison,
        Value_CyclingWomensTrackCyclingOmnium,
        Value_CyclingWomensTrackCyclingPointsRace,
        Value_CyclingWomensTrackCyclingIndividualPursuit,
        Value_CyclingWomensTrackCyclingTeamPursuit,
        Value_CyclingWomensTrackCyclingIndividualSprint,
        Value_CyclingWomensTrackCyclingTeamSprint,
        Value_CyclingWomensTrackCyclingTimeTrial,
        Value_CyclingWomensMountainBikingCrossCountry,
        Value_CyclingWomensBMX,
        Value_DivingMensSpringboard,
        Value_DivingMensPlatform,
        Value_DivingMensSynchronizedSpringboard,
        Value_DivingMensSynchronizedPlatform,
        Value_DivingWomensSpringboard,
        Value_DivingWomensPlatform,
        Value_DivingWomensSynchronizedSpringboard,
        Value_DivingWomensSynchronizedPlatform,
        Value_EquestrianIndividualDressage,
        Value_EquestrianTeamDressage,
        Value_EquestrianIndividualEventing,
        Value_EquestrianTeamEventing,
        Value_EquestrianIndividualJumping,
        Value_EquestrianTeamJumping,
        Value_FencingMensIndividualEpee,
        Value_FencingMensTeamEpee,
        Value_FencingMensIndividualFoil,
        Value_FencingMensTeamFoil,
        Value_FencingMensIndividualSabre,
        Value_FencingMensTeamSabre,
        Value_FencingWomensIndividualEpee,
        Value_FencingWomensTeamEpee,
        Value_FencingWomensIndividualFoil,
        Value_FencingWomensTeamFoil,
        Value_FencingWomensIndividualSabre,
        Value_FencingWomensTeamSabre,
        Value_FieldHockeyMens,
        Value_FieldHockeyWomens,
        Value_FootballMens,
        Value_FootballWomens,
        Value_GolfMensIndividual,
        Value_GolfWomensIndividual,
        Value_GymnasticsMensArtisticTeamAllAround,
        Value_GymnasticsMensArtisticIndividualAllAround,
        Value_GymnasticsMensArtisticFloorExercise,
        Value_GymnasticsMensArtisticHorizontalBar,
        Value_GymnasticsMensArtisticParallelBars,
        Value_GymnasticsMensArtisticPommelHorse,
        Value_GymnasticsMensArtisticRings,
        Value_GymnasticsMensArtisticVault,
        Value_GymnasticsMensTrampolineIndividual,
        Value_GymnasticsWomensArtisticTeamAllAround,
        Value_GymnasticsWomensArtisticIndividualAllAround,
        Value_GymnasticsWomensArtisticBalanceBeam,
        Value_GymnasticsWomensArtisticFloorExercise,
        Value_GymnasticsWomensArtisticUnevenBars,
        Value_GymnasticsWomensArtisticVault,
        Value_GymnasticsWomensRhythmicIndividualAllAround,
        Value_GymnasticsWomensRhythmicGroupAllAround,
        Value_GymnasticsWomensTrampolineIndividual,
        Value_HandballMens,
        Value_HandballWomens,
        Value_JudoMensExtraLightweight,
        Value_JudoMensHalfLightweight,
        Value_JudoMensLightweight,
        Value_JudoMensHalfMiddleweight,
        Value_JudoMensMiddleweight,
        Value_JudoMensHalfHeavyweight,
        Value_JudoMensHeavyweight,
        Value_JudoWomensExtraLightweight,
        Value_JudoWomensHalfLightweight,
        Value_JudoWomensLightweight,
        Value_JudoWomensHalfMiddleweight,
        Value_JudoWomensMiddleweight,
        Value_JudoWomensHalfHeavyweight,
        Value_JudoWomensHeavyweight,
        Value_ModernPentathlonMens,
        Value_ModernPentathlonWomens,
        Value_RowingMensSingleSculls,
        Value_RowingMensDoubleSculls,
        Value_RowingMensQuadrupleSculls,
        Value_RowingMensCoxlessPair,
        Value_RowingMensCoxedPair,
        Value_RowingMensCoxlessFour,
        Value_RowingMensCoxedFour,
        Value_RowingMensCoxedEight,
        Value_RowingMensLightweightDoubleSculls,
        Value_RowingMensLightweightCoxlessFour,
        Value_RowingWomensSingleSculls,
        Value_RowingWomensDoubleSculls,
        Value_RowingWomensQuadrupleSculls,
        Value_RowingWomensCoxlessPair,
        Value_RowingWomensCoxedFour,
        Value_RowingWomensCoxedEight,
        Value_RowingWomensLightweightDoubleSculls,
        Value_RugbyMens,
        Value_RugbyWomens,
        Value_SailingMensRSX,
        Value_SailingMensLaser,
        Value_SailingMensFinn,
        Value_SailingMens470,
        Value_SailingMens49erFX,
        Value_SailingMensStar,
        Value_SailingWomensRSX,
        Value_SailingWomensLaser,
        Value_SailingWomens470,
        Value_SailingWomens49erFX,
        Value_SailingWomensElliott6M,
        Value_SailingWomensYngling,
        Value_SailingMixedNacra17,
        Value_SailingMixed49erFX,
        Value_SailingMixedFinn,
        Value_SailingMixedTornado,
        Value_ShootingMensAirPistol10M,
        Value_ShootingMensAirRifle10M,
        Value_ShootingMensRapidFirePistol25M,
        Value_ShootingMensPistol50M,
        Value_ShootingMensRifleProne50M,
        Value_ShootingMensRifleThreePositions50M,
        Value_ShootingMensSkeet,
        Value_ShootingMensTrap,
        Value_ShootingMensDoubleTrap,
        Value_ShootingMens10MRunningTarget,
        Value_ShootingWomensAirPistol10M,
        Value_ShootingWomensAirRifle10M,
        Value_ShootingWomensPistol25M,
        Value_ShootingWomensRifleThreePositions50M,
        Value_ShootingWomensSkeet,
        Value_ShootingWomensTrap,
        Value_ShootingWomensDoubleTrap,
        Value_SoftballWomens,
        Value_SwimmingMensFreestyle50M,
        Value_SwimmingMensFreestyle100M,
        Value_SwimmingMensFreestyle200M,
        Value_SwimmingMensFreestyle400M,
        Value_SwimmingMensFreestyle1500M,
        Value_SwimmingMensBackstroke100M,
        Value_SwimmingMensBackstroke200M,
        Value_SwimmingMensBreaststroke100M,
        Value_SwimmingMensBreaststroke200M,
        Value_SwimmingMensButterfly100M,
        Value_SwimmingMensButterfly200M,
        Value_SwimmingMensIndividualMedley200M,
        Value_SwimmingMensIndividualMedley400M,
        Value_SwimmingMens4X100MFreestyleRelay,
        Value_SwimmingMens4X200MFreestyleRelay,
        Value_SwimmingMens4X100MMedleyRelay,
        Value_SwimmingMensOpenWater10KM,
        Value_SwimmingWomensFreestyle50M,
        Value_SwimmingWomensFreestyle100M,
        Value_SwimmingWomensFreestyle200M,
        Value_SwimmingWomensFreestyle400M,
        Value_SwimmingWomensFreestyle800M,
        Value_SwimmingWomensBackstroke100M,
        Value_SwimmingWomensBackstroke200M,
        Value_SwimmingWomensBreaststroke100M,
        Value_SwimmingWomensBreaststroke200M,
        Value_SwimmingWomensButterfly100M,
        Value_SwimmingWomensButterfly200M,
        Value_SwimmingWomensIndividualMedley200M,
        Value_SwimmingWomensindividualMedley400M,
        Value_SwimmingWomens4X100MFreestyleRelay,
        Value_SwimmingWomens4X200MFreestyleRelay,
        Value_SwimmingWomens4X100MMedleyRelay,
        Value_SwimmingWomensOpenWater10KM,
        Value_SynchronizedSwimmingWomensDuet,
        Value_SynchronizedSwimmingWomensTeam,
        Value_SynchronizedSwimmingWomensSolo,
        Value_TableTennisMensSingles,
        Value_TableTennisMensTeam,
        Value_TableTennisWomensSingles,
        Value_TableTennisWomensTeam,
        Value_TaekwondoMensFlyweight,
        Value_TaekwondoMensFeatherweight,
        Value_TaekwondoMensWelterweight,
        Value_TaekwondoMensHeavyweight,
        Value_TaekwondoWomensFlyweight,
        Value_TaekwondoWomensFeatherweight,
        Value_TaekwondoWomensWelterweight,
        Value_TaekwondoWomensHeavyweight,
        Value_TennisMensSingles,
        Value_TennisMensDoubles,
        Value_TennisWomensSingles,
        Value_TennisWomensDoubles,
        Value_TennisMixedDoubles,
        Value_TriathlonMensIndividual,
        Value_TriathlonWomensIndividual,
        Value_VolleyballMensIndoor,
        Value_VolleyballMensBeach,
        Value_VolleyballWomensIndoor,
        Value_VolleyballWomensBeach,
        Value_WaterPoloMens,
        Value_WaterPoloWomens,
        Value_WeightliftingMensFlyweight,
        Value_WeightliftingMensBantamweight,
        Value_WeightliftingMensFeatherweight,
        Value_WeightliftingMensLightweight,
        Value_WeightliftingMensMiddleweight,
        Value_WeightliftingMensLightHeavyweight,
        Value_WeightliftingMensMiddleHeavyweight,
        Value_WeightliftingMensFirstHeavyweight,
        Value_WeightliftingMensHeavyweight,
        Value_WeightliftingMensSuperHeavyweight,
        Value_WeightliftingWomensFlyweight,
        Value_WeightliftingWomensFeatherweight,
        Value_WeightliftingWomensLightweight,
        Value_WeightliftingWomensMiddleweight,
        Value_WeightliftingWomensLightHeavyweight,
        Value_WeightliftingWomensHeavyweight,
        Value_WeightliftingWomensSuperHeavyweight,
        Value_WrestlingMensGrecoRomanLightFlyweight,
        Value_WrestlingMensGrecoRomanFlyweight,
        Value_WrestlingMensGrecoRomanBantamweight,
        Value_WrestlingMensGrecoRomanFeatherweight,
        Value_WrestlingMensGrecoRomanLightweight,
        Value_WrestlingMensGrecoRomanWelterweight,
        Value_WrestlingMensGrecoRomanMiddleweight,
        Value_WrestlingMensGrecoRomanLightHeavyweight,
        Value_WrestlingMensGrecoRomanHeavyweight,
        Value_WrestlingMensGrecoRomanSuperHeavyweight,
        Value_WrestlingMensFreestyleLightFlyweight,
        Value_WrestlingMensFreestyleFlyweight,
        Value_WrestlingMensFreestyleBantamweight,
        Value_WrestlingMensFreestyleFeatherweight,
        Value_WrestlingMensFreestyleLightweight,
        Value_WrestlingMensFreestyleWelterweight,
        Value_WrestlingMensFreestyleMiddleweight,
        Value_WrestlingMensFreestyleLightHeavyweight,
        Value_WrestlingMensFreestyleHeavyweight,
        Value_WrestlingMensFreestyleSuperHeavyweight,
        Value_WrestlingWomensFreestyleFlyweight,
        Value_WrestlingWomensFreestyleBantamweight,
        Value_WrestlingWomensFreestyleLightweight,
        Value_WrestlingWomensFreestyleMiddleweight,
        Value_WrestlingWomensFreestyleWelterweight,
        Value_WrestlingWomensFreestyleLightHeavyweight,
        Value_WrestlingWomensFreestyleHeavyweight,
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

    SportsOlympicsEventJSON(const SportsOlympicsEventJSON &);
    SportsOlympicsEventJSON & operator=(const SportsOlympicsEventJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventJSON(void);
    SportsOlympicsEventJSON(TypeValue init_value);
    SportsOlympicsEventJSON(const char *init_value);
    SportsOlympicsEventJSON(std::string init_value);
    SportsOlympicsEventJSON(TypeValueKnownValues init_value);
    virtual ~SportsOlympicsEventJSON(void);
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
                case Value_AlpineSkiingMensDownhill:
                    handler->string_value("AlpineSkiingMensDownhill");
                    break;
                case Value_AlpineSkiingMensSuperG:
                    handler->string_value("AlpineSkiingMensSuperG");
                    break;
                case Value_AlpineSkiingMensGiantSlalom:
                    handler->string_value("AlpineSkiingMensGiantSlalom");
                    break;
                case Value_AlpineSkiingMensSlalom:
                    handler->string_value("AlpineSkiingMensSlalom");
                    break;
                case Value_AlpineSkiingMensCombined:
                    handler->string_value("AlpineSkiingMensCombined");
                    break;
                case Value_AlpineSkiingWomensDownhill:
                    handler->string_value("AlpineSkiingWomensDownhill");
                    break;
                case Value_AlpineSkiingWomensSuperG:
                    handler->string_value("AlpineSkiingWomensSuperG");
                    break;
                case Value_AlpineSkiingWomensGiantSlalom:
                    handler->string_value("AlpineSkiingWomensGiantSlalom");
                    break;
                case Value_AlpineSkiingWomensSlalom:
                    handler->string_value("AlpineSkiingWomensSlalom");
                    break;
                case Value_AlpineSkiingWomensCombined:
                    handler->string_value("AlpineSkiingWomensCombined");
                    break;
                case Value_AlpineSkiingMixedTeam:
                    handler->string_value("AlpineSkiingMixedTeam");
                    break;
                case Value_BiathlonMensIndividual:
                    handler->string_value("BiathlonMensIndividual");
                    break;
                case Value_BiathlonMensSprint:
                    handler->string_value("BiathlonMensSprint");
                    break;
                case Value_BiathlonMensPursuit:
                    handler->string_value("BiathlonMensPursuit");
                    break;
                case Value_BiathlonMensMassStart:
                    handler->string_value("BiathlonMensMassStart");
                    break;
                case Value_BiathlonMensRelay:
                    handler->string_value("BiathlonMensRelay");
                    break;
                case Value_BiathlonMensMilitaryPatrol:
                    handler->string_value("BiathlonMensMilitaryPatrol");
                    break;
                case Value_BiathlonWomensIndividual:
                    handler->string_value("BiathlonWomensIndividual");
                    break;
                case Value_BiathlonWomensSprint:
                    handler->string_value("BiathlonWomensSprint");
                    break;
                case Value_BiathlonWomensPursuit:
                    handler->string_value("BiathlonWomensPursuit");
                    break;
                case Value_BiathlonWomensMassStart:
                    handler->string_value("BiathlonWomensMassStart");
                    break;
                case Value_BiathlonWomensRelay:
                    handler->string_value("BiathlonWomensRelay");
                    break;
                case Value_BiathlonMixedRelay:
                    handler->string_value("BiathlonMixedRelay");
                    break;
                case Value_BobsleighMensTwo:
                    handler->string_value("BobsleighMensTwo");
                    break;
                case Value_BobsleighMensFour:
                    handler->string_value("BobsleighMensFour");
                    break;
                case Value_BobsleighWomensTwo:
                    handler->string_value("BobsleighWomensTwo");
                    break;
                case Value_CrossCountrySkiingMens10KMClassical:
                    handler->string_value("CrossCountrySkiingMens10KMClassical");
                    break;
                case Value_CrossCountrySkiingMens15KMClassical:
                    handler->string_value("CrossCountrySkiingMens15KMClassical");
                    break;
                case Value_CrossCountrySkiingMens18KM:
                    handler->string_value("CrossCountrySkiingMens18KM");
                    break;
                case Value_CrossCountrySkiingMens30KMSkiathlon:
                    handler->string_value("CrossCountrySkiingMens30KMSkiathlon");
                    break;
                case Value_CrossCountrySkiingMens50KMFreestyle:
                    handler->string_value("CrossCountrySkiingMens50KMFreestyle");
                    break;
                case Value_CrossCountrySkiingMens4X10KMRelay:
                    handler->string_value("CrossCountrySkiingMens4X10KMRelay");
                    break;
                case Value_CrossCountrySkiingMens2X10KMPursuit:
                    handler->string_value("CrossCountrySkiingMens2X10KMPursuit");
                    break;
                case Value_CrossCountrySkiingMensSprint:
                    handler->string_value("CrossCountrySkiingMensSprint");
                    break;
                case Value_CrossCountrySkiingMensTeamSprint:
                    handler->string_value("CrossCountrySkiingMensTeamSprint");
                    break;
                case Value_CrossCountrySkiingWomens5KM:
                    handler->string_value("CrossCountrySkiingWomens5KM");
                    break;
                case Value_CrossCountrySkiingWomens10KMClassical:
                    handler->string_value("CrossCountrySkiingWomens10KMClassical");
                    break;
                case Value_CrossCountrySkiingWomens15KMSkiathlon:
                    handler->string_value("CrossCountrySkiingWomens15KMSkiathlon");
                    break;
                case Value_CrossCountrySkiingWomens20KM:
                    handler->string_value("CrossCountrySkiingWomens20KM");
                    break;
                case Value_CrossCountrySkiingWomens30KMFreestyle:
                    handler->string_value("CrossCountrySkiingWomens30KMFreestyle");
                    break;
                case Value_CrossCountrySkiingWomens4X5KMRelay:
                    handler->string_value("CrossCountrySkiingWomens4X5KMRelay");
                    break;
                case Value_CrossCountrySkiingWomens2X5KMPursuit:
                    handler->string_value("CrossCountrySkiingWomens2X5KMPursuit");
                    break;
                case Value_CrossCountrySkiingWomensSprint:
                    handler->string_value("CrossCountrySkiingWomensSprint");
                    break;
                case Value_CrossCountrySkiingWomensTeamSprint:
                    handler->string_value("CrossCountrySkiingWomensTeamSprint");
                    break;
                case Value_CurlingMens:
                    handler->string_value("CurlingMens");
                    break;
                case Value_CurlingWomens:
                    handler->string_value("CurlingWomens");
                    break;
                case Value_CurlingMixedDoubles:
                    handler->string_value("CurlingMixedDoubles");
                    break;
                case Value_FigureSkatingMensSingles:
                    handler->string_value("FigureSkatingMensSingles");
                    break;
                case Value_FigureSkatingWomensSingles:
                    handler->string_value("FigureSkatingWomensSingles");
                    break;
                case Value_FigureSkatingPair:
                    handler->string_value("FigureSkatingPair");
                    break;
                case Value_FigureSkatingIceDancing:
                    handler->string_value("FigureSkatingIceDancing");
                    break;
                case Value_FigureSkatingTeamTrophy:
                    handler->string_value("FigureSkatingTeamTrophy");
                    break;
                case Value_FreestyleSkiingMensAerials:
                    handler->string_value("FreestyleSkiingMensAerials");
                    break;
                case Value_FreestyleSkiingMensHalfpipe:
                    handler->string_value("FreestyleSkiingMensHalfpipe");
                    break;
                case Value_FreestyleSkiingMensMoguls:
                    handler->string_value("FreestyleSkiingMensMoguls");
                    break;
                case Value_FreestyleSkiingMensSlopestyle:
                    handler->string_value("FreestyleSkiingMensSlopestyle");
                    break;
                case Value_FreestyleSkiingMensSkiCross:
                    handler->string_value("FreestyleSkiingMensSkiCross");
                    break;
                case Value_FreestyleSkiingWomensAerials:
                    handler->string_value("FreestyleSkiingWomensAerials");
                    break;
                case Value_FreestyleSkiingWomensHalfpipe:
                    handler->string_value("FreestyleSkiingWomensHalfpipe");
                    break;
                case Value_FreestyleSkiingWomensMoguls:
                    handler->string_value("FreestyleSkiingWomensMoguls");
                    break;
                case Value_FreestyleSkiingWomensSlopestyle:
                    handler->string_value("FreestyleSkiingWomensSlopestyle");
                    break;
                case Value_FreestyleSkiingWomensSkiCross:
                    handler->string_value("FreestyleSkiingWomensSkiCross");
                    break;
                case Value_IceHockeyMens:
                    handler->string_value("IceHockeyMens");
                    break;
                case Value_IceHockeyWomens:
                    handler->string_value("IceHockeyWomens");
                    break;
                case Value_LugeMensSingles:
                    handler->string_value("LugeMensSingles");
                    break;
                case Value_LugeWomensSingles:
                    handler->string_value("LugeWomensSingles");
                    break;
                case Value_LugeDoubles:
                    handler->string_value("LugeDoubles");
                    break;
                case Value_LugeTeamRelay:
                    handler->string_value("LugeTeamRelay");
                    break;
                case Value_NordicCombinedIndividualLargeHill10KM:
                    handler->string_value("NordicCombinedIndividualLargeHill10KM");
                    break;
                case Value_NordicCombinedIndividualNormalHill10KM:
                    handler->string_value("NordicCombinedIndividualNormalHill10KM");
                    break;
                case Value_NordicCombinedTeamLargeHill4X5KM:
                    handler->string_value("NordicCombinedTeamLargeHill4X5KM");
                    break;
                case Value_ShortTrackSpeedSkatingMens500M:
                    handler->string_value("ShortTrackSpeedSkatingMens500M");
                    break;
                case Value_ShortTrackSpeedSkatingMens1000M:
                    handler->string_value("ShortTrackSpeedSkatingMens1000M");
                    break;
                case Value_ShortTrackSpeedSkatingMens1500M:
                    handler->string_value("ShortTrackSpeedSkatingMens1500M");
                    break;
                case Value_ShortTrackSpeedSkatingMens5000MRelay:
                    handler->string_value("ShortTrackSpeedSkatingMens5000MRelay");
                    break;
                case Value_ShortTrackSpeedSkatingWomens500M:
                    handler->string_value("ShortTrackSpeedSkatingWomens500M");
                    break;
                case Value_ShortTrackSpeedSkatingWomens1000M:
                    handler->string_value("ShortTrackSpeedSkatingWomens1000M");
                    break;
                case Value_ShortTrackSpeedSkatingWomens1500M:
                    handler->string_value("ShortTrackSpeedSkatingWomens1500M");
                    break;
                case Value_ShortTrackSpeedSkatingWomens3000MRelay:
                    handler->string_value("ShortTrackSpeedSkatingWomens3000MRelay");
                    break;
                case Value_SkeletonMens:
                    handler->string_value("SkeletonMens");
                    break;
                case Value_SkeletonWomens:
                    handler->string_value("SkeletonWomens");
                    break;
                case Value_SkiJumpingMensIndividualNormalHill:
                    handler->string_value("SkiJumpingMensIndividualNormalHill");
                    break;
                case Value_SkiJumpingMensIndividualLargeHill:
                    handler->string_value("SkiJumpingMensIndividualLargeHill");
                    break;
                case Value_SkiJumpingMensTeamLargeHill:
                    handler->string_value("SkiJumpingMensTeamLargeHill");
                    break;
                case Value_SkiJumpingWomensIndividualNormalHill:
                    handler->string_value("SkiJumpingWomensIndividualNormalHill");
                    break;
                case Value_SnowboardingMensParallelSlalom:
                    handler->string_value("SnowboardingMensParallelSlalom");
                    break;
                case Value_SnowboardingMensParallelGiantSlalom:
                    handler->string_value("SnowboardingMensParallelGiantSlalom");
                    break;
                case Value_SnowboardingMensHalfpipe:
                    handler->string_value("SnowboardingMensHalfpipe");
                    break;
                case Value_SnowboardingMensSlopestyle:
                    handler->string_value("SnowboardingMensSlopestyle");
                    break;
                case Value_SnowboardingMensSnowboardCross:
                    handler->string_value("SnowboardingMensSnowboardCross");
                    break;
                case Value_SnowboardingMensBigAir:
                    handler->string_value("SnowboardingMensBigAir");
                    break;
                case Value_SnowboardingWomensParallelSlalom:
                    handler->string_value("SnowboardingWomensParallelSlalom");
                    break;
                case Value_SnowboardingWomensParallelGiantSlalom:
                    handler->string_value("SnowboardingWomensParallelGiantSlalom");
                    break;
                case Value_SnowboardingWomensHalfpipe:
                    handler->string_value("SnowboardingWomensHalfpipe");
                    break;
                case Value_SnowboardingWomensSlopestyle:
                    handler->string_value("SnowboardingWomensSlopestyle");
                    break;
                case Value_SnowboardingWomensSnowboardCross:
                    handler->string_value("SnowboardingWomensSnowboardCross");
                    break;
                case Value_SnowboardingWomensBigAir:
                    handler->string_value("SnowboardingWomensBigAir");
                    break;
                case Value_SpeedSkatingMens500M:
                    handler->string_value("SpeedSkatingMens500M");
                    break;
                case Value_SpeedSkatingMens1000M:
                    handler->string_value("SpeedSkatingMens1000M");
                    break;
                case Value_SpeedSkatingMens1500M:
                    handler->string_value("SpeedSkatingMens1500M");
                    break;
                case Value_SpeedSkatingMens5000M:
                    handler->string_value("SpeedSkatingMens5000M");
                    break;
                case Value_SpeedSkatingMens10000M:
                    handler->string_value("SpeedSkatingMens10000M");
                    break;
                case Value_SpeedSkatingMensTeamPursuit:
                    handler->string_value("SpeedSkatingMensTeamPursuit");
                    break;
                case Value_SpeedSkatingMensMassStart:
                    handler->string_value("SpeedSkatingMensMassStart");
                    break;
                case Value_SpeedSkatingMensAllRound:
                    handler->string_value("SpeedSkatingMensAllRound");
                    break;
                case Value_SpeedSkatingWomens500M:
                    handler->string_value("SpeedSkatingWomens500M");
                    break;
                case Value_SpeedSkatingWomens1000M:
                    handler->string_value("SpeedSkatingWomens1000M");
                    break;
                case Value_SpeedSkatingWomens1500M:
                    handler->string_value("SpeedSkatingWomens1500M");
                    break;
                case Value_SpeedSkatingWomens3000M:
                    handler->string_value("SpeedSkatingWomens3000M");
                    break;
                case Value_SpeedSkatingWomens5000M:
                    handler->string_value("SpeedSkatingWomens5000M");
                    break;
                case Value_SpeedSkatingWomensTeamPursuit:
                    handler->string_value("SpeedSkatingWomensTeamPursuit");
                    break;
                case Value_SpeedSkatingWomensMassStart:
                    handler->string_value("SpeedSkatingWomensMassStart");
                    break;
                case Value_ArcheryMensIndividual:
                    handler->string_value("ArcheryMensIndividual");
                    break;
                case Value_ArcheryMensTeam:
                    handler->string_value("ArcheryMensTeam");
                    break;
                case Value_ArcheryWomensIndividual:
                    handler->string_value("ArcheryWomensIndividual");
                    break;
                case Value_ArcheryWomensTeam:
                    handler->string_value("ArcheryWomensTeam");
                    break;
                case Value_AthleticsMens100M:
                    handler->string_value("AthleticsMens100M");
                    break;
                case Value_AthleticsMens200M:
                    handler->string_value("AthleticsMens200M");
                    break;
                case Value_AthleticsMens400M:
                    handler->string_value("AthleticsMens400M");
                    break;
                case Value_AthleticsMens800M:
                    handler->string_value("AthleticsMens800M");
                    break;
                case Value_AthleticsMens1500M:
                    handler->string_value("AthleticsMens1500M");
                    break;
                case Value_AthleticsMens5000M:
                    handler->string_value("AthleticsMens5000M");
                    break;
                case Value_AthleticsMens10000M:
                    handler->string_value("AthleticsMens10000M");
                    break;
                case Value_AthleticsMensHurdles110M:
                    handler->string_value("AthleticsMensHurdles110M");
                    break;
                case Value_AthleticsMensHurdles400M:
                    handler->string_value("AthleticsMensHurdles400M");
                    break;
                case Value_AthleticsMensSteeplechase3000M:
                    handler->string_value("AthleticsMensSteeplechase3000M");
                    break;
                case Value_AthleticsMens4X100MRelay:
                    handler->string_value("AthleticsMens4X100MRelay");
                    break;
                case Value_AthleticsMens4X400MRelay:
                    handler->string_value("AthleticsMens4X400MRelay");
                    break;
                case Value_AthleticsMensMarathon:
                    handler->string_value("AthleticsMensMarathon");
                    break;
                case Value_AthleticsMensWalk20KM:
                    handler->string_value("AthleticsMensWalk20KM");
                    break;
                case Value_AthleticsMensWalk50KM:
                    handler->string_value("AthleticsMensWalk50KM");
                    break;
                case Value_AthleticsMensHighJump:
                    handler->string_value("AthleticsMensHighJump");
                    break;
                case Value_AthleticsMensPoleVault:
                    handler->string_value("AthleticsMensPoleVault");
                    break;
                case Value_AthleticsMensLongJump:
                    handler->string_value("AthleticsMensLongJump");
                    break;
                case Value_AthleticsMensTripleJump:
                    handler->string_value("AthleticsMensTripleJump");
                    break;
                case Value_AthleticsMensShotPut:
                    handler->string_value("AthleticsMensShotPut");
                    break;
                case Value_AthleticsMensDiscusThrow:
                    handler->string_value("AthleticsMensDiscusThrow");
                    break;
                case Value_AthleticsMensHammerThrow:
                    handler->string_value("AthleticsMensHammerThrow");
                    break;
                case Value_AthleticsMensJavelinThrow:
                    handler->string_value("AthleticsMensJavelinThrow");
                    break;
                case Value_AthleticsMensDecathlon:
                    handler->string_value("AthleticsMensDecathlon");
                    break;
                case Value_AthleticsWomens100M:
                    handler->string_value("AthleticsWomens100M");
                    break;
                case Value_AthleticsWomens200M:
                    handler->string_value("AthleticsWomens200M");
                    break;
                case Value_AthleticsWomens400M:
                    handler->string_value("AthleticsWomens400M");
                    break;
                case Value_AthleticsWomens800M:
                    handler->string_value("AthleticsWomens800M");
                    break;
                case Value_AthleticsWomens1500M:
                    handler->string_value("AthleticsWomens1500M");
                    break;
                case Value_AthleticsWomens3000M:
                    handler->string_value("AthleticsWomens3000M");
                    break;
                case Value_AthleticsWomens5000M:
                    handler->string_value("AthleticsWomens5000M");
                    break;
                case Value_AthleticsWomens10000M:
                    handler->string_value("AthleticsWomens10000M");
                    break;
                case Value_AthleticsWomensHurdles100M:
                    handler->string_value("AthleticsWomensHurdles100M");
                    break;
                case Value_AthleticsWomenshurdles400M:
                    handler->string_value("AthleticsWomenshurdles400M");
                    break;
                case Value_AthleticsWomensSteeplechase3000M:
                    handler->string_value("AthleticsWomensSteeplechase3000M");
                    break;
                case Value_AthleticsWomens4X100MRelay:
                    handler->string_value("AthleticsWomens4X100MRelay");
                    break;
                case Value_AthleticsWomens4X400MRelay:
                    handler->string_value("AthleticsWomens4X400MRelay");
                    break;
                case Value_AthleticsWomensMarathon:
                    handler->string_value("AthleticsWomensMarathon");
                    break;
                case Value_AthleticsWomensWalk10KM:
                    handler->string_value("AthleticsWomensWalk10KM");
                    break;
                case Value_AthleticsWomensWalk20KM:
                    handler->string_value("AthleticsWomensWalk20KM");
                    break;
                case Value_AthleticsWomensHighJump:
                    handler->string_value("AthleticsWomensHighJump");
                    break;
                case Value_AthleticsWomensPoleVault:
                    handler->string_value("AthleticsWomensPoleVault");
                    break;
                case Value_AthleticsWomensLongJump:
                    handler->string_value("AthleticsWomensLongJump");
                    break;
                case Value_AthleticsWomensTripleJump:
                    handler->string_value("AthleticsWomensTripleJump");
                    break;
                case Value_AthleticsWomensShotPut:
                    handler->string_value("AthleticsWomensShotPut");
                    break;
                case Value_AthleticsWomensDiscusThrow:
                    handler->string_value("AthleticsWomensDiscusThrow");
                    break;
                case Value_AthleticsWomensHammerThrow:
                    handler->string_value("AthleticsWomensHammerThrow");
                    break;
                case Value_AthleticsWomensJavelinThrow:
                    handler->string_value("AthleticsWomensJavelinThrow");
                    break;
                case Value_AthleticsWomensHeptathlon:
                    handler->string_value("AthleticsWomensHeptathlon");
                    break;
                case Value_BadmintonMensSingles:
                    handler->string_value("BadmintonMensSingles");
                    break;
                case Value_BadmintonMensDoubles:
                    handler->string_value("BadmintonMensDoubles");
                    break;
                case Value_BadmintonWomensSingles:
                    handler->string_value("BadmintonWomensSingles");
                    break;
                case Value_BadmintonWomensDoubles:
                    handler->string_value("BadmintonWomensDoubles");
                    break;
                case Value_BadmintonMixedDoubles:
                    handler->string_value("BadmintonMixedDoubles");
                    break;
                case Value_BaseballMens:
                    handler->string_value("BaseballMens");
                    break;
                case Value_BasketballMens:
                    handler->string_value("BasketballMens");
                    break;
                case Value_BasketballWomens:
                    handler->string_value("BasketballWomens");
                    break;
                case Value_BoxingMensLightFlyweight:
                    handler->string_value("BoxingMensLightFlyweight");
                    break;
                case Value_BoxingMensFlyweight:
                    handler->string_value("BoxingMensFlyweight");
                    break;
                case Value_BoxingMensBantamweight:
                    handler->string_value("BoxingMensBantamweight");
                    break;
                case Value_BoxingMensFeatherweight:
                    handler->string_value("BoxingMensFeatherweight");
                    break;
                case Value_BoxingMensLightweight:
                    handler->string_value("BoxingMensLightweight");
                    break;
                case Value_BoxingMensLightWelterweight:
                    handler->string_value("BoxingMensLightWelterweight");
                    break;
                case Value_BoxingMensWelterweight:
                    handler->string_value("BoxingMensWelterweight");
                    break;
                case Value_BoxingMensLightMiddleweight:
                    handler->string_value("BoxingMensLightMiddleweight");
                    break;
                case Value_BoxingMensMiddleweight:
                    handler->string_value("BoxingMensMiddleweight");
                    break;
                case Value_BoxingMensLightHeavyweight:
                    handler->string_value("BoxingMensLightHeavyweight");
                    break;
                case Value_BoxingMensHeavyweight:
                    handler->string_value("BoxingMensHeavyweight");
                    break;
                case Value_BoxingMensSuperHeavyweight:
                    handler->string_value("BoxingMensSuperHeavyweight");
                    break;
                case Value_BoxingWomensFlyweight:
                    handler->string_value("BoxingWomensFlyweight");
                    break;
                case Value_BoxingWomensLightweight:
                    handler->string_value("BoxingWomensLightweight");
                    break;
                case Value_BoxingWomensMiddleweight:
                    handler->string_value("BoxingWomensMiddleweight");
                    break;
                case Value_CanoeingMensSlalomC1:
                    handler->string_value("CanoeingMensSlalomC1");
                    break;
                case Value_CanoeingMensSlalomC2:
                    handler->string_value("CanoeingMensSlalomC2");
                    break;
                case Value_CanoeingMensSlalomK1:
                    handler->string_value("CanoeingMensSlalomK1");
                    break;
                case Value_CanoeingMensSprintC1200M:
                    handler->string_value("CanoeingMensSprintC1200M");
                    break;
                case Value_CanoeingMensSprintC1500M:
                    handler->string_value("CanoeingMensSprintC1500M");
                    break;
                case Value_CanoeingMensSprintC11000M:
                    handler->string_value("CanoeingMensSprintC11000M");
                    break;
                case Value_CanoeingMensSprintC2500M:
                    handler->string_value("CanoeingMensSprintC2500M");
                    break;
                case Value_CanoeingMensSprintC21000M:
                    handler->string_value("CanoeingMensSprintC21000M");
                    break;
                case Value_CanoeingMensSprintK1200M:
                    handler->string_value("CanoeingMensSprintK1200M");
                    break;
                case Value_CanoeingMensSprintK1500M:
                    handler->string_value("CanoeingMensSprintK1500M");
                    break;
                case Value_CanoeingMensSprintK11000M:
                    handler->string_value("CanoeingMensSprintK11000M");
                    break;
                case Value_CanoeingMensSprintK2200M:
                    handler->string_value("CanoeingMensSprintK2200M");
                    break;
                case Value_CanoeingMensSprintK2500M:
                    handler->string_value("CanoeingMensSprintK2500M");
                    break;
                case Value_CanoeingMensSprintK21000M:
                    handler->string_value("CanoeingMensSprintK21000M");
                    break;
                case Value_CanoeingMensSprintK41000M:
                    handler->string_value("CanoeingMensSprintK41000M");
                    break;
                case Value_CanoeingWomensSlalomK1:
                    handler->string_value("CanoeingWomensSlalomK1");
                    break;
                case Value_CanoeingWomensSprintK1200M:
                    handler->string_value("CanoeingWomensSprintK1200M");
                    break;
                case Value_CanoeingWomensSprintK1500M:
                    handler->string_value("CanoeingWomensSprintK1500M");
                    break;
                case Value_CanoeingWomensSprintK2500M:
                    handler->string_value("CanoeingWomensSprintK2500M");
                    break;
                case Value_CanoeingWomensSprintK4500M:
                    handler->string_value("CanoeingWomensSprintK4500M");
                    break;
                case Value_CyclingMensRoadCyclingRoadRace:
                    handler->string_value("CyclingMensRoadCyclingRoadRace");
                    break;
                case Value_CyclingMensRoadCyclingTimeTrial:
                    handler->string_value("CyclingMensRoadCyclingTimeTrial");
                    break;
                case Value_CyclingMensRoadCyclingTeamTimeTrial:
                    handler->string_value("CyclingMensRoadCyclingTeamTimeTrial");
                    break;
                case Value_CyclingMensTrackCyclingKeirin:
                    handler->string_value("CyclingMensTrackCyclingKeirin");
                    break;
                case Value_CyclingMensTrackCyclingMadison:
                    handler->string_value("CyclingMensTrackCyclingMadison");
                    break;
                case Value_CyclingMensTrackCyclingOmnium:
                    handler->string_value("CyclingMensTrackCyclingOmnium");
                    break;
                case Value_CyclingMensTrackCyclingPointsRace:
                    handler->string_value("CyclingMensTrackCyclingPointsRace");
                    break;
                case Value_CyclingMensTrackCyclingIndividualPursuit:
                    handler->string_value("CyclingMensTrackCyclingIndividualPursuit");
                    break;
                case Value_CyclingMensTrackCyclingTeamPursuit:
                    handler->string_value("CyclingMensTrackCyclingTeamPursuit");
                    break;
                case Value_CyclingMensTrackCyclingIndividualSprint:
                    handler->string_value("CyclingMensTrackCyclingIndividualSprint");
                    break;
                case Value_CyclingMensTrackCyclingTeamSprint:
                    handler->string_value("CyclingMensTrackCyclingTeamSprint");
                    break;
                case Value_CyclingMensTrackCyclingTimeTrial:
                    handler->string_value("CyclingMensTrackCyclingTimeTrial");
                    break;
                case Value_CyclingMensMountainBikingCrossCountry:
                    handler->string_value("CyclingMensMountainBikingCrossCountry");
                    break;
                case Value_CyclingMensBMX:
                    handler->string_value("CyclingMensBMX");
                    break;
                case Value_CyclingWomensRoadCyclingRoadRace:
                    handler->string_value("CyclingWomensRoadCyclingRoadRace");
                    break;
                case Value_CyclingWomensRoadCyclingTimeTrial:
                    handler->string_value("CyclingWomensRoadCyclingTimeTrial");
                    break;
                case Value_CyclingWomensTrackCyclingKeirin:
                    handler->string_value("CyclingWomensTrackCyclingKeirin");
                    break;
                case Value_CyclingWomensTrackCyclingMadison:
                    handler->string_value("CyclingWomensTrackCyclingMadison");
                    break;
                case Value_CyclingWomensTrackCyclingOmnium:
                    handler->string_value("CyclingWomensTrackCyclingOmnium");
                    break;
                case Value_CyclingWomensTrackCyclingPointsRace:
                    handler->string_value("CyclingWomensTrackCyclingPointsRace");
                    break;
                case Value_CyclingWomensTrackCyclingIndividualPursuit:
                    handler->string_value("CyclingWomensTrackCyclingIndividualPursuit");
                    break;
                case Value_CyclingWomensTrackCyclingTeamPursuit:
                    handler->string_value("CyclingWomensTrackCyclingTeamPursuit");
                    break;
                case Value_CyclingWomensTrackCyclingIndividualSprint:
                    handler->string_value("CyclingWomensTrackCyclingIndividualSprint");
                    break;
                case Value_CyclingWomensTrackCyclingTeamSprint:
                    handler->string_value("CyclingWomensTrackCyclingTeamSprint");
                    break;
                case Value_CyclingWomensTrackCyclingTimeTrial:
                    handler->string_value("CyclingWomensTrackCyclingTimeTrial");
                    break;
                case Value_CyclingWomensMountainBikingCrossCountry:
                    handler->string_value("CyclingWomensMountainBikingCrossCountry");
                    break;
                case Value_CyclingWomensBMX:
                    handler->string_value("CyclingWomensBMX");
                    break;
                case Value_DivingMensSpringboard:
                    handler->string_value("DivingMensSpringboard");
                    break;
                case Value_DivingMensPlatform:
                    handler->string_value("DivingMensPlatform");
                    break;
                case Value_DivingMensSynchronizedSpringboard:
                    handler->string_value("DivingMensSynchronizedSpringboard");
                    break;
                case Value_DivingMensSynchronizedPlatform:
                    handler->string_value("DivingMensSynchronizedPlatform");
                    break;
                case Value_DivingWomensSpringboard:
                    handler->string_value("DivingWomensSpringboard");
                    break;
                case Value_DivingWomensPlatform:
                    handler->string_value("DivingWomensPlatform");
                    break;
                case Value_DivingWomensSynchronizedSpringboard:
                    handler->string_value("DivingWomensSynchronizedSpringboard");
                    break;
                case Value_DivingWomensSynchronizedPlatform:
                    handler->string_value("DivingWomensSynchronizedPlatform");
                    break;
                case Value_EquestrianIndividualDressage:
                    handler->string_value("EquestrianIndividualDressage");
                    break;
                case Value_EquestrianTeamDressage:
                    handler->string_value("EquestrianTeamDressage");
                    break;
                case Value_EquestrianIndividualEventing:
                    handler->string_value("EquestrianIndividualEventing");
                    break;
                case Value_EquestrianTeamEventing:
                    handler->string_value("EquestrianTeamEventing");
                    break;
                case Value_EquestrianIndividualJumping:
                    handler->string_value("EquestrianIndividualJumping");
                    break;
                case Value_EquestrianTeamJumping:
                    handler->string_value("EquestrianTeamJumping");
                    break;
                case Value_FencingMensIndividualEpee:
                    handler->string_value("FencingMensIndividualEpee");
                    break;
                case Value_FencingMensTeamEpee:
                    handler->string_value("FencingMensTeamEpee");
                    break;
                case Value_FencingMensIndividualFoil:
                    handler->string_value("FencingMensIndividualFoil");
                    break;
                case Value_FencingMensTeamFoil:
                    handler->string_value("FencingMensTeamFoil");
                    break;
                case Value_FencingMensIndividualSabre:
                    handler->string_value("FencingMensIndividualSabre");
                    break;
                case Value_FencingMensTeamSabre:
                    handler->string_value("FencingMensTeamSabre");
                    break;
                case Value_FencingWomensIndividualEpee:
                    handler->string_value("FencingWomensIndividualEpee");
                    break;
                case Value_FencingWomensTeamEpee:
                    handler->string_value("FencingWomensTeamEpee");
                    break;
                case Value_FencingWomensIndividualFoil:
                    handler->string_value("FencingWomensIndividualFoil");
                    break;
                case Value_FencingWomensTeamFoil:
                    handler->string_value("FencingWomensTeamFoil");
                    break;
                case Value_FencingWomensIndividualSabre:
                    handler->string_value("FencingWomensIndividualSabre");
                    break;
                case Value_FencingWomensTeamSabre:
                    handler->string_value("FencingWomensTeamSabre");
                    break;
                case Value_FieldHockeyMens:
                    handler->string_value("FieldHockeyMens");
                    break;
                case Value_FieldHockeyWomens:
                    handler->string_value("FieldHockeyWomens");
                    break;
                case Value_FootballMens:
                    handler->string_value("FootballMens");
                    break;
                case Value_FootballWomens:
                    handler->string_value("FootballWomens");
                    break;
                case Value_GolfMensIndividual:
                    handler->string_value("GolfMensIndividual");
                    break;
                case Value_GolfWomensIndividual:
                    handler->string_value("GolfWomensIndividual");
                    break;
                case Value_GymnasticsMensArtisticTeamAllAround:
                    handler->string_value("GymnasticsMensArtisticTeamAllAround");
                    break;
                case Value_GymnasticsMensArtisticIndividualAllAround:
                    handler->string_value("GymnasticsMensArtisticIndividualAllAround");
                    break;
                case Value_GymnasticsMensArtisticFloorExercise:
                    handler->string_value("GymnasticsMensArtisticFloorExercise");
                    break;
                case Value_GymnasticsMensArtisticHorizontalBar:
                    handler->string_value("GymnasticsMensArtisticHorizontalBar");
                    break;
                case Value_GymnasticsMensArtisticParallelBars:
                    handler->string_value("GymnasticsMensArtisticParallelBars");
                    break;
                case Value_GymnasticsMensArtisticPommelHorse:
                    handler->string_value("GymnasticsMensArtisticPommelHorse");
                    break;
                case Value_GymnasticsMensArtisticRings:
                    handler->string_value("GymnasticsMensArtisticRings");
                    break;
                case Value_GymnasticsMensArtisticVault:
                    handler->string_value("GymnasticsMensArtisticVault");
                    break;
                case Value_GymnasticsMensTrampolineIndividual:
                    handler->string_value("GymnasticsMensTrampolineIndividual");
                    break;
                case Value_GymnasticsWomensArtisticTeamAllAround:
                    handler->string_value("GymnasticsWomensArtisticTeamAllAround");
                    break;
                case Value_GymnasticsWomensArtisticIndividualAllAround:
                    handler->string_value("GymnasticsWomensArtisticIndividualAllAround");
                    break;
                case Value_GymnasticsWomensArtisticBalanceBeam:
                    handler->string_value("GymnasticsWomensArtisticBalanceBeam");
                    break;
                case Value_GymnasticsWomensArtisticFloorExercise:
                    handler->string_value("GymnasticsWomensArtisticFloorExercise");
                    break;
                case Value_GymnasticsWomensArtisticUnevenBars:
                    handler->string_value("GymnasticsWomensArtisticUnevenBars");
                    break;
                case Value_GymnasticsWomensArtisticVault:
                    handler->string_value("GymnasticsWomensArtisticVault");
                    break;
                case Value_GymnasticsWomensRhythmicIndividualAllAround:
                    handler->string_value("GymnasticsWomensRhythmicIndividualAllAround");
                    break;
                case Value_GymnasticsWomensRhythmicGroupAllAround:
                    handler->string_value("GymnasticsWomensRhythmicGroupAllAround");
                    break;
                case Value_GymnasticsWomensTrampolineIndividual:
                    handler->string_value("GymnasticsWomensTrampolineIndividual");
                    break;
                case Value_HandballMens:
                    handler->string_value("HandballMens");
                    break;
                case Value_HandballWomens:
                    handler->string_value("HandballWomens");
                    break;
                case Value_JudoMensExtraLightweight:
                    handler->string_value("JudoMensExtraLightweight");
                    break;
                case Value_JudoMensHalfLightweight:
                    handler->string_value("JudoMensHalfLightweight");
                    break;
                case Value_JudoMensLightweight:
                    handler->string_value("JudoMensLightweight");
                    break;
                case Value_JudoMensHalfMiddleweight:
                    handler->string_value("JudoMensHalfMiddleweight");
                    break;
                case Value_JudoMensMiddleweight:
                    handler->string_value("JudoMensMiddleweight");
                    break;
                case Value_JudoMensHalfHeavyweight:
                    handler->string_value("JudoMensHalfHeavyweight");
                    break;
                case Value_JudoMensHeavyweight:
                    handler->string_value("JudoMensHeavyweight");
                    break;
                case Value_JudoWomensExtraLightweight:
                    handler->string_value("JudoWomensExtraLightweight");
                    break;
                case Value_JudoWomensHalfLightweight:
                    handler->string_value("JudoWomensHalfLightweight");
                    break;
                case Value_JudoWomensLightweight:
                    handler->string_value("JudoWomensLightweight");
                    break;
                case Value_JudoWomensHalfMiddleweight:
                    handler->string_value("JudoWomensHalfMiddleweight");
                    break;
                case Value_JudoWomensMiddleweight:
                    handler->string_value("JudoWomensMiddleweight");
                    break;
                case Value_JudoWomensHalfHeavyweight:
                    handler->string_value("JudoWomensHalfHeavyweight");
                    break;
                case Value_JudoWomensHeavyweight:
                    handler->string_value("JudoWomensHeavyweight");
                    break;
                case Value_ModernPentathlonMens:
                    handler->string_value("ModernPentathlonMens");
                    break;
                case Value_ModernPentathlonWomens:
                    handler->string_value("ModernPentathlonWomens");
                    break;
                case Value_RowingMensSingleSculls:
                    handler->string_value("RowingMensSingleSculls");
                    break;
                case Value_RowingMensDoubleSculls:
                    handler->string_value("RowingMensDoubleSculls");
                    break;
                case Value_RowingMensQuadrupleSculls:
                    handler->string_value("RowingMensQuadrupleSculls");
                    break;
                case Value_RowingMensCoxlessPair:
                    handler->string_value("RowingMensCoxlessPair");
                    break;
                case Value_RowingMensCoxedPair:
                    handler->string_value("RowingMensCoxedPair");
                    break;
                case Value_RowingMensCoxlessFour:
                    handler->string_value("RowingMensCoxlessFour");
                    break;
                case Value_RowingMensCoxedFour:
                    handler->string_value("RowingMensCoxedFour");
                    break;
                case Value_RowingMensCoxedEight:
                    handler->string_value("RowingMensCoxedEight");
                    break;
                case Value_RowingMensLightweightDoubleSculls:
                    handler->string_value("RowingMensLightweightDoubleSculls");
                    break;
                case Value_RowingMensLightweightCoxlessFour:
                    handler->string_value("RowingMensLightweightCoxlessFour");
                    break;
                case Value_RowingWomensSingleSculls:
                    handler->string_value("RowingWomensSingleSculls");
                    break;
                case Value_RowingWomensDoubleSculls:
                    handler->string_value("RowingWomensDoubleSculls");
                    break;
                case Value_RowingWomensQuadrupleSculls:
                    handler->string_value("RowingWomensQuadrupleSculls");
                    break;
                case Value_RowingWomensCoxlessPair:
                    handler->string_value("RowingWomensCoxlessPair");
                    break;
                case Value_RowingWomensCoxedFour:
                    handler->string_value("RowingWomensCoxedFour");
                    break;
                case Value_RowingWomensCoxedEight:
                    handler->string_value("RowingWomensCoxedEight");
                    break;
                case Value_RowingWomensLightweightDoubleSculls:
                    handler->string_value("RowingWomensLightweightDoubleSculls");
                    break;
                case Value_RugbyMens:
                    handler->string_value("RugbyMens");
                    break;
                case Value_RugbyWomens:
                    handler->string_value("RugbyWomens");
                    break;
                case Value_SailingMensRSX:
                    handler->string_value("SailingMensRSX");
                    break;
                case Value_SailingMensLaser:
                    handler->string_value("SailingMensLaser");
                    break;
                case Value_SailingMensFinn:
                    handler->string_value("SailingMensFinn");
                    break;
                case Value_SailingMens470:
                    handler->string_value("SailingMens470");
                    break;
                case Value_SailingMens49erFX:
                    handler->string_value("SailingMens49erFX");
                    break;
                case Value_SailingMensStar:
                    handler->string_value("SailingMensStar");
                    break;
                case Value_SailingWomensRSX:
                    handler->string_value("SailingWomensRSX");
                    break;
                case Value_SailingWomensLaser:
                    handler->string_value("SailingWomensLaser");
                    break;
                case Value_SailingWomens470:
                    handler->string_value("SailingWomens470");
                    break;
                case Value_SailingWomens49erFX:
                    handler->string_value("SailingWomens49erFX");
                    break;
                case Value_SailingWomensElliott6M:
                    handler->string_value("SailingWomensElliott6M");
                    break;
                case Value_SailingWomensYngling:
                    handler->string_value("SailingWomensYngling");
                    break;
                case Value_SailingMixedNacra17:
                    handler->string_value("SailingMixedNacra17");
                    break;
                case Value_SailingMixed49erFX:
                    handler->string_value("SailingMixed49erFX");
                    break;
                case Value_SailingMixedFinn:
                    handler->string_value("SailingMixedFinn");
                    break;
                case Value_SailingMixedTornado:
                    handler->string_value("SailingMixedTornado");
                    break;
                case Value_ShootingMensAirPistol10M:
                    handler->string_value("ShootingMensAirPistol10M");
                    break;
                case Value_ShootingMensAirRifle10M:
                    handler->string_value("ShootingMensAirRifle10M");
                    break;
                case Value_ShootingMensRapidFirePistol25M:
                    handler->string_value("ShootingMensRapidFirePistol25M");
                    break;
                case Value_ShootingMensPistol50M:
                    handler->string_value("ShootingMensPistol50M");
                    break;
                case Value_ShootingMensRifleProne50M:
                    handler->string_value("ShootingMensRifleProne50M");
                    break;
                case Value_ShootingMensRifleThreePositions50M:
                    handler->string_value("ShootingMensRifleThreePositions50M");
                    break;
                case Value_ShootingMensSkeet:
                    handler->string_value("ShootingMensSkeet");
                    break;
                case Value_ShootingMensTrap:
                    handler->string_value("ShootingMensTrap");
                    break;
                case Value_ShootingMensDoubleTrap:
                    handler->string_value("ShootingMensDoubleTrap");
                    break;
                case Value_ShootingMens10MRunningTarget:
                    handler->string_value("ShootingMens10MRunningTarget");
                    break;
                case Value_ShootingWomensAirPistol10M:
                    handler->string_value("ShootingWomensAirPistol10M");
                    break;
                case Value_ShootingWomensAirRifle10M:
                    handler->string_value("ShootingWomensAirRifle10M");
                    break;
                case Value_ShootingWomensPistol25M:
                    handler->string_value("ShootingWomensPistol25M");
                    break;
                case Value_ShootingWomensRifleThreePositions50M:
                    handler->string_value("ShootingWomensRifleThreePositions50M");
                    break;
                case Value_ShootingWomensSkeet:
                    handler->string_value("ShootingWomensSkeet");
                    break;
                case Value_ShootingWomensTrap:
                    handler->string_value("ShootingWomensTrap");
                    break;
                case Value_ShootingWomensDoubleTrap:
                    handler->string_value("ShootingWomensDoubleTrap");
                    break;
                case Value_SoftballWomens:
                    handler->string_value("SoftballWomens");
                    break;
                case Value_SwimmingMensFreestyle50M:
                    handler->string_value("SwimmingMensFreestyle50M");
                    break;
                case Value_SwimmingMensFreestyle100M:
                    handler->string_value("SwimmingMensFreestyle100M");
                    break;
                case Value_SwimmingMensFreestyle200M:
                    handler->string_value("SwimmingMensFreestyle200M");
                    break;
                case Value_SwimmingMensFreestyle400M:
                    handler->string_value("SwimmingMensFreestyle400M");
                    break;
                case Value_SwimmingMensFreestyle1500M:
                    handler->string_value("SwimmingMensFreestyle1500M");
                    break;
                case Value_SwimmingMensBackstroke100M:
                    handler->string_value("SwimmingMensBackstroke100M");
                    break;
                case Value_SwimmingMensBackstroke200M:
                    handler->string_value("SwimmingMensBackstroke200M");
                    break;
                case Value_SwimmingMensBreaststroke100M:
                    handler->string_value("SwimmingMensBreaststroke100M");
                    break;
                case Value_SwimmingMensBreaststroke200M:
                    handler->string_value("SwimmingMensBreaststroke200M");
                    break;
                case Value_SwimmingMensButterfly100M:
                    handler->string_value("SwimmingMensButterfly100M");
                    break;
                case Value_SwimmingMensButterfly200M:
                    handler->string_value("SwimmingMensButterfly200M");
                    break;
                case Value_SwimmingMensIndividualMedley200M:
                    handler->string_value("SwimmingMensIndividualMedley200M");
                    break;
                case Value_SwimmingMensIndividualMedley400M:
                    handler->string_value("SwimmingMensIndividualMedley400M");
                    break;
                case Value_SwimmingMens4X100MFreestyleRelay:
                    handler->string_value("SwimmingMens4X100MFreestyleRelay");
                    break;
                case Value_SwimmingMens4X200MFreestyleRelay:
                    handler->string_value("SwimmingMens4X200MFreestyleRelay");
                    break;
                case Value_SwimmingMens4X100MMedleyRelay:
                    handler->string_value("SwimmingMens4X100MMedleyRelay");
                    break;
                case Value_SwimmingMensOpenWater10KM:
                    handler->string_value("SwimmingMensOpenWater10KM");
                    break;
                case Value_SwimmingWomensFreestyle50M:
                    handler->string_value("SwimmingWomensFreestyle50M");
                    break;
                case Value_SwimmingWomensFreestyle100M:
                    handler->string_value("SwimmingWomensFreestyle100M");
                    break;
                case Value_SwimmingWomensFreestyle200M:
                    handler->string_value("SwimmingWomensFreestyle200M");
                    break;
                case Value_SwimmingWomensFreestyle400M:
                    handler->string_value("SwimmingWomensFreestyle400M");
                    break;
                case Value_SwimmingWomensFreestyle800M:
                    handler->string_value("SwimmingWomensFreestyle800M");
                    break;
                case Value_SwimmingWomensBackstroke100M:
                    handler->string_value("SwimmingWomensBackstroke100M");
                    break;
                case Value_SwimmingWomensBackstroke200M:
                    handler->string_value("SwimmingWomensBackstroke200M");
                    break;
                case Value_SwimmingWomensBreaststroke100M:
                    handler->string_value("SwimmingWomensBreaststroke100M");
                    break;
                case Value_SwimmingWomensBreaststroke200M:
                    handler->string_value("SwimmingWomensBreaststroke200M");
                    break;
                case Value_SwimmingWomensButterfly100M:
                    handler->string_value("SwimmingWomensButterfly100M");
                    break;
                case Value_SwimmingWomensButterfly200M:
                    handler->string_value("SwimmingWomensButterfly200M");
                    break;
                case Value_SwimmingWomensIndividualMedley200M:
                    handler->string_value("SwimmingWomensIndividualMedley200M");
                    break;
                case Value_SwimmingWomensindividualMedley400M:
                    handler->string_value("SwimmingWomensindividualMedley400M");
                    break;
                case Value_SwimmingWomens4X100MFreestyleRelay:
                    handler->string_value("SwimmingWomens4X100MFreestyleRelay");
                    break;
                case Value_SwimmingWomens4X200MFreestyleRelay:
                    handler->string_value("SwimmingWomens4X200MFreestyleRelay");
                    break;
                case Value_SwimmingWomens4X100MMedleyRelay:
                    handler->string_value("SwimmingWomens4X100MMedleyRelay");
                    break;
                case Value_SwimmingWomensOpenWater10KM:
                    handler->string_value("SwimmingWomensOpenWater10KM");
                    break;
                case Value_SynchronizedSwimmingWomensDuet:
                    handler->string_value("SynchronizedSwimmingWomensDuet");
                    break;
                case Value_SynchronizedSwimmingWomensTeam:
                    handler->string_value("SynchronizedSwimmingWomensTeam");
                    break;
                case Value_SynchronizedSwimmingWomensSolo:
                    handler->string_value("SynchronizedSwimmingWomensSolo");
                    break;
                case Value_TableTennisMensSingles:
                    handler->string_value("TableTennisMensSingles");
                    break;
                case Value_TableTennisMensTeam:
                    handler->string_value("TableTennisMensTeam");
                    break;
                case Value_TableTennisWomensSingles:
                    handler->string_value("TableTennisWomensSingles");
                    break;
                case Value_TableTennisWomensTeam:
                    handler->string_value("TableTennisWomensTeam");
                    break;
                case Value_TaekwondoMensFlyweight:
                    handler->string_value("TaekwondoMensFlyweight");
                    break;
                case Value_TaekwondoMensFeatherweight:
                    handler->string_value("TaekwondoMensFeatherweight");
                    break;
                case Value_TaekwondoMensWelterweight:
                    handler->string_value("TaekwondoMensWelterweight");
                    break;
                case Value_TaekwondoMensHeavyweight:
                    handler->string_value("TaekwondoMensHeavyweight");
                    break;
                case Value_TaekwondoWomensFlyweight:
                    handler->string_value("TaekwondoWomensFlyweight");
                    break;
                case Value_TaekwondoWomensFeatherweight:
                    handler->string_value("TaekwondoWomensFeatherweight");
                    break;
                case Value_TaekwondoWomensWelterweight:
                    handler->string_value("TaekwondoWomensWelterweight");
                    break;
                case Value_TaekwondoWomensHeavyweight:
                    handler->string_value("TaekwondoWomensHeavyweight");
                    break;
                case Value_TennisMensSingles:
                    handler->string_value("TennisMensSingles");
                    break;
                case Value_TennisMensDoubles:
                    handler->string_value("TennisMensDoubles");
                    break;
                case Value_TennisWomensSingles:
                    handler->string_value("TennisWomensSingles");
                    break;
                case Value_TennisWomensDoubles:
                    handler->string_value("TennisWomensDoubles");
                    break;
                case Value_TennisMixedDoubles:
                    handler->string_value("TennisMixedDoubles");
                    break;
                case Value_TriathlonMensIndividual:
                    handler->string_value("TriathlonMensIndividual");
                    break;
                case Value_TriathlonWomensIndividual:
                    handler->string_value("TriathlonWomensIndividual");
                    break;
                case Value_VolleyballMensIndoor:
                    handler->string_value("VolleyballMensIndoor");
                    break;
                case Value_VolleyballMensBeach:
                    handler->string_value("VolleyballMensBeach");
                    break;
                case Value_VolleyballWomensIndoor:
                    handler->string_value("VolleyballWomensIndoor");
                    break;
                case Value_VolleyballWomensBeach:
                    handler->string_value("VolleyballWomensBeach");
                    break;
                case Value_WaterPoloMens:
                    handler->string_value("WaterPoloMens");
                    break;
                case Value_WaterPoloWomens:
                    handler->string_value("WaterPoloWomens");
                    break;
                case Value_WeightliftingMensFlyweight:
                    handler->string_value("WeightliftingMensFlyweight");
                    break;
                case Value_WeightliftingMensBantamweight:
                    handler->string_value("WeightliftingMensBantamweight");
                    break;
                case Value_WeightliftingMensFeatherweight:
                    handler->string_value("WeightliftingMensFeatherweight");
                    break;
                case Value_WeightliftingMensLightweight:
                    handler->string_value("WeightliftingMensLightweight");
                    break;
                case Value_WeightliftingMensMiddleweight:
                    handler->string_value("WeightliftingMensMiddleweight");
                    break;
                case Value_WeightliftingMensLightHeavyweight:
                    handler->string_value("WeightliftingMensLightHeavyweight");
                    break;
                case Value_WeightliftingMensMiddleHeavyweight:
                    handler->string_value("WeightliftingMensMiddleHeavyweight");
                    break;
                case Value_WeightliftingMensFirstHeavyweight:
                    handler->string_value("WeightliftingMensFirstHeavyweight");
                    break;
                case Value_WeightliftingMensHeavyweight:
                    handler->string_value("WeightliftingMensHeavyweight");
                    break;
                case Value_WeightliftingMensSuperHeavyweight:
                    handler->string_value("WeightliftingMensSuperHeavyweight");
                    break;
                case Value_WeightliftingWomensFlyweight:
                    handler->string_value("WeightliftingWomensFlyweight");
                    break;
                case Value_WeightliftingWomensFeatherweight:
                    handler->string_value("WeightliftingWomensFeatherweight");
                    break;
                case Value_WeightliftingWomensLightweight:
                    handler->string_value("WeightliftingWomensLightweight");
                    break;
                case Value_WeightliftingWomensMiddleweight:
                    handler->string_value("WeightliftingWomensMiddleweight");
                    break;
                case Value_WeightliftingWomensLightHeavyweight:
                    handler->string_value("WeightliftingWomensLightHeavyweight");
                    break;
                case Value_WeightliftingWomensHeavyweight:
                    handler->string_value("WeightliftingWomensHeavyweight");
                    break;
                case Value_WeightliftingWomensSuperHeavyweight:
                    handler->string_value("WeightliftingWomensSuperHeavyweight");
                    break;
                case Value_WrestlingMensGrecoRomanLightFlyweight:
                    handler->string_value("WrestlingMensGrecoRomanLightFlyweight");
                    break;
                case Value_WrestlingMensGrecoRomanFlyweight:
                    handler->string_value("WrestlingMensGrecoRomanFlyweight");
                    break;
                case Value_WrestlingMensGrecoRomanBantamweight:
                    handler->string_value("WrestlingMensGrecoRomanBantamweight");
                    break;
                case Value_WrestlingMensGrecoRomanFeatherweight:
                    handler->string_value("WrestlingMensGrecoRomanFeatherweight");
                    break;
                case Value_WrestlingMensGrecoRomanLightweight:
                    handler->string_value("WrestlingMensGrecoRomanLightweight");
                    break;
                case Value_WrestlingMensGrecoRomanWelterweight:
                    handler->string_value("WrestlingMensGrecoRomanWelterweight");
                    break;
                case Value_WrestlingMensGrecoRomanMiddleweight:
                    handler->string_value("WrestlingMensGrecoRomanMiddleweight");
                    break;
                case Value_WrestlingMensGrecoRomanLightHeavyweight:
                    handler->string_value("WrestlingMensGrecoRomanLightHeavyweight");
                    break;
                case Value_WrestlingMensGrecoRomanHeavyweight:
                    handler->string_value("WrestlingMensGrecoRomanHeavyweight");
                    break;
                case Value_WrestlingMensGrecoRomanSuperHeavyweight:
                    handler->string_value("WrestlingMensGrecoRomanSuperHeavyweight");
                    break;
                case Value_WrestlingMensFreestyleLightFlyweight:
                    handler->string_value("WrestlingMensFreestyleLightFlyweight");
                    break;
                case Value_WrestlingMensFreestyleFlyweight:
                    handler->string_value("WrestlingMensFreestyleFlyweight");
                    break;
                case Value_WrestlingMensFreestyleBantamweight:
                    handler->string_value("WrestlingMensFreestyleBantamweight");
                    break;
                case Value_WrestlingMensFreestyleFeatherweight:
                    handler->string_value("WrestlingMensFreestyleFeatherweight");
                    break;
                case Value_WrestlingMensFreestyleLightweight:
                    handler->string_value("WrestlingMensFreestyleLightweight");
                    break;
                case Value_WrestlingMensFreestyleWelterweight:
                    handler->string_value("WrestlingMensFreestyleWelterweight");
                    break;
                case Value_WrestlingMensFreestyleMiddleweight:
                    handler->string_value("WrestlingMensFreestyleMiddleweight");
                    break;
                case Value_WrestlingMensFreestyleLightHeavyweight:
                    handler->string_value("WrestlingMensFreestyleLightHeavyweight");
                    break;
                case Value_WrestlingMensFreestyleHeavyweight:
                    handler->string_value("WrestlingMensFreestyleHeavyweight");
                    break;
                case Value_WrestlingMensFreestyleSuperHeavyweight:
                    handler->string_value("WrestlingMensFreestyleSuperHeavyweight");
                    break;
                case Value_WrestlingWomensFreestyleFlyweight:
                    handler->string_value("WrestlingWomensFreestyleFlyweight");
                    break;
                case Value_WrestlingWomensFreestyleBantamweight:
                    handler->string_value("WrestlingWomensFreestyleBantamweight");
                    break;
                case Value_WrestlingWomensFreestyleLightweight:
                    handler->string_value("WrestlingWomensFreestyleLightweight");
                    break;
                case Value_WrestlingWomensFreestyleMiddleweight:
                    handler->string_value("WrestlingWomensFreestyleMiddleweight");
                    break;
                case Value_WrestlingWomensFreestyleWelterweight:
                    handler->string_value("WrestlingWomensFreestyleWelterweight");
                    break;
                case Value_WrestlingWomensFreestyleLightHeavyweight:
                    handler->string_value("WrestlingWomensFreestyleLightHeavyweight");
                    break;
                case Value_WrestlingWomensFreestyleHeavyweight:
                    handler->string_value("WrestlingWomensFreestyleHeavyweight");
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

    static SportsOlympicsEventJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventJSON>, SportsOlympicsEventJSON *, bool> generator("Type SportsOlympicsEvent", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventJSON>, SportsOlympicsEventJSON *, bool> generator("Type SportsOlympicsEvent", ignore_extras);
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
            SportsOlympicsEventJSON *result = new SportsOlympicsEventJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsOlympicsEventJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSOLYMPICSEVENTJSON_H */
