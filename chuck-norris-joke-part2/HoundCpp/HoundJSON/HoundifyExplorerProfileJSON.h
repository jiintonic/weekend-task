/* file "HoundifyExplorerProfileJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOUNDIFYEXPLORERPROFILEJSON_H
#define HOUNDIFYEXPLORERPROFILEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "RequestInfoJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HoundifyExplorerProfileJSON : public ReferenceCounted
  {
  public:
    enum TypePartialTranscriptionDisplayAction
      {
        PartialTranscriptionDisplayAction_DisplayTextOverWrite,
        PartialTranscriptionDisplayAction_DisplayTextNoOverWrite,
        PartialTranscriptionDisplayAction_DisplayJSONFull,
        PartialTranscriptionDisplayAction_None
      };

    static TypePartialTranscriptionDisplayAction  stringToPartialTranscriptionDisplayAction(const char *chars);
    static const char * stringFromPartialTranscriptionDisplayAction(TypePartialTranscriptionDisplayAction the_enum);

  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasClientID;
    std::string storeClientID;
    bool flagHasClientKey;
    std::string storeClientKey;
    bool flagHasUserID;
    std::string storeUserID;
    bool flagHasTextQueryBaseURL;
    std::string storeTextQueryBaseURL;
    bool flagHasVoiceQueryURL;
    std::string storeVoiceQueryURL;
    bool flagHasExtraRequestInfo;
    RequestInfoJSON * storeExtraRequestInfo;
    bool flagHasPluginFiles;
    std::vector< std::string > storePluginFiles;
    bool flagHasPartialTranscriptionDisplayAction;
    TypePartialTranscriptionDisplayAction storePartialTranscriptionDisplayAction;
    bool flagHasVoiceInputFileChunkByteCount;
    OInteger storeVoiceInputFileChunkByteCount;
    bool flagHasVoiceInputFileChunkDelaySeconds;
    double storeVoiceInputFileChunkDelaySeconds;
    std::string textStoreVoiceInputFileChunkDelaySeconds;
    bool flagHasAudioInputToUse;
    std::string storeAudioInputToUse;
    bool flagHasAudioOutputToUse;
    std::string storeAudioOutputToUse;
    bool flagHasOutputAudioDecoderToUse;
    std::string storeOutputAudioDecoderToUse;
    bool flagHasTextToSpeechToUse;
    std::string storeTextToSpeechToUse;
    bool flagHasClientDomainUnitsToUse;
    std::vector< std::string > storeClientDomainUnitsToUse;
    bool flagHasListenStartSoundFile;
    std::string storeListenStartSoundFile;
    bool flagHasListenStopSoundFile;
    std::string storeListenStopSoundFile;
    bool flagHasLongStringFieldsToLimit;
    std::vector< std::string > storeLongStringFieldsToLimit;
    bool flagHasLongStringFieldByteLimit;
    OInteger storeLongStringFieldByteLimit;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HoundifyExplorerProfileJSON(const HoundifyExplorerProfileJSON &);
    HoundifyExplorerProfileJSON & operator=(const HoundifyExplorerProfileJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientKey(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTextQueryBaseURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVoiceQueryURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExtraRequestInfo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPluginFiles(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartialTranscriptionDisplayAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVoiceInputFileChunkByteCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVoiceInputFileChunkDelaySeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAudioInputToUse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAudioOutputToUse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputAudioDecoderToUse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTextToSpeechToUse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientDomainUnitsToUse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONListenStartSoundFile(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONListenStopSoundFile(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongStringFieldsToLimit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongStringFieldByteLimit(JSONValue *json_value, bool ignore_extras = false);


  public:
    HoundifyExplorerProfileJSON(void);
    virtual ~HoundifyExplorerProfileJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasClientID(void) const;
    std::string  getClientID(void);
    const std::string  getClientID(void) const;
    bool  hasClientKey(void) const;
    std::string  getClientKey(void);
    const std::string  getClientKey(void) const;
    bool  hasUserID(void) const;
    std::string  getUserID(void);
    const std::string  getUserID(void) const;
    bool  hasTextQueryBaseURL(void) const;
    std::string  getTextQueryBaseURL(void);
    const std::string  getTextQueryBaseURL(void) const;
    bool  hasVoiceQueryURL(void) const;
    std::string  getVoiceQueryURL(void);
    const std::string  getVoiceQueryURL(void) const;
    bool  hasExtraRequestInfo(void) const;
    RequestInfoJSON *  getExtraRequestInfo(void);
    const RequestInfoJSON *  getExtraRequestInfo(void) const;
    bool  hasPluginFiles(void) const;
    size_t  countOfPluginFiles(void) const;
    std::string  elementOfPluginFiles(size_t element_num);
    const std::string  elementOfPluginFiles(size_t element_num) const;
    std::vector< std::string >  getPluginFiles(void);
    const std::vector< std::string >  getPluginFiles(void) const;
    bool  hasPartialTranscriptionDisplayAction(void) const;
    TypePartialTranscriptionDisplayAction  getPartialTranscriptionDisplayAction(void);
    const TypePartialTranscriptionDisplayAction  getPartialTranscriptionDisplayAction(void) const;
    const char * getPartialTranscriptionDisplayActionAsChars(void) const;
    std::string  getPartialTranscriptionDisplayActionAsString(void) const;
    bool  hasVoiceInputFileChunkByteCount(void) const;
    OInteger  getVoiceInputFileChunkByteCount(void);
    const OInteger  getVoiceInputFileChunkByteCount(void) const;
    bool  hasVoiceInputFileChunkDelaySeconds(void) const;
    double  getVoiceInputFileChunkDelaySeconds(void);
    const double  getVoiceInputFileChunkDelaySeconds(void) const;
    std::string  getVoiceInputFileChunkDelaySecondsAsText(void) const;
    bool  hasAudioInputToUse(void) const;
    std::string  getAudioInputToUse(void);
    const std::string  getAudioInputToUse(void) const;
    bool  hasAudioOutputToUse(void) const;
    std::string  getAudioOutputToUse(void);
    const std::string  getAudioOutputToUse(void) const;
    bool  hasOutputAudioDecoderToUse(void) const;
    std::string  getOutputAudioDecoderToUse(void);
    const std::string  getOutputAudioDecoderToUse(void) const;
    bool  hasTextToSpeechToUse(void) const;
    std::string  getTextToSpeechToUse(void);
    const std::string  getTextToSpeechToUse(void) const;
    bool  hasClientDomainUnitsToUse(void) const;
    size_t  countOfClientDomainUnitsToUse(void) const;
    std::string  elementOfClientDomainUnitsToUse(size_t element_num);
    const std::string  elementOfClientDomainUnitsToUse(size_t element_num) const;
    std::vector< std::string >  getClientDomainUnitsToUse(void);
    const std::vector< std::string >  getClientDomainUnitsToUse(void) const;
    bool  hasListenStartSoundFile(void) const;
    std::string  getListenStartSoundFile(void);
    const std::string  getListenStartSoundFile(void) const;
    bool  hasListenStopSoundFile(void) const;
    std::string  getListenStopSoundFile(void);
    const std::string  getListenStopSoundFile(void) const;
    bool  hasLongStringFieldsToLimit(void) const;
    size_t  countOfLongStringFieldsToLimit(void) const;
    std::string  elementOfLongStringFieldsToLimit(size_t element_num);
    const std::string  elementOfLongStringFieldsToLimit(size_t element_num) const;
    std::vector< std::string >  getLongStringFieldsToLimit(void);
    const std::vector< std::string >  getLongStringFieldsToLimit(void) const;
    bool  hasLongStringFieldByteLimit(void) const;
    OInteger  getLongStringFieldByteLimit(void);
    const OInteger  getLongStringFieldByteLimit(void) const;

    virtual size_t extraHoundifyExplorerProfileComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHoundifyExplorerProfileComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHoundifyExplorerProfileComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHoundifyExplorerProfileComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHoundifyExplorerProfileLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHoundifyExplorerProfileLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
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
    void setClientKey(std::string new_value)
      {
        flagHasClientKey = true;
        storeClientKey = new_value;
      }
    void unsetClientKey(void)
      {
        flagHasClientKey = false;
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
    void setTextQueryBaseURL(std::string new_value)
      {
        flagHasTextQueryBaseURL = true;
        storeTextQueryBaseURL = new_value;
      }
    void unsetTextQueryBaseURL(void)
      {
        flagHasTextQueryBaseURL = false;
      }
    void setVoiceQueryURL(std::string new_value)
      {
        flagHasVoiceQueryURL = true;
        storeVoiceQueryURL = new_value;
      }
    void unsetVoiceQueryURL(void)
      {
        flagHasVoiceQueryURL = false;
      }
    void setExtraRequestInfo(RequestInfoJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasExtraRequestInfo)
          {
            storeExtraRequestInfo->remove_reference();
          }
        flagHasExtraRequestInfo = true;
        storeExtraRequestInfo = new_value;
      }
    void unsetExtraRequestInfo(void)
      {
        if (flagHasExtraRequestInfo)
          {
            storeExtraRequestInfo->remove_reference();
          }
        flagHasExtraRequestInfo = false;
      }
    void initPluginFiles(void)
      {
        flagHasPluginFiles = true;
        storePluginFiles.clear();
      }
    void appendPluginFiles(std::string to_append)
      {
        if (!flagHasPluginFiles)
          {
            flagHasPluginFiles = true;
            storePluginFiles.clear();
          }
        assert(flagHasPluginFiles);
        storePluginFiles.push_back(to_append);
      }
    void unsetPluginFiles(void)
      {
        flagHasPluginFiles = false;
        storePluginFiles.clear();
      }
    void setPartialTranscriptionDisplayAction(TypePartialTranscriptionDisplayAction new_value)
      {
        flagHasPartialTranscriptionDisplayAction = true;
        storePartialTranscriptionDisplayAction = new_value;
      }
    void setPartialTranscriptionDisplayAction(const char *chars)
      {
        setPartialTranscriptionDisplayAction(stringToPartialTranscriptionDisplayAction(chars));
      }
    void setPartialTranscriptionDisplayAction(std::string the_string)
      {
        setPartialTranscriptionDisplayAction(stringToPartialTranscriptionDisplayAction(the_string.c_str()));
      }
    void unsetPartialTranscriptionDisplayAction(void)
      {
        flagHasPartialTranscriptionDisplayAction = false;
      }
    void setVoiceInputFileChunkByteCount(OInteger new_value)
      {
        flagHasVoiceInputFileChunkByteCount = true;
        if (new_value < 0)
            throw("The value for field VoiceInputFileChunkByteCount of HoundifyExplorerProfileJSON is less than the lower bound (0) for that field.");
        storeVoiceInputFileChunkByteCount = new_value;
      }
    void unsetVoiceInputFileChunkByteCount(void)
      {
        flagHasVoiceInputFileChunkByteCount = false;
      }
    void setVoiceInputFileChunkDelaySeconds(double new_value)
      {
        flagHasVoiceInputFileChunkDelaySeconds = true;
        if (new_value < 0)
            throw("The value for field VoiceInputFileChunkDelaySeconds of HoundifyExplorerProfileJSON is less than the lower bound (0) for that field.");
        storeVoiceInputFileChunkDelaySeconds = new_value;
        textStoreVoiceInputFileChunkDelaySeconds = "";
      }
    void setVoiceInputFileChunkDelaySecondsText(std::string new_value)
      {
        flagHasVoiceInputFileChunkDelaySeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field VoiceInputFileChunkDelaySeconds of HoundifyExplorerProfileJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field VoiceInputFileChunkDelaySeconds of HoundifyExplorerProfileJSON is less than the lower bound (0) for that field.");
        textStoreVoiceInputFileChunkDelaySeconds = new_value;
      }
    void unsetVoiceInputFileChunkDelaySeconds(void)
      {
        flagHasVoiceInputFileChunkDelaySeconds = false;
      }
    void setAudioInputToUse(std::string new_value)
      {
        flagHasAudioInputToUse = true;
        storeAudioInputToUse = new_value;
      }
    void unsetAudioInputToUse(void)
      {
        flagHasAudioInputToUse = false;
      }
    void setAudioOutputToUse(std::string new_value)
      {
        flagHasAudioOutputToUse = true;
        storeAudioOutputToUse = new_value;
      }
    void unsetAudioOutputToUse(void)
      {
        flagHasAudioOutputToUse = false;
      }
    void setOutputAudioDecoderToUse(std::string new_value)
      {
        flagHasOutputAudioDecoderToUse = true;
        storeOutputAudioDecoderToUse = new_value;
      }
    void unsetOutputAudioDecoderToUse(void)
      {
        flagHasOutputAudioDecoderToUse = false;
      }
    void setTextToSpeechToUse(std::string new_value)
      {
        flagHasTextToSpeechToUse = true;
        storeTextToSpeechToUse = new_value;
      }
    void unsetTextToSpeechToUse(void)
      {
        flagHasTextToSpeechToUse = false;
      }
    void initClientDomainUnitsToUse(void)
      {
        flagHasClientDomainUnitsToUse = true;
        storeClientDomainUnitsToUse.clear();
      }
    void appendClientDomainUnitsToUse(std::string to_append)
      {
        if (!flagHasClientDomainUnitsToUse)
          {
            flagHasClientDomainUnitsToUse = true;
            storeClientDomainUnitsToUse.clear();
          }
        assert(flagHasClientDomainUnitsToUse);
        storeClientDomainUnitsToUse.push_back(to_append);
      }
    void unsetClientDomainUnitsToUse(void)
      {
        flagHasClientDomainUnitsToUse = false;
        storeClientDomainUnitsToUse.clear();
      }
    void setListenStartSoundFile(std::string new_value)
      {
        flagHasListenStartSoundFile = true;
        storeListenStartSoundFile = new_value;
      }
    void unsetListenStartSoundFile(void)
      {
        flagHasListenStartSoundFile = false;
      }
    void setListenStopSoundFile(std::string new_value)
      {
        flagHasListenStopSoundFile = true;
        storeListenStopSoundFile = new_value;
      }
    void unsetListenStopSoundFile(void)
      {
        flagHasListenStopSoundFile = false;
      }
    void initLongStringFieldsToLimit(void)
      {
        flagHasLongStringFieldsToLimit = true;
        storeLongStringFieldsToLimit.clear();
      }
    void appendLongStringFieldsToLimit(std::string to_append)
      {
        if (!flagHasLongStringFieldsToLimit)
          {
            flagHasLongStringFieldsToLimit = true;
            storeLongStringFieldsToLimit.clear();
          }
        assert(flagHasLongStringFieldsToLimit);
        storeLongStringFieldsToLimit.push_back(to_append);
      }
    void unsetLongStringFieldsToLimit(void)
      {
        flagHasLongStringFieldsToLimit = false;
        storeLongStringFieldsToLimit.clear();
      }
    void setLongStringFieldByteLimit(OInteger new_value)
      {
        flagHasLongStringFieldByteLimit = true;
        if (new_value < 0)
            throw("The value for field LongStringFieldByteLimit of HoundifyExplorerProfileJSON is less than the lower bound (0) for that field.");
        storeLongStringFieldByteLimit = new_value;
      }
    void unsetLongStringFieldByteLimit(void)
      {
        flagHasLongStringFieldByteLimit = false;
      }

    virtual void extraHoundifyExplorerProfileAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHoundifyExplorerProfileSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHoundifyExplorerProfileLookup(key);
        if (old_field == NULL)
          {
            extraHoundifyExplorerProfileAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        assert(flagHasClientID);
        handler->start_pair("ClientID");
        handler->string_value(storeClientID);
        assert(flagHasClientKey);
        handler->start_pair("ClientKey");
        handler->string_value(storeClientKey);
        assert(flagHasUserID);
        handler->start_pair("UserID");
        handler->string_value(storeUserID);
        if (flagHasTextQueryBaseURL)
          {
            handler->start_pair("TextQueryBaseURL");
            handler->string_value(storeTextQueryBaseURL);
          }
        if (flagHasVoiceQueryURL)
          {
            handler->start_pair("VoiceQueryURL");
            handler->string_value(storeVoiceQueryURL);
          }
        if (flagHasExtraRequestInfo)
          {
            handler->start_pair("ExtraRequestInfo");
            storeExtraRequestInfo->write_as_json(handler);
          }
        if (flagHasPluginFiles)
          {
            handler->start_pair("PluginFiles");
            assert(storePluginFiles.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePluginFiles.size(); ++num1)
              {
                handler->string_value(storePluginFiles[num1]);
              }
            handler->finish_array();
          }
        if (flagHasPartialTranscriptionDisplayAction)
          {
            handler->start_pair("PartialTranscriptionDisplayAction");
            switch (storePartialTranscriptionDisplayAction)
              {
                case PartialTranscriptionDisplayAction_DisplayTextOverWrite:
                    handler->string_value("DisplayTextOverWrite");
                    break;
                case PartialTranscriptionDisplayAction_DisplayTextNoOverWrite:
                    handler->string_value("DisplayTextNoOverWrite");
                    break;
                case PartialTranscriptionDisplayAction_DisplayJSONFull:
                    handler->string_value("DisplayJSONFull");
                    break;
                case PartialTranscriptionDisplayAction_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasVoiceInputFileChunkByteCount)
          {
            handler->start_pair("VoiceInputFileChunkByteCount");
            handler->number_value(storeVoiceInputFileChunkByteCount.get_o_integer());
          }
        if (flagHasVoiceInputFileChunkDelaySeconds)
          {
            handler->start_pair("VoiceInputFileChunkDelaySeconds");
            if (textStoreVoiceInputFileChunkDelaySeconds != "")
                handler->number_value(textStoreVoiceInputFileChunkDelaySeconds.c_str());
            else if (((double)(long int)storeVoiceInputFileChunkDelaySeconds) == storeVoiceInputFileChunkDelaySeconds)
                handler->number_value((long int)storeVoiceInputFileChunkDelaySeconds);
            else
                handler->number_value(storeVoiceInputFileChunkDelaySeconds);
          }
        if (flagHasAudioInputToUse)
          {
            handler->start_pair("AudioInputToUse");
            handler->string_value(storeAudioInputToUse);
          }
        if (flagHasAudioOutputToUse)
          {
            handler->start_pair("AudioOutputToUse");
            handler->string_value(storeAudioOutputToUse);
          }
        if (flagHasOutputAudioDecoderToUse)
          {
            handler->start_pair("OutputAudioDecoderToUse");
            handler->string_value(storeOutputAudioDecoderToUse);
          }
        if (flagHasTextToSpeechToUse)
          {
            handler->start_pair("TextToSpeechToUse");
            handler->string_value(storeTextToSpeechToUse);
          }
        if (flagHasClientDomainUnitsToUse)
          {
            handler->start_pair("ClientDomainUnitsToUse");
            assert(storeClientDomainUnitsToUse.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeClientDomainUnitsToUse.size(); ++num2)
              {
                handler->string_value(storeClientDomainUnitsToUse[num2]);
              }
            handler->finish_array();
          }
        if (flagHasListenStartSoundFile)
          {
            handler->start_pair("ListenStartSoundFile");
            handler->string_value(storeListenStartSoundFile);
          }
        if (flagHasListenStopSoundFile)
          {
            handler->start_pair("ListenStopSoundFile");
            handler->string_value(storeListenStopSoundFile);
          }
        if (flagHasLongStringFieldsToLimit)
          {
            handler->start_pair("LongStringFieldsToLimit");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeLongStringFieldsToLimit.size(); ++num3)
              {
                handler->string_value(storeLongStringFieldsToLimit[num3]);
              }
            handler->finish_array();
          }
        if (flagHasLongStringFieldByteLimit)
          {
            handler->start_pair("LongStringFieldByteLimit");
            handler->number_value(storeLongStringFieldByteLimit.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        if (!(hasClientID()))
          {
            return "When parsing the object for %what%, the \"ClientID\" field was missing.";
          }
        if (!(hasClientKey()))
          {
            return "When parsing the object for %what%, the \"ClientKey\" field was missing.";
          }
        if (!(hasUserID()))
          {
            return "When parsing the object for %what%, the \"UserID\" field was missing.";
          }
        return NULL;
      }

    static HoundifyExplorerProfileJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HoundifyExplorerProfileJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HoundifyExplorerProfileJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundifyExplorerProfileJSON>, HoundifyExplorerProfileJSON *, bool> generator("Type HoundifyExplorerProfile", ignore_extras);
            parse_json_value(text, "Text for HoundifyExplorerProfileJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HoundifyExplorerProfileJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HoundifyExplorerProfileJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundifyExplorerProfileJSON>, HoundifyExplorerProfileJSON *, bool> generator("Type HoundifyExplorerProfile", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorClientID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorClientKey;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUserID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTextQueryBaseURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorVoiceQueryURL;
        JSONHoldingGenerator<RequestInfoJSON::Generator, RCHandle<RequestInfoJSON>, RequestInfoJSON *, bool > fieldGeneratorExtraRequestInfo;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPluginFiles;
    class FieldGeneratorPartialTranscriptionDisplayAction : public JSONStringGenerator
          {
          protected:
            FieldGeneratorPartialTranscriptionDisplayAction(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorPartialTranscriptionDisplayAction(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToPartialTranscriptionDisplayAction(result));
              }
            virtual void handle_result(TypePartialTranscriptionDisplayAction result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorPartialTranscriptionDisplayAction, TypePartialTranscriptionDisplayAction, TypePartialTranscriptionDisplayAction > fieldGeneratorPartialTranscriptionDisplayAction;
        static char lowerBoundVoiceInputFileChunkByteCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundVoiceInputFileChunkByteCount>, OInteger, o_integer > fieldGeneratorVoiceInputFileChunkByteCount;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorVoiceInputFileChunkDelaySeconds;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAudioInputToUse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAudioOutputToUse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputAudioDecoderToUse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTextToSpeechToUse;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorClientDomainUnitsToUse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorListenStartSoundFile;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorListenStopSoundFile;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLongStringFieldsToLimit;
        static char lowerBoundLongStringFieldByteLimit[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLongStringFieldByteLimit>, OInteger, o_integer > fieldGeneratorLongStringFieldByteLimit;
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
            HoundifyExplorerProfileJSON *result = new HoundifyExplorerProfileJSON();
            assert(result != NULL);
            RCHandle<HoundifyExplorerProfileJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHoundifyExplorerProfileAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HoundifyExplorerProfileJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorClientID.have_value)
              {
                result->setClientID(fieldGeneratorClientID.value);
                fieldGeneratorClientID.have_value = false;
              }
            else if (!(result->hasClientID()))
              {
                error("When parsing the object for %what%, the \"ClientID\" field was missing.");
              }
            if (fieldGeneratorClientKey.have_value)
              {
                result->setClientKey(fieldGeneratorClientKey.value);
                fieldGeneratorClientKey.have_value = false;
              }
            else if (!(result->hasClientKey()))
              {
                error("When parsing the object for %what%, the \"ClientKey\" field was missing.");
              }
            if (fieldGeneratorUserID.have_value)
              {
                result->setUserID(fieldGeneratorUserID.value);
                fieldGeneratorUserID.have_value = false;
              }
            else if (!(result->hasUserID()))
              {
                error("When parsing the object for %what%, the \"UserID\" field was missing.");
              }
            if (fieldGeneratorTextQueryBaseURL.have_value)
              {
                result->setTextQueryBaseURL(fieldGeneratorTextQueryBaseURL.value);
                fieldGeneratorTextQueryBaseURL.have_value = false;
              }
            if (fieldGeneratorVoiceQueryURL.have_value)
              {
                result->setVoiceQueryURL(fieldGeneratorVoiceQueryURL.value);
                fieldGeneratorVoiceQueryURL.have_value = false;
              }
            if (fieldGeneratorExtraRequestInfo.have_value)
              {
                result->setExtraRequestInfo(fieldGeneratorExtraRequestInfo.value.referenced());
                fieldGeneratorExtraRequestInfo.have_value = false;
              }
            if (fieldGeneratorPluginFiles.have_value)
              {
                result->initPluginFiles();
                size_t count = fieldGeneratorPluginFiles.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPluginFiles(fieldGeneratorPluginFiles.value[num]);
                  }
                fieldGeneratorPluginFiles.value.clear();
                fieldGeneratorPluginFiles.have_value = false;
              }
            if (fieldGeneratorPartialTranscriptionDisplayAction.have_value)
              {
                result->setPartialTranscriptionDisplayAction(fieldGeneratorPartialTranscriptionDisplayAction.value);
                fieldGeneratorPartialTranscriptionDisplayAction.have_value = false;
              }
            if (fieldGeneratorVoiceInputFileChunkByteCount.have_value)
              {
                result->setVoiceInputFileChunkByteCount(fieldGeneratorVoiceInputFileChunkByteCount.value);
                fieldGeneratorVoiceInputFileChunkByteCount.have_value = false;
              }
            if (fieldGeneratorVoiceInputFileChunkDelaySeconds.have_value)
              {
                result->setVoiceInputFileChunkDelaySecondsText(fieldGeneratorVoiceInputFileChunkDelaySeconds.value);
                fieldGeneratorVoiceInputFileChunkDelaySeconds.have_value = false;
              }
            if (fieldGeneratorAudioInputToUse.have_value)
              {
                result->setAudioInputToUse(fieldGeneratorAudioInputToUse.value);
                fieldGeneratorAudioInputToUse.have_value = false;
              }
            if (fieldGeneratorAudioOutputToUse.have_value)
              {
                result->setAudioOutputToUse(fieldGeneratorAudioOutputToUse.value);
                fieldGeneratorAudioOutputToUse.have_value = false;
              }
            if (fieldGeneratorOutputAudioDecoderToUse.have_value)
              {
                result->setOutputAudioDecoderToUse(fieldGeneratorOutputAudioDecoderToUse.value);
                fieldGeneratorOutputAudioDecoderToUse.have_value = false;
              }
            if (fieldGeneratorTextToSpeechToUse.have_value)
              {
                result->setTextToSpeechToUse(fieldGeneratorTextToSpeechToUse.value);
                fieldGeneratorTextToSpeechToUse.have_value = false;
              }
            if (fieldGeneratorClientDomainUnitsToUse.have_value)
              {
                result->initClientDomainUnitsToUse();
                size_t count = fieldGeneratorClientDomainUnitsToUse.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendClientDomainUnitsToUse(fieldGeneratorClientDomainUnitsToUse.value[num]);
                  }
                fieldGeneratorClientDomainUnitsToUse.value.clear();
                fieldGeneratorClientDomainUnitsToUse.have_value = false;
              }
            if (fieldGeneratorListenStartSoundFile.have_value)
              {
                result->setListenStartSoundFile(fieldGeneratorListenStartSoundFile.value);
                fieldGeneratorListenStartSoundFile.have_value = false;
              }
            if (fieldGeneratorListenStopSoundFile.have_value)
              {
                result->setListenStopSoundFile(fieldGeneratorListenStopSoundFile.value);
                fieldGeneratorListenStopSoundFile.have_value = false;
              }
            if (fieldGeneratorLongStringFieldsToLimit.have_value)
              {
                result->initLongStringFieldsToLimit();
                size_t count = fieldGeneratorLongStringFieldsToLimit.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLongStringFieldsToLimit(fieldGeneratorLongStringFieldsToLimit.value[num]);
                  }
                fieldGeneratorLongStringFieldsToLimit.value.clear();
                fieldGeneratorLongStringFieldsToLimit.have_value = false;
              }
            if (fieldGeneratorLongStringFieldByteLimit.have_value)
              {
                result->setLongStringFieldByteLimit(fieldGeneratorLongStringFieldByteLimit.value);
                fieldGeneratorLongStringFieldByteLimit.have_value = false;
              }
          }
        virtual void handle_result(HoundifyExplorerProfileJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "udio", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[6]), "nputToUse") == 0)
                                    return &fieldGeneratorAudioInputToUse;
                                break;
                            case 'O':
                                if (strcmp(&(field_name[6]), "utputToUse") == 0)
                                    return &fieldGeneratorAudioOutputToUse;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "lient", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[7]), "omainUnitsToUse") == 0)
                                    return &fieldGeneratorClientDomainUnitsToUse;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[7]), "D") == 0)
                                    return &fieldGeneratorClientID;
                                break;
                            case 'K':
                                if (strcmp(&(field_name[7]), "ey") == 0)
                                    return &fieldGeneratorClientKey;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "xtraRequestInfo") == 0)
                        return &fieldGeneratorExtraRequestInfo;
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "stenSt", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[9]), "rtSoundFile") == 0)
                                            return &fieldGeneratorListenStartSoundFile;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[9]), "pSoundFile") == 0)
                                            return &fieldGeneratorListenStopSoundFile;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "ngStringField", 13) == 0)
                              {
                                switch ((unsigned char)(field_name[15]))
                                  {
                                    case 'B':
                                        if (strcmp(&(field_name[16]), "yteLimit") == 0)
                                            return &fieldGeneratorLongStringFieldByteLimit;
                                        break;
                                    case 's':
                                        if (strcmp(&(field_name[16]), "ToLimit") == 0)
                                            return &fieldGeneratorLongStringFieldsToLimit;
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
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utputAudioDecoderToUse") == 0)
                        return &fieldGeneratorOutputAudioDecoderToUse;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "rtialTranscriptionDisplayAction") == 0)
                                return &fieldGeneratorPartialTranscriptionDisplayAction;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "uginFiles") == 0)
                                return &fieldGeneratorPluginFiles;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "ext", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'Q':
                                if (strcmp(&(field_name[5]), "ueryBaseURL") == 0)
                                    return &fieldGeneratorTextQueryBaseURL;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[5]), "oSpeechToUse") == 0)
                                    return &fieldGeneratorTextToSpeechToUse;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serID") == 0)
                        return &fieldGeneratorUserID;
                    break;
                case 'V':
                    if (strncmp(&(field_name[1]), "oice", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'I':
                                if (strncmp(&(field_name[6]), "nputFileChunk", 13) == 0)
                                  {
                                    switch ((unsigned char)(field_name[19]))
                                      {
                                        case 'B':
                                            if (strcmp(&(field_name[20]), "yteCount") == 0)
                                                return &fieldGeneratorVoiceInputFileChunkByteCount;
                                            break;
                                        case 'D':
                                            if (strcmp(&(field_name[20]), "elaySeconds") == 0)
                                                return &fieldGeneratorVoiceInputFileChunkDelaySeconds;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'Q':
                                if (strcmp(&(field_name[6]), "ueryURL") == 0)
                                    return &fieldGeneratorVoiceQueryURL;
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
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the HoundifyExplorerProfile class"), fieldGeneratorClientID("field \"ClientID\" of the HoundifyExplorerProfile class"), fieldGeneratorClientKey("field \"ClientKey\" of the HoundifyExplorerProfile class"), fieldGeneratorUserID("field \"UserID\" of the HoundifyExplorerProfile class"), fieldGeneratorTextQueryBaseURL("field \"TextQueryBaseURL\" of the HoundifyExplorerProfile class"), fieldGeneratorVoiceQueryURL("field \"VoiceQueryURL\" of the HoundifyExplorerProfile class"), fieldGeneratorExtraRequestInfo("field \"ExtraRequestInfo\" of the HoundifyExplorerProfile class", ignore_extras), fieldGeneratorPluginFiles("field \"PluginFiles\" of the HoundifyExplorerProfile class"), fieldGeneratorPartialTranscriptionDisplayAction("field \"PartialTranscriptionDisplayAction\" of the HoundifyExplorerProfile class"), fieldGeneratorVoiceInputFileChunkByteCount("field \"VoiceInputFileChunkByteCount\" of the HoundifyExplorerProfile class"), fieldGeneratorVoiceInputFileChunkDelaySeconds("field \"VoiceInputFileChunkDelaySeconds\" of the HoundifyExplorerProfile class"), fieldGeneratorAudioInputToUse("field \"AudioInputToUse\" of the HoundifyExplorerProfile class"), fieldGeneratorAudioOutputToUse("field \"AudioOutputToUse\" of the HoundifyExplorerProfile class"), fieldGeneratorOutputAudioDecoderToUse("field \"OutputAudioDecoderToUse\" of the HoundifyExplorerProfile class"), fieldGeneratorTextToSpeechToUse("field \"TextToSpeechToUse\" of the HoundifyExplorerProfile class"), fieldGeneratorClientDomainUnitsToUse("field \"ClientDomainUnitsToUse\" of the HoundifyExplorerProfile class"), fieldGeneratorListenStartSoundFile("field \"ListenStartSoundFile\" of the HoundifyExplorerProfile class"), fieldGeneratorListenStopSoundFile("field \"ListenStopSoundFile\" of the HoundifyExplorerProfile class"), fieldGeneratorLongStringFieldsToLimit("field \"LongStringFieldsToLimit\" of the HoundifyExplorerProfile class"), fieldGeneratorLongStringFieldByteLimit("field \"LongStringFieldByteLimit\" of the HoundifyExplorerProfile class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HoundifyExplorerProfile class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorClientID.reset();
            fieldGeneratorClientKey.reset();
            fieldGeneratorUserID.reset();
            fieldGeneratorTextQueryBaseURL.reset();
            fieldGeneratorVoiceQueryURL.reset();
            fieldGeneratorExtraRequestInfo.reset();
            fieldGeneratorPluginFiles.reset();
            fieldGeneratorPartialTranscriptionDisplayAction.reset();
            fieldGeneratorVoiceInputFileChunkByteCount.reset();
            fieldGeneratorVoiceInputFileChunkDelaySeconds.reset();
            fieldGeneratorAudioInputToUse.reset();
            fieldGeneratorAudioOutputToUse.reset();
            fieldGeneratorOutputAudioDecoderToUse.reset();
            fieldGeneratorTextToSpeechToUse.reset();
            fieldGeneratorClientDomainUnitsToUse.reset();
            fieldGeneratorListenStartSoundFile.reset();
            fieldGeneratorListenStopSoundFile.reset();
            fieldGeneratorLongStringFieldsToLimit.reset();
            fieldGeneratorLongStringFieldByteLimit.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOUNDIFYEXPLORERPROFILEJSON_H */
