/* file "SoundHoundNowCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SoundHoundNowCommandJSON.h"

#include "SoundHoundNowCommandJSON.h"


SoundHoundNowCommandJSON::TypeClue SoundHoundNowCommandJSON::stringToClue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "d") == 0)
                return Clue_Ad;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "umming") == 0)
                return Clue_Humming;
            break;
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "vies") == 0)
                        return Clue_Movies;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "sic") == 0)
                        return Clue_Music;
                    break;
                default:
                    break;
              }
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ther") == 0)
                return Clue_Other;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "nging") == 0)
                        return Clue_Singing;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "undTrack") == 0)
                        return Clue_SoundTrack;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "V") == 0)
                return Clue_TV;
            break;
        default:
            break;
      }
    throw("The value for field `Clue' is not one of the legal values.");
  }

const char *SoundHoundNowCommandJSON::stringFromClue(TypeClue the_enum)
  {
    switch (the_enum)
      {
        case Clue_Music:
            return "Music";
        case Clue_SoundTrack:
            return "SoundTrack";
        case Clue_Singing:
            return "Singing";
        case Clue_Humming:
            return "Humming";
        case Clue_TV:
            return "TV";
        case Clue_Movies:
            return "Movies";
        case Clue_Ad:
            return "Ad";
        case Clue_Other:
            return "Other";
        default:
            assert(false);
            return NULL;
      }
  }

SoundHoundNowCommandJSON::SoundHoundNowCommandJSON(const SoundHoundNowCommandJSON &)
  {
    assert(false);
  }

SoundHoundNowCommandJSON &SoundHoundNowCommandJSON::operator=(const SoundHoundNowCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SoundHoundNowCommandJSON::extraClueToJSON(void) const
  {
    JSONStringValue *generated_string_Clue;
    switch (storeClue)
      {
        case Clue_Music:
            generated_string_Clue = new JSONStringValue("Music");
            break;
        case Clue_SoundTrack:
            generated_string_Clue = new JSONStringValue("SoundTrack");
            break;
        case Clue_Singing:
            generated_string_Clue = new JSONStringValue("Singing");
            break;
        case Clue_Humming:
            generated_string_Clue = new JSONStringValue("Humming");
            break;
        case Clue_TV:
            generated_string_Clue = new JSONStringValue("TV");
            break;
        case Clue_Movies:
            generated_string_Clue = new JSONStringValue("Movies");
            break;
        case Clue_Ad:
            generated_string_Clue = new JSONStringValue("Ad");
            break;
        case Clue_Other:
            generated_string_Clue = new JSONStringValue("Other");
            break;
        default:
            assert(false);
            generated_string_Clue = NULL;
      }
    return generated_string_Clue;
  }

JSONValue *SoundHoundNowCommandJSON::extraLaunchSoundHoundAppResultToJSON(void) const
  {
    JSONValueHandler handler_LaunchSoundHoundAppResult;
    storeLaunchSoundHoundAppResult->write_as_json(&handler_LaunchSoundHoundAppResult);
    handler_LaunchSoundHoundAppResult.result->add_reference();
    return handler_LaunchSoundHoundAppResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraSoundHoundNotInstalledResultToJSON(void) const
  {
    JSONValueHandler handler_SoundHoundNotInstalledResult;
    storeSoundHoundNotInstalledResult->write_as_json(&handler_SoundHoundNotInstalledResult);
    handler_SoundHoundNotInstalledResult.result->add_reference();
    return handler_SoundHoundNotInstalledResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraStartSoundHoundSearchResultToJSON(void) const
  {
    JSONValueHandler handler_StartSoundHoundSearchResult;
    storeStartSoundHoundSearchResult->write_as_json(&handler_StartSoundHoundSearchResult);
    handler_StartSoundHoundSearchResult.result->add_reference();
    return handler_StartSoundHoundSearchResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraCancelSoundHoundSearchResultToJSON(void) const
  {
    JSONValueHandler handler_CancelSoundHoundSearchResult;
    storeCancelSoundHoundSearchResult->write_as_json(&handler_CancelSoundHoundSearchResult);
    handler_CancelSoundHoundSearchResult.result->add_reference();
    return handler_CancelSoundHoundSearchResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraNoMatchResultToJSON(void) const
  {
    JSONValueHandler handler_NoMatchResult;
    storeNoMatchResult->write_as_json(&handler_NoMatchResult);
    handler_NoMatchResult.result->add_reference();
    return handler_NoMatchResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraSingleTrackResultToJSON(void) const
  {
    JSONValueHandler handler_SingleTrackResult;
    storeSingleTrackResult->write_as_json(&handler_SingleTrackResult);
    handler_SingleTrackResult.result->add_reference();
    return handler_SingleTrackResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraSingleTrackWithArtistResultToJSON(void) const
  {
    JSONValueHandler handler_SingleTrackWithArtistResult;
    storeSingleTrackWithArtistResult->write_as_json(&handler_SingleTrackWithArtistResult);
    handler_SingleTrackWithArtistResult.result->add_reference();
    return handler_SingleTrackWithArtistResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraMultipleTracksHighConfidenceResultToJSON(void) const
  {
    JSONValueHandler handler_MultipleTracksHighConfidenceResult;
    storeMultipleTracksHighConfidenceResult->write_as_json(&handler_MultipleTracksHighConfidenceResult);
    handler_MultipleTracksHighConfidenceResult.result->add_reference();
    return handler_MultipleTracksHighConfidenceResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraMultipleTracksWithArtistHighConfidenceResultToJSON(void) const
  {
    JSONValueHandler handler_MultipleTracksWithArtistHighConfidenceResult;
    storeMultipleTracksWithArtistHighConfidenceResult->write_as_json(&handler_MultipleTracksWithArtistHighConfidenceResult);
    handler_MultipleTracksWithArtistHighConfidenceResult.result->add_reference();
    return handler_MultipleTracksWithArtistHighConfidenceResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraMultipleTracksMediumConfidenceResultToJSON(void) const
  {
    JSONValueHandler handler_MultipleTracksMediumConfidenceResult;
    storeMultipleTracksMediumConfidenceResult->write_as_json(&handler_MultipleTracksMediumConfidenceResult);
    handler_MultipleTracksMediumConfidenceResult.result->add_reference();
    return handler_MultipleTracksMediumConfidenceResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraMultipleTracksLowConfidenceResultToJSON(void) const
  {
    JSONValueHandler handler_MultipleTracksLowConfidenceResult;
    storeMultipleTracksLowConfidenceResult->write_as_json(&handler_MultipleTracksLowConfidenceResult);
    handler_MultipleTracksLowConfidenceResult.result->add_reference();
    return handler_MultipleTracksLowConfidenceResult.result;
  }

JSONValue *SoundHoundNowCommandJSON::extraOutOfScopeResultToJSON(void) const
  {
    JSONValueHandler handler_OutOfScopeResult;
    storeOutOfScopeResult->write_as_json(&handler_OutOfScopeResult);
    handler_OutOfScopeResult.result->add_reference();
    return handler_OutOfScopeResult.result;
  }

void SoundHoundNowCommandJSON::fromJSONClue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Clue of SoundHoundNowCommandJSON is not a string.");
    TypeClue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "d") == 0)
                  {
                    the_enum = Clue_Ad;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "umming") == 0)
                  {
                    the_enum = Clue_Humming;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "vies") == 0)
                          {
                            the_enum = Clue_Movies;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "sic") == 0)
                          {
                            the_enum = Clue_Music;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ther") == 0)
                  {
                    the_enum = Clue_Other;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "nging") == 0)
                          {
                            the_enum = Clue_Singing;
                            goto enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "undTrack") == 0)
                          {
                            the_enum = Clue_SoundTrack;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "V") == 0)
                  {
                    the_enum = Clue_TV;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Clue of SoundHoundNowCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setClue(the_enum);
  }

void SoundHoundNowCommandJSON::fromJSONLaunchSoundHoundAppResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLaunchSoundHoundAppResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONSoundHoundNotInstalledResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSoundHoundNotInstalledResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONStartSoundHoundSearchResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartSoundHoundSearchResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONCancelSoundHoundSearchResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCancelSoundHoundSearchResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONNoMatchResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoMatchResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONSingleTrackResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSingleTrackResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONSingleTrackWithArtistResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSingleTrackWithArtistResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONMultipleTracksHighConfidenceResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMultipleTracksHighConfidenceResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONMultipleTracksWithArtistHighConfidenceResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMultipleTracksWithArtistHighConfidenceResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONMultipleTracksMediumConfidenceResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMultipleTracksMediumConfidenceResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONMultipleTracksLowConfidenceResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMultipleTracksLowConfidenceResult(convert_classy);
    convert_classy->remove_reference();
  }

void SoundHoundNowCommandJSON::fromJSONOutOfScopeResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOutOfScopeResult(convert_classy);
    convert_classy->remove_reference();
  }

SoundHoundNowCommandJSON::SoundHoundNowCommandJSON(void) :
        flagHasClue(false),
        flagHasLaunchSoundHoundAppResult(false),
        flagHasSoundHoundNotInstalledResult(false),
        flagHasStartSoundHoundSearchResult(false),
        flagHasCancelSoundHoundSearchResult(false),
        flagHasNoMatchResult(false),
        flagHasSingleTrackResult(false),
        flagHasSingleTrackWithArtistResult(false),
        flagHasMultipleTracksHighConfidenceResult(false),
        flagHasMultipleTracksWithArtistHighConfidenceResult(false),
        flagHasMultipleTracksMediumConfidenceResult(false),
        flagHasMultipleTracksLowConfidenceResult(false),
        flagHasOutOfScopeResult(false)
  {
    extraIndex = create_string_index();
  }

SoundHoundNowCommandJSON::~SoundHoundNowCommandJSON(void)
  {
    if (flagHasLaunchSoundHoundAppResult)
      {
        storeLaunchSoundHoundAppResult->remove_reference();
      }
    if (flagHasSoundHoundNotInstalledResult)
      {
        storeSoundHoundNotInstalledResult->remove_reference();
      }
    if (flagHasStartSoundHoundSearchResult)
      {
        storeStartSoundHoundSearchResult->remove_reference();
      }
    if (flagHasCancelSoundHoundSearchResult)
      {
        storeCancelSoundHoundSearchResult->remove_reference();
      }
    if (flagHasNoMatchResult)
      {
        storeNoMatchResult->remove_reference();
      }
    if (flagHasSingleTrackResult)
      {
        storeSingleTrackResult->remove_reference();
      }
    if (flagHasSingleTrackWithArtistResult)
      {
        storeSingleTrackWithArtistResult->remove_reference();
      }
    if (flagHasMultipleTracksHighConfidenceResult)
      {
        storeMultipleTracksHighConfidenceResult->remove_reference();
      }
    if (flagHasMultipleTracksWithArtistHighConfidenceResult)
      {
        storeMultipleTracksWithArtistHighConfidenceResult->remove_reference();
      }
    if (flagHasMultipleTracksMediumConfidenceResult)
      {
        storeMultipleTracksMediumConfidenceResult->remove_reference();
      }
    if (flagHasMultipleTracksLowConfidenceResult)
      {
        storeMultipleTracksLowConfidenceResult->remove_reference();
      }
    if (flagHasOutOfScopeResult)
      {
        storeOutOfScopeResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SoundHoundNowCommandJSON::getCommandKind(void) const
  {
    return "SoundHoundNowCommand";
  }

bool SoundHoundNowCommandJSON::hasClue(void) const
  {
    return flagHasClue;
  }

SoundHoundNowCommandJSON::TypeClue SoundHoundNowCommandJSON::getClue(void)
  {
    assert(flagHasClue);
    return storeClue;
  }

const SoundHoundNowCommandJSON::TypeClue SoundHoundNowCommandJSON::getClue(void) const
  {
    assert(flagHasClue);
    return storeClue;
  }

const char *SoundHoundNowCommandJSON::getClueAsChars(void) const
  {
    return stringFromClue(getClue());
  }

std::string SoundHoundNowCommandJSON::getClueAsString(void) const
  {
    return stringFromClue(getClue());
  }

bool SoundHoundNowCommandJSON::hasLaunchSoundHoundAppResult(void) const
  {
    return flagHasLaunchSoundHoundAppResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getLaunchSoundHoundAppResult(void)
  {
    assert(flagHasLaunchSoundHoundAppResult);
    return storeLaunchSoundHoundAppResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getLaunchSoundHoundAppResult(void) const
  {
    assert(flagHasLaunchSoundHoundAppResult);
    return storeLaunchSoundHoundAppResult;
  }

bool SoundHoundNowCommandJSON::hasSoundHoundNotInstalledResult(void) const
  {
    return flagHasSoundHoundNotInstalledResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getSoundHoundNotInstalledResult(void)
  {
    assert(flagHasSoundHoundNotInstalledResult);
    return storeSoundHoundNotInstalledResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getSoundHoundNotInstalledResult(void) const
  {
    assert(flagHasSoundHoundNotInstalledResult);
    return storeSoundHoundNotInstalledResult;
  }

bool SoundHoundNowCommandJSON::hasStartSoundHoundSearchResult(void) const
  {
    return flagHasStartSoundHoundSearchResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getStartSoundHoundSearchResult(void)
  {
    assert(flagHasStartSoundHoundSearchResult);
    return storeStartSoundHoundSearchResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getStartSoundHoundSearchResult(void) const
  {
    assert(flagHasStartSoundHoundSearchResult);
    return storeStartSoundHoundSearchResult;
  }

bool SoundHoundNowCommandJSON::hasCancelSoundHoundSearchResult(void) const
  {
    return flagHasCancelSoundHoundSearchResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getCancelSoundHoundSearchResult(void)
  {
    assert(flagHasCancelSoundHoundSearchResult);
    return storeCancelSoundHoundSearchResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getCancelSoundHoundSearchResult(void) const
  {
    assert(flagHasCancelSoundHoundSearchResult);
    return storeCancelSoundHoundSearchResult;
  }

bool SoundHoundNowCommandJSON::hasNoMatchResult(void) const
  {
    return flagHasNoMatchResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getNoMatchResult(void)
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getNoMatchResult(void) const
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

bool SoundHoundNowCommandJSON::hasSingleTrackResult(void) const
  {
    return flagHasSingleTrackResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getSingleTrackResult(void)
  {
    assert(flagHasSingleTrackResult);
    return storeSingleTrackResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getSingleTrackResult(void) const
  {
    assert(flagHasSingleTrackResult);
    return storeSingleTrackResult;
  }

bool SoundHoundNowCommandJSON::hasSingleTrackWithArtistResult(void) const
  {
    return flagHasSingleTrackWithArtistResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getSingleTrackWithArtistResult(void)
  {
    assert(flagHasSingleTrackWithArtistResult);
    return storeSingleTrackWithArtistResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getSingleTrackWithArtistResult(void) const
  {
    assert(flagHasSingleTrackWithArtistResult);
    return storeSingleTrackWithArtistResult;
  }

bool SoundHoundNowCommandJSON::hasMultipleTracksHighConfidenceResult(void) const
  {
    return flagHasMultipleTracksHighConfidenceResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksHighConfidenceResult(void)
  {
    assert(flagHasMultipleTracksHighConfidenceResult);
    return storeMultipleTracksHighConfidenceResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksHighConfidenceResult(void) const
  {
    assert(flagHasMultipleTracksHighConfidenceResult);
    return storeMultipleTracksHighConfidenceResult;
  }

bool SoundHoundNowCommandJSON::hasMultipleTracksWithArtistHighConfidenceResult(void) const
  {
    return flagHasMultipleTracksWithArtistHighConfidenceResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksWithArtistHighConfidenceResult(void)
  {
    assert(flagHasMultipleTracksWithArtistHighConfidenceResult);
    return storeMultipleTracksWithArtistHighConfidenceResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksWithArtistHighConfidenceResult(void) const
  {
    assert(flagHasMultipleTracksWithArtistHighConfidenceResult);
    return storeMultipleTracksWithArtistHighConfidenceResult;
  }

bool SoundHoundNowCommandJSON::hasMultipleTracksMediumConfidenceResult(void) const
  {
    return flagHasMultipleTracksMediumConfidenceResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksMediumConfidenceResult(void)
  {
    assert(flagHasMultipleTracksMediumConfidenceResult);
    return storeMultipleTracksMediumConfidenceResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksMediumConfidenceResult(void) const
  {
    assert(flagHasMultipleTracksMediumConfidenceResult);
    return storeMultipleTracksMediumConfidenceResult;
  }

bool SoundHoundNowCommandJSON::hasMultipleTracksLowConfidenceResult(void) const
  {
    return flagHasMultipleTracksLowConfidenceResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksLowConfidenceResult(void)
  {
    assert(flagHasMultipleTracksLowConfidenceResult);
    return storeMultipleTracksLowConfidenceResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getMultipleTracksLowConfidenceResult(void) const
  {
    assert(flagHasMultipleTracksLowConfidenceResult);
    return storeMultipleTracksLowConfidenceResult;
  }

bool SoundHoundNowCommandJSON::hasOutOfScopeResult(void) const
  {
    return flagHasOutOfScopeResult;
  }

DynamicResponseJSON * SoundHoundNowCommandJSON::getOutOfScopeResult(void)
  {
    assert(flagHasOutOfScopeResult);
    return storeOutOfScopeResult;
  }

const DynamicResponseJSON * SoundHoundNowCommandJSON::getOutOfScopeResult(void) const
  {
    assert(flagHasOutOfScopeResult);
    return storeOutOfScopeResult;
  }

SoundHoundNowCommandJSON *SoundHoundNowCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SoundHoundNowCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SoundHoundNowCommandJSON>, SoundHoundNowCommandJSON *, bool> generator("Type SoundHoundNowCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
