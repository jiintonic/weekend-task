/* file "HoundifyExplorerProfileJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HoundifyExplorerProfileJSON.h"

#include "HoundifyExplorerProfileJSON.h"


HoundifyExplorerProfileJSON::TypePartialTranscriptionDisplayAction HoundifyExplorerProfileJSON::stringToPartialTranscriptionDisplayAction(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strncmp(&(chars[1]), "isplay", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case 'J':
                        if (strcmp(&(chars[8]), "SONFull") == 0)
                            return PartialTranscriptionDisplayAction_DisplayJSONFull;
                        break;
                    case 'T':
                        if (strncmp(&(chars[8]), "ext", 3) == 0)
                          {
                            switch ((unsigned char)(chars[11]))
                              {
                                case 'N':
                                    if (strcmp(&(chars[12]), "oOverWrite") == 0)
                                        return PartialTranscriptionDisplayAction_DisplayTextNoOverWrite;
                                    break;
                                case 'O':
                                    if (strcmp(&(chars[12]), "verWrite") == 0)
                                        return PartialTranscriptionDisplayAction_DisplayTextOverWrite;
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
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return PartialTranscriptionDisplayAction_None;
            break;
        default:
            break;
      }
    throw("The value for field `PartialTranscriptionDisplayAction' is not one of the legal values.");
  }

const char *HoundifyExplorerProfileJSON::stringFromPartialTranscriptionDisplayAction(TypePartialTranscriptionDisplayAction the_enum)
  {
    switch (the_enum)
      {
        case PartialTranscriptionDisplayAction_DisplayTextOverWrite:
            return "DisplayTextOverWrite";
        case PartialTranscriptionDisplayAction_DisplayTextNoOverWrite:
            return "DisplayTextNoOverWrite";
        case PartialTranscriptionDisplayAction_DisplayJSONFull:
            return "DisplayJSONFull";
        case PartialTranscriptionDisplayAction_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

HoundifyExplorerProfileJSON::HoundifyExplorerProfileJSON(const HoundifyExplorerProfileJSON &)
  {
    assert(false);
  }

HoundifyExplorerProfileJSON &HoundifyExplorerProfileJSON::operator=(const HoundifyExplorerProfileJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundifyExplorerProfileJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of HoundifyExplorerProfileJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONClientID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ClientID of HoundifyExplorerProfileJSON is not a string.");
    setClientID(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONClientKey(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ClientKey of HoundifyExplorerProfileJSON is not a string.");
    setClientKey(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONUserID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UserID of HoundifyExplorerProfileJSON is not a string.");
    setUserID(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONTextQueryBaseURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TextQueryBaseURL of HoundifyExplorerProfileJSON is not a string.");
    setTextQueryBaseURL(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONVoiceQueryURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field VoiceQueryURL of HoundifyExplorerProfileJSON is not a string.");
    setVoiceQueryURL(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONExtraRequestInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RequestInfoJSON *convert_classy = RequestInfoJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setExtraRequestInfo(convert_classy);
    convert_classy->remove_reference();
  }

void HoundifyExplorerProfileJSON::fromJSONPluginFiles(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PluginFiles of HoundifyExplorerProfileJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PluginFiles of HoundifyExplorerProfileJSON has too few elements.");
    std::vector< std::string > vector_PluginFiles1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field PluginFiles of HoundifyExplorerProfileJSON is not a string.");
        vector_PluginFiles1[num1] = std::string(json_string->getData());
      }
    assert(vector_PluginFiles1.size() >= 1);
    initPluginFiles();
    for (size_t num4 = 0; num4 < vector_PluginFiles1.size(); ++num4)
        appendPluginFiles(vector_PluginFiles1[num4]);
    for (size_t num1 = 0; num1 < vector_PluginFiles1.size(); ++num1)
      {
      }
  }

void HoundifyExplorerProfileJSON::fromJSONPartialTranscriptionDisplayAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialTranscriptionDisplayAction of HoundifyExplorerProfileJSON is not a string.");
    TypePartialTranscriptionDisplayAction the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "isplay", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case 'J':
                        if (strcmp(&(json_string->getData()[8]), "SONFull") == 0)
                              {
                                the_enum = PartialTranscriptionDisplayAction_DisplayJSONFull;
                                goto enum_is_done;
                              }
                        break;
                    case 'T':
                        if (strncmp(&(json_string->getData()[8]), "ext", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[11]))
                              {
                                case 'N':
                                    if (strcmp(&(json_string->getData()[12]), "oOverWrite") == 0)
                                          {
                                            the_enum = PartialTranscriptionDisplayAction_DisplayTextNoOverWrite;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'O':
                                    if (strcmp(&(json_string->getData()[12]), "verWrite") == 0)
                                          {
                                            the_enum = PartialTranscriptionDisplayAction_DisplayTextOverWrite;
                                            goto enum_is_done;
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
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = PartialTranscriptionDisplayAction_None;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field PartialTranscriptionDisplayAction of HoundifyExplorerProfileJSON is not one of the legal strings.");
  enum_is_done:;
    setPartialTranscriptionDisplayAction(the_enum);
  }

void HoundifyExplorerProfileJSON::fromJSONVoiceInputFileChunkByteCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field VoiceInputFileChunkByteCount of HoundifyExplorerProfileJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field VoiceInputFileChunkByteCount of HoundifyExplorerProfileJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setVoiceInputFileChunkByteCount(extracted_integer);
  }

void HoundifyExplorerProfileJSON::fromJSONVoiceInputFileChunkDelaySeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field VoiceInputFileChunkDelaySeconds of HoundifyExplorerProfileJSON is not a number.");
          }
      }
    setVoiceInputFileChunkDelaySecondsText(the_rational_text);
  }

void HoundifyExplorerProfileJSON::fromJSONAudioInputToUse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AudioInputToUse of HoundifyExplorerProfileJSON is not a string.");
    setAudioInputToUse(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONAudioOutputToUse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AudioOutputToUse of HoundifyExplorerProfileJSON is not a string.");
    setAudioOutputToUse(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONOutputAudioDecoderToUse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OutputAudioDecoderToUse of HoundifyExplorerProfileJSON is not a string.");
    setOutputAudioDecoderToUse(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONTextToSpeechToUse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TextToSpeechToUse of HoundifyExplorerProfileJSON is not a string.");
    setTextToSpeechToUse(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONClientDomainUnitsToUse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ClientDomainUnitsToUse of HoundifyExplorerProfileJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ClientDomainUnitsToUse of HoundifyExplorerProfileJSON has too few elements.");
    std::vector< std::string > vector_ClientDomainUnitsToUse1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ClientDomainUnitsToUse of HoundifyExplorerProfileJSON is not a string.");
        vector_ClientDomainUnitsToUse1[num1] = std::string(json_string->getData());
      }
    assert(vector_ClientDomainUnitsToUse1.size() >= 1);
    initClientDomainUnitsToUse();
    for (size_t num5 = 0; num5 < vector_ClientDomainUnitsToUse1.size(); ++num5)
        appendClientDomainUnitsToUse(vector_ClientDomainUnitsToUse1[num5]);
    for (size_t num1 = 0; num1 < vector_ClientDomainUnitsToUse1.size(); ++num1)
      {
      }
  }

void HoundifyExplorerProfileJSON::fromJSONListenStartSoundFile(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ListenStartSoundFile of HoundifyExplorerProfileJSON is not a string.");
    setListenStartSoundFile(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONListenStopSoundFile(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ListenStopSoundFile of HoundifyExplorerProfileJSON is not a string.");
    setListenStopSoundFile(std::string(json_string->getData()));
  }

void HoundifyExplorerProfileJSON::fromJSONLongStringFieldsToLimit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LongStringFieldsToLimit of HoundifyExplorerProfileJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_LongStringFieldsToLimit1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field LongStringFieldsToLimit of HoundifyExplorerProfileJSON is not a string.");
        vector_LongStringFieldsToLimit1[num1] = std::string(json_string->getData());
      }
    initLongStringFieldsToLimit();
    for (size_t num6 = 0; num6 < vector_LongStringFieldsToLimit1.size(); ++num6)
        appendLongStringFieldsToLimit(vector_LongStringFieldsToLimit1[num6]);
    for (size_t num1 = 0; num1 < vector_LongStringFieldsToLimit1.size(); ++num1)
      {
      }
  }

void HoundifyExplorerProfileJSON::fromJSONLongStringFieldByteLimit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LongStringFieldByteLimit of HoundifyExplorerProfileJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LongStringFieldByteLimit of HoundifyExplorerProfileJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLongStringFieldByteLimit(extracted_integer);
  }

HoundifyExplorerProfileJSON::HoundifyExplorerProfileJSON(void) :
        flagHasName(false),
        flagHasClientID(false),
        flagHasClientKey(false),
        flagHasUserID(false),
        flagHasTextQueryBaseURL(false),
        flagHasVoiceQueryURL(false),
        flagHasExtraRequestInfo(false),
        flagHasPluginFiles(false),
        flagHasPartialTranscriptionDisplayAction(false),
        flagHasVoiceInputFileChunkByteCount(false),
        flagHasVoiceInputFileChunkDelaySeconds(false),
        flagHasAudioInputToUse(false),
        flagHasAudioOutputToUse(false),
        flagHasOutputAudioDecoderToUse(false),
        flagHasTextToSpeechToUse(false),
        flagHasClientDomainUnitsToUse(false),
        flagHasListenStartSoundFile(false),
        flagHasListenStopSoundFile(false),
        flagHasLongStringFieldsToLimit(false),
        flagHasLongStringFieldByteLimit(false)
  {
    extraIndex = create_string_index();
  }

HoundifyExplorerProfileJSON::~HoundifyExplorerProfileJSON(void)
  {
    if (flagHasExtraRequestInfo)
      {
        storeExtraRequestInfo->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundifyExplorerProfileJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string HoundifyExplorerProfileJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string HoundifyExplorerProfileJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool HoundifyExplorerProfileJSON::hasClientID(void) const
  {
    return flagHasClientID;
  }

std::string HoundifyExplorerProfileJSON::getClientID(void)
  {
    assert(flagHasClientID);
    return storeClientID;
  }

const std::string HoundifyExplorerProfileJSON::getClientID(void) const
  {
    assert(flagHasClientID);
    return storeClientID;
  }

bool HoundifyExplorerProfileJSON::hasClientKey(void) const
  {
    return flagHasClientKey;
  }

std::string HoundifyExplorerProfileJSON::getClientKey(void)
  {
    assert(flagHasClientKey);
    return storeClientKey;
  }

const std::string HoundifyExplorerProfileJSON::getClientKey(void) const
  {
    assert(flagHasClientKey);
    return storeClientKey;
  }

bool HoundifyExplorerProfileJSON::hasUserID(void) const
  {
    return flagHasUserID;
  }

std::string HoundifyExplorerProfileJSON::getUserID(void)
  {
    assert(flagHasUserID);
    return storeUserID;
  }

const std::string HoundifyExplorerProfileJSON::getUserID(void) const
  {
    assert(flagHasUserID);
    return storeUserID;
  }

bool HoundifyExplorerProfileJSON::hasTextQueryBaseURL(void) const
  {
    return flagHasTextQueryBaseURL;
  }

std::string HoundifyExplorerProfileJSON::getTextQueryBaseURL(void)
  {
    assert(flagHasTextQueryBaseURL);
    return storeTextQueryBaseURL;
  }

const std::string HoundifyExplorerProfileJSON::getTextQueryBaseURL(void) const
  {
    assert(flagHasTextQueryBaseURL);
    return storeTextQueryBaseURL;
  }

bool HoundifyExplorerProfileJSON::hasVoiceQueryURL(void) const
  {
    return flagHasVoiceQueryURL;
  }

std::string HoundifyExplorerProfileJSON::getVoiceQueryURL(void)
  {
    assert(flagHasVoiceQueryURL);
    return storeVoiceQueryURL;
  }

const std::string HoundifyExplorerProfileJSON::getVoiceQueryURL(void) const
  {
    assert(flagHasVoiceQueryURL);
    return storeVoiceQueryURL;
  }

bool HoundifyExplorerProfileJSON::hasExtraRequestInfo(void) const
  {
    return flagHasExtraRequestInfo;
  }

RequestInfoJSON * HoundifyExplorerProfileJSON::getExtraRequestInfo(void)
  {
    assert(flagHasExtraRequestInfo);
    return storeExtraRequestInfo;
  }

const RequestInfoJSON * HoundifyExplorerProfileJSON::getExtraRequestInfo(void) const
  {
    assert(flagHasExtraRequestInfo);
    return storeExtraRequestInfo;
  }

bool HoundifyExplorerProfileJSON::hasPluginFiles(void) const
  {
    return flagHasPluginFiles;
  }

size_t HoundifyExplorerProfileJSON::countOfPluginFiles(void) const
  {
    assert(flagHasPluginFiles);
    return storePluginFiles.size();
  }

std::string HoundifyExplorerProfileJSON::elementOfPluginFiles(size_t element_num)
  {
    assert(flagHasPluginFiles);
    return storePluginFiles[element_num];
  }

const std::string HoundifyExplorerProfileJSON::elementOfPluginFiles(size_t element_num) const
  {
    assert(flagHasPluginFiles);
    return storePluginFiles[element_num];
  }

std::vector< std::string > HoundifyExplorerProfileJSON::getPluginFiles(void)
  {
    assert(flagHasPluginFiles);
    return storePluginFiles;
  }

const std::vector< std::string > HoundifyExplorerProfileJSON::getPluginFiles(void) const
  {
    assert(flagHasPluginFiles);
    return storePluginFiles;
  }

bool HoundifyExplorerProfileJSON::hasPartialTranscriptionDisplayAction(void) const
  {
    return flagHasPartialTranscriptionDisplayAction;
  }

HoundifyExplorerProfileJSON::TypePartialTranscriptionDisplayAction HoundifyExplorerProfileJSON::getPartialTranscriptionDisplayAction(void)
  {
    assert(flagHasPartialTranscriptionDisplayAction);
    return storePartialTranscriptionDisplayAction;
  }

const HoundifyExplorerProfileJSON::TypePartialTranscriptionDisplayAction HoundifyExplorerProfileJSON::getPartialTranscriptionDisplayAction(void) const
  {
    assert(flagHasPartialTranscriptionDisplayAction);
    return storePartialTranscriptionDisplayAction;
  }

const char *HoundifyExplorerProfileJSON::getPartialTranscriptionDisplayActionAsChars(void) const
  {
    return stringFromPartialTranscriptionDisplayAction(getPartialTranscriptionDisplayAction());
  }

std::string HoundifyExplorerProfileJSON::getPartialTranscriptionDisplayActionAsString(void) const
  {
    return stringFromPartialTranscriptionDisplayAction(getPartialTranscriptionDisplayAction());
  }

bool HoundifyExplorerProfileJSON::hasVoiceInputFileChunkByteCount(void) const
  {
    return flagHasVoiceInputFileChunkByteCount;
  }

OInteger HoundifyExplorerProfileJSON::getVoiceInputFileChunkByteCount(void)
  {
    assert(flagHasVoiceInputFileChunkByteCount);
    return storeVoiceInputFileChunkByteCount;
  }

const OInteger HoundifyExplorerProfileJSON::getVoiceInputFileChunkByteCount(void) const
  {
    assert(flagHasVoiceInputFileChunkByteCount);
    return storeVoiceInputFileChunkByteCount;
  }

bool HoundifyExplorerProfileJSON::hasVoiceInputFileChunkDelaySeconds(void) const
  {
    return flagHasVoiceInputFileChunkDelaySeconds;
  }

double HoundifyExplorerProfileJSON::getVoiceInputFileChunkDelaySeconds(void)
  {
    assert(flagHasVoiceInputFileChunkDelaySeconds);
    if (textStoreVoiceInputFileChunkDelaySeconds != "")
      {
        return atof(textStoreVoiceInputFileChunkDelaySeconds.c_str());
      }
    return storeVoiceInputFileChunkDelaySeconds;
  }

const double HoundifyExplorerProfileJSON::getVoiceInputFileChunkDelaySeconds(void) const
  {
    assert(flagHasVoiceInputFileChunkDelaySeconds);
    if (textStoreVoiceInputFileChunkDelaySeconds != "")
      {
        return atof(textStoreVoiceInputFileChunkDelaySeconds.c_str());
      }
    return storeVoiceInputFileChunkDelaySeconds;
  }

std::string HoundifyExplorerProfileJSON::getVoiceInputFileChunkDelaySecondsAsText(void) const
  {
    assert(flagHasVoiceInputFileChunkDelaySeconds);
    if (textStoreVoiceInputFileChunkDelaySeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeVoiceInputFileChunkDelaySeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreVoiceInputFileChunkDelaySeconds);
      }
  }

bool HoundifyExplorerProfileJSON::hasAudioInputToUse(void) const
  {
    return flagHasAudioInputToUse;
  }

std::string HoundifyExplorerProfileJSON::getAudioInputToUse(void)
  {
    assert(flagHasAudioInputToUse);
    return storeAudioInputToUse;
  }

const std::string HoundifyExplorerProfileJSON::getAudioInputToUse(void) const
  {
    assert(flagHasAudioInputToUse);
    return storeAudioInputToUse;
  }

bool HoundifyExplorerProfileJSON::hasAudioOutputToUse(void) const
  {
    return flagHasAudioOutputToUse;
  }

std::string HoundifyExplorerProfileJSON::getAudioOutputToUse(void)
  {
    assert(flagHasAudioOutputToUse);
    return storeAudioOutputToUse;
  }

const std::string HoundifyExplorerProfileJSON::getAudioOutputToUse(void) const
  {
    assert(flagHasAudioOutputToUse);
    return storeAudioOutputToUse;
  }

bool HoundifyExplorerProfileJSON::hasOutputAudioDecoderToUse(void) const
  {
    return flagHasOutputAudioDecoderToUse;
  }

std::string HoundifyExplorerProfileJSON::getOutputAudioDecoderToUse(void)
  {
    assert(flagHasOutputAudioDecoderToUse);
    return storeOutputAudioDecoderToUse;
  }

const std::string HoundifyExplorerProfileJSON::getOutputAudioDecoderToUse(void) const
  {
    assert(flagHasOutputAudioDecoderToUse);
    return storeOutputAudioDecoderToUse;
  }

bool HoundifyExplorerProfileJSON::hasTextToSpeechToUse(void) const
  {
    return flagHasTextToSpeechToUse;
  }

std::string HoundifyExplorerProfileJSON::getTextToSpeechToUse(void)
  {
    assert(flagHasTextToSpeechToUse);
    return storeTextToSpeechToUse;
  }

const std::string HoundifyExplorerProfileJSON::getTextToSpeechToUse(void) const
  {
    assert(flagHasTextToSpeechToUse);
    return storeTextToSpeechToUse;
  }

bool HoundifyExplorerProfileJSON::hasClientDomainUnitsToUse(void) const
  {
    return flagHasClientDomainUnitsToUse;
  }

size_t HoundifyExplorerProfileJSON::countOfClientDomainUnitsToUse(void) const
  {
    assert(flagHasClientDomainUnitsToUse);
    return storeClientDomainUnitsToUse.size();
  }

std::string HoundifyExplorerProfileJSON::elementOfClientDomainUnitsToUse(size_t element_num)
  {
    assert(flagHasClientDomainUnitsToUse);
    return storeClientDomainUnitsToUse[element_num];
  }

const std::string HoundifyExplorerProfileJSON::elementOfClientDomainUnitsToUse(size_t element_num) const
  {
    assert(flagHasClientDomainUnitsToUse);
    return storeClientDomainUnitsToUse[element_num];
  }

std::vector< std::string > HoundifyExplorerProfileJSON::getClientDomainUnitsToUse(void)
  {
    assert(flagHasClientDomainUnitsToUse);
    return storeClientDomainUnitsToUse;
  }

const std::vector< std::string > HoundifyExplorerProfileJSON::getClientDomainUnitsToUse(void) const
  {
    assert(flagHasClientDomainUnitsToUse);
    return storeClientDomainUnitsToUse;
  }

bool HoundifyExplorerProfileJSON::hasListenStartSoundFile(void) const
  {
    return flagHasListenStartSoundFile;
  }

std::string HoundifyExplorerProfileJSON::getListenStartSoundFile(void)
  {
    assert(flagHasListenStartSoundFile);
    return storeListenStartSoundFile;
  }

const std::string HoundifyExplorerProfileJSON::getListenStartSoundFile(void) const
  {
    assert(flagHasListenStartSoundFile);
    return storeListenStartSoundFile;
  }

bool HoundifyExplorerProfileJSON::hasListenStopSoundFile(void) const
  {
    return flagHasListenStopSoundFile;
  }

std::string HoundifyExplorerProfileJSON::getListenStopSoundFile(void)
  {
    assert(flagHasListenStopSoundFile);
    return storeListenStopSoundFile;
  }

const std::string HoundifyExplorerProfileJSON::getListenStopSoundFile(void) const
  {
    assert(flagHasListenStopSoundFile);
    return storeListenStopSoundFile;
  }

bool HoundifyExplorerProfileJSON::hasLongStringFieldsToLimit(void) const
  {
    return flagHasLongStringFieldsToLimit;
  }

size_t HoundifyExplorerProfileJSON::countOfLongStringFieldsToLimit(void) const
  {
    assert(flagHasLongStringFieldsToLimit);
    return storeLongStringFieldsToLimit.size();
  }

std::string HoundifyExplorerProfileJSON::elementOfLongStringFieldsToLimit(size_t element_num)
  {
    assert(flagHasLongStringFieldsToLimit);
    return storeLongStringFieldsToLimit[element_num];
  }

const std::string HoundifyExplorerProfileJSON::elementOfLongStringFieldsToLimit(size_t element_num) const
  {
    assert(flagHasLongStringFieldsToLimit);
    return storeLongStringFieldsToLimit[element_num];
  }

std::vector< std::string > HoundifyExplorerProfileJSON::getLongStringFieldsToLimit(void)
  {
    assert(flagHasLongStringFieldsToLimit);
    return storeLongStringFieldsToLimit;
  }

const std::vector< std::string > HoundifyExplorerProfileJSON::getLongStringFieldsToLimit(void) const
  {
    assert(flagHasLongStringFieldsToLimit);
    return storeLongStringFieldsToLimit;
  }

bool HoundifyExplorerProfileJSON::hasLongStringFieldByteLimit(void) const
  {
    return flagHasLongStringFieldByteLimit;
  }

OInteger HoundifyExplorerProfileJSON::getLongStringFieldByteLimit(void)
  {
    assert(flagHasLongStringFieldByteLimit);
    return storeLongStringFieldByteLimit;
  }

const OInteger HoundifyExplorerProfileJSON::getLongStringFieldByteLimit(void) const
  {
    assert(flagHasLongStringFieldByteLimit);
    return storeLongStringFieldByteLimit;
  }

char HoundifyExplorerProfileJSON::Generator::lowerBoundVoiceInputFileChunkByteCount[] = "0";
char HoundifyExplorerProfileJSON::Generator::lowerBoundLongStringFieldByteLimit[] = "0";
HoundifyExplorerProfileJSON *HoundifyExplorerProfileJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HoundifyExplorerProfileJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HoundifyExplorerProfileJSON>, HoundifyExplorerProfileJSON *, bool> generator("Type HoundifyExplorerProfile", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
