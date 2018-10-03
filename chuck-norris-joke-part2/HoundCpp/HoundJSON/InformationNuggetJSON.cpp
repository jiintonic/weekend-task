/* file "InformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "InformationNuggetJSON.h"

#include "InformationNuggetJSON.h"
#include "MapInformationNuggetJSON.h"
#include "LocalSearchInformationNuggetJSON.h"
#include "ShowContactNuggetJSON.h"
#include "WeatherInformationNuggetJSON.h"
#include "DateAndTimeInformationNuggetJSON.h"
#include "AlarmInformationNuggetJSON.h"
#include "GeonameFactsInformationNuggetJSON.h"
#include "UnitConverterInformationNuggetJSON.h"
#include "CurrencyConverterInformationNuggetJSON.h"
#include "MusicInformationNuggetJSON.h"
#include "FlightStatusInformationNuggetJSON.h"
#include "FlightBookingInformationNuggetJSON.h"
#include "SmallTalkInformationNuggetJSON.h"
#include "NutritionInformationNuggetJSON.h"
#include "DictionaryInformationNuggetJSON.h"
#include "HotelInformationNuggetJSON.h"
#include "WikipediaInformationNuggetJSON.h"
#include "GamesMenuInformationNuggetJSON.h"
#include "BattleshipQuitInformationNuggetJSON.h"
#include "BlackjackInformationNuggetJSON.h"
#include "HangmanInformationNuggetJSON.h"
#include "NumberGuessInformationNuggetJSON.h"
#include "RockPaperScissorsInformationNuggetJSON.h"
#include "TimerInformationNuggetJSON.h"
#include "TipCalculatorCancelInformationNuggetJSON.h"
#include "SportsInformationNuggetJSON.h"
#include "ClientMatchInformationNuggetJSON.h"
#include "EquationSolverInformationNuggetJSON.h"
#include "BaseConverterInformationNuggetJSON.h"
#include "UberInformationNuggetJSON.h"
#include "UserMemoryNuggetJSON.h"
#include "PlanetInformationNuggetJSON.h"
#include "PropertyValueInformationNuggetJSON.h"
#include "HotelIntentOnlyInformationNuggetJSON.h"
#include "RandomNumberGeneratorInformationNuggetJSON.h"
#include "StockMarketInformationNuggetJSON.h"
#include "WhatsInDrinkQuestionJSON.h"
#include "WhatDrinkCanMakeQuestionJSON.h"
#include "ChineseZodiacInfoNuggetJSON.h"
#include "SportsOlympicsInformationNuggetJSON.h"
#include "AreaCodeInfoNuggetJSON.h"


InformationNuggetJSON::InformationNuggetJSON(const InformationNuggetJSON &)
  {
    assert(false);
  }

InformationNuggetJSON &InformationNuggetJSON::operator=(const InformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void InformationNuggetJSON::fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponse of InformationNuggetJSON is not a string.");
    setSpokenResponse(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseLong of InformationNuggetJSON is not a string.");
    setSpokenResponseLong(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponse of InformationNuggetJSON is not a string.");
    setWrittenResponse(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponseLong of InformationNuggetJSON is not a string.");
    setWrittenResponseLong(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSML of InformationNuggetJSON is not a string.");
    setSpokenResponseSSML(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSMLLong of InformationNuggetJSON is not a string.");
    setSpokenResponseSSMLLong(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void InformationNuggetJSON::fromJSONCombiningTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCombiningTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void InformationNuggetJSON::fromJSONPreview(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PreviewJSON *convert_classy = PreviewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPreview(convert_classy);
    convert_classy->remove_reference();
  }

void InformationNuggetJSON::fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SmallScreenHTML of InformationNuggetJSON is not a string.");
    setSmallScreenHTML(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LargeScreenHTML of InformationNuggetJSON is not a string.");
    setLargeScreenHTML(std::string(json_string->getData()));
  }

void InformationNuggetJSON::fromJSONHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HintsJSON *convert_classy = HintsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHints(convert_classy);
    convert_classy->remove_reference();
  }

void InformationNuggetJSON::fromJSONEmotion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmotionJSON *convert_classy = EmotionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEmotion(convert_classy);
    convert_classy->remove_reference();
  }

void InformationNuggetJSON::fromJSONIcon(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IconJSON *convert_classy = IconJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIcon(convert_classy);
    convert_classy->remove_reference();
  }

void InformationNuggetJSON::fromJSONUnderstandingConfidence(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UnderstandingConfidence of InformationNuggetJSON is not a number.");
          }
      }
    setUnderstandingConfidenceText(the_rational_text);
  }

void InformationNuggetJSON::fromJSONOutputOverrideDiagnostics(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OutputOverrideDiagnostics of InformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_OutputOverrideDiagnostics1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field OutputOverrideDiagnostics of InformationNuggetJSON is not a string.");
        vector_OutputOverrideDiagnostics1[num1] = std::string(json_string->getData());
      }
    initOutputOverrideDiagnostics();
    for (size_t num2 = 0; num2 < vector_OutputOverrideDiagnostics1.size(); ++num2)
        appendOutputOverrideDiagnostics(vector_OutputOverrideDiagnostics1[num2]);
    for (size_t num1 = 0; num1 < vector_OutputOverrideDiagnostics1.size(); ++num1)
      {
      }
  }

InformationNuggetJSON::InformationNuggetJSON(void) :
        flagHasSpokenResponse(false),
        flagHasSpokenResponseLong(false),
        flagHasWrittenResponse(false),
        flagHasWrittenResponseLong(false),
        flagHasSpokenResponseSSML(false),
        flagHasSpokenResponseSSMLLong(false),
        flagHasTemplateData(false),
        flagHasCombiningTemplateData(false),
        flagHasPreview(false),
        flagHasSmallScreenHTML(false),
        flagHasLargeScreenHTML(false),
        flagHasHints(false),
        flagHasEmotion(false),
        flagHasIcon(false),
        flagHasUnderstandingConfidence(false),
        flagHasOutputOverrideDiagnostics(false)
  {
  }

InformationNuggetJSON::~InformationNuggetJSON(void)
  {
    if (flagHasTemplateData)
      {
        storeTemplateData->remove_reference();
      }
    if (flagHasCombiningTemplateData)
      {
        storeCombiningTemplateData->remove_reference();
      }
    if (flagHasPreview)
      {
        storePreview->remove_reference();
      }
    if (flagHasHints)
      {
        storeHints->remove_reference();
      }
    if (flagHasEmotion)
      {
        storeEmotion->remove_reference();
      }
    if (flagHasIcon)
      {
        storeIcon->remove_reference();
      }
  }

bool InformationNuggetJSON::hasSpokenResponse(void) const
  {
    return flagHasSpokenResponse;
  }

std::string InformationNuggetJSON::getSpokenResponse(void)
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

const std::string InformationNuggetJSON::getSpokenResponse(void) const
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

bool InformationNuggetJSON::hasSpokenResponseLong(void) const
  {
    return flagHasSpokenResponseLong;
  }

std::string InformationNuggetJSON::getSpokenResponseLong(void)
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

const std::string InformationNuggetJSON::getSpokenResponseLong(void) const
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

bool InformationNuggetJSON::hasWrittenResponse(void) const
  {
    return flagHasWrittenResponse;
  }

std::string InformationNuggetJSON::getWrittenResponse(void)
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

const std::string InformationNuggetJSON::getWrittenResponse(void) const
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

bool InformationNuggetJSON::hasWrittenResponseLong(void) const
  {
    return flagHasWrittenResponseLong;
  }

std::string InformationNuggetJSON::getWrittenResponseLong(void)
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

const std::string InformationNuggetJSON::getWrittenResponseLong(void) const
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

bool InformationNuggetJSON::hasSpokenResponseSSML(void) const
  {
    return flagHasSpokenResponseSSML;
  }

std::string InformationNuggetJSON::getSpokenResponseSSML(void)
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

const std::string InformationNuggetJSON::getSpokenResponseSSML(void) const
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

bool InformationNuggetJSON::hasSpokenResponseSSMLLong(void) const
  {
    return flagHasSpokenResponseSSMLLong;
  }

std::string InformationNuggetJSON::getSpokenResponseSSMLLong(void)
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

const std::string InformationNuggetJSON::getSpokenResponseSSMLLong(void) const
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

bool InformationNuggetJSON::hasTemplateData(void) const
  {
    return flagHasTemplateData;
  }

TemplateJSON * InformationNuggetJSON::getTemplateData(void)
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

const TemplateJSON * InformationNuggetJSON::getTemplateData(void) const
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

bool InformationNuggetJSON::hasCombiningTemplateData(void) const
  {
    return flagHasCombiningTemplateData;
  }

TemplateJSON * InformationNuggetJSON::getCombiningTemplateData(void)
  {
    assert(flagHasCombiningTemplateData);
    return storeCombiningTemplateData;
  }

const TemplateJSON * InformationNuggetJSON::getCombiningTemplateData(void) const
  {
    assert(flagHasCombiningTemplateData);
    return storeCombiningTemplateData;
  }

bool InformationNuggetJSON::hasPreview(void) const
  {
    return flagHasPreview;
  }

PreviewJSON * InformationNuggetJSON::getPreview(void)
  {
    assert(flagHasPreview);
    return storePreview;
  }

const PreviewJSON * InformationNuggetJSON::getPreview(void) const
  {
    assert(flagHasPreview);
    return storePreview;
  }

JSONValue * InformationNuggetJSON::getPreviewValue(void)
  {
    return getPreview()->getValue();
  }

const JSONValue * InformationNuggetJSON::getPreviewValue(void) const
  {
    return getPreview()->getValue();
  }

bool InformationNuggetJSON::hasSmallScreenHTML(void) const
  {
    return flagHasSmallScreenHTML;
  }

std::string InformationNuggetJSON::getSmallScreenHTML(void)
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

const std::string InformationNuggetJSON::getSmallScreenHTML(void) const
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

bool InformationNuggetJSON::hasLargeScreenHTML(void) const
  {
    return flagHasLargeScreenHTML;
  }

std::string InformationNuggetJSON::getLargeScreenHTML(void)
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

const std::string InformationNuggetJSON::getLargeScreenHTML(void) const
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

bool InformationNuggetJSON::hasHints(void) const
  {
    return flagHasHints;
  }

HintsJSON * InformationNuggetJSON::getHints(void)
  {
    assert(flagHasHints);
    return storeHints;
  }

const HintsJSON * InformationNuggetJSON::getHints(void) const
  {
    assert(flagHasHints);
    return storeHints;
  }

bool InformationNuggetJSON::hasEmotion(void) const
  {
    return flagHasEmotion;
  }

EmotionJSON * InformationNuggetJSON::getEmotion(void)
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

const EmotionJSON * InformationNuggetJSON::getEmotion(void) const
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

EmotionJSON::TypeValue InformationNuggetJSON::getEmotionValue(void)
  {
    return getEmotion()->getValue();
  }

const EmotionJSON::TypeValue InformationNuggetJSON::getEmotionValue(void) const
  {
    return getEmotion()->getValue();
  }

const char *InformationNuggetJSON::getEmotionAsChars(void) const
  {
    return getEmotion()->getValueAsChars();
  }

std::string InformationNuggetJSON::getEmotionAsString(void) const
  {
    return getEmotion()->getValueAsString();
  }

bool InformationNuggetJSON::hasIcon(void) const
  {
    return flagHasIcon;
  }

IconJSON * InformationNuggetJSON::getIcon(void)
  {
    assert(flagHasIcon);
    return storeIcon;
  }

const IconJSON * InformationNuggetJSON::getIcon(void) const
  {
    assert(flagHasIcon);
    return storeIcon;
  }

IconJSON::TypeValue InformationNuggetJSON::getIconValue(void)
  {
    return getIcon()->getValue();
  }

const IconJSON::TypeValue InformationNuggetJSON::getIconValue(void) const
  {
    return getIcon()->getValue();
  }

const char *InformationNuggetJSON::getIconAsChars(void) const
  {
    return getIcon()->getValueAsChars();
  }

std::string InformationNuggetJSON::getIconAsString(void) const
  {
    return getIcon()->getValueAsString();
  }

bool InformationNuggetJSON::hasUnderstandingConfidence(void) const
  {
    return flagHasUnderstandingConfidence;
  }

double InformationNuggetJSON::getUnderstandingConfidence(void)
  {
    assert(flagHasUnderstandingConfidence);
    if (textStoreUnderstandingConfidence != "")
      {
        return atof(textStoreUnderstandingConfidence.c_str());
      }
    return storeUnderstandingConfidence;
  }

const double InformationNuggetJSON::getUnderstandingConfidence(void) const
  {
    assert(flagHasUnderstandingConfidence);
    if (textStoreUnderstandingConfidence != "")
      {
        return atof(textStoreUnderstandingConfidence.c_str());
      }
    return storeUnderstandingConfidence;
  }

std::string InformationNuggetJSON::getUnderstandingConfidenceAsText(void) const
  {
    assert(flagHasUnderstandingConfidence);
    if (textStoreUnderstandingConfidence == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeUnderstandingConfidence);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreUnderstandingConfidence);
      }
  }

bool InformationNuggetJSON::hasOutputOverrideDiagnostics(void) const
  {
    return flagHasOutputOverrideDiagnostics;
  }

size_t InformationNuggetJSON::countOfOutputOverrideDiagnostics(void) const
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics.size();
  }

std::string InformationNuggetJSON::elementOfOutputOverrideDiagnostics(size_t element_num)
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics[element_num];
  }

const std::string InformationNuggetJSON::elementOfOutputOverrideDiagnostics(size_t element_num) const
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics[element_num];
  }

std::vector< std::string > InformationNuggetJSON::getOutputOverrideDiagnostics(void)
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics;
  }

const std::vector< std::string > InformationNuggetJSON::getOutputOverrideDiagnostics(void) const
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics;
  }

InformationNuggetJSON *InformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            switch ((unsigned char)(key[1]))
              {
                case 'l':
                    if (strcmp(&(key[2]), "arm") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "AlarmNuggetKind")));
                        if (key_value == NULL)
                            throw("The `AlarmNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `AlarmNuggetKind' field has a non-string value.");
                        return AlarmInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "eaCodeInfoNugget") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "AreaCodeInfoNuggetKind")));
                        if (key_value == NULL)
                            throw("The `AreaCodeInfoNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `AreaCodeInfoNuggetKind' field has a non-string value.");
                        return AreaCodeInfoNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    switch ((unsigned char)(key[2]))
                      {
                        case 's':
                            if (strcmp(&(key[3]), "eConverter") == 0)
                                return new BaseConverterInformationNuggetJSON();
                            break;
                        case 't':
                            if (strcmp(&(key[3]), "tleshipQuit") == 0)
                                return new BattleshipQuitInformationNuggetJSON();
                            break;
                        default:
                            break;
                      }
                    break;
                case 'l':
                    if (strcmp(&(key[2]), "ackjack") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "BlackjackNuggetKind")));
                        if (key_value == NULL)
                            throw("The `BlackjackNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `BlackjackNuggetKind' field has a non-string value.");
                        return BlackjackInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(key[1]))
              {
                case 'h':
                    if (strcmp(&(key[2]), "ineseZodiacInfoNugget") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "ChineseZodiacInfoNuggetKind")));
                        if (key_value == NULL)
                            throw("The `ChineseZodiacInfoNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `ChineseZodiacInfoNuggetKind' field has a non-string value.");
                        return ChineseZodiacInfoNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'l':
                    if (strcmp(&(key[2]), "ientMatch") == 0)
                        return new ClientMatchInformationNuggetJSON();
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "rrencyConverter") == 0)
                        return new CurrencyConverterInformationNuggetJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "teAndTime") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "DateAndTimeNuggetKind")));
                        if (key_value == NULL)
                            throw("The `DateAndTimeNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `DateAndTimeNuggetKind' field has a non-string value.");
                        return DateAndTimeInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'i':
                    if (strcmp(&(key[2]), "ctionary") == 0)
                        return new DictionaryInformationNuggetJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'E':
            if (strcmp(&(key[1]), "quationSolverInformationNugget") == 0)
                return new EquationSolverInformationNuggetJSON();
            break;
        case 'F':
            if (strncmp(&(key[1]), "light", 5) == 0)
              {
                switch ((unsigned char)(key[6]))
                  {
                    case 'B':
                        if (strcmp(&(key[7]), "ooking") == 0)
                            return new FlightBookingInformationNuggetJSON();
                        break;
                    case 'S':
                        if (strcmp(&(key[7]), "tatus") == 0)
                            return new FlightStatusInformationNuggetJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'G':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "mesMenu") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "GamesMenuNuggetKind")));
                        if (key_value == NULL)
                            throw("The `GamesMenuNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `GamesMenuNuggetKind' field has a non-string value.");
                        return GamesMenuInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'e':
                    if (strcmp(&(key[2]), "onameFactsInformationNugget") == 0)
                        return new GeonameFactsInformationNuggetJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'H':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "ngman") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "HangmanNuggetKind")));
                        if (key_value == NULL)
                            throw("The `HangmanNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `HangmanNuggetKind' field has a non-string value.");
                        return HangmanInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'o':
                    if (strncmp(&(key[2]), "tel", 3) == 0)
                      {
                        switch ((unsigned char)(key[5]))
                          {
                            case 0:
                                return new HotelInformationNuggetJSON();
                            case 'I':
                                if (strcmp(&(key[6]), "ntentOnly") == 0)
                                    return new HotelIntentOnlyInformationNuggetJSON();
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
        case 'L':
            if (strcmp(&(key[1]), "ocalSearch") == 0)
                return new LocalSearchInformationNuggetJSON();
            break;
        case 'M':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "p") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "MapNuggetKind")));
                        if (key_value == NULL)
                            throw("The `MapNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `MapNuggetKind' field has a non-string value.");
                        return MapInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "sic") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "MusicNuggetKind")));
                        if (key_value == NULL)
                            throw("The `MusicNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `MusicNuggetKind' field has a non-string value.");
                        return MusicInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'N':
            if (strncmp(&(key[1]), "u", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'm':
                        if (strcmp(&(key[3]), "berGuess") == 0)
                          {
                            JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "NumberGuessNuggetKind")));
                            if (key_value == NULL)
                                throw("The `NumberGuessNuggetKind' field is missing.");
                            JSONStringValue *key_string_value = key_value->string_value();
                            if (key_string_value == NULL)
                                throw("The `NumberGuessNuggetKind' field has a non-string value.");
                            return NumberGuessInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                          }
                        break;
                    case 't':
                        if (strcmp(&(key[3]), "rition") == 0)
                            return new NutritionInformationNuggetJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            switch ((unsigned char)(key[1]))
              {
                case 'l':
                    if (strcmp(&(key[2]), "anet") == 0)
                        return new PlanetInformationNuggetJSON();
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "opertyValue") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "PropertyValueKind")));
                        if (key_value == NULL)
                            throw("The `PropertyValueKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `PropertyValueKind' field has a non-string value.");
                        return PropertyValueInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "ndomNumberGenerator") == 0)
                        return new RandomNumberGeneratorInformationNuggetJSON();
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "ckPaperScissors") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "RockPaperScissorsNuggetKind")));
                        if (key_value == NULL)
                            throw("The `RockPaperScissorsNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `RockPaperScissorsNuggetKind' field has a non-string value.");
                        return RockPaperScissorsInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(key[1]))
              {
                case 'h':
                    if (strcmp(&(key[2]), "owContact") == 0)
                        return new ShowContactNuggetJSON();
                    break;
                case 'm':
                    if (strcmp(&(key[2]), "allTalk") == 0)
                        return new SmallTalkInformationNuggetJSON();
                    break;
                case 'p':
                    if (strncmp(&(key[2]), "orts", 4) == 0)
                      {
                        switch ((unsigned char)(key[6]))
                          {
                            case 0:
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "SportsNuggetKind")));
                                if (key_value == NULL)
                                    throw("The `SportsNuggetKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `SportsNuggetKind' field has a non-string value.");
                                return SportsInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                              }
                            case 'O':
                                if (strcmp(&(key[7]), "lympicsInformationNugget") == 0)
                                  {
                                    JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "SportsOlympicsInformationNuggetKind")));
                                    if (key_value == NULL)
                                        throw("The `SportsOlympicsInformationNuggetKind' field is missing.");
                                    JSONStringValue *key_string_value = key_value->string_value();
                                    if (key_string_value == NULL)
                                        throw("The `SportsOlympicsInformationNuggetKind' field has a non-string value.");
                                    return SportsOlympicsInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 't':
                    if (strcmp(&(key[2]), "ockMarket") == 0)
                        return new StockMarketInformationNuggetJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strncmp(&(key[1]), "i", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'm':
                        if (strcmp(&(key[3]), "er") == 0)
                          {
                            JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "TimerNuggetKind")));
                            if (key_value == NULL)
                                throw("The `TimerNuggetKind' field is missing.");
                            JSONStringValue *key_string_value = key_value->string_value();
                            if (key_string_value == NULL)
                                throw("The `TimerNuggetKind' field has a non-string value.");
                            return TimerInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                          }
                        break;
                    case 'p':
                        if (strcmp(&(key[3]), "CalculatorCancel") == 0)
                            return new TipCalculatorCancelInformationNuggetJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'U':
            switch ((unsigned char)(key[1]))
              {
                case 'b':
                    if (strcmp(&(key[2]), "er") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "UberNuggetKind")));
                        if (key_value == NULL)
                            throw("The `UberNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `UberNuggetKind' field has a non-string value.");
                        return UberInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'n':
                    if (strcmp(&(key[2]), "itConverter") == 0)
                        return new UnitConverterInformationNuggetJSON();
                    break;
                case 's':
                    if (strcmp(&(key[2]), "erMemory") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "UserMemoryNuggetKind")));
                        if (key_value == NULL)
                            throw("The `UserMemoryNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `UserMemoryNuggetKind' field has a non-string value.");
                        return UserMemoryNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            switch ((unsigned char)(key[1]))
              {
                case 'e':
                    if (strcmp(&(key[2]), "ather") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "WeatherNuggetKind")));
                        if (key_value == NULL)
                            throw("The `WeatherNuggetKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `WeatherNuggetKind' field has a non-string value.");
                        return WeatherInformationNuggetJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'h':
                    if (strncmp(&(key[2]), "at", 2) == 0)
                      {
                        switch ((unsigned char)(key[4]))
                          {
                            case 'D':
                                if (strcmp(&(key[5]), "rinkCanMakeNugget") == 0)
                                    return new WhatDrinkCanMakeQuestionJSON();
                                break;
                            case 's':
                                if (strcmp(&(key[5]), "InDrinkNugget") == 0)
                                    return new WhatsInDrinkQuestionJSON();
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(key[2]), "kipedia") == 0)
                        return new WikipediaInformationNuggetJSON();
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }

    class GenericInformationNuggetJSON : public InformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getNuggetKind(void) const  { return key.c_str(); }
        size_t extraInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraInformationNuggetAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(), key) == 0)
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
      };
    return new GenericInformationNuggetJSON(key);
  }
InformationNuggetJSON *InformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    InformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<InformationNuggetJSON>, InformationNuggetJSON *, bool> generator("Type InformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
