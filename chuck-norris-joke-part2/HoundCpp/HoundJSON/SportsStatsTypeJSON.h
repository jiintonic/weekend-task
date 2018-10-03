/* file "SportsStatsTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSTYPEJSON_H
#define SPORTSSTATSTYPEJSON_H

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


class SportsStatsTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_MLBBaserunningCaughtStealing,
        Value_MLBBaserunningPickoffs,
        Value_MLBBaserunningStolenBasePerc,
        Value_MLBBaserunningStolenBases,
        Value_MLBFieldingAssists,
        Value_MLBFieldingCompleteGames,
        Value_MLBFieldingDoublePlays,
        Value_MLBFieldingErrors,
        Value_MLBFieldingFieldingPercentage,
        Value_MLBFieldingGamesFinished,
        Value_MLBFieldingGamesPlayed,
        Value_MLBFieldingGamesStarted,
        Value_MLBFieldingPassedBalls,
        Value_MLBFieldingPutouts,
        Value_MLBFieldingRangeFactor,
        Value_MLBFieldingTotalChances,
        Value_MLBFieldingTriplePlays,
        Value_MLBHittingAtBats,
        Value_MLBHittingAtBatsPerHomeRun,
        Value_MLBHittingAtBatsPerStrikeout,
        Value_MLBHittingAtBatsWithRunnersInScoringPosition,
        Value_MLBHittingBalls,
        Value_MLBHittingBallsInPlay,
        Value_MLBHittingBattingAverage,
        Value_MLBHittingBattingAverageOnBallsInPlay,
        Value_MLBHittingCompleteGames,
        Value_MLBHittingCycles,
        Value_MLBHittingDirtBallsFaced,
        Value_MLBHittingDoubles,
        Value_MLBHittingEarnedRunsScored,
        Value_MLBHittingExtraBaseHits,
        Value_MLBHittingFieldersChoice,
        Value_MLBHittingFlyBalls,
        Value_MLBHittingFlyOuts,
        Value_MLBHittingFlyOutsIntoDoublePlays,
        Value_MLBHittingFoulBalls,
        Value_MLBHittingGamesFinished,
        Value_MLBHittingGamesPlayed,
        Value_MLBHittingGamesStarted,
        Value_MLBHittingGroundBallToFlyBallRatio,
        Value_MLBHittingGroundBalls,
        Value_MLBHittingGroundOuts,
        Value_MLBHittingGroundedIntoDoublePlay,
        Value_MLBHittingHitByPitch,
        Value_MLBHittingHits,
        Value_MLBHittingHitsWithRunnersInScoringPosition,
        Value_MLBHittingHomeRuns,
        Value_MLBHittingIntentionalBalls,
        Value_MLBHittingIntentionalWalks,
        Value_MLBHittingIsolatedPower,
        Value_MLBHittingLineDrives,
        Value_MLBHittingLineOuts,
        Value_MLBHittingLineOutsIntoDoublePlay,
        Value_MLBHittingOnBasePlusSluggingPerc,
        Value_MLBHittingOnBasePerc,
        Value_MLBHittingPitchesFaced,
        Value_MLBHittingPlateAppearances,
        Value_MLBHittingPopOuts,
        Value_MLBHittingPopUps,
        Value_MLBHittingReachedOnError,
        Value_MLBHittingRunnersLeftOnBase,
        Value_MLBHittingRunnersLeftOnBaseTwoOutsRunnersInScoringPosition,
        Value_MLBHittingRunsBattedIn,
        Value_MLBHittingRunsBattedInWithTwoOuts,
        Value_MLBHittingSacrificeFlys,
        Value_MLBHittingSacrificeHits,
        Value_MLBHittingSecondaryAverage,
        Value_MLBHittingSingles,
        Value_MLBHittingSluggingPerc,
        Value_MLBHittingStrikeoutsLooking,
        Value_MLBHittingStrikeoutsSwinging,
        Value_MLBHittingStrikesLooking,
        Value_MLBHittingStrikesSwinging,
        Value_MLBHittingTotalBases,
        Value_MLBHittingTotalRunsScored,
        Value_MLBHittingTotalStrikeouts,
        Value_MLBHittingTotalStrikes,
        Value_MLBHittingTriples,
        Value_MLBHittingUnearnedRunsScored,
        Value_MLBHittingWalks,
        Value_MLBHittingWalksPerPlaceAppearance,
        Value_MLBHittingWalksPerStrikeout,
        Value_MLBPitchingBalks,
        Value_MLBPitchingBalls,
        Value_MLBPitchingBattersFaced,
        Value_MLBPitchingBlownSaves,
        Value_MLBPitchingCompleteGames,
        Value_MLBPitchingDirtBallsThrown,
        Value_MLBPitchingDoublesAllowed,
        Value_MLBPitchingEarnedRunAverage,
        Value_MLBPitchingEarnedRunsAllowed,
        Value_MLBPitchingErrors,
        Value_MLBPitchingFieldersChoice,
        Value_MLBPitchingFlyOuts,
        Value_MLBPitchingFlyOutsIntoDoublePlays,
        Value_MLBPitchingFoulBalls,
        Value_MLBPitchingGamesFinished,
        Value_MLBPitchingGamesPlayed,
        Value_MLBPitchingGamesStarted,
        Value_MLBPitchingGroundBallToFlyBallRatio,
        Value_MLBPitchingGroundOuts,
        Value_MLBPitchingGroundOutsIntoDoublePlays,
        Value_MLBPitchingHitBatters,
        Value_MLBPitchingHitsAllowed,
        Value_MLBPitchingHolds,
        Value_MLBPitchingHomeRunsAllowed,
        Value_MLBPitchingInningsPitchedCompletePartial,
        Value_MLBPitchingInningsPitchedTotalOuts,
        Value_MLBPitchingIntentionalBalls,
        Value_MLBPitchingIntentionalWalks,
        Value_MLBPitchingLineOuts,
        Value_MLBPitchingLineOutsIntoDoublePlays,
        Value_MLBPitchingLosses,
        Value_MLBPitchingOpponentsBattingAverage,
        Value_MLBPitchingOpponentRunnersLeftOnBase,
        Value_MLBPitchingPickoffs,
        Value_MLBPitchingPitchCount,
        Value_MLBPitchingPopOutsForced,
        Value_MLBPitchingQualityStarts,
        Value_MLBPitchingReachedOnError,
        Value_MLBPitchingRunnersCaughtStealing,
        Value_MLBPitchingSacrificeFlys,
        Value_MLBPitchingSacrificeHits,
        Value_MLBPitchingSaveOpportunities,
        Value_MLBPitchingSaves,
        Value_MLBPitchingShutouts,
        Value_MLBPitchingSinglesAllowed,
        Value_MLBPitchingStolenBasesAllowed,
        Value_MLBPitchingStrikeoutsLooking,
        Value_MLBPitchingStrikeoutsPer9Innings,
        Value_MLBPitchingStrikeoutsPerWalk,
        Value_MLBPitchingStrikeoutsSwinging,
        Value_MLBPitchingStrikesLooking,
        Value_MLBPitchingStrikesSwinging,
        Value_MLBPitchingTotalBasesAllowed,
        Value_MLBPitchingTotalRunsAllowed,
        Value_MLBPitchingTotalStrikeouts,
        Value_MLBPitchingTotalStrikes,
        Value_MLBPitchingTriplesAllowed,
        Value_MLBPitchingUnearnedRunsAllowed,
        Value_MLBPitchingWalks,
        Value_MLBPitchingWalksPlusHitsPerInningPitched,
        Value_MLBPitchingWildPitches,
        Value_MLBPitchingWins,
        Value_NHLAssists,
        Value_NHLAssistsPerGame,
        Value_NHLAverageTimeOnIce,
        Value_NHLBlockedAttempts,
        Value_NHLBlockedAttemptsPerGame,
        Value_NHLBlockedShots,
        Value_NHLBlockedShotsPerGame,
        Value_NHLEvenStrengthAssists,
        Value_NHLEvenStrengthFaceoffWinPerc,
        Value_NHLEvenStrengthFaceoffs,
        Value_NHLEvenStrengthFaceoffsLost,
        Value_NHLEvenStrengthFaceoffsWon,
        Value_NHLEvenStrengthGoals,
        Value_NHLEvenStrengthMissedShots,
        Value_NHLEvenStrengthShotsOnGoal,
        Value_NHLEvenStrengthTimeOnIce,
        Value_NHLFaceoffWinPerc,
        Value_NHLFaceoffs,
        Value_NHLFaceoffsWon,
        Value_NHLFaceoffsLost,
        Value_NHLGameWinningGoalFlag,
        Value_NHLGameWinningGoals,
        Value_NHLGamesPlayed,
        Value_NHLGiveaways,
        Value_NHLGiveawaysPerGame,
        Value_NHLGoals,
        Value_NHLGoalsPerGame,
        Value_NHLHits,
        Value_NHLHitsPerGame,
        Value_NHLMissedShots,
        Value_NHLMissedShotsPerGame,
        Value_NHLPenalties,
        Value_NHLPenaltiesPerGame,
        Value_NHLPenaltyGoals,
        Value_NHLPenaltyMinutes,
        Value_NHLPenaltyMinutesPerGame,
        Value_NHLPenaltyMissedShots,
        Value_NHLPenaltyShotsOnGoal,
        Value_NHLPlusMinus,
        Value_NHLPoints,
        Value_NHLPointsPerGame,
        Value_NHLPowerPlayAssists,
        Value_NHLPowerPlayFaceoffWinPerc,
        Value_NHLPowerPlayFaceoffs,
        Value_NHLPowerPlayFaceoffsLost,
        Value_NHLPowerPlayFaceoffsWon,
        Value_NHLPowerPlayGoals,
        Value_NHLPowerPlayMissedShots,
        Value_NHLPowerPlayOpportunities,
        Value_NHLPowerPlayPoints,
        Value_NHLPowerPlayShotsOnGoal,
        Value_NHLPowerPlayTimeOnIce,
        Value_NHLScratches,
        Value_NHLShifts,
        Value_NHLShiftsPerGame,
        Value_NHLShootingPerc,
        Value_NHLShootoutGoals,
        Value_NHLShootoutMissedShots,
        Value_NHLShootoutShotsOnGoal,
        Value_NHLShortHandedAssists,
        Value_NHLShortHandedFaceoffWinPerc,
        Value_NHLShortHandedFaceoffs,
        Value_NHLShortHandedFaceoffsLost,
        Value_NHLShortHandedFaceoffsWon,
        Value_NHLShortHandedGoals,
        Value_NHLShortHandedMissedShots,
        Value_NHLShortHandedPoints,
        Value_NHLShortHandedShotsOnGoal,
        Value_NHLShortHandedTimeOnIce,
        Value_NHLShotsOnGoal,
        Value_NHLShotsOnGoalPerGame,
        Value_NHLTakeaways,
        Value_NHLTakeawaysPerGame,
        Value_NHLTeamPenalties,
        Value_NHLTeamPenaltiesPerGame,
        Value_NHLTeamPenaltyMinutes,
        Value_NHLTeamPenaltyMinutesPerGame,
        Value_NHLTotalTimeOnIce,
        Value_NHLTotalTimeOnIcePerGame,
        Value_NHLGoaltendingEmptyNetEvenStrengthGoalsAgainst,
        Value_NHLGoaltendingEmptyNetGoalsAgainst,
        Value_NHLGoaltendingEmptyNetPowerPlayGoalsAgainst,
        Value_NHLGoaltendingEmptyNetShortHandedGoalsAgainst,
        Value_NHLGoaltendingEmptyNetShotsAgainst,
        Value_NHLGoaltendingEvenStrengthGoalsAgainst,
        Value_NHLGoaltendingEvenStrengthSavePerc,
        Value_NHLGoaltendingEvenStrengthSaves,
        Value_NHLGoaltendingEvenStrengthShotsAgainst,
        Value_NHLGoaltendingGoalsAgainst,
        Value_NHLGoaltendingGoalsAgainstAverage,
        Value_NHLGoaltendingGoalsAgainstPerGame,
        Value_NHLGoaltendingLosses,
        Value_NHLGoaltendingOutcome,
        Value_NHLGoaltendingOvertimeLosses,
        Value_NHLGoaltendingPenaltyGoalsAgainst,
        Value_NHLGoaltendingPenaltySavePerc,
        Value_NHLGoaltendingPenaltySaves,
        Value_NHLGoaltendingPenaltyShotsAgainst,
        Value_NHLGoaltendingPowerPlayGoalsAgainst,
        Value_NHLGoaltendingPowerPlaySavePerc,
        Value_NHLGoaltendingPowerPlaySaves,
        Value_NHLGoaltendingPowerPlayShotsAgainst,
        Value_NHLGoaltendingSavePerc,
        Value_NHLGoaltendingSaves,
        Value_NHLGoaltendingShootoutGoalsAgainst,
        Value_NHLGoaltendingShootoutSavePerc,
        Value_NHLGoaltendingShootoutSaves,
        Value_NHLGoaltendingShootoutShotsAgainst,
        Value_NHLGoaltendingShortHandedGoalsAgainst,
        Value_NHLGoaltendingShortHandedSavePerc,
        Value_NHLGoaltendingShortHandedSaves,
        Value_NHLGoaltendingShortHandedShotsAgainst,
        Value_NHLGoaltendingShotsAgainst,
        Value_NHLGoaltendingShotsAgainstPerGame,
        Value_NHLGoaltendingShutoutFlag,
        Value_NHLGoaltendingShutouts,
        Value_NHLGoaltendingTotalGoalsAgainst,
        Value_NHLGoaltendingTotalShotsAgainst,
        Value_NHLGoaltendingWins,
        Value_NFL3rdDownConversionAttempts,
        Value_NFL3rdDownConversions,
        Value_NFL3rdDownConversionPerc,
        Value_NFL3rdDownConversionsViaPass,
        Value_NFL3rdDownConversionsViaPenalty,
        Value_NFL3rdDownConversionsViaRush,
        Value_NFL4thDownConversionAttempts,
        Value_NFL4thDownConversions,
        Value_NFL4thDownConversionPerc,
        Value_NFL4thDownConversionsViaPass,
        Value_NFL4thDownConversionsViaPenalty,
        Value_NFL4thDownConversionsViaRush,
        Value_NFLGamesPlayed,
        Value_NFLGamesStarted,
        Value_NFLGoalEfficiencyAttempts,
        Value_NFLGoalEfficiencyPerc,
        Value_NFLGoalEfficiencyTouchdowns,
        Value_NFLPassing10PlusYards,
        Value_NFLPassing20PlusYards,
        Value_NFLPassing30PlusYards,
        Value_NFLPassing40PlusYards,
        Value_NFLPassing50PlusYards,
        Value_NFLPassingAttempts,
        Value_NFLPassingAverageYardsPerCompletion,
        Value_NFLPassingAverageYardsPerAttempt,
        Value_NFLPassingCompletionPerc,
        Value_NFLPassingCompletions,
        Value_NFLPassing1stDowns,
        Value_NFLPassingGrossYards,
        Value_NFLPassingInterceptionPerc,
        Value_NFLPassingInterceptions,
        Value_NFLPassingInterceptionsReturnedForTouchdown,
        Value_NFLPassingLongestPass,
        Value_NFLPassingNetYards,
        Value_NFLPassingRating,
        Value_NFLPassingRedZoneAttempts,
        Value_NFLPassingSacked,
        Value_NFLPassingSackedYardsLost,
        Value_NFLPassingTackledForSafety,
        Value_NFLPassingTotalYards,
        Value_NFLPassingTouchdownPerc,
        Value_NFLPassingTouchdowns,
        Value_NFLReceiving10PlusYards,
        Value_NFLReceiving20PlusYards,
        Value_NFLReceiving30PlusYards,
        Value_NFLReceiving40PlusYards,
        Value_NFLReceiving50PlusYards,
        Value_NFLReceivingAverageReception,
        Value_NFLReceiving1stDowns,
        Value_NFLReceivingFumbledOnReception,
        Value_NFLReceivingLongestReception,
        Value_NFLReceivingReceptions,
        Value_NFLReceivingRedZoneTargets,
        Value_NFLReceivingTargets,
        Value_NFLReceivingTotalYards,
        Value_NFLReceivingTouchdowns,
        Value_NFLReceivingYardsAfterCompletion,
        Value_NFLRedZoneEfficiencyAttempts,
        Value_NFLRedZoneEfficiencyConversions,
        Value_NFLRedZoneEfficiencyPerc,
        Value_NFLRushing10PlusYards,
        Value_NFLRushing20PlusYards,
        Value_NFLRushing30PlusYards,
        Value_NFLRushing40PlusYards,
        Value_NFLRushing50PlusYards,
        Value_NFLRushingAttempts,
        Value_NFLRushingAverageRush,
        Value_NFLRushing1stDownPerc,
        Value_NFLRushing1stDowns,
        Value_NFLRushingFumbledOnRush,
        Value_NFLRushingLongestRush,
        Value_NFLRushingRedZoneAttempts,
        Value_NFLRushingTackledForSafety,
        Value_NFLRushingTotalYards,
        Value_NFLRushingTouchdowns,
        Value_NFL1stDowns,
        Value_NFL2PointConversionsAttempted,
        Value_NFL2PointConversionsFailed,
        Value_NFL2PointConversionsMade,
        Value_NFL2PointConversionsPassing,
        Value_NFL2PointConversionsReceiving,
        Value_NFL2PointConversionsRushing,
        Value_NFL1PointSafety,
        Value_NFLBlockedKicks,
        Value_NFLConversionAttempts,
        Value_NFLConversionsCompleted,
        Value_NFLConversionsFailed,
        Value_NFLForcedFumbles,
        Value_NFLFumblesRecovered,
        Value_NFLFumblesRecoveredForTouchdowns,
        Value_NFLInterceptions,
        Value_NFLInterceptionsLongestInterception,
        Value_NFLInterceptionsTouchdowns,
        Value_NFLInterceptionsYards,
        Value_NFLMiscAssistedTackles,
        Value_NFLMiscCombinedTackles,
        Value_NFLMiscForcedFumbles,
        Value_NFLMiscFumblesRecovered,
        Value_NFLMiscTackles,
        Value_NFLPassesDefended,
        Value_NFLQuarterbackHits,
        Value_NFLSacks,
        Value_NFLSackYards,
        Value_NFLSafeties,
        Value_NFLSpecialTeamsAssistedTackles,
        Value_NFLSpecialTeamsCombinedTackles,
        Value_NFLSpecialTeamsForcedFumbles,
        Value_NFLSpecialTeamsFumblesRecovered,
        Value_NFLSpecialTeamsTotalTackles,
        Value_NFLTacklesAssisted,
        Value_NFLTacklesCombined,
        Value_NFLTacklesForLoss,
        Value_NFLTackles,
        Value_NFLBlockedFieldGoalReturns10PlusYards,
        Value_NFLBlockedFieldGoalReturns20PlusYards,
        Value_NFLBlockedFieldGoalReturns30PlusYards,
        Value_NFLBlockedFieldGoalReturns40PlusYards,
        Value_NFLBlockedFieldGoalReturns50PlusYards,
        Value_NFLBlockedFieldGoalReturnsAverageReturn,
        Value_NFLBlockedFieldGoalReturnsLongestReturn,
        Value_NFLBlockedFieldGoalReturns,
        Value_NFLBlockedFieldGoalReturnsTotalYards,
        Value_NFLBlockedFieldGoalReturnsTouchdowns,
        Value_NFLBlockedPuntReturn10PlusYards,
        Value_NFLBlockedPuntReturn20PlusYards,
        Value_NFLBlockedPuntReturn30PlusYards,
        Value_NFLBlockedPuntReturn40PlusYards,
        Value_NFLBlockedPuntReturn50PlusYards,
        Value_NFLBlockedPuntReturnsAverageReturn,
        Value_NFLBlockedPuntReturnsLongestReturn,
        Value_NFLBlockedPuntReturns,
        Value_NFLBlockedPuntReturnsTotalYards,
        Value_NFLBlockedPuntReturnsTouchdowns,
        Value_NFLExtraPointsAttempted,
        Value_NFLExtraPointsAttemptedKicking,
        Value_NFLExtraPointsAttempted2PointConversion,
        Value_NFLExtraPointsBlocked,
        Value_NFLExtraPointsMade,
        Value_NFLExtraPointsMadeKicking,
        Value_NFLExtraPointsMade2PointConversion,
        Value_NFLExtraPointsPerc,
        Value_NFLFieldGoalReturns10PlusYards,
        Value_NFLFieldGoalReturns20PlusYards,
        Value_NFLFieldGoalReturns30PlusYards,
        Value_NFLFieldGoalReturns40PlusYards,
        Value_NFLFieldGoalReturns50PlusYards,
        Value_NFLFieldGoalReturnsAverageReturn,
        Value_NFLFieldGoalReturnsLongestReturn,
        Value_NFLFieldGoalReturns,
        Value_NFLFieldGoalReturnsTotalYards,
        Value_NFLFieldGoalReturnsTouchdowns,
        Value_NFLFieldGoalsAttempted,
        Value_NFLFieldGoalsAttempted1to19Yards,
        Value_NFLFieldGoalsAttempted20to29Yards,
        Value_NFLFieldGoalsAttempted30to39Yards,
        Value_NFLFieldGoalsAttempted40to49Yards,
        Value_NFLFieldGoalsAttempted50PlusYards,
        Value_NFLFieldGoalsBlocked,
        Value_NFLFieldGoalsLongestMade,
        Value_NFLFieldGoalsMade,
        Value_NFLFieldGoalsMade1to19Yards,
        Value_NFLFieldGoalsMade20to29Yards,
        Value_NFLFieldGoalsMade30to39Yards,
        Value_NFLFieldGoalsMade40to49Yards,
        Value_NFLFieldGoalsMade50PlusYards,
        Value_NFLFieldGoalsPerc,
        Value_NFLKickoffReturns10PlusYards,
        Value_NFLKickoffReturns20PlusYards,
        Value_NFLKickoffReturns30PlusYards,
        Value_NFLKickoffReturns40PlusYards,
        Value_NFLKickoffReturns50PlusYards,
        Value_NFLKickoffReturnsAverageRun,
        Value_NFLKickoffReturnsFairCatches,
        Value_NFLKickoffReturnsLongestKickReturn,
        Value_NFLKickoffReturnsReturns,
        Value_NFLKickoffReturnsTouchdowns,
        Value_NFLKickoffReturnsYards,
        Value_NFLKickoffsAverageGrossYards,
        Value_NFLKickoffsAverageNetYards,
        Value_NFLKickoffsAverageReturnYards,
        Value_NFLKickoffsEndZoneKicks,
        Value_NFLKickoffsGrossYards,
        Value_NFLKickoffsInsideOpponents20YardLine,
        Value_NFLKickoffsKicks,
        Value_NFLKickoffsLongestKick,
        Value_NFLKickoffsNetYards,
        Value_NFLKickoffsInsideOpponents20YardLinePerc,
        Value_NFLKickoffsTouchbacksPerc,
        Value_NFLKickoffsReturned,
        Value_NFLKickoffsTotalReturnYards,
        Value_NFLKickoffsTouchbacks,
        Value_NFLPuntReturns10PlusYards,
        Value_NFLPuntReturns20PlusYards,
        Value_NFLPuntReturns30PlusYards,
        Value_NFLPuntReturns40PlusYards,
        Value_NFLPuntReturns50PlusYards,
        Value_NFLPuntReturnsAverageRun,
        Value_NFLPuntReturnsFairCatches,
        Value_NFLPuntReturnsLongestKickReturn,
        Value_NFLPuntReturns,
        Value_NFLPuntReturnsTouchdowns,
        Value_NFLPuntReturnsYards,
        Value_NFLPuntingAverageGrossYards,
        Value_NFLPuntingAverageNetYards,
        Value_NFLPuntingAverageReturnYards,
        Value_NFLPuntingBlocked,
        Value_NFLPuntingGrossYards,
        Value_NFLPuntingInsideOpponents20YardLine,
        Value_NFLPuntingLongestPunt,
        Value_NFLPuntingNetYards,
        Value_NFLPuntingInsideOpponents20YardLinePerc,
        Value_NFLPuntingTouchbacksPerc,
        Value_NFLPuntingPunts,
        Value_NFLPuntingReturnYards,
        Value_NFLPuntingReturned,
        Value_NFLPuntingTouchbacks,
        Value_NFLFumblesForced,
        Value_NFLFumbles,
        Value_NFLFumblesLost,
        Value_NFLFumblesOpponentRecovery,
        Value_NFLFumblesOpponentTouchdownsFromRecovery,
        Value_NFLFumblesOutOfBounds,
        Value_NFLFumblesOwnRecovery,
        Value_NFLFumblesOwnTouchdownsFromRecovery,
        Value_NFLFumblesYardsFromOpponentRecovery,
        Value_NFLFumblesYardsFromOwnRecovery,
        Value_NFLPenalties1stDowns,
        Value_NFLPenalties,
        Value_NFLPenaltiesYards,
        Value_NCAAFB3rdDownConversionAttempts,
        Value_NCAAFB3rdDownConversions,
        Value_NCAAFB3rdDownConversionPerc,
        Value_NCAAFB3rdDownConversionsViaPass,
        Value_NCAAFB3rdDownConversionsViaPenalty,
        Value_NCAAFB3rdDownConversionsViaRush,
        Value_NCAAFB4thDownConversionAttempts,
        Value_NCAAFB4thDownConversions,
        Value_NCAAFB4thDownConversionPerc,
        Value_NCAAFB4thDownConversionsViaPass,
        Value_NCAAFB4thDownConversionsViaPenalty,
        Value_NCAAFB4thDownConversionsViaRush,
        Value_NCAAFBGamesPlayed,
        Value_NCAAFBGamesStarted,
        Value_NCAAFBGoalEfficiencyAttempts,
        Value_NCAAFBGoalEfficiencyPerc,
        Value_NCAAFBGoalEfficiencyTouchdowns,
        Value_NCAAFBPassing10PlusYards,
        Value_NCAAFBPassing20PlusYards,
        Value_NCAAFBPassing30PlusYards,
        Value_NCAAFBPassing40PlusYards,
        Value_NCAAFBPassing50PlusYards,
        Value_NCAAFBPassingAttempts,
        Value_NCAAFBPassingAverageYardsPerCompletion,
        Value_NCAAFBPassingAverageYardsPerAttempt,
        Value_NCAAFBPassingCompletionPerc,
        Value_NCAAFBPassingCompletions,
        Value_NCAAFBPassing1stDowns,
        Value_NCAAFBPassingGrossYards,
        Value_NCAAFBPassingInterceptionPerc,
        Value_NCAAFBPassingInterceptions,
        Value_NCAAFBPassingInterceptionsReturnedForTouchdown,
        Value_NCAAFBPassingLongestPass,
        Value_NCAAFBPassingNetYards,
        Value_NCAAFBPassingRating,
        Value_NCAAFBPassingRedZoneAttempts,
        Value_NCAAFBPassingSacked,
        Value_NCAAFBPassingSackedYardsLost,
        Value_NCAAFBPassingTackledForSafety,
        Value_NCAAFBPassingTotalYards,
        Value_NCAAFBPassingTouchdownPerc,
        Value_NCAAFBPassingTouchdowns,
        Value_NCAAFBReceiving10PlusYards,
        Value_NCAAFBReceiving20PlusYards,
        Value_NCAAFBReceiving30PlusYards,
        Value_NCAAFBReceiving40PlusYards,
        Value_NCAAFBReceiving50PlusYards,
        Value_NCAAFBReceivingAverageReception,
        Value_NCAAFBReceiving1stDowns,
        Value_NCAAFBReceivingFumbledOnReception,
        Value_NCAAFBReceivingLongestReception,
        Value_NCAAFBReceivingReceptions,
        Value_NCAAFBReceivingRedZoneTargets,
        Value_NCAAFBReceivingTargets,
        Value_NCAAFBReceivingTotalYards,
        Value_NCAAFBReceivingTouchdowns,
        Value_NCAAFBReceivingYardsAfterCompletion,
        Value_NCAAFBRedZoneEfficiencyAttempts,
        Value_NCAAFBRedZoneEfficiencyConversions,
        Value_NCAAFBRedZoneEfficiencyPerc,
        Value_NCAAFBRushing10PlusYards,
        Value_NCAAFBRushing20PlusYards,
        Value_NCAAFBRushing30PlusYards,
        Value_NCAAFBRushing40PlusYards,
        Value_NCAAFBRushing50PlusYards,
        Value_NCAAFBRushingAttempts,
        Value_NCAAFBRushingAverageRush,
        Value_NCAAFBRushing1stDownPerc,
        Value_NCAAFBRushing1stDowns,
        Value_NCAAFBRushingFumbledOnRush,
        Value_NCAAFBRushingLongestRush,
        Value_NCAAFBRushingRedZoneAttempts,
        Value_NCAAFBRushingTackledForSafety,
        Value_NCAAFBRushingTotalYards,
        Value_NCAAFBRushingTouchdowns,
        Value_NCAAFB1stDowns,
        Value_NCAAFB2PointConversionsAttempted,
        Value_NCAAFB2PointConversionsFailed,
        Value_NCAAFB2PointConversionsMade,
        Value_NCAAFB2PointConversionsPassing,
        Value_NCAAFB2PointConversionsReceiving,
        Value_NCAAFB2PointConversionsRushing,
        Value_NCAAFBBlockedKicks,
        Value_NCAAFBForcedFumbles,
        Value_NCAAFBFumblesRecovered,
        Value_NCAAFBFumblesRecoveredForTouchdowns,
        Value_NCAAFBInterceptions,
        Value_NCAAFBInterceptionsLongestInterception,
        Value_NCAAFBInterceptionsTouchdowns,
        Value_NCAAFBInterceptionsYards,
        Value_NCAAFBMiscAssistedTackles,
        Value_NCAAFBMiscCombinedTackles,
        Value_NCAAFBMiscForcedFumbles,
        Value_NCAAFBMiscFumblesRecovered,
        Value_NCAAFBMiscTackles,
        Value_NCAAFBPassesDefended,
        Value_NCAAFBQuarterbackHits,
        Value_NCAAFBSacks,
        Value_NCAAFBSackYards,
        Value_NCAAFBSafeties,
        Value_NCAAFBSpecialTeamsAssistedTackles,
        Value_NCAAFBSpecialTeamsCombinedTackles,
        Value_NCAAFBSpecialTeamsForcedFumbles,
        Value_NCAAFBSpecialTeamsFumblesRecovered,
        Value_NCAAFBSpecialTeamsTotalTackles,
        Value_NCAAFBTacklesAssisted,
        Value_NCAAFBTacklesCombined,
        Value_NCAAFBTacklesForLoss,
        Value_NCAAFBTackles,
        Value_NCAAFBBlockedFieldGoalReturns10PlusYards,
        Value_NCAAFBBlockedFieldGoalReturns20PlusYards,
        Value_NCAAFBBlockedFieldGoalReturns30PlusYards,
        Value_NCAAFBBlockedFieldGoalReturns40PlusYards,
        Value_NCAAFBBlockedFieldGoalReturns50PlusYards,
        Value_NCAAFBBlockedFieldGoalReturnsAverageReturn,
        Value_NCAAFBBlockedFieldGoalReturnsLongestReturn,
        Value_NCAAFBBlockedFieldGoalReturns,
        Value_NCAAFBBlockedFieldGoalReturnsTotalYards,
        Value_NCAAFBBlockedFieldGoalReturnsTouchdowns,
        Value_NCAAFBBlockedPuntReturn10PlusYards,
        Value_NCAAFBBlockedPuntReturn20PlusYards,
        Value_NCAAFBBlockedPuntReturn30PlusYards,
        Value_NCAAFBBlockedPuntReturn40PlusYards,
        Value_NCAAFBBlockedPuntReturn50PlusYards,
        Value_NCAAFBBlockedPuntReturnsAverageReturn,
        Value_NCAAFBBlockedPuntReturnsLongestReturn,
        Value_NCAAFBBlockedPuntReturns,
        Value_NCAAFBBlockedPuntReturnsTotalYards,
        Value_NCAAFBBlockedPuntReturnsTouchdowns,
        Value_NCAAFBExtraPointsAttempted,
        Value_NCAAFBExtraPointsAttemptedKicking,
        Value_NCAAFBExtraPointsAttempted2PointConversion,
        Value_NCAAFBExtraPointsBlocked,
        Value_NCAAFBExtraPointsMade,
        Value_NCAAFBExtraPointsMadeKicking,
        Value_NCAAFBExtraPointsMade2PointConversion,
        Value_NCAAFBExtraPointsPerc,
        Value_NCAAFBFieldGoalReturns10PlusYards,
        Value_NCAAFBFieldGoalReturns20PlusYards,
        Value_NCAAFBFieldGoalReturns30PlusYards,
        Value_NCAAFBFieldGoalReturns40PlusYards,
        Value_NCAAFBFieldGoalReturns50PlusYards,
        Value_NCAAFBFieldGoalReturnsAverageReturn,
        Value_NCAAFBFieldGoalReturnsLongestReturn,
        Value_NCAAFBFieldGoalReturns,
        Value_NCAAFBFieldGoalReturnsTotalYards,
        Value_NCAAFBFieldGoalReturnsTouchdowns,
        Value_NCAAFBFieldGoalsAttempted,
        Value_NCAAFBFieldGoalsAttempted1to19Yards,
        Value_NCAAFBFieldGoalsAttempted20to29Yards,
        Value_NCAAFBFieldGoalsAttempted30to39Yards,
        Value_NCAAFBFieldGoalsAttempted40to49Yards,
        Value_NCAAFBFieldGoalsAttempted50PlusYards,
        Value_NCAAFBFieldGoalsBlocked,
        Value_NCAAFBFieldGoalsLongestMade,
        Value_NCAAFBFieldGoalsMade,
        Value_NCAAFBFieldGoalsMade1to19Yards,
        Value_NCAAFBFieldGoalsMade20to29Yards,
        Value_NCAAFBFieldGoalsMade30to39Yards,
        Value_NCAAFBFieldGoalsMade40to49Yards,
        Value_NCAAFBFieldGoalsMade50PlusYards,
        Value_NCAAFBFieldGoalsPerc,
        Value_NCAAFBKickoffReturns10PlusYards,
        Value_NCAAFBKickoffReturns20PlusYards,
        Value_NCAAFBKickoffReturns30PlusYards,
        Value_NCAAFBKickoffReturns40PlusYards,
        Value_NCAAFBKickoffReturns50PlusYards,
        Value_NCAAFBKickoffReturnsAverageRun,
        Value_NCAAFBKickoffReturnsFairCatches,
        Value_NCAAFBKickoffReturnsLongestKickReturn,
        Value_NCAAFBKickoffReturnsReturns,
        Value_NCAAFBKickoffReturnsTouchdowns,
        Value_NCAAFBKickoffReturnsYards,
        Value_NCAAFBKickoffsAverageGrossYards,
        Value_NCAAFBKickoffsAverageNetYards,
        Value_NCAAFBKickoffsAverageReturnYards,
        Value_NCAAFBKickoffsEndZoneKicks,
        Value_NCAAFBKickoffsGrossYards,
        Value_NCAAFBKickoffsInsideOpponents20YardLine,
        Value_NCAAFBKickoffsKicks,
        Value_NCAAFBKickoffsLongestKick,
        Value_NCAAFBKickoffsNetYards,
        Value_NCAAFBKickoffsInsideOpponents20YardLinePerc,
        Value_NCAAFBKickoffsTouchbacksPerc,
        Value_NCAAFBKickoffsReturned,
        Value_NCAAFBKickoffsTotalReturnYards,
        Value_NCAAFBKickoffsTouchbacks,
        Value_NCAAFBPuntReturns10PlusYards,
        Value_NCAAFBPuntReturns20PlusYards,
        Value_NCAAFBPuntReturns30PlusYards,
        Value_NCAAFBPuntReturns40PlusYards,
        Value_NCAAFBPuntReturns50PlusYards,
        Value_NCAAFBPuntReturnsAverageRun,
        Value_NCAAFBPuntReturnsFairCatches,
        Value_NCAAFBPuntReturnsLongestKickReturn,
        Value_NCAAFBPuntReturns,
        Value_NCAAFBPuntReturnsTouchdowns,
        Value_NCAAFBPuntReturnsYards,
        Value_NCAAFBPuntingAverageGrossYards,
        Value_NCAAFBPuntingAverageNetYards,
        Value_NCAAFBPuntingAverageReturnYards,
        Value_NCAAFBPuntingBlocked,
        Value_NCAAFBPuntingGrossYards,
        Value_NCAAFBPuntingInsideOpponents20YardLine,
        Value_NCAAFBPuntingLongestPunt,
        Value_NCAAFBPuntingNetYards,
        Value_NCAAFBPuntingInsideOpponents20YardLinePerc,
        Value_NCAAFBPuntingTouchbacksPerc,
        Value_NCAAFBPuntingPunts,
        Value_NCAAFBPuntingReturnYards,
        Value_NCAAFBPuntingReturned,
        Value_NCAAFBPuntingTouchbacks,
        Value_NCAAFBFumblesForced,
        Value_NCAAFBFumbles,
        Value_NCAAFBFumblesLost,
        Value_NCAAFBFumblesOpponentRecovery,
        Value_NCAAFBFumblesOpponentTouchdownsFromRecovery,
        Value_NCAAFBFumblesOutOfBounds,
        Value_NCAAFBFumblesOwnRecovery,
        Value_NCAAFBFumblesOwnTouchdownsFromRecovery,
        Value_NCAAFBFumblesYardsFromOpponentRecovery,
        Value_NCAAFBFumblesYardsFromOwnRecovery,
        Value_NCAAFBPenalties1stDowns,
        Value_NCAAFBPenalties,
        Value_NCAAFBPenaltiesYards,
        Value_NBAAssists,
        Value_NBAAssistsPerGame,
        Value_NBAAssistsToTurnoverRatio,
        Value_NBABlockedAttempts,
        Value_NBABlockedAttemptsPerGame,
        Value_NBABlockedShots,
        Value_NBABlockedShotsPerGame,
        Value_NBACoachTechnicalFouls,
        Value_NBADefensiveRebounds,
        Value_NBADefensiveReboundsPerGame,
        Value_NBAEjections,
        Value_NBAFastBreakPoints,
        Value_NBAFastBreakPointsPerGame,
        Value_NBAFieldGoalAttempts,
        Value_NBAFieldGoalAttemptsPerGame,
        Value_NBAFieldGoalPercentage,
        Value_NBAFieldGoalsMade,
        Value_NBAFieldGoalsMadePerGame,
        Value_NBAFlagrantFouls,
        Value_NBAFlagrantFoulsPerGame,
        Value_NBAFreeThrowAttempts,
        Value_NBAFreeThrowAttemptsPerGame,
        Value_NBAFreeThrowPercentage,
        Value_NBAFreeThrowsMade,
        Value_NBAFreeThrowsMadePerGame,
        Value_NBAGamesPlayed,
        Value_NBAGamesStarted,
        Value_NBAMinutesPlayed,
        Value_NBAMinutesPlayedPerGame,
        Value_NBAOffensiveRebounds,
        Value_NBAOffensiveReboundsPerGame,
        Value_NBAPersonalFouls,
        Value_NBAPersonalFoulsPerGame,
        Value_NBAPoints,
        Value_NBAPointsPerGame,
        Value_NBAPointsInPaint,
        Value_NBAPointsInPaintPerGame,
        Value_NBAPointsOffTurnovers,
        Value_NBAPointsOffTurnoversPerGame,
        Value_NBARebounds,
        Value_NBAReboundsPerGame,
        Value_NBASecondChancePoints,
        Value_NBASecondChancePointsPerGame,
        Value_NBASteals,
        Value_NBAStealsPerGame,
        Value_NBATeamTechnicalFouls,
        Value_NBAPlayerTechnicalFouls,
        Value_NBAThreePointAttempts,
        Value_NBAThreePointAttemptsPerGame,
        Value_NBAThreePointPercentage,
        Value_NBAThreePointsMade,
        Value_NBAThreePointsMadePerGame,
        Value_NBATurnovers,
        Value_NBATurnoversPerGame,
        Value_NBATwoPointAttempts,
        Value_NBATwoPointAttemptsPerGame,
        Value_NBATwoPointPercentage,
        Value_NBATwoPointsMade,
        Value_NBATwoPointsMadePerGame,
        Value_NCAAMBAssists,
        Value_NCAAMBAssistsPerGame,
        Value_NCAAMBAssistsToTurnoverRatio,
        Value_NCAAMBBlockedAttempts,
        Value_NCAAMBBlockedAttemptsPerGame,
        Value_NCAAMBBlockedShots,
        Value_NCAAMBBlockedShotsPerGame,
        Value_NCAAMBCoachTechnicalFouls,
        Value_NCAAMBDefensiveRebounds,
        Value_NCAAMBDefensiveReboundsPerGame,
        Value_NCAAMBEjections,
        Value_NCAAMBFastBreakPoints,
        Value_NCAAMBFastBreakPointsPerGame,
        Value_NCAAMBFieldGoalAttempts,
        Value_NCAAMBFieldGoalAttemptsPerGame,
        Value_NCAAMBFieldGoalPercentage,
        Value_NCAAMBFieldGoalsMade,
        Value_NCAAMBFieldGoalsMadePerGame,
        Value_NCAAMBFlagrantFouls,
        Value_NCAAMBFlagrantFoulsPerGame,
        Value_NCAAMBFreeThrowAttempts,
        Value_NCAAMBFreeThrowAttemptsPerGame,
        Value_NCAAMBFreeThrowPercentage,
        Value_NCAAMBFreeThrowsMade,
        Value_NCAAMBFreeThrowsMadePerGame,
        Value_NCAAMBGamesPlayed,
        Value_NCAAMBGamesStarted,
        Value_NCAAMBMinutesPlayed,
        Value_NCAAMBMinutesPlayedPerGame,
        Value_NCAAMBOffensiveRebounds,
        Value_NCAAMBOffensiveReboundsPerGame,
        Value_NCAAMBPersonalFouls,
        Value_NCAAMBPersonalFoulsPerGame,
        Value_NCAAMBPoints,
        Value_NCAAMBPointsPerGame,
        Value_NCAAMBPointsInPaint,
        Value_NCAAMBPointsInPaintPerGame,
        Value_NCAAMBPointsOffTurnovers,
        Value_NCAAMBPointsOffTurnoversPerGame,
        Value_NCAAMBRebounds,
        Value_NCAAMBReboundsPerGame,
        Value_NCAAMBSecondChancePoints,
        Value_NCAAMBSecondChancePointsPerGame,
        Value_NCAAMBSteals,
        Value_NCAAMBStealsPerGame,
        Value_NCAAMBTeamTechnicalFouls,
        Value_NCAAMBPlayerTechnicalFouls,
        Value_NCAAMBThreePointAttempts,
        Value_NCAAMBThreePointAttemptsPerGame,
        Value_NCAAMBThreePointPercentage,
        Value_NCAAMBThreePointsMade,
        Value_NCAAMBThreePointsMadePerGame,
        Value_NCAAMBTurnovers,
        Value_NCAAMBTurnoversPerGame,
        Value_NCAAMBTwoPointAttempts,
        Value_NCAAMBTwoPointAttemptsPerGame,
        Value_NCAAMBTwoPointPercentage,
        Value_NCAAMBTwoPointsMade,
        Value_NCAAMBTwoPointsMadePerGame,
        Value_SoccerBallPossessions,
        Value_SoccerCardsGiven,
        Value_SoccerCornerKicks,
        Value_SoccerFreeKicks,
        Value_SoccerGoalAttempts,
        Value_SoccerGoalsByFoot,
        Value_SoccerGoalsByHeaders,
        Value_SoccerGoalsByTime00To15,
        Value_SoccerGoalsByTime16To30,
        Value_SoccerGoalsByTime31To45,
        Value_SoccerGoalsByTime46To60,
        Value_SoccerGoalsByTime61To75,
        Value_SoccerGoalsByTime76To90,
        Value_SoccerGoalsConceded,
        Value_SoccerGoalsConcededByTime00To15,
        Value_SoccerGoalsConcededByTime16To30,
        Value_SoccerGoalsConcededByTime31To45,
        Value_SoccerGoalsConcededByTime46To60,
        Value_SoccerGoalsConcededByTime61To75,
        Value_SoccerGoalsConcededByTime76To90,
        Value_SoccerGoalsScored,
        Value_SoccerMatchesPlayed,
        Value_SoccerOffsides,
        Value_SoccerOwnGoals,
        Value_SoccerShotsBlocked,
        Value_SoccerShotsOffGoal,
        Value_SoccerShotsOnGoal,
        Value_SoccerSubstitutedIn,
        Value_SoccerSubstitutedOut,
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

    SportsStatsTypeJSON(const SportsStatsTypeJSON &);
    SportsStatsTypeJSON & operator=(const SportsStatsTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsTypeJSON(void);
    SportsStatsTypeJSON(TypeValue init_value);
    SportsStatsTypeJSON(const char *init_value);
    SportsStatsTypeJSON(std::string init_value);
    SportsStatsTypeJSON(TypeValueKnownValues init_value);
    virtual ~SportsStatsTypeJSON(void);
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
                case Value_MLBBaserunningCaughtStealing:
                    handler->string_value("MLBBaserunningCaughtStealing");
                    break;
                case Value_MLBBaserunningPickoffs:
                    handler->string_value("MLBBaserunningPickoffs");
                    break;
                case Value_MLBBaserunningStolenBasePerc:
                    handler->string_value("MLBBaserunningStolenBasePerc");
                    break;
                case Value_MLBBaserunningStolenBases:
                    handler->string_value("MLBBaserunningStolenBases");
                    break;
                case Value_MLBFieldingAssists:
                    handler->string_value("MLBFieldingAssists");
                    break;
                case Value_MLBFieldingCompleteGames:
                    handler->string_value("MLBFieldingCompleteGames");
                    break;
                case Value_MLBFieldingDoublePlays:
                    handler->string_value("MLBFieldingDoublePlays");
                    break;
                case Value_MLBFieldingErrors:
                    handler->string_value("MLBFieldingErrors");
                    break;
                case Value_MLBFieldingFieldingPercentage:
                    handler->string_value("MLBFieldingFieldingPercentage");
                    break;
                case Value_MLBFieldingGamesFinished:
                    handler->string_value("MLBFieldingGamesFinished");
                    break;
                case Value_MLBFieldingGamesPlayed:
                    handler->string_value("MLBFieldingGamesPlayed");
                    break;
                case Value_MLBFieldingGamesStarted:
                    handler->string_value("MLBFieldingGamesStarted");
                    break;
                case Value_MLBFieldingPassedBalls:
                    handler->string_value("MLBFieldingPassedBalls");
                    break;
                case Value_MLBFieldingPutouts:
                    handler->string_value("MLBFieldingPutouts");
                    break;
                case Value_MLBFieldingRangeFactor:
                    handler->string_value("MLBFieldingRangeFactor");
                    break;
                case Value_MLBFieldingTotalChances:
                    handler->string_value("MLBFieldingTotalChances");
                    break;
                case Value_MLBFieldingTriplePlays:
                    handler->string_value("MLBFieldingTriplePlays");
                    break;
                case Value_MLBHittingAtBats:
                    handler->string_value("MLBHittingAtBats");
                    break;
                case Value_MLBHittingAtBatsPerHomeRun:
                    handler->string_value("MLBHittingAtBatsPerHomeRun");
                    break;
                case Value_MLBHittingAtBatsPerStrikeout:
                    handler->string_value("MLBHittingAtBatsPerStrikeout");
                    break;
                case Value_MLBHittingAtBatsWithRunnersInScoringPosition:
                    handler->string_value("MLBHittingAtBatsWithRunnersInScoringPosition");
                    break;
                case Value_MLBHittingBalls:
                    handler->string_value("MLBHittingBalls");
                    break;
                case Value_MLBHittingBallsInPlay:
                    handler->string_value("MLBHittingBallsInPlay");
                    break;
                case Value_MLBHittingBattingAverage:
                    handler->string_value("MLBHittingBattingAverage");
                    break;
                case Value_MLBHittingBattingAverageOnBallsInPlay:
                    handler->string_value("MLBHittingBattingAverageOnBallsInPlay");
                    break;
                case Value_MLBHittingCompleteGames:
                    handler->string_value("MLBHittingCompleteGames");
                    break;
                case Value_MLBHittingCycles:
                    handler->string_value("MLBHittingCycles");
                    break;
                case Value_MLBHittingDirtBallsFaced:
                    handler->string_value("MLBHittingDirtBallsFaced");
                    break;
                case Value_MLBHittingDoubles:
                    handler->string_value("MLBHittingDoubles");
                    break;
                case Value_MLBHittingEarnedRunsScored:
                    handler->string_value("MLBHittingEarnedRunsScored");
                    break;
                case Value_MLBHittingExtraBaseHits:
                    handler->string_value("MLBHittingExtraBaseHits");
                    break;
                case Value_MLBHittingFieldersChoice:
                    handler->string_value("MLBHittingFieldersChoice");
                    break;
                case Value_MLBHittingFlyBalls:
                    handler->string_value("MLBHittingFlyBalls");
                    break;
                case Value_MLBHittingFlyOuts:
                    handler->string_value("MLBHittingFlyOuts");
                    break;
                case Value_MLBHittingFlyOutsIntoDoublePlays:
                    handler->string_value("MLBHittingFlyOutsIntoDoublePlays");
                    break;
                case Value_MLBHittingFoulBalls:
                    handler->string_value("MLBHittingFoulBalls");
                    break;
                case Value_MLBHittingGamesFinished:
                    handler->string_value("MLBHittingGamesFinished");
                    break;
                case Value_MLBHittingGamesPlayed:
                    handler->string_value("MLBHittingGamesPlayed");
                    break;
                case Value_MLBHittingGamesStarted:
                    handler->string_value("MLBHittingGamesStarted");
                    break;
                case Value_MLBHittingGroundBallToFlyBallRatio:
                    handler->string_value("MLBHittingGroundBallToFlyBallRatio");
                    break;
                case Value_MLBHittingGroundBalls:
                    handler->string_value("MLBHittingGroundBalls");
                    break;
                case Value_MLBHittingGroundOuts:
                    handler->string_value("MLBHittingGroundOuts");
                    break;
                case Value_MLBHittingGroundedIntoDoublePlay:
                    handler->string_value("MLBHittingGroundedIntoDoublePlay");
                    break;
                case Value_MLBHittingHitByPitch:
                    handler->string_value("MLBHittingHitByPitch");
                    break;
                case Value_MLBHittingHits:
                    handler->string_value("MLBHittingHits");
                    break;
                case Value_MLBHittingHitsWithRunnersInScoringPosition:
                    handler->string_value("MLBHittingHitsWithRunnersInScoringPosition");
                    break;
                case Value_MLBHittingHomeRuns:
                    handler->string_value("MLBHittingHomeRuns");
                    break;
                case Value_MLBHittingIntentionalBalls:
                    handler->string_value("MLBHittingIntentionalBalls");
                    break;
                case Value_MLBHittingIntentionalWalks:
                    handler->string_value("MLBHittingIntentionalWalks");
                    break;
                case Value_MLBHittingIsolatedPower:
                    handler->string_value("MLBHittingIsolatedPower");
                    break;
                case Value_MLBHittingLineDrives:
                    handler->string_value("MLBHittingLineDrives");
                    break;
                case Value_MLBHittingLineOuts:
                    handler->string_value("MLBHittingLineOuts");
                    break;
                case Value_MLBHittingLineOutsIntoDoublePlay:
                    handler->string_value("MLBHittingLineOutsIntoDoublePlay");
                    break;
                case Value_MLBHittingOnBasePlusSluggingPerc:
                    handler->string_value("MLBHittingOnBasePlusSluggingPerc");
                    break;
                case Value_MLBHittingOnBasePerc:
                    handler->string_value("MLBHittingOnBasePerc");
                    break;
                case Value_MLBHittingPitchesFaced:
                    handler->string_value("MLBHittingPitchesFaced");
                    break;
                case Value_MLBHittingPlateAppearances:
                    handler->string_value("MLBHittingPlateAppearances");
                    break;
                case Value_MLBHittingPopOuts:
                    handler->string_value("MLBHittingPopOuts");
                    break;
                case Value_MLBHittingPopUps:
                    handler->string_value("MLBHittingPopUps");
                    break;
                case Value_MLBHittingReachedOnError:
                    handler->string_value("MLBHittingReachedOnError");
                    break;
                case Value_MLBHittingRunnersLeftOnBase:
                    handler->string_value("MLBHittingRunnersLeftOnBase");
                    break;
                case Value_MLBHittingRunnersLeftOnBaseTwoOutsRunnersInScoringPosition:
                    handler->string_value("MLBHittingRunnersLeftOnBaseTwoOutsRunnersInScoringPosition");
                    break;
                case Value_MLBHittingRunsBattedIn:
                    handler->string_value("MLBHittingRunsBattedIn");
                    break;
                case Value_MLBHittingRunsBattedInWithTwoOuts:
                    handler->string_value("MLBHittingRunsBattedInWithTwoOuts");
                    break;
                case Value_MLBHittingSacrificeFlys:
                    handler->string_value("MLBHittingSacrificeFlys");
                    break;
                case Value_MLBHittingSacrificeHits:
                    handler->string_value("MLBHittingSacrificeHits");
                    break;
                case Value_MLBHittingSecondaryAverage:
                    handler->string_value("MLBHittingSecondaryAverage");
                    break;
                case Value_MLBHittingSingles:
                    handler->string_value("MLBHittingSingles");
                    break;
                case Value_MLBHittingSluggingPerc:
                    handler->string_value("MLBHittingSluggingPerc");
                    break;
                case Value_MLBHittingStrikeoutsLooking:
                    handler->string_value("MLBHittingStrikeoutsLooking");
                    break;
                case Value_MLBHittingStrikeoutsSwinging:
                    handler->string_value("MLBHittingStrikeoutsSwinging");
                    break;
                case Value_MLBHittingStrikesLooking:
                    handler->string_value("MLBHittingStrikesLooking");
                    break;
                case Value_MLBHittingStrikesSwinging:
                    handler->string_value("MLBHittingStrikesSwinging");
                    break;
                case Value_MLBHittingTotalBases:
                    handler->string_value("MLBHittingTotalBases");
                    break;
                case Value_MLBHittingTotalRunsScored:
                    handler->string_value("MLBHittingTotalRunsScored");
                    break;
                case Value_MLBHittingTotalStrikeouts:
                    handler->string_value("MLBHittingTotalStrikeouts");
                    break;
                case Value_MLBHittingTotalStrikes:
                    handler->string_value("MLBHittingTotalStrikes");
                    break;
                case Value_MLBHittingTriples:
                    handler->string_value("MLBHittingTriples");
                    break;
                case Value_MLBHittingUnearnedRunsScored:
                    handler->string_value("MLBHittingUnearnedRunsScored");
                    break;
                case Value_MLBHittingWalks:
                    handler->string_value("MLBHittingWalks");
                    break;
                case Value_MLBHittingWalksPerPlaceAppearance:
                    handler->string_value("MLBHittingWalksPerPlaceAppearance");
                    break;
                case Value_MLBHittingWalksPerStrikeout:
                    handler->string_value("MLBHittingWalksPerStrikeout");
                    break;
                case Value_MLBPitchingBalks:
                    handler->string_value("MLBPitchingBalks");
                    break;
                case Value_MLBPitchingBalls:
                    handler->string_value("MLBPitchingBalls");
                    break;
                case Value_MLBPitchingBattersFaced:
                    handler->string_value("MLBPitchingBattersFaced");
                    break;
                case Value_MLBPitchingBlownSaves:
                    handler->string_value("MLBPitchingBlownSaves");
                    break;
                case Value_MLBPitchingCompleteGames:
                    handler->string_value("MLBPitchingCompleteGames");
                    break;
                case Value_MLBPitchingDirtBallsThrown:
                    handler->string_value("MLBPitchingDirtBallsThrown");
                    break;
                case Value_MLBPitchingDoublesAllowed:
                    handler->string_value("MLBPitchingDoublesAllowed");
                    break;
                case Value_MLBPitchingEarnedRunAverage:
                    handler->string_value("MLBPitchingEarnedRunAverage");
                    break;
                case Value_MLBPitchingEarnedRunsAllowed:
                    handler->string_value("MLBPitchingEarnedRunsAllowed");
                    break;
                case Value_MLBPitchingErrors:
                    handler->string_value("MLBPitchingErrors");
                    break;
                case Value_MLBPitchingFieldersChoice:
                    handler->string_value("MLBPitchingFieldersChoice");
                    break;
                case Value_MLBPitchingFlyOuts:
                    handler->string_value("MLBPitchingFlyOuts");
                    break;
                case Value_MLBPitchingFlyOutsIntoDoublePlays:
                    handler->string_value("MLBPitchingFlyOutsIntoDoublePlays");
                    break;
                case Value_MLBPitchingFoulBalls:
                    handler->string_value("MLBPitchingFoulBalls");
                    break;
                case Value_MLBPitchingGamesFinished:
                    handler->string_value("MLBPitchingGamesFinished");
                    break;
                case Value_MLBPitchingGamesPlayed:
                    handler->string_value("MLBPitchingGamesPlayed");
                    break;
                case Value_MLBPitchingGamesStarted:
                    handler->string_value("MLBPitchingGamesStarted");
                    break;
                case Value_MLBPitchingGroundBallToFlyBallRatio:
                    handler->string_value("MLBPitchingGroundBallToFlyBallRatio");
                    break;
                case Value_MLBPitchingGroundOuts:
                    handler->string_value("MLBPitchingGroundOuts");
                    break;
                case Value_MLBPitchingGroundOutsIntoDoublePlays:
                    handler->string_value("MLBPitchingGroundOutsIntoDoublePlays");
                    break;
                case Value_MLBPitchingHitBatters:
                    handler->string_value("MLBPitchingHitBatters");
                    break;
                case Value_MLBPitchingHitsAllowed:
                    handler->string_value("MLBPitchingHitsAllowed");
                    break;
                case Value_MLBPitchingHolds:
                    handler->string_value("MLBPitchingHolds");
                    break;
                case Value_MLBPitchingHomeRunsAllowed:
                    handler->string_value("MLBPitchingHomeRunsAllowed");
                    break;
                case Value_MLBPitchingInningsPitchedCompletePartial:
                    handler->string_value("MLBPitchingInningsPitchedCompletePartial");
                    break;
                case Value_MLBPitchingInningsPitchedTotalOuts:
                    handler->string_value("MLBPitchingInningsPitchedTotalOuts");
                    break;
                case Value_MLBPitchingIntentionalBalls:
                    handler->string_value("MLBPitchingIntentionalBalls");
                    break;
                case Value_MLBPitchingIntentionalWalks:
                    handler->string_value("MLBPitchingIntentionalWalks");
                    break;
                case Value_MLBPitchingLineOuts:
                    handler->string_value("MLBPitchingLineOuts");
                    break;
                case Value_MLBPitchingLineOutsIntoDoublePlays:
                    handler->string_value("MLBPitchingLineOutsIntoDoublePlays");
                    break;
                case Value_MLBPitchingLosses:
                    handler->string_value("MLBPitchingLosses");
                    break;
                case Value_MLBPitchingOpponentsBattingAverage:
                    handler->string_value("MLBPitchingOpponentsBattingAverage");
                    break;
                case Value_MLBPitchingOpponentRunnersLeftOnBase:
                    handler->string_value("MLBPitchingOpponentRunnersLeftOnBase");
                    break;
                case Value_MLBPitchingPickoffs:
                    handler->string_value("MLBPitchingPickoffs");
                    break;
                case Value_MLBPitchingPitchCount:
                    handler->string_value("MLBPitchingPitchCount");
                    break;
                case Value_MLBPitchingPopOutsForced:
                    handler->string_value("MLBPitchingPopOutsForced");
                    break;
                case Value_MLBPitchingQualityStarts:
                    handler->string_value("MLBPitchingQualityStarts");
                    break;
                case Value_MLBPitchingReachedOnError:
                    handler->string_value("MLBPitchingReachedOnError");
                    break;
                case Value_MLBPitchingRunnersCaughtStealing:
                    handler->string_value("MLBPitchingRunnersCaughtStealing");
                    break;
                case Value_MLBPitchingSacrificeFlys:
                    handler->string_value("MLBPitchingSacrificeFlys");
                    break;
                case Value_MLBPitchingSacrificeHits:
                    handler->string_value("MLBPitchingSacrificeHits");
                    break;
                case Value_MLBPitchingSaveOpportunities:
                    handler->string_value("MLBPitchingSaveOpportunities");
                    break;
                case Value_MLBPitchingSaves:
                    handler->string_value("MLBPitchingSaves");
                    break;
                case Value_MLBPitchingShutouts:
                    handler->string_value("MLBPitchingShutouts");
                    break;
                case Value_MLBPitchingSinglesAllowed:
                    handler->string_value("MLBPitchingSinglesAllowed");
                    break;
                case Value_MLBPitchingStolenBasesAllowed:
                    handler->string_value("MLBPitchingStolenBasesAllowed");
                    break;
                case Value_MLBPitchingStrikeoutsLooking:
                    handler->string_value("MLBPitchingStrikeoutsLooking");
                    break;
                case Value_MLBPitchingStrikeoutsPer9Innings:
                    handler->string_value("MLBPitchingStrikeoutsPer9Innings");
                    break;
                case Value_MLBPitchingStrikeoutsPerWalk:
                    handler->string_value("MLBPitchingStrikeoutsPerWalk");
                    break;
                case Value_MLBPitchingStrikeoutsSwinging:
                    handler->string_value("MLBPitchingStrikeoutsSwinging");
                    break;
                case Value_MLBPitchingStrikesLooking:
                    handler->string_value("MLBPitchingStrikesLooking");
                    break;
                case Value_MLBPitchingStrikesSwinging:
                    handler->string_value("MLBPitchingStrikesSwinging");
                    break;
                case Value_MLBPitchingTotalBasesAllowed:
                    handler->string_value("MLBPitchingTotalBasesAllowed");
                    break;
                case Value_MLBPitchingTotalRunsAllowed:
                    handler->string_value("MLBPitchingTotalRunsAllowed");
                    break;
                case Value_MLBPitchingTotalStrikeouts:
                    handler->string_value("MLBPitchingTotalStrikeouts");
                    break;
                case Value_MLBPitchingTotalStrikes:
                    handler->string_value("MLBPitchingTotalStrikes");
                    break;
                case Value_MLBPitchingTriplesAllowed:
                    handler->string_value("MLBPitchingTriplesAllowed");
                    break;
                case Value_MLBPitchingUnearnedRunsAllowed:
                    handler->string_value("MLBPitchingUnearnedRunsAllowed");
                    break;
                case Value_MLBPitchingWalks:
                    handler->string_value("MLBPitchingWalks");
                    break;
                case Value_MLBPitchingWalksPlusHitsPerInningPitched:
                    handler->string_value("MLBPitchingWalksPlusHitsPerInningPitched");
                    break;
                case Value_MLBPitchingWildPitches:
                    handler->string_value("MLBPitchingWildPitches");
                    break;
                case Value_MLBPitchingWins:
                    handler->string_value("MLBPitchingWins");
                    break;
                case Value_NHLAssists:
                    handler->string_value("NHLAssists");
                    break;
                case Value_NHLAssistsPerGame:
                    handler->string_value("NHLAssistsPerGame");
                    break;
                case Value_NHLAverageTimeOnIce:
                    handler->string_value("NHLAverageTimeOnIce");
                    break;
                case Value_NHLBlockedAttempts:
                    handler->string_value("NHLBlockedAttempts");
                    break;
                case Value_NHLBlockedAttemptsPerGame:
                    handler->string_value("NHLBlockedAttemptsPerGame");
                    break;
                case Value_NHLBlockedShots:
                    handler->string_value("NHLBlockedShots");
                    break;
                case Value_NHLBlockedShotsPerGame:
                    handler->string_value("NHLBlockedShotsPerGame");
                    break;
                case Value_NHLEvenStrengthAssists:
                    handler->string_value("NHLEvenStrengthAssists");
                    break;
                case Value_NHLEvenStrengthFaceoffWinPerc:
                    handler->string_value("NHLEvenStrengthFaceoffWinPerc");
                    break;
                case Value_NHLEvenStrengthFaceoffs:
                    handler->string_value("NHLEvenStrengthFaceoffs");
                    break;
                case Value_NHLEvenStrengthFaceoffsLost:
                    handler->string_value("NHLEvenStrengthFaceoffsLost");
                    break;
                case Value_NHLEvenStrengthFaceoffsWon:
                    handler->string_value("NHLEvenStrengthFaceoffsWon");
                    break;
                case Value_NHLEvenStrengthGoals:
                    handler->string_value("NHLEvenStrengthGoals");
                    break;
                case Value_NHLEvenStrengthMissedShots:
                    handler->string_value("NHLEvenStrengthMissedShots");
                    break;
                case Value_NHLEvenStrengthShotsOnGoal:
                    handler->string_value("NHLEvenStrengthShotsOnGoal");
                    break;
                case Value_NHLEvenStrengthTimeOnIce:
                    handler->string_value("NHLEvenStrengthTimeOnIce");
                    break;
                case Value_NHLFaceoffWinPerc:
                    handler->string_value("NHLFaceoffWinPerc");
                    break;
                case Value_NHLFaceoffs:
                    handler->string_value("NHLFaceoffs");
                    break;
                case Value_NHLFaceoffsWon:
                    handler->string_value("NHLFaceoffsWon");
                    break;
                case Value_NHLFaceoffsLost:
                    handler->string_value("NHLFaceoffsLost");
                    break;
                case Value_NHLGameWinningGoalFlag:
                    handler->string_value("NHLGameWinningGoalFlag");
                    break;
                case Value_NHLGameWinningGoals:
                    handler->string_value("NHLGameWinningGoals");
                    break;
                case Value_NHLGamesPlayed:
                    handler->string_value("NHLGamesPlayed");
                    break;
                case Value_NHLGiveaways:
                    handler->string_value("NHLGiveaways");
                    break;
                case Value_NHLGiveawaysPerGame:
                    handler->string_value("NHLGiveawaysPerGame");
                    break;
                case Value_NHLGoals:
                    handler->string_value("NHLGoals");
                    break;
                case Value_NHLGoalsPerGame:
                    handler->string_value("NHLGoalsPerGame");
                    break;
                case Value_NHLHits:
                    handler->string_value("NHLHits");
                    break;
                case Value_NHLHitsPerGame:
                    handler->string_value("NHLHitsPerGame");
                    break;
                case Value_NHLMissedShots:
                    handler->string_value("NHLMissedShots");
                    break;
                case Value_NHLMissedShotsPerGame:
                    handler->string_value("NHLMissedShotsPerGame");
                    break;
                case Value_NHLPenalties:
                    handler->string_value("NHLPenalties");
                    break;
                case Value_NHLPenaltiesPerGame:
                    handler->string_value("NHLPenaltiesPerGame");
                    break;
                case Value_NHLPenaltyGoals:
                    handler->string_value("NHLPenaltyGoals");
                    break;
                case Value_NHLPenaltyMinutes:
                    handler->string_value("NHLPenaltyMinutes");
                    break;
                case Value_NHLPenaltyMinutesPerGame:
                    handler->string_value("NHLPenaltyMinutesPerGame");
                    break;
                case Value_NHLPenaltyMissedShots:
                    handler->string_value("NHLPenaltyMissedShots");
                    break;
                case Value_NHLPenaltyShotsOnGoal:
                    handler->string_value("NHLPenaltyShotsOnGoal");
                    break;
                case Value_NHLPlusMinus:
                    handler->string_value("NHLPlusMinus");
                    break;
                case Value_NHLPoints:
                    handler->string_value("NHLPoints");
                    break;
                case Value_NHLPointsPerGame:
                    handler->string_value("NHLPointsPerGame");
                    break;
                case Value_NHLPowerPlayAssists:
                    handler->string_value("NHLPowerPlayAssists");
                    break;
                case Value_NHLPowerPlayFaceoffWinPerc:
                    handler->string_value("NHLPowerPlayFaceoffWinPerc");
                    break;
                case Value_NHLPowerPlayFaceoffs:
                    handler->string_value("NHLPowerPlayFaceoffs");
                    break;
                case Value_NHLPowerPlayFaceoffsLost:
                    handler->string_value("NHLPowerPlayFaceoffsLost");
                    break;
                case Value_NHLPowerPlayFaceoffsWon:
                    handler->string_value("NHLPowerPlayFaceoffsWon");
                    break;
                case Value_NHLPowerPlayGoals:
                    handler->string_value("NHLPowerPlayGoals");
                    break;
                case Value_NHLPowerPlayMissedShots:
                    handler->string_value("NHLPowerPlayMissedShots");
                    break;
                case Value_NHLPowerPlayOpportunities:
                    handler->string_value("NHLPowerPlayOpportunities");
                    break;
                case Value_NHLPowerPlayPoints:
                    handler->string_value("NHLPowerPlayPoints");
                    break;
                case Value_NHLPowerPlayShotsOnGoal:
                    handler->string_value("NHLPowerPlayShotsOnGoal");
                    break;
                case Value_NHLPowerPlayTimeOnIce:
                    handler->string_value("NHLPowerPlayTimeOnIce");
                    break;
                case Value_NHLScratches:
                    handler->string_value("NHLScratches");
                    break;
                case Value_NHLShifts:
                    handler->string_value("NHLShifts");
                    break;
                case Value_NHLShiftsPerGame:
                    handler->string_value("NHLShiftsPerGame");
                    break;
                case Value_NHLShootingPerc:
                    handler->string_value("NHLShootingPerc");
                    break;
                case Value_NHLShootoutGoals:
                    handler->string_value("NHLShootoutGoals");
                    break;
                case Value_NHLShootoutMissedShots:
                    handler->string_value("NHLShootoutMissedShots");
                    break;
                case Value_NHLShootoutShotsOnGoal:
                    handler->string_value("NHLShootoutShotsOnGoal");
                    break;
                case Value_NHLShortHandedAssists:
                    handler->string_value("NHLShortHandedAssists");
                    break;
                case Value_NHLShortHandedFaceoffWinPerc:
                    handler->string_value("NHLShortHandedFaceoffWinPerc");
                    break;
                case Value_NHLShortHandedFaceoffs:
                    handler->string_value("NHLShortHandedFaceoffs");
                    break;
                case Value_NHLShortHandedFaceoffsLost:
                    handler->string_value("NHLShortHandedFaceoffsLost");
                    break;
                case Value_NHLShortHandedFaceoffsWon:
                    handler->string_value("NHLShortHandedFaceoffsWon");
                    break;
                case Value_NHLShortHandedGoals:
                    handler->string_value("NHLShortHandedGoals");
                    break;
                case Value_NHLShortHandedMissedShots:
                    handler->string_value("NHLShortHandedMissedShots");
                    break;
                case Value_NHLShortHandedPoints:
                    handler->string_value("NHLShortHandedPoints");
                    break;
                case Value_NHLShortHandedShotsOnGoal:
                    handler->string_value("NHLShortHandedShotsOnGoal");
                    break;
                case Value_NHLShortHandedTimeOnIce:
                    handler->string_value("NHLShortHandedTimeOnIce");
                    break;
                case Value_NHLShotsOnGoal:
                    handler->string_value("NHLShotsOnGoal");
                    break;
                case Value_NHLShotsOnGoalPerGame:
                    handler->string_value("NHLShotsOnGoalPerGame");
                    break;
                case Value_NHLTakeaways:
                    handler->string_value("NHLTakeaways");
                    break;
                case Value_NHLTakeawaysPerGame:
                    handler->string_value("NHLTakeawaysPerGame");
                    break;
                case Value_NHLTeamPenalties:
                    handler->string_value("NHLTeamPenalties");
                    break;
                case Value_NHLTeamPenaltiesPerGame:
                    handler->string_value("NHLTeamPenaltiesPerGame");
                    break;
                case Value_NHLTeamPenaltyMinutes:
                    handler->string_value("NHLTeamPenaltyMinutes");
                    break;
                case Value_NHLTeamPenaltyMinutesPerGame:
                    handler->string_value("NHLTeamPenaltyMinutesPerGame");
                    break;
                case Value_NHLTotalTimeOnIce:
                    handler->string_value("NHLTotalTimeOnIce");
                    break;
                case Value_NHLTotalTimeOnIcePerGame:
                    handler->string_value("NHLTotalTimeOnIcePerGame");
                    break;
                case Value_NHLGoaltendingEmptyNetEvenStrengthGoalsAgainst:
                    handler->string_value("NHLGoaltendingEmptyNetEvenStrengthGoalsAgainst");
                    break;
                case Value_NHLGoaltendingEmptyNetGoalsAgainst:
                    handler->string_value("NHLGoaltendingEmptyNetGoalsAgainst");
                    break;
                case Value_NHLGoaltendingEmptyNetPowerPlayGoalsAgainst:
                    handler->string_value("NHLGoaltendingEmptyNetPowerPlayGoalsAgainst");
                    break;
                case Value_NHLGoaltendingEmptyNetShortHandedGoalsAgainst:
                    handler->string_value("NHLGoaltendingEmptyNetShortHandedGoalsAgainst");
                    break;
                case Value_NHLGoaltendingEmptyNetShotsAgainst:
                    handler->string_value("NHLGoaltendingEmptyNetShotsAgainst");
                    break;
                case Value_NHLGoaltendingEvenStrengthGoalsAgainst:
                    handler->string_value("NHLGoaltendingEvenStrengthGoalsAgainst");
                    break;
                case Value_NHLGoaltendingEvenStrengthSavePerc:
                    handler->string_value("NHLGoaltendingEvenStrengthSavePerc");
                    break;
                case Value_NHLGoaltendingEvenStrengthSaves:
                    handler->string_value("NHLGoaltendingEvenStrengthSaves");
                    break;
                case Value_NHLGoaltendingEvenStrengthShotsAgainst:
                    handler->string_value("NHLGoaltendingEvenStrengthShotsAgainst");
                    break;
                case Value_NHLGoaltendingGoalsAgainst:
                    handler->string_value("NHLGoaltendingGoalsAgainst");
                    break;
                case Value_NHLGoaltendingGoalsAgainstAverage:
                    handler->string_value("NHLGoaltendingGoalsAgainstAverage");
                    break;
                case Value_NHLGoaltendingGoalsAgainstPerGame:
                    handler->string_value("NHLGoaltendingGoalsAgainstPerGame");
                    break;
                case Value_NHLGoaltendingLosses:
                    handler->string_value("NHLGoaltendingLosses");
                    break;
                case Value_NHLGoaltendingOutcome:
                    handler->string_value("NHLGoaltendingOutcome");
                    break;
                case Value_NHLGoaltendingOvertimeLosses:
                    handler->string_value("NHLGoaltendingOvertimeLosses");
                    break;
                case Value_NHLGoaltendingPenaltyGoalsAgainst:
                    handler->string_value("NHLGoaltendingPenaltyGoalsAgainst");
                    break;
                case Value_NHLGoaltendingPenaltySavePerc:
                    handler->string_value("NHLGoaltendingPenaltySavePerc");
                    break;
                case Value_NHLGoaltendingPenaltySaves:
                    handler->string_value("NHLGoaltendingPenaltySaves");
                    break;
                case Value_NHLGoaltendingPenaltyShotsAgainst:
                    handler->string_value("NHLGoaltendingPenaltyShotsAgainst");
                    break;
                case Value_NHLGoaltendingPowerPlayGoalsAgainst:
                    handler->string_value("NHLGoaltendingPowerPlayGoalsAgainst");
                    break;
                case Value_NHLGoaltendingPowerPlaySavePerc:
                    handler->string_value("NHLGoaltendingPowerPlaySavePerc");
                    break;
                case Value_NHLGoaltendingPowerPlaySaves:
                    handler->string_value("NHLGoaltendingPowerPlaySaves");
                    break;
                case Value_NHLGoaltendingPowerPlayShotsAgainst:
                    handler->string_value("NHLGoaltendingPowerPlayShotsAgainst");
                    break;
                case Value_NHLGoaltendingSavePerc:
                    handler->string_value("NHLGoaltendingSavePerc");
                    break;
                case Value_NHLGoaltendingSaves:
                    handler->string_value("NHLGoaltendingSaves");
                    break;
                case Value_NHLGoaltendingShootoutGoalsAgainst:
                    handler->string_value("NHLGoaltendingShootoutGoalsAgainst");
                    break;
                case Value_NHLGoaltendingShootoutSavePerc:
                    handler->string_value("NHLGoaltendingShootoutSavePerc");
                    break;
                case Value_NHLGoaltendingShootoutSaves:
                    handler->string_value("NHLGoaltendingShootoutSaves");
                    break;
                case Value_NHLGoaltendingShootoutShotsAgainst:
                    handler->string_value("NHLGoaltendingShootoutShotsAgainst");
                    break;
                case Value_NHLGoaltendingShortHandedGoalsAgainst:
                    handler->string_value("NHLGoaltendingShortHandedGoalsAgainst");
                    break;
                case Value_NHLGoaltendingShortHandedSavePerc:
                    handler->string_value("NHLGoaltendingShortHandedSavePerc");
                    break;
                case Value_NHLGoaltendingShortHandedSaves:
                    handler->string_value("NHLGoaltendingShortHandedSaves");
                    break;
                case Value_NHLGoaltendingShortHandedShotsAgainst:
                    handler->string_value("NHLGoaltendingShortHandedShotsAgainst");
                    break;
                case Value_NHLGoaltendingShotsAgainst:
                    handler->string_value("NHLGoaltendingShotsAgainst");
                    break;
                case Value_NHLGoaltendingShotsAgainstPerGame:
                    handler->string_value("NHLGoaltendingShotsAgainstPerGame");
                    break;
                case Value_NHLGoaltendingShutoutFlag:
                    handler->string_value("NHLGoaltendingShutoutFlag");
                    break;
                case Value_NHLGoaltendingShutouts:
                    handler->string_value("NHLGoaltendingShutouts");
                    break;
                case Value_NHLGoaltendingTotalGoalsAgainst:
                    handler->string_value("NHLGoaltendingTotalGoalsAgainst");
                    break;
                case Value_NHLGoaltendingTotalShotsAgainst:
                    handler->string_value("NHLGoaltendingTotalShotsAgainst");
                    break;
                case Value_NHLGoaltendingWins:
                    handler->string_value("NHLGoaltendingWins");
                    break;
                case Value_NFL3rdDownConversionAttempts:
                    handler->string_value("NFL3rdDownConversionAttempts");
                    break;
                case Value_NFL3rdDownConversions:
                    handler->string_value("NFL3rdDownConversions");
                    break;
                case Value_NFL3rdDownConversionPerc:
                    handler->string_value("NFL3rdDownConversionPerc");
                    break;
                case Value_NFL3rdDownConversionsViaPass:
                    handler->string_value("NFL3rdDownConversionsViaPass");
                    break;
                case Value_NFL3rdDownConversionsViaPenalty:
                    handler->string_value("NFL3rdDownConversionsViaPenalty");
                    break;
                case Value_NFL3rdDownConversionsViaRush:
                    handler->string_value("NFL3rdDownConversionsViaRush");
                    break;
                case Value_NFL4thDownConversionAttempts:
                    handler->string_value("NFL4thDownConversionAttempts");
                    break;
                case Value_NFL4thDownConversions:
                    handler->string_value("NFL4thDownConversions");
                    break;
                case Value_NFL4thDownConversionPerc:
                    handler->string_value("NFL4thDownConversionPerc");
                    break;
                case Value_NFL4thDownConversionsViaPass:
                    handler->string_value("NFL4thDownConversionsViaPass");
                    break;
                case Value_NFL4thDownConversionsViaPenalty:
                    handler->string_value("NFL4thDownConversionsViaPenalty");
                    break;
                case Value_NFL4thDownConversionsViaRush:
                    handler->string_value("NFL4thDownConversionsViaRush");
                    break;
                case Value_NFLGamesPlayed:
                    handler->string_value("NFLGamesPlayed");
                    break;
                case Value_NFLGamesStarted:
                    handler->string_value("NFLGamesStarted");
                    break;
                case Value_NFLGoalEfficiencyAttempts:
                    handler->string_value("NFLGoalEfficiencyAttempts");
                    break;
                case Value_NFLGoalEfficiencyPerc:
                    handler->string_value("NFLGoalEfficiencyPerc");
                    break;
                case Value_NFLGoalEfficiencyTouchdowns:
                    handler->string_value("NFLGoalEfficiencyTouchdowns");
                    break;
                case Value_NFLPassing10PlusYards:
                    handler->string_value("NFLPassing10PlusYards");
                    break;
                case Value_NFLPassing20PlusYards:
                    handler->string_value("NFLPassing20PlusYards");
                    break;
                case Value_NFLPassing30PlusYards:
                    handler->string_value("NFLPassing30PlusYards");
                    break;
                case Value_NFLPassing40PlusYards:
                    handler->string_value("NFLPassing40PlusYards");
                    break;
                case Value_NFLPassing50PlusYards:
                    handler->string_value("NFLPassing50PlusYards");
                    break;
                case Value_NFLPassingAttempts:
                    handler->string_value("NFLPassingAttempts");
                    break;
                case Value_NFLPassingAverageYardsPerCompletion:
                    handler->string_value("NFLPassingAverageYardsPerCompletion");
                    break;
                case Value_NFLPassingAverageYardsPerAttempt:
                    handler->string_value("NFLPassingAverageYardsPerAttempt");
                    break;
                case Value_NFLPassingCompletionPerc:
                    handler->string_value("NFLPassingCompletionPerc");
                    break;
                case Value_NFLPassingCompletions:
                    handler->string_value("NFLPassingCompletions");
                    break;
                case Value_NFLPassing1stDowns:
                    handler->string_value("NFLPassing1stDowns");
                    break;
                case Value_NFLPassingGrossYards:
                    handler->string_value("NFLPassingGrossYards");
                    break;
                case Value_NFLPassingInterceptionPerc:
                    handler->string_value("NFLPassingInterceptionPerc");
                    break;
                case Value_NFLPassingInterceptions:
                    handler->string_value("NFLPassingInterceptions");
                    break;
                case Value_NFLPassingInterceptionsReturnedForTouchdown:
                    handler->string_value("NFLPassingInterceptionsReturnedForTouchdown");
                    break;
                case Value_NFLPassingLongestPass:
                    handler->string_value("NFLPassingLongestPass");
                    break;
                case Value_NFLPassingNetYards:
                    handler->string_value("NFLPassingNetYards");
                    break;
                case Value_NFLPassingRating:
                    handler->string_value("NFLPassingRating");
                    break;
                case Value_NFLPassingRedZoneAttempts:
                    handler->string_value("NFLPassingRedZoneAttempts");
                    break;
                case Value_NFLPassingSacked:
                    handler->string_value("NFLPassingSacked");
                    break;
                case Value_NFLPassingSackedYardsLost:
                    handler->string_value("NFLPassingSackedYardsLost");
                    break;
                case Value_NFLPassingTackledForSafety:
                    handler->string_value("NFLPassingTackledForSafety");
                    break;
                case Value_NFLPassingTotalYards:
                    handler->string_value("NFLPassingTotalYards");
                    break;
                case Value_NFLPassingTouchdownPerc:
                    handler->string_value("NFLPassingTouchdownPerc");
                    break;
                case Value_NFLPassingTouchdowns:
                    handler->string_value("NFLPassingTouchdowns");
                    break;
                case Value_NFLReceiving10PlusYards:
                    handler->string_value("NFLReceiving10PlusYards");
                    break;
                case Value_NFLReceiving20PlusYards:
                    handler->string_value("NFLReceiving20PlusYards");
                    break;
                case Value_NFLReceiving30PlusYards:
                    handler->string_value("NFLReceiving30PlusYards");
                    break;
                case Value_NFLReceiving40PlusYards:
                    handler->string_value("NFLReceiving40PlusYards");
                    break;
                case Value_NFLReceiving50PlusYards:
                    handler->string_value("NFLReceiving50PlusYards");
                    break;
                case Value_NFLReceivingAverageReception:
                    handler->string_value("NFLReceivingAverageReception");
                    break;
                case Value_NFLReceiving1stDowns:
                    handler->string_value("NFLReceiving1stDowns");
                    break;
                case Value_NFLReceivingFumbledOnReception:
                    handler->string_value("NFLReceivingFumbledOnReception");
                    break;
                case Value_NFLReceivingLongestReception:
                    handler->string_value("NFLReceivingLongestReception");
                    break;
                case Value_NFLReceivingReceptions:
                    handler->string_value("NFLReceivingReceptions");
                    break;
                case Value_NFLReceivingRedZoneTargets:
                    handler->string_value("NFLReceivingRedZoneTargets");
                    break;
                case Value_NFLReceivingTargets:
                    handler->string_value("NFLReceivingTargets");
                    break;
                case Value_NFLReceivingTotalYards:
                    handler->string_value("NFLReceivingTotalYards");
                    break;
                case Value_NFLReceivingTouchdowns:
                    handler->string_value("NFLReceivingTouchdowns");
                    break;
                case Value_NFLReceivingYardsAfterCompletion:
                    handler->string_value("NFLReceivingYardsAfterCompletion");
                    break;
                case Value_NFLRedZoneEfficiencyAttempts:
                    handler->string_value("NFLRedZoneEfficiencyAttempts");
                    break;
                case Value_NFLRedZoneEfficiencyConversions:
                    handler->string_value("NFLRedZoneEfficiencyConversions");
                    break;
                case Value_NFLRedZoneEfficiencyPerc:
                    handler->string_value("NFLRedZoneEfficiencyPerc");
                    break;
                case Value_NFLRushing10PlusYards:
                    handler->string_value("NFLRushing10PlusYards");
                    break;
                case Value_NFLRushing20PlusYards:
                    handler->string_value("NFLRushing20PlusYards");
                    break;
                case Value_NFLRushing30PlusYards:
                    handler->string_value("NFLRushing30PlusYards");
                    break;
                case Value_NFLRushing40PlusYards:
                    handler->string_value("NFLRushing40PlusYards");
                    break;
                case Value_NFLRushing50PlusYards:
                    handler->string_value("NFLRushing50PlusYards");
                    break;
                case Value_NFLRushingAttempts:
                    handler->string_value("NFLRushingAttempts");
                    break;
                case Value_NFLRushingAverageRush:
                    handler->string_value("NFLRushingAverageRush");
                    break;
                case Value_NFLRushing1stDownPerc:
                    handler->string_value("NFLRushing1stDownPerc");
                    break;
                case Value_NFLRushing1stDowns:
                    handler->string_value("NFLRushing1stDowns");
                    break;
                case Value_NFLRushingFumbledOnRush:
                    handler->string_value("NFLRushingFumbledOnRush");
                    break;
                case Value_NFLRushingLongestRush:
                    handler->string_value("NFLRushingLongestRush");
                    break;
                case Value_NFLRushingRedZoneAttempts:
                    handler->string_value("NFLRushingRedZoneAttempts");
                    break;
                case Value_NFLRushingTackledForSafety:
                    handler->string_value("NFLRushingTackledForSafety");
                    break;
                case Value_NFLRushingTotalYards:
                    handler->string_value("NFLRushingTotalYards");
                    break;
                case Value_NFLRushingTouchdowns:
                    handler->string_value("NFLRushingTouchdowns");
                    break;
                case Value_NFL1stDowns:
                    handler->string_value("NFL1stDowns");
                    break;
                case Value_NFL2PointConversionsAttempted:
                    handler->string_value("NFL2PointConversionsAttempted");
                    break;
                case Value_NFL2PointConversionsFailed:
                    handler->string_value("NFL2PointConversionsFailed");
                    break;
                case Value_NFL2PointConversionsMade:
                    handler->string_value("NFL2PointConversionsMade");
                    break;
                case Value_NFL2PointConversionsPassing:
                    handler->string_value("NFL2PointConversionsPassing");
                    break;
                case Value_NFL2PointConversionsReceiving:
                    handler->string_value("NFL2PointConversionsReceiving");
                    break;
                case Value_NFL2PointConversionsRushing:
                    handler->string_value("NFL2PointConversionsRushing");
                    break;
                case Value_NFL1PointSafety:
                    handler->string_value("NFL1PointSafety");
                    break;
                case Value_NFLBlockedKicks:
                    handler->string_value("NFLBlockedKicks");
                    break;
                case Value_NFLConversionAttempts:
                    handler->string_value("NFLConversionAttempts");
                    break;
                case Value_NFLConversionsCompleted:
                    handler->string_value("NFLConversionsCompleted");
                    break;
                case Value_NFLConversionsFailed:
                    handler->string_value("NFLConversionsFailed");
                    break;
                case Value_NFLForcedFumbles:
                    handler->string_value("NFLForcedFumbles");
                    break;
                case Value_NFLFumblesRecovered:
                    handler->string_value("NFLFumblesRecovered");
                    break;
                case Value_NFLFumblesRecoveredForTouchdowns:
                    handler->string_value("NFLFumblesRecoveredForTouchdowns");
                    break;
                case Value_NFLInterceptions:
                    handler->string_value("NFLInterceptions");
                    break;
                case Value_NFLInterceptionsLongestInterception:
                    handler->string_value("NFLInterceptionsLongestInterception");
                    break;
                case Value_NFLInterceptionsTouchdowns:
                    handler->string_value("NFLInterceptionsTouchdowns");
                    break;
                case Value_NFLInterceptionsYards:
                    handler->string_value("NFLInterceptionsYards");
                    break;
                case Value_NFLMiscAssistedTackles:
                    handler->string_value("NFLMiscAssistedTackles");
                    break;
                case Value_NFLMiscCombinedTackles:
                    handler->string_value("NFLMiscCombinedTackles");
                    break;
                case Value_NFLMiscForcedFumbles:
                    handler->string_value("NFLMiscForcedFumbles");
                    break;
                case Value_NFLMiscFumblesRecovered:
                    handler->string_value("NFLMiscFumblesRecovered");
                    break;
                case Value_NFLMiscTackles:
                    handler->string_value("NFLMiscTackles");
                    break;
                case Value_NFLPassesDefended:
                    handler->string_value("NFLPassesDefended");
                    break;
                case Value_NFLQuarterbackHits:
                    handler->string_value("NFLQuarterbackHits");
                    break;
                case Value_NFLSacks:
                    handler->string_value("NFLSacks");
                    break;
                case Value_NFLSackYards:
                    handler->string_value("NFLSackYards");
                    break;
                case Value_NFLSafeties:
                    handler->string_value("NFLSafeties");
                    break;
                case Value_NFLSpecialTeamsAssistedTackles:
                    handler->string_value("NFLSpecialTeamsAssistedTackles");
                    break;
                case Value_NFLSpecialTeamsCombinedTackles:
                    handler->string_value("NFLSpecialTeamsCombinedTackles");
                    break;
                case Value_NFLSpecialTeamsForcedFumbles:
                    handler->string_value("NFLSpecialTeamsForcedFumbles");
                    break;
                case Value_NFLSpecialTeamsFumblesRecovered:
                    handler->string_value("NFLSpecialTeamsFumblesRecovered");
                    break;
                case Value_NFLSpecialTeamsTotalTackles:
                    handler->string_value("NFLSpecialTeamsTotalTackles");
                    break;
                case Value_NFLTacklesAssisted:
                    handler->string_value("NFLTacklesAssisted");
                    break;
                case Value_NFLTacklesCombined:
                    handler->string_value("NFLTacklesCombined");
                    break;
                case Value_NFLTacklesForLoss:
                    handler->string_value("NFLTacklesForLoss");
                    break;
                case Value_NFLTackles:
                    handler->string_value("NFLTackles");
                    break;
                case Value_NFLBlockedFieldGoalReturns10PlusYards:
                    handler->string_value("NFLBlockedFieldGoalReturns10PlusYards");
                    break;
                case Value_NFLBlockedFieldGoalReturns20PlusYards:
                    handler->string_value("NFLBlockedFieldGoalReturns20PlusYards");
                    break;
                case Value_NFLBlockedFieldGoalReturns30PlusYards:
                    handler->string_value("NFLBlockedFieldGoalReturns30PlusYards");
                    break;
                case Value_NFLBlockedFieldGoalReturns40PlusYards:
                    handler->string_value("NFLBlockedFieldGoalReturns40PlusYards");
                    break;
                case Value_NFLBlockedFieldGoalReturns50PlusYards:
                    handler->string_value("NFLBlockedFieldGoalReturns50PlusYards");
                    break;
                case Value_NFLBlockedFieldGoalReturnsAverageReturn:
                    handler->string_value("NFLBlockedFieldGoalReturnsAverageReturn");
                    break;
                case Value_NFLBlockedFieldGoalReturnsLongestReturn:
                    handler->string_value("NFLBlockedFieldGoalReturnsLongestReturn");
                    break;
                case Value_NFLBlockedFieldGoalReturns:
                    handler->string_value("NFLBlockedFieldGoalReturns");
                    break;
                case Value_NFLBlockedFieldGoalReturnsTotalYards:
                    handler->string_value("NFLBlockedFieldGoalReturnsTotalYards");
                    break;
                case Value_NFLBlockedFieldGoalReturnsTouchdowns:
                    handler->string_value("NFLBlockedFieldGoalReturnsTouchdowns");
                    break;
                case Value_NFLBlockedPuntReturn10PlusYards:
                    handler->string_value("NFLBlockedPuntReturn10PlusYards");
                    break;
                case Value_NFLBlockedPuntReturn20PlusYards:
                    handler->string_value("NFLBlockedPuntReturn20PlusYards");
                    break;
                case Value_NFLBlockedPuntReturn30PlusYards:
                    handler->string_value("NFLBlockedPuntReturn30PlusYards");
                    break;
                case Value_NFLBlockedPuntReturn40PlusYards:
                    handler->string_value("NFLBlockedPuntReturn40PlusYards");
                    break;
                case Value_NFLBlockedPuntReturn50PlusYards:
                    handler->string_value("NFLBlockedPuntReturn50PlusYards");
                    break;
                case Value_NFLBlockedPuntReturnsAverageReturn:
                    handler->string_value("NFLBlockedPuntReturnsAverageReturn");
                    break;
                case Value_NFLBlockedPuntReturnsLongestReturn:
                    handler->string_value("NFLBlockedPuntReturnsLongestReturn");
                    break;
                case Value_NFLBlockedPuntReturns:
                    handler->string_value("NFLBlockedPuntReturns");
                    break;
                case Value_NFLBlockedPuntReturnsTotalYards:
                    handler->string_value("NFLBlockedPuntReturnsTotalYards");
                    break;
                case Value_NFLBlockedPuntReturnsTouchdowns:
                    handler->string_value("NFLBlockedPuntReturnsTouchdowns");
                    break;
                case Value_NFLExtraPointsAttempted:
                    handler->string_value("NFLExtraPointsAttempted");
                    break;
                case Value_NFLExtraPointsAttemptedKicking:
                    handler->string_value("NFLExtraPointsAttemptedKicking");
                    break;
                case Value_NFLExtraPointsAttempted2PointConversion:
                    handler->string_value("NFLExtraPointsAttempted2PointConversion");
                    break;
                case Value_NFLExtraPointsBlocked:
                    handler->string_value("NFLExtraPointsBlocked");
                    break;
                case Value_NFLExtraPointsMade:
                    handler->string_value("NFLExtraPointsMade");
                    break;
                case Value_NFLExtraPointsMadeKicking:
                    handler->string_value("NFLExtraPointsMadeKicking");
                    break;
                case Value_NFLExtraPointsMade2PointConversion:
                    handler->string_value("NFLExtraPointsMade2PointConversion");
                    break;
                case Value_NFLExtraPointsPerc:
                    handler->string_value("NFLExtraPointsPerc");
                    break;
                case Value_NFLFieldGoalReturns10PlusYards:
                    handler->string_value("NFLFieldGoalReturns10PlusYards");
                    break;
                case Value_NFLFieldGoalReturns20PlusYards:
                    handler->string_value("NFLFieldGoalReturns20PlusYards");
                    break;
                case Value_NFLFieldGoalReturns30PlusYards:
                    handler->string_value("NFLFieldGoalReturns30PlusYards");
                    break;
                case Value_NFLFieldGoalReturns40PlusYards:
                    handler->string_value("NFLFieldGoalReturns40PlusYards");
                    break;
                case Value_NFLFieldGoalReturns50PlusYards:
                    handler->string_value("NFLFieldGoalReturns50PlusYards");
                    break;
                case Value_NFLFieldGoalReturnsAverageReturn:
                    handler->string_value("NFLFieldGoalReturnsAverageReturn");
                    break;
                case Value_NFLFieldGoalReturnsLongestReturn:
                    handler->string_value("NFLFieldGoalReturnsLongestReturn");
                    break;
                case Value_NFLFieldGoalReturns:
                    handler->string_value("NFLFieldGoalReturns");
                    break;
                case Value_NFLFieldGoalReturnsTotalYards:
                    handler->string_value("NFLFieldGoalReturnsTotalYards");
                    break;
                case Value_NFLFieldGoalReturnsTouchdowns:
                    handler->string_value("NFLFieldGoalReturnsTouchdowns");
                    break;
                case Value_NFLFieldGoalsAttempted:
                    handler->string_value("NFLFieldGoalsAttempted");
                    break;
                case Value_NFLFieldGoalsAttempted1to19Yards:
                    handler->string_value("NFLFieldGoalsAttempted1to19Yards");
                    break;
                case Value_NFLFieldGoalsAttempted20to29Yards:
                    handler->string_value("NFLFieldGoalsAttempted20to29Yards");
                    break;
                case Value_NFLFieldGoalsAttempted30to39Yards:
                    handler->string_value("NFLFieldGoalsAttempted30to39Yards");
                    break;
                case Value_NFLFieldGoalsAttempted40to49Yards:
                    handler->string_value("NFLFieldGoalsAttempted40to49Yards");
                    break;
                case Value_NFLFieldGoalsAttempted50PlusYards:
                    handler->string_value("NFLFieldGoalsAttempted50PlusYards");
                    break;
                case Value_NFLFieldGoalsBlocked:
                    handler->string_value("NFLFieldGoalsBlocked");
                    break;
                case Value_NFLFieldGoalsLongestMade:
                    handler->string_value("NFLFieldGoalsLongestMade");
                    break;
                case Value_NFLFieldGoalsMade:
                    handler->string_value("NFLFieldGoalsMade");
                    break;
                case Value_NFLFieldGoalsMade1to19Yards:
                    handler->string_value("NFLFieldGoalsMade1to19Yards");
                    break;
                case Value_NFLFieldGoalsMade20to29Yards:
                    handler->string_value("NFLFieldGoalsMade20to29Yards");
                    break;
                case Value_NFLFieldGoalsMade30to39Yards:
                    handler->string_value("NFLFieldGoalsMade30to39Yards");
                    break;
                case Value_NFLFieldGoalsMade40to49Yards:
                    handler->string_value("NFLFieldGoalsMade40to49Yards");
                    break;
                case Value_NFLFieldGoalsMade50PlusYards:
                    handler->string_value("NFLFieldGoalsMade50PlusYards");
                    break;
                case Value_NFLFieldGoalsPerc:
                    handler->string_value("NFLFieldGoalsPerc");
                    break;
                case Value_NFLKickoffReturns10PlusYards:
                    handler->string_value("NFLKickoffReturns10PlusYards");
                    break;
                case Value_NFLKickoffReturns20PlusYards:
                    handler->string_value("NFLKickoffReturns20PlusYards");
                    break;
                case Value_NFLKickoffReturns30PlusYards:
                    handler->string_value("NFLKickoffReturns30PlusYards");
                    break;
                case Value_NFLKickoffReturns40PlusYards:
                    handler->string_value("NFLKickoffReturns40PlusYards");
                    break;
                case Value_NFLKickoffReturns50PlusYards:
                    handler->string_value("NFLKickoffReturns50PlusYards");
                    break;
                case Value_NFLKickoffReturnsAverageRun:
                    handler->string_value("NFLKickoffReturnsAverageRun");
                    break;
                case Value_NFLKickoffReturnsFairCatches:
                    handler->string_value("NFLKickoffReturnsFairCatches");
                    break;
                case Value_NFLKickoffReturnsLongestKickReturn:
                    handler->string_value("NFLKickoffReturnsLongestKickReturn");
                    break;
                case Value_NFLKickoffReturnsReturns:
                    handler->string_value("NFLKickoffReturnsReturns");
                    break;
                case Value_NFLKickoffReturnsTouchdowns:
                    handler->string_value("NFLKickoffReturnsTouchdowns");
                    break;
                case Value_NFLKickoffReturnsYards:
                    handler->string_value("NFLKickoffReturnsYards");
                    break;
                case Value_NFLKickoffsAverageGrossYards:
                    handler->string_value("NFLKickoffsAverageGrossYards");
                    break;
                case Value_NFLKickoffsAverageNetYards:
                    handler->string_value("NFLKickoffsAverageNetYards");
                    break;
                case Value_NFLKickoffsAverageReturnYards:
                    handler->string_value("NFLKickoffsAverageReturnYards");
                    break;
                case Value_NFLKickoffsEndZoneKicks:
                    handler->string_value("NFLKickoffsEndZoneKicks");
                    break;
                case Value_NFLKickoffsGrossYards:
                    handler->string_value("NFLKickoffsGrossYards");
                    break;
                case Value_NFLKickoffsInsideOpponents20YardLine:
                    handler->string_value("NFLKickoffsInsideOpponents20YardLine");
                    break;
                case Value_NFLKickoffsKicks:
                    handler->string_value("NFLKickoffsKicks");
                    break;
                case Value_NFLKickoffsLongestKick:
                    handler->string_value("NFLKickoffsLongestKick");
                    break;
                case Value_NFLKickoffsNetYards:
                    handler->string_value("NFLKickoffsNetYards");
                    break;
                case Value_NFLKickoffsInsideOpponents20YardLinePerc:
                    handler->string_value("NFLKickoffsInsideOpponents20YardLinePerc");
                    break;
                case Value_NFLKickoffsTouchbacksPerc:
                    handler->string_value("NFLKickoffsTouchbacksPerc");
                    break;
                case Value_NFLKickoffsReturned:
                    handler->string_value("NFLKickoffsReturned");
                    break;
                case Value_NFLKickoffsTotalReturnYards:
                    handler->string_value("NFLKickoffsTotalReturnYards");
                    break;
                case Value_NFLKickoffsTouchbacks:
                    handler->string_value("NFLKickoffsTouchbacks");
                    break;
                case Value_NFLPuntReturns10PlusYards:
                    handler->string_value("NFLPuntReturns10PlusYards");
                    break;
                case Value_NFLPuntReturns20PlusYards:
                    handler->string_value("NFLPuntReturns20PlusYards");
                    break;
                case Value_NFLPuntReturns30PlusYards:
                    handler->string_value("NFLPuntReturns30PlusYards");
                    break;
                case Value_NFLPuntReturns40PlusYards:
                    handler->string_value("NFLPuntReturns40PlusYards");
                    break;
                case Value_NFLPuntReturns50PlusYards:
                    handler->string_value("NFLPuntReturns50PlusYards");
                    break;
                case Value_NFLPuntReturnsAverageRun:
                    handler->string_value("NFLPuntReturnsAverageRun");
                    break;
                case Value_NFLPuntReturnsFairCatches:
                    handler->string_value("NFLPuntReturnsFairCatches");
                    break;
                case Value_NFLPuntReturnsLongestKickReturn:
                    handler->string_value("NFLPuntReturnsLongestKickReturn");
                    break;
                case Value_NFLPuntReturns:
                    handler->string_value("NFLPuntReturns");
                    break;
                case Value_NFLPuntReturnsTouchdowns:
                    handler->string_value("NFLPuntReturnsTouchdowns");
                    break;
                case Value_NFLPuntReturnsYards:
                    handler->string_value("NFLPuntReturnsYards");
                    break;
                case Value_NFLPuntingAverageGrossYards:
                    handler->string_value("NFLPuntingAverageGrossYards");
                    break;
                case Value_NFLPuntingAverageNetYards:
                    handler->string_value("NFLPuntingAverageNetYards");
                    break;
                case Value_NFLPuntingAverageReturnYards:
                    handler->string_value("NFLPuntingAverageReturnYards");
                    break;
                case Value_NFLPuntingBlocked:
                    handler->string_value("NFLPuntingBlocked");
                    break;
                case Value_NFLPuntingGrossYards:
                    handler->string_value("NFLPuntingGrossYards");
                    break;
                case Value_NFLPuntingInsideOpponents20YardLine:
                    handler->string_value("NFLPuntingInsideOpponents20YardLine");
                    break;
                case Value_NFLPuntingLongestPunt:
                    handler->string_value("NFLPuntingLongestPunt");
                    break;
                case Value_NFLPuntingNetYards:
                    handler->string_value("NFLPuntingNetYards");
                    break;
                case Value_NFLPuntingInsideOpponents20YardLinePerc:
                    handler->string_value("NFLPuntingInsideOpponents20YardLinePerc");
                    break;
                case Value_NFLPuntingTouchbacksPerc:
                    handler->string_value("NFLPuntingTouchbacksPerc");
                    break;
                case Value_NFLPuntingPunts:
                    handler->string_value("NFLPuntingPunts");
                    break;
                case Value_NFLPuntingReturnYards:
                    handler->string_value("NFLPuntingReturnYards");
                    break;
                case Value_NFLPuntingReturned:
                    handler->string_value("NFLPuntingReturned");
                    break;
                case Value_NFLPuntingTouchbacks:
                    handler->string_value("NFLPuntingTouchbacks");
                    break;
                case Value_NFLFumblesForced:
                    handler->string_value("NFLFumblesForced");
                    break;
                case Value_NFLFumbles:
                    handler->string_value("NFLFumbles");
                    break;
                case Value_NFLFumblesLost:
                    handler->string_value("NFLFumblesLost");
                    break;
                case Value_NFLFumblesOpponentRecovery:
                    handler->string_value("NFLFumblesOpponentRecovery");
                    break;
                case Value_NFLFumblesOpponentTouchdownsFromRecovery:
                    handler->string_value("NFLFumblesOpponentTouchdownsFromRecovery");
                    break;
                case Value_NFLFumblesOutOfBounds:
                    handler->string_value("NFLFumblesOutOfBounds");
                    break;
                case Value_NFLFumblesOwnRecovery:
                    handler->string_value("NFLFumblesOwnRecovery");
                    break;
                case Value_NFLFumblesOwnTouchdownsFromRecovery:
                    handler->string_value("NFLFumblesOwnTouchdownsFromRecovery");
                    break;
                case Value_NFLFumblesYardsFromOpponentRecovery:
                    handler->string_value("NFLFumblesYardsFromOpponentRecovery");
                    break;
                case Value_NFLFumblesYardsFromOwnRecovery:
                    handler->string_value("NFLFumblesYardsFromOwnRecovery");
                    break;
                case Value_NFLPenalties1stDowns:
                    handler->string_value("NFLPenalties1stDowns");
                    break;
                case Value_NFLPenalties:
                    handler->string_value("NFLPenalties");
                    break;
                case Value_NFLPenaltiesYards:
                    handler->string_value("NFLPenaltiesYards");
                    break;
                case Value_NCAAFB3rdDownConversionAttempts:
                    handler->string_value("NCAAFB3rdDownConversionAttempts");
                    break;
                case Value_NCAAFB3rdDownConversions:
                    handler->string_value("NCAAFB3rdDownConversions");
                    break;
                case Value_NCAAFB3rdDownConversionPerc:
                    handler->string_value("NCAAFB3rdDownConversionPerc");
                    break;
                case Value_NCAAFB3rdDownConversionsViaPass:
                    handler->string_value("NCAAFB3rdDownConversionsViaPass");
                    break;
                case Value_NCAAFB3rdDownConversionsViaPenalty:
                    handler->string_value("NCAAFB3rdDownConversionsViaPenalty");
                    break;
                case Value_NCAAFB3rdDownConversionsViaRush:
                    handler->string_value("NCAAFB3rdDownConversionsViaRush");
                    break;
                case Value_NCAAFB4thDownConversionAttempts:
                    handler->string_value("NCAAFB4thDownConversionAttempts");
                    break;
                case Value_NCAAFB4thDownConversions:
                    handler->string_value("NCAAFB4thDownConversions");
                    break;
                case Value_NCAAFB4thDownConversionPerc:
                    handler->string_value("NCAAFB4thDownConversionPerc");
                    break;
                case Value_NCAAFB4thDownConversionsViaPass:
                    handler->string_value("NCAAFB4thDownConversionsViaPass");
                    break;
                case Value_NCAAFB4thDownConversionsViaPenalty:
                    handler->string_value("NCAAFB4thDownConversionsViaPenalty");
                    break;
                case Value_NCAAFB4thDownConversionsViaRush:
                    handler->string_value("NCAAFB4thDownConversionsViaRush");
                    break;
                case Value_NCAAFBGamesPlayed:
                    handler->string_value("NCAAFBGamesPlayed");
                    break;
                case Value_NCAAFBGamesStarted:
                    handler->string_value("NCAAFBGamesStarted");
                    break;
                case Value_NCAAFBGoalEfficiencyAttempts:
                    handler->string_value("NCAAFBGoalEfficiencyAttempts");
                    break;
                case Value_NCAAFBGoalEfficiencyPerc:
                    handler->string_value("NCAAFBGoalEfficiencyPerc");
                    break;
                case Value_NCAAFBGoalEfficiencyTouchdowns:
                    handler->string_value("NCAAFBGoalEfficiencyTouchdowns");
                    break;
                case Value_NCAAFBPassing10PlusYards:
                    handler->string_value("NCAAFBPassing10PlusYards");
                    break;
                case Value_NCAAFBPassing20PlusYards:
                    handler->string_value("NCAAFBPassing20PlusYards");
                    break;
                case Value_NCAAFBPassing30PlusYards:
                    handler->string_value("NCAAFBPassing30PlusYards");
                    break;
                case Value_NCAAFBPassing40PlusYards:
                    handler->string_value("NCAAFBPassing40PlusYards");
                    break;
                case Value_NCAAFBPassing50PlusYards:
                    handler->string_value("NCAAFBPassing50PlusYards");
                    break;
                case Value_NCAAFBPassingAttempts:
                    handler->string_value("NCAAFBPassingAttempts");
                    break;
                case Value_NCAAFBPassingAverageYardsPerCompletion:
                    handler->string_value("NCAAFBPassingAverageYardsPerCompletion");
                    break;
                case Value_NCAAFBPassingAverageYardsPerAttempt:
                    handler->string_value("NCAAFBPassingAverageYardsPerAttempt");
                    break;
                case Value_NCAAFBPassingCompletionPerc:
                    handler->string_value("NCAAFBPassingCompletionPerc");
                    break;
                case Value_NCAAFBPassingCompletions:
                    handler->string_value("NCAAFBPassingCompletions");
                    break;
                case Value_NCAAFBPassing1stDowns:
                    handler->string_value("NCAAFBPassing1stDowns");
                    break;
                case Value_NCAAFBPassingGrossYards:
                    handler->string_value("NCAAFBPassingGrossYards");
                    break;
                case Value_NCAAFBPassingInterceptionPerc:
                    handler->string_value("NCAAFBPassingInterceptionPerc");
                    break;
                case Value_NCAAFBPassingInterceptions:
                    handler->string_value("NCAAFBPassingInterceptions");
                    break;
                case Value_NCAAFBPassingInterceptionsReturnedForTouchdown:
                    handler->string_value("NCAAFBPassingInterceptionsReturnedForTouchdown");
                    break;
                case Value_NCAAFBPassingLongestPass:
                    handler->string_value("NCAAFBPassingLongestPass");
                    break;
                case Value_NCAAFBPassingNetYards:
                    handler->string_value("NCAAFBPassingNetYards");
                    break;
                case Value_NCAAFBPassingRating:
                    handler->string_value("NCAAFBPassingRating");
                    break;
                case Value_NCAAFBPassingRedZoneAttempts:
                    handler->string_value("NCAAFBPassingRedZoneAttempts");
                    break;
                case Value_NCAAFBPassingSacked:
                    handler->string_value("NCAAFBPassingSacked");
                    break;
                case Value_NCAAFBPassingSackedYardsLost:
                    handler->string_value("NCAAFBPassingSackedYardsLost");
                    break;
                case Value_NCAAFBPassingTackledForSafety:
                    handler->string_value("NCAAFBPassingTackledForSafety");
                    break;
                case Value_NCAAFBPassingTotalYards:
                    handler->string_value("NCAAFBPassingTotalYards");
                    break;
                case Value_NCAAFBPassingTouchdownPerc:
                    handler->string_value("NCAAFBPassingTouchdownPerc");
                    break;
                case Value_NCAAFBPassingTouchdowns:
                    handler->string_value("NCAAFBPassingTouchdowns");
                    break;
                case Value_NCAAFBReceiving10PlusYards:
                    handler->string_value("NCAAFBReceiving10PlusYards");
                    break;
                case Value_NCAAFBReceiving20PlusYards:
                    handler->string_value("NCAAFBReceiving20PlusYards");
                    break;
                case Value_NCAAFBReceiving30PlusYards:
                    handler->string_value("NCAAFBReceiving30PlusYards");
                    break;
                case Value_NCAAFBReceiving40PlusYards:
                    handler->string_value("NCAAFBReceiving40PlusYards");
                    break;
                case Value_NCAAFBReceiving50PlusYards:
                    handler->string_value("NCAAFBReceiving50PlusYards");
                    break;
                case Value_NCAAFBReceivingAverageReception:
                    handler->string_value("NCAAFBReceivingAverageReception");
                    break;
                case Value_NCAAFBReceiving1stDowns:
                    handler->string_value("NCAAFBReceiving1stDowns");
                    break;
                case Value_NCAAFBReceivingFumbledOnReception:
                    handler->string_value("NCAAFBReceivingFumbledOnReception");
                    break;
                case Value_NCAAFBReceivingLongestReception:
                    handler->string_value("NCAAFBReceivingLongestReception");
                    break;
                case Value_NCAAFBReceivingReceptions:
                    handler->string_value("NCAAFBReceivingReceptions");
                    break;
                case Value_NCAAFBReceivingRedZoneTargets:
                    handler->string_value("NCAAFBReceivingRedZoneTargets");
                    break;
                case Value_NCAAFBReceivingTargets:
                    handler->string_value("NCAAFBReceivingTargets");
                    break;
                case Value_NCAAFBReceivingTotalYards:
                    handler->string_value("NCAAFBReceivingTotalYards");
                    break;
                case Value_NCAAFBReceivingTouchdowns:
                    handler->string_value("NCAAFBReceivingTouchdowns");
                    break;
                case Value_NCAAFBReceivingYardsAfterCompletion:
                    handler->string_value("NCAAFBReceivingYardsAfterCompletion");
                    break;
                case Value_NCAAFBRedZoneEfficiencyAttempts:
                    handler->string_value("NCAAFBRedZoneEfficiencyAttempts");
                    break;
                case Value_NCAAFBRedZoneEfficiencyConversions:
                    handler->string_value("NCAAFBRedZoneEfficiencyConversions");
                    break;
                case Value_NCAAFBRedZoneEfficiencyPerc:
                    handler->string_value("NCAAFBRedZoneEfficiencyPerc");
                    break;
                case Value_NCAAFBRushing10PlusYards:
                    handler->string_value("NCAAFBRushing10PlusYards");
                    break;
                case Value_NCAAFBRushing20PlusYards:
                    handler->string_value("NCAAFBRushing20PlusYards");
                    break;
                case Value_NCAAFBRushing30PlusYards:
                    handler->string_value("NCAAFBRushing30PlusYards");
                    break;
                case Value_NCAAFBRushing40PlusYards:
                    handler->string_value("NCAAFBRushing40PlusYards");
                    break;
                case Value_NCAAFBRushing50PlusYards:
                    handler->string_value("NCAAFBRushing50PlusYards");
                    break;
                case Value_NCAAFBRushingAttempts:
                    handler->string_value("NCAAFBRushingAttempts");
                    break;
                case Value_NCAAFBRushingAverageRush:
                    handler->string_value("NCAAFBRushingAverageRush");
                    break;
                case Value_NCAAFBRushing1stDownPerc:
                    handler->string_value("NCAAFBRushing1stDownPerc");
                    break;
                case Value_NCAAFBRushing1stDowns:
                    handler->string_value("NCAAFBRushing1stDowns");
                    break;
                case Value_NCAAFBRushingFumbledOnRush:
                    handler->string_value("NCAAFBRushingFumbledOnRush");
                    break;
                case Value_NCAAFBRushingLongestRush:
                    handler->string_value("NCAAFBRushingLongestRush");
                    break;
                case Value_NCAAFBRushingRedZoneAttempts:
                    handler->string_value("NCAAFBRushingRedZoneAttempts");
                    break;
                case Value_NCAAFBRushingTackledForSafety:
                    handler->string_value("NCAAFBRushingTackledForSafety");
                    break;
                case Value_NCAAFBRushingTotalYards:
                    handler->string_value("NCAAFBRushingTotalYards");
                    break;
                case Value_NCAAFBRushingTouchdowns:
                    handler->string_value("NCAAFBRushingTouchdowns");
                    break;
                case Value_NCAAFB1stDowns:
                    handler->string_value("NCAAFB1stDowns");
                    break;
                case Value_NCAAFB2PointConversionsAttempted:
                    handler->string_value("NCAAFB2PointConversionsAttempted");
                    break;
                case Value_NCAAFB2PointConversionsFailed:
                    handler->string_value("NCAAFB2PointConversionsFailed");
                    break;
                case Value_NCAAFB2PointConversionsMade:
                    handler->string_value("NCAAFB2PointConversionsMade");
                    break;
                case Value_NCAAFB2PointConversionsPassing:
                    handler->string_value("NCAAFB2PointConversionsPassing");
                    break;
                case Value_NCAAFB2PointConversionsReceiving:
                    handler->string_value("NCAAFB2PointConversionsReceiving");
                    break;
                case Value_NCAAFB2PointConversionsRushing:
                    handler->string_value("NCAAFB2PointConversionsRushing");
                    break;
                case Value_NCAAFBBlockedKicks:
                    handler->string_value("NCAAFBBlockedKicks");
                    break;
                case Value_NCAAFBForcedFumbles:
                    handler->string_value("NCAAFBForcedFumbles");
                    break;
                case Value_NCAAFBFumblesRecovered:
                    handler->string_value("NCAAFBFumblesRecovered");
                    break;
                case Value_NCAAFBFumblesRecoveredForTouchdowns:
                    handler->string_value("NCAAFBFumblesRecoveredForTouchdowns");
                    break;
                case Value_NCAAFBInterceptions:
                    handler->string_value("NCAAFBInterceptions");
                    break;
                case Value_NCAAFBInterceptionsLongestInterception:
                    handler->string_value("NCAAFBInterceptionsLongestInterception");
                    break;
                case Value_NCAAFBInterceptionsTouchdowns:
                    handler->string_value("NCAAFBInterceptionsTouchdowns");
                    break;
                case Value_NCAAFBInterceptionsYards:
                    handler->string_value("NCAAFBInterceptionsYards");
                    break;
                case Value_NCAAFBMiscAssistedTackles:
                    handler->string_value("NCAAFBMiscAssistedTackles");
                    break;
                case Value_NCAAFBMiscCombinedTackles:
                    handler->string_value("NCAAFBMiscCombinedTackles");
                    break;
                case Value_NCAAFBMiscForcedFumbles:
                    handler->string_value("NCAAFBMiscForcedFumbles");
                    break;
                case Value_NCAAFBMiscFumblesRecovered:
                    handler->string_value("NCAAFBMiscFumblesRecovered");
                    break;
                case Value_NCAAFBMiscTackles:
                    handler->string_value("NCAAFBMiscTackles");
                    break;
                case Value_NCAAFBPassesDefended:
                    handler->string_value("NCAAFBPassesDefended");
                    break;
                case Value_NCAAFBQuarterbackHits:
                    handler->string_value("NCAAFBQuarterbackHits");
                    break;
                case Value_NCAAFBSacks:
                    handler->string_value("NCAAFBSacks");
                    break;
                case Value_NCAAFBSackYards:
                    handler->string_value("NCAAFBSackYards");
                    break;
                case Value_NCAAFBSafeties:
                    handler->string_value("NCAAFBSafeties");
                    break;
                case Value_NCAAFBSpecialTeamsAssistedTackles:
                    handler->string_value("NCAAFBSpecialTeamsAssistedTackles");
                    break;
                case Value_NCAAFBSpecialTeamsCombinedTackles:
                    handler->string_value("NCAAFBSpecialTeamsCombinedTackles");
                    break;
                case Value_NCAAFBSpecialTeamsForcedFumbles:
                    handler->string_value("NCAAFBSpecialTeamsForcedFumbles");
                    break;
                case Value_NCAAFBSpecialTeamsFumblesRecovered:
                    handler->string_value("NCAAFBSpecialTeamsFumblesRecovered");
                    break;
                case Value_NCAAFBSpecialTeamsTotalTackles:
                    handler->string_value("NCAAFBSpecialTeamsTotalTackles");
                    break;
                case Value_NCAAFBTacklesAssisted:
                    handler->string_value("NCAAFBTacklesAssisted");
                    break;
                case Value_NCAAFBTacklesCombined:
                    handler->string_value("NCAAFBTacklesCombined");
                    break;
                case Value_NCAAFBTacklesForLoss:
                    handler->string_value("NCAAFBTacklesForLoss");
                    break;
                case Value_NCAAFBTackles:
                    handler->string_value("NCAAFBTackles");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturns10PlusYards:
                    handler->string_value("NCAAFBBlockedFieldGoalReturns10PlusYards");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturns20PlusYards:
                    handler->string_value("NCAAFBBlockedFieldGoalReturns20PlusYards");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturns30PlusYards:
                    handler->string_value("NCAAFBBlockedFieldGoalReturns30PlusYards");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturns40PlusYards:
                    handler->string_value("NCAAFBBlockedFieldGoalReturns40PlusYards");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturns50PlusYards:
                    handler->string_value("NCAAFBBlockedFieldGoalReturns50PlusYards");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturnsAverageReturn:
                    handler->string_value("NCAAFBBlockedFieldGoalReturnsAverageReturn");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturnsLongestReturn:
                    handler->string_value("NCAAFBBlockedFieldGoalReturnsLongestReturn");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturns:
                    handler->string_value("NCAAFBBlockedFieldGoalReturns");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturnsTotalYards:
                    handler->string_value("NCAAFBBlockedFieldGoalReturnsTotalYards");
                    break;
                case Value_NCAAFBBlockedFieldGoalReturnsTouchdowns:
                    handler->string_value("NCAAFBBlockedFieldGoalReturnsTouchdowns");
                    break;
                case Value_NCAAFBBlockedPuntReturn10PlusYards:
                    handler->string_value("NCAAFBBlockedPuntReturn10PlusYards");
                    break;
                case Value_NCAAFBBlockedPuntReturn20PlusYards:
                    handler->string_value("NCAAFBBlockedPuntReturn20PlusYards");
                    break;
                case Value_NCAAFBBlockedPuntReturn30PlusYards:
                    handler->string_value("NCAAFBBlockedPuntReturn30PlusYards");
                    break;
                case Value_NCAAFBBlockedPuntReturn40PlusYards:
                    handler->string_value("NCAAFBBlockedPuntReturn40PlusYards");
                    break;
                case Value_NCAAFBBlockedPuntReturn50PlusYards:
                    handler->string_value("NCAAFBBlockedPuntReturn50PlusYards");
                    break;
                case Value_NCAAFBBlockedPuntReturnsAverageReturn:
                    handler->string_value("NCAAFBBlockedPuntReturnsAverageReturn");
                    break;
                case Value_NCAAFBBlockedPuntReturnsLongestReturn:
                    handler->string_value("NCAAFBBlockedPuntReturnsLongestReturn");
                    break;
                case Value_NCAAFBBlockedPuntReturns:
                    handler->string_value("NCAAFBBlockedPuntReturns");
                    break;
                case Value_NCAAFBBlockedPuntReturnsTotalYards:
                    handler->string_value("NCAAFBBlockedPuntReturnsTotalYards");
                    break;
                case Value_NCAAFBBlockedPuntReturnsTouchdowns:
                    handler->string_value("NCAAFBBlockedPuntReturnsTouchdowns");
                    break;
                case Value_NCAAFBExtraPointsAttempted:
                    handler->string_value("NCAAFBExtraPointsAttempted");
                    break;
                case Value_NCAAFBExtraPointsAttemptedKicking:
                    handler->string_value("NCAAFBExtraPointsAttemptedKicking");
                    break;
                case Value_NCAAFBExtraPointsAttempted2PointConversion:
                    handler->string_value("NCAAFBExtraPointsAttempted2PointConversion");
                    break;
                case Value_NCAAFBExtraPointsBlocked:
                    handler->string_value("NCAAFBExtraPointsBlocked");
                    break;
                case Value_NCAAFBExtraPointsMade:
                    handler->string_value("NCAAFBExtraPointsMade");
                    break;
                case Value_NCAAFBExtraPointsMadeKicking:
                    handler->string_value("NCAAFBExtraPointsMadeKicking");
                    break;
                case Value_NCAAFBExtraPointsMade2PointConversion:
                    handler->string_value("NCAAFBExtraPointsMade2PointConversion");
                    break;
                case Value_NCAAFBExtraPointsPerc:
                    handler->string_value("NCAAFBExtraPointsPerc");
                    break;
                case Value_NCAAFBFieldGoalReturns10PlusYards:
                    handler->string_value("NCAAFBFieldGoalReturns10PlusYards");
                    break;
                case Value_NCAAFBFieldGoalReturns20PlusYards:
                    handler->string_value("NCAAFBFieldGoalReturns20PlusYards");
                    break;
                case Value_NCAAFBFieldGoalReturns30PlusYards:
                    handler->string_value("NCAAFBFieldGoalReturns30PlusYards");
                    break;
                case Value_NCAAFBFieldGoalReturns40PlusYards:
                    handler->string_value("NCAAFBFieldGoalReturns40PlusYards");
                    break;
                case Value_NCAAFBFieldGoalReturns50PlusYards:
                    handler->string_value("NCAAFBFieldGoalReturns50PlusYards");
                    break;
                case Value_NCAAFBFieldGoalReturnsAverageReturn:
                    handler->string_value("NCAAFBFieldGoalReturnsAverageReturn");
                    break;
                case Value_NCAAFBFieldGoalReturnsLongestReturn:
                    handler->string_value("NCAAFBFieldGoalReturnsLongestReturn");
                    break;
                case Value_NCAAFBFieldGoalReturns:
                    handler->string_value("NCAAFBFieldGoalReturns");
                    break;
                case Value_NCAAFBFieldGoalReturnsTotalYards:
                    handler->string_value("NCAAFBFieldGoalReturnsTotalYards");
                    break;
                case Value_NCAAFBFieldGoalReturnsTouchdowns:
                    handler->string_value("NCAAFBFieldGoalReturnsTouchdowns");
                    break;
                case Value_NCAAFBFieldGoalsAttempted:
                    handler->string_value("NCAAFBFieldGoalsAttempted");
                    break;
                case Value_NCAAFBFieldGoalsAttempted1to19Yards:
                    handler->string_value("NCAAFBFieldGoalsAttempted1to19Yards");
                    break;
                case Value_NCAAFBFieldGoalsAttempted20to29Yards:
                    handler->string_value("NCAAFBFieldGoalsAttempted20to29Yards");
                    break;
                case Value_NCAAFBFieldGoalsAttempted30to39Yards:
                    handler->string_value("NCAAFBFieldGoalsAttempted30to39Yards");
                    break;
                case Value_NCAAFBFieldGoalsAttempted40to49Yards:
                    handler->string_value("NCAAFBFieldGoalsAttempted40to49Yards");
                    break;
                case Value_NCAAFBFieldGoalsAttempted50PlusYards:
                    handler->string_value("NCAAFBFieldGoalsAttempted50PlusYards");
                    break;
                case Value_NCAAFBFieldGoalsBlocked:
                    handler->string_value("NCAAFBFieldGoalsBlocked");
                    break;
                case Value_NCAAFBFieldGoalsLongestMade:
                    handler->string_value("NCAAFBFieldGoalsLongestMade");
                    break;
                case Value_NCAAFBFieldGoalsMade:
                    handler->string_value("NCAAFBFieldGoalsMade");
                    break;
                case Value_NCAAFBFieldGoalsMade1to19Yards:
                    handler->string_value("NCAAFBFieldGoalsMade1to19Yards");
                    break;
                case Value_NCAAFBFieldGoalsMade20to29Yards:
                    handler->string_value("NCAAFBFieldGoalsMade20to29Yards");
                    break;
                case Value_NCAAFBFieldGoalsMade30to39Yards:
                    handler->string_value("NCAAFBFieldGoalsMade30to39Yards");
                    break;
                case Value_NCAAFBFieldGoalsMade40to49Yards:
                    handler->string_value("NCAAFBFieldGoalsMade40to49Yards");
                    break;
                case Value_NCAAFBFieldGoalsMade50PlusYards:
                    handler->string_value("NCAAFBFieldGoalsMade50PlusYards");
                    break;
                case Value_NCAAFBFieldGoalsPerc:
                    handler->string_value("NCAAFBFieldGoalsPerc");
                    break;
                case Value_NCAAFBKickoffReturns10PlusYards:
                    handler->string_value("NCAAFBKickoffReturns10PlusYards");
                    break;
                case Value_NCAAFBKickoffReturns20PlusYards:
                    handler->string_value("NCAAFBKickoffReturns20PlusYards");
                    break;
                case Value_NCAAFBKickoffReturns30PlusYards:
                    handler->string_value("NCAAFBKickoffReturns30PlusYards");
                    break;
                case Value_NCAAFBKickoffReturns40PlusYards:
                    handler->string_value("NCAAFBKickoffReturns40PlusYards");
                    break;
                case Value_NCAAFBKickoffReturns50PlusYards:
                    handler->string_value("NCAAFBKickoffReturns50PlusYards");
                    break;
                case Value_NCAAFBKickoffReturnsAverageRun:
                    handler->string_value("NCAAFBKickoffReturnsAverageRun");
                    break;
                case Value_NCAAFBKickoffReturnsFairCatches:
                    handler->string_value("NCAAFBKickoffReturnsFairCatches");
                    break;
                case Value_NCAAFBKickoffReturnsLongestKickReturn:
                    handler->string_value("NCAAFBKickoffReturnsLongestKickReturn");
                    break;
                case Value_NCAAFBKickoffReturnsReturns:
                    handler->string_value("NCAAFBKickoffReturnsReturns");
                    break;
                case Value_NCAAFBKickoffReturnsTouchdowns:
                    handler->string_value("NCAAFBKickoffReturnsTouchdowns");
                    break;
                case Value_NCAAFBKickoffReturnsYards:
                    handler->string_value("NCAAFBKickoffReturnsYards");
                    break;
                case Value_NCAAFBKickoffsAverageGrossYards:
                    handler->string_value("NCAAFBKickoffsAverageGrossYards");
                    break;
                case Value_NCAAFBKickoffsAverageNetYards:
                    handler->string_value("NCAAFBKickoffsAverageNetYards");
                    break;
                case Value_NCAAFBKickoffsAverageReturnYards:
                    handler->string_value("NCAAFBKickoffsAverageReturnYards");
                    break;
                case Value_NCAAFBKickoffsEndZoneKicks:
                    handler->string_value("NCAAFBKickoffsEndZoneKicks");
                    break;
                case Value_NCAAFBKickoffsGrossYards:
                    handler->string_value("NCAAFBKickoffsGrossYards");
                    break;
                case Value_NCAAFBKickoffsInsideOpponents20YardLine:
                    handler->string_value("NCAAFBKickoffsInsideOpponents20YardLine");
                    break;
                case Value_NCAAFBKickoffsKicks:
                    handler->string_value("NCAAFBKickoffsKicks");
                    break;
                case Value_NCAAFBKickoffsLongestKick:
                    handler->string_value("NCAAFBKickoffsLongestKick");
                    break;
                case Value_NCAAFBKickoffsNetYards:
                    handler->string_value("NCAAFBKickoffsNetYards");
                    break;
                case Value_NCAAFBKickoffsInsideOpponents20YardLinePerc:
                    handler->string_value("NCAAFBKickoffsInsideOpponents20YardLinePerc");
                    break;
                case Value_NCAAFBKickoffsTouchbacksPerc:
                    handler->string_value("NCAAFBKickoffsTouchbacksPerc");
                    break;
                case Value_NCAAFBKickoffsReturned:
                    handler->string_value("NCAAFBKickoffsReturned");
                    break;
                case Value_NCAAFBKickoffsTotalReturnYards:
                    handler->string_value("NCAAFBKickoffsTotalReturnYards");
                    break;
                case Value_NCAAFBKickoffsTouchbacks:
                    handler->string_value("NCAAFBKickoffsTouchbacks");
                    break;
                case Value_NCAAFBPuntReturns10PlusYards:
                    handler->string_value("NCAAFBPuntReturns10PlusYards");
                    break;
                case Value_NCAAFBPuntReturns20PlusYards:
                    handler->string_value("NCAAFBPuntReturns20PlusYards");
                    break;
                case Value_NCAAFBPuntReturns30PlusYards:
                    handler->string_value("NCAAFBPuntReturns30PlusYards");
                    break;
                case Value_NCAAFBPuntReturns40PlusYards:
                    handler->string_value("NCAAFBPuntReturns40PlusYards");
                    break;
                case Value_NCAAFBPuntReturns50PlusYards:
                    handler->string_value("NCAAFBPuntReturns50PlusYards");
                    break;
                case Value_NCAAFBPuntReturnsAverageRun:
                    handler->string_value("NCAAFBPuntReturnsAverageRun");
                    break;
                case Value_NCAAFBPuntReturnsFairCatches:
                    handler->string_value("NCAAFBPuntReturnsFairCatches");
                    break;
                case Value_NCAAFBPuntReturnsLongestKickReturn:
                    handler->string_value("NCAAFBPuntReturnsLongestKickReturn");
                    break;
                case Value_NCAAFBPuntReturns:
                    handler->string_value("NCAAFBPuntReturns");
                    break;
                case Value_NCAAFBPuntReturnsTouchdowns:
                    handler->string_value("NCAAFBPuntReturnsTouchdowns");
                    break;
                case Value_NCAAFBPuntReturnsYards:
                    handler->string_value("NCAAFBPuntReturnsYards");
                    break;
                case Value_NCAAFBPuntingAverageGrossYards:
                    handler->string_value("NCAAFBPuntingAverageGrossYards");
                    break;
                case Value_NCAAFBPuntingAverageNetYards:
                    handler->string_value("NCAAFBPuntingAverageNetYards");
                    break;
                case Value_NCAAFBPuntingAverageReturnYards:
                    handler->string_value("NCAAFBPuntingAverageReturnYards");
                    break;
                case Value_NCAAFBPuntingBlocked:
                    handler->string_value("NCAAFBPuntingBlocked");
                    break;
                case Value_NCAAFBPuntingGrossYards:
                    handler->string_value("NCAAFBPuntingGrossYards");
                    break;
                case Value_NCAAFBPuntingInsideOpponents20YardLine:
                    handler->string_value("NCAAFBPuntingInsideOpponents20YardLine");
                    break;
                case Value_NCAAFBPuntingLongestPunt:
                    handler->string_value("NCAAFBPuntingLongestPunt");
                    break;
                case Value_NCAAFBPuntingNetYards:
                    handler->string_value("NCAAFBPuntingNetYards");
                    break;
                case Value_NCAAFBPuntingInsideOpponents20YardLinePerc:
                    handler->string_value("NCAAFBPuntingInsideOpponents20YardLinePerc");
                    break;
                case Value_NCAAFBPuntingTouchbacksPerc:
                    handler->string_value("NCAAFBPuntingTouchbacksPerc");
                    break;
                case Value_NCAAFBPuntingPunts:
                    handler->string_value("NCAAFBPuntingPunts");
                    break;
                case Value_NCAAFBPuntingReturnYards:
                    handler->string_value("NCAAFBPuntingReturnYards");
                    break;
                case Value_NCAAFBPuntingReturned:
                    handler->string_value("NCAAFBPuntingReturned");
                    break;
                case Value_NCAAFBPuntingTouchbacks:
                    handler->string_value("NCAAFBPuntingTouchbacks");
                    break;
                case Value_NCAAFBFumblesForced:
                    handler->string_value("NCAAFBFumblesForced");
                    break;
                case Value_NCAAFBFumbles:
                    handler->string_value("NCAAFBFumbles");
                    break;
                case Value_NCAAFBFumblesLost:
                    handler->string_value("NCAAFBFumblesLost");
                    break;
                case Value_NCAAFBFumblesOpponentRecovery:
                    handler->string_value("NCAAFBFumblesOpponentRecovery");
                    break;
                case Value_NCAAFBFumblesOpponentTouchdownsFromRecovery:
                    handler->string_value("NCAAFBFumblesOpponentTouchdownsFromRecovery");
                    break;
                case Value_NCAAFBFumblesOutOfBounds:
                    handler->string_value("NCAAFBFumblesOutOfBounds");
                    break;
                case Value_NCAAFBFumblesOwnRecovery:
                    handler->string_value("NCAAFBFumblesOwnRecovery");
                    break;
                case Value_NCAAFBFumblesOwnTouchdownsFromRecovery:
                    handler->string_value("NCAAFBFumblesOwnTouchdownsFromRecovery");
                    break;
                case Value_NCAAFBFumblesYardsFromOpponentRecovery:
                    handler->string_value("NCAAFBFumblesYardsFromOpponentRecovery");
                    break;
                case Value_NCAAFBFumblesYardsFromOwnRecovery:
                    handler->string_value("NCAAFBFumblesYardsFromOwnRecovery");
                    break;
                case Value_NCAAFBPenalties1stDowns:
                    handler->string_value("NCAAFBPenalties1stDowns");
                    break;
                case Value_NCAAFBPenalties:
                    handler->string_value("NCAAFBPenalties");
                    break;
                case Value_NCAAFBPenaltiesYards:
                    handler->string_value("NCAAFBPenaltiesYards");
                    break;
                case Value_NBAAssists:
                    handler->string_value("NBAAssists");
                    break;
                case Value_NBAAssistsPerGame:
                    handler->string_value("NBAAssistsPerGame");
                    break;
                case Value_NBAAssistsToTurnoverRatio:
                    handler->string_value("NBAAssistsToTurnoverRatio");
                    break;
                case Value_NBABlockedAttempts:
                    handler->string_value("NBABlockedAttempts");
                    break;
                case Value_NBABlockedAttemptsPerGame:
                    handler->string_value("NBABlockedAttemptsPerGame");
                    break;
                case Value_NBABlockedShots:
                    handler->string_value("NBABlockedShots");
                    break;
                case Value_NBABlockedShotsPerGame:
                    handler->string_value("NBABlockedShotsPerGame");
                    break;
                case Value_NBACoachTechnicalFouls:
                    handler->string_value("NBACoachTechnicalFouls");
                    break;
                case Value_NBADefensiveRebounds:
                    handler->string_value("NBADefensiveRebounds");
                    break;
                case Value_NBADefensiveReboundsPerGame:
                    handler->string_value("NBADefensiveReboundsPerGame");
                    break;
                case Value_NBAEjections:
                    handler->string_value("NBAEjections");
                    break;
                case Value_NBAFastBreakPoints:
                    handler->string_value("NBAFastBreakPoints");
                    break;
                case Value_NBAFastBreakPointsPerGame:
                    handler->string_value("NBAFastBreakPointsPerGame");
                    break;
                case Value_NBAFieldGoalAttempts:
                    handler->string_value("NBAFieldGoalAttempts");
                    break;
                case Value_NBAFieldGoalAttemptsPerGame:
                    handler->string_value("NBAFieldGoalAttemptsPerGame");
                    break;
                case Value_NBAFieldGoalPercentage:
                    handler->string_value("NBAFieldGoalPercentage");
                    break;
                case Value_NBAFieldGoalsMade:
                    handler->string_value("NBAFieldGoalsMade");
                    break;
                case Value_NBAFieldGoalsMadePerGame:
                    handler->string_value("NBAFieldGoalsMadePerGame");
                    break;
                case Value_NBAFlagrantFouls:
                    handler->string_value("NBAFlagrantFouls");
                    break;
                case Value_NBAFlagrantFoulsPerGame:
                    handler->string_value("NBAFlagrantFoulsPerGame");
                    break;
                case Value_NBAFreeThrowAttempts:
                    handler->string_value("NBAFreeThrowAttempts");
                    break;
                case Value_NBAFreeThrowAttemptsPerGame:
                    handler->string_value("NBAFreeThrowAttemptsPerGame");
                    break;
                case Value_NBAFreeThrowPercentage:
                    handler->string_value("NBAFreeThrowPercentage");
                    break;
                case Value_NBAFreeThrowsMade:
                    handler->string_value("NBAFreeThrowsMade");
                    break;
                case Value_NBAFreeThrowsMadePerGame:
                    handler->string_value("NBAFreeThrowsMadePerGame");
                    break;
                case Value_NBAGamesPlayed:
                    handler->string_value("NBAGamesPlayed");
                    break;
                case Value_NBAGamesStarted:
                    handler->string_value("NBAGamesStarted");
                    break;
                case Value_NBAMinutesPlayed:
                    handler->string_value("NBAMinutesPlayed");
                    break;
                case Value_NBAMinutesPlayedPerGame:
                    handler->string_value("NBAMinutesPlayedPerGame");
                    break;
                case Value_NBAOffensiveRebounds:
                    handler->string_value("NBAOffensiveRebounds");
                    break;
                case Value_NBAOffensiveReboundsPerGame:
                    handler->string_value("NBAOffensiveReboundsPerGame");
                    break;
                case Value_NBAPersonalFouls:
                    handler->string_value("NBAPersonalFouls");
                    break;
                case Value_NBAPersonalFoulsPerGame:
                    handler->string_value("NBAPersonalFoulsPerGame");
                    break;
                case Value_NBAPoints:
                    handler->string_value("NBAPoints");
                    break;
                case Value_NBAPointsPerGame:
                    handler->string_value("NBAPointsPerGame");
                    break;
                case Value_NBAPointsInPaint:
                    handler->string_value("NBAPointsInPaint");
                    break;
                case Value_NBAPointsInPaintPerGame:
                    handler->string_value("NBAPointsInPaintPerGame");
                    break;
                case Value_NBAPointsOffTurnovers:
                    handler->string_value("NBAPointsOffTurnovers");
                    break;
                case Value_NBAPointsOffTurnoversPerGame:
                    handler->string_value("NBAPointsOffTurnoversPerGame");
                    break;
                case Value_NBARebounds:
                    handler->string_value("NBARebounds");
                    break;
                case Value_NBAReboundsPerGame:
                    handler->string_value("NBAReboundsPerGame");
                    break;
                case Value_NBASecondChancePoints:
                    handler->string_value("NBASecondChancePoints");
                    break;
                case Value_NBASecondChancePointsPerGame:
                    handler->string_value("NBASecondChancePointsPerGame");
                    break;
                case Value_NBASteals:
                    handler->string_value("NBASteals");
                    break;
                case Value_NBAStealsPerGame:
                    handler->string_value("NBAStealsPerGame");
                    break;
                case Value_NBATeamTechnicalFouls:
                    handler->string_value("NBATeamTechnicalFouls");
                    break;
                case Value_NBAPlayerTechnicalFouls:
                    handler->string_value("NBAPlayerTechnicalFouls");
                    break;
                case Value_NBAThreePointAttempts:
                    handler->string_value("NBAThreePointAttempts");
                    break;
                case Value_NBAThreePointAttemptsPerGame:
                    handler->string_value("NBAThreePointAttemptsPerGame");
                    break;
                case Value_NBAThreePointPercentage:
                    handler->string_value("NBAThreePointPercentage");
                    break;
                case Value_NBAThreePointsMade:
                    handler->string_value("NBAThreePointsMade");
                    break;
                case Value_NBAThreePointsMadePerGame:
                    handler->string_value("NBAThreePointsMadePerGame");
                    break;
                case Value_NBATurnovers:
                    handler->string_value("NBATurnovers");
                    break;
                case Value_NBATurnoversPerGame:
                    handler->string_value("NBATurnoversPerGame");
                    break;
                case Value_NBATwoPointAttempts:
                    handler->string_value("NBATwoPointAttempts");
                    break;
                case Value_NBATwoPointAttemptsPerGame:
                    handler->string_value("NBATwoPointAttemptsPerGame");
                    break;
                case Value_NBATwoPointPercentage:
                    handler->string_value("NBATwoPointPercentage");
                    break;
                case Value_NBATwoPointsMade:
                    handler->string_value("NBATwoPointsMade");
                    break;
                case Value_NBATwoPointsMadePerGame:
                    handler->string_value("NBATwoPointsMadePerGame");
                    break;
                case Value_NCAAMBAssists:
                    handler->string_value("NCAAMBAssists");
                    break;
                case Value_NCAAMBAssistsPerGame:
                    handler->string_value("NCAAMBAssistsPerGame");
                    break;
                case Value_NCAAMBAssistsToTurnoverRatio:
                    handler->string_value("NCAAMBAssistsToTurnoverRatio");
                    break;
                case Value_NCAAMBBlockedAttempts:
                    handler->string_value("NCAAMBBlockedAttempts");
                    break;
                case Value_NCAAMBBlockedAttemptsPerGame:
                    handler->string_value("NCAAMBBlockedAttemptsPerGame");
                    break;
                case Value_NCAAMBBlockedShots:
                    handler->string_value("NCAAMBBlockedShots");
                    break;
                case Value_NCAAMBBlockedShotsPerGame:
                    handler->string_value("NCAAMBBlockedShotsPerGame");
                    break;
                case Value_NCAAMBCoachTechnicalFouls:
                    handler->string_value("NCAAMBCoachTechnicalFouls");
                    break;
                case Value_NCAAMBDefensiveRebounds:
                    handler->string_value("NCAAMBDefensiveRebounds");
                    break;
                case Value_NCAAMBDefensiveReboundsPerGame:
                    handler->string_value("NCAAMBDefensiveReboundsPerGame");
                    break;
                case Value_NCAAMBEjections:
                    handler->string_value("NCAAMBEjections");
                    break;
                case Value_NCAAMBFastBreakPoints:
                    handler->string_value("NCAAMBFastBreakPoints");
                    break;
                case Value_NCAAMBFastBreakPointsPerGame:
                    handler->string_value("NCAAMBFastBreakPointsPerGame");
                    break;
                case Value_NCAAMBFieldGoalAttempts:
                    handler->string_value("NCAAMBFieldGoalAttempts");
                    break;
                case Value_NCAAMBFieldGoalAttemptsPerGame:
                    handler->string_value("NCAAMBFieldGoalAttemptsPerGame");
                    break;
                case Value_NCAAMBFieldGoalPercentage:
                    handler->string_value("NCAAMBFieldGoalPercentage");
                    break;
                case Value_NCAAMBFieldGoalsMade:
                    handler->string_value("NCAAMBFieldGoalsMade");
                    break;
                case Value_NCAAMBFieldGoalsMadePerGame:
                    handler->string_value("NCAAMBFieldGoalsMadePerGame");
                    break;
                case Value_NCAAMBFlagrantFouls:
                    handler->string_value("NCAAMBFlagrantFouls");
                    break;
                case Value_NCAAMBFlagrantFoulsPerGame:
                    handler->string_value("NCAAMBFlagrantFoulsPerGame");
                    break;
                case Value_NCAAMBFreeThrowAttempts:
                    handler->string_value("NCAAMBFreeThrowAttempts");
                    break;
                case Value_NCAAMBFreeThrowAttemptsPerGame:
                    handler->string_value("NCAAMBFreeThrowAttemptsPerGame");
                    break;
                case Value_NCAAMBFreeThrowPercentage:
                    handler->string_value("NCAAMBFreeThrowPercentage");
                    break;
                case Value_NCAAMBFreeThrowsMade:
                    handler->string_value("NCAAMBFreeThrowsMade");
                    break;
                case Value_NCAAMBFreeThrowsMadePerGame:
                    handler->string_value("NCAAMBFreeThrowsMadePerGame");
                    break;
                case Value_NCAAMBGamesPlayed:
                    handler->string_value("NCAAMBGamesPlayed");
                    break;
                case Value_NCAAMBGamesStarted:
                    handler->string_value("NCAAMBGamesStarted");
                    break;
                case Value_NCAAMBMinutesPlayed:
                    handler->string_value("NCAAMBMinutesPlayed");
                    break;
                case Value_NCAAMBMinutesPlayedPerGame:
                    handler->string_value("NCAAMBMinutesPlayedPerGame");
                    break;
                case Value_NCAAMBOffensiveRebounds:
                    handler->string_value("NCAAMBOffensiveRebounds");
                    break;
                case Value_NCAAMBOffensiveReboundsPerGame:
                    handler->string_value("NCAAMBOffensiveReboundsPerGame");
                    break;
                case Value_NCAAMBPersonalFouls:
                    handler->string_value("NCAAMBPersonalFouls");
                    break;
                case Value_NCAAMBPersonalFoulsPerGame:
                    handler->string_value("NCAAMBPersonalFoulsPerGame");
                    break;
                case Value_NCAAMBPoints:
                    handler->string_value("NCAAMBPoints");
                    break;
                case Value_NCAAMBPointsPerGame:
                    handler->string_value("NCAAMBPointsPerGame");
                    break;
                case Value_NCAAMBPointsInPaint:
                    handler->string_value("NCAAMBPointsInPaint");
                    break;
                case Value_NCAAMBPointsInPaintPerGame:
                    handler->string_value("NCAAMBPointsInPaintPerGame");
                    break;
                case Value_NCAAMBPointsOffTurnovers:
                    handler->string_value("NCAAMBPointsOffTurnovers");
                    break;
                case Value_NCAAMBPointsOffTurnoversPerGame:
                    handler->string_value("NCAAMBPointsOffTurnoversPerGame");
                    break;
                case Value_NCAAMBRebounds:
                    handler->string_value("NCAAMBRebounds");
                    break;
                case Value_NCAAMBReboundsPerGame:
                    handler->string_value("NCAAMBReboundsPerGame");
                    break;
                case Value_NCAAMBSecondChancePoints:
                    handler->string_value("NCAAMBSecondChancePoints");
                    break;
                case Value_NCAAMBSecondChancePointsPerGame:
                    handler->string_value("NCAAMBSecondChancePointsPerGame");
                    break;
                case Value_NCAAMBSteals:
                    handler->string_value("NCAAMBSteals");
                    break;
                case Value_NCAAMBStealsPerGame:
                    handler->string_value("NCAAMBStealsPerGame");
                    break;
                case Value_NCAAMBTeamTechnicalFouls:
                    handler->string_value("NCAAMBTeamTechnicalFouls");
                    break;
                case Value_NCAAMBPlayerTechnicalFouls:
                    handler->string_value("NCAAMBPlayerTechnicalFouls");
                    break;
                case Value_NCAAMBThreePointAttempts:
                    handler->string_value("NCAAMBThreePointAttempts");
                    break;
                case Value_NCAAMBThreePointAttemptsPerGame:
                    handler->string_value("NCAAMBThreePointAttemptsPerGame");
                    break;
                case Value_NCAAMBThreePointPercentage:
                    handler->string_value("NCAAMBThreePointPercentage");
                    break;
                case Value_NCAAMBThreePointsMade:
                    handler->string_value("NCAAMBThreePointsMade");
                    break;
                case Value_NCAAMBThreePointsMadePerGame:
                    handler->string_value("NCAAMBThreePointsMadePerGame");
                    break;
                case Value_NCAAMBTurnovers:
                    handler->string_value("NCAAMBTurnovers");
                    break;
                case Value_NCAAMBTurnoversPerGame:
                    handler->string_value("NCAAMBTurnoversPerGame");
                    break;
                case Value_NCAAMBTwoPointAttempts:
                    handler->string_value("NCAAMBTwoPointAttempts");
                    break;
                case Value_NCAAMBTwoPointAttemptsPerGame:
                    handler->string_value("NCAAMBTwoPointAttemptsPerGame");
                    break;
                case Value_NCAAMBTwoPointPercentage:
                    handler->string_value("NCAAMBTwoPointPercentage");
                    break;
                case Value_NCAAMBTwoPointsMade:
                    handler->string_value("NCAAMBTwoPointsMade");
                    break;
                case Value_NCAAMBTwoPointsMadePerGame:
                    handler->string_value("NCAAMBTwoPointsMadePerGame");
                    break;
                case Value_SoccerBallPossessions:
                    handler->string_value("SoccerBallPossessions");
                    break;
                case Value_SoccerCardsGiven:
                    handler->string_value("SoccerCardsGiven");
                    break;
                case Value_SoccerCornerKicks:
                    handler->string_value("SoccerCornerKicks");
                    break;
                case Value_SoccerFreeKicks:
                    handler->string_value("SoccerFreeKicks");
                    break;
                case Value_SoccerGoalAttempts:
                    handler->string_value("SoccerGoalAttempts");
                    break;
                case Value_SoccerGoalsByFoot:
                    handler->string_value("SoccerGoalsByFoot");
                    break;
                case Value_SoccerGoalsByHeaders:
                    handler->string_value("SoccerGoalsByHeaders");
                    break;
                case Value_SoccerGoalsByTime00To15:
                    handler->string_value("SoccerGoalsByTime00To15");
                    break;
                case Value_SoccerGoalsByTime16To30:
                    handler->string_value("SoccerGoalsByTime16To30");
                    break;
                case Value_SoccerGoalsByTime31To45:
                    handler->string_value("SoccerGoalsByTime31To45");
                    break;
                case Value_SoccerGoalsByTime46To60:
                    handler->string_value("SoccerGoalsByTime46To60");
                    break;
                case Value_SoccerGoalsByTime61To75:
                    handler->string_value("SoccerGoalsByTime61To75");
                    break;
                case Value_SoccerGoalsByTime76To90:
                    handler->string_value("SoccerGoalsByTime76To90");
                    break;
                case Value_SoccerGoalsConceded:
                    handler->string_value("SoccerGoalsConceded");
                    break;
                case Value_SoccerGoalsConcededByTime00To15:
                    handler->string_value("SoccerGoalsConcededByTime00To15");
                    break;
                case Value_SoccerGoalsConcededByTime16To30:
                    handler->string_value("SoccerGoalsConcededByTime16To30");
                    break;
                case Value_SoccerGoalsConcededByTime31To45:
                    handler->string_value("SoccerGoalsConcededByTime31To45");
                    break;
                case Value_SoccerGoalsConcededByTime46To60:
                    handler->string_value("SoccerGoalsConcededByTime46To60");
                    break;
                case Value_SoccerGoalsConcededByTime61To75:
                    handler->string_value("SoccerGoalsConcededByTime61To75");
                    break;
                case Value_SoccerGoalsConcededByTime76To90:
                    handler->string_value("SoccerGoalsConcededByTime76To90");
                    break;
                case Value_SoccerGoalsScored:
                    handler->string_value("SoccerGoalsScored");
                    break;
                case Value_SoccerMatchesPlayed:
                    handler->string_value("SoccerMatchesPlayed");
                    break;
                case Value_SoccerOffsides:
                    handler->string_value("SoccerOffsides");
                    break;
                case Value_SoccerOwnGoals:
                    handler->string_value("SoccerOwnGoals");
                    break;
                case Value_SoccerShotsBlocked:
                    handler->string_value("SoccerShotsBlocked");
                    break;
                case Value_SoccerShotsOffGoal:
                    handler->string_value("SoccerShotsOffGoal");
                    break;
                case Value_SoccerShotsOnGoal:
                    handler->string_value("SoccerShotsOnGoal");
                    break;
                case Value_SoccerSubstitutedIn:
                    handler->string_value("SoccerSubstitutedIn");
                    break;
                case Value_SoccerSubstitutedOut:
                    handler->string_value("SoccerSubstitutedOut");
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

    static SportsStatsTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool> generator("Type SportsStatsType", ignore_extras);
            parse_json_value(text, "Text for SportsStatsTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool> generator("Type SportsStatsType", ignore_extras);
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
            SportsStatsTypeJSON *result = new SportsStatsTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SportsStatsTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSSTATSTYPEJSON_H */
