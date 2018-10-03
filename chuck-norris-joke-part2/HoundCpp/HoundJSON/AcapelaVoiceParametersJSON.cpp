/* file "AcapelaVoiceParametersJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AcapelaVoiceParametersJSON.h"

#include "AcapelaVoiceParametersJSON.h"


AcapelaVoiceParametersJSON::TypeReadingMode AcapelaVoiceParametersJSON::stringToReadingMode(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "etter") == 0)
                return ReadingMode_Letter;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ext") == 0)
                return ReadingMode_Text;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ord") == 0)
                return ReadingMode_Word;
            break;
        default:
            break;
      }
    throw("The value for field `ReadingMode' is not one of the legal values.");
  }

const char *AcapelaVoiceParametersJSON::stringFromReadingMode(TypeReadingMode the_enum)
  {
    switch (the_enum)
      {
        case ReadingMode_Text:
            return "Text";
        case ReadingMode_Word:
            return "Word";
        case ReadingMode_Letter:
            return "Letter";
        default:
            assert(false);
            return NULL;
      }
  }

AcapelaVoiceParametersJSON::AcapelaVoiceParametersJSON(const AcapelaVoiceParametersJSON &)
  {
    assert(false);
  }

AcapelaVoiceParametersJSON &AcapelaVoiceParametersJSON::operator=(const AcapelaVoiceParametersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AcapelaVoiceParametersJSON::fromJSONUseFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UseFilter of AcapelaVoiceParametersJSON is not true for false.");
          }
      }
    setUseFilter(the_bool);
  }

void AcapelaVoiceParametersJSON::fromJSONFilterValue1(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FilterValue1 of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FilterValue1 of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setFilterValue1(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONFilterValue2(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FilterValue2 of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FilterValue2 of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setFilterValue2(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONFilterValue3(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FilterValue3 of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FilterValue3 of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setFilterValue3(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONFilterValue4(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FilterValue4 of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FilterValue4 of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setFilterValue4(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONLeadingSilence(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LeadingSilence of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LeadingSilence of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setLeadingSilence(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONTrailingSilence(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TrailingSilence of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TrailingSilence of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setTrailingSilence(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONAudioBoost(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AudioBoost of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AudioBoost of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setAudioBoost(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONPausePunct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AcapelaPauseValueJSON *convert_classy = AcapelaPauseValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPausePunct(convert_classy);
    convert_classy->remove_reference();
  }

void AcapelaVoiceParametersJSON::fromJSONPauseSemicolon(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AcapelaPauseValueJSON *convert_classy = AcapelaPauseValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPauseSemicolon(convert_classy);
    convert_classy->remove_reference();
  }

void AcapelaVoiceParametersJSON::fromJSONPauseComma(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AcapelaPauseValueJSON *convert_classy = AcapelaPauseValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPauseComma(convert_classy);
    convert_classy->remove_reference();
  }

void AcapelaVoiceParametersJSON::fromJSONPauseBracket(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AcapelaPauseValueJSON *convert_classy = AcapelaPauseValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPauseBracket(convert_classy);
    convert_classy->remove_reference();
  }

void AcapelaVoiceParametersJSON::fromJSONPauseSpell(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AcapelaPauseValueJSON *convert_classy = AcapelaPauseValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPauseSpell(convert_classy);
    convert_classy->remove_reference();
  }

void AcapelaVoiceParametersJSON::fromJSONVoiceShaping(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field VoiceShaping of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field VoiceShaping of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setVoiceShaping(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONReadingMode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ReadingMode of AcapelaVoiceParametersJSON is not a string.");
    TypeReadingMode the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "etter") == 0)
                  {
                    the_enum = ReadingMode_Letter;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ext") == 0)
                  {
                    the_enum = ReadingMode_Text;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ord") == 0)
                  {
                    the_enum = ReadingMode_Word;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field ReadingMode of AcapelaVoiceParametersJSON is not one of the legal strings.");
  enum_is_done:;
    setReadingMode(the_enum);
  }

void AcapelaVoiceParametersJSON::fromJSONSpeed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Speed of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Speed of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setSpeed(extracted_integer);
  }

void AcapelaVoiceParametersJSON::fromJSONVolume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Volume of AcapelaVoiceParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Volume of AcapelaVoiceParametersJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setVolume(extracted_integer);
  }

AcapelaVoiceParametersJSON::AcapelaVoiceParametersJSON(void) :
        flagHasUseFilter(false),
        flagHasFilterValue1(false),
        flagHasFilterValue2(false),
        flagHasFilterValue3(false),
        flagHasFilterValue4(false),
        flagHasLeadingSilence(false),
        flagHasTrailingSilence(false),
        flagHasAudioBoost(false),
        flagHasPausePunct(false),
        flagHasPauseSemicolon(false),
        flagHasPauseComma(false),
        flagHasPauseBracket(false),
        flagHasPauseSpell(false),
        flagHasVoiceShaping(false),
        flagHasReadingMode(false),
        flagHasSpeed(false),
        flagHasVolume(false)
  {
    storeUseFilter = false;
    storeFilterValue1 = 100;
    storeFilterValue2 = 100;
    storeFilterValue3 = 100;
    storeFilterValue4 = 100;
    storeLeadingSilence = 50;
    storeTrailingSilence = 500;
    storeAudioBoost = 0;
    storeVoiceShaping = 100;
    storeSpeed = 100;
    storeVolume = 100;
    extraIndex = create_string_index();
  }

AcapelaVoiceParametersJSON::~AcapelaVoiceParametersJSON(void)
  {
    if (flagHasPausePunct)
      {
        storePausePunct->remove_reference();
      }
    if (flagHasPauseSemicolon)
      {
        storePauseSemicolon->remove_reference();
      }
    if (flagHasPauseComma)
      {
        storePauseComma->remove_reference();
      }
    if (flagHasPauseBracket)
      {
        storePauseBracket->remove_reference();
      }
    if (flagHasPauseSpell)
      {
        storePauseSpell->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AcapelaVoiceParametersJSON::hasUseFilter(void) const
  {
    return flagHasUseFilter;
  }

bool AcapelaVoiceParametersJSON::getUseFilter(void)
  {
    return storeUseFilter;
  }

const bool AcapelaVoiceParametersJSON::getUseFilter(void) const
  {
    return storeUseFilter;
  }

bool AcapelaVoiceParametersJSON::hasFilterValue1(void) const
  {
    return flagHasFilterValue1;
  }

uint8_t AcapelaVoiceParametersJSON::getFilterValue1(void)
  {
    return storeFilterValue1;
  }

const uint8_t AcapelaVoiceParametersJSON::getFilterValue1(void) const
  {
    return storeFilterValue1;
  }

bool AcapelaVoiceParametersJSON::hasFilterValue2(void) const
  {
    return flagHasFilterValue2;
  }

uint8_t AcapelaVoiceParametersJSON::getFilterValue2(void)
  {
    return storeFilterValue2;
  }

const uint8_t AcapelaVoiceParametersJSON::getFilterValue2(void) const
  {
    return storeFilterValue2;
  }

bool AcapelaVoiceParametersJSON::hasFilterValue3(void) const
  {
    return flagHasFilterValue3;
  }

uint8_t AcapelaVoiceParametersJSON::getFilterValue3(void)
  {
    return storeFilterValue3;
  }

const uint8_t AcapelaVoiceParametersJSON::getFilterValue3(void) const
  {
    return storeFilterValue3;
  }

bool AcapelaVoiceParametersJSON::hasFilterValue4(void) const
  {
    return flagHasFilterValue4;
  }

uint8_t AcapelaVoiceParametersJSON::getFilterValue4(void)
  {
    return storeFilterValue4;
  }

const uint8_t AcapelaVoiceParametersJSON::getFilterValue4(void) const
  {
    return storeFilterValue4;
  }

bool AcapelaVoiceParametersJSON::hasLeadingSilence(void) const
  {
    return flagHasLeadingSilence;
  }

uint16_t AcapelaVoiceParametersJSON::getLeadingSilence(void)
  {
    return storeLeadingSilence;
  }

const uint16_t AcapelaVoiceParametersJSON::getLeadingSilence(void) const
  {
    return storeLeadingSilence;
  }

bool AcapelaVoiceParametersJSON::hasTrailingSilence(void) const
  {
    return flagHasTrailingSilence;
  }

uint16_t AcapelaVoiceParametersJSON::getTrailingSilence(void)
  {
    return storeTrailingSilence;
  }

const uint16_t AcapelaVoiceParametersJSON::getTrailingSilence(void) const
  {
    return storeTrailingSilence;
  }

bool AcapelaVoiceParametersJSON::hasAudioBoost(void) const
  {
    return flagHasAudioBoost;
  }

uint8_t AcapelaVoiceParametersJSON::getAudioBoost(void)
  {
    return storeAudioBoost;
  }

const uint8_t AcapelaVoiceParametersJSON::getAudioBoost(void) const
  {
    return storeAudioBoost;
  }

bool AcapelaVoiceParametersJSON::hasPausePunct(void) const
  {
    return flagHasPausePunct;
  }

AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPausePunct(void)
  {
    assert(flagHasPausePunct);
    return storePausePunct;
  }

const AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPausePunct(void) const
  {
    assert(flagHasPausePunct);
    return storePausePunct;
  }

AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPausePunctValue(void)
  {
    return getPausePunct()->getValue();
  }

const AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPausePunctValue(void) const
  {
    return getPausePunct()->getValue();
  }

const char *AcapelaVoiceParametersJSON::getPausePunctAsChars(void) const
  {
    return getPausePunct()->getValueAsChars();
  }

std::string AcapelaVoiceParametersJSON::getPausePunctAsString(void) const
  {
    return getPausePunct()->getValueAsString();
  }

bool AcapelaVoiceParametersJSON::hasPauseSemicolon(void) const
  {
    return flagHasPauseSemicolon;
  }

AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseSemicolon(void)
  {
    assert(flagHasPauseSemicolon);
    return storePauseSemicolon;
  }

const AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseSemicolon(void) const
  {
    assert(flagHasPauseSemicolon);
    return storePauseSemicolon;
  }

AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseSemicolonValue(void)
  {
    return getPauseSemicolon()->getValue();
  }

const AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseSemicolonValue(void) const
  {
    return getPauseSemicolon()->getValue();
  }

const char *AcapelaVoiceParametersJSON::getPauseSemicolonAsChars(void) const
  {
    return getPauseSemicolon()->getValueAsChars();
  }

std::string AcapelaVoiceParametersJSON::getPauseSemicolonAsString(void) const
  {
    return getPauseSemicolon()->getValueAsString();
  }

bool AcapelaVoiceParametersJSON::hasPauseComma(void) const
  {
    return flagHasPauseComma;
  }

AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseComma(void)
  {
    assert(flagHasPauseComma);
    return storePauseComma;
  }

const AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseComma(void) const
  {
    assert(flagHasPauseComma);
    return storePauseComma;
  }

AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseCommaValue(void)
  {
    return getPauseComma()->getValue();
  }

const AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseCommaValue(void) const
  {
    return getPauseComma()->getValue();
  }

const char *AcapelaVoiceParametersJSON::getPauseCommaAsChars(void) const
  {
    return getPauseComma()->getValueAsChars();
  }

std::string AcapelaVoiceParametersJSON::getPauseCommaAsString(void) const
  {
    return getPauseComma()->getValueAsString();
  }

bool AcapelaVoiceParametersJSON::hasPauseBracket(void) const
  {
    return flagHasPauseBracket;
  }

AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseBracket(void)
  {
    assert(flagHasPauseBracket);
    return storePauseBracket;
  }

const AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseBracket(void) const
  {
    assert(flagHasPauseBracket);
    return storePauseBracket;
  }

AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseBracketValue(void)
  {
    return getPauseBracket()->getValue();
  }

const AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseBracketValue(void) const
  {
    return getPauseBracket()->getValue();
  }

const char *AcapelaVoiceParametersJSON::getPauseBracketAsChars(void) const
  {
    return getPauseBracket()->getValueAsChars();
  }

std::string AcapelaVoiceParametersJSON::getPauseBracketAsString(void) const
  {
    return getPauseBracket()->getValueAsString();
  }

bool AcapelaVoiceParametersJSON::hasPauseSpell(void) const
  {
    return flagHasPauseSpell;
  }

AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseSpell(void)
  {
    assert(flagHasPauseSpell);
    return storePauseSpell;
  }

const AcapelaPauseValueJSON * AcapelaVoiceParametersJSON::getPauseSpell(void) const
  {
    assert(flagHasPauseSpell);
    return storePauseSpell;
  }

AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseSpellValue(void)
  {
    return getPauseSpell()->getValue();
  }

const AcapelaPauseValueJSON::TypeValue AcapelaVoiceParametersJSON::getPauseSpellValue(void) const
  {
    return getPauseSpell()->getValue();
  }

const char *AcapelaVoiceParametersJSON::getPauseSpellAsChars(void) const
  {
    return getPauseSpell()->getValueAsChars();
  }

std::string AcapelaVoiceParametersJSON::getPauseSpellAsString(void) const
  {
    return getPauseSpell()->getValueAsString();
  }

bool AcapelaVoiceParametersJSON::hasVoiceShaping(void) const
  {
    return flagHasVoiceShaping;
  }

uint8_t AcapelaVoiceParametersJSON::getVoiceShaping(void)
  {
    return storeVoiceShaping;
  }

const uint8_t AcapelaVoiceParametersJSON::getVoiceShaping(void) const
  {
    return storeVoiceShaping;
  }

bool AcapelaVoiceParametersJSON::hasReadingMode(void) const
  {
    return flagHasReadingMode;
  }

AcapelaVoiceParametersJSON::TypeReadingMode AcapelaVoiceParametersJSON::getReadingMode(void)
  {
    assert(flagHasReadingMode);
    return storeReadingMode;
  }

const AcapelaVoiceParametersJSON::TypeReadingMode AcapelaVoiceParametersJSON::getReadingMode(void) const
  {
    assert(flagHasReadingMode);
    return storeReadingMode;
  }

const char *AcapelaVoiceParametersJSON::getReadingModeAsChars(void) const
  {
    return stringFromReadingMode(getReadingMode());
  }

std::string AcapelaVoiceParametersJSON::getReadingModeAsString(void) const
  {
    return stringFromReadingMode(getReadingMode());
  }

bool AcapelaVoiceParametersJSON::hasSpeed(void) const
  {
    return flagHasSpeed;
  }

uint16_t AcapelaVoiceParametersJSON::getSpeed(void)
  {
    return storeSpeed;
  }

const uint16_t AcapelaVoiceParametersJSON::getSpeed(void) const
  {
    return storeSpeed;
  }

bool AcapelaVoiceParametersJSON::hasVolume(void) const
  {
    return flagHasVolume;
  }

uint8_t AcapelaVoiceParametersJSON::getVolume(void)
  {
    return storeVolume;
  }

const uint8_t AcapelaVoiceParametersJSON::getVolume(void) const
  {
    return storeVolume;
  }

AcapelaVoiceParametersJSON *AcapelaVoiceParametersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AcapelaVoiceParametersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AcapelaVoiceParametersJSON>, AcapelaVoiceParametersJSON *, bool> generator("Type AcapelaVoiceParameters", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
