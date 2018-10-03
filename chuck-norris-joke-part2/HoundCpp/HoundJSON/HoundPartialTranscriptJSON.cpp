/* file "HoundPartialTranscriptJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HoundPartialTranscriptJSON.h"

#include "HoundPartialTranscriptJSON.h"


HoundPartialTranscriptJSON::TypeFormat HoundPartialTranscriptJSON::stringToFormat(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "oundVoiceQueryPartialTranscript") == 0)
                return Format_HoundVoiceQueryPartialTranscript;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "oundHoundVoiceSearchParialTranscript") == 0)
                return Format_SoundHoundVoiceSearchParialTranscript;
            break;
        default:
            break;
      }
    throw("The value for field `Format' is not one of the legal values.");
  }

const char *HoundPartialTranscriptJSON::stringFromFormat(TypeFormat the_enum)
  {
    switch (the_enum)
      {
        case Format_SoundHoundVoiceSearchParialTranscript:
            return "SoundHoundVoiceSearchParialTranscript";
        case Format_HoundVoiceQueryPartialTranscript:
            return "HoundVoiceQueryPartialTranscript";
        default:
            assert(false);
            return NULL;
      }
  }

HoundPartialTranscriptJSON::TypeFormatVersion HoundPartialTranscriptJSON::stringToFormatVersion(const char *chars)
  {
    if (strcmp(chars, "1.0") == 0)
        return FormatVersion_1_x2e_0;
    throw("The value for field `FormatVersion' is not one of the legal values.");
  }

const char *HoundPartialTranscriptJSON::stringFromFormatVersion(TypeFormatVersion the_enum)
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

HoundPartialTranscriptJSON::TypeLocalOrRemote HoundPartialTranscriptJSON::stringToLocalOrRemote(const char *chars)
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

const char *HoundPartialTranscriptJSON::stringFromLocalOrRemote(TypeLocalOrRemote the_enum)
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

HoundPartialTranscriptJSON::HoundPartialTranscriptJSON(const HoundPartialTranscriptJSON &)
  {
    assert(false);
  }

HoundPartialTranscriptJSON &HoundPartialTranscriptJSON::operator=(const HoundPartialTranscriptJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundPartialTranscriptJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of HoundPartialTranscriptJSON is not a string.");
    TypeFormat the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "oundVoiceQueryPartialTranscript") == 0)
                  {
                    the_enum = Format_HoundVoiceQueryPartialTranscript;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "oundHoundVoiceSearchParialTranscript") == 0)
                  {
                    the_enum = Format_SoundHoundVoiceSearchParialTranscript;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Format of HoundPartialTranscriptJSON is not one of the legal strings.");
  enum_is_done:;
    setFormat(the_enum);
  }

void HoundPartialTranscriptJSON::fromJSONFormatVersion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FormatVersion of HoundPartialTranscriptJSON is not a string.");
    if (!(strcmp(json_string->getData(), "1.0") == 0))
        throw("The value for field FormatVersion of HoundPartialTranscriptJSON is not `1.0'.");
    setFormatVersion();
  }

void HoundPartialTranscriptJSON::fromJSONPartialTranscript(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialTranscript of HoundPartialTranscriptJSON is not a string.");
    setPartialTranscript(std::string(json_string->getData()));
  }

void HoundPartialTranscriptJSON::fromJSONDurationMS(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DurationMS of HoundPartialTranscriptJSON is not a number.");
          }
      }
    setDurationMSText(the_rational_text);
  }

void HoundPartialTranscriptJSON::fromJSONDone(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Done of HoundPartialTranscriptJSON is not true for false.");
          }
      }
    setDone(the_bool);
  }

void HoundPartialTranscriptJSON::fromJSONSafeToStopAudio(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SafeToStopAudio of HoundPartialTranscriptJSON is not true for false.");
          }
      }
    setSafeToStopAudio(the_bool);
  }

void HoundPartialTranscriptJSON::fromJSONLocalOrRemote(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalOrRemote of HoundPartialTranscriptJSON is not a string.");
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
    throw("The value for field LocalOrRemote of HoundPartialTranscriptJSON is not one of the legal strings.");
  enum_is_done:;
    setLocalOrRemote(the_enum);
  }

HoundPartialTranscriptJSON::HoundPartialTranscriptJSON(void) :
        flagHasFormat(false),
        flagHasFormatVersion(false),
        flagHasPartialTranscript(false),
        flagHasDurationMS(false),
        flagHasDone(false),
        flagHasSafeToStopAudio(false),
        flagHasLocalOrRemote(false)
  {
    extraIndex = create_string_index();
  }

HoundPartialTranscriptJSON::~HoundPartialTranscriptJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundPartialTranscriptJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

HoundPartialTranscriptJSON::TypeFormat HoundPartialTranscriptJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const HoundPartialTranscriptJSON::TypeFormat HoundPartialTranscriptJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return storeFormat;
  }

const char *HoundPartialTranscriptJSON::getFormatAsChars(void) const
  {
    return stringFromFormat(getFormat());
  }

std::string HoundPartialTranscriptJSON::getFormatAsString(void) const
  {
    return stringFromFormat(getFormat());
  }

bool HoundPartialTranscriptJSON::hasFormatVersion(void) const
  {
    return flagHasFormatVersion;
  }

HoundPartialTranscriptJSON::TypeFormatVersion HoundPartialTranscriptJSON::getFormatVersion(void)
  {
    assert(flagHasFormatVersion);
    return FormatVersion_1_x2e_0;
  }

const HoundPartialTranscriptJSON::TypeFormatVersion HoundPartialTranscriptJSON::getFormatVersion(void) const
  {
    assert(flagHasFormatVersion);
    return FormatVersion_1_x2e_0;
  }

const char *HoundPartialTranscriptJSON::getFormatVersionAsChars(void) const
  {
    return stringFromFormatVersion(getFormatVersion());
  }

std::string HoundPartialTranscriptJSON::getFormatVersionAsString(void) const
  {
    return stringFromFormatVersion(getFormatVersion());
  }

bool HoundPartialTranscriptJSON::hasPartialTranscript(void) const
  {
    return flagHasPartialTranscript;
  }

std::string HoundPartialTranscriptJSON::getPartialTranscript(void)
  {
    assert(flagHasPartialTranscript);
    return storePartialTranscript;
  }

const std::string HoundPartialTranscriptJSON::getPartialTranscript(void) const
  {
    assert(flagHasPartialTranscript);
    return storePartialTranscript;
  }

bool HoundPartialTranscriptJSON::hasDurationMS(void) const
  {
    return flagHasDurationMS;
  }

double HoundPartialTranscriptJSON::getDurationMS(void)
  {
    assert(flagHasDurationMS);
    if (textStoreDurationMS != "")
      {
        return atof(textStoreDurationMS.c_str());
      }
    return storeDurationMS;
  }

const double HoundPartialTranscriptJSON::getDurationMS(void) const
  {
    assert(flagHasDurationMS);
    if (textStoreDurationMS != "")
      {
        return atof(textStoreDurationMS.c_str());
      }
    return storeDurationMS;
  }

std::string HoundPartialTranscriptJSON::getDurationMSAsText(void) const
  {
    assert(flagHasDurationMS);
    if (textStoreDurationMS == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDurationMS);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDurationMS);
      }
  }

bool HoundPartialTranscriptJSON::hasDone(void) const
  {
    return flagHasDone;
  }

bool HoundPartialTranscriptJSON::getDone(void)
  {
    assert(flagHasDone);
    return storeDone;
  }

const bool HoundPartialTranscriptJSON::getDone(void) const
  {
    assert(flagHasDone);
    return storeDone;
  }

bool HoundPartialTranscriptJSON::hasSafeToStopAudio(void) const
  {
    return flagHasSafeToStopAudio;
  }

bool HoundPartialTranscriptJSON::getSafeToStopAudio(void)
  {
    assert(flagHasSafeToStopAudio);
    return storeSafeToStopAudio;
  }

const bool HoundPartialTranscriptJSON::getSafeToStopAudio(void) const
  {
    assert(flagHasSafeToStopAudio);
    return storeSafeToStopAudio;
  }

bool HoundPartialTranscriptJSON::hasLocalOrRemote(void) const
  {
    return flagHasLocalOrRemote;
  }

HoundPartialTranscriptJSON::TypeLocalOrRemote HoundPartialTranscriptJSON::getLocalOrRemote(void)
  {
    assert(flagHasLocalOrRemote);
    return storeLocalOrRemote;
  }

const HoundPartialTranscriptJSON::TypeLocalOrRemote HoundPartialTranscriptJSON::getLocalOrRemote(void) const
  {
    assert(flagHasLocalOrRemote);
    return storeLocalOrRemote;
  }

const char *HoundPartialTranscriptJSON::getLocalOrRemoteAsChars(void) const
  {
    return stringFromLocalOrRemote(getLocalOrRemote());
  }

std::string HoundPartialTranscriptJSON::getLocalOrRemoteAsString(void) const
  {
    return stringFromLocalOrRemote(getLocalOrRemote());
  }

HoundPartialTranscriptJSON *HoundPartialTranscriptJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HoundPartialTranscriptJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HoundPartialTranscriptJSON>, HoundPartialTranscriptJSON *, bool> generator("Type HoundPartialTranscript", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
