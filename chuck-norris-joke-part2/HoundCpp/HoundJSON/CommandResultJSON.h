/* file "CommandResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMMANDRESULTJSON_H
#define COMMANDRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "InformationNuggetJSON.h"
#include "ConversationStateJSON.h"
#include "TemplateJSON.h"
#include "TemplateJSON.h"
#include "PreviewJSON.h"
#include "HTMLDataJSON.h"
#include "HintsJSON.h"
#include "EmotionJSON.h"
#include "IconJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "CommandErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CommandResultJSON : public ReferenceCounted
  {
  public:
    enum TypeViewType
      {
        ViewType_Native,
        ViewType_Template,
        ViewType_HTML,
        ViewType_None,
        ViewType_Error
      };

    static TypeViewType  stringToViewType(const char *chars);
    static const char * stringFromViewType(TypeViewType the_enum);
    enum TypeResponseAudioEncodingKnownValues
      {
        ResponseAudioEncoding_WAV,
        ResponseAudioEncoding_Speex,
        ResponseAudioEncoding__none
      };
    struct TypeResponseAudioEncoding
      {
        bool in_known_list;
        std::string string_value;
        TypeResponseAudioEncodingKnownValues list_value;

        TypeResponseAudioEncoding(void);
        TypeResponseAudioEncoding(const TypeResponseAudioEncoding &other);
        TypeResponseAudioEncoding(TypeResponseAudioEncodingKnownValues other);
        bool  operator==(const TypeResponseAudioEncoding &other) const;
        bool  operator!=(const TypeResponseAudioEncoding &other) const;
        bool  operator<(const TypeResponseAudioEncoding &other) const;
        bool  operator>(const TypeResponseAudioEncoding &other) const;
        bool  operator>=(const TypeResponseAudioEncoding &other) const;
        bool  operator<=(const TypeResponseAudioEncoding &other) const;

      };

    static TypeResponseAudioEncodingKnownValues  stringToResponseAudioEncoding(const char *chars);
    static const char * stringFromResponseAudioEncoding(TypeResponseAudioEncodingKnownValues the_enum);

  private:
    bool flagHasSpokenResponse;
    std::string storeSpokenResponse;
    bool flagHasSpokenResponseLong;
    std::string storeSpokenResponseLong;
    bool flagHasWrittenResponse;
    std::string storeWrittenResponse;
    bool flagHasWrittenResponseLong;
    std::string storeWrittenResponseLong;
    bool flagHasSpokenResponseSSML;
    std::string storeSpokenResponseSSML;
    bool flagHasSpokenResponseSSMLLong;
    std::string storeSpokenResponseSSMLLong;
    bool flagHasAutoListen;
    bool storeAutoListen;
    bool flagHasUserVisibleMode;
    std::string storeUserVisibleMode;
    bool flagHasIsRepeat;
    bool storeIsRepeat;
    bool flagHasAdditionalInformation;
    std::vector< InformationNuggetJSON * > storeAdditionalInformation;
    bool flagHasConversationState;
    ConversationStateJSON * storeConversationState;
    bool flagHasViewType;
    std::vector< TypeViewType > storeViewType;
    bool flagHasTemplateName;
    std::string storeTemplateName;
    bool flagHasTemplateData;
    TemplateJSON * storeTemplateData;
    bool flagHasCombiningTemplateData;
    TemplateJSON * storeCombiningTemplateData;
    bool flagHasPreview;
    PreviewJSON * storePreview;
    bool flagHasHTMLData;
    HTMLDataJSON * storeHTMLData;
    bool flagHasHints;
    HintsJSON * storeHints;
    bool flagHasEmotion;
    EmotionJSON * storeEmotion;
    bool flagHasIcon;
    IconJSON * storeIcon;
    bool flagHasResponseAudioBytes;
    std::string storeResponseAudioBytes;
    bool flagHasResponseAudioEncoding;
    TypeResponseAudioEncoding storeResponseAudioEncoding;
    bool flagHasResponseAudioError;
    std::string storeResponseAudioError;
    bool flagHasOutputOverrideDiagnostics;
    std::vector< std::string > storeOutputOverrideDiagnostics;
    bool flagHasUploadedTerrierDiagnostics;
    std::vector< std::string > storeUploadedTerrierDiagnostics;
    bool flagHasRequiredFeatures;
    std::vector< std::string > storeRequiredFeatures;
    bool flagHasClientActionSucceededResult;
    DynamicResponseJSON * storeClientActionSucceededResult;
    bool flagHasClientActionFailedResult;
    DynamicResponseJSON * storeClientActionFailedResult;
    bool flagHasRequiredFeaturesSupportedResult;
    DynamicResponseJSON * storeRequiredFeaturesSupportedResult;
    bool flagHasSendBack;
    JSONValue * storeSendBack;
    bool flagHasUnderstandingConfidence;
    double storeUnderstandingConfidence;
    std::string textStoreUnderstandingConfidence;
    bool flagHasErrorType;
    std::string storeErrorType;
    bool flagHasErrorData;
    CommandErrorJSON * storeErrorData;

    CommandResultJSON(const CommandResultJSON &);
    CommandResultJSON & operator=(const CommandResultJSON &other);

    void  fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoListen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserVisibleMode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRepeat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAdditionalInformation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConversationState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONViewType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemplateName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCombiningTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHTMLData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmotion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIcon(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioBytes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioEncoding(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioError(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputOverrideDiagnostics(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUploadedTerrierDiagnostics(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequiredFeatures(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientActionSucceededResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientActionFailedResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequiredFeaturesSupportedResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSendBack(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnderstandingConfidence(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrorType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrorData(JSONValue *json_value, bool ignore_extras = false);


  public:
    CommandResultJSON(void);
    virtual ~CommandResultJSON(void);
    virtual const char *getCommandKind(void) const = 0;
    bool  hasSpokenResponse(void) const;
    std::string  getSpokenResponse(void);
    const std::string  getSpokenResponse(void) const;
    bool  hasSpokenResponseLong(void) const;
    std::string  getSpokenResponseLong(void);
    const std::string  getSpokenResponseLong(void) const;
    bool  hasWrittenResponse(void) const;
    std::string  getWrittenResponse(void);
    const std::string  getWrittenResponse(void) const;
    bool  hasWrittenResponseLong(void) const;
    std::string  getWrittenResponseLong(void);
    const std::string  getWrittenResponseLong(void) const;
    bool  hasSpokenResponseSSML(void) const;
    std::string  getSpokenResponseSSML(void);
    const std::string  getSpokenResponseSSML(void) const;
    bool  hasSpokenResponseSSMLLong(void) const;
    std::string  getSpokenResponseSSMLLong(void);
    const std::string  getSpokenResponseSSMLLong(void) const;
    bool  hasAutoListen(void) const;
    bool  getAutoListen(void);
    const bool  getAutoListen(void) const;
    bool  hasUserVisibleMode(void) const;
    std::string  getUserVisibleMode(void);
    const std::string  getUserVisibleMode(void) const;
    bool  hasIsRepeat(void) const;
    bool  getIsRepeat(void);
    const bool  getIsRepeat(void) const;
    bool  hasAdditionalInformation(void) const;
    size_t  countOfAdditionalInformation(void) const;
    InformationNuggetJSON *  elementOfAdditionalInformation(size_t element_num);
    const InformationNuggetJSON *  elementOfAdditionalInformation(size_t element_num) const;
    std::vector< InformationNuggetJSON * >  getAdditionalInformation(void);
    const std::vector< InformationNuggetJSON * >  getAdditionalInformation(void) const;
    bool  hasConversationState(void) const;
    ConversationStateJSON *  getConversationState(void);
    const ConversationStateJSON *  getConversationState(void) const;
    bool  hasViewType(void) const;
    size_t  countOfViewType(void) const;
    TypeViewType  elementOfViewType(size_t element_num);
    const TypeViewType  elementOfViewType(size_t element_num) const;
    std::vector< TypeViewType >  getViewType(void);
    const std::vector< TypeViewType >  getViewType(void) const;
    bool  hasTemplateName(void) const;
    std::string  getTemplateName(void);
    const std::string  getTemplateName(void) const;
    bool  hasTemplateData(void) const;
    TemplateJSON *  getTemplateData(void);
    const TemplateJSON *  getTemplateData(void) const;
    bool  hasCombiningTemplateData(void) const;
    TemplateJSON *  getCombiningTemplateData(void);
    const TemplateJSON *  getCombiningTemplateData(void) const;
    bool  hasPreview(void) const;
    PreviewJSON *  getPreview(void);
    const PreviewJSON *  getPreview(void) const;
    JSONValue *  getPreviewValue(void);
    const JSONValue *  getPreviewValue(void) const;
    bool  hasHTMLData(void) const;
    HTMLDataJSON *  getHTMLData(void);
    const HTMLDataJSON *  getHTMLData(void) const;
    bool  hasHints(void) const;
    HintsJSON *  getHints(void);
    const HintsJSON *  getHints(void) const;
    bool  hasEmotion(void) const;
    EmotionJSON *  getEmotion(void);
    const EmotionJSON *  getEmotion(void) const;
    EmotionJSON::TypeValue  getEmotionValue(void);
    const EmotionJSON::TypeValue  getEmotionValue(void) const;
    const char * getEmotionAsChars(void) const;
    std::string  getEmotionAsString(void) const;
    bool  hasIcon(void) const;
    IconJSON *  getIcon(void);
    const IconJSON *  getIcon(void) const;
    IconJSON::TypeValue  getIconValue(void);
    const IconJSON::TypeValue  getIconValue(void) const;
    const char * getIconAsChars(void) const;
    std::string  getIconAsString(void) const;
    bool  hasResponseAudioBytes(void) const;
    std::string  getResponseAudioBytes(void);
    const std::string  getResponseAudioBytes(void) const;
    bool  hasResponseAudioEncoding(void) const;
    TypeResponseAudioEncoding  getResponseAudioEncoding(void);
    const TypeResponseAudioEncoding  getResponseAudioEncoding(void) const;
    const char * getResponseAudioEncodingAsChars(void) const;
    std::string  getResponseAudioEncodingAsString(void) const;
    bool  hasResponseAudioError(void) const;
    std::string  getResponseAudioError(void);
    const std::string  getResponseAudioError(void) const;
    bool  hasOutputOverrideDiagnostics(void) const;
    size_t  countOfOutputOverrideDiagnostics(void) const;
    std::string  elementOfOutputOverrideDiagnostics(size_t element_num);
    const std::string  elementOfOutputOverrideDiagnostics(size_t element_num) const;
    std::vector< std::string >  getOutputOverrideDiagnostics(void);
    const std::vector< std::string >  getOutputOverrideDiagnostics(void) const;
    bool  hasUploadedTerrierDiagnostics(void) const;
    size_t  countOfUploadedTerrierDiagnostics(void) const;
    std::string  elementOfUploadedTerrierDiagnostics(size_t element_num);
    const std::string  elementOfUploadedTerrierDiagnostics(size_t element_num) const;
    std::vector< std::string >  getUploadedTerrierDiagnostics(void);
    const std::vector< std::string >  getUploadedTerrierDiagnostics(void) const;
    bool  hasRequiredFeatures(void) const;
    size_t  countOfRequiredFeatures(void) const;
    std::string  elementOfRequiredFeatures(size_t element_num);
    const std::string  elementOfRequiredFeatures(size_t element_num) const;
    std::vector< std::string >  getRequiredFeatures(void);
    const std::vector< std::string >  getRequiredFeatures(void) const;
    bool  hasClientActionSucceededResult(void) const;
    DynamicResponseJSON *  getClientActionSucceededResult(void);
    const DynamicResponseJSON *  getClientActionSucceededResult(void) const;
    bool  hasClientActionFailedResult(void) const;
    DynamicResponseJSON *  getClientActionFailedResult(void);
    const DynamicResponseJSON *  getClientActionFailedResult(void) const;
    bool  hasRequiredFeaturesSupportedResult(void) const;
    DynamicResponseJSON *  getRequiredFeaturesSupportedResult(void);
    const DynamicResponseJSON *  getRequiredFeaturesSupportedResult(void) const;
    bool  hasSendBack(void) const;
    JSONValue *  getSendBack(void);
    const JSONValue *  getSendBack(void) const;
    bool  hasUnderstandingConfidence(void) const;
    double  getUnderstandingConfidence(void);
    const double  getUnderstandingConfidence(void) const;
    std::string  getUnderstandingConfidenceAsText(void) const;
    bool  hasErrorType(void) const;
    std::string  getErrorType(void);
    const std::string  getErrorType(void) const;
    bool  hasErrorData(void) const;
    CommandErrorJSON *  getErrorData(void);
    const CommandErrorJSON *  getErrorData(void) const;

    virtual size_t extraCommandResultComponentCount(void) const = 0;
    virtual const char *extraCommandResultComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraCommandResultComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraCommandResultComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraCommandResultLookup(const char *field_name) = 0;
    virtual const JSONValue *extraCommandResultLookup(const char *field_name) const = 0;

    void setSpokenResponse(std::string new_value)
      {
        flagHasSpokenResponse = true;
        storeSpokenResponse = new_value;
      }
    void unsetSpokenResponse(void)
      {
        flagHasSpokenResponse = false;
      }
    void setSpokenResponseLong(std::string new_value)
      {
        flagHasSpokenResponseLong = true;
        storeSpokenResponseLong = new_value;
      }
    void unsetSpokenResponseLong(void)
      {
        flagHasSpokenResponseLong = false;
      }
    void setWrittenResponse(std::string new_value)
      {
        flagHasWrittenResponse = true;
        storeWrittenResponse = new_value;
      }
    void unsetWrittenResponse(void)
      {
        flagHasWrittenResponse = false;
      }
    void setWrittenResponseLong(std::string new_value)
      {
        flagHasWrittenResponseLong = true;
        storeWrittenResponseLong = new_value;
      }
    void unsetWrittenResponseLong(void)
      {
        flagHasWrittenResponseLong = false;
      }
    void setSpokenResponseSSML(std::string new_value)
      {
        flagHasSpokenResponseSSML = true;
        storeSpokenResponseSSML = new_value;
      }
    void unsetSpokenResponseSSML(void)
      {
        flagHasSpokenResponseSSML = false;
      }
    void setSpokenResponseSSMLLong(std::string new_value)
      {
        flagHasSpokenResponseSSMLLong = true;
        storeSpokenResponseSSMLLong = new_value;
      }
    void unsetSpokenResponseSSMLLong(void)
      {
        flagHasSpokenResponseSSMLLong = false;
      }
    void setAutoListen(bool new_value)
      {
        flagHasAutoListen = true;
        storeAutoListen = new_value;
      }
    void unsetAutoListen(void)
      {
        flagHasAutoListen = false;
      }
    void setUserVisibleMode(std::string new_value)
      {
        flagHasUserVisibleMode = true;
        storeUserVisibleMode = new_value;
      }
    void unsetUserVisibleMode(void)
      {
        flagHasUserVisibleMode = false;
      }
    void setIsRepeat(bool new_value)
      {
        flagHasIsRepeat = true;
        storeIsRepeat = new_value;
      }
    void unsetIsRepeat(void)
      {
        flagHasIsRepeat = false;
      }
    void initAdditionalInformation(void)
      {
        if (flagHasAdditionalInformation)
          {
            for (size_t num2 = 0; num2 < storeAdditionalInformation.size(); ++num2)
              {
                storeAdditionalInformation[num2]->remove_reference();
              }
          }
        flagHasAdditionalInformation = true;
        storeAdditionalInformation.clear();
      }
    void appendAdditionalInformation(InformationNuggetJSON * to_append)
      {
        if (!flagHasAdditionalInformation)
          {
            flagHasAdditionalInformation = true;
            storeAdditionalInformation.clear();
          }
        assert(flagHasAdditionalInformation);
        to_append->add_reference();
        storeAdditionalInformation.push_back(to_append);
      }
    void unsetAdditionalInformation(void)
      {
        if (flagHasAdditionalInformation)
          {
            for (size_t num3 = 0; num3 < storeAdditionalInformation.size(); ++num3)
              {
                storeAdditionalInformation[num3]->remove_reference();
              }
          }
        flagHasAdditionalInformation = false;
        storeAdditionalInformation.clear();
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
    void initViewType(void)
      {
        flagHasViewType = true;
        storeViewType.clear();
      }
    void appendViewType(TypeViewType to_append)
      {
        if (!flagHasViewType)
          {
            flagHasViewType = true;
            storeViewType.clear();
          }
        assert(flagHasViewType);
        storeViewType.push_back(to_append);
      }
    void appendViewType(const char *chars)
      {
        appendViewType(stringToViewType(chars));
      }
    void appendViewType(std::string the_string)
      {
        appendViewType(stringToViewType(the_string.c_str()));
      }
    void unsetViewType(void)
      {
        flagHasViewType = false;
        storeViewType.clear();
      }
    void setTemplateName(std::string new_value)
      {
        flagHasTemplateName = true;
        storeTemplateName = new_value;
      }
    void unsetTemplateName(void)
      {
        flagHasTemplateName = false;
      }
    void setTemplateData(TemplateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTemplateData)
          {
            storeTemplateData->remove_reference();
          }
        flagHasTemplateData = true;
        storeTemplateData = new_value;
      }
    void unsetTemplateData(void)
      {
        if (flagHasTemplateData)
          {
            storeTemplateData->remove_reference();
          }
        flagHasTemplateData = false;
      }
    void setCombiningTemplateData(TemplateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCombiningTemplateData)
          {
            storeCombiningTemplateData->remove_reference();
          }
        flagHasCombiningTemplateData = true;
        storeCombiningTemplateData = new_value;
      }
    void unsetCombiningTemplateData(void)
      {
        if (flagHasCombiningTemplateData)
          {
            storeCombiningTemplateData->remove_reference();
          }
        flagHasCombiningTemplateData = false;
      }
    void setPreview(PreviewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPreview)
          {
            storePreview->remove_reference();
          }
        flagHasPreview = true;
        storePreview = new_value;
      }
    void setPreview(JSONValue * new_value)
      {
        setPreview(new PreviewJSON(new_value));
      }
    void unsetPreview(void)
      {
        if (flagHasPreview)
          {
            storePreview->remove_reference();
          }
        flagHasPreview = false;
      }
    void setHTMLData(HTMLDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHTMLData)
          {
            storeHTMLData->remove_reference();
          }
        flagHasHTMLData = true;
        storeHTMLData = new_value;
      }
    void unsetHTMLData(void)
      {
        if (flagHasHTMLData)
          {
            storeHTMLData->remove_reference();
          }
        flagHasHTMLData = false;
      }
    void setHints(HintsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHints)
          {
            storeHints->remove_reference();
          }
        flagHasHints = true;
        storeHints = new_value;
      }
    void unsetHints(void)
      {
        if (flagHasHints)
          {
            storeHints->remove_reference();
          }
        flagHasHints = false;
      }
    void setEmotion(EmotionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEmotion)
          {
            storeEmotion->remove_reference();
          }
        flagHasEmotion = true;
        storeEmotion = new_value;
      }
    void setEmotion(EmotionJSON::TypeValue new_value)
      {
        setEmotion(new EmotionJSON(new_value));
      }
    void setEmotion(const char *chars)
      {
        setEmotion(new EmotionJSON(chars));
      }
    void setEmotion(std::string the_string)
      {
        setEmotion(new EmotionJSON(the_string));
      }
    void unsetEmotion(void)
      {
        if (flagHasEmotion)
          {
            storeEmotion->remove_reference();
          }
        flagHasEmotion = false;
      }
    void setIcon(IconJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasIcon)
          {
            storeIcon->remove_reference();
          }
        flagHasIcon = true;
        storeIcon = new_value;
      }
    void setIcon(IconJSON::TypeValue new_value)
      {
        setIcon(new IconJSON(new_value));
      }
    void setIcon(const char *chars)
      {
        setIcon(new IconJSON(chars));
      }
    void setIcon(std::string the_string)
      {
        setIcon(new IconJSON(the_string));
      }
    void unsetIcon(void)
      {
        if (flagHasIcon)
          {
            storeIcon->remove_reference();
          }
        flagHasIcon = false;
      }
    void setResponseAudioBytes(std::string new_value)
      {
        flagHasResponseAudioBytes = true;
        storeResponseAudioBytes = new_value;
      }
    void unsetResponseAudioBytes(void)
      {
        flagHasResponseAudioBytes = false;
      }
    void setResponseAudioEncoding(TypeResponseAudioEncoding new_value)
      {
        flagHasResponseAudioEncoding = true;
        storeResponseAudioEncoding = new_value;
      }
    void setResponseAudioEncoding(const char *chars)
      {
        TypeResponseAudioEncodingKnownValues known = stringToResponseAudioEncoding(chars);
        TypeResponseAudioEncoding new_value;
        if (known == ResponseAudioEncoding__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setResponseAudioEncoding(new_value);
      }
    void setResponseAudioEncoding(std::string the_string)
      {
        setResponseAudioEncoding(the_string.c_str());
      }
    void setResponseAudioEncoding(TypeResponseAudioEncodingKnownValues new_value)
      {
        TypeResponseAudioEncoding new_full_value;
        assert(new_value != ResponseAudioEncoding__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setResponseAudioEncoding(new_full_value);
      }
    void unsetResponseAudioEncoding(void)
      {
        flagHasResponseAudioEncoding = false;
      }
    void setResponseAudioError(std::string new_value)
      {
        flagHasResponseAudioError = true;
        storeResponseAudioError = new_value;
      }
    void unsetResponseAudioError(void)
      {
        flagHasResponseAudioError = false;
      }
    void initOutputOverrideDiagnostics(void)
      {
        flagHasOutputOverrideDiagnostics = true;
        storeOutputOverrideDiagnostics.clear();
      }
    void appendOutputOverrideDiagnostics(std::string to_append)
      {
        if (!flagHasOutputOverrideDiagnostics)
          {
            flagHasOutputOverrideDiagnostics = true;
            storeOutputOverrideDiagnostics.clear();
          }
        assert(flagHasOutputOverrideDiagnostics);
        storeOutputOverrideDiagnostics.push_back(to_append);
      }
    void unsetOutputOverrideDiagnostics(void)
      {
        flagHasOutputOverrideDiagnostics = false;
        storeOutputOverrideDiagnostics.clear();
      }
    void initUploadedTerrierDiagnostics(void)
      {
        flagHasUploadedTerrierDiagnostics = true;
        storeUploadedTerrierDiagnostics.clear();
      }
    void appendUploadedTerrierDiagnostics(std::string to_append)
      {
        if (!flagHasUploadedTerrierDiagnostics)
          {
            flagHasUploadedTerrierDiagnostics = true;
            storeUploadedTerrierDiagnostics.clear();
          }
        assert(flagHasUploadedTerrierDiagnostics);
        storeUploadedTerrierDiagnostics.push_back(to_append);
      }
    void unsetUploadedTerrierDiagnostics(void)
      {
        flagHasUploadedTerrierDiagnostics = false;
        storeUploadedTerrierDiagnostics.clear();
      }
    void initRequiredFeatures(void)
      {
        flagHasRequiredFeatures = true;
        storeRequiredFeatures.clear();
      }
    void appendRequiredFeatures(std::string to_append)
      {
        if (!flagHasRequiredFeatures)
          {
            flagHasRequiredFeatures = true;
            storeRequiredFeatures.clear();
          }
        assert(flagHasRequiredFeatures);
        storeRequiredFeatures.push_back(to_append);
      }
    void unsetRequiredFeatures(void)
      {
        flagHasRequiredFeatures = false;
        storeRequiredFeatures.clear();
      }
    void setClientActionSucceededResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClientActionSucceededResult)
          {
            storeClientActionSucceededResult->remove_reference();
          }
        flagHasClientActionSucceededResult = true;
        storeClientActionSucceededResult = new_value;
      }
    void unsetClientActionSucceededResult(void)
      {
        if (flagHasClientActionSucceededResult)
          {
            storeClientActionSucceededResult->remove_reference();
          }
        flagHasClientActionSucceededResult = false;
      }
    void setClientActionFailedResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClientActionFailedResult)
          {
            storeClientActionFailedResult->remove_reference();
          }
        flagHasClientActionFailedResult = true;
        storeClientActionFailedResult = new_value;
      }
    void unsetClientActionFailedResult(void)
      {
        if (flagHasClientActionFailedResult)
          {
            storeClientActionFailedResult->remove_reference();
          }
        flagHasClientActionFailedResult = false;
      }
    void setRequiredFeaturesSupportedResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequiredFeaturesSupportedResult)
          {
            storeRequiredFeaturesSupportedResult->remove_reference();
          }
        flagHasRequiredFeaturesSupportedResult = true;
        storeRequiredFeaturesSupportedResult = new_value;
      }
    void unsetRequiredFeaturesSupportedResult(void)
      {
        if (flagHasRequiredFeaturesSupportedResult)
          {
            storeRequiredFeaturesSupportedResult->remove_reference();
          }
        flagHasRequiredFeaturesSupportedResult = false;
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
    void setUnderstandingConfidence(double new_value)
      {
        flagHasUnderstandingConfidence = true;
        if (new_value < 0)
            throw("The value for field UnderstandingConfidence of CommandResultJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field UnderstandingConfidence of CommandResultJSON is greater than the upper bound (1) for that field.");
        storeUnderstandingConfidence = new_value;
        textStoreUnderstandingConfidence = "";
      }
    void setUnderstandingConfidenceText(std::string new_value)
      {
        flagHasUnderstandingConfidence = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field UnderstandingConfidence of CommandResultJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field UnderstandingConfidence of CommandResultJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field UnderstandingConfidence of CommandResultJSON is greater than the upper bound (1) for that field.");
        textStoreUnderstandingConfidence = new_value;
      }
    void unsetUnderstandingConfidence(void)
      {
        flagHasUnderstandingConfidence = false;
      }
    void setErrorType(std::string new_value)
      {
        flagHasErrorType = true;
        storeErrorType = new_value;
      }
    void unsetErrorType(void)
      {
        flagHasErrorType = false;
      }
    void setErrorData(CommandErrorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasErrorData)
          {
            storeErrorData->remove_reference();
          }
        flagHasErrorData = true;
        storeErrorData = new_value;
      }
    void unsetErrorData(void)
      {
        if (flagHasErrorData)
          {
            storeErrorData->remove_reference();
          }
        flagHasErrorData = false;
      }

    virtual void extraCommandResultAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraCommandResultSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("CommandKind", getCommandKind());
        assert(flagHasSpokenResponse);
        handler->start_pair("SpokenResponse");
        handler->string_value(storeSpokenResponse);
        assert(flagHasSpokenResponseLong);
        handler->start_pair("SpokenResponseLong");
        handler->string_value(storeSpokenResponseLong);
        assert(flagHasWrittenResponse);
        handler->start_pair("WrittenResponse");
        handler->string_value(storeWrittenResponse);
        assert(flagHasWrittenResponseLong);
        handler->start_pair("WrittenResponseLong");
        handler->string_value(storeWrittenResponseLong);
        if (flagHasSpokenResponseSSML)
          {
            handler->start_pair("SpokenResponseSSML");
            handler->string_value(storeSpokenResponseSSML);
          }
        if (flagHasSpokenResponseSSMLLong)
          {
            handler->start_pair("SpokenResponseSSMLLong");
            handler->string_value(storeSpokenResponseSSMLLong);
          }
        if (flagHasAutoListen)
          {
            handler->start_pair("AutoListen");
            handler->boolean_value(storeAutoListen);
          }
        if (flagHasUserVisibleMode)
          {
            handler->start_pair("UserVisibleMode");
            handler->string_value(storeUserVisibleMode);
          }
        if (flagHasIsRepeat)
          {
            handler->start_pair("IsRepeat");
            handler->boolean_value(storeIsRepeat);
          }
        if (flagHasAdditionalInformation)
          {
            handler->start_pair("AdditionalInformation");
            assert(storeAdditionalInformation.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAdditionalInformation.size(); ++num1)
              {
                storeAdditionalInformation[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasConversationState)
          {
            handler->start_pair("ConversationState");
            storeConversationState->write_as_json(handler);
          }
        assert(flagHasViewType);
        handler->start_pair("ViewType");
        assert(storeViewType.size() >= 1);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeViewType.size(); ++num2)
          {
            switch (storeViewType[num2])
              {
                case ViewType_Native:
                    handler->string_value("Native");
                    break;
                case ViewType_Template:
                    handler->string_value("Template");
                    break;
                case ViewType_HTML:
                    handler->string_value("HTML");
                    break;
                case ViewType_None:
                    handler->string_value("None");
                    break;
                case ViewType_Error:
                    handler->string_value("Error");
                    break;
                default:
                    assert(false);
              }
          }
        handler->finish_array();
        if (flagHasTemplateName)
          {
            handler->start_pair("TemplateName");
            handler->string_value(storeTemplateName);
          }
        if (flagHasTemplateData)
          {
            handler->start_pair("TemplateData");
            storeTemplateData->write_as_json(handler);
          }
        if (flagHasCombiningTemplateData)
          {
            handler->start_pair("CombiningTemplateData");
            storeCombiningTemplateData->write_as_json(handler);
          }
        if (flagHasPreview)
          {
            handler->start_pair("Preview");
            storePreview->write_as_json(handler);
          }
        if (flagHasHTMLData)
          {
            handler->start_pair("HTMLData");
            storeHTMLData->write_as_json(handler);
          }
        if (flagHasHints)
          {
            handler->start_pair("Hints");
            storeHints->write_as_json(handler);
          }
        if (flagHasEmotion)
          {
            handler->start_pair("Emotion");
            storeEmotion->write_as_json(handler);
          }
        if (flagHasIcon)
          {
            handler->start_pair("Icon");
            storeIcon->write_as_json(handler);
          }
        if (flagHasResponseAudioBytes)
          {
            handler->start_pair("ResponseAudioBytes");
            handler->string_value(storeResponseAudioBytes);
          }
        if (flagHasResponseAudioEncoding)
          {
            handler->start_pair("ResponseAudioEncoding");
            if (storeResponseAudioEncoding.in_known_list)
              {
                switch (storeResponseAudioEncoding.list_value)
                  {
                    case ResponseAudioEncoding_WAV:
                        handler->string_value("WAV");
                        break;
                    case ResponseAudioEncoding_Speex:
                        handler->string_value("Speex");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeResponseAudioEncoding.string_value);
              }
          }
        if (flagHasResponseAudioError)
          {
            handler->start_pair("ResponseAudioError");
            handler->string_value(storeResponseAudioError);
          }
        if (flagHasOutputOverrideDiagnostics)
          {
            handler->start_pair("OutputOverrideDiagnostics");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeOutputOverrideDiagnostics.size(); ++num3)
              {
                handler->string_value(storeOutputOverrideDiagnostics[num3]);
              }
            handler->finish_array();
          }
        if (flagHasUploadedTerrierDiagnostics)
          {
            handler->start_pair("UploadedTerrierDiagnostics");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeUploadedTerrierDiagnostics.size(); ++num4)
              {
                handler->string_value(storeUploadedTerrierDiagnostics[num4]);
              }
            handler->finish_array();
          }
        if (flagHasRequiredFeatures)
          {
            handler->start_pair("RequiredFeatures");
            assert(storeRequiredFeatures.size() >= 1);
            handler->start_array();
            for (size_t num5 = 0; num5 < storeRequiredFeatures.size(); ++num5)
              {
                handler->string_value(storeRequiredFeatures[num5]);
              }
            handler->finish_array();
          }
        if (flagHasClientActionSucceededResult)
          {
            handler->start_pair("ClientActionSucceededResult");
            storeClientActionSucceededResult->write_as_json(handler);
          }
        if (flagHasClientActionFailedResult)
          {
            handler->start_pair("ClientActionFailedResult");
            storeClientActionFailedResult->write_as_json(handler);
          }
        if (flagHasRequiredFeaturesSupportedResult)
          {
            handler->start_pair("RequiredFeaturesSupportedResult");
            storeRequiredFeaturesSupportedResult->write_as_json(handler);
          }
        if (flagHasSendBack)
          {
            handler->start_pair("SendBack");
            storeSendBack->write(handler);
          }
        if (flagHasUnderstandingConfidence)
          {
            handler->start_pair("UnderstandingConfidence");
            if (textStoreUnderstandingConfidence != "")
                handler->number_value(textStoreUnderstandingConfidence.c_str());
            else if (((double)(long int)storeUnderstandingConfidence) == storeUnderstandingConfidence)
                handler->number_value((long int)storeUnderstandingConfidence);
            else
                handler->number_value(storeUnderstandingConfidence);
          }
        if (flagHasErrorType)
          {
            handler->start_pair("ErrorType");
            handler->string_value(storeErrorType);
          }
        if (flagHasErrorData)
          {
            handler->start_pair("ErrorData");
            storeErrorData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSpokenResponse()))
          {
            return "When parsing the object for %what%, the \"SpokenResponse\" field was missing.";
          }
        if (!(hasSpokenResponseLong()))
          {
            return "When parsing the object for %what%, the \"SpokenResponseLong\" field was missing.";
          }
        if (!(hasWrittenResponse()))
          {
            return "When parsing the object for %what%, the \"WrittenResponse\" field was missing.";
          }
        if (!(hasWrittenResponseLong()))
          {
            return "When parsing the object for %what%, the \"WrittenResponseLong\" field was missing.";
          }
        if (!(hasViewType()))
          {
            return "When parsing the object for %what%, the \"ViewType\" field was missing.";
          }
        return NULL;
      }

    static CommandResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CommandResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CommandResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CommandResultJSON>, CommandResultJSON *, bool> generator("Type CommandResult", ignore_extras);
            parse_json_value(text, "Text for CommandResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CommandResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CommandResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CommandResultJSON>, CommandResultJSON *, bool> generator("Type CommandResult", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponseLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseSSML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseSSMLLong;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoListen;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUserVisibleMode;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRepeat;
        JSONHoldingArrayGenerator<InformationNuggetJSON::Generator, RCHandle<InformationNuggetJSON>, InformationNuggetJSON *, bool > fieldGeneratorAdditionalInformation;
        JSONHoldingGenerator<ConversationStateJSON::Generator, RCHandle<ConversationStateJSON>, ConversationStateJSON *, bool > fieldGeneratorConversationState;
    class FieldGeneratorViewType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorViewType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorViewType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToViewType(result));
              }
            virtual void handle_result(TypeViewType result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorViewType, TypeViewType, TypeViewType > fieldGeneratorViewType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTemplateName;
        JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorTemplateData;
        JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorCombiningTemplateData;
        JSONHoldingGenerator<PreviewJSON::Generator, RCHandle<PreviewJSON>, PreviewJSON *, bool > fieldGeneratorPreview;
        JSONHoldingGenerator<HTMLDataJSON::Generator, RCHandle<HTMLDataJSON>, HTMLDataJSON *, bool > fieldGeneratorHTMLData;
        JSONHoldingGenerator<HintsJSON::Generator, RCHandle<HintsJSON>, HintsJSON *, bool > fieldGeneratorHints;
        JSONHoldingGenerator<EmotionJSON::Generator, RCHandle<EmotionJSON>, EmotionJSON *, bool > fieldGeneratorEmotion;
        JSONHoldingGenerator<IconJSON::Generator, RCHandle<IconJSON>, IconJSON *, bool > fieldGeneratorIcon;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResponseAudioBytes;
    class FieldGeneratorResponseAudioEncoding : public JSONStringGenerator
          {
          protected:
            FieldGeneratorResponseAudioEncoding(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorResponseAudioEncoding(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeResponseAudioEncodingKnownValues known = stringToResponseAudioEncoding(result);
                TypeResponseAudioEncoding new_value;
                if (known == ResponseAudioEncoding__none)
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
            virtual void handle_result(TypeResponseAudioEncoding result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorResponseAudioEncoding, TypeResponseAudioEncoding, TypeResponseAudioEncoding > fieldGeneratorResponseAudioEncoding;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResponseAudioError;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputOverrideDiagnostics;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUploadedTerrierDiagnostics;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequiredFeatures;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorClientActionSucceededResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorClientActionFailedResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorRequiredFeaturesSupportedResult;
        JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorSendBack;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorUnderstandingConfidence;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorType;
        JSONHoldingGenerator<CommandErrorJSON::Generator, RCHandle<CommandErrorJSON>, CommandErrorJSON *, bool > fieldGeneratorErrorData;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `CommandKind' field is missing.");
            CommandResultJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<CommandResultJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCommandResultAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getCommandResultJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `CommandKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(CommandResultJSON *result)
          {
            if (fieldGeneratorSpokenResponse.have_value)
              {
                result->setSpokenResponse(fieldGeneratorSpokenResponse.value);
                fieldGeneratorSpokenResponse.have_value = false;
              }
            else if (!(result->hasSpokenResponse()))
              {
                error("When parsing the object for %what%, the \"SpokenResponse\" field was missing.");
              }
            if (fieldGeneratorSpokenResponseLong.have_value)
              {
                result->setSpokenResponseLong(fieldGeneratorSpokenResponseLong.value);
                fieldGeneratorSpokenResponseLong.have_value = false;
              }
            else if (!(result->hasSpokenResponseLong()))
              {
                error("When parsing the object for %what%, the \"SpokenResponseLong\" field was missing.");
              }
            if (fieldGeneratorWrittenResponse.have_value)
              {
                result->setWrittenResponse(fieldGeneratorWrittenResponse.value);
                fieldGeneratorWrittenResponse.have_value = false;
              }
            else if (!(result->hasWrittenResponse()))
              {
                error("When parsing the object for %what%, the \"WrittenResponse\" field was missing.");
              }
            if (fieldGeneratorWrittenResponseLong.have_value)
              {
                result->setWrittenResponseLong(fieldGeneratorWrittenResponseLong.value);
                fieldGeneratorWrittenResponseLong.have_value = false;
              }
            else if (!(result->hasWrittenResponseLong()))
              {
                error("When parsing the object for %what%, the \"WrittenResponseLong\" field was missing.");
              }
            if (fieldGeneratorSpokenResponseSSML.have_value)
              {
                result->setSpokenResponseSSML(fieldGeneratorSpokenResponseSSML.value);
                fieldGeneratorSpokenResponseSSML.have_value = false;
              }
            if (fieldGeneratorSpokenResponseSSMLLong.have_value)
              {
                result->setSpokenResponseSSMLLong(fieldGeneratorSpokenResponseSSMLLong.value);
                fieldGeneratorSpokenResponseSSMLLong.have_value = false;
              }
            if (fieldGeneratorAutoListen.have_value)
              {
                result->setAutoListen(fieldGeneratorAutoListen.value);
                fieldGeneratorAutoListen.have_value = false;
              }
            if (fieldGeneratorUserVisibleMode.have_value)
              {
                result->setUserVisibleMode(fieldGeneratorUserVisibleMode.value);
                fieldGeneratorUserVisibleMode.have_value = false;
              }
            if (fieldGeneratorIsRepeat.have_value)
              {
                result->setIsRepeat(fieldGeneratorIsRepeat.value);
                fieldGeneratorIsRepeat.have_value = false;
              }
            if (fieldGeneratorAdditionalInformation.have_value)
              {
                result->initAdditionalInformation();
                size_t count = fieldGeneratorAdditionalInformation.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAdditionalInformation(fieldGeneratorAdditionalInformation.value[num].referenced());
                  }
                fieldGeneratorAdditionalInformation.value.clear();
                fieldGeneratorAdditionalInformation.have_value = false;
              }
            if (fieldGeneratorConversationState.have_value)
              {
                result->setConversationState(fieldGeneratorConversationState.value.referenced());
                fieldGeneratorConversationState.have_value = false;
              }
            if (fieldGeneratorViewType.have_value)
              {
                result->initViewType();
                size_t count = fieldGeneratorViewType.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendViewType(fieldGeneratorViewType.value[num]);
                  }
                fieldGeneratorViewType.value.clear();
                fieldGeneratorViewType.have_value = false;
              }
            else if (!(result->hasViewType()))
              {
                error("When parsing the object for %what%, the \"ViewType\" field was missing.");
              }
            if (fieldGeneratorTemplateName.have_value)
              {
                result->setTemplateName(fieldGeneratorTemplateName.value);
                fieldGeneratorTemplateName.have_value = false;
              }
            if (fieldGeneratorTemplateData.have_value)
              {
                result->setTemplateData(fieldGeneratorTemplateData.value.referenced());
                fieldGeneratorTemplateData.have_value = false;
              }
            if (fieldGeneratorCombiningTemplateData.have_value)
              {
                result->setCombiningTemplateData(fieldGeneratorCombiningTemplateData.value.referenced());
                fieldGeneratorCombiningTemplateData.have_value = false;
              }
            if (fieldGeneratorPreview.have_value)
              {
                result->setPreview(fieldGeneratorPreview.value.referenced());
                fieldGeneratorPreview.have_value = false;
              }
            if (fieldGeneratorHTMLData.have_value)
              {
                result->setHTMLData(fieldGeneratorHTMLData.value.referenced());
                fieldGeneratorHTMLData.have_value = false;
              }
            if (fieldGeneratorHints.have_value)
              {
                result->setHints(fieldGeneratorHints.value.referenced());
                fieldGeneratorHints.have_value = false;
              }
            if (fieldGeneratorEmotion.have_value)
              {
                result->setEmotion(fieldGeneratorEmotion.value.referenced());
                fieldGeneratorEmotion.have_value = false;
              }
            if (fieldGeneratorIcon.have_value)
              {
                result->setIcon(fieldGeneratorIcon.value.referenced());
                fieldGeneratorIcon.have_value = false;
              }
            if (fieldGeneratorResponseAudioBytes.have_value)
              {
                result->setResponseAudioBytes(fieldGeneratorResponseAudioBytes.value);
                fieldGeneratorResponseAudioBytes.have_value = false;
              }
            if (fieldGeneratorResponseAudioEncoding.have_value)
              {
                result->setResponseAudioEncoding(fieldGeneratorResponseAudioEncoding.value);
                fieldGeneratorResponseAudioEncoding.have_value = false;
              }
            if (fieldGeneratorResponseAudioError.have_value)
              {
                result->setResponseAudioError(fieldGeneratorResponseAudioError.value);
                fieldGeneratorResponseAudioError.have_value = false;
              }
            if (fieldGeneratorOutputOverrideDiagnostics.have_value)
              {
                result->initOutputOverrideDiagnostics();
                size_t count = fieldGeneratorOutputOverrideDiagnostics.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOutputOverrideDiagnostics(fieldGeneratorOutputOverrideDiagnostics.value[num]);
                  }
                fieldGeneratorOutputOverrideDiagnostics.value.clear();
                fieldGeneratorOutputOverrideDiagnostics.have_value = false;
              }
            if (fieldGeneratorUploadedTerrierDiagnostics.have_value)
              {
                result->initUploadedTerrierDiagnostics();
                size_t count = fieldGeneratorUploadedTerrierDiagnostics.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendUploadedTerrierDiagnostics(fieldGeneratorUploadedTerrierDiagnostics.value[num]);
                  }
                fieldGeneratorUploadedTerrierDiagnostics.value.clear();
                fieldGeneratorUploadedTerrierDiagnostics.have_value = false;
              }
            if (fieldGeneratorRequiredFeatures.have_value)
              {
                result->initRequiredFeatures();
                size_t count = fieldGeneratorRequiredFeatures.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRequiredFeatures(fieldGeneratorRequiredFeatures.value[num]);
                  }
                fieldGeneratorRequiredFeatures.value.clear();
                fieldGeneratorRequiredFeatures.have_value = false;
              }
            if (fieldGeneratorClientActionSucceededResult.have_value)
              {
                result->setClientActionSucceededResult(fieldGeneratorClientActionSucceededResult.value.referenced());
                fieldGeneratorClientActionSucceededResult.have_value = false;
              }
            if (fieldGeneratorClientActionFailedResult.have_value)
              {
                result->setClientActionFailedResult(fieldGeneratorClientActionFailedResult.value.referenced());
                fieldGeneratorClientActionFailedResult.have_value = false;
              }
            if (fieldGeneratorRequiredFeaturesSupportedResult.have_value)
              {
                result->setRequiredFeaturesSupportedResult(fieldGeneratorRequiredFeaturesSupportedResult.value.referenced());
                fieldGeneratorRequiredFeaturesSupportedResult.have_value = false;
              }
            if (fieldGeneratorSendBack.have_value)
              {
                result->setSendBack(fieldGeneratorSendBack.value.referenced());
                fieldGeneratorSendBack.have_value = false;
              }
            if (fieldGeneratorUnderstandingConfidence.have_value)
              {
                result->setUnderstandingConfidenceText(fieldGeneratorUnderstandingConfidence.value);
                fieldGeneratorUnderstandingConfidence.have_value = false;
              }
            if (fieldGeneratorErrorType.have_value)
              {
                result->setErrorType(fieldGeneratorErrorType.value);
                fieldGeneratorErrorType.have_value = false;
              }
            if (fieldGeneratorErrorData.have_value)
              {
                result->setErrorData(fieldGeneratorErrorData.value.referenced());
                fieldGeneratorErrorData.have_value = false;
              }
          }
        virtual void handle_result(CommandResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'd':
                            if (strcmp(&(field_name[2]), "ditionalInformation") == 0)
                                return &fieldGeneratorAdditionalInformation;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "toListen") == 0)
                                return &fieldGeneratorAutoListen;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "ientAction", 10) == 0)
                              {
                                switch ((unsigned char)(field_name[12]))
                                  {
                                    case 'F':
                                        if (strcmp(&(field_name[13]), "ailedResult") == 0)
                                            return &fieldGeneratorClientActionFailedResult;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[13]), "ucceededResult") == 0)
                                            return &fieldGeneratorClientActionSucceededResult;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'm':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'b':
                                            if (strcmp(&(field_name[4]), "iningTemplateData") == 0)
                                                return &fieldGeneratorCombiningTemplateData;
                                            break;
                                        case 'm':
                                            if (strcmp(&(field_name[4]), "andKind") == 0)
                                                {
                                                keyGenerator.reset();
                                                return &keyGenerator;
                                                }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'n':
                                    if (strcmp(&(field_name[3]), "versationState") == 0)
                                        return &fieldGeneratorConversationState;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'm':
                            if (strcmp(&(field_name[2]), "otion") == 0)
                                return &fieldGeneratorEmotion;
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "ror", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[6]), "ata") == 0)
                                            return &fieldGeneratorErrorData;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[6]), "ype") == 0)
                                            return &fieldGeneratorErrorType;
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
                case 'H':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'T':
                            if (strcmp(&(field_name[2]), "MLData") == 0)
                                return &fieldGeneratorHTMLData;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nts") == 0)
                                return &fieldGeneratorHints;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "on") == 0)
                                return &fieldGeneratorIcon;
                            break;
                        case 's':
                            if (strcmp(&(field_name[2]), "Repeat") == 0)
                                return &fieldGeneratorIsRepeat;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utputOverrideDiagnostics") == 0)
                        return &fieldGeneratorOutputOverrideDiagnostics;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "review") == 0)
                        return &fieldGeneratorPreview;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'q':
                                if (strncmp(&(field_name[3]), "uiredFeatures", 13) == 0)
                                  {
                                    switch ((unsigned char)(field_name[16]))
                                      {
                                        case 0:
                                            return &fieldGeneratorRequiredFeatures;
                                        case 'S':
                                            if (strcmp(&(field_name[17]), "upportedResult") == 0)
                                                return &fieldGeneratorRequiredFeaturesSupportedResult;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 's':
                                if (strncmp(&(field_name[3]), "ponseAudio", 10) == 0)
                                  {
                                    switch ((unsigned char)(field_name[13]))
                                      {
                                        case 'B':
                                            if (strcmp(&(field_name[14]), "ytes") == 0)
                                                return &fieldGeneratorResponseAudioBytes;
                                            break;
                                        case 'E':
                                            switch ((unsigned char)(field_name[14]))
                                              {
                                                case 'n':
                                                    if (strcmp(&(field_name[15]), "coding") == 0)
                                                        return &fieldGeneratorResponseAudioEncoding;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(field_name[15]), "ror") == 0)
                                                        return &fieldGeneratorResponseAudioError;
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
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ndBack") == 0)
                                return &fieldGeneratorSendBack;
                            break;
                        case 'p':
                            if (strncmp(&(field_name[2]), "okenResponse", 12) == 0)
                              {
                                switch ((unsigned char)(field_name[14]))
                                  {
                                    case 0:
                                        return &fieldGeneratorSpokenResponse;
                                    case 'L':
                                        if (strcmp(&(field_name[15]), "ong") == 0)
                                            return &fieldGeneratorSpokenResponseLong;
                                        break;
                                    case 'S':
                                        if (strncmp(&(field_name[15]), "SML", 3) == 0)
                                          {
                                            switch ((unsigned char)(field_name[18]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorSpokenResponseSSML;
                                                case 'L':
                                                    if (strcmp(&(field_name[19]), "ong") == 0)
                                                        return &fieldGeneratorSpokenResponseSSMLLong;
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
                case 'T':
                    if (strncmp(&(field_name[1]), "emplate", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[9]), "ata") == 0)
                                    return &fieldGeneratorTemplateData;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[9]), "ame") == 0)
                                    return &fieldGeneratorTemplateName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strcmp(&(field_name[2]), "derstandingConfidence") == 0)
                                return &fieldGeneratorUnderstandingConfidence;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "loadedTerrierDiagnostics") == 0)
                                return &fieldGeneratorUploadedTerrierDiagnostics;
                            break;
                        case 's':
                            if (strcmp(&(field_name[2]), "erVisibleMode") == 0)
                                return &fieldGeneratorUserVisibleMode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "iewType") == 0)
                        return &fieldGeneratorViewType;
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "rittenResponse", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 0:
                                return &fieldGeneratorWrittenResponse;
                            case 'L':
                                if (strcmp(&(field_name[16]), "ong") == 0)
                                    return &fieldGeneratorWrittenResponseLong;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpokenResponse("field \"SpokenResponse\" of the CommandResult class"), fieldGeneratorSpokenResponseLong("field \"SpokenResponseLong\" of the CommandResult class"), fieldGeneratorWrittenResponse("field \"WrittenResponse\" of the CommandResult class"), fieldGeneratorWrittenResponseLong("field \"WrittenResponseLong\" of the CommandResult class"), fieldGeneratorSpokenResponseSSML("field \"SpokenResponseSSML\" of the CommandResult class"), fieldGeneratorSpokenResponseSSMLLong("field \"SpokenResponseSSMLLong\" of the CommandResult class"), fieldGeneratorAutoListen("field \"AutoListen\" of the CommandResult class"), fieldGeneratorUserVisibleMode("field \"UserVisibleMode\" of the CommandResult class"), fieldGeneratorIsRepeat("field \"IsRepeat\" of the CommandResult class"), fieldGeneratorAdditionalInformation("field \"AdditionalInformation\" of the CommandResult class", ignore_extras), fieldGeneratorConversationState("field \"ConversationState\" of the CommandResult class", ignore_extras), fieldGeneratorViewType("field \"ViewType\" of the CommandResult class"), fieldGeneratorTemplateName("field \"TemplateName\" of the CommandResult class"), fieldGeneratorTemplateData("field \"TemplateData\" of the CommandResult class", ignore_extras), fieldGeneratorCombiningTemplateData("field \"CombiningTemplateData\" of the CommandResult class", ignore_extras), fieldGeneratorPreview("field \"Preview\" of the CommandResult class", ignore_extras), fieldGeneratorHTMLData("field \"HTMLData\" of the CommandResult class", ignore_extras), fieldGeneratorHints("field \"Hints\" of the CommandResult class", ignore_extras), fieldGeneratorEmotion("field \"Emotion\" of the CommandResult class", ignore_extras), fieldGeneratorIcon("field \"Icon\" of the CommandResult class", ignore_extras), fieldGeneratorResponseAudioBytes("field \"ResponseAudioBytes\" of the CommandResult class"), fieldGeneratorResponseAudioEncoding("field \"ResponseAudioEncoding\" of the CommandResult class"), fieldGeneratorResponseAudioError("field \"ResponseAudioError\" of the CommandResult class"), fieldGeneratorOutputOverrideDiagnostics("field \"OutputOverrideDiagnostics\" of the CommandResult class"), fieldGeneratorUploadedTerrierDiagnostics("field \"UploadedTerrierDiagnostics\" of the CommandResult class"), fieldGeneratorRequiredFeatures("field \"RequiredFeatures\" of the CommandResult class"), fieldGeneratorClientActionSucceededResult("field \"ClientActionSucceededResult\" of the CommandResult class", ignore_extras), fieldGeneratorClientActionFailedResult("field \"ClientActionFailedResult\" of the CommandResult class", ignore_extras), fieldGeneratorRequiredFeaturesSupportedResult("field \"RequiredFeaturesSupportedResult\" of the CommandResult class", ignore_extras), fieldGeneratorSendBack("field \"SendBack\" of the CommandResult class"), fieldGeneratorUnderstandingConfidence("field \"UnderstandingConfidence\" of the CommandResult class"), fieldGeneratorErrorType("field \"ErrorType\" of the CommandResult class"), fieldGeneratorErrorData("field \"ErrorData\" of the CommandResult class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"CommandKind\" of the CommandResult class")
          {
            set_what("the CommandResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpokenResponse.reset();
            fieldGeneratorSpokenResponseLong.reset();
            fieldGeneratorWrittenResponse.reset();
            fieldGeneratorWrittenResponseLong.reset();
            fieldGeneratorSpokenResponseSSML.reset();
            fieldGeneratorSpokenResponseSSMLLong.reset();
            fieldGeneratorAutoListen.reset();
            fieldGeneratorUserVisibleMode.reset();
            fieldGeneratorIsRepeat.reset();
            fieldGeneratorAdditionalInformation.reset();
            fieldGeneratorConversationState.reset();
            fieldGeneratorViewType.reset();
            fieldGeneratorTemplateName.reset();
            fieldGeneratorTemplateData.reset();
            fieldGeneratorCombiningTemplateData.reset();
            fieldGeneratorPreview.reset();
            fieldGeneratorHTMLData.reset();
            fieldGeneratorHints.reset();
            fieldGeneratorEmotion.reset();
            fieldGeneratorIcon.reset();
            fieldGeneratorResponseAudioBytes.reset();
            fieldGeneratorResponseAudioEncoding.reset();
            fieldGeneratorResponseAudioError.reset();
            fieldGeneratorOutputOverrideDiagnostics.reset();
            fieldGeneratorUploadedTerrierDiagnostics.reset();
            fieldGeneratorRequiredFeatures.reset();
            fieldGeneratorClientActionSucceededResult.reset();
            fieldGeneratorClientActionFailedResult.reset();
            fieldGeneratorRequiredFeaturesSupportedResult.reset();
            fieldGeneratorSendBack.reset();
            fieldGeneratorUnderstandingConfidence.reset();
            fieldGeneratorErrorType.reset();
            fieldGeneratorErrorData.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static CommandResultJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* COMMANDRESULTJSON_H */
