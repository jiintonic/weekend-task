/* file "HoundServerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HoundServerJSON.h"

#include "HoundServerJSON.h"


HoundServerJSON::TypeFormat HoundServerJSON::stringToFormat(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "oundQueryResult") == 0)
                return Format_HoundQueryResult;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "oundHoundVoiceSearchResult") == 0)
                return Format_SoundHoundVoiceSearchResult;
            break;
        default:
            break;
      }
    throw("The value for field `Format' is not one of the legal values.");
  }

const char *HoundServerJSON::stringFromFormat(TypeFormat the_enum)
  {
    switch (the_enum)
      {
        case Format_SoundHoundVoiceSearchResult:
            return "SoundHoundVoiceSearchResult";
        case Format_HoundQueryResult:
            return "HoundQueryResult";
        default:
            assert(false);
            return NULL;
      }
  }

HoundServerJSON::TypeFormatVersion HoundServerJSON::stringToFormatVersion(const char *chars)
  {
    if (strcmp(chars, "1.0") == 0)
        return FormatVersion_1_x2e_0;
    throw("The value for field `FormatVersion' is not one of the legal values.");
  }

const char *HoundServerJSON::stringFromFormatVersion(TypeFormatVersion the_enum)
  {
    switch (the_enum)
      {
        case FormatVersion_1_x2e_0:
            return "1.0";
        default:
            assert(false);
            return NULL;
      }
  }

HoundServerJSON::TypeStatus HoundServerJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "rror") == 0)
                return Status_Error;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "K") == 0)
                return Status_OK;
            break;
        default:
            break;
      }
    throw("The value for field `Status' is not one of the legal values.");
  }

const char *HoundServerJSON::stringFromStatus(TypeStatus the_enum)
  {
    switch (the_enum)
      {
        case Status_OK:
            return "OK";
        case Status_Error:
            return "Error";
        default:
            assert(false);
            return NULL;
      }
  }

HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::TypeChoiceDataJSON(const TypeChoiceDataJSON &)
  {
    assert(false);
  }

HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON &HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::operator=(const TypeChoiceDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::fromJSONTranscription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Transcription of TypeChoiceDataJSON is not a string.");
    setTranscription(std::string(json_string->getData()));
  }

void HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::fromJSONConfidenceScore(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ConfidenceScore of TypeChoiceDataJSON is not a number.");
          }
      }
    setConfidenceScoreText(the_rational_text);
  }

void HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::fromJSONFixedTranscription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FixedTranscription of TypeChoiceDataJSON is not a string.");
    setFixedTranscription(std::string(json_string->getData()));
  }

HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::TypeChoiceDataJSON(void) :
        flagHasTranscription(false),
        flagHasConfidenceScore(false),
        flagHasFixedTranscription(false)
  {
    extraIndex = create_string_index();
  }

HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::~TypeChoiceDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::hasTranscription(void) const
  {
    return flagHasTranscription;
  }

std::string HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::getTranscription(void)
  {
    assert(flagHasTranscription);
    return storeTranscription;
  }

const std::string HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::getTranscription(void) const
  {
    assert(flagHasTranscription);
    return storeTranscription;
  }

bool HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::hasConfidenceScore(void) const
  {
    return flagHasConfidenceScore;
  }

double HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::getConfidenceScore(void)
  {
    assert(flagHasConfidenceScore);
    if (textStoreConfidenceScore != "")
      {
        return atof(textStoreConfidenceScore.c_str());
      }
    return storeConfidenceScore;
  }

const double HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::getConfidenceScore(void) const
  {
    assert(flagHasConfidenceScore);
    if (textStoreConfidenceScore != "")
      {
        return atof(textStoreConfidenceScore.c_str());
      }
    return storeConfidenceScore;
  }

std::string HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::getConfidenceScoreAsText(void) const
  {
    assert(flagHasConfidenceScore);
    if (textStoreConfidenceScore == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeConfidenceScore);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreConfidenceScore);
      }
  }

bool HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::hasFixedTranscription(void) const
  {
    return flagHasFixedTranscription;
  }

std::string HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::getFixedTranscription(void)
  {
    assert(flagHasFixedTranscription);
    return storeFixedTranscription;
  }

const std::string HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::getFixedTranscription(void) const
  {
    assert(flagHasFixedTranscription);
    return storeFixedTranscription;
  }

HoundServerJSON::TypeDisambiguationJSON::TypeDisambiguationJSON(const TypeDisambiguationJSON &)
  {
    assert(false);
  }

HoundServerJSON::TypeDisambiguationJSON &HoundServerJSON::TypeDisambiguationJSON::operator=(const TypeDisambiguationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundServerJSON::TypeDisambiguationJSON::fromJSONNumToShow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumToShow of TypeDisambiguationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumToShow of TypeDisambiguationJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumToShow(extracted_integer);
  }

void HoundServerJSON::TypeDisambiguationJSON::fromJSONChoiceData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChoiceData of TypeDisambiguationJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ChoiceData of TypeDisambiguationJSON has too few elements.");
    std::vector< TypeChoiceDataJSON * > vector_ChoiceData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeChoiceDataJSON *convert_classy = TypeChoiceDataJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ChoiceData1[num1] = convert_classy;
      }
    assert(vector_ChoiceData1.size() >= 1);
    initChoiceData();
    for (size_t num5 = 0; num5 < vector_ChoiceData1.size(); ++num5)
        appendChoiceData(vector_ChoiceData1[num5]);
    for (size_t num1 = 0; num1 < vector_ChoiceData1.size(); ++num1)
      {
        vector_ChoiceData1[num1]->remove_reference();
      }
  }

HoundServerJSON::TypeDisambiguationJSON::TypeDisambiguationJSON(void) :
        flagHasNumToShow(false),
        flagHasChoiceData(false)
  {
    extraIndex = create_string_index();
  }

HoundServerJSON::TypeDisambiguationJSON::~TypeDisambiguationJSON(void)
  {
    if (flagHasChoiceData)
      {
        for (size_t num10 = 0; num10 < storeChoiceData.size(); ++num10)
          {
            storeChoiceData[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundServerJSON::TypeDisambiguationJSON::hasNumToShow(void) const
  {
    return flagHasNumToShow;
  }

OInteger HoundServerJSON::TypeDisambiguationJSON::getNumToShow(void)
  {
    assert(flagHasNumToShow);
    return storeNumToShow;
  }

const OInteger HoundServerJSON::TypeDisambiguationJSON::getNumToShow(void) const
  {
    assert(flagHasNumToShow);
    return storeNumToShow;
  }

bool HoundServerJSON::TypeDisambiguationJSON::hasChoiceData(void) const
  {
    return flagHasChoiceData;
  }

size_t HoundServerJSON::TypeDisambiguationJSON::countOfChoiceData(void) const
  {
    assert(flagHasChoiceData);
    return storeChoiceData.size();
  }

HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON * HoundServerJSON::TypeDisambiguationJSON::elementOfChoiceData(size_t element_num)
  {
    assert(flagHasChoiceData);
    return storeChoiceData[element_num];
  }

const HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON * HoundServerJSON::TypeDisambiguationJSON::elementOfChoiceData(size_t element_num) const
  {
    assert(flagHasChoiceData);
    return storeChoiceData[element_num];
  }

std::vector< HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON * > HoundServerJSON::TypeDisambiguationJSON::getChoiceData(void)
  {
    assert(flagHasChoiceData);
    return storeChoiceData;
  }

const std::vector< HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON * > HoundServerJSON::TypeDisambiguationJSON::getChoiceData(void) const
  {
    assert(flagHasChoiceData);
    return storeChoiceData;
  }

HoundServerJSON::TypeDomainUsageJSON::TypeDomainUsageJSON(const TypeDomainUsageJSON &)
  {
    assert(false);
  }

HoundServerJSON::TypeDomainUsageJSON &HoundServerJSON::TypeDomainUsageJSON::operator=(const TypeDomainUsageJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundServerJSON::TypeDomainUsageJSON::fromJSONDomain(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Domain of TypeDomainUsageJSON is not a string.");
    setDomain(std::string(json_string->getData()));
  }

void HoundServerJSON::TypeDomainUsageJSON::fromJSONDomainUniqueID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DomainUniqueID of TypeDomainUsageJSON is not a string.");
    setDomainUniqueID(std::string(json_string->getData()));
  }

void HoundServerJSON::TypeDomainUsageJSON::fromJSONCreditsUsed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CreditsUsed of TypeDomainUsageJSON is not a number.");
          }
      }
    setCreditsUsedText(the_rational_text);
  }

HoundServerJSON::TypeDomainUsageJSON::TypeDomainUsageJSON(void) :
        flagHasDomain(false),
        flagHasDomainUniqueID(false),
        flagHasCreditsUsed(false)
  {
    extraIndex = create_string_index();
  }

HoundServerJSON::TypeDomainUsageJSON::~TypeDomainUsageJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundServerJSON::TypeDomainUsageJSON::hasDomain(void) const
  {
    return flagHasDomain;
  }

std::string HoundServerJSON::TypeDomainUsageJSON::getDomain(void)
  {
    assert(flagHasDomain);
    return storeDomain;
  }

const std::string HoundServerJSON::TypeDomainUsageJSON::getDomain(void) const
  {
    assert(flagHasDomain);
    return storeDomain;
  }

bool HoundServerJSON::TypeDomainUsageJSON::hasDomainUniqueID(void) const
  {
    return flagHasDomainUniqueID;
  }

std::string HoundServerJSON::TypeDomainUsageJSON::getDomainUniqueID(void)
  {
    assert(flagHasDomainUniqueID);
    return storeDomainUniqueID;
  }

const std::string HoundServerJSON::TypeDomainUsageJSON::getDomainUniqueID(void) const
  {
    assert(flagHasDomainUniqueID);
    return storeDomainUniqueID;
  }

bool HoundServerJSON::TypeDomainUsageJSON::hasCreditsUsed(void) const
  {
    return flagHasCreditsUsed;
  }

double HoundServerJSON::TypeDomainUsageJSON::getCreditsUsed(void)
  {
    assert(flagHasCreditsUsed);
    if (textStoreCreditsUsed != "")
      {
        return atof(textStoreCreditsUsed.c_str());
      }
    return storeCreditsUsed;
  }

const double HoundServerJSON::TypeDomainUsageJSON::getCreditsUsed(void) const
  {
    assert(flagHasCreditsUsed);
    if (textStoreCreditsUsed != "")
      {
        return atof(textStoreCreditsUsed.c_str());
      }
    return storeCreditsUsed;
  }

std::string HoundServerJSON::TypeDomainUsageJSON::getCreditsUsedAsText(void) const
  {
    assert(flagHasCreditsUsed);
    if (textStoreCreditsUsed == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeCreditsUsed);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreCreditsUsed);
      }
  }

HoundServerJSON::TypeLocalOrRemote HoundServerJSON::stringToLocalOrRemote(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "ocal") == 0)
                return LocalOrRemote_Local;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "emote") == 0)
                return LocalOrRemote_Remote;
            break;
        default:
            break;
      }
    throw("The value for field `LocalOrRemote' is not one of the legal values.");
  }

const char *HoundServerJSON::stringFromLocalOrRemote(TypeLocalOrRemote the_enum)
  {
    switch (the_enum)
      {
        case LocalOrRemote_Local:
            return "Local";
        case LocalOrRemote_Remote:
            return "Remote";
        default:
            assert(false);
            return NULL;
      }
  }

HoundServerJSON::HoundServerJSON(const HoundServerJSON &)
  {
    assert(false);
  }

HoundServerJSON &HoundServerJSON::operator=(const HoundServerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundServerJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of HoundServerJSON is not a string.");
    TypeFormat the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "oundQueryResult") == 0)
                  {
                    the_enum = Format_HoundQueryResult;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "oundHoundVoiceSearchResult") == 0)
                  {
                    the_enum = Format_SoundHoundVoiceSearchResult;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Format of HoundServerJSON is not one of the legal strings.");
  enum_is_done:;
    setFormat(the_enum);
  }

void HoundServerJSON::fromJSONFormatVersion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FormatVersion of HoundServerJSON is not a string.");
    if (!(strcmp(json_string->getData(), "1.0") == 0))
        throw("The value for field FormatVersion of HoundServerJSON is not `1.0'.");
    setFormatVersion();
  }

void HoundServerJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of HoundServerJSON is not a string.");
    TypeStatus the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "rror") == 0)
                  {
                    the_enum = Status_Error;
                    goto enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "K") == 0)
                  {
                    the_enum = Status_OK;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Status of HoundServerJSON is not one of the legal strings.");
  enum_is_done:;
    setStatus(the_enum);
  }

void HoundServerJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of HoundServerJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

void HoundServerJSON::fromJSONNumToReturn(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumToReturn of HoundServerJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumToReturn of HoundServerJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumToReturn(extracted_integer);
  }

void HoundServerJSON::fromJSONAllResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AllResults of HoundServerJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< CommandResultJSON * > vector_AllResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CommandResultJSON *convert_classy = CommandResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AllResults1[num1] = convert_classy;
      }
    initAllResults();
    for (size_t num6 = 0; num6 < vector_AllResults1.size(); ++num6)
        appendAllResults(vector_AllResults1[num6]);
    for (size_t num1 = 0; num1 < vector_AllResults1.size(); ++num1)
      {
        vector_AllResults1[num1]->remove_reference();
      }
  }

void HoundServerJSON::fromJSONDisambiguation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDisambiguationJSON *convert_classy = TypeDisambiguationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisambiguation(convert_classy);
    convert_classy->remove_reference();
  }

void HoundServerJSON::fromJSONResultsAreFinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ResultsAreFinal of HoundServerJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< bool > vector_ResultsAreFinal1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONTrueValue *json_true = json_array1->component(num1)->true_value();
        bool the_bool;
        if (json_true != NULL)
          {
            the_bool = true;
          }
        else
          {
            const JSONFalseValue *json_false = json_array1->component(num1)->false_value();
            if (json_false != NULL)
              {
                the_bool = false;
              }
            else
              {
                throw("The value for an element of field ResultsAreFinal of HoundServerJSON is not true for false.");
              }
          }
        vector_ResultsAreFinal1[num1] = the_bool;
      }
    initResultsAreFinal();
    for (size_t num7 = 0; num7 < vector_ResultsAreFinal1.size(); ++num7)
        appendResultsAreFinal(vector_ResultsAreFinal1[num7]);
    for (size_t num1 = 0; num1 < vector_ResultsAreFinal1.size(); ++num1)
      {
      }
  }

void HoundServerJSON::fromJSONDomainUsage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DomainUsage of HoundServerJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeDomainUsageJSON * > vector_DomainUsage1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeDomainUsageJSON *convert_classy = TypeDomainUsageJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DomainUsage1[num1] = convert_classy;
      }
    initDomainUsage();
    for (size_t num8 = 0; num8 < vector_DomainUsage1.size(); ++num8)
        appendDomainUsage(vector_DomainUsage1[num8]);
    for (size_t num1 = 0; num1 < vector_DomainUsage1.size(); ++num1)
      {
        vector_DomainUsage1[num1]->remove_reference();
      }
  }

void HoundServerJSON::fromJSONBuildInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BuildInfoJSON *convert_classy = BuildInfoJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBuildInfo(convert_classy);
    convert_classy->remove_reference();
  }

void HoundServerJSON::fromJSONQueryID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryID of HoundServerJSON is not a string.");
    setQueryID(std::string(json_string->getData()));
  }

void HoundServerJSON::fromJSONServerGeneratedId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ServerGeneratedId of HoundServerJSON is not a string.");
    setServerGeneratedId(std::string(json_string->getData()));
  }

void HoundServerJSON::fromJSONAudioLength(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AudioLength of HoundServerJSON is not a number.");
          }
      }
    setAudioLengthText(the_rational_text);
  }

void HoundServerJSON::fromJSONRealSpeechTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RealSpeechTime of HoundServerJSON is not a number.");
          }
      }
    setRealSpeechTimeText(the_rational_text);
  }

void HoundServerJSON::fromJSONCpuSpeechTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CpuSpeechTime of HoundServerJSON is not a number.");
          }
      }
    setCpuSpeechTimeText(the_rational_text);
  }

void HoundServerJSON::fromJSONRealTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RealTime of HoundServerJSON is not a number.");
          }
      }
    setRealTimeText(the_rational_text);
  }

void HoundServerJSON::fromJSONCpuTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CpuTime of HoundServerJSON is not a number.");
          }
      }
    setCpuTimeText(the_rational_text);
  }

void HoundServerJSON::fromJSONLocalOrRemote(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalOrRemote of HoundServerJSON is not a string.");
    TypeLocalOrRemote the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ocal") == 0)
                  {
                    the_enum = LocalOrRemote_Local;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "emote") == 0)
                  {
                    the_enum = LocalOrRemote_Remote;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field LocalOrRemote of HoundServerJSON is not one of the legal strings.");
  enum_is_done:;
    setLocalOrRemote(the_enum);
  }

void HoundServerJSON::fromJSONLocalOrRemoteReason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalOrRemoteReason of HoundServerJSON is not a string.");
    setLocalOrRemoteReason(std::string(json_string->getData()));
  }

HoundServerJSON::HoundServerJSON(void) :
        flagHasFormat(false),
        flagHasFormatVersion(false),
        flagHasStatus(false),
        flagHasErrorMessage(false),
        flagHasNumToReturn(false),
        flagHasAllResults(false),
        flagHasDisambiguation(false),
        flagHasResultsAreFinal(false),
        flagHasDomainUsage(false),
        flagHasBuildInfo(false),
        flagHasQueryID(false),
        flagHasServerGeneratedId(false),
        flagHasAudioLength(false),
        flagHasRealSpeechTime(false),
        flagHasCpuSpeechTime(false),
        flagHasRealTime(false),
        flagHasCpuTime(false),
        flagHasLocalOrRemote(false),
        flagHasLocalOrRemoteReason(false)
  {
    extraIndex = create_string_index();
  }

HoundServerJSON::~HoundServerJSON(void)
  {
    if (flagHasAllResults)
      {
        for (size_t num13 = 0; num13 < storeAllResults.size(); ++num13)
          {
            storeAllResults[num13]->remove_reference();
          }
      }
    if (flagHasDisambiguation)
      {
        storeDisambiguation->remove_reference();
      }
    if (flagHasDomainUsage)
      {
        for (size_t num14 = 0; num14 < storeDomainUsage.size(); ++num14)
          {
            storeDomainUsage[num14]->remove_reference();
          }
      }
    if (flagHasBuildInfo)
      {
        storeBuildInfo->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundServerJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

HoundServerJSON::TypeFormat HoundServerJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const HoundServerJSON::TypeFormat HoundServerJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const char *HoundServerJSON::getFormatAsChars(void) const
  {
    return stringFromFormat(getFormat());
  }

std::string HoundServerJSON::getFormatAsString(void) const
  {
    return stringFromFormat(getFormat());
  }

bool HoundServerJSON::hasFormatVersion(void) const
  {
    return flagHasFormatVersion;
  }

HoundServerJSON::TypeFormatVersion HoundServerJSON::getFormatVersion(void)
  {
    assert(flagHasFormatVersion);
    return FormatVersion_1_x2e_0;
  }

const HoundServerJSON::TypeFormatVersion HoundServerJSON::getFormatVersion(void) const
  {
    assert(flagHasFormatVersion);
    return FormatVersion_1_x2e_0;
  }

const char *HoundServerJSON::getFormatVersionAsChars(void) const
  {
    return stringFromFormatVersion(getFormatVersion());
  }

std::string HoundServerJSON::getFormatVersionAsString(void) const
  {
    return stringFromFormatVersion(getFormatVersion());
  }

bool HoundServerJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

HoundServerJSON::TypeStatus HoundServerJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const HoundServerJSON::TypeStatus HoundServerJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *HoundServerJSON::getStatusAsChars(void) const
  {
    return stringFromStatus(getStatus());
  }

std::string HoundServerJSON::getStatusAsString(void) const
  {
    return stringFromStatus(getStatus());
  }

bool HoundServerJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string HoundServerJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string HoundServerJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

bool HoundServerJSON::hasNumToReturn(void) const
  {
    return flagHasNumToReturn;
  }

OInteger HoundServerJSON::getNumToReturn(void)
  {
    assert(flagHasNumToReturn);
    return storeNumToReturn;
  }

const OInteger HoundServerJSON::getNumToReturn(void) const
  {
    assert(flagHasNumToReturn);
    return storeNumToReturn;
  }

bool HoundServerJSON::hasAllResults(void) const
  {
    return flagHasAllResults;
  }

size_t HoundServerJSON::countOfAllResults(void) const
  {
    assert(flagHasAllResults);
    return storeAllResults.size();
  }

CommandResultJSON * HoundServerJSON::elementOfAllResults(size_t element_num)
  {
    assert(flagHasAllResults);
    return storeAllResults[element_num];
  }

const CommandResultJSON * HoundServerJSON::elementOfAllResults(size_t element_num) const
  {
    assert(flagHasAllResults);
    return storeAllResults[element_num];
  }

std::vector< CommandResultJSON * > HoundServerJSON::getAllResults(void)
  {
    assert(flagHasAllResults);
    return storeAllResults;
  }

const std::vector< CommandResultJSON * > HoundServerJSON::getAllResults(void) const
  {
    assert(flagHasAllResults);
    return storeAllResults;
  }

bool HoundServerJSON::hasDisambiguation(void) const
  {
    return flagHasDisambiguation;
  }

HoundServerJSON::TypeDisambiguationJSON * HoundServerJSON::getDisambiguation(void)
  {
    assert(flagHasDisambiguation);
    return storeDisambiguation;
  }

const HoundServerJSON::TypeDisambiguationJSON * HoundServerJSON::getDisambiguation(void) const
  {
    assert(flagHasDisambiguation);
    return storeDisambiguation;
  }

bool HoundServerJSON::hasResultsAreFinal(void) const
  {
    return flagHasResultsAreFinal;
  }

size_t HoundServerJSON::countOfResultsAreFinal(void) const
  {
    assert(flagHasResultsAreFinal);
    return storeResultsAreFinal.size();
  }

bool HoundServerJSON::elementOfResultsAreFinal(size_t element_num)
  {
    assert(flagHasResultsAreFinal);
    return storeResultsAreFinal[element_num];
  }

const bool HoundServerJSON::elementOfResultsAreFinal(size_t element_num) const
  {
    assert(flagHasResultsAreFinal);
    return storeResultsAreFinal[element_num];
  }

std::vector< bool > HoundServerJSON::getResultsAreFinal(void)
  {
    assert(flagHasResultsAreFinal);
    return storeResultsAreFinal;
  }

const std::vector< bool > HoundServerJSON::getResultsAreFinal(void) const
  {
    assert(flagHasResultsAreFinal);
    return storeResultsAreFinal;
  }

bool HoundServerJSON::hasDomainUsage(void) const
  {
    return flagHasDomainUsage;
  }

size_t HoundServerJSON::countOfDomainUsage(void) const
  {
    assert(flagHasDomainUsage);
    return storeDomainUsage.size();
  }

HoundServerJSON::TypeDomainUsageJSON * HoundServerJSON::elementOfDomainUsage(size_t element_num)
  {
    assert(flagHasDomainUsage);
    return storeDomainUsage[element_num];
  }

const HoundServerJSON::TypeDomainUsageJSON * HoundServerJSON::elementOfDomainUsage(size_t element_num) const
  {
    assert(flagHasDomainUsage);
    return storeDomainUsage[element_num];
  }

std::vector< HoundServerJSON::TypeDomainUsageJSON * > HoundServerJSON::getDomainUsage(void)
  {
    assert(flagHasDomainUsage);
    return storeDomainUsage;
  }

const std::vector< HoundServerJSON::TypeDomainUsageJSON * > HoundServerJSON::getDomainUsage(void) const
  {
    assert(flagHasDomainUsage);
    return storeDomainUsage;
  }

bool HoundServerJSON::hasBuildInfo(void) const
  {
    return flagHasBuildInfo;
  }

BuildInfoJSON * HoundServerJSON::getBuildInfo(void)
  {
    assert(flagHasBuildInfo);
    return storeBuildInfo;
  }

const BuildInfoJSON * HoundServerJSON::getBuildInfo(void) const
  {
    assert(flagHasBuildInfo);
    return storeBuildInfo;
  }

bool HoundServerJSON::hasQueryID(void) const
  {
    return flagHasQueryID;
  }

std::string HoundServerJSON::getQueryID(void)
  {
    assert(flagHasQueryID);
    return storeQueryID;
  }

const std::string HoundServerJSON::getQueryID(void) const
  {
    assert(flagHasQueryID);
    return storeQueryID;
  }

bool HoundServerJSON::hasServerGeneratedId(void) const
  {
    return flagHasServerGeneratedId;
  }

std::string HoundServerJSON::getServerGeneratedId(void)
  {
    assert(flagHasServerGeneratedId);
    return storeServerGeneratedId;
  }

const std::string HoundServerJSON::getServerGeneratedId(void) const
  {
    assert(flagHasServerGeneratedId);
    return storeServerGeneratedId;
  }

bool HoundServerJSON::hasAudioLength(void) const
  {
    return flagHasAudioLength;
  }

double HoundServerJSON::getAudioLength(void)
  {
    assert(flagHasAudioLength);
    if (textStoreAudioLength != "")
      {
        return atof(textStoreAudioLength.c_str());
      }
    return storeAudioLength;
  }

const double HoundServerJSON::getAudioLength(void) const
  {
    assert(flagHasAudioLength);
    if (textStoreAudioLength != "")
      {
        return atof(textStoreAudioLength.c_str());
      }
    return storeAudioLength;
  }

std::string HoundServerJSON::getAudioLengthAsText(void) const
  {
    assert(flagHasAudioLength);
    if (textStoreAudioLength == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeAudioLength);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreAudioLength);
      }
  }

bool HoundServerJSON::hasRealSpeechTime(void) const
  {
    return flagHasRealSpeechTime;
  }

double HoundServerJSON::getRealSpeechTime(void)
  {
    assert(flagHasRealSpeechTime);
    if (textStoreRealSpeechTime != "")
      {
        return atof(textStoreRealSpeechTime.c_str());
      }
    return storeRealSpeechTime;
  }

const double HoundServerJSON::getRealSpeechTime(void) const
  {
    assert(flagHasRealSpeechTime);
    if (textStoreRealSpeechTime != "")
      {
        return atof(textStoreRealSpeechTime.c_str());
      }
    return storeRealSpeechTime;
  }

std::string HoundServerJSON::getRealSpeechTimeAsText(void) const
  {
    assert(flagHasRealSpeechTime);
    if (textStoreRealSpeechTime == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRealSpeechTime);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRealSpeechTime);
      }
  }

bool HoundServerJSON::hasCpuSpeechTime(void) const
  {
    return flagHasCpuSpeechTime;
  }

double HoundServerJSON::getCpuSpeechTime(void)
  {
    assert(flagHasCpuSpeechTime);
    if (textStoreCpuSpeechTime != "")
      {
        return atof(textStoreCpuSpeechTime.c_str());
      }
    return storeCpuSpeechTime;
  }

const double HoundServerJSON::getCpuSpeechTime(void) const
  {
    assert(flagHasCpuSpeechTime);
    if (textStoreCpuSpeechTime != "")
      {
        return atof(textStoreCpuSpeechTime.c_str());
      }
    return storeCpuSpeechTime;
  }

std::string HoundServerJSON::getCpuSpeechTimeAsText(void) const
  {
    assert(flagHasCpuSpeechTime);
    if (textStoreCpuSpeechTime == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeCpuSpeechTime);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreCpuSpeechTime);
      }
  }

bool HoundServerJSON::hasRealTime(void) const
  {
    return flagHasRealTime;
  }

double HoundServerJSON::getRealTime(void)
  {
    assert(flagHasRealTime);
    if (textStoreRealTime != "")
      {
        return atof(textStoreRealTime.c_str());
      }
    return storeRealTime;
  }

const double HoundServerJSON::getRealTime(void) const
  {
    assert(flagHasRealTime);
    if (textStoreRealTime != "")
      {
        return atof(textStoreRealTime.c_str());
      }
    return storeRealTime;
  }

std::string HoundServerJSON::getRealTimeAsText(void) const
  {
    assert(flagHasRealTime);
    if (textStoreRealTime == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRealTime);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRealTime);
      }
  }

bool HoundServerJSON::hasCpuTime(void) const
  {
    return flagHasCpuTime;
  }

double HoundServerJSON::getCpuTime(void)
  {
    assert(flagHasCpuTime);
    if (textStoreCpuTime != "")
      {
        return atof(textStoreCpuTime.c_str());
      }
    return storeCpuTime;
  }

const double HoundServerJSON::getCpuTime(void) const
  {
    assert(flagHasCpuTime);
    if (textStoreCpuTime != "")
      {
        return atof(textStoreCpuTime.c_str());
      }
    return storeCpuTime;
  }

std::string HoundServerJSON::getCpuTimeAsText(void) const
  {
    assert(flagHasCpuTime);
    if (textStoreCpuTime == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeCpuTime);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreCpuTime);
      }
  }

bool HoundServerJSON::hasLocalOrRemote(void) const
  {
    return flagHasLocalOrRemote;
  }

HoundServerJSON::TypeLocalOrRemote HoundServerJSON::getLocalOrRemote(void)
  {
    assert(flagHasLocalOrRemote);
    return storeLocalOrRemote;
  }

const HoundServerJSON::TypeLocalOrRemote HoundServerJSON::getLocalOrRemote(void) const
  {
    assert(flagHasLocalOrRemote);
    return storeLocalOrRemote;
  }

const char *HoundServerJSON::getLocalOrRemoteAsChars(void) const
  {
    return stringFromLocalOrRemote(getLocalOrRemote());
  }

std::string HoundServerJSON::getLocalOrRemoteAsString(void) const
  {
    return stringFromLocalOrRemote(getLocalOrRemote());
  }

bool HoundServerJSON::hasLocalOrRemoteReason(void) const
  {
    return flagHasLocalOrRemoteReason;
  }

std::string HoundServerJSON::getLocalOrRemoteReason(void)
  {
    assert(flagHasLocalOrRemoteReason);
    return storeLocalOrRemoteReason;
  }

const std::string HoundServerJSON::getLocalOrRemoteReason(void) const
  {
    assert(flagHasLocalOrRemoteReason);
    return storeLocalOrRemoteReason;
  }

char HoundServerJSON::Generator::lowerBoundNumToReturn[] = "0";
char HoundServerJSON::TypeDisambiguationJSON::Generator::lowerBoundNumToShow[] = "1";
HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON *HoundServerJSON::TypeDisambiguationJSON::TypeChoiceDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeChoiceDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeChoiceDataJSON>, TypeChoiceDataJSON *, bool> generator("Type TypeChoiceData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HoundServerJSON::TypeDisambiguationJSON *HoundServerJSON::TypeDisambiguationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDisambiguationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDisambiguationJSON>, TypeDisambiguationJSON *, bool> generator("Type TypeDisambiguation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HoundServerJSON::TypeDomainUsageJSON *HoundServerJSON::TypeDomainUsageJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDomainUsageJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDomainUsageJSON>, TypeDomainUsageJSON *, bool> generator("Type TypeDomainUsage", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HoundServerJSON *HoundServerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HoundServerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HoundServerJSON>, HoundServerJSON *, bool> generator("Type HoundServer", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
