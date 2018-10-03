/* file "RequestInfoJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef REQUESTINFOJSON_H
#define REQUESTINFOJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONObjectValueGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONParallelGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "RoutePointsJSON.h"
#include "ConversationStateJSON.h"
#include "ClientStateJSON.h"
#include "DomainsJSON.h"
#include "ClientMatchJSON.h"
#include "VoiceActivityDetectionJSON.h"
#include "PhoneDisambiguationOmitListJSON.h"
#include "IncomingCallPendingJSON.h"
#include "AllowPopularNameContactMatchesJSON.h"
#include "MusicClientStateJSON.h"
#include "DisableListPositionSpecificationJSON.h"
#include "CollateMusicEntitiesJSON.h"
#include "AllowContextFreeMusicSearchForPopularEntitiesJSON.h"
#include "SportsLeagueControlJSON.h"
#include "LocalSearchClientStateJSON.h"
#include "UberServerTokenJSON.h"
#include "GetUberServerTokenJSON.h"
#include "UberClientIdJSON.h"
#include "GetUberClientIdJSON.h"
#include "DisableListPositionSpecificationJSON.h"
#include "HomeAutomationDomainSettingsJSON.h"
#include "UserContactsRequestsJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchPageListJSON.h"
#include "StoredPageMatchWriteDataJSON.h"
#include "StoredPageMatchReadDataJSON.h"
#include "StoredPageMatchPageListDataJSON.h"
#include "VoiceParametersJSON.h"
#include "ClientMatchesJSON.h"
#include "StoredAlwaysMatchReadDataJSON.h"
#include "UserFeedbackJSON.h"
#include "RadioControlRecognizeNorthAmericanFMBandJSON.h"
#include "RadioControlRecognizeNorthAmericanAMBandJSON.h"
#include "RadioControlOtherFMBandsJSON.h"
#include "RadioControlOtherAMBandsJSON.h"
#include "ClientListMatchesJSON.h"
#include "CommandIntentJSON.h"
#include "RobotInfoJSON.h"
#include "ConvertToNewInformationNuggetsJSON.h"
#include "AcapelaVoiceParametersJSON.h"
#include "DisambiguateResultsBeforeActionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RequestInfoJSON : public ReferenceCounted
  {
  public:
    enum TypeUnitPreference
      {
        UnitPreference_US,
        UnitPreference_METRIC
      };

    static TypeUnitPreference  stringToUnitPreference(const char *chars);
    static const char * stringFromUnitPreference(TypeUnitPreference the_enum);
    struct TypeClientVersion
      {
        size_t key;
        std::string choice0;
        OInteger choice1;
      };
    enum TypeProfanityFilter
      {
        ProfanityFilter_AllowAll,
        ProfanityFilter_StarOne,
        ProfanityFilter_StarAllButFirst,
        ProfanityFilter_StarAll,
        ProfanityFilter_DontRecognize
      };

    static TypeProfanityFilter  stringToProfanityFilter(const char *chars);
    static const char * stringFromProfanityFilter(TypeProfanityFilter the_enum);
    enum TypeResponseAudioShortOrLong
      {
        ResponseAudioShortOrLong_Short,
        ResponseAudioShortOrLong_Long
      };

    static TypeResponseAudioShortOrLong  stringToResponseAudioShortOrLong(const char *chars);
    static const char * stringFromResponseAudioShortOrLong(TypeResponseAudioShortOrLong the_enum);
    enum TypeResponseAudioAcceptedEncodingsKnownValues
      {
        ResponseAudioAcceptedEncodings_WAV,
        ResponseAudioAcceptedEncodings_Speex,
        ResponseAudioAcceptedEncodings__none
      };
    struct TypeResponseAudioAcceptedEncodings
      {
        bool in_known_list;
        std::string string_value;
        TypeResponseAudioAcceptedEncodingsKnownValues list_value;

        TypeResponseAudioAcceptedEncodings(void);
        TypeResponseAudioAcceptedEncodings(const TypeResponseAudioAcceptedEncodings &other);
        TypeResponseAudioAcceptedEncodings(TypeResponseAudioAcceptedEncodingsKnownValues other);
        bool  operator==(const TypeResponseAudioAcceptedEncodings &other) const;
        bool  operator!=(const TypeResponseAudioAcceptedEncodings &other) const;
        bool  operator<(const TypeResponseAudioAcceptedEncodings &other) const;
        bool  operator>(const TypeResponseAudioAcceptedEncodings &other) const;
        bool  operator>=(const TypeResponseAudioAcceptedEncodings &other) const;
        bool  operator<=(const TypeResponseAudioAcceptedEncodings &other) const;

      };

    static TypeResponseAudioAcceptedEncodingsKnownValues  stringToResponseAudioAcceptedEncodings(const char *chars);
    static const char * stringFromResponseAudioAcceptedEncodings(TypeResponseAudioAcceptedEncodingsKnownValues the_enum);

  private:
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
    bool flagHasPositionTime;
    OInteger storePositionTime;
    bool flagHasPositionHorizontalAccuracy;
    double storePositionHorizontalAccuracy;
    std::string textStorePositionHorizontalAccuracy;
    bool flagHasStreet;
    std::string storeStreet;
    bool flagHasCity;
    std::string storeCity;
    bool flagHasState;
    std::string storeState;
    bool flagHasCountry;
    std::string storeCountry;
    bool flagHasRoutePoints;
    RoutePointsJSON * storeRoutePoints;
    bool flagHasControllableTrackPlaying;
    bool storeControllableTrackPlaying;
    bool flagHasTimeStamp;
    OInteger storeTimeStamp;
    bool flagHasTimeZone;
    std::string storeTimeZone;
    bool flagHasConversationState;
    ConversationStateJSON * storeConversationState;
    bool flagHasClientState;
    ClientStateJSON * storeClientState;
    bool flagHasSendBack;
    JSONValue * storeSendBack;
    bool flagHasPreferredImageSize;
    std::vector< OInteger > storePreferredImageSize;
    bool flagHasInputLanguageEnglishName;
    std::string storeInputLanguageEnglishName;
    bool flagHasInputLanguageNativeName;
    std::string storeInputLanguageNativeName;
    bool flagHasInputLanguageIETFTag;
    std::string storeInputLanguageIETFTag;
    bool flagHasOutputLanguageEnglishName;
    std::string storeOutputLanguageEnglishName;
    bool flagHasOutputLanguageNativeName;
    std::string storeOutputLanguageNativeName;
    bool flagHasOutputLanguageIETFTag;
    std::string storeOutputLanguageIETFTag;
    bool flagHasResultVersionAccepted;
    double storeResultVersionAccepted;
    std::string textStoreResultVersionAccepted;
    bool flagHasUnitPreference;
    TypeUnitPreference storeUnitPreference;
    bool flagHasDefaultTimeFormat24Hours;
    bool storeDefaultTimeFormat24Hours;
    bool flagHasClientID;
    std::string storeClientID;
    bool flagHasClientVersion;
    TypeClientVersion storeClientVersion;
    bool flagHasDeviceID;
    std::string storeDeviceID;
    bool flagHasSDK;
    std::string storeSDK;
    bool flagHasSDKInfo;
    JSONObjectValue * storeSDKInfo;
    bool flagHasFirstPersonSelf;
    std::string storeFirstPersonSelf;
    bool flagHasFirstPersonSelfSpoken;
    std::string storeFirstPersonSelfSpoken;
    bool flagHasSecondPersonSelf;
    std::vector< std::string > storeSecondPersonSelf;
    bool flagHasSecondPersonSelfSpoken;
    std::vector< std::string > storeSecondPersonSelfSpoken;
    bool flagHasWakeUpPattern;
    std::string storeWakeUpPattern;
    bool flagHasUserID;
    std::string storeUserID;
    bool flagHasRequestID;
    std::string storeRequestID;
    bool flagHasSessionID;
    std::string storeSessionID;
    bool flagHasDomains;
    DomainsJSON * storeDomains;
    bool flagHasResultUpdateAllowed;
    bool storeResultUpdateAllowed;
    bool flagHasPartialTranscriptsDesired;
    bool storePartialTranscriptsDesired;
    bool flagHasMinResults;
    OInteger storeMinResults;
    bool flagHasMaxResults;
    OInteger storeMaxResults;
    bool flagHasObjectByteCountPrefix;
    bool storeObjectByteCountPrefix;
    bool flagHasProfanityFilter;
    TypeProfanityFilter storeProfanityFilter;
    bool flagHasClientMatches;
    std::vector< ClientMatchJSON * > storeClientMatches;
    bool flagHasClientMatchesOnly;
    bool storeClientMatchesOnly;
    bool flagHasResponseAudioVoice;
    std::string storeResponseAudioVoice;
    bool flagHasResponseAudioShortOrLong;
    TypeResponseAudioShortOrLong storeResponseAudioShortOrLong;
    bool flagHasResponseAudioAcceptedEncodings;
    std::vector< TypeResponseAudioAcceptedEncodings > storeResponseAudioAcceptedEncodings;
    bool flagHasVoiceActivityDetection;
    VoiceActivityDetectionJSON * storeVoiceActivityDetection;
    bool flagHasServerDeterminesEndOfAudio;
    bool storeServerDeterminesEndOfAudio;
    bool flagHasIntentOnly;
    bool storeIntentOnly;
    bool flagHasDisableSpellCorrection;
    bool storeDisableSpellCorrection;
    bool flagHasUseContactData;
    bool storeUseContactData;
    bool flagHasUseClientTime;
    bool storeUseClientTime;
    bool flagHasForceConversationStateTime;
    OInteger storeForceConversationStateTime;
    bool flagHasPhoneDisambiguationOmitList;
    PhoneDisambiguationOmitListJSON * storePhoneDisambiguationOmitList;
    bool flagHasIncomingCallPending;
    IncomingCallPendingJSON * storeIncomingCallPending;
    bool flagHasAllowPopularNameContactMatches;
    AllowPopularNameContactMatchesJSON * storeAllowPopularNameContactMatches;
    bool flagHasMusicClientState;
    MusicClientStateJSON * storeMusicClientState;
    bool flagHasDisableMusicSearchListPositionSpecification;
    DisableListPositionSpecificationJSON * storeDisableMusicSearchListPositionSpecification;
    bool flagHasCollateMusicEntities;
    CollateMusicEntitiesJSON * storeCollateMusicEntities;
    bool flagHasAllowContextFreeMusicSearchForPopularEntities;
    AllowContextFreeMusicSearchForPopularEntitiesJSON * storeAllowContextFreeMusicSearchForPopularEntities;
    bool flagHasSportsLeagueControl;
    SportsLeagueControlJSON * storeSportsLeagueControl;
    bool flagHasLocalSearchClientState;
    LocalSearchClientStateJSON * storeLocalSearchClientState;
    bool flagHasUberServerToken;
    UberServerTokenJSON * storeUberServerToken;
    bool flagHasGetUberServerToken;
    GetUberServerTokenJSON * storeGetUberServerToken;
    bool flagHasUberClientId;
    UberClientIdJSON * storeUberClientId;
    bool flagHasGetUberClientId;
    GetUberClientIdJSON * storeGetUberClientId;
    bool flagHasDisableMusicPlayerListPositionSpecification;
    DisableListPositionSpecificationJSON * storeDisableMusicPlayerListPositionSpecification;
    bool flagHasHomeAutomationDomainSettings;
    HomeAutomationDomainSettingsJSON * storeHomeAutomationDomainSettings;
    bool flagHasUserContactsRequests;
    UserContactsRequestsJSON * storeUserContactsRequests;
    bool flagHasStoredGlobalPagesToMatch;
    StoredPageMatchPageListJSON * storeStoredGlobalPagesToMatch;
    bool flagHasStoredGlobalPagesToNotMatch;
    StoredPageMatchPageListJSON * storeStoredGlobalPagesToNotMatch;
    bool flagHasStoredPerUserPagesToMatch;
    StoredPageMatchPageListJSON * storeStoredPerUserPagesToMatch;
    bool flagHasStoredPerUserPagesToNotMatch;
    StoredPageMatchPageListJSON * storeStoredPerUserPagesToNotMatch;
    bool flagHasStoredGlobalPagesToSetOnByDefault;
    StoredPageMatchPageListJSON * storeStoredGlobalPagesToSetOnByDefault;
    bool flagHasStoredPerUserPagesToSetOnByDefault;
    StoredPageMatchPageListJSON * storeStoredPerUserPagesToSetOnByDefault;
    bool flagHasStoredGlobalPagesToSetOffByDefault;
    StoredPageMatchPageListJSON * storeStoredGlobalPagesToSetOffByDefault;
    bool flagHasStoredPerUserPagesToSetOffByDefault;
    StoredPageMatchPageListJSON * storeStoredPerUserPagesToSetOffByDefault;
    bool flagHasStoredPageMatchWriteData;
    StoredPageMatchWriteDataJSON * storeStoredPageMatchWriteData;
    bool flagHasStoredPageMatchReadData;
    StoredPageMatchReadDataJSON * storeStoredPageMatchReadData;
    bool flagHasStoredPageMatchPageListData;
    StoredPageMatchPageListDataJSON * storeStoredPageMatchPageListData;
    bool flagHasVoiceParameters;
    VoiceParametersJSON * storeVoiceParameters;
    bool flagHasStoredAlwaysMatchWriteData;
    ClientMatchesJSON * storeStoredAlwaysMatchWriteData;
    bool flagHasStoredAlwaysMatchReadData;
    StoredAlwaysMatchReadDataJSON * storeStoredAlwaysMatchReadData;
    bool flagHasUserFeedback;
    UserFeedbackJSON * storeUserFeedback;
    bool flagHasRadioControlRecognizeNorthAmericanFMBand;
    RadioControlRecognizeNorthAmericanFMBandJSON * storeRadioControlRecognizeNorthAmericanFMBand;
    bool flagHasRadioControlRecognizeNorthAmericanAMBand;
    RadioControlRecognizeNorthAmericanAMBandJSON * storeRadioControlRecognizeNorthAmericanAMBand;
    bool flagHasRadioControlOtherFMBands;
    RadioControlOtherFMBandsJSON * storeRadioControlOtherFMBands;
    bool flagHasRadioControlOtherAMBands;
    RadioControlOtherAMBandsJSON * storeRadioControlOtherAMBands;
    bool flagHasClientListMatches;
    ClientListMatchesJSON * storeClientListMatches;
    bool flagHasIntentToExecute;
    CommandIntentJSON * storeIntentToExecute;
    bool flagHasRobotInfo;
    RobotInfoJSON * storeRobotInfo;
    bool flagHasConvertToNewInformationNuggets;
    ConvertToNewInformationNuggetsJSON * storeConvertToNewInformationNuggets;
    bool flagHasAcapelaVoiceParameters;
    AcapelaVoiceParametersJSON * storeAcapelaVoiceParameters;
    bool flagHasDisambiguateResultsBeforeAction;
    DisambiguateResultsBeforeActionJSON * storeDisambiguateResultsBeforeAction;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RequestInfoJSON(const RequestInfoJSON &);
    RequestInfoJSON & operator=(const RequestInfoJSON &other);

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPositionTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPositionHorizontalAccuracy(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStreet(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCountry(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRoutePoints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONControllableTrackPlaying(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeStamp(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConversationState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSendBack(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreferredImageSize(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputLanguageEnglishName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputLanguageNativeName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputLanguageIETFTag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputLanguageEnglishName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputLanguageNativeName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputLanguageIETFTag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultVersionAccepted(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitPreference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultTimeFormat24Hours(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientVersion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeviceID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSDK(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSDKInfo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFirstPersonSelf(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFirstPersonSelfSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondPersonSelf(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondPersonSelfSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWakeUpPattern(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSessionID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDomains(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultUpdateAllowed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialTranscriptsDesired(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONObjectByteCountPrefix(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProfanityFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientMatchesOnly(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioVoice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioShortOrLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioAcceptedEncodings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVoiceActivityDetection(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONServerDeterminesEndOfAudio(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIntentOnly(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisableSpellCorrection(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUseContactData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUseClientTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONForceConversationStateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhoneDisambiguationOmitList(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIncomingCallPending(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAllowPopularNameContactMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicClientState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisableMusicSearchListPositionSpecification(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCollateMusicEntities(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAllowContextFreeMusicSearchForPopularEntities(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSportsLeagueControl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchClientState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberServerToken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGetUberServerToken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberClientId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGetUberClientId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisableMusicPlayerListPositionSpecification(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHomeAutomationDomainSettings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserContactsRequests(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredGlobalPagesToMatch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredGlobalPagesToNotMatch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredPerUserPagesToMatch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredPerUserPagesToNotMatch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredGlobalPagesToSetOnByDefault(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredPerUserPagesToSetOnByDefault(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredGlobalPagesToSetOffByDefault(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredPerUserPagesToSetOffByDefault(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredPageMatchWriteData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredPageMatchReadData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredPageMatchPageListData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVoiceParameters(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredAlwaysMatchWriteData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStoredAlwaysMatchReadData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserFeedback(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadioControlRecognizeNorthAmericanFMBand(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadioControlRecognizeNorthAmericanAMBand(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadioControlOtherFMBands(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadioControlOtherAMBands(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientListMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIntentToExecute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRobotInfo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConvertToNewInformationNuggets(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAcapelaVoiceParameters(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguateResultsBeforeAction(JSONValue *json_value, bool ignore_extras = false);


  public:
    RequestInfoJSON(void);
    virtual ~RequestInfoJSON(void);
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;
    bool  hasPositionTime(void) const;
    OInteger  getPositionTime(void);
    const OInteger  getPositionTime(void) const;
    bool  hasPositionHorizontalAccuracy(void) const;
    double  getPositionHorizontalAccuracy(void);
    const double  getPositionHorizontalAccuracy(void) const;
    std::string  getPositionHorizontalAccuracyAsText(void) const;
    bool  hasStreet(void) const;
    std::string  getStreet(void);
    const std::string  getStreet(void) const;
    bool  hasCity(void) const;
    std::string  getCity(void);
    const std::string  getCity(void) const;
    bool  hasState(void) const;
    std::string  getState(void);
    const std::string  getState(void) const;
    bool  hasCountry(void) const;
    std::string  getCountry(void);
    const std::string  getCountry(void) const;
    bool  hasRoutePoints(void) const;
    RoutePointsJSON *  getRoutePoints(void);
    const RoutePointsJSON *  getRoutePoints(void) const;
    bool  hasControllableTrackPlaying(void) const;
    bool  getControllableTrackPlaying(void);
    const bool  getControllableTrackPlaying(void) const;
    bool  hasTimeStamp(void) const;
    OInteger  getTimeStamp(void);
    const OInteger  getTimeStamp(void) const;
    bool  hasTimeZone(void) const;
    std::string  getTimeZone(void);
    const std::string  getTimeZone(void) const;
    bool  hasConversationState(void) const;
    ConversationStateJSON *  getConversationState(void);
    const ConversationStateJSON *  getConversationState(void) const;
    bool  hasClientState(void) const;
    ClientStateJSON *  getClientState(void);
    const ClientStateJSON *  getClientState(void) const;
    bool  hasSendBack(void) const;
    JSONValue *  getSendBack(void);
    const JSONValue *  getSendBack(void) const;
    bool  hasPreferredImageSize(void) const;
    size_t  countOfPreferredImageSize(void) const;
    OInteger  elementOfPreferredImageSize(size_t element_num);
    const OInteger  elementOfPreferredImageSize(size_t element_num) const;
    std::vector< OInteger >  getPreferredImageSize(void);
    const std::vector< OInteger >  getPreferredImageSize(void) const;
    bool  hasInputLanguageEnglishName(void) const;
    std::string  getInputLanguageEnglishName(void);
    const std::string  getInputLanguageEnglishName(void) const;
    bool  hasInputLanguageNativeName(void) const;
    std::string  getInputLanguageNativeName(void);
    const std::string  getInputLanguageNativeName(void) const;
    bool  hasInputLanguageIETFTag(void) const;
    std::string  getInputLanguageIETFTag(void);
    const std::string  getInputLanguageIETFTag(void) const;
    bool  hasOutputLanguageEnglishName(void) const;
    std::string  getOutputLanguageEnglishName(void);
    const std::string  getOutputLanguageEnglishName(void) const;
    bool  hasOutputLanguageNativeName(void) const;
    std::string  getOutputLanguageNativeName(void);
    const std::string  getOutputLanguageNativeName(void) const;
    bool  hasOutputLanguageIETFTag(void) const;
    std::string  getOutputLanguageIETFTag(void);
    const std::string  getOutputLanguageIETFTag(void) const;
    bool  hasResultVersionAccepted(void) const;
    double  getResultVersionAccepted(void);
    const double  getResultVersionAccepted(void) const;
    std::string  getResultVersionAcceptedAsText(void) const;
    bool  hasUnitPreference(void) const;
    TypeUnitPreference  getUnitPreference(void);
    const TypeUnitPreference  getUnitPreference(void) const;
    const char * getUnitPreferenceAsChars(void) const;
    std::string  getUnitPreferenceAsString(void) const;
    bool  hasDefaultTimeFormat24Hours(void) const;
    bool  getDefaultTimeFormat24Hours(void);
    const bool  getDefaultTimeFormat24Hours(void) const;
    bool  hasClientID(void) const;
    std::string  getClientID(void);
    const std::string  getClientID(void) const;
    bool  hasClientVersion(void) const;
    TypeClientVersion  getClientVersion(void);
    const TypeClientVersion  getClientVersion(void) const;
    bool  hasDeviceID(void) const;
    std::string  getDeviceID(void);
    const std::string  getDeviceID(void) const;
    bool  hasSDK(void) const;
    std::string  getSDK(void);
    const std::string  getSDK(void) const;
    bool  hasSDKInfo(void) const;
    JSONObjectValue *  getSDKInfo(void);
    const JSONObjectValue *  getSDKInfo(void) const;
    bool  hasFirstPersonSelf(void) const;
    std::string  getFirstPersonSelf(void);
    const std::string  getFirstPersonSelf(void) const;
    bool  hasFirstPersonSelfSpoken(void) const;
    std::string  getFirstPersonSelfSpoken(void);
    const std::string  getFirstPersonSelfSpoken(void) const;
    bool  hasSecondPersonSelf(void) const;
    size_t  countOfSecondPersonSelf(void) const;
    std::string  elementOfSecondPersonSelf(size_t element_num);
    const std::string  elementOfSecondPersonSelf(size_t element_num) const;
    std::vector< std::string >  getSecondPersonSelf(void);
    const std::vector< std::string >  getSecondPersonSelf(void) const;
    bool  hasSecondPersonSelfSpoken(void) const;
    size_t  countOfSecondPersonSelfSpoken(void) const;
    std::string  elementOfSecondPersonSelfSpoken(size_t element_num);
    const std::string  elementOfSecondPersonSelfSpoken(size_t element_num) const;
    std::vector< std::string >  getSecondPersonSelfSpoken(void);
    const std::vector< std::string >  getSecondPersonSelfSpoken(void) const;
    bool  hasWakeUpPattern(void) const;
    std::string  getWakeUpPattern(void);
    const std::string  getWakeUpPattern(void) const;
    bool  hasUserID(void) const;
    std::string  getUserID(void);
    const std::string  getUserID(void) const;
    bool  hasRequestID(void) const;
    std::string  getRequestID(void);
    const std::string  getRequestID(void) const;
    bool  hasSessionID(void) const;
    std::string  getSessionID(void);
    const std::string  getSessionID(void) const;
    bool  hasDomains(void) const;
    DomainsJSON *  getDomains(void);
    const DomainsJSON *  getDomains(void) const;
    bool  hasResultUpdateAllowed(void) const;
    bool  getResultUpdateAllowed(void);
    const bool  getResultUpdateAllowed(void) const;
    bool  hasPartialTranscriptsDesired(void) const;
    bool  getPartialTranscriptsDesired(void);
    const bool  getPartialTranscriptsDesired(void) const;
    bool  hasMinResults(void) const;
    OInteger  getMinResults(void);
    const OInteger  getMinResults(void) const;
    bool  hasMaxResults(void) const;
    OInteger  getMaxResults(void);
    const OInteger  getMaxResults(void) const;
    bool  hasObjectByteCountPrefix(void) const;
    bool  getObjectByteCountPrefix(void);
    const bool  getObjectByteCountPrefix(void) const;
    bool  hasProfanityFilter(void) const;
    TypeProfanityFilter  getProfanityFilter(void);
    const TypeProfanityFilter  getProfanityFilter(void) const;
    const char * getProfanityFilterAsChars(void) const;
    std::string  getProfanityFilterAsString(void) const;
    bool  hasClientMatches(void) const;
    size_t  countOfClientMatches(void) const;
    ClientMatchJSON *  elementOfClientMatches(size_t element_num);
    const ClientMatchJSON *  elementOfClientMatches(size_t element_num) const;
    std::vector< ClientMatchJSON * >  getClientMatches(void);
    const std::vector< ClientMatchJSON * >  getClientMatches(void) const;
    bool  hasClientMatchesOnly(void) const;
    bool  getClientMatchesOnly(void);
    const bool  getClientMatchesOnly(void) const;
    bool  hasResponseAudioVoice(void) const;
    std::string  getResponseAudioVoice(void);
    const std::string  getResponseAudioVoice(void) const;
    bool  hasResponseAudioShortOrLong(void) const;
    TypeResponseAudioShortOrLong  getResponseAudioShortOrLong(void);
    const TypeResponseAudioShortOrLong  getResponseAudioShortOrLong(void) const;
    const char * getResponseAudioShortOrLongAsChars(void) const;
    std::string  getResponseAudioShortOrLongAsString(void) const;
    bool  hasResponseAudioAcceptedEncodings(void) const;
    size_t  countOfResponseAudioAcceptedEncodings(void) const;
    TypeResponseAudioAcceptedEncodings  elementOfResponseAudioAcceptedEncodings(size_t element_num);
    const TypeResponseAudioAcceptedEncodings  elementOfResponseAudioAcceptedEncodings(size_t element_num) const;
    std::vector< TypeResponseAudioAcceptedEncodings >  getResponseAudioAcceptedEncodings(void);
    const std::vector< TypeResponseAudioAcceptedEncodings >  getResponseAudioAcceptedEncodings(void) const;
    bool  hasVoiceActivityDetection(void) const;
    VoiceActivityDetectionJSON *  getVoiceActivityDetection(void);
    const VoiceActivityDetectionJSON *  getVoiceActivityDetection(void) const;
    bool  hasServerDeterminesEndOfAudio(void) const;
    bool  getServerDeterminesEndOfAudio(void);
    const bool  getServerDeterminesEndOfAudio(void) const;
    bool  hasIntentOnly(void) const;
    bool  getIntentOnly(void);
    const bool  getIntentOnly(void) const;
    bool  hasDisableSpellCorrection(void) const;
    bool  getDisableSpellCorrection(void);
    const bool  getDisableSpellCorrection(void) const;
    bool  hasUseContactData(void) const;
    bool  getUseContactData(void);
    const bool  getUseContactData(void) const;
    bool  hasUseClientTime(void) const;
    bool  getUseClientTime(void);
    const bool  getUseClientTime(void) const;
    bool  hasForceConversationStateTime(void) const;
    OInteger  getForceConversationStateTime(void);
    const OInteger  getForceConversationStateTime(void) const;
    bool  hasPhoneDisambiguationOmitList(void) const;
    PhoneDisambiguationOmitListJSON *  getPhoneDisambiguationOmitList(void);
    const PhoneDisambiguationOmitListJSON *  getPhoneDisambiguationOmitList(void) const;
    bool  hasIncomingCallPending(void) const;
    IncomingCallPendingJSON *  getIncomingCallPending(void);
    const IncomingCallPendingJSON *  getIncomingCallPending(void) const;
    bool  getIncomingCallPendingValue(void);
    const bool  getIncomingCallPendingValue(void) const;
    bool  hasAllowPopularNameContactMatches(void) const;
    AllowPopularNameContactMatchesJSON *  getAllowPopularNameContactMatches(void);
    const AllowPopularNameContactMatchesJSON *  getAllowPopularNameContactMatches(void) const;
    bool  getAllowPopularNameContactMatchesValue(void);
    const bool  getAllowPopularNameContactMatchesValue(void) const;
    bool  hasMusicClientState(void) const;
    MusicClientStateJSON *  getMusicClientState(void);
    const MusicClientStateJSON *  getMusicClientState(void) const;
    bool  hasDisableMusicSearchListPositionSpecification(void) const;
    DisableListPositionSpecificationJSON *  getDisableMusicSearchListPositionSpecification(void);
    const DisableListPositionSpecificationJSON *  getDisableMusicSearchListPositionSpecification(void) const;
    bool  getDisableMusicSearchListPositionSpecificationValue(void);
    const bool  getDisableMusicSearchListPositionSpecificationValue(void) const;
    bool  hasCollateMusicEntities(void) const;
    CollateMusicEntitiesJSON *  getCollateMusicEntities(void);
    const CollateMusicEntitiesJSON *  getCollateMusicEntities(void) const;
    bool  getCollateMusicEntitiesValue(void);
    const bool  getCollateMusicEntitiesValue(void) const;
    bool  hasAllowContextFreeMusicSearchForPopularEntities(void) const;
    AllowContextFreeMusicSearchForPopularEntitiesJSON *  getAllowContextFreeMusicSearchForPopularEntities(void);
    const AllowContextFreeMusicSearchForPopularEntitiesJSON *  getAllowContextFreeMusicSearchForPopularEntities(void) const;
    bool  getAllowContextFreeMusicSearchForPopularEntitiesValue(void);
    const bool  getAllowContextFreeMusicSearchForPopularEntitiesValue(void) const;
    bool  hasSportsLeagueControl(void) const;
    SportsLeagueControlJSON *  getSportsLeagueControl(void);
    const SportsLeagueControlJSON *  getSportsLeagueControl(void) const;
    bool  hasLocalSearchClientState(void) const;
    LocalSearchClientStateJSON *  getLocalSearchClientState(void);
    const LocalSearchClientStateJSON *  getLocalSearchClientState(void) const;
    bool  hasUberServerToken(void) const;
    UberServerTokenJSON *  getUberServerToken(void);
    const UberServerTokenJSON *  getUberServerToken(void) const;
    std::string  getUberServerTokenValue(void);
    const std::string  getUberServerTokenValue(void) const;
    bool  hasGetUberServerToken(void) const;
    GetUberServerTokenJSON *  getGetUberServerToken(void);
    const GetUberServerTokenJSON *  getGetUberServerToken(void) const;
    bool  getGetUberServerTokenValue(void);
    const bool  getGetUberServerTokenValue(void) const;
    bool  hasUberClientId(void) const;
    UberClientIdJSON *  getUberClientId(void);
    const UberClientIdJSON *  getUberClientId(void) const;
    std::string  getUberClientIdValue(void);
    const std::string  getUberClientIdValue(void) const;
    bool  hasGetUberClientId(void) const;
    GetUberClientIdJSON *  getGetUberClientId(void);
    const GetUberClientIdJSON *  getGetUberClientId(void) const;
    bool  getGetUberClientIdValue(void);
    const bool  getGetUberClientIdValue(void) const;
    bool  hasDisableMusicPlayerListPositionSpecification(void) const;
    DisableListPositionSpecificationJSON *  getDisableMusicPlayerListPositionSpecification(void);
    const DisableListPositionSpecificationJSON *  getDisableMusicPlayerListPositionSpecification(void) const;
    bool  getDisableMusicPlayerListPositionSpecificationValue(void);
    const bool  getDisableMusicPlayerListPositionSpecificationValue(void) const;
    bool  hasHomeAutomationDomainSettings(void) const;
    HomeAutomationDomainSettingsJSON *  getHomeAutomationDomainSettings(void);
    const HomeAutomationDomainSettingsJSON *  getHomeAutomationDomainSettings(void) const;
    bool  hasUserContactsRequests(void) const;
    UserContactsRequestsJSON *  getUserContactsRequests(void);
    const UserContactsRequestsJSON *  getUserContactsRequests(void) const;
    bool  hasStoredGlobalPagesToMatch(void) const;
    StoredPageMatchPageListJSON *  getStoredGlobalPagesToMatch(void);
    const StoredPageMatchPageListJSON *  getStoredGlobalPagesToMatch(void) const;
    bool  hasStoredGlobalPagesToNotMatch(void) const;
    StoredPageMatchPageListJSON *  getStoredGlobalPagesToNotMatch(void);
    const StoredPageMatchPageListJSON *  getStoredGlobalPagesToNotMatch(void) const;
    bool  hasStoredPerUserPagesToMatch(void) const;
    StoredPageMatchPageListJSON *  getStoredPerUserPagesToMatch(void);
    const StoredPageMatchPageListJSON *  getStoredPerUserPagesToMatch(void) const;
    bool  hasStoredPerUserPagesToNotMatch(void) const;
    StoredPageMatchPageListJSON *  getStoredPerUserPagesToNotMatch(void);
    const StoredPageMatchPageListJSON *  getStoredPerUserPagesToNotMatch(void) const;
    bool  hasStoredGlobalPagesToSetOnByDefault(void) const;
    StoredPageMatchPageListJSON *  getStoredGlobalPagesToSetOnByDefault(void);
    const StoredPageMatchPageListJSON *  getStoredGlobalPagesToSetOnByDefault(void) const;
    bool  hasStoredPerUserPagesToSetOnByDefault(void) const;
    StoredPageMatchPageListJSON *  getStoredPerUserPagesToSetOnByDefault(void);
    const StoredPageMatchPageListJSON *  getStoredPerUserPagesToSetOnByDefault(void) const;
    bool  hasStoredGlobalPagesToSetOffByDefault(void) const;
    StoredPageMatchPageListJSON *  getStoredGlobalPagesToSetOffByDefault(void);
    const StoredPageMatchPageListJSON *  getStoredGlobalPagesToSetOffByDefault(void) const;
    bool  hasStoredPerUserPagesToSetOffByDefault(void) const;
    StoredPageMatchPageListJSON *  getStoredPerUserPagesToSetOffByDefault(void);
    const StoredPageMatchPageListJSON *  getStoredPerUserPagesToSetOffByDefault(void) const;
    bool  hasStoredPageMatchWriteData(void) const;
    StoredPageMatchWriteDataJSON *  getStoredPageMatchWriteData(void);
    const StoredPageMatchWriteDataJSON *  getStoredPageMatchWriteData(void) const;
    bool  hasStoredPageMatchReadData(void) const;
    StoredPageMatchReadDataJSON *  getStoredPageMatchReadData(void);
    const StoredPageMatchReadDataJSON *  getStoredPageMatchReadData(void) const;
    bool  hasStoredPageMatchPageListData(void) const;
    StoredPageMatchPageListDataJSON *  getStoredPageMatchPageListData(void);
    const StoredPageMatchPageListDataJSON *  getStoredPageMatchPageListData(void) const;
    bool  hasVoiceParameters(void) const;
    VoiceParametersJSON *  getVoiceParameters(void);
    const VoiceParametersJSON *  getVoiceParameters(void) const;
    bool  hasStoredAlwaysMatchWriteData(void) const;
    ClientMatchesJSON *  getStoredAlwaysMatchWriteData(void);
    const ClientMatchesJSON *  getStoredAlwaysMatchWriteData(void) const;
    bool  hasStoredAlwaysMatchReadData(void) const;
    StoredAlwaysMatchReadDataJSON *  getStoredAlwaysMatchReadData(void);
    const StoredAlwaysMatchReadDataJSON *  getStoredAlwaysMatchReadData(void) const;
    bool  getStoredAlwaysMatchReadDataValue(void);
    const bool  getStoredAlwaysMatchReadDataValue(void) const;
    bool  hasUserFeedback(void) const;
    UserFeedbackJSON *  getUserFeedback(void);
    const UserFeedbackJSON *  getUserFeedback(void) const;
    bool  hasRadioControlRecognizeNorthAmericanFMBand(void) const;
    RadioControlRecognizeNorthAmericanFMBandJSON *  getRadioControlRecognizeNorthAmericanFMBand(void);
    const RadioControlRecognizeNorthAmericanFMBandJSON *  getRadioControlRecognizeNorthAmericanFMBand(void) const;
    bool  getRadioControlRecognizeNorthAmericanFMBandValue(void);
    const bool  getRadioControlRecognizeNorthAmericanFMBandValue(void) const;
    bool  hasRadioControlRecognizeNorthAmericanAMBand(void) const;
    RadioControlRecognizeNorthAmericanAMBandJSON *  getRadioControlRecognizeNorthAmericanAMBand(void);
    const RadioControlRecognizeNorthAmericanAMBandJSON *  getRadioControlRecognizeNorthAmericanAMBand(void) const;
    bool  getRadioControlRecognizeNorthAmericanAMBandValue(void);
    const bool  getRadioControlRecognizeNorthAmericanAMBandValue(void) const;
    bool  hasRadioControlOtherFMBands(void) const;
    RadioControlOtherFMBandsJSON *  getRadioControlOtherFMBands(void);
    const RadioControlOtherFMBandsJSON *  getRadioControlOtherFMBands(void) const;
    bool  hasRadioControlOtherAMBands(void) const;
    RadioControlOtherAMBandsJSON *  getRadioControlOtherAMBands(void);
    const RadioControlOtherAMBandsJSON *  getRadioControlOtherAMBands(void) const;
    bool  hasClientListMatches(void) const;
    ClientListMatchesJSON *  getClientListMatches(void);
    const ClientListMatchesJSON *  getClientListMatches(void) const;
    bool  hasIntentToExecute(void) const;
    CommandIntentJSON *  getIntentToExecute(void);
    const CommandIntentJSON *  getIntentToExecute(void) const;
    bool  hasRobotInfo(void) const;
    RobotInfoJSON *  getRobotInfo(void);
    const RobotInfoJSON *  getRobotInfo(void) const;
    bool  hasConvertToNewInformationNuggets(void) const;
    ConvertToNewInformationNuggetsJSON *  getConvertToNewInformationNuggets(void);
    const ConvertToNewInformationNuggetsJSON *  getConvertToNewInformationNuggets(void) const;
    bool  getConvertToNewInformationNuggetsValue(void);
    const bool  getConvertToNewInformationNuggetsValue(void) const;
    bool  hasAcapelaVoiceParameters(void) const;
    AcapelaVoiceParametersJSON *  getAcapelaVoiceParameters(void);
    const AcapelaVoiceParametersJSON *  getAcapelaVoiceParameters(void) const;
    bool  hasDisambiguateResultsBeforeAction(void) const;
    DisambiguateResultsBeforeActionJSON *  getDisambiguateResultsBeforeAction(void);
    const DisambiguateResultsBeforeActionJSON *  getDisambiguateResultsBeforeAction(void) const;
    bool  getDisambiguateResultsBeforeActionValue(void);
    const bool  getDisambiguateResultsBeforeActionValue(void) const;

    virtual size_t extraRequestInfoComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRequestInfoComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRequestInfoComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRequestInfoComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRequestInfoLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRequestInfoLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        if (new_value < -90)
            throw("The value for field Latitude of RequestInfoJSON is less than the lower bound (-90) for that field.");
        if (new_value > 90)
            throw("The value for field Latitude of RequestInfoJSON is greater than the upper bound (90) for that field.");
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of RequestInfoJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
            throw("The value for field Latitude of RequestInfoJSON is less than the lower bound (-90) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
            throw("The value for field Latitude of RequestInfoJSON is greater than the upper bound (90) for that field.");
        textStoreLatitude = new_value;
      }
    void unsetLatitude(void)
      {
        flagHasLatitude = false;
      }
    void setLongitude(double new_value)
      {
        flagHasLongitude = true;
        if (new_value < -180)
            throw("The value for field Longitude of RequestInfoJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Longitude of RequestInfoJSON is greater than the upper bound (180) for that field.");
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of RequestInfoJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
            throw("The value for field Longitude of RequestInfoJSON is less than the lower bound (-180) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
            throw("The value for field Longitude of RequestInfoJSON is greater than the upper bound (180) for that field.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
      }
    void setPositionTime(OInteger new_value)
      {
        flagHasPositionTime = true;
        storePositionTime = new_value;
      }
    void unsetPositionTime(void)
      {
        flagHasPositionTime = false;
      }
    void setPositionHorizontalAccuracy(double new_value)
      {
        flagHasPositionHorizontalAccuracy = true;
        if (new_value < 0)
            throw("The value for field PositionHorizontalAccuracy of RequestInfoJSON is less than the lower bound (0) for that field.");
        storePositionHorizontalAccuracy = new_value;
        textStorePositionHorizontalAccuracy = "";
      }
    void setPositionHorizontalAccuracyText(std::string new_value)
      {
        flagHasPositionHorizontalAccuracy = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field PositionHorizontalAccuracy of RequestInfoJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field PositionHorizontalAccuracy of RequestInfoJSON is less than the lower bound (0) for that field.");
        textStorePositionHorizontalAccuracy = new_value;
      }
    void unsetPositionHorizontalAccuracy(void)
      {
        flagHasPositionHorizontalAccuracy = false;
      }
    void setStreet(std::string new_value)
      {
        flagHasStreet = true;
        storeStreet = new_value;
      }
    void unsetStreet(void)
      {
        flagHasStreet = false;
      }
    void setCity(std::string new_value)
      {
        flagHasCity = true;
        storeCity = new_value;
      }
    void unsetCity(void)
      {
        flagHasCity = false;
      }
    void setState(std::string new_value)
      {
        flagHasState = true;
        storeState = new_value;
      }
    void unsetState(void)
      {
        flagHasState = false;
      }
    void setCountry(std::string new_value)
      {
        flagHasCountry = true;
        storeCountry = new_value;
      }
    void unsetCountry(void)
      {
        flagHasCountry = false;
      }
    void setRoutePoints(RoutePointsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRoutePoints)
          {
            storeRoutePoints->remove_reference();
          }
        flagHasRoutePoints = true;
        storeRoutePoints = new_value;
      }
    void unsetRoutePoints(void)
      {
        if (flagHasRoutePoints)
          {
            storeRoutePoints->remove_reference();
          }
        flagHasRoutePoints = false;
      }
    void setControllableTrackPlaying(bool new_value)
      {
        flagHasControllableTrackPlaying = true;
        storeControllableTrackPlaying = new_value;
      }
    void unsetControllableTrackPlaying(void)
      {
        flagHasControllableTrackPlaying = false;
      }
    void setTimeStamp(OInteger new_value)
      {
        flagHasTimeStamp = true;
        storeTimeStamp = new_value;
      }
    void unsetTimeStamp(void)
      {
        flagHasTimeStamp = false;
      }
    void setTimeZone(std::string new_value)
      {
        flagHasTimeZone = true;
        storeTimeZone = new_value;
      }
    void unsetTimeZone(void)
      {
        flagHasTimeZone = false;
      }
    void setConversationState(ConversationStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasConversationState)
          {
            storeConversationState->remove_reference();
          }
        flagHasConversationState = true;
        storeConversationState = new_value;
      }
    void unsetConversationState(void)
      {
        if (flagHasConversationState)
          {
            storeConversationState->remove_reference();
          }
        flagHasConversationState = false;
      }
    void setClientState(ClientStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClientState)
          {
            storeClientState->remove_reference();
          }
        flagHasClientState = true;
        storeClientState = new_value;
      }
    void unsetClientState(void)
      {
        if (flagHasClientState)
          {
            storeClientState->remove_reference();
          }
        flagHasClientState = false;
      }
    void setSendBack(JSONValue * new_value)
      {
        new_value->add_reference();
        if (flagHasSendBack)
          {
            storeSendBack->remove_reference();
          }
        flagHasSendBack = true;
        storeSendBack = new_value;
      }
    void unsetSendBack(void)
      {
        if (flagHasSendBack)
          {
            storeSendBack->remove_reference();
          }
        flagHasSendBack = false;
      }
    void initPreferredImageSize(void)
      {
        flagHasPreferredImageSize = true;
        storePreferredImageSize.clear();
      }
    void appendPreferredImageSize(OInteger to_append)
      {
        if (!flagHasPreferredImageSize)
          {
            flagHasPreferredImageSize = true;
            storePreferredImageSize.clear();
          }
        assert(flagHasPreferredImageSize);
        storePreferredImageSize.push_back(to_append);
      }
    void unsetPreferredImageSize(void)
      {
        flagHasPreferredImageSize = false;
        storePreferredImageSize.clear();
      }
    void setInputLanguageEnglishName(std::string new_value)
      {
        flagHasInputLanguageEnglishName = true;
        storeInputLanguageEnglishName = new_value;
      }
    void unsetInputLanguageEnglishName(void)
      {
        flagHasInputLanguageEnglishName = false;
      }
    void setInputLanguageNativeName(std::string new_value)
      {
        flagHasInputLanguageNativeName = true;
        storeInputLanguageNativeName = new_value;
      }
    void unsetInputLanguageNativeName(void)
      {
        flagHasInputLanguageNativeName = false;
      }
    void setInputLanguageIETFTag(std::string new_value)
      {
        flagHasInputLanguageIETFTag = true;
        storeInputLanguageIETFTag = new_value;
      }
    void unsetInputLanguageIETFTag(void)
      {
        flagHasInputLanguageIETFTag = false;
      }
    void setOutputLanguageEnglishName(std::string new_value)
      {
        flagHasOutputLanguageEnglishName = true;
        storeOutputLanguageEnglishName = new_value;
      }
    void unsetOutputLanguageEnglishName(void)
      {
        flagHasOutputLanguageEnglishName = false;
      }
    void setOutputLanguageNativeName(std::string new_value)
      {
        flagHasOutputLanguageNativeName = true;
        storeOutputLanguageNativeName = new_value;
      }
    void unsetOutputLanguageNativeName(void)
      {
        flagHasOutputLanguageNativeName = false;
      }
    void setOutputLanguageIETFTag(std::string new_value)
      {
        flagHasOutputLanguageIETFTag = true;
        storeOutputLanguageIETFTag = new_value;
      }
    void unsetOutputLanguageIETFTag(void)
      {
        flagHasOutputLanguageIETFTag = false;
      }
    void setResultVersionAccepted(double new_value)
      {
        flagHasResultVersionAccepted = true;
        if (new_value < 1)
            throw("The value for field ResultVersionAccepted of RequestInfoJSON is less than the lower bound (1) for that field.");
        storeResultVersionAccepted = new_value;
        textStoreResultVersionAccepted = "";
      }
    void setResultVersionAcceptedText(std::string new_value)
      {
        flagHasResultVersionAccepted = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field ResultVersionAccepted of RequestInfoJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") < 0)
            throw("The value for field ResultVersionAccepted of RequestInfoJSON is less than the lower bound (1) for that field.");
        textStoreResultVersionAccepted = new_value;
      }
    void unsetResultVersionAccepted(void)
      {
        flagHasResultVersionAccepted = false;
      }
    void setUnitPreference(TypeUnitPreference new_value)
      {
        flagHasUnitPreference = true;
        storeUnitPreference = new_value;
      }
    void setUnitPreference(const char *chars)
      {
        setUnitPreference(stringToUnitPreference(chars));
      }
    void setUnitPreference(std::string the_string)
      {
        setUnitPreference(stringToUnitPreference(the_string.c_str()));
      }
    void unsetUnitPreference(void)
      {
        flagHasUnitPreference = false;
      }
    void setDefaultTimeFormat24Hours(bool new_value)
      {
        flagHasDefaultTimeFormat24Hours = true;
        storeDefaultTimeFormat24Hours = new_value;
      }
    void unsetDefaultTimeFormat24Hours(void)
      {
        flagHasDefaultTimeFormat24Hours = false;
      }
    void setClientID(std::string new_value)
      {
        flagHasClientID = true;
        storeClientID = new_value;
      }
    void unsetClientID(void)
      {
        flagHasClientID = false;
      }
    void setClientVersion(TypeClientVersion new_value)
      {
        flagHasClientVersion = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                if (new_value.choice1 < 0)
                    throw("The value for case 1 of field ClientVersion of RequestInfoJSON is less than the lower bound (0) for that field.");
                break;
            default:
                assert(false);
          }
        storeClientVersion = new_value;
      }
    void unsetClientVersion(void)
      {
        flagHasClientVersion = false;
      }
    void setDeviceID(std::string new_value)
      {
        flagHasDeviceID = true;
        storeDeviceID = new_value;
      }
    void unsetDeviceID(void)
      {
        flagHasDeviceID = false;
      }
    void setSDK(std::string new_value)
      {
        flagHasSDK = true;
        storeSDK = new_value;
      }
    void unsetSDK(void)
      {
        flagHasSDK = false;
      }
    void setSDKInfo(JSONObjectValue * new_value)
      {
        new_value->add_reference();
        if (flagHasSDKInfo)
          {
            storeSDKInfo->remove_reference();
          }
        flagHasSDKInfo = true;
        storeSDKInfo = new_value;
      }
    void unsetSDKInfo(void)
      {
        if (flagHasSDKInfo)
          {
            storeSDKInfo->remove_reference();
          }
        flagHasSDKInfo = false;
      }
    void setFirstPersonSelf(std::string new_value)
      {
        flagHasFirstPersonSelf = true;
        storeFirstPersonSelf = new_value;
      }
    void unsetFirstPersonSelf(void)
      {
        flagHasFirstPersonSelf = false;
      }
    void setFirstPersonSelfSpoken(std::string new_value)
      {
        flagHasFirstPersonSelfSpoken = true;
        storeFirstPersonSelfSpoken = new_value;
      }
    void unsetFirstPersonSelfSpoken(void)
      {
        flagHasFirstPersonSelfSpoken = false;
      }
    void initSecondPersonSelf(void)
      {
        flagHasSecondPersonSelf = true;
        storeSecondPersonSelf.clear();
      }
    void appendSecondPersonSelf(std::string to_append)
      {
        if (!flagHasSecondPersonSelf)
          {
            flagHasSecondPersonSelf = true;
            storeSecondPersonSelf.clear();
          }
        assert(flagHasSecondPersonSelf);
        storeSecondPersonSelf.push_back(to_append);
      }
    void unsetSecondPersonSelf(void)
      {
        flagHasSecondPersonSelf = false;
        storeSecondPersonSelf.clear();
      }
    void initSecondPersonSelfSpoken(void)
      {
        flagHasSecondPersonSelfSpoken = true;
        storeSecondPersonSelfSpoken.clear();
      }
    void appendSecondPersonSelfSpoken(std::string to_append)
      {
        if (!flagHasSecondPersonSelfSpoken)
          {
            flagHasSecondPersonSelfSpoken = true;
            storeSecondPersonSelfSpoken.clear();
          }
        assert(flagHasSecondPersonSelfSpoken);
        storeSecondPersonSelfSpoken.push_back(to_append);
      }
    void unsetSecondPersonSelfSpoken(void)
      {
        flagHasSecondPersonSelfSpoken = false;
        storeSecondPersonSelfSpoken.clear();
      }
    void setWakeUpPattern(std::string new_value)
      {
        flagHasWakeUpPattern = true;
        storeWakeUpPattern = new_value;
      }
    void unsetWakeUpPattern(void)
      {
        flagHasWakeUpPattern = false;
      }
    void setUserID(std::string new_value)
      {
        flagHasUserID = true;
        storeUserID = new_value;
      }
    void unsetUserID(void)
      {
        flagHasUserID = false;
      }
    void setRequestID(std::string new_value)
      {
        flagHasRequestID = true;
        storeRequestID = new_value;
      }
    void unsetRequestID(void)
      {
        flagHasRequestID = false;
      }
    void setSessionID(std::string new_value)
      {
        flagHasSessionID = true;
        storeSessionID = new_value;
      }
    void unsetSessionID(void)
      {
        flagHasSessionID = false;
      }
    void setDomains(DomainsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDomains)
          {
            storeDomains->remove_reference();
          }
        flagHasDomains = true;
        storeDomains = new_value;
      }
    void unsetDomains(void)
      {
        if (flagHasDomains)
          {
            storeDomains->remove_reference();
          }
        flagHasDomains = false;
      }
    void setResultUpdateAllowed(bool new_value)
      {
        flagHasResultUpdateAllowed = true;
        storeResultUpdateAllowed = new_value;
      }
    void unsetResultUpdateAllowed(void)
      {
        flagHasResultUpdateAllowed = false;
      }
    void setPartialTranscriptsDesired(bool new_value)
      {
        flagHasPartialTranscriptsDesired = true;
        storePartialTranscriptsDesired = new_value;
      }
    void unsetPartialTranscriptsDesired(void)
      {
        flagHasPartialTranscriptsDesired = false;
      }
    void setMinResults(OInteger new_value)
      {
        flagHasMinResults = true;
        if (new_value < 1)
            throw("The value for field MinResults of RequestInfoJSON is less than the lower bound (1) for that field.");
        storeMinResults = new_value;
      }
    void unsetMinResults(void)
      {
        flagHasMinResults = false;
      }
    void setMaxResults(OInteger new_value)
      {
        flagHasMaxResults = true;
        if (new_value < 1)
            throw("The value for field MaxResults of RequestInfoJSON is less than the lower bound (1) for that field.");
        storeMaxResults = new_value;
      }
    void unsetMaxResults(void)
      {
        flagHasMaxResults = false;
      }
    void setObjectByteCountPrefix(bool new_value)
      {
        flagHasObjectByteCountPrefix = true;
        storeObjectByteCountPrefix = new_value;
      }
    void unsetObjectByteCountPrefix(void)
      {
        flagHasObjectByteCountPrefix = false;
      }
    void setProfanityFilter(TypeProfanityFilter new_value)
      {
        flagHasProfanityFilter = true;
        storeProfanityFilter = new_value;
      }
    void setProfanityFilter(const char *chars)
      {
        setProfanityFilter(stringToProfanityFilter(chars));
      }
    void setProfanityFilter(std::string the_string)
      {
        setProfanityFilter(stringToProfanityFilter(the_string.c_str()));
      }
    void unsetProfanityFilter(void)
      {
        flagHasProfanityFilter = false;
      }
    void initClientMatches(void)
      {
        if (flagHasClientMatches)
          {
            for (size_t num2 = 0; num2 < storeClientMatches.size(); ++num2)
              {
                storeClientMatches[num2]->remove_reference();
              }
          }
        flagHasClientMatches = true;
        storeClientMatches.clear();
      }
    void appendClientMatches(ClientMatchJSON * to_append)
      {
        if (!flagHasClientMatches)
          {
            flagHasClientMatches = true;
            storeClientMatches.clear();
          }
        assert(flagHasClientMatches);
        to_append->add_reference();
        storeClientMatches.push_back(to_append);
      }
    void unsetClientMatches(void)
      {
        if (flagHasClientMatches)
          {
            for (size_t num3 = 0; num3 < storeClientMatches.size(); ++num3)
              {
                storeClientMatches[num3]->remove_reference();
              }
          }
        flagHasClientMatches = false;
        storeClientMatches.clear();
      }
    void setClientMatchesOnly(bool new_value)
      {
        flagHasClientMatchesOnly = true;
        storeClientMatchesOnly = new_value;
      }
    void unsetClientMatchesOnly(void)
      {
        flagHasClientMatchesOnly = false;
      }
    void setResponseAudioVoice(std::string new_value)
      {
        flagHasResponseAudioVoice = true;
        storeResponseAudioVoice = new_value;
      }
    void unsetResponseAudioVoice(void)
      {
        flagHasResponseAudioVoice = false;
      }
    void setResponseAudioShortOrLong(TypeResponseAudioShortOrLong new_value)
      {
        flagHasResponseAudioShortOrLong = true;
        storeResponseAudioShortOrLong = new_value;
      }
    void setResponseAudioShortOrLong(const char *chars)
      {
        setResponseAudioShortOrLong(stringToResponseAudioShortOrLong(chars));
      }
    void setResponseAudioShortOrLong(std::string the_string)
      {
        setResponseAudioShortOrLong(stringToResponseAudioShortOrLong(the_string.c_str()));
      }
    void unsetResponseAudioShortOrLong(void)
      {
        flagHasResponseAudioShortOrLong = false;
      }
    void initResponseAudioAcceptedEncodings(void)
      {
        flagHasResponseAudioAcceptedEncodings = true;
        storeResponseAudioAcceptedEncodings.clear();
      }
    void appendResponseAudioAcceptedEncodings(TypeResponseAudioAcceptedEncodings to_append)
      {
        if (!flagHasResponseAudioAcceptedEncodings)
          {
            flagHasResponseAudioAcceptedEncodings = true;
            storeResponseAudioAcceptedEncodings.clear();
          }
        assert(flagHasResponseAudioAcceptedEncodings);
        storeResponseAudioAcceptedEncodings.push_back(to_append);
      }
    void appendResponseAudioAcceptedEncodings(const char *chars)
      {
        TypeResponseAudioAcceptedEncodingsKnownValues known = stringToResponseAudioAcceptedEncodings(chars);
        TypeResponseAudioAcceptedEncodings new_value;
        if (known == ResponseAudioAcceptedEncodings__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendResponseAudioAcceptedEncodings(new_value);
      }
    void appendResponseAudioAcceptedEncodings(std::string the_string)
      {
        appendResponseAudioAcceptedEncodings(the_string.c_str());
      }
    void appendResponseAudioAcceptedEncodings(TypeResponseAudioAcceptedEncodingsKnownValues new_value)
      {
        TypeResponseAudioAcceptedEncodings new_full_value;
        assert(new_value != ResponseAudioAcceptedEncodings__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        appendResponseAudioAcceptedEncodings(new_full_value);
      }
    void unsetResponseAudioAcceptedEncodings(void)
      {
        flagHasResponseAudioAcceptedEncodings = false;
        storeResponseAudioAcceptedEncodings.clear();
      }
    void setVoiceActivityDetection(VoiceActivityDetectionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasVoiceActivityDetection)
          {
            storeVoiceActivityDetection->remove_reference();
          }
        flagHasVoiceActivityDetection = true;
        storeVoiceActivityDetection = new_value;
      }
    void unsetVoiceActivityDetection(void)
      {
        if (flagHasVoiceActivityDetection)
          {
            storeVoiceActivityDetection->remove_reference();
          }
        flagHasVoiceActivityDetection = false;
      }
    void setServerDeterminesEndOfAudio(bool new_value)
      {
        flagHasServerDeterminesEndOfAudio = true;
        storeServerDeterminesEndOfAudio = new_value;
      }
    void unsetServerDeterminesEndOfAudio(void)
      {
        flagHasServerDeterminesEndOfAudio = false;
      }
    void setIntentOnly(bool new_value)
      {
        flagHasIntentOnly = true;
        storeIntentOnly = new_value;
      }
    void unsetIntentOnly(void)
      {
        flagHasIntentOnly = false;
      }
    void setDisableSpellCorrection(bool new_value)
      {
        flagHasDisableSpellCorrection = true;
        storeDisableSpellCorrection = new_value;
      }
    void unsetDisableSpellCorrection(void)
      {
        flagHasDisableSpellCorrection = false;
      }
    void setUseContactData(bool new_value)
      {
        flagHasUseContactData = true;
        storeUseContactData = new_value;
      }
    void unsetUseContactData(void)
      {
        flagHasUseContactData = false;
      }
    void setUseClientTime(bool new_value)
      {
        flagHasUseClientTime = true;
        storeUseClientTime = new_value;
      }
    void unsetUseClientTime(void)
      {
        flagHasUseClientTime = false;
      }
    void setForceConversationStateTime(OInteger new_value)
      {
        flagHasForceConversationStateTime = true;
        storeForceConversationStateTime = new_value;
      }
    void unsetForceConversationStateTime(void)
      {
        flagHasForceConversationStateTime = false;
      }
    void setPhoneDisambiguationOmitList(PhoneDisambiguationOmitListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPhoneDisambiguationOmitList)
          {
            storePhoneDisambiguationOmitList->remove_reference();
          }
        flagHasPhoneDisambiguationOmitList = true;
        storePhoneDisambiguationOmitList = new_value;
      }
    void unsetPhoneDisambiguationOmitList(void)
      {
        if (flagHasPhoneDisambiguationOmitList)
          {
            storePhoneDisambiguationOmitList->remove_reference();
          }
        flagHasPhoneDisambiguationOmitList = false;
      }
    void setIncomingCallPending(IncomingCallPendingJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasIncomingCallPending)
          {
            storeIncomingCallPending->remove_reference();
          }
        flagHasIncomingCallPending = true;
        storeIncomingCallPending = new_value;
      }
    void setIncomingCallPending(bool new_value)
      {
        setIncomingCallPending(new IncomingCallPendingJSON(new_value));
      }
    void unsetIncomingCallPending(void)
      {
        if (flagHasIncomingCallPending)
          {
            storeIncomingCallPending->remove_reference();
          }
        flagHasIncomingCallPending = false;
      }
    void setAllowPopularNameContactMatches(AllowPopularNameContactMatchesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAllowPopularNameContactMatches)
          {
            storeAllowPopularNameContactMatches->remove_reference();
          }
        flagHasAllowPopularNameContactMatches = true;
        storeAllowPopularNameContactMatches = new_value;
      }
    void setAllowPopularNameContactMatches(bool new_value)
      {
        setAllowPopularNameContactMatches(new AllowPopularNameContactMatchesJSON(new_value));
      }
    void unsetAllowPopularNameContactMatches(void)
      {
        if (flagHasAllowPopularNameContactMatches)
          {
            storeAllowPopularNameContactMatches->remove_reference();
          }
        flagHasAllowPopularNameContactMatches = false;
      }
    void setMusicClientState(MusicClientStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMusicClientState)
          {
            storeMusicClientState->remove_reference();
          }
        flagHasMusicClientState = true;
        storeMusicClientState = new_value;
      }
    void unsetMusicClientState(void)
      {
        if (flagHasMusicClientState)
          {
            storeMusicClientState->remove_reference();
          }
        flagHasMusicClientState = false;
      }
    void setDisableMusicSearchListPositionSpecification(DisableListPositionSpecificationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisableMusicSearchListPositionSpecification)
          {
            storeDisableMusicSearchListPositionSpecification->remove_reference();
          }
        flagHasDisableMusicSearchListPositionSpecification = true;
        storeDisableMusicSearchListPositionSpecification = new_value;
      }
    void setDisableMusicSearchListPositionSpecification(bool new_value)
      {
        setDisableMusicSearchListPositionSpecification(new DisableListPositionSpecificationJSON(new_value));
      }
    void unsetDisableMusicSearchListPositionSpecification(void)
      {
        if (flagHasDisableMusicSearchListPositionSpecification)
          {
            storeDisableMusicSearchListPositionSpecification->remove_reference();
          }
        flagHasDisableMusicSearchListPositionSpecification = false;
      }
    void setCollateMusicEntities(CollateMusicEntitiesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCollateMusicEntities)
          {
            storeCollateMusicEntities->remove_reference();
          }
        flagHasCollateMusicEntities = true;
        storeCollateMusicEntities = new_value;
      }
    void setCollateMusicEntities(bool new_value)
      {
        setCollateMusicEntities(new CollateMusicEntitiesJSON(new_value));
      }
    void unsetCollateMusicEntities(void)
      {
        if (flagHasCollateMusicEntities)
          {
            storeCollateMusicEntities->remove_reference();
          }
        flagHasCollateMusicEntities = false;
      }
    void setAllowContextFreeMusicSearchForPopularEntities(AllowContextFreeMusicSearchForPopularEntitiesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAllowContextFreeMusicSearchForPopularEntities)
          {
            storeAllowContextFreeMusicSearchForPopularEntities->remove_reference();
          }
        flagHasAllowContextFreeMusicSearchForPopularEntities = true;
        storeAllowContextFreeMusicSearchForPopularEntities = new_value;
      }
    void setAllowContextFreeMusicSearchForPopularEntities(bool new_value)
      {
        setAllowContextFreeMusicSearchForPopularEntities(new AllowContextFreeMusicSearchForPopularEntitiesJSON(new_value));
      }
    void unsetAllowContextFreeMusicSearchForPopularEntities(void)
      {
        if (flagHasAllowContextFreeMusicSearchForPopularEntities)
          {
            storeAllowContextFreeMusicSearchForPopularEntities->remove_reference();
          }
        flagHasAllowContextFreeMusicSearchForPopularEntities = false;
      }
    void setSportsLeagueControl(SportsLeagueControlJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSportsLeagueControl)
          {
            storeSportsLeagueControl->remove_reference();
          }
        flagHasSportsLeagueControl = true;
        storeSportsLeagueControl = new_value;
      }
    void unsetSportsLeagueControl(void)
      {
        if (flagHasSportsLeagueControl)
          {
            storeSportsLeagueControl->remove_reference();
          }
        flagHasSportsLeagueControl = false;
      }
    void setLocalSearchClientState(LocalSearchClientStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocalSearchClientState)
          {
            storeLocalSearchClientState->remove_reference();
          }
        flagHasLocalSearchClientState = true;
        storeLocalSearchClientState = new_value;
      }
    void unsetLocalSearchClientState(void)
      {
        if (flagHasLocalSearchClientState)
          {
            storeLocalSearchClientState->remove_reference();
          }
        flagHasLocalSearchClientState = false;
      }
    void setUberServerToken(UberServerTokenJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUberServerToken)
          {
            storeUberServerToken->remove_reference();
          }
        flagHasUberServerToken = true;
        storeUberServerToken = new_value;
      }
    void setUberServerToken(std::string new_value)
      {
        setUberServerToken(new UberServerTokenJSON(new_value));
      }
    void unsetUberServerToken(void)
      {
        if (flagHasUberServerToken)
          {
            storeUberServerToken->remove_reference();
          }
        flagHasUberServerToken = false;
      }
    void setGetUberServerToken(GetUberServerTokenJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGetUberServerToken)
          {
            storeGetUberServerToken->remove_reference();
          }
        flagHasGetUberServerToken = true;
        storeGetUberServerToken = new_value;
      }
    void setGetUberServerToken(bool new_value)
      {
        setGetUberServerToken(new GetUberServerTokenJSON(new_value));
      }
    void unsetGetUberServerToken(void)
      {
        if (flagHasGetUberServerToken)
          {
            storeGetUberServerToken->remove_reference();
          }
        flagHasGetUberServerToken = false;
      }
    void setUberClientId(UberClientIdJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUberClientId)
          {
            storeUberClientId->remove_reference();
          }
        flagHasUberClientId = true;
        storeUberClientId = new_value;
      }
    void setUberClientId(std::string new_value)
      {
        setUberClientId(new UberClientIdJSON(new_value));
      }
    void unsetUberClientId(void)
      {
        if (flagHasUberClientId)
          {
            storeUberClientId->remove_reference();
          }
        flagHasUberClientId = false;
      }
    void setGetUberClientId(GetUberClientIdJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGetUberClientId)
          {
            storeGetUberClientId->remove_reference();
          }
        flagHasGetUberClientId = true;
        storeGetUberClientId = new_value;
      }
    void setGetUberClientId(bool new_value)
      {
        setGetUberClientId(new GetUberClientIdJSON(new_value));
      }
    void unsetGetUberClientId(void)
      {
        if (flagHasGetUberClientId)
          {
            storeGetUberClientId->remove_reference();
          }
        flagHasGetUberClientId = false;
      }
    void setDisableMusicPlayerListPositionSpecification(DisableListPositionSpecificationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisableMusicPlayerListPositionSpecification)
          {
            storeDisableMusicPlayerListPositionSpecification->remove_reference();
          }
        flagHasDisableMusicPlayerListPositionSpecification = true;
        storeDisableMusicPlayerListPositionSpecification = new_value;
      }
    void setDisableMusicPlayerListPositionSpecification(bool new_value)
      {
        setDisableMusicPlayerListPositionSpecification(new DisableListPositionSpecificationJSON(new_value));
      }
    void unsetDisableMusicPlayerListPositionSpecification(void)
      {
        if (flagHasDisableMusicPlayerListPositionSpecification)
          {
            storeDisableMusicPlayerListPositionSpecification->remove_reference();
          }
        flagHasDisableMusicPlayerListPositionSpecification = false;
      }
    void setHomeAutomationDomainSettings(HomeAutomationDomainSettingsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHomeAutomationDomainSettings)
          {
            storeHomeAutomationDomainSettings->remove_reference();
          }
        flagHasHomeAutomationDomainSettings = true;
        storeHomeAutomationDomainSettings = new_value;
      }
    void unsetHomeAutomationDomainSettings(void)
      {
        if (flagHasHomeAutomationDomainSettings)
          {
            storeHomeAutomationDomainSettings->remove_reference();
          }
        flagHasHomeAutomationDomainSettings = false;
      }
    void setUserContactsRequests(UserContactsRequestsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUserContactsRequests)
          {
            storeUserContactsRequests->remove_reference();
          }
        flagHasUserContactsRequests = true;
        storeUserContactsRequests = new_value;
      }
    void unsetUserContactsRequests(void)
      {
        if (flagHasUserContactsRequests)
          {
            storeUserContactsRequests->remove_reference();
          }
        flagHasUserContactsRequests = false;
      }
    void setStoredGlobalPagesToMatch(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredGlobalPagesToMatch)
          {
            storeStoredGlobalPagesToMatch->remove_reference();
          }
        flagHasStoredGlobalPagesToMatch = true;
        storeStoredGlobalPagesToMatch = new_value;
      }
    void unsetStoredGlobalPagesToMatch(void)
      {
        if (flagHasStoredGlobalPagesToMatch)
          {
            storeStoredGlobalPagesToMatch->remove_reference();
          }
        flagHasStoredGlobalPagesToMatch = false;
      }
    void setStoredGlobalPagesToNotMatch(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredGlobalPagesToNotMatch)
          {
            storeStoredGlobalPagesToNotMatch->remove_reference();
          }
        flagHasStoredGlobalPagesToNotMatch = true;
        storeStoredGlobalPagesToNotMatch = new_value;
      }
    void unsetStoredGlobalPagesToNotMatch(void)
      {
        if (flagHasStoredGlobalPagesToNotMatch)
          {
            storeStoredGlobalPagesToNotMatch->remove_reference();
          }
        flagHasStoredGlobalPagesToNotMatch = false;
      }
    void setStoredPerUserPagesToMatch(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredPerUserPagesToMatch)
          {
            storeStoredPerUserPagesToMatch->remove_reference();
          }
        flagHasStoredPerUserPagesToMatch = true;
        storeStoredPerUserPagesToMatch = new_value;
      }
    void unsetStoredPerUserPagesToMatch(void)
      {
        if (flagHasStoredPerUserPagesToMatch)
          {
            storeStoredPerUserPagesToMatch->remove_reference();
          }
        flagHasStoredPerUserPagesToMatch = false;
      }
    void setStoredPerUserPagesToNotMatch(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredPerUserPagesToNotMatch)
          {
            storeStoredPerUserPagesToNotMatch->remove_reference();
          }
        flagHasStoredPerUserPagesToNotMatch = true;
        storeStoredPerUserPagesToNotMatch = new_value;
      }
    void unsetStoredPerUserPagesToNotMatch(void)
      {
        if (flagHasStoredPerUserPagesToNotMatch)
          {
            storeStoredPerUserPagesToNotMatch->remove_reference();
          }
        flagHasStoredPerUserPagesToNotMatch = false;
      }
    void setStoredGlobalPagesToSetOnByDefault(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredGlobalPagesToSetOnByDefault)
          {
            storeStoredGlobalPagesToSetOnByDefault->remove_reference();
          }
        flagHasStoredGlobalPagesToSetOnByDefault = true;
        storeStoredGlobalPagesToSetOnByDefault = new_value;
      }
    void unsetStoredGlobalPagesToSetOnByDefault(void)
      {
        if (flagHasStoredGlobalPagesToSetOnByDefault)
          {
            storeStoredGlobalPagesToSetOnByDefault->remove_reference();
          }
        flagHasStoredGlobalPagesToSetOnByDefault = false;
      }
    void setStoredPerUserPagesToSetOnByDefault(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredPerUserPagesToSetOnByDefault)
          {
            storeStoredPerUserPagesToSetOnByDefault->remove_reference();
          }
        flagHasStoredPerUserPagesToSetOnByDefault = true;
        storeStoredPerUserPagesToSetOnByDefault = new_value;
      }
    void unsetStoredPerUserPagesToSetOnByDefault(void)
      {
        if (flagHasStoredPerUserPagesToSetOnByDefault)
          {
            storeStoredPerUserPagesToSetOnByDefault->remove_reference();
          }
        flagHasStoredPerUserPagesToSetOnByDefault = false;
      }
    void setStoredGlobalPagesToSetOffByDefault(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredGlobalPagesToSetOffByDefault)
          {
            storeStoredGlobalPagesToSetOffByDefault->remove_reference();
          }
        flagHasStoredGlobalPagesToSetOffByDefault = true;
        storeStoredGlobalPagesToSetOffByDefault = new_value;
      }
    void unsetStoredGlobalPagesToSetOffByDefault(void)
      {
        if (flagHasStoredGlobalPagesToSetOffByDefault)
          {
            storeStoredGlobalPagesToSetOffByDefault->remove_reference();
          }
        flagHasStoredGlobalPagesToSetOffByDefault = false;
      }
    void setStoredPerUserPagesToSetOffByDefault(StoredPageMatchPageListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredPerUserPagesToSetOffByDefault)
          {
            storeStoredPerUserPagesToSetOffByDefault->remove_reference();
          }
        flagHasStoredPerUserPagesToSetOffByDefault = true;
        storeStoredPerUserPagesToSetOffByDefault = new_value;
      }
    void unsetStoredPerUserPagesToSetOffByDefault(void)
      {
        if (flagHasStoredPerUserPagesToSetOffByDefault)
          {
            storeStoredPerUserPagesToSetOffByDefault->remove_reference();
          }
        flagHasStoredPerUserPagesToSetOffByDefault = false;
      }
    void setStoredPageMatchWriteData(StoredPageMatchWriteDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredPageMatchWriteData)
          {
            storeStoredPageMatchWriteData->remove_reference();
          }
        flagHasStoredPageMatchWriteData = true;
        storeStoredPageMatchWriteData = new_value;
      }
    void unsetStoredPageMatchWriteData(void)
      {
        if (flagHasStoredPageMatchWriteData)
          {
            storeStoredPageMatchWriteData->remove_reference();
          }
        flagHasStoredPageMatchWriteData = false;
      }
    void setStoredPageMatchReadData(StoredPageMatchReadDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredPageMatchReadData)
          {
            storeStoredPageMatchReadData->remove_reference();
          }
        flagHasStoredPageMatchReadData = true;
        storeStoredPageMatchReadData = new_value;
      }
    void unsetStoredPageMatchReadData(void)
      {
        if (flagHasStoredPageMatchReadData)
          {
            storeStoredPageMatchReadData->remove_reference();
          }
        flagHasStoredPageMatchReadData = false;
      }
    void setStoredPageMatchPageListData(StoredPageMatchPageListDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredPageMatchPageListData)
          {
            storeStoredPageMatchPageListData->remove_reference();
          }
        flagHasStoredPageMatchPageListData = true;
        storeStoredPageMatchPageListData = new_value;
      }
    void unsetStoredPageMatchPageListData(void)
      {
        if (flagHasStoredPageMatchPageListData)
          {
            storeStoredPageMatchPageListData->remove_reference();
          }
        flagHasStoredPageMatchPageListData = false;
      }
    void setVoiceParameters(VoiceParametersJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasVoiceParameters)
          {
            storeVoiceParameters->remove_reference();
          }
        flagHasVoiceParameters = true;
        storeVoiceParameters = new_value;
      }
    void unsetVoiceParameters(void)
      {
        if (flagHasVoiceParameters)
          {
            storeVoiceParameters->remove_reference();
          }
        flagHasVoiceParameters = false;
      }
    void setStoredAlwaysMatchWriteData(ClientMatchesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredAlwaysMatchWriteData)
          {
            storeStoredAlwaysMatchWriteData->remove_reference();
          }
        flagHasStoredAlwaysMatchWriteData = true;
        storeStoredAlwaysMatchWriteData = new_value;
      }
    void unsetStoredAlwaysMatchWriteData(void)
      {
        if (flagHasStoredAlwaysMatchWriteData)
          {
            storeStoredAlwaysMatchWriteData->remove_reference();
          }
        flagHasStoredAlwaysMatchWriteData = false;
      }
    void setStoredAlwaysMatchReadData(StoredAlwaysMatchReadDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStoredAlwaysMatchReadData)
          {
            storeStoredAlwaysMatchReadData->remove_reference();
          }
        flagHasStoredAlwaysMatchReadData = true;
        storeStoredAlwaysMatchReadData = new_value;
      }
    void setStoredAlwaysMatchReadData(bool new_value)
      {
        setStoredAlwaysMatchReadData(new StoredAlwaysMatchReadDataJSON(new_value));
      }
    void unsetStoredAlwaysMatchReadData(void)
      {
        if (flagHasStoredAlwaysMatchReadData)
          {
            storeStoredAlwaysMatchReadData->remove_reference();
          }
        flagHasStoredAlwaysMatchReadData = false;
      }
    void setUserFeedback(UserFeedbackJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUserFeedback)
          {
            storeUserFeedback->remove_reference();
          }
        flagHasUserFeedback = true;
        storeUserFeedback = new_value;
      }
    void unsetUserFeedback(void)
      {
        if (flagHasUserFeedback)
          {
            storeUserFeedback->remove_reference();
          }
        flagHasUserFeedback = false;
      }
    void setRadioControlRecognizeNorthAmericanFMBand(RadioControlRecognizeNorthAmericanFMBandJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRadioControlRecognizeNorthAmericanFMBand)
          {
            storeRadioControlRecognizeNorthAmericanFMBand->remove_reference();
          }
        flagHasRadioControlRecognizeNorthAmericanFMBand = true;
        storeRadioControlRecognizeNorthAmericanFMBand = new_value;
      }
    void setRadioControlRecognizeNorthAmericanFMBand(bool new_value)
      {
        setRadioControlRecognizeNorthAmericanFMBand(new RadioControlRecognizeNorthAmericanFMBandJSON(new_value));
      }
    void unsetRadioControlRecognizeNorthAmericanFMBand(void)
      {
        if (flagHasRadioControlRecognizeNorthAmericanFMBand)
          {
            storeRadioControlRecognizeNorthAmericanFMBand->remove_reference();
          }
        flagHasRadioControlRecognizeNorthAmericanFMBand = false;
      }
    void setRadioControlRecognizeNorthAmericanAMBand(RadioControlRecognizeNorthAmericanAMBandJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRadioControlRecognizeNorthAmericanAMBand)
          {
            storeRadioControlRecognizeNorthAmericanAMBand->remove_reference();
          }
        flagHasRadioControlRecognizeNorthAmericanAMBand = true;
        storeRadioControlRecognizeNorthAmericanAMBand = new_value;
      }
    void setRadioControlRecognizeNorthAmericanAMBand(bool new_value)
      {
        setRadioControlRecognizeNorthAmericanAMBand(new RadioControlRecognizeNorthAmericanAMBandJSON(new_value));
      }
    void unsetRadioControlRecognizeNorthAmericanAMBand(void)
      {
        if (flagHasRadioControlRecognizeNorthAmericanAMBand)
          {
            storeRadioControlRecognizeNorthAmericanAMBand->remove_reference();
          }
        flagHasRadioControlRecognizeNorthAmericanAMBand = false;
      }
    void setRadioControlOtherFMBands(RadioControlOtherFMBandsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRadioControlOtherFMBands)
          {
            storeRadioControlOtherFMBands->remove_reference();
          }
        flagHasRadioControlOtherFMBands = true;
        storeRadioControlOtherFMBands = new_value;
      }
    void unsetRadioControlOtherFMBands(void)
      {
        if (flagHasRadioControlOtherFMBands)
          {
            storeRadioControlOtherFMBands->remove_reference();
          }
        flagHasRadioControlOtherFMBands = false;
      }
    void setRadioControlOtherAMBands(RadioControlOtherAMBandsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRadioControlOtherAMBands)
          {
            storeRadioControlOtherAMBands->remove_reference();
          }
        flagHasRadioControlOtherAMBands = true;
        storeRadioControlOtherAMBands = new_value;
      }
    void unsetRadioControlOtherAMBands(void)
      {
        if (flagHasRadioControlOtherAMBands)
          {
            storeRadioControlOtherAMBands->remove_reference();
          }
        flagHasRadioControlOtherAMBands = false;
      }
    void setClientListMatches(ClientListMatchesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClientListMatches)
          {
            storeClientListMatches->remove_reference();
          }
        flagHasClientListMatches = true;
        storeClientListMatches = new_value;
      }
    void unsetClientListMatches(void)
      {
        if (flagHasClientListMatches)
          {
            storeClientListMatches->remove_reference();
          }
        flagHasClientListMatches = false;
      }
    void setIntentToExecute(CommandIntentJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasIntentToExecute)
          {
            storeIntentToExecute->remove_reference();
          }
        flagHasIntentToExecute = true;
        storeIntentToExecute = new_value;
      }
    void unsetIntentToExecute(void)
      {
        if (flagHasIntentToExecute)
          {
            storeIntentToExecute->remove_reference();
          }
        flagHasIntentToExecute = false;
      }
    void setRobotInfo(RobotInfoJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRobotInfo)
          {
            storeRobotInfo->remove_reference();
          }
        flagHasRobotInfo = true;
        storeRobotInfo = new_value;
      }
    void unsetRobotInfo(void)
      {
        if (flagHasRobotInfo)
          {
            storeRobotInfo->remove_reference();
          }
        flagHasRobotInfo = false;
      }
    void setConvertToNewInformationNuggets(ConvertToNewInformationNuggetsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasConvertToNewInformationNuggets)
          {
            storeConvertToNewInformationNuggets->remove_reference();
          }
        flagHasConvertToNewInformationNuggets = true;
        storeConvertToNewInformationNuggets = new_value;
      }
    void setConvertToNewInformationNuggets(bool new_value)
      {
        setConvertToNewInformationNuggets(new ConvertToNewInformationNuggetsJSON(new_value));
      }
    void unsetConvertToNewInformationNuggets(void)
      {
        if (flagHasConvertToNewInformationNuggets)
          {
            storeConvertToNewInformationNuggets->remove_reference();
          }
        flagHasConvertToNewInformationNuggets = false;
      }
    void setAcapelaVoiceParameters(AcapelaVoiceParametersJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAcapelaVoiceParameters)
          {
            storeAcapelaVoiceParameters->remove_reference();
          }
        flagHasAcapelaVoiceParameters = true;
        storeAcapelaVoiceParameters = new_value;
      }
    void unsetAcapelaVoiceParameters(void)
      {
        if (flagHasAcapelaVoiceParameters)
          {
            storeAcapelaVoiceParameters->remove_reference();
          }
        flagHasAcapelaVoiceParameters = false;
      }
    void setDisambiguateResultsBeforeAction(DisambiguateResultsBeforeActionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisambiguateResultsBeforeAction)
          {
            storeDisambiguateResultsBeforeAction->remove_reference();
          }
        flagHasDisambiguateResultsBeforeAction = true;
        storeDisambiguateResultsBeforeAction = new_value;
      }
    void setDisambiguateResultsBeforeAction(bool new_value)
      {
        setDisambiguateResultsBeforeAction(new DisambiguateResultsBeforeActionJSON(new_value));
      }
    void unsetDisambiguateResultsBeforeAction(void)
      {
        if (flagHasDisambiguateResultsBeforeAction)
          {
            storeDisambiguateResultsBeforeAction->remove_reference();
          }
        flagHasDisambiguateResultsBeforeAction = false;
      }

    virtual void extraRequestInfoAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRequestInfoSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRequestInfoLookup(key);
        if (old_field == NULL)
          {
            extraRequestInfoAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        if (flagHasLatitude)
          {
            handler->start_pair("Latitude");
            if (textStoreLatitude != "")
                handler->number_value(textStoreLatitude.c_str());
            else if (((double)(long int)storeLatitude) == storeLatitude)
                handler->number_value((long int)storeLatitude);
            else
                handler->number_value(storeLatitude);
          }
        if (flagHasLongitude)
          {
            handler->start_pair("Longitude");
            if (textStoreLongitude != "")
                handler->number_value(textStoreLongitude.c_str());
            else if (((double)(long int)storeLongitude) == storeLongitude)
                handler->number_value((long int)storeLongitude);
            else
                handler->number_value(storeLongitude);
          }
        if (flagHasPositionTime)
          {
            handler->start_pair("PositionTime");
            handler->number_value(storePositionTime.get_o_integer());
          }
        if (flagHasPositionHorizontalAccuracy)
          {
            handler->start_pair("PositionHorizontalAccuracy");
            if (textStorePositionHorizontalAccuracy != "")
                handler->number_value(textStorePositionHorizontalAccuracy.c_str());
            else if (((double)(long int)storePositionHorizontalAccuracy) == storePositionHorizontalAccuracy)
                handler->number_value((long int)storePositionHorizontalAccuracy);
            else
                handler->number_value(storePositionHorizontalAccuracy);
          }
        if (flagHasStreet)
          {
            handler->start_pair("Street");
            handler->string_value(storeStreet);
          }
        if (flagHasCity)
          {
            handler->start_pair("City");
            handler->string_value(storeCity);
          }
        if (flagHasState)
          {
            handler->start_pair("State");
            handler->string_value(storeState);
          }
        if (flagHasCountry)
          {
            handler->start_pair("Country");
            handler->string_value(storeCountry);
          }
        if (flagHasRoutePoints)
          {
            handler->start_pair("RoutePoints");
            storeRoutePoints->write_as_json(handler);
          }
        if (flagHasControllableTrackPlaying)
          {
            handler->start_pair("ControllableTrackPlaying");
            handler->boolean_value(storeControllableTrackPlaying);
          }
        if (flagHasTimeStamp)
          {
            handler->start_pair("TimeStamp");
            handler->number_value(storeTimeStamp.get_o_integer());
          }
        if (flagHasTimeZone)
          {
            handler->start_pair("TimeZone");
            handler->string_value(storeTimeZone);
          }
        if (flagHasConversationState)
          {
            handler->start_pair("ConversationState");
            storeConversationState->write_as_json(handler);
          }
        if (flagHasClientState)
          {
            handler->start_pair("ClientState");
            storeClientState->write_as_json(handler);
          }
        if (flagHasSendBack)
          {
            handler->start_pair("SendBack");
            storeSendBack->write(handler);
          }
        if (flagHasPreferredImageSize)
          {
            handler->start_pair("PreferredImageSize");
            assert(storePreferredImageSize.size() >= 2);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePreferredImageSize.size(); ++num1)
              {
                handler->number_value(storePreferredImageSize[num1].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasInputLanguageEnglishName)
          {
            handler->start_pair("InputLanguageEnglishName");
            handler->string_value(storeInputLanguageEnglishName);
          }
        if (flagHasInputLanguageNativeName)
          {
            handler->start_pair("InputLanguageNativeName");
            handler->string_value(storeInputLanguageNativeName);
          }
        if (flagHasInputLanguageIETFTag)
          {
            handler->start_pair("InputLanguageIETFTag");
            handler->string_value(storeInputLanguageIETFTag);
          }
        if (flagHasOutputLanguageEnglishName)
          {
            handler->start_pair("OutputLanguageEnglishName");
            handler->string_value(storeOutputLanguageEnglishName);
          }
        if (flagHasOutputLanguageNativeName)
          {
            handler->start_pair("OutputLanguageNativeName");
            handler->string_value(storeOutputLanguageNativeName);
          }
        if (flagHasOutputLanguageIETFTag)
          {
            handler->start_pair("OutputLanguageIETFTag");
            handler->string_value(storeOutputLanguageIETFTag);
          }
        if (flagHasResultVersionAccepted)
          {
            handler->start_pair("ResultVersionAccepted");
            if (textStoreResultVersionAccepted != "")
                handler->number_value(textStoreResultVersionAccepted.c_str());
            else if (((double)(long int)storeResultVersionAccepted) == storeResultVersionAccepted)
                handler->number_value((long int)storeResultVersionAccepted);
            else
                handler->number_value(storeResultVersionAccepted);
          }
        if (flagHasUnitPreference)
          {
            handler->start_pair("UnitPreference");
            switch (storeUnitPreference)
              {
                case UnitPreference_US:
                    handler->string_value("US");
                    break;
                case UnitPreference_METRIC:
                    handler->string_value("METRIC");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasDefaultTimeFormat24Hours)
          {
            handler->start_pair("DefaultTimeFormat24Hours");
            handler->boolean_value(storeDefaultTimeFormat24Hours);
          }
        if (flagHasClientID)
          {
            handler->start_pair("ClientID");
            handler->string_value(storeClientID);
          }
        if (flagHasClientVersion)
          {
            handler->start_pair("ClientVersion");
            switch (storeClientVersion.key)
              {
                case 0:
                    handler->string_value(storeClientVersion.choice0);
                    break;
                case 1:
                    handler->number_value(storeClientVersion.choice1.get_o_integer());
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasDeviceID)
          {
            handler->start_pair("DeviceID");
            handler->string_value(storeDeviceID);
          }
        if (flagHasSDK)
          {
            handler->start_pair("SDK");
            handler->string_value(storeSDK);
          }
        if (flagHasSDKInfo)
          {
            handler->start_pair("SDKInfo");
            storeSDKInfo->write(handler);
          }
        if (flagHasFirstPersonSelf)
          {
            handler->start_pair("FirstPersonSelf");
            handler->string_value(storeFirstPersonSelf);
          }
        if (flagHasFirstPersonSelfSpoken)
          {
            handler->start_pair("FirstPersonSelfSpoken");
            handler->string_value(storeFirstPersonSelfSpoken);
          }
        if (flagHasSecondPersonSelf)
          {
            handler->start_pair("SecondPersonSelf");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeSecondPersonSelf.size(); ++num2)
              {
                handler->string_value(storeSecondPersonSelf[num2]);
              }
            handler->finish_array();
          }
        if (flagHasSecondPersonSelfSpoken)
          {
            handler->start_pair("SecondPersonSelfSpoken");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeSecondPersonSelfSpoken.size(); ++num3)
              {
                handler->string_value(storeSecondPersonSelfSpoken[num3]);
              }
            handler->finish_array();
          }
        if (flagHasWakeUpPattern)
          {
            handler->start_pair("WakeUpPattern");
            handler->string_value(storeWakeUpPattern);
          }
        if (flagHasUserID)
          {
            handler->start_pair("UserID");
            handler->string_value(storeUserID);
          }
        if (flagHasRequestID)
          {
            handler->start_pair("RequestID");
            handler->string_value(storeRequestID);
          }
        if (flagHasSessionID)
          {
            handler->start_pair("SessionID");
            handler->string_value(storeSessionID);
          }
        if (flagHasDomains)
          {
            handler->start_pair("Domains");
            storeDomains->write_as_json(handler);
          }
        if (flagHasResultUpdateAllowed)
          {
            handler->start_pair("ResultUpdateAllowed");
            handler->boolean_value(storeResultUpdateAllowed);
          }
        if (flagHasPartialTranscriptsDesired)
          {
            handler->start_pair("PartialTranscriptsDesired");
            handler->boolean_value(storePartialTranscriptsDesired);
          }
        if (flagHasMinResults)
          {
            handler->start_pair("MinResults");
            handler->number_value(storeMinResults.get_o_integer());
          }
        if (flagHasMaxResults)
          {
            handler->start_pair("MaxResults");
            handler->number_value(storeMaxResults.get_o_integer());
          }
        if (flagHasObjectByteCountPrefix)
          {
            handler->start_pair("ObjectByteCountPrefix");
            handler->boolean_value(storeObjectByteCountPrefix);
          }
        if (flagHasProfanityFilter)
          {
            handler->start_pair("ProfanityFilter");
            switch (storeProfanityFilter)
              {
                case ProfanityFilter_AllowAll:
                    handler->string_value("AllowAll");
                    break;
                case ProfanityFilter_StarOne:
                    handler->string_value("StarOne");
                    break;
                case ProfanityFilter_StarAllButFirst:
                    handler->string_value("StarAllButFirst");
                    break;
                case ProfanityFilter_StarAll:
                    handler->string_value("StarAll");
                    break;
                case ProfanityFilter_DontRecognize:
                    handler->string_value("DontRecognize");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasClientMatches)
          {
            handler->start_pair("ClientMatches");
            assert(storeClientMatches.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeClientMatches.size(); ++num4)
              {
                storeClientMatches[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasClientMatchesOnly)
          {
            handler->start_pair("ClientMatchesOnly");
            handler->boolean_value(storeClientMatchesOnly);
          }
        if (flagHasResponseAudioVoice)
          {
            handler->start_pair("ResponseAudioVoice");
            handler->string_value(storeResponseAudioVoice);
          }
        if (flagHasResponseAudioShortOrLong)
          {
            handler->start_pair("ResponseAudioShortOrLong");
            switch (storeResponseAudioShortOrLong)
              {
                case ResponseAudioShortOrLong_Short:
                    handler->string_value("Short");
                    break;
                case ResponseAudioShortOrLong_Long:
                    handler->string_value("Long");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasResponseAudioAcceptedEncodings)
          {
            handler->start_pair("ResponseAudioAcceptedEncodings");
            assert(storeResponseAudioAcceptedEncodings.size() >= 1);
            handler->start_array();
            for (size_t num5 = 0; num5 < storeResponseAudioAcceptedEncodings.size(); ++num5)
              {
                if (storeResponseAudioAcceptedEncodings[num5].in_known_list)
                  {
                    switch (storeResponseAudioAcceptedEncodings[num5].list_value)
                      {
                        case ResponseAudioAcceptedEncodings_WAV:
                            handler->string_value("WAV");
                            break;
                        case ResponseAudioAcceptedEncodings_Speex:
                            handler->string_value("Speex");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeResponseAudioAcceptedEncodings[num5].string_value);
                  }
              }
            handler->finish_array();
          }
        if (flagHasVoiceActivityDetection)
          {
            handler->start_pair("VoiceActivityDetection");
            storeVoiceActivityDetection->write_as_json(handler);
          }
        if (flagHasServerDeterminesEndOfAudio)
          {
            handler->start_pair("ServerDeterminesEndOfAudio");
            handler->boolean_value(storeServerDeterminesEndOfAudio);
          }
        if (flagHasIntentOnly)
          {
            handler->start_pair("IntentOnly");
            handler->boolean_value(storeIntentOnly);
          }
        if (flagHasDisableSpellCorrection)
          {
            handler->start_pair("DisableSpellCorrection");
            handler->boolean_value(storeDisableSpellCorrection);
          }
        if (flagHasUseContactData)
          {
            handler->start_pair("UseContactData");
            handler->boolean_value(storeUseContactData);
          }
        if (flagHasUseClientTime)
          {
            handler->start_pair("UseClientTime");
            handler->boolean_value(storeUseClientTime);
          }
        if (flagHasForceConversationStateTime)
          {
            handler->start_pair("ForceConversationStateTime");
            handler->number_value(storeForceConversationStateTime.get_o_integer());
          }
        if (flagHasPhoneDisambiguationOmitList)
          {
            handler->start_pair("PhoneDisambiguationOmitList");
            storePhoneDisambiguationOmitList->write_as_json(handler);
          }
        if (flagHasIncomingCallPending)
          {
            handler->start_pair("IncomingCallPending");
            storeIncomingCallPending->write_as_json(handler);
          }
        if (flagHasAllowPopularNameContactMatches)
          {
            handler->start_pair("AllowPopularNameContactMatches");
            storeAllowPopularNameContactMatches->write_as_json(handler);
          }
        if (flagHasMusicClientState)
          {
            handler->start_pair("MusicClientState");
            storeMusicClientState->write_as_json(handler);
          }
        if (flagHasDisableMusicSearchListPositionSpecification)
          {
            handler->start_pair("DisableMusicSearchListPositionSpecification");
            storeDisableMusicSearchListPositionSpecification->write_as_json(handler);
          }
        if (flagHasCollateMusicEntities)
          {
            handler->start_pair("CollateMusicEntities");
            storeCollateMusicEntities->write_as_json(handler);
          }
        if (flagHasAllowContextFreeMusicSearchForPopularEntities)
          {
            handler->start_pair("AllowContextFreeMusicSearchForPopularEntities");
            storeAllowContextFreeMusicSearchForPopularEntities->write_as_json(handler);
          }
        if (flagHasSportsLeagueControl)
          {
            handler->start_pair("SportsLeagueControl");
            storeSportsLeagueControl->write_as_json(handler);
          }
        if (flagHasLocalSearchClientState)
          {
            handler->start_pair("LocalSearchClientState");
            storeLocalSearchClientState->write_as_json(handler);
          }
        if (flagHasUberServerToken)
          {
            handler->start_pair("UberServerToken");
            storeUberServerToken->write_as_json(handler);
          }
        if (flagHasGetUberServerToken)
          {
            handler->start_pair("GetUberServerToken");
            storeGetUberServerToken->write_as_json(handler);
          }
        if (flagHasUberClientId)
          {
            handler->start_pair("UberClientId");
            storeUberClientId->write_as_json(handler);
          }
        if (flagHasGetUberClientId)
          {
            handler->start_pair("GetUberClientId");
            storeGetUberClientId->write_as_json(handler);
          }
        if (flagHasDisableMusicPlayerListPositionSpecification)
          {
            handler->start_pair("DisableMusicPlayerListPositionSpecification");
            storeDisableMusicPlayerListPositionSpecification->write_as_json(handler);
          }
        if (flagHasHomeAutomationDomainSettings)
          {
            handler->start_pair("HomeAutomationDomainSettings");
            storeHomeAutomationDomainSettings->write_as_json(handler);
          }
        if (flagHasUserContactsRequests)
          {
            handler->start_pair("UserContactsRequests");
            storeUserContactsRequests->write_as_json(handler);
          }
        if (flagHasStoredGlobalPagesToMatch)
          {
            handler->start_pair("StoredGlobalPagesToMatch");
            storeStoredGlobalPagesToMatch->write_as_json(handler);
          }
        if (flagHasStoredGlobalPagesToNotMatch)
          {
            handler->start_pair("StoredGlobalPagesToNotMatch");
            storeStoredGlobalPagesToNotMatch->write_as_json(handler);
          }
        if (flagHasStoredPerUserPagesToMatch)
          {
            handler->start_pair("StoredPerUserPagesToMatch");
            storeStoredPerUserPagesToMatch->write_as_json(handler);
          }
        if (flagHasStoredPerUserPagesToNotMatch)
          {
            handler->start_pair("StoredPerUserPagesToNotMatch");
            storeStoredPerUserPagesToNotMatch->write_as_json(handler);
          }
        if (flagHasStoredGlobalPagesToSetOnByDefault)
          {
            handler->start_pair("StoredGlobalPagesToSetOnByDefault");
            storeStoredGlobalPagesToSetOnByDefault->write_as_json(handler);
          }
        if (flagHasStoredPerUserPagesToSetOnByDefault)
          {
            handler->start_pair("StoredPerUserPagesToSetOnByDefault");
            storeStoredPerUserPagesToSetOnByDefault->write_as_json(handler);
          }
        if (flagHasStoredGlobalPagesToSetOffByDefault)
          {
            handler->start_pair("StoredGlobalPagesToSetOffByDefault");
            storeStoredGlobalPagesToSetOffByDefault->write_as_json(handler);
          }
        if (flagHasStoredPerUserPagesToSetOffByDefault)
          {
            handler->start_pair("StoredPerUserPagesToSetOffByDefault");
            storeStoredPerUserPagesToSetOffByDefault->write_as_json(handler);
          }
        if (flagHasStoredPageMatchWriteData)
          {
            handler->start_pair("StoredPageMatchWriteData");
            storeStoredPageMatchWriteData->write_as_json(handler);
          }
        if (flagHasStoredPageMatchReadData)
          {
            handler->start_pair("StoredPageMatchReadData");
            storeStoredPageMatchReadData->write_as_json(handler);
          }
        if (flagHasStoredPageMatchPageListData)
          {
            handler->start_pair("StoredPageMatchPageListData");
            storeStoredPageMatchPageListData->write_as_json(handler);
          }
        if (flagHasVoiceParameters)
          {
            handler->start_pair("VoiceParameters");
            storeVoiceParameters->write_as_json(handler);
          }
        if (flagHasStoredAlwaysMatchWriteData)
          {
            handler->start_pair("StoredAlwaysMatchWriteData");
            storeStoredAlwaysMatchWriteData->write_as_json(handler);
          }
        if (flagHasStoredAlwaysMatchReadData)
          {
            handler->start_pair("StoredAlwaysMatchReadData");
            storeStoredAlwaysMatchReadData->write_as_json(handler);
          }
        if (flagHasUserFeedback)
          {
            handler->start_pair("UserFeedback");
            storeUserFeedback->write_as_json(handler);
          }
        if (flagHasRadioControlRecognizeNorthAmericanFMBand)
          {
            handler->start_pair("RadioControlRecognizeNorthAmericanFMBand");
            storeRadioControlRecognizeNorthAmericanFMBand->write_as_json(handler);
          }
        if (flagHasRadioControlRecognizeNorthAmericanAMBand)
          {
            handler->start_pair("RadioControlRecognizeNorthAmericanAMBand");
            storeRadioControlRecognizeNorthAmericanAMBand->write_as_json(handler);
          }
        if (flagHasRadioControlOtherFMBands)
          {
            handler->start_pair("RadioControlOtherFMBands");
            storeRadioControlOtherFMBands->write_as_json(handler);
          }
        if (flagHasRadioControlOtherAMBands)
          {
            handler->start_pair("RadioControlOtherAMBands");
            storeRadioControlOtherAMBands->write_as_json(handler);
          }
        if (flagHasClientListMatches)
          {
            handler->start_pair("ClientListMatches");
            storeClientListMatches->write_as_json(handler);
          }
        if (flagHasIntentToExecute)
          {
            handler->start_pair("IntentToExecute");
            storeIntentToExecute->write_as_json(handler);
          }
        if (flagHasRobotInfo)
          {
            handler->start_pair("RobotInfo");
            storeRobotInfo->write_as_json(handler);
          }
        if (flagHasConvertToNewInformationNuggets)
          {
            handler->start_pair("ConvertToNewInformationNuggets");
            storeConvertToNewInformationNuggets->write_as_json(handler);
          }
        if (flagHasAcapelaVoiceParameters)
          {
            handler->start_pair("AcapelaVoiceParameters");
            storeAcapelaVoiceParameters->write_as_json(handler);
          }
        if (flagHasDisambiguateResultsBeforeAction)
          {
            handler->start_pair("DisambiguateResultsBeforeAction");
            storeDisambiguateResultsBeforeAction->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RequestInfoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RequestInfoJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RequestInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RequestInfoJSON>, RequestInfoJSON *, bool> generator("Type RequestInfo", ignore_extras);
            parse_json_value(text, "Text for RequestInfoJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RequestInfoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RequestInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RequestInfoJSON>, RequestInfoJSON *, bool> generator("Type RequestInfo", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorPositionTime;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPositionHorizontalAccuracy;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStreet;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCity;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorState;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountry;
        JSONHoldingGenerator<RoutePointsJSON::Generator, RCHandle<RoutePointsJSON>, RoutePointsJSON *, bool > fieldGeneratorRoutePoints;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorControllableTrackPlaying;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorTimeStamp;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTimeZone;
        JSONHoldingGenerator<ConversationStateJSON::Generator, RCHandle<ConversationStateJSON>, ConversationStateJSON *, bool > fieldGeneratorConversationState;
        JSONHoldingGenerator<ClientStateJSON::Generator, RCHandle<ClientStateJSON>, ClientStateJSON *, bool > fieldGeneratorClientState;
        JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorSendBack;
        static char lowerBoundPreferredImageSize[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPreferredImageSize>, OInteger, o_integer > fieldGeneratorPreferredImageSize;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInputLanguageEnglishName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInputLanguageNativeName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInputLanguageIETFTag;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputLanguageEnglishName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputLanguageNativeName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputLanguageIETFTag;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorResultVersionAccepted;
    class FieldGeneratorUnitPreference : public JSONStringGenerator
          {
          protected:
            FieldGeneratorUnitPreference(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorUnitPreference(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToUnitPreference(result));
              }
            virtual void handle_result(TypeUnitPreference result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorUnitPreference, TypeUnitPreference, TypeUnitPreference > fieldGeneratorUnitPreference;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDefaultTimeFormat24Hours;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorClientID;
        static char lowerBoundClientVersion_1[];
    class FieldGeneratorClientVersion : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundClientVersion_1>, OInteger, o_integer > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeClientVersion result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeClientVersion result) = 0;

          public:
            FieldGeneratorClientVersion(bool ignore_extras) : field0("option 0 of field \"ClientVersion\""), field1("option 1 of field \"ClientVersion\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorClientVersion(std::string what, bool ignore_extras) : field0("option 0 of field \"ClientVersion\""), field1("option 1 of field \"ClientVersion\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorClientVersion(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderClientVersion
          {
          private:
            bool have_data;
            TypeClientVersion data;

          public:
            HolderClientVersion(void) : have_data(false)  { }
            HolderClientVersion(TypeClientVersion init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderClientVersion(const HolderClientVersion &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderClientVersion(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderClientVersion &other)
              {
                TypeClientVersion new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeClientVersion referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorClientVersion, HolderClientVersion, TypeClientVersion, bool > fieldGeneratorClientVersion;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDeviceID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSDK;
        JSONHoldingGenerator<JSONObjectValueGenerator, RCHandle<JSONObjectValue>, JSONObjectValue * > fieldGeneratorSDKInfo;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFirstPersonSelf;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFirstPersonSelfSpoken;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSecondPersonSelf;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSecondPersonSelfSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWakeUpPattern;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUserID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSessionID;
        JSONHoldingGenerator<DomainsJSON::Generator, RCHandle<DomainsJSON>, DomainsJSON *, bool > fieldGeneratorDomains;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorResultUpdateAllowed;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPartialTranscriptsDesired;
        static char lowerBoundMinResults[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMinResults>, OInteger, o_integer > fieldGeneratorMinResults;
        static char lowerBoundMaxResults[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMaxResults>, OInteger, o_integer > fieldGeneratorMaxResults;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorObjectByteCountPrefix;
    class FieldGeneratorProfanityFilter : public JSONStringGenerator
          {
          protected:
            FieldGeneratorProfanityFilter(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorProfanityFilter(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToProfanityFilter(result));
              }
            virtual void handle_result(TypeProfanityFilter result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorProfanityFilter, TypeProfanityFilter, TypeProfanityFilter > fieldGeneratorProfanityFilter;
        JSONHoldingArrayGenerator<ClientMatchJSON::Generator, RCHandle<ClientMatchJSON>, ClientMatchJSON *, bool > fieldGeneratorClientMatches;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorClientMatchesOnly;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResponseAudioVoice;
    class FieldGeneratorResponseAudioShortOrLong : public JSONStringGenerator
          {
          protected:
            FieldGeneratorResponseAudioShortOrLong(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorResponseAudioShortOrLong(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToResponseAudioShortOrLong(result));
              }
            virtual void handle_result(TypeResponseAudioShortOrLong result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorResponseAudioShortOrLong, TypeResponseAudioShortOrLong, TypeResponseAudioShortOrLong > fieldGeneratorResponseAudioShortOrLong;
    class FieldGeneratorResponseAudioAcceptedEncodings : public JSONStringGenerator
          {
          protected:
            FieldGeneratorResponseAudioAcceptedEncodings(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorResponseAudioAcceptedEncodings(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeResponseAudioAcceptedEncodingsKnownValues known = stringToResponseAudioAcceptedEncodings(result);
                TypeResponseAudioAcceptedEncodings new_value;
                if (known == ResponseAudioAcceptedEncodings__none)
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
            virtual void handle_result(TypeResponseAudioAcceptedEncodings result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorResponseAudioAcceptedEncodings, TypeResponseAudioAcceptedEncodings, TypeResponseAudioAcceptedEncodings > fieldGeneratorResponseAudioAcceptedEncodings;
        JSONHoldingGenerator<VoiceActivityDetectionJSON::Generator, RCHandle<VoiceActivityDetectionJSON>, VoiceActivityDetectionJSON *, bool > fieldGeneratorVoiceActivityDetection;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorServerDeterminesEndOfAudio;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIntentOnly;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDisableSpellCorrection;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUseContactData;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUseClientTime;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorForceConversationStateTime;
        JSONHoldingGenerator<PhoneDisambiguationOmitListJSON::Generator, RCHandle<PhoneDisambiguationOmitListJSON>, PhoneDisambiguationOmitListJSON *, bool > fieldGeneratorPhoneDisambiguationOmitList;
        JSONHoldingGenerator<IncomingCallPendingJSON::Generator, RCHandle<IncomingCallPendingJSON>, IncomingCallPendingJSON *, bool > fieldGeneratorIncomingCallPending;
        JSONHoldingGenerator<AllowPopularNameContactMatchesJSON::Generator, RCHandle<AllowPopularNameContactMatchesJSON>, AllowPopularNameContactMatchesJSON *, bool > fieldGeneratorAllowPopularNameContactMatches;
        JSONHoldingGenerator<MusicClientStateJSON::Generator, RCHandle<MusicClientStateJSON>, MusicClientStateJSON *, bool > fieldGeneratorMusicClientState;
        JSONHoldingGenerator<DisableListPositionSpecificationJSON::Generator, RCHandle<DisableListPositionSpecificationJSON>, DisableListPositionSpecificationJSON *, bool > fieldGeneratorDisableMusicSearchListPositionSpecification;
        JSONHoldingGenerator<CollateMusicEntitiesJSON::Generator, RCHandle<CollateMusicEntitiesJSON>, CollateMusicEntitiesJSON *, bool > fieldGeneratorCollateMusicEntities;
        JSONHoldingGenerator<AllowContextFreeMusicSearchForPopularEntitiesJSON::Generator, RCHandle<AllowContextFreeMusicSearchForPopularEntitiesJSON>, AllowContextFreeMusicSearchForPopularEntitiesJSON *, bool > fieldGeneratorAllowContextFreeMusicSearchForPopularEntities;
        JSONHoldingGenerator<SportsLeagueControlJSON::Generator, RCHandle<SportsLeagueControlJSON>, SportsLeagueControlJSON *, bool > fieldGeneratorSportsLeagueControl;
        JSONHoldingGenerator<LocalSearchClientStateJSON::Generator, RCHandle<LocalSearchClientStateJSON>, LocalSearchClientStateJSON *, bool > fieldGeneratorLocalSearchClientState;
        JSONHoldingGenerator<UberServerTokenJSON::Generator, RCHandle<UberServerTokenJSON>, UberServerTokenJSON *, bool > fieldGeneratorUberServerToken;
        JSONHoldingGenerator<GetUberServerTokenJSON::Generator, RCHandle<GetUberServerTokenJSON>, GetUberServerTokenJSON *, bool > fieldGeneratorGetUberServerToken;
        JSONHoldingGenerator<UberClientIdJSON::Generator, RCHandle<UberClientIdJSON>, UberClientIdJSON *, bool > fieldGeneratorUberClientId;
        JSONHoldingGenerator<GetUberClientIdJSON::Generator, RCHandle<GetUberClientIdJSON>, GetUberClientIdJSON *, bool > fieldGeneratorGetUberClientId;
        JSONHoldingGenerator<DisableListPositionSpecificationJSON::Generator, RCHandle<DisableListPositionSpecificationJSON>, DisableListPositionSpecificationJSON *, bool > fieldGeneratorDisableMusicPlayerListPositionSpecification;
        JSONHoldingGenerator<HomeAutomationDomainSettingsJSON::Generator, RCHandle<HomeAutomationDomainSettingsJSON>, HomeAutomationDomainSettingsJSON *, bool > fieldGeneratorHomeAutomationDomainSettings;
        JSONHoldingGenerator<UserContactsRequestsJSON::Generator, RCHandle<UserContactsRequestsJSON>, UserContactsRequestsJSON *, bool > fieldGeneratorUserContactsRequests;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredGlobalPagesToMatch;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredGlobalPagesToNotMatch;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredPerUserPagesToMatch;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredPerUserPagesToNotMatch;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredGlobalPagesToSetOnByDefault;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredPerUserPagesToSetOnByDefault;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredGlobalPagesToSetOffByDefault;
        JSONHoldingGenerator<StoredPageMatchPageListJSON::Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool > fieldGeneratorStoredPerUserPagesToSetOffByDefault;
        JSONHoldingGenerator<StoredPageMatchWriteDataJSON::Generator, RCHandle<StoredPageMatchWriteDataJSON>, StoredPageMatchWriteDataJSON *, bool > fieldGeneratorStoredPageMatchWriteData;
        JSONHoldingGenerator<StoredPageMatchReadDataJSON::Generator, RCHandle<StoredPageMatchReadDataJSON>, StoredPageMatchReadDataJSON *, bool > fieldGeneratorStoredPageMatchReadData;
        JSONHoldingGenerator<StoredPageMatchPageListDataJSON::Generator, RCHandle<StoredPageMatchPageListDataJSON>, StoredPageMatchPageListDataJSON *, bool > fieldGeneratorStoredPageMatchPageListData;
        JSONHoldingGenerator<VoiceParametersJSON::Generator, RCHandle<VoiceParametersJSON>, VoiceParametersJSON *, bool > fieldGeneratorVoiceParameters;
        JSONHoldingGenerator<ClientMatchesJSON::Generator, RCHandle<ClientMatchesJSON>, ClientMatchesJSON *, bool > fieldGeneratorStoredAlwaysMatchWriteData;
        JSONHoldingGenerator<StoredAlwaysMatchReadDataJSON::Generator, RCHandle<StoredAlwaysMatchReadDataJSON>, StoredAlwaysMatchReadDataJSON *, bool > fieldGeneratorStoredAlwaysMatchReadData;
        JSONHoldingGenerator<UserFeedbackJSON::Generator, RCHandle<UserFeedbackJSON>, UserFeedbackJSON *, bool > fieldGeneratorUserFeedback;
        JSONHoldingGenerator<RadioControlRecognizeNorthAmericanFMBandJSON::Generator, RCHandle<RadioControlRecognizeNorthAmericanFMBandJSON>, RadioControlRecognizeNorthAmericanFMBandJSON *, bool > fieldGeneratorRadioControlRecognizeNorthAmericanFMBand;
        JSONHoldingGenerator<RadioControlRecognizeNorthAmericanAMBandJSON::Generator, RCHandle<RadioControlRecognizeNorthAmericanAMBandJSON>, RadioControlRecognizeNorthAmericanAMBandJSON *, bool > fieldGeneratorRadioControlRecognizeNorthAmericanAMBand;
        JSONHoldingGenerator<RadioControlOtherFMBandsJSON::Generator, RCHandle<RadioControlOtherFMBandsJSON>, RadioControlOtherFMBandsJSON *, bool > fieldGeneratorRadioControlOtherFMBands;
        JSONHoldingGenerator<RadioControlOtherAMBandsJSON::Generator, RCHandle<RadioControlOtherAMBandsJSON>, RadioControlOtherAMBandsJSON *, bool > fieldGeneratorRadioControlOtherAMBands;
        JSONHoldingGenerator<ClientListMatchesJSON::Generator, RCHandle<ClientListMatchesJSON>, ClientListMatchesJSON *, bool > fieldGeneratorClientListMatches;
        JSONHoldingGenerator<CommandIntentJSON::Generator, RCHandle<CommandIntentJSON>, CommandIntentJSON *, bool > fieldGeneratorIntentToExecute;
        JSONHoldingGenerator<RobotInfoJSON::Generator, RCHandle<RobotInfoJSON>, RobotInfoJSON *, bool > fieldGeneratorRobotInfo;
        JSONHoldingGenerator<ConvertToNewInformationNuggetsJSON::Generator, RCHandle<ConvertToNewInformationNuggetsJSON>, ConvertToNewInformationNuggetsJSON *, bool > fieldGeneratorConvertToNewInformationNuggets;
        JSONHoldingGenerator<AcapelaVoiceParametersJSON::Generator, RCHandle<AcapelaVoiceParametersJSON>, AcapelaVoiceParametersJSON *, bool > fieldGeneratorAcapelaVoiceParameters;
        JSONHoldingGenerator<DisambiguateResultsBeforeActionJSON::Generator, RCHandle<DisambiguateResultsBeforeActionJSON>, DisambiguateResultsBeforeActionJSON *, bool > fieldGeneratorDisambiguateResultsBeforeAction;
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
            RequestInfoJSON *result = new RequestInfoJSON();
            assert(result != NULL);
            RCHandle<RequestInfoJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRequestInfoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(RequestInfoJSON *result)
          {
            if (fieldGeneratorLatitude.have_value)
              {
                result->setLatitudeText(fieldGeneratorLatitude.value);
                fieldGeneratorLatitude.have_value = false;
              }
            if (fieldGeneratorLongitude.have_value)
              {
                result->setLongitudeText(fieldGeneratorLongitude.value);
                fieldGeneratorLongitude.have_value = false;
              }
            if (fieldGeneratorPositionTime.have_value)
              {
                result->setPositionTime(fieldGeneratorPositionTime.value);
                fieldGeneratorPositionTime.have_value = false;
              }
            if (fieldGeneratorPositionHorizontalAccuracy.have_value)
              {
                result->setPositionHorizontalAccuracyText(fieldGeneratorPositionHorizontalAccuracy.value);
                fieldGeneratorPositionHorizontalAccuracy.have_value = false;
              }
            if (fieldGeneratorStreet.have_value)
              {
                result->setStreet(fieldGeneratorStreet.value);
                fieldGeneratorStreet.have_value = false;
              }
            if (fieldGeneratorCity.have_value)
              {
                result->setCity(fieldGeneratorCity.value);
                fieldGeneratorCity.have_value = false;
              }
            if (fieldGeneratorState.have_value)
              {
                result->setState(fieldGeneratorState.value);
                fieldGeneratorState.have_value = false;
              }
            if (fieldGeneratorCountry.have_value)
              {
                result->setCountry(fieldGeneratorCountry.value);
                fieldGeneratorCountry.have_value = false;
              }
            if (fieldGeneratorRoutePoints.have_value)
              {
                result->setRoutePoints(fieldGeneratorRoutePoints.value.referenced());
                fieldGeneratorRoutePoints.have_value = false;
              }
            if (fieldGeneratorControllableTrackPlaying.have_value)
              {
                result->setControllableTrackPlaying(fieldGeneratorControllableTrackPlaying.value);
                fieldGeneratorControllableTrackPlaying.have_value = false;
              }
            if (fieldGeneratorTimeStamp.have_value)
              {
                result->setTimeStamp(fieldGeneratorTimeStamp.value);
                fieldGeneratorTimeStamp.have_value = false;
              }
            if (fieldGeneratorTimeZone.have_value)
              {
                result->setTimeZone(fieldGeneratorTimeZone.value);
                fieldGeneratorTimeZone.have_value = false;
              }
            if (fieldGeneratorConversationState.have_value)
              {
                result->setConversationState(fieldGeneratorConversationState.value.referenced());
                fieldGeneratorConversationState.have_value = false;
              }
            if (fieldGeneratorClientState.have_value)
              {
                result->setClientState(fieldGeneratorClientState.value.referenced());
                fieldGeneratorClientState.have_value = false;
              }
            if (fieldGeneratorSendBack.have_value)
              {
                result->setSendBack(fieldGeneratorSendBack.value.referenced());
                fieldGeneratorSendBack.have_value = false;
              }
            if (fieldGeneratorPreferredImageSize.have_value)
              {
                result->initPreferredImageSize();
                size_t count = fieldGeneratorPreferredImageSize.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPreferredImageSize(fieldGeneratorPreferredImageSize.value[num]);
                  }
                fieldGeneratorPreferredImageSize.value.clear();
                fieldGeneratorPreferredImageSize.have_value = false;
              }
            if (fieldGeneratorInputLanguageEnglishName.have_value)
              {
                result->setInputLanguageEnglishName(fieldGeneratorInputLanguageEnglishName.value);
                fieldGeneratorInputLanguageEnglishName.have_value = false;
              }
            if (fieldGeneratorInputLanguageNativeName.have_value)
              {
                result->setInputLanguageNativeName(fieldGeneratorInputLanguageNativeName.value);
                fieldGeneratorInputLanguageNativeName.have_value = false;
              }
            if (fieldGeneratorInputLanguageIETFTag.have_value)
              {
                result->setInputLanguageIETFTag(fieldGeneratorInputLanguageIETFTag.value);
                fieldGeneratorInputLanguageIETFTag.have_value = false;
              }
            if (fieldGeneratorOutputLanguageEnglishName.have_value)
              {
                result->setOutputLanguageEnglishName(fieldGeneratorOutputLanguageEnglishName.value);
                fieldGeneratorOutputLanguageEnglishName.have_value = false;
              }
            if (fieldGeneratorOutputLanguageNativeName.have_value)
              {
                result->setOutputLanguageNativeName(fieldGeneratorOutputLanguageNativeName.value);
                fieldGeneratorOutputLanguageNativeName.have_value = false;
              }
            if (fieldGeneratorOutputLanguageIETFTag.have_value)
              {
                result->setOutputLanguageIETFTag(fieldGeneratorOutputLanguageIETFTag.value);
                fieldGeneratorOutputLanguageIETFTag.have_value = false;
              }
            if (fieldGeneratorResultVersionAccepted.have_value)
              {
                result->setResultVersionAcceptedText(fieldGeneratorResultVersionAccepted.value);
                fieldGeneratorResultVersionAccepted.have_value = false;
              }
            if (fieldGeneratorUnitPreference.have_value)
              {
                result->setUnitPreference(fieldGeneratorUnitPreference.value);
                fieldGeneratorUnitPreference.have_value = false;
              }
            if (fieldGeneratorDefaultTimeFormat24Hours.have_value)
              {
                result->setDefaultTimeFormat24Hours(fieldGeneratorDefaultTimeFormat24Hours.value);
                fieldGeneratorDefaultTimeFormat24Hours.have_value = false;
              }
            if (fieldGeneratorClientID.have_value)
              {
                result->setClientID(fieldGeneratorClientID.value);
                fieldGeneratorClientID.have_value = false;
              }
            if (fieldGeneratorClientVersion.have_value)
              {
                result->setClientVersion(fieldGeneratorClientVersion.value.referenced());
                fieldGeneratorClientVersion.have_value = false;
              }
            if (fieldGeneratorDeviceID.have_value)
              {
                result->setDeviceID(fieldGeneratorDeviceID.value);
                fieldGeneratorDeviceID.have_value = false;
              }
            if (fieldGeneratorSDK.have_value)
              {
                result->setSDK(fieldGeneratorSDK.value);
                fieldGeneratorSDK.have_value = false;
              }
            if (fieldGeneratorSDKInfo.have_value)
              {
                result->setSDKInfo(fieldGeneratorSDKInfo.value.referenced());
                fieldGeneratorSDKInfo.have_value = false;
              }
            if (fieldGeneratorFirstPersonSelf.have_value)
              {
                result->setFirstPersonSelf(fieldGeneratorFirstPersonSelf.value);
                fieldGeneratorFirstPersonSelf.have_value = false;
              }
            if (fieldGeneratorFirstPersonSelfSpoken.have_value)
              {
                result->setFirstPersonSelfSpoken(fieldGeneratorFirstPersonSelfSpoken.value);
                fieldGeneratorFirstPersonSelfSpoken.have_value = false;
              }
            if (fieldGeneratorSecondPersonSelf.have_value)
              {
                result->initSecondPersonSelf();
                size_t count = fieldGeneratorSecondPersonSelf.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSecondPersonSelf(fieldGeneratorSecondPersonSelf.value[num]);
                  }
                fieldGeneratorSecondPersonSelf.value.clear();
                fieldGeneratorSecondPersonSelf.have_value = false;
              }
            if (fieldGeneratorSecondPersonSelfSpoken.have_value)
              {
                result->initSecondPersonSelfSpoken();
                size_t count = fieldGeneratorSecondPersonSelfSpoken.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSecondPersonSelfSpoken(fieldGeneratorSecondPersonSelfSpoken.value[num]);
                  }
                fieldGeneratorSecondPersonSelfSpoken.value.clear();
                fieldGeneratorSecondPersonSelfSpoken.have_value = false;
              }
            if (fieldGeneratorWakeUpPattern.have_value)
              {
                result->setWakeUpPattern(fieldGeneratorWakeUpPattern.value);
                fieldGeneratorWakeUpPattern.have_value = false;
              }
            if (fieldGeneratorUserID.have_value)
              {
                result->setUserID(fieldGeneratorUserID.value);
                fieldGeneratorUserID.have_value = false;
              }
            if (fieldGeneratorRequestID.have_value)
              {
                result->setRequestID(fieldGeneratorRequestID.value);
                fieldGeneratorRequestID.have_value = false;
              }
            if (fieldGeneratorSessionID.have_value)
              {
                result->setSessionID(fieldGeneratorSessionID.value);
                fieldGeneratorSessionID.have_value = false;
              }
            if (fieldGeneratorDomains.have_value)
              {
                result->setDomains(fieldGeneratorDomains.value.referenced());
                fieldGeneratorDomains.have_value = false;
              }
            if (fieldGeneratorResultUpdateAllowed.have_value)
              {
                result->setResultUpdateAllowed(fieldGeneratorResultUpdateAllowed.value);
                fieldGeneratorResultUpdateAllowed.have_value = false;
              }
            if (fieldGeneratorPartialTranscriptsDesired.have_value)
              {
                result->setPartialTranscriptsDesired(fieldGeneratorPartialTranscriptsDesired.value);
                fieldGeneratorPartialTranscriptsDesired.have_value = false;
              }
            if (fieldGeneratorMinResults.have_value)
              {
                result->setMinResults(fieldGeneratorMinResults.value);
                fieldGeneratorMinResults.have_value = false;
              }
            if (fieldGeneratorMaxResults.have_value)
              {
                result->setMaxResults(fieldGeneratorMaxResults.value);
                fieldGeneratorMaxResults.have_value = false;
              }
            if (fieldGeneratorObjectByteCountPrefix.have_value)
              {
                result->setObjectByteCountPrefix(fieldGeneratorObjectByteCountPrefix.value);
                fieldGeneratorObjectByteCountPrefix.have_value = false;
              }
            if (fieldGeneratorProfanityFilter.have_value)
              {
                result->setProfanityFilter(fieldGeneratorProfanityFilter.value);
                fieldGeneratorProfanityFilter.have_value = false;
              }
            if (fieldGeneratorClientMatches.have_value)
              {
                result->initClientMatches();
                size_t count = fieldGeneratorClientMatches.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendClientMatches(fieldGeneratorClientMatches.value[num].referenced());
                  }
                fieldGeneratorClientMatches.value.clear();
                fieldGeneratorClientMatches.have_value = false;
              }
            if (fieldGeneratorClientMatchesOnly.have_value)
              {
                result->setClientMatchesOnly(fieldGeneratorClientMatchesOnly.value);
                fieldGeneratorClientMatchesOnly.have_value = false;
              }
            if (fieldGeneratorResponseAudioVoice.have_value)
              {
                result->setResponseAudioVoice(fieldGeneratorResponseAudioVoice.value);
                fieldGeneratorResponseAudioVoice.have_value = false;
              }
            if (fieldGeneratorResponseAudioShortOrLong.have_value)
              {
                result->setResponseAudioShortOrLong(fieldGeneratorResponseAudioShortOrLong.value);
                fieldGeneratorResponseAudioShortOrLong.have_value = false;
              }
            if (fieldGeneratorResponseAudioAcceptedEncodings.have_value)
              {
                result->initResponseAudioAcceptedEncodings();
                size_t count = fieldGeneratorResponseAudioAcceptedEncodings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendResponseAudioAcceptedEncodings(fieldGeneratorResponseAudioAcceptedEncodings.value[num]);
                  }
                fieldGeneratorResponseAudioAcceptedEncodings.value.clear();
                fieldGeneratorResponseAudioAcceptedEncodings.have_value = false;
              }
            if (fieldGeneratorVoiceActivityDetection.have_value)
              {
                result->setVoiceActivityDetection(fieldGeneratorVoiceActivityDetection.value.referenced());
                fieldGeneratorVoiceActivityDetection.have_value = false;
              }
            if (fieldGeneratorServerDeterminesEndOfAudio.have_value)
              {
                result->setServerDeterminesEndOfAudio(fieldGeneratorServerDeterminesEndOfAudio.value);
                fieldGeneratorServerDeterminesEndOfAudio.have_value = false;
              }
            if (fieldGeneratorIntentOnly.have_value)
              {
                result->setIntentOnly(fieldGeneratorIntentOnly.value);
                fieldGeneratorIntentOnly.have_value = false;
              }
            if (fieldGeneratorDisableSpellCorrection.have_value)
              {
                result->setDisableSpellCorrection(fieldGeneratorDisableSpellCorrection.value);
                fieldGeneratorDisableSpellCorrection.have_value = false;
              }
            if (fieldGeneratorUseContactData.have_value)
              {
                result->setUseContactData(fieldGeneratorUseContactData.value);
                fieldGeneratorUseContactData.have_value = false;
              }
            if (fieldGeneratorUseClientTime.have_value)
              {
                result->setUseClientTime(fieldGeneratorUseClientTime.value);
                fieldGeneratorUseClientTime.have_value = false;
              }
            if (fieldGeneratorForceConversationStateTime.have_value)
              {
                result->setForceConversationStateTime(fieldGeneratorForceConversationStateTime.value);
                fieldGeneratorForceConversationStateTime.have_value = false;
              }
            if (fieldGeneratorPhoneDisambiguationOmitList.have_value)
              {
                result->setPhoneDisambiguationOmitList(fieldGeneratorPhoneDisambiguationOmitList.value.referenced());
                fieldGeneratorPhoneDisambiguationOmitList.have_value = false;
              }
            if (fieldGeneratorIncomingCallPending.have_value)
              {
                result->setIncomingCallPending(fieldGeneratorIncomingCallPending.value.referenced());
                fieldGeneratorIncomingCallPending.have_value = false;
              }
            if (fieldGeneratorAllowPopularNameContactMatches.have_value)
              {
                result->setAllowPopularNameContactMatches(fieldGeneratorAllowPopularNameContactMatches.value.referenced());
                fieldGeneratorAllowPopularNameContactMatches.have_value = false;
              }
            if (fieldGeneratorMusicClientState.have_value)
              {
                result->setMusicClientState(fieldGeneratorMusicClientState.value.referenced());
                fieldGeneratorMusicClientState.have_value = false;
              }
            if (fieldGeneratorDisableMusicSearchListPositionSpecification.have_value)
              {
                result->setDisableMusicSearchListPositionSpecification(fieldGeneratorDisableMusicSearchListPositionSpecification.value.referenced());
                fieldGeneratorDisableMusicSearchListPositionSpecification.have_value = false;
              }
            if (fieldGeneratorCollateMusicEntities.have_value)
              {
                result->setCollateMusicEntities(fieldGeneratorCollateMusicEntities.value.referenced());
                fieldGeneratorCollateMusicEntities.have_value = false;
              }
            if (fieldGeneratorAllowContextFreeMusicSearchForPopularEntities.have_value)
              {
                result->setAllowContextFreeMusicSearchForPopularEntities(fieldGeneratorAllowContextFreeMusicSearchForPopularEntities.value.referenced());
                fieldGeneratorAllowContextFreeMusicSearchForPopularEntities.have_value = false;
              }
            if (fieldGeneratorSportsLeagueControl.have_value)
              {
                result->setSportsLeagueControl(fieldGeneratorSportsLeagueControl.value.referenced());
                fieldGeneratorSportsLeagueControl.have_value = false;
              }
            if (fieldGeneratorLocalSearchClientState.have_value)
              {
                result->setLocalSearchClientState(fieldGeneratorLocalSearchClientState.value.referenced());
                fieldGeneratorLocalSearchClientState.have_value = false;
              }
            if (fieldGeneratorUberServerToken.have_value)
              {
                result->setUberServerToken(fieldGeneratorUberServerToken.value.referenced());
                fieldGeneratorUberServerToken.have_value = false;
              }
            if (fieldGeneratorGetUberServerToken.have_value)
              {
                result->setGetUberServerToken(fieldGeneratorGetUberServerToken.value.referenced());
                fieldGeneratorGetUberServerToken.have_value = false;
              }
            if (fieldGeneratorUberClientId.have_value)
              {
                result->setUberClientId(fieldGeneratorUberClientId.value.referenced());
                fieldGeneratorUberClientId.have_value = false;
              }
            if (fieldGeneratorGetUberClientId.have_value)
              {
                result->setGetUberClientId(fieldGeneratorGetUberClientId.value.referenced());
                fieldGeneratorGetUberClientId.have_value = false;
              }
            if (fieldGeneratorDisableMusicPlayerListPositionSpecification.have_value)
              {
                result->setDisableMusicPlayerListPositionSpecification(fieldGeneratorDisableMusicPlayerListPositionSpecification.value.referenced());
                fieldGeneratorDisableMusicPlayerListPositionSpecification.have_value = false;
              }
            if (fieldGeneratorHomeAutomationDomainSettings.have_value)
              {
                result->setHomeAutomationDomainSettings(fieldGeneratorHomeAutomationDomainSettings.value.referenced());
                fieldGeneratorHomeAutomationDomainSettings.have_value = false;
              }
            if (fieldGeneratorUserContactsRequests.have_value)
              {
                result->setUserContactsRequests(fieldGeneratorUserContactsRequests.value.referenced());
                fieldGeneratorUserContactsRequests.have_value = false;
              }
            if (fieldGeneratorStoredGlobalPagesToMatch.have_value)
              {
                result->setStoredGlobalPagesToMatch(fieldGeneratorStoredGlobalPagesToMatch.value.referenced());
                fieldGeneratorStoredGlobalPagesToMatch.have_value = false;
              }
            if (fieldGeneratorStoredGlobalPagesToNotMatch.have_value)
              {
                result->setStoredGlobalPagesToNotMatch(fieldGeneratorStoredGlobalPagesToNotMatch.value.referenced());
                fieldGeneratorStoredGlobalPagesToNotMatch.have_value = false;
              }
            if (fieldGeneratorStoredPerUserPagesToMatch.have_value)
              {
                result->setStoredPerUserPagesToMatch(fieldGeneratorStoredPerUserPagesToMatch.value.referenced());
                fieldGeneratorStoredPerUserPagesToMatch.have_value = false;
              }
            if (fieldGeneratorStoredPerUserPagesToNotMatch.have_value)
              {
                result->setStoredPerUserPagesToNotMatch(fieldGeneratorStoredPerUserPagesToNotMatch.value.referenced());
                fieldGeneratorStoredPerUserPagesToNotMatch.have_value = false;
              }
            if (fieldGeneratorStoredGlobalPagesToSetOnByDefault.have_value)
              {
                result->setStoredGlobalPagesToSetOnByDefault(fieldGeneratorStoredGlobalPagesToSetOnByDefault.value.referenced());
                fieldGeneratorStoredGlobalPagesToSetOnByDefault.have_value = false;
              }
            if (fieldGeneratorStoredPerUserPagesToSetOnByDefault.have_value)
              {
                result->setStoredPerUserPagesToSetOnByDefault(fieldGeneratorStoredPerUserPagesToSetOnByDefault.value.referenced());
                fieldGeneratorStoredPerUserPagesToSetOnByDefault.have_value = false;
              }
            if (fieldGeneratorStoredGlobalPagesToSetOffByDefault.have_value)
              {
                result->setStoredGlobalPagesToSetOffByDefault(fieldGeneratorStoredGlobalPagesToSetOffByDefault.value.referenced());
                fieldGeneratorStoredGlobalPagesToSetOffByDefault.have_value = false;
              }
            if (fieldGeneratorStoredPerUserPagesToSetOffByDefault.have_value)
              {
                result->setStoredPerUserPagesToSetOffByDefault(fieldGeneratorStoredPerUserPagesToSetOffByDefault.value.referenced());
                fieldGeneratorStoredPerUserPagesToSetOffByDefault.have_value = false;
              }
            if (fieldGeneratorStoredPageMatchWriteData.have_value)
              {
                result->setStoredPageMatchWriteData(fieldGeneratorStoredPageMatchWriteData.value.referenced());
                fieldGeneratorStoredPageMatchWriteData.have_value = false;
              }
            if (fieldGeneratorStoredPageMatchReadData.have_value)
              {
                result->setStoredPageMatchReadData(fieldGeneratorStoredPageMatchReadData.value.referenced());
                fieldGeneratorStoredPageMatchReadData.have_value = false;
              }
            if (fieldGeneratorStoredPageMatchPageListData.have_value)
              {
                result->setStoredPageMatchPageListData(fieldGeneratorStoredPageMatchPageListData.value.referenced());
                fieldGeneratorStoredPageMatchPageListData.have_value = false;
              }
            if (fieldGeneratorVoiceParameters.have_value)
              {
                result->setVoiceParameters(fieldGeneratorVoiceParameters.value.referenced());
                fieldGeneratorVoiceParameters.have_value = false;
              }
            if (fieldGeneratorStoredAlwaysMatchWriteData.have_value)
              {
                result->setStoredAlwaysMatchWriteData(fieldGeneratorStoredAlwaysMatchWriteData.value.referenced());
                fieldGeneratorStoredAlwaysMatchWriteData.have_value = false;
              }
            if (fieldGeneratorStoredAlwaysMatchReadData.have_value)
              {
                result->setStoredAlwaysMatchReadData(fieldGeneratorStoredAlwaysMatchReadData.value.referenced());
                fieldGeneratorStoredAlwaysMatchReadData.have_value = false;
              }
            if (fieldGeneratorUserFeedback.have_value)
              {
                result->setUserFeedback(fieldGeneratorUserFeedback.value.referenced());
                fieldGeneratorUserFeedback.have_value = false;
              }
            if (fieldGeneratorRadioControlRecognizeNorthAmericanFMBand.have_value)
              {
                result->setRadioControlRecognizeNorthAmericanFMBand(fieldGeneratorRadioControlRecognizeNorthAmericanFMBand.value.referenced());
                fieldGeneratorRadioControlRecognizeNorthAmericanFMBand.have_value = false;
              }
            if (fieldGeneratorRadioControlRecognizeNorthAmericanAMBand.have_value)
              {
                result->setRadioControlRecognizeNorthAmericanAMBand(fieldGeneratorRadioControlRecognizeNorthAmericanAMBand.value.referenced());
                fieldGeneratorRadioControlRecognizeNorthAmericanAMBand.have_value = false;
              }
            if (fieldGeneratorRadioControlOtherFMBands.have_value)
              {
                result->setRadioControlOtherFMBands(fieldGeneratorRadioControlOtherFMBands.value.referenced());
                fieldGeneratorRadioControlOtherFMBands.have_value = false;
              }
            if (fieldGeneratorRadioControlOtherAMBands.have_value)
              {
                result->setRadioControlOtherAMBands(fieldGeneratorRadioControlOtherAMBands.value.referenced());
                fieldGeneratorRadioControlOtherAMBands.have_value = false;
              }
            if (fieldGeneratorClientListMatches.have_value)
              {
                result->setClientListMatches(fieldGeneratorClientListMatches.value.referenced());
                fieldGeneratorClientListMatches.have_value = false;
              }
            if (fieldGeneratorIntentToExecute.have_value)
              {
                result->setIntentToExecute(fieldGeneratorIntentToExecute.value.referenced());
                fieldGeneratorIntentToExecute.have_value = false;
              }
            if (fieldGeneratorRobotInfo.have_value)
              {
                result->setRobotInfo(fieldGeneratorRobotInfo.value.referenced());
                fieldGeneratorRobotInfo.have_value = false;
              }
            if (fieldGeneratorConvertToNewInformationNuggets.have_value)
              {
                result->setConvertToNewInformationNuggets(fieldGeneratorConvertToNewInformationNuggets.value.referenced());
                fieldGeneratorConvertToNewInformationNuggets.have_value = false;
              }
            if (fieldGeneratorAcapelaVoiceParameters.have_value)
              {
                result->setAcapelaVoiceParameters(fieldGeneratorAcapelaVoiceParameters.value.referenced());
                fieldGeneratorAcapelaVoiceParameters.have_value = false;
              }
            if (fieldGeneratorDisambiguateResultsBeforeAction.have_value)
              {
                result->setDisambiguateResultsBeforeAction(fieldGeneratorDisambiguateResultsBeforeAction.value.referenced());
                fieldGeneratorDisambiguateResultsBeforeAction.have_value = false;
              }
          }
        virtual void handle_result(RequestInfoJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "apelaVoiceParameters") == 0)
                                return &fieldGeneratorAcapelaVoiceParameters;
                            break;
                        case 'l':
                            if (strncmp(&(field_name[2]), "low", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[6]), "ontextFreeMusicSearchForPopularEntities") == 0)
                                            return &fieldGeneratorAllowContextFreeMusicSearchForPopularEntities;
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[6]), "opularNameContactMatches") == 0)
                                            return &fieldGeneratorAllowPopularNameContactMatches;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ty") == 0)
                                return &fieldGeneratorCity;
                            break;
                        case 'l':
                            if (strncmp(&(field_name[2]), "ient", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "D") == 0)
                                            return &fieldGeneratorClientID;
                                        break;
                                    case 'L':
                                        if (strcmp(&(field_name[7]), "istMatches") == 0)
                                            return &fieldGeneratorClientListMatches;
                                        break;
                                    case 'M':
                                        if (strncmp(&(field_name[7]), "atches", 6) == 0)
                                          {
                                            switch ((unsigned char)(field_name[13]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorClientMatches;
                                                case 'O':
                                                    if (strcmp(&(field_name[14]), "nly") == 0)
                                                        return &fieldGeneratorClientMatchesOnly;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[7]), "tate") == 0)
                                            return &fieldGeneratorClientState;
                                        break;
                                    case 'V':
                                        if (strcmp(&(field_name[7]), "ersion") == 0)
                                            return &fieldGeneratorClientVersion;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'l':
                                    if (strcmp(&(field_name[3]), "lateMusicEntities") == 0)
                                        return &fieldGeneratorCollateMusicEntities;
                                    break;
                                case 'n':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 't':
                                            if (strcmp(&(field_name[4]), "rollableTrackPlaying") == 0)
                                                return &fieldGeneratorControllableTrackPlaying;
                                            break;
                                        case 'v':
                                            if (strncmp(&(field_name[4]), "er", 2) == 0)
                                              {
                                                switch ((unsigned char)(field_name[6]))
                                                  {
                                                    case 's':
                                                        if (strcmp(&(field_name[7]), "ationState") == 0)
                                                            return &fieldGeneratorConversationState;
                                                        break;
                                                    case 't':
                                                        if (strcmp(&(field_name[7]), "ToNewInformationNuggets") == 0)
                                                            return &fieldGeneratorConvertToNewInformationNuggets;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'u':
                                    if (strcmp(&(field_name[3]), "ntry") == 0)
                                        return &fieldGeneratorCountry;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'f':
                                    if (strcmp(&(field_name[3]), "aultTimeFormat24Hours") == 0)
                                        return &fieldGeneratorDefaultTimeFormat24Hours;
                                    break;
                                case 'v':
                                    if (strcmp(&(field_name[3]), "iceID") == 0)
                                        return &fieldGeneratorDeviceID;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'i':
                            if (strncmp(&(field_name[2]), "sa", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'b':
                                        if (strncmp(&(field_name[5]), "le", 2) == 0)
                                          {
                                            switch ((unsigned char)(field_name[7]))
                                              {
                                                case 'M':
                                                    if (strncmp(&(field_name[8]), "usic", 4) == 0)
                                                      {
                                                        switch ((unsigned char)(field_name[12]))
                                                          {
                                                            case 'P':
                                                                if (strcmp(&(field_name[13]), "layerListPositionSpecification") == 0)
                                                                    return &fieldGeneratorDisableMusicPlayerListPositionSpecification;
                                                                break;
                                                            case 'S':
                                                                if (strcmp(&(field_name[13]), "earchListPositionSpecification") == 0)
                                                                    return &fieldGeneratorDisableMusicSearchListPositionSpecification;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(field_name[8]), "pellCorrection") == 0)
                                                        return &fieldGeneratorDisableSpellCorrection;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'm':
                                        if (strcmp(&(field_name[5]), "biguateResultsBeforeAction") == 0)
                                            return &fieldGeneratorDisambiguateResultsBeforeAction;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "mains") == 0)
                                return &fieldGeneratorDomains;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "rstPersonSelf", 13) == 0)
                              {
                                switch ((unsigned char)(field_name[15]))
                                  {
                                    case 0:
                                        return &fieldGeneratorFirstPersonSelf;
                                    case 'S':
                                        if (strcmp(&(field_name[16]), "poken") == 0)
                                            return &fieldGeneratorFirstPersonSelfSpoken;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "rceConversationStateTime") == 0)
                                return &fieldGeneratorForceConversationStateTime;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "etUber", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[8]), "lientId") == 0)
                                    return &fieldGeneratorGetUberClientId;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "erverToken") == 0)
                                    return &fieldGeneratorGetUberServerToken;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "omeAutomationDomainSettings") == 0)
                        return &fieldGeneratorHomeAutomationDomainSettings;
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "n", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'c':
                                if (strcmp(&(field_name[3]), "omingCallPending") == 0)
                                    return &fieldGeneratorIncomingCallPending;
                                break;
                            case 'p':
                                if (strncmp(&(field_name[3]), "utLanguage", 10) == 0)
                                  {
                                    switch ((unsigned char)(field_name[13]))
                                      {
                                        case 'E':
                                            if (strcmp(&(field_name[14]), "nglishName") == 0)
                                                return &fieldGeneratorInputLanguageEnglishName;
                                            break;
                                        case 'I':
                                            if (strcmp(&(field_name[14]), "ETFTag") == 0)
                                                return &fieldGeneratorInputLanguageIETFTag;
                                            break;
                                        case 'N':
                                            if (strcmp(&(field_name[14]), "ativeName") == 0)
                                                return &fieldGeneratorInputLanguageNativeName;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 't':
                                if (strncmp(&(field_name[3]), "ent", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[6]))
                                      {
                                        case 'O':
                                            if (strcmp(&(field_name[7]), "nly") == 0)
                                                return &fieldGeneratorIntentOnly;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[7]), "oExecute") == 0)
                                                return &fieldGeneratorIntentToExecute;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "titude") == 0)
                                return &fieldGeneratorLatitude;
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'c':
                                    if (strcmp(&(field_name[3]), "alSearchClientState") == 0)
                                        return &fieldGeneratorLocalSearchClientState;
                                    break;
                                case 'n':
                                    if (strcmp(&(field_name[3]), "gitude") == 0)
                                        return &fieldGeneratorLongitude;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "xResults") == 0)
                                return &fieldGeneratorMaxResults;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nResults") == 0)
                                return &fieldGeneratorMinResults;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "sicClientState") == 0)
                                return &fieldGeneratorMusicClientState;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'O':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'b':
                            if (strcmp(&(field_name[2]), "jectByteCountPrefix") == 0)
                                return &fieldGeneratorObjectByteCountPrefix;
                            break;
                        case 'u':
                            if (strncmp(&(field_name[2]), "tputLanguage", 12) == 0)
                              {
                                switch ((unsigned char)(field_name[14]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[15]), "nglishName") == 0)
                                            return &fieldGeneratorOutputLanguageEnglishName;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[15]), "ETFTag") == 0)
                                            return &fieldGeneratorOutputLanguageIETFTag;
                                        break;
                                    case 'N':
                                        if (strcmp(&(field_name[15]), "ativeName") == 0)
                                            return &fieldGeneratorOutputLanguageNativeName;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "rtialTranscriptsDesired") == 0)
                                return &fieldGeneratorPartialTranscriptsDesired;
                            break;
                        case 'h':
                            if (strcmp(&(field_name[2]), "oneDisambiguationOmitList") == 0)
                                return &fieldGeneratorPhoneDisambiguationOmitList;
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "sition", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'H':
                                        if (strcmp(&(field_name[9]), "orizontalAccuracy") == 0)
                                            return &fieldGeneratorPositionHorizontalAccuracy;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[9]), "ime") == 0)
                                            return &fieldGeneratorPositionTime;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'e':
                                    if (strcmp(&(field_name[3]), "ferredImageSize") == 0)
                                        return &fieldGeneratorPreferredImageSize;
                                    break;
                                case 'o':
                                    if (strcmp(&(field_name[3]), "fanityFilter") == 0)
                                        return &fieldGeneratorProfanityFilter;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "dioControl", 10) == 0)
                              {
                                switch ((unsigned char)(field_name[12]))
                                  {
                                    case 'O':
                                        if (strncmp(&(field_name[13]), "ther", 4) == 0)
                                          {
                                            switch ((unsigned char)(field_name[17]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(field_name[18]), "MBands") == 0)
                                                        return &fieldGeneratorRadioControlOtherAMBands;
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(field_name[18]), "MBands") == 0)
                                                        return &fieldGeneratorRadioControlOtherFMBands;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'R':
                                        if (strncmp(&(field_name[13]), "ecognizeNorthAmerican", 21) == 0)
                                          {
                                            switch ((unsigned char)(field_name[34]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(field_name[35]), "MBand") == 0)
                                                        return &fieldGeneratorRadioControlRecognizeNorthAmericanAMBand;
                                                    break;
                                                case 'F':
                                                    if (strcmp(&(field_name[35]), "MBand") == 0)
                                                        return &fieldGeneratorRadioControlRecognizeNorthAmericanFMBand;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'q':
                                    if (strcmp(&(field_name[3]), "uestID") == 0)
                                        return &fieldGeneratorRequestID;
                                    break;
                                case 's':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'p':
                                            if (strncmp(&(field_name[4]), "onseAudio", 9) == 0)
                                              {
                                                switch ((unsigned char)(field_name[13]))
                                                  {
                                                    case 'A':
                                                        if (strcmp(&(field_name[14]), "cceptedEncodings") == 0)
                                                            return &fieldGeneratorResponseAudioAcceptedEncodings;
                                                        break;
                                                    case 'S':
                                                        if (strcmp(&(field_name[14]), "hortOrLong") == 0)
                                                            return &fieldGeneratorResponseAudioShortOrLong;
                                                        break;
                                                    case 'V':
                                                        if (strcmp(&(field_name[14]), "oice") == 0)
                                                            return &fieldGeneratorResponseAudioVoice;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'u':
                                            if (strncmp(&(field_name[4]), "lt", 2) == 0)
                                              {
                                                switch ((unsigned char)(field_name[6]))
                                                  {
                                                    case 'U':
                                                        if (strcmp(&(field_name[7]), "pdateAllowed") == 0)
                                                            return &fieldGeneratorResultUpdateAllowed;
                                                        break;
                                                    case 'V':
                                                        if (strcmp(&(field_name[7]), "ersionAccepted") == 0)
                                                            return &fieldGeneratorResultVersionAccepted;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'b':
                                    if (strcmp(&(field_name[3]), "otInfo") == 0)
                                        return &fieldGeneratorRobotInfo;
                                    break;
                                case 'u':
                                    if (strcmp(&(field_name[3]), "tePoints") == 0)
                                        return &fieldGeneratorRoutePoints;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'D':
                            if (strncmp(&(field_name[2]), "K", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 0:
                                        return &fieldGeneratorSDK;
                                    case 'I':
                                        if (strcmp(&(field_name[4]), "nfo") == 0)
                                            return &fieldGeneratorSDKInfo;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'c':
                                    if (strncmp(&(field_name[3]), "ondPersonSelf", 13) == 0)
                                      {
                                        switch ((unsigned char)(field_name[16]))
                                          {
                                            case 0:
                                                return &fieldGeneratorSecondPersonSelf;
                                            case 'S':
                                                if (strcmp(&(field_name[17]), "poken") == 0)
                                                    return &fieldGeneratorSecondPersonSelfSpoken;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'n':
                                    if (strcmp(&(field_name[3]), "dBack") == 0)
                                        return &fieldGeneratorSendBack;
                                    break;
                                case 'r':
                                    if (strcmp(&(field_name[3]), "verDeterminesEndOfAudio") == 0)
                                        return &fieldGeneratorServerDeterminesEndOfAudio;
                                    break;
                                case 's':
                                    if (strcmp(&(field_name[3]), "sionID") == 0)
                                        return &fieldGeneratorSessionID;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "ortsLeagueControl") == 0)
                                return &fieldGeneratorSportsLeagueControl;
                            break;
                        case 't':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'a':
                                    if (strcmp(&(field_name[3]), "te") == 0)
                                        return &fieldGeneratorState;
                                    break;
                                case 'o':
                                    if (strncmp(&(field_name[3]), "red", 3) == 0)
                                      {
                                        switch ((unsigned char)(field_name[6]))
                                          {
                                            case 'A':
                                                if (strncmp(&(field_name[7]), "lwaysMatch", 10) == 0)
                                                  {
                                                    switch ((unsigned char)(field_name[17]))
                                                      {
                                                        case 'R':
                                                            if (strcmp(&(field_name[18]), "eadData") == 0)
                                                                return &fieldGeneratorStoredAlwaysMatchReadData;
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(field_name[18]), "riteData") == 0)
                                                                return &fieldGeneratorStoredAlwaysMatchWriteData;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'G':
                                                if (strncmp(&(field_name[7]), "lobalPagesTo", 12) == 0)
                                                  {
                                                    switch ((unsigned char)(field_name[19]))
                                                      {
                                                        case 'M':
                                                            if (strcmp(&(field_name[20]), "atch") == 0)
                                                                return &fieldGeneratorStoredGlobalPagesToMatch;
                                                            break;
                                                        case 'N':
                                                            if (strcmp(&(field_name[20]), "otMatch") == 0)
                                                                return &fieldGeneratorStoredGlobalPagesToNotMatch;
                                                            break;
                                                        case 'S':
                                                            if (strncmp(&(field_name[20]), "etO", 3) == 0)
                                                              {
                                                                switch ((unsigned char)(field_name[23]))
                                                                  {
                                                                    case 'f':
                                                                        if (strcmp(&(field_name[24]), "fByDefault") == 0)
                                                                            return &fieldGeneratorStoredGlobalPagesToSetOffByDefault;
                                                                        break;
                                                                    case 'n':
                                                                        if (strcmp(&(field_name[24]), "ByDefault") == 0)
                                                                            return &fieldGeneratorStoredGlobalPagesToSetOnByDefault;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                              }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            case 'P':
                                                switch ((unsigned char)(field_name[7]))
                                                  {
                                                    case 'a':
                                                        if (strncmp(&(field_name[8]), "geMatch", 7) == 0)
                                                          {
                                                            switch ((unsigned char)(field_name[15]))
                                                              {
                                                                case 'P':
                                                                    if (strcmp(&(field_name[16]), "ageListData") == 0)
                                                                        return &fieldGeneratorStoredPageMatchPageListData;
                                                                    break;
                                                                case 'R':
                                                                    if (strcmp(&(field_name[16]), "eadData") == 0)
                                                                        return &fieldGeneratorStoredPageMatchReadData;
                                                                    break;
                                                                case 'W':
                                                                    if (strcmp(&(field_name[16]), "riteData") == 0)
                                                                        return &fieldGeneratorStoredPageMatchWriteData;
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    case 'e':
                                                        if (strncmp(&(field_name[8]), "rUserPagesTo", 12) == 0)
                                                          {
                                                            switch ((unsigned char)(field_name[20]))
                                                              {
                                                                case 'M':
                                                                    if (strcmp(&(field_name[21]), "atch") == 0)
                                                                        return &fieldGeneratorStoredPerUserPagesToMatch;
                                                                    break;
                                                                case 'N':
                                                                    if (strcmp(&(field_name[21]), "otMatch") == 0)
                                                                        return &fieldGeneratorStoredPerUserPagesToNotMatch;
                                                                    break;
                                                                case 'S':
                                                                    if (strncmp(&(field_name[21]), "etO", 3) == 0)
                                                                      {
                                                                        switch ((unsigned char)(field_name[24]))
                                                                          {
                                                                            case 'f':
                                                                                if (strcmp(&(field_name[25]), "fByDefault") == 0)
                                                                                    return &fieldGeneratorStoredPerUserPagesToSetOffByDefault;
                                                                                break;
                                                                            case 'n':
                                                                                if (strcmp(&(field_name[25]), "ByDefault") == 0)
                                                                                    return &fieldGeneratorStoredPerUserPagesToSetOnByDefault;
                                                                                break;
                                                                            default:
                                                                                break;
                                                                          }
                                                                      }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'r':
                                    if (strcmp(&(field_name[3]), "eet") == 0)
                                        return &fieldGeneratorStreet;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "ime", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'S':
                                if (strcmp(&(field_name[5]), "tamp") == 0)
                                    return &fieldGeneratorTimeStamp;
                                break;
                            case 'Z':
                                if (strcmp(&(field_name[5]), "one") == 0)
                                    return &fieldGeneratorTimeZone;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'b':
                            if (strncmp(&(field_name[2]), "er", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[5]), "lientId") == 0)
                                            return &fieldGeneratorUberClientId;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[5]), "erverToken") == 0)
                                            return &fieldGeneratorUberServerToken;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'n':
                            if (strcmp(&(field_name[2]), "itPreference") == 0)
                                return &fieldGeneratorUnitPreference;
                            break;
                        case 's':
                            if (strncmp(&(field_name[2]), "e", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'C':
                                        switch ((unsigned char)(field_name[4]))
                                          {
                                            case 'l':
                                                if (strcmp(&(field_name[5]), "ientTime") == 0)
                                                    return &fieldGeneratorUseClientTime;
                                                break;
                                            case 'o':
                                                if (strcmp(&(field_name[5]), "ntactData") == 0)
                                                    return &fieldGeneratorUseContactData;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'r':
                                        switch ((unsigned char)(field_name[4]))
                                          {
                                            case 'C':
                                                if (strcmp(&(field_name[5]), "ontactsRequests") == 0)
                                                    return &fieldGeneratorUserContactsRequests;
                                                break;
                                            case 'F':
                                                if (strcmp(&(field_name[5]), "eedback") == 0)
                                                    return &fieldGeneratorUserFeedback;
                                                break;
                                            case 'I':
                                                if (strcmp(&(field_name[5]), "D") == 0)
                                                    return &fieldGeneratorUserID;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'V':
                    if (strncmp(&(field_name[1]), "oice", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[6]), "ctivityDetection") == 0)
                                    return &fieldGeneratorVoiceActivityDetection;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[6]), "arameters") == 0)
                                    return &fieldGeneratorVoiceParameters;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "akeUpPattern") == 0)
                        return &fieldGeneratorWakeUpPattern;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLatitude("field \"Latitude\" of the RequestInfo class"), fieldGeneratorLongitude("field \"Longitude\" of the RequestInfo class"), fieldGeneratorPositionTime("field \"PositionTime\" of the RequestInfo class"), fieldGeneratorPositionHorizontalAccuracy("field \"PositionHorizontalAccuracy\" of the RequestInfo class"), fieldGeneratorStreet("field \"Street\" of the RequestInfo class"), fieldGeneratorCity("field \"City\" of the RequestInfo class"), fieldGeneratorState("field \"State\" of the RequestInfo class"), fieldGeneratorCountry("field \"Country\" of the RequestInfo class"), fieldGeneratorRoutePoints("field \"RoutePoints\" of the RequestInfo class", ignore_extras), fieldGeneratorControllableTrackPlaying("field \"ControllableTrackPlaying\" of the RequestInfo class"), fieldGeneratorTimeStamp("field \"TimeStamp\" of the RequestInfo class"), fieldGeneratorTimeZone("field \"TimeZone\" of the RequestInfo class"), fieldGeneratorConversationState("field \"ConversationState\" of the RequestInfo class", ignore_extras), fieldGeneratorClientState("field \"ClientState\" of the RequestInfo class", ignore_extras), fieldGeneratorSendBack("field \"SendBack\" of the RequestInfo class"), fieldGeneratorPreferredImageSize("field \"PreferredImageSize\" of the RequestInfo class"), fieldGeneratorInputLanguageEnglishName("field \"InputLanguageEnglishName\" of the RequestInfo class"), fieldGeneratorInputLanguageNativeName("field \"InputLanguageNativeName\" of the RequestInfo class"), fieldGeneratorInputLanguageIETFTag("field \"InputLanguageIETFTag\" of the RequestInfo class"), fieldGeneratorOutputLanguageEnglishName("field \"OutputLanguageEnglishName\" of the RequestInfo class"), fieldGeneratorOutputLanguageNativeName("field \"OutputLanguageNativeName\" of the RequestInfo class"), fieldGeneratorOutputLanguageIETFTag("field \"OutputLanguageIETFTag\" of the RequestInfo class"), fieldGeneratorResultVersionAccepted("field \"ResultVersionAccepted\" of the RequestInfo class"), fieldGeneratorUnitPreference("field \"UnitPreference\" of the RequestInfo class"), fieldGeneratorDefaultTimeFormat24Hours("field \"DefaultTimeFormat24Hours\" of the RequestInfo class"), fieldGeneratorClientID("field \"ClientID\" of the RequestInfo class"), fieldGeneratorClientVersion("field \"ClientVersion\" of the RequestInfo class", ignore_extras), fieldGeneratorDeviceID("field \"DeviceID\" of the RequestInfo class"), fieldGeneratorSDK("field \"SDK\" of the RequestInfo class"), fieldGeneratorSDKInfo("field \"SDKInfo\" of the RequestInfo class"), fieldGeneratorFirstPersonSelf("field \"FirstPersonSelf\" of the RequestInfo class"), fieldGeneratorFirstPersonSelfSpoken("field \"FirstPersonSelfSpoken\" of the RequestInfo class"), fieldGeneratorSecondPersonSelf("field \"SecondPersonSelf\" of the RequestInfo class"), fieldGeneratorSecondPersonSelfSpoken("field \"SecondPersonSelfSpoken\" of the RequestInfo class"), fieldGeneratorWakeUpPattern("field \"WakeUpPattern\" of the RequestInfo class"), fieldGeneratorUserID("field \"UserID\" of the RequestInfo class"), fieldGeneratorRequestID("field \"RequestID\" of the RequestInfo class"), fieldGeneratorSessionID("field \"SessionID\" of the RequestInfo class"), fieldGeneratorDomains("field \"Domains\" of the RequestInfo class", ignore_extras), fieldGeneratorResultUpdateAllowed("field \"ResultUpdateAllowed\" of the RequestInfo class"), fieldGeneratorPartialTranscriptsDesired("field \"PartialTranscriptsDesired\" of the RequestInfo class"), fieldGeneratorMinResults("field \"MinResults\" of the RequestInfo class"), fieldGeneratorMaxResults("field \"MaxResults\" of the RequestInfo class"), fieldGeneratorObjectByteCountPrefix("field \"ObjectByteCountPrefix\" of the RequestInfo class"), fieldGeneratorProfanityFilter("field \"ProfanityFilter\" of the RequestInfo class"), fieldGeneratorClientMatches("field \"ClientMatches\" of the RequestInfo class", ignore_extras), fieldGeneratorClientMatchesOnly("field \"ClientMatchesOnly\" of the RequestInfo class"), fieldGeneratorResponseAudioVoice("field \"ResponseAudioVoice\" of the RequestInfo class"), fieldGeneratorResponseAudioShortOrLong("field \"ResponseAudioShortOrLong\" of the RequestInfo class"), fieldGeneratorResponseAudioAcceptedEncodings("field \"ResponseAudioAcceptedEncodings\" of the RequestInfo class"), fieldGeneratorVoiceActivityDetection("field \"VoiceActivityDetection\" of the RequestInfo class", ignore_extras), fieldGeneratorServerDeterminesEndOfAudio("field \"ServerDeterminesEndOfAudio\" of the RequestInfo class"), fieldGeneratorIntentOnly("field \"IntentOnly\" of the RequestInfo class"), fieldGeneratorDisableSpellCorrection("field \"DisableSpellCorrection\" of the RequestInfo class"), fieldGeneratorUseContactData("field \"UseContactData\" of the RequestInfo class"), fieldGeneratorUseClientTime("field \"UseClientTime\" of the RequestInfo class"), fieldGeneratorForceConversationStateTime("field \"ForceConversationStateTime\" of the RequestInfo class"), fieldGeneratorPhoneDisambiguationOmitList("field \"PhoneDisambiguationOmitList\" of the RequestInfo class", ignore_extras), fieldGeneratorIncomingCallPending("field \"IncomingCallPending\" of the RequestInfo class", ignore_extras), fieldGeneratorAllowPopularNameContactMatches("field \"AllowPopularNameContactMatches\" of the RequestInfo class", ignore_extras), fieldGeneratorMusicClientState("field \"MusicClientState\" of the RequestInfo class", ignore_extras), fieldGeneratorDisableMusicSearchListPositionSpecification("field \"DisableMusicSearchListPositionSpecification\" of the RequestInfo class", ignore_extras), fieldGeneratorCollateMusicEntities("field \"CollateMusicEntities\" of the RequestInfo class", ignore_extras), fieldGeneratorAllowContextFreeMusicSearchForPopularEntities("field \"AllowContextFreeMusicSearchForPopularEntities\" of the RequestInfo class", ignore_extras), fieldGeneratorSportsLeagueControl("field \"SportsLeagueControl\" of the RequestInfo class", ignore_extras), fieldGeneratorLocalSearchClientState("field \"LocalSearchClientState\" of the RequestInfo class", ignore_extras), fieldGeneratorUberServerToken("field \"UberServerToken\" of the RequestInfo class", ignore_extras), fieldGeneratorGetUberServerToken("field \"GetUberServerToken\" of the RequestInfo class", ignore_extras), fieldGeneratorUberClientId("field \"UberClientId\" of the RequestInfo class", ignore_extras), fieldGeneratorGetUberClientId("field \"GetUberClientId\" of the RequestInfo class", ignore_extras), fieldGeneratorDisableMusicPlayerListPositionSpecification("field \"DisableMusicPlayerListPositionSpecification\" of the RequestInfo class", ignore_extras), fieldGeneratorHomeAutomationDomainSettings("field \"HomeAutomationDomainSettings\" of the RequestInfo class", ignore_extras), fieldGeneratorUserContactsRequests("field \"UserContactsRequests\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredGlobalPagesToMatch("field \"StoredGlobalPagesToMatch\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredGlobalPagesToNotMatch("field \"StoredGlobalPagesToNotMatch\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredPerUserPagesToMatch("field \"StoredPerUserPagesToMatch\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredPerUserPagesToNotMatch("field \"StoredPerUserPagesToNotMatch\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredGlobalPagesToSetOnByDefault("field \"StoredGlobalPagesToSetOnByDefault\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredPerUserPagesToSetOnByDefault("field \"StoredPerUserPagesToSetOnByDefault\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredGlobalPagesToSetOffByDefault("field \"StoredGlobalPagesToSetOffByDefault\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredPerUserPagesToSetOffByDefault("field \"StoredPerUserPagesToSetOffByDefault\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredPageMatchWriteData("field \"StoredPageMatchWriteData\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredPageMatchReadData("field \"StoredPageMatchReadData\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredPageMatchPageListData("field \"StoredPageMatchPageListData\" of the RequestInfo class", ignore_extras), fieldGeneratorVoiceParameters("field \"VoiceParameters\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredAlwaysMatchWriteData("field \"StoredAlwaysMatchWriteData\" of the RequestInfo class", ignore_extras), fieldGeneratorStoredAlwaysMatchReadData("field \"StoredAlwaysMatchReadData\" of the RequestInfo class", ignore_extras), fieldGeneratorUserFeedback("field \"UserFeedback\" of the RequestInfo class", ignore_extras), fieldGeneratorRadioControlRecognizeNorthAmericanFMBand("field \"RadioControlRecognizeNorthAmericanFMBand\" of the RequestInfo class", ignore_extras), fieldGeneratorRadioControlRecognizeNorthAmericanAMBand("field \"RadioControlRecognizeNorthAmericanAMBand\" of the RequestInfo class", ignore_extras), fieldGeneratorRadioControlOtherFMBands("field \"RadioControlOtherFMBands\" of the RequestInfo class", ignore_extras), fieldGeneratorRadioControlOtherAMBands("field \"RadioControlOtherAMBands\" of the RequestInfo class", ignore_extras), fieldGeneratorClientListMatches("field \"ClientListMatches\" of the RequestInfo class", ignore_extras), fieldGeneratorIntentToExecute("field \"IntentToExecute\" of the RequestInfo class", ignore_extras), fieldGeneratorRobotInfo("field \"RobotInfo\" of the RequestInfo class", ignore_extras), fieldGeneratorConvertToNewInformationNuggets("field \"ConvertToNewInformationNuggets\" of the RequestInfo class", ignore_extras), fieldGeneratorAcapelaVoiceParameters("field \"AcapelaVoiceParameters\" of the RequestInfo class", ignore_extras), fieldGeneratorDisambiguateResultsBeforeAction("field \"DisambiguateResultsBeforeAction\" of the RequestInfo class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RequestInfo class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            fieldGeneratorPositionTime.reset();
            fieldGeneratorPositionHorizontalAccuracy.reset();
            fieldGeneratorStreet.reset();
            fieldGeneratorCity.reset();
            fieldGeneratorState.reset();
            fieldGeneratorCountry.reset();
            fieldGeneratorRoutePoints.reset();
            fieldGeneratorControllableTrackPlaying.reset();
            fieldGeneratorTimeStamp.reset();
            fieldGeneratorTimeZone.reset();
            fieldGeneratorConversationState.reset();
            fieldGeneratorClientState.reset();
            fieldGeneratorSendBack.reset();
            fieldGeneratorPreferredImageSize.reset();
            fieldGeneratorInputLanguageEnglishName.reset();
            fieldGeneratorInputLanguageNativeName.reset();
            fieldGeneratorInputLanguageIETFTag.reset();
            fieldGeneratorOutputLanguageEnglishName.reset();
            fieldGeneratorOutputLanguageNativeName.reset();
            fieldGeneratorOutputLanguageIETFTag.reset();
            fieldGeneratorResultVersionAccepted.reset();
            fieldGeneratorUnitPreference.reset();
            fieldGeneratorDefaultTimeFormat24Hours.reset();
            fieldGeneratorClientID.reset();
            fieldGeneratorClientVersion.reset();
            fieldGeneratorDeviceID.reset();
            fieldGeneratorSDK.reset();
            fieldGeneratorSDKInfo.reset();
            fieldGeneratorFirstPersonSelf.reset();
            fieldGeneratorFirstPersonSelfSpoken.reset();
            fieldGeneratorSecondPersonSelf.reset();
            fieldGeneratorSecondPersonSelfSpoken.reset();
            fieldGeneratorWakeUpPattern.reset();
            fieldGeneratorUserID.reset();
            fieldGeneratorRequestID.reset();
            fieldGeneratorSessionID.reset();
            fieldGeneratorDomains.reset();
            fieldGeneratorResultUpdateAllowed.reset();
            fieldGeneratorPartialTranscriptsDesired.reset();
            fieldGeneratorMinResults.reset();
            fieldGeneratorMaxResults.reset();
            fieldGeneratorObjectByteCountPrefix.reset();
            fieldGeneratorProfanityFilter.reset();
            fieldGeneratorClientMatches.reset();
            fieldGeneratorClientMatchesOnly.reset();
            fieldGeneratorResponseAudioVoice.reset();
            fieldGeneratorResponseAudioShortOrLong.reset();
            fieldGeneratorResponseAudioAcceptedEncodings.reset();
            fieldGeneratorVoiceActivityDetection.reset();
            fieldGeneratorServerDeterminesEndOfAudio.reset();
            fieldGeneratorIntentOnly.reset();
            fieldGeneratorDisableSpellCorrection.reset();
            fieldGeneratorUseContactData.reset();
            fieldGeneratorUseClientTime.reset();
            fieldGeneratorForceConversationStateTime.reset();
            fieldGeneratorPhoneDisambiguationOmitList.reset();
            fieldGeneratorIncomingCallPending.reset();
            fieldGeneratorAllowPopularNameContactMatches.reset();
            fieldGeneratorMusicClientState.reset();
            fieldGeneratorDisableMusicSearchListPositionSpecification.reset();
            fieldGeneratorCollateMusicEntities.reset();
            fieldGeneratorAllowContextFreeMusicSearchForPopularEntities.reset();
            fieldGeneratorSportsLeagueControl.reset();
            fieldGeneratorLocalSearchClientState.reset();
            fieldGeneratorUberServerToken.reset();
            fieldGeneratorGetUberServerToken.reset();
            fieldGeneratorUberClientId.reset();
            fieldGeneratorGetUberClientId.reset();
            fieldGeneratorDisableMusicPlayerListPositionSpecification.reset();
            fieldGeneratorHomeAutomationDomainSettings.reset();
            fieldGeneratorUserContactsRequests.reset();
            fieldGeneratorStoredGlobalPagesToMatch.reset();
            fieldGeneratorStoredGlobalPagesToNotMatch.reset();
            fieldGeneratorStoredPerUserPagesToMatch.reset();
            fieldGeneratorStoredPerUserPagesToNotMatch.reset();
            fieldGeneratorStoredGlobalPagesToSetOnByDefault.reset();
            fieldGeneratorStoredPerUserPagesToSetOnByDefault.reset();
            fieldGeneratorStoredGlobalPagesToSetOffByDefault.reset();
            fieldGeneratorStoredPerUserPagesToSetOffByDefault.reset();
            fieldGeneratorStoredPageMatchWriteData.reset();
            fieldGeneratorStoredPageMatchReadData.reset();
            fieldGeneratorStoredPageMatchPageListData.reset();
            fieldGeneratorVoiceParameters.reset();
            fieldGeneratorStoredAlwaysMatchWriteData.reset();
            fieldGeneratorStoredAlwaysMatchReadData.reset();
            fieldGeneratorUserFeedback.reset();
            fieldGeneratorRadioControlRecognizeNorthAmericanFMBand.reset();
            fieldGeneratorRadioControlRecognizeNorthAmericanAMBand.reset();
            fieldGeneratorRadioControlOtherFMBands.reset();
            fieldGeneratorRadioControlOtherAMBands.reset();
            fieldGeneratorClientListMatches.reset();
            fieldGeneratorIntentToExecute.reset();
            fieldGeneratorRobotInfo.reset();
            fieldGeneratorConvertToNewInformationNuggets.reset();
            fieldGeneratorAcapelaVoiceParameters.reset();
            fieldGeneratorDisambiguateResultsBeforeAction.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* REQUESTINFOJSON_H */
