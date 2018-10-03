/* file "SoundHoundNowCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SOUNDHOUNDNOWCOMMANDJSON_H
#define SOUNDHOUNDNOWCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SoundHoundNowCommandJSON : public CommandResultJSON
  {
  public:
    enum TypeClue
      {
        Clue_Music,
        Clue_SoundTrack,
        Clue_Singing,
        Clue_Humming,
        Clue_TV,
        Clue_Movies,
        Clue_Ad,
        Clue_Other
      };

    static TypeClue  stringToClue(const char *chars);
    static const char * stringFromClue(TypeClue the_enum);

  private:
    bool flagHasClue;
    TypeClue storeClue;
    bool flagHasLaunchSoundHoundAppResult;
    DynamicResponseJSON * storeLaunchSoundHoundAppResult;
    bool flagHasSoundHoundNotInstalledResult;
    DynamicResponseJSON * storeSoundHoundNotInstalledResult;
    bool flagHasStartSoundHoundSearchResult;
    DynamicResponseJSON * storeStartSoundHoundSearchResult;
    bool flagHasCancelSoundHoundSearchResult;
    DynamicResponseJSON * storeCancelSoundHoundSearchResult;
    bool flagHasNoMatchResult;
    DynamicResponseJSON * storeNoMatchResult;
    bool flagHasSingleTrackResult;
    DynamicResponseJSON * storeSingleTrackResult;
    bool flagHasSingleTrackWithArtistResult;
    DynamicResponseJSON * storeSingleTrackWithArtistResult;
    bool flagHasMultipleTracksHighConfidenceResult;
    DynamicResponseJSON * storeMultipleTracksHighConfidenceResult;
    bool flagHasMultipleTracksWithArtistHighConfidenceResult;
    DynamicResponseJSON * storeMultipleTracksWithArtistHighConfidenceResult;
    bool flagHasMultipleTracksMediumConfidenceResult;
    DynamicResponseJSON * storeMultipleTracksMediumConfidenceResult;
    bool flagHasMultipleTracksLowConfidenceResult;
    DynamicResponseJSON * storeMultipleTracksLowConfidenceResult;
    bool flagHasOutOfScopeResult;
    DynamicResponseJSON * storeOutOfScopeResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SoundHoundNowCommandJSON(const SoundHoundNowCommandJSON &);
    SoundHoundNowCommandJSON & operator=(const SoundHoundNowCommandJSON &other);

    JSONValue * extraClueToJSON(void) const;
    JSONValue * extraLaunchSoundHoundAppResultToJSON(void) const;
    JSONValue * extraSoundHoundNotInstalledResultToJSON(void) const;
    JSONValue * extraStartSoundHoundSearchResultToJSON(void) const;
    JSONValue * extraCancelSoundHoundSearchResultToJSON(void) const;
    JSONValue * extraNoMatchResultToJSON(void) const;
    JSONValue * extraSingleTrackResultToJSON(void) const;
    JSONValue * extraSingleTrackWithArtistResultToJSON(void) const;
    JSONValue * extraMultipleTracksHighConfidenceResultToJSON(void) const;
    JSONValue * extraMultipleTracksWithArtistHighConfidenceResultToJSON(void) const;
    JSONValue * extraMultipleTracksMediumConfidenceResultToJSON(void) const;
    JSONValue * extraMultipleTracksLowConfidenceResultToJSON(void) const;
    JSONValue * extraOutOfScopeResultToJSON(void) const;

    void  fromJSONClue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLaunchSoundHoundAppResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundHoundNotInstalledResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartSoundHoundSearchResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCancelSoundHoundSearchResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNoMatchResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSingleTrackResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSingleTrackWithArtistResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMultipleTracksHighConfidenceResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMultipleTracksWithArtistHighConfidenceResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMultipleTracksMediumConfidenceResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMultipleTracksLowConfidenceResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutOfScopeResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    SoundHoundNowCommandJSON(void);
    virtual ~SoundHoundNowCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasClue(void) const;
    TypeClue  getClue(void);
    const TypeClue  getClue(void) const;
    const char * getClueAsChars(void) const;
    std::string  getClueAsString(void) const;
    bool  hasLaunchSoundHoundAppResult(void) const;
    DynamicResponseJSON *  getLaunchSoundHoundAppResult(void);
    const DynamicResponseJSON *  getLaunchSoundHoundAppResult(void) const;
    bool  hasSoundHoundNotInstalledResult(void) const;
    DynamicResponseJSON *  getSoundHoundNotInstalledResult(void);
    const DynamicResponseJSON *  getSoundHoundNotInstalledResult(void) const;
    bool  hasStartSoundHoundSearchResult(void) const;
    DynamicResponseJSON *  getStartSoundHoundSearchResult(void);
    const DynamicResponseJSON *  getStartSoundHoundSearchResult(void) const;
    bool  hasCancelSoundHoundSearchResult(void) const;
    DynamicResponseJSON *  getCancelSoundHoundSearchResult(void);
    const DynamicResponseJSON *  getCancelSoundHoundSearchResult(void) const;
    bool  hasNoMatchResult(void) const;
    DynamicResponseJSON *  getNoMatchResult(void);
    const DynamicResponseJSON *  getNoMatchResult(void) const;
    bool  hasSingleTrackResult(void) const;
    DynamicResponseJSON *  getSingleTrackResult(void);
    const DynamicResponseJSON *  getSingleTrackResult(void) const;
    bool  hasSingleTrackWithArtistResult(void) const;
    DynamicResponseJSON *  getSingleTrackWithArtistResult(void);
    const DynamicResponseJSON *  getSingleTrackWithArtistResult(void) const;
    bool  hasMultipleTracksHighConfidenceResult(void) const;
    DynamicResponseJSON *  getMultipleTracksHighConfidenceResult(void);
    const DynamicResponseJSON *  getMultipleTracksHighConfidenceResult(void) const;
    bool  hasMultipleTracksWithArtistHighConfidenceResult(void) const;
    DynamicResponseJSON *  getMultipleTracksWithArtistHighConfidenceResult(void);
    const DynamicResponseJSON *  getMultipleTracksWithArtistHighConfidenceResult(void) const;
    bool  hasMultipleTracksMediumConfidenceResult(void) const;
    DynamicResponseJSON *  getMultipleTracksMediumConfidenceResult(void);
    const DynamicResponseJSON *  getMultipleTracksMediumConfidenceResult(void) const;
    bool  hasMultipleTracksLowConfidenceResult(void) const;
    DynamicResponseJSON *  getMultipleTracksLowConfidenceResult(void);
    const DynamicResponseJSON *  getMultipleTracksLowConfidenceResult(void) const;
    bool  hasOutOfScopeResult(void) const;
    DynamicResponseJSON *  getOutOfScopeResult(void);
    const DynamicResponseJSON *  getOutOfScopeResult(void) const;

    virtual size_t extraSoundHoundNowCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSoundHoundNowCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSoundHoundNowCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSoundHoundNowCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSoundHoundNowCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSoundHoundNowCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasClue)
            ++result;
        if (flagHasLaunchSoundHoundAppResult)
            ++result;
        if (flagHasSoundHoundNotInstalledResult)
            ++result;
        if (flagHasStartSoundHoundSearchResult)
            ++result;
        if (flagHasCancelSoundHoundSearchResult)
            ++result;
        if (flagHasNoMatchResult)
            ++result;
        if (flagHasSingleTrackResult)
            ++result;
        if (flagHasSingleTrackWithArtistResult)
            ++result;
        if (flagHasMultipleTracksHighConfidenceResult)
            ++result;
        if (flagHasMultipleTracksWithArtistHighConfidenceResult)
            ++result;
        if (flagHasMultipleTracksMediumConfidenceResult)
            ++result;
        if (flagHasMultipleTracksLowConfidenceResult)
            ++result;
        if (flagHasOutOfScopeResult)
            ++result;
        result += extraSoundHoundNowCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasClue)
          {
            if (remainder == 0)
                return "Clue";
            --remainder;
          }
        if (flagHasLaunchSoundHoundAppResult)
          {
            if (remainder == 0)
                return "LaunchSoundHoundAppResult";
            --remainder;
          }
        if (flagHasSoundHoundNotInstalledResult)
          {
            if (remainder == 0)
                return "SoundHoundNotInstalledResult";
            --remainder;
          }
        if (flagHasStartSoundHoundSearchResult)
          {
            if (remainder == 0)
                return "StartSoundHoundSearchResult";
            --remainder;
          }
        if (flagHasCancelSoundHoundSearchResult)
          {
            if (remainder == 0)
                return "CancelSoundHoundSearchResult";
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return "NoMatchResult";
            --remainder;
          }
        if (flagHasSingleTrackResult)
          {
            if (remainder == 0)
                return "SingleTrackResult";
            --remainder;
          }
        if (flagHasSingleTrackWithArtistResult)
          {
            if (remainder == 0)
                return "SingleTrackWithArtistResult";
            --remainder;
          }
        if (flagHasMultipleTracksHighConfidenceResult)
          {
            if (remainder == 0)
                return "MultipleTracksHighConfidenceResult";
            --remainder;
          }
        if (flagHasMultipleTracksWithArtistHighConfidenceResult)
          {
            if (remainder == 0)
                return "MultipleTracksWithArtistHighConfidenceResult";
            --remainder;
          }
        if (flagHasMultipleTracksMediumConfidenceResult)
          {
            if (remainder == 0)
                return "MultipleTracksMediumConfidenceResult";
            --remainder;
          }
        if (flagHasMultipleTracksLowConfidenceResult)
          {
            if (remainder == 0)
                return "MultipleTracksLowConfidenceResult";
            --remainder;
          }
        if (flagHasOutOfScopeResult)
          {
            if (remainder == 0)
                return "OutOfScopeResult";
            --remainder;
          }
        return extraSoundHoundNowCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasClue)
          {
            if (remainder == 0)
                return extraClueToJSON();
            --remainder;
          }
        if (flagHasLaunchSoundHoundAppResult)
          {
            if (remainder == 0)
                return extraLaunchSoundHoundAppResultToJSON();
            --remainder;
          }
        if (flagHasSoundHoundNotInstalledResult)
          {
            if (remainder == 0)
                return extraSoundHoundNotInstalledResultToJSON();
            --remainder;
          }
        if (flagHasStartSoundHoundSearchResult)
          {
            if (remainder == 0)
                return extraStartSoundHoundSearchResultToJSON();
            --remainder;
          }
        if (flagHasCancelSoundHoundSearchResult)
          {
            if (remainder == 0)
                return extraCancelSoundHoundSearchResultToJSON();
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return extraNoMatchResultToJSON();
            --remainder;
          }
        if (flagHasSingleTrackResult)
          {
            if (remainder == 0)
                return extraSingleTrackResultToJSON();
            --remainder;
          }
        if (flagHasSingleTrackWithArtistResult)
          {
            if (remainder == 0)
                return extraSingleTrackWithArtistResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksHighConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksHighConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksWithArtistHighConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksWithArtistHighConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksMediumConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksMediumConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksLowConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksLowConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasOutOfScopeResult)
          {
            if (remainder == 0)
                return extraOutOfScopeResultToJSON();
            --remainder;
          }
        return extraSoundHoundNowCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasClue)
          {
            if (remainder == 0)
                return extraClueToJSON();
            --remainder;
          }
        if (flagHasLaunchSoundHoundAppResult)
          {
            if (remainder == 0)
                return extraLaunchSoundHoundAppResultToJSON();
            --remainder;
          }
        if (flagHasSoundHoundNotInstalledResult)
          {
            if (remainder == 0)
                return extraSoundHoundNotInstalledResultToJSON();
            --remainder;
          }
        if (flagHasStartSoundHoundSearchResult)
          {
            if (remainder == 0)
                return extraStartSoundHoundSearchResultToJSON();
            --remainder;
          }
        if (flagHasCancelSoundHoundSearchResult)
          {
            if (remainder == 0)
                return extraCancelSoundHoundSearchResultToJSON();
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return extraNoMatchResultToJSON();
            --remainder;
          }
        if (flagHasSingleTrackResult)
          {
            if (remainder == 0)
                return extraSingleTrackResultToJSON();
            --remainder;
          }
        if (flagHasSingleTrackWithArtistResult)
          {
            if (remainder == 0)
                return extraSingleTrackWithArtistResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksHighConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksHighConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksWithArtistHighConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksWithArtistHighConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksMediumConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksMediumConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasMultipleTracksLowConfidenceResult)
          {
            if (remainder == 0)
                return extraMultipleTracksLowConfidenceResultToJSON();
            --remainder;
          }
        if (flagHasOutOfScopeResult)
          {
            if (remainder == 0)
                return extraOutOfScopeResultToJSON();
            --remainder;
          }
        return extraSoundHoundNowCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ncelSoundHoundSearchResult") == 0)
                            return (flagHasCancelSoundHoundSearchResult ? extraCancelSoundHoundSearchResultToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "ue") == 0)
                            return (flagHasClue ? extraClueToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "aunchSoundHoundAppResult") == 0)
                    return (flagHasLaunchSoundHoundAppResult ? extraLaunchSoundHoundAppResultToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "ultipleTracks", 13) == 0)
                  {
                    switch ((unsigned char)(field_name[14]))
                      {
                        case 'H':
                            if (strcmp(&(field_name[15]), "ighConfidenceResult") == 0)
                                return (flagHasMultipleTracksHighConfidenceResult ? extraMultipleTracksHighConfidenceResultToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[15]), "owConfidenceResult") == 0)
                                return (flagHasMultipleTracksLowConfidenceResult ? extraMultipleTracksLowConfidenceResultToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[15]), "ediumConfidenceResult") == 0)
                                return (flagHasMultipleTracksMediumConfidenceResult ? extraMultipleTracksMediumConfidenceResultToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[15]), "ithArtistHighConfidenceResult") == 0)
                                return (flagHasMultipleTracksWithArtistHighConfidenceResult ? extraMultipleTracksWithArtistHighConfidenceResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "oMatchResult") == 0)
                    return (flagHasNoMatchResult ? extraNoMatchResultToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "utOfScopeResult") == 0)
                    return (flagHasOutOfScopeResult ? extraOutOfScopeResultToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strncmp(&(field_name[2]), "ngleTrack", 9) == 0)
                          {
                            switch ((unsigned char)(field_name[11]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[12]), "esult") == 0)
                                        return (flagHasSingleTrackResult ? extraSingleTrackResultToJSON() : NULL);
                                    break;
                                case 'W':
                                    if (strcmp(&(field_name[12]), "ithArtistResult") == 0)
                                        return (flagHasSingleTrackWithArtistResult ? extraSingleTrackWithArtistResultToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "undHoundNotInstalledResult") == 0)
                            return (flagHasSoundHoundNotInstalledResult ? extraSoundHoundNotInstalledResultToJSON() : NULL);
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "artSoundHoundSearchResult") == 0)
                            return (flagHasStartSoundHoundSearchResult ? extraStartSoundHoundSearchResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraSoundHoundNowCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ncelSoundHoundSearchResult") == 0)
                            return (flagHasCancelSoundHoundSearchResult ? extraCancelSoundHoundSearchResultToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "ue") == 0)
                            return (flagHasClue ? extraClueToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "aunchSoundHoundAppResult") == 0)
                    return (flagHasLaunchSoundHoundAppResult ? extraLaunchSoundHoundAppResultToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "ultipleTracks", 13) == 0)
                  {
                    switch ((unsigned char)(field_name[14]))
                      {
                        case 'H':
                            if (strcmp(&(field_name[15]), "ighConfidenceResult") == 0)
                                return (flagHasMultipleTracksHighConfidenceResult ? extraMultipleTracksHighConfidenceResultToJSON() : NULL);
                            break;
                        case 'L':
                            if (strcmp(&(field_name[15]), "owConfidenceResult") == 0)
                                return (flagHasMultipleTracksLowConfidenceResult ? extraMultipleTracksLowConfidenceResultToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[15]), "ediumConfidenceResult") == 0)
                                return (flagHasMultipleTracksMediumConfidenceResult ? extraMultipleTracksMediumConfidenceResultToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[15]), "ithArtistHighConfidenceResult") == 0)
                                return (flagHasMultipleTracksWithArtistHighConfidenceResult ? extraMultipleTracksWithArtistHighConfidenceResultToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "oMatchResult") == 0)
                    return (flagHasNoMatchResult ? extraNoMatchResultToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "utOfScopeResult") == 0)
                    return (flagHasOutOfScopeResult ? extraOutOfScopeResultToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strncmp(&(field_name[2]), "ngleTrack", 9) == 0)
                          {
                            switch ((unsigned char)(field_name[11]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[12]), "esult") == 0)
                                        return (flagHasSingleTrackResult ? extraSingleTrackResultToJSON() : NULL);
                                    break;
                                case 'W':
                                    if (strcmp(&(field_name[12]), "ithArtistResult") == 0)
                                        return (flagHasSingleTrackWithArtistResult ? extraSingleTrackWithArtistResultToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "undHoundNotInstalledResult") == 0)
                            return (flagHasSoundHoundNotInstalledResult ? extraSoundHoundNotInstalledResultToJSON() : NULL);
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "artSoundHoundSearchResult") == 0)
                            return (flagHasStartSoundHoundSearchResult ? extraStartSoundHoundSearchResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraSoundHoundNowCommandLookup(field_name);
      }

    void setClue(TypeClue new_value)
      {
        flagHasClue = true;
        storeClue = new_value;
      }
    void setClue(const char *chars)
      {
        setClue(stringToClue(chars));
      }
    void setClue(std::string the_string)
      {
        setClue(stringToClue(the_string.c_str()));
      }
    void unsetClue(void)
      {
        flagHasClue = false;
      }
    void setLaunchSoundHoundAppResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLaunchSoundHoundAppResult)
          {
            storeLaunchSoundHoundAppResult->remove_reference();
          }
        flagHasLaunchSoundHoundAppResult = true;
        storeLaunchSoundHoundAppResult = new_value;
      }
    void unsetLaunchSoundHoundAppResult(void)
      {
        if (flagHasLaunchSoundHoundAppResult)
          {
            storeLaunchSoundHoundAppResult->remove_reference();
          }
        flagHasLaunchSoundHoundAppResult = false;
      }
    void setSoundHoundNotInstalledResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSoundHoundNotInstalledResult)
          {
            storeSoundHoundNotInstalledResult->remove_reference();
          }
        flagHasSoundHoundNotInstalledResult = true;
        storeSoundHoundNotInstalledResult = new_value;
      }
    void unsetSoundHoundNotInstalledResult(void)
      {
        if (flagHasSoundHoundNotInstalledResult)
          {
            storeSoundHoundNotInstalledResult->remove_reference();
          }
        flagHasSoundHoundNotInstalledResult = false;
      }
    void setStartSoundHoundSearchResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartSoundHoundSearchResult)
          {
            storeStartSoundHoundSearchResult->remove_reference();
          }
        flagHasStartSoundHoundSearchResult = true;
        storeStartSoundHoundSearchResult = new_value;
      }
    void unsetStartSoundHoundSearchResult(void)
      {
        if (flagHasStartSoundHoundSearchResult)
          {
            storeStartSoundHoundSearchResult->remove_reference();
          }
        flagHasStartSoundHoundSearchResult = false;
      }
    void setCancelSoundHoundSearchResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCancelSoundHoundSearchResult)
          {
            storeCancelSoundHoundSearchResult->remove_reference();
          }
        flagHasCancelSoundHoundSearchResult = true;
        storeCancelSoundHoundSearchResult = new_value;
      }
    void unsetCancelSoundHoundSearchResult(void)
      {
        if (flagHasCancelSoundHoundSearchResult)
          {
            storeCancelSoundHoundSearchResult->remove_reference();
          }
        flagHasCancelSoundHoundSearchResult = false;
      }
    void setNoMatchResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNoMatchResult)
          {
            storeNoMatchResult->remove_reference();
          }
        flagHasNoMatchResult = true;
        storeNoMatchResult = new_value;
      }
    void unsetNoMatchResult(void)
      {
        if (flagHasNoMatchResult)
          {
            storeNoMatchResult->remove_reference();
          }
        flagHasNoMatchResult = false;
      }
    void setSingleTrackResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSingleTrackResult)
          {
            storeSingleTrackResult->remove_reference();
          }
        flagHasSingleTrackResult = true;
        storeSingleTrackResult = new_value;
      }
    void unsetSingleTrackResult(void)
      {
        if (flagHasSingleTrackResult)
          {
            storeSingleTrackResult->remove_reference();
          }
        flagHasSingleTrackResult = false;
      }
    void setSingleTrackWithArtistResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSingleTrackWithArtistResult)
          {
            storeSingleTrackWithArtistResult->remove_reference();
          }
        flagHasSingleTrackWithArtistResult = true;
        storeSingleTrackWithArtistResult = new_value;
      }
    void unsetSingleTrackWithArtistResult(void)
      {
        if (flagHasSingleTrackWithArtistResult)
          {
            storeSingleTrackWithArtistResult->remove_reference();
          }
        flagHasSingleTrackWithArtistResult = false;
      }
    void setMultipleTracksHighConfidenceResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMultipleTracksHighConfidenceResult)
          {
            storeMultipleTracksHighConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksHighConfidenceResult = true;
        storeMultipleTracksHighConfidenceResult = new_value;
      }
    void unsetMultipleTracksHighConfidenceResult(void)
      {
        if (flagHasMultipleTracksHighConfidenceResult)
          {
            storeMultipleTracksHighConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksHighConfidenceResult = false;
      }
    void setMultipleTracksWithArtistHighConfidenceResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMultipleTracksWithArtistHighConfidenceResult)
          {
            storeMultipleTracksWithArtistHighConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksWithArtistHighConfidenceResult = true;
        storeMultipleTracksWithArtistHighConfidenceResult = new_value;
      }
    void unsetMultipleTracksWithArtistHighConfidenceResult(void)
      {
        if (flagHasMultipleTracksWithArtistHighConfidenceResult)
          {
            storeMultipleTracksWithArtistHighConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksWithArtistHighConfidenceResult = false;
      }
    void setMultipleTracksMediumConfidenceResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMultipleTracksMediumConfidenceResult)
          {
            storeMultipleTracksMediumConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksMediumConfidenceResult = true;
        storeMultipleTracksMediumConfidenceResult = new_value;
      }
    void unsetMultipleTracksMediumConfidenceResult(void)
      {
        if (flagHasMultipleTracksMediumConfidenceResult)
          {
            storeMultipleTracksMediumConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksMediumConfidenceResult = false;
      }
    void setMultipleTracksLowConfidenceResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMultipleTracksLowConfidenceResult)
          {
            storeMultipleTracksLowConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksLowConfidenceResult = true;
        storeMultipleTracksLowConfidenceResult = new_value;
      }
    void unsetMultipleTracksLowConfidenceResult(void)
      {
        if (flagHasMultipleTracksLowConfidenceResult)
          {
            storeMultipleTracksLowConfidenceResult->remove_reference();
          }
        flagHasMultipleTracksLowConfidenceResult = false;
      }
    void setOutOfScopeResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOutOfScopeResult)
          {
            storeOutOfScopeResult->remove_reference();
          }
        flagHasOutOfScopeResult = true;
        storeOutOfScopeResult = new_value;
      }
    void unsetOutOfScopeResult(void)
      {
        if (flagHasOutOfScopeResult)
          {
            storeOutOfScopeResult->remove_reference();
          }
        flagHasOutOfScopeResult = false;
      }

    virtual void extraSoundHoundNowCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSoundHoundNowCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSoundHoundNowCommandLookup(key);
        if (old_field == NULL)
          {
            extraSoundHoundNowCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ncelSoundHoundSearchResult") == 0)
                            {
                            fromJSONCancelSoundHoundSearchResult(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "ue") == 0)
                            {
                            fromJSONClue(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "aunchSoundHoundAppResult") == 0)
                    {
                    fromJSONLaunchSoundHoundAppResult(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "ultipleTracks", 13) == 0)
                  {
                    switch ((unsigned char)(key[14]))
                      {
                        case 'H':
                            if (strcmp(&(key[15]), "ighConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksHighConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[15]), "owConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksLowConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[15]), "ediumConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksMediumConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[15]), "ithArtistHighConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksWithArtistHighConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "oMatchResult") == 0)
                    {
                    fromJSONNoMatchResult(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "utOfScopeResult") == 0)
                    {
                    fromJSONOutOfScopeResult(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strncmp(&(key[2]), "ngleTrack", 9) == 0)
                          {
                            switch ((unsigned char)(key[11]))
                              {
                                case 'R':
                                    if (strcmp(&(key[12]), "esult") == 0)
                                        {
                                        fromJSONSingleTrackResult(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'W':
                                    if (strcmp(&(key[12]), "ithArtistResult") == 0)
                                        {
                                        fromJSONSingleTrackWithArtistResult(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "undHoundNotInstalledResult") == 0)
                            {
                            fromJSONSoundHoundNotInstalledResult(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "artSoundHoundSearchResult") == 0)
                            {
                            fromJSONStartSoundHoundSearchResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraSoundHoundNowCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ncelSoundHoundSearchResult") == 0)
                            {
                            fromJSONCancelSoundHoundSearchResult(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "ue") == 0)
                            {
                            fromJSONClue(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "aunchSoundHoundAppResult") == 0)
                    {
                    fromJSONLaunchSoundHoundAppResult(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "ultipleTracks", 13) == 0)
                  {
                    switch ((unsigned char)(key[14]))
                      {
                        case 'H':
                            if (strcmp(&(key[15]), "ighConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksHighConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        case 'L':
                            if (strcmp(&(key[15]), "owConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksLowConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[15]), "ediumConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksMediumConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[15]), "ithArtistHighConfidenceResult") == 0)
                                {
                                fromJSONMultipleTracksWithArtistHighConfidenceResult(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "oMatchResult") == 0)
                    {
                    fromJSONNoMatchResult(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "utOfScopeResult") == 0)
                    {
                    fromJSONOutOfScopeResult(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strncmp(&(key[2]), "ngleTrack", 9) == 0)
                          {
                            switch ((unsigned char)(key[11]))
                              {
                                case 'R':
                                    if (strcmp(&(key[12]), "esult") == 0)
                                        {
                                        fromJSONSingleTrackResult(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'W':
                                    if (strcmp(&(key[12]), "ithArtistResult") == 0)
                                        {
                                        fromJSONSingleTrackWithArtistResult(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "undHoundNotInstalledResult") == 0)
                            {
                            fromJSONSoundHoundNotInstalledResult(new_component, false);
                            return;
                            }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "artSoundHoundSearchResult") == 0)
                            {
                            fromJSONStartSoundHoundSearchResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraSoundHoundNowCommandSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
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
        CommandResultJSON::write_fields_as_json(handler);
        if (flagHasClue)
          {
            handler->start_pair("Clue");
            switch (storeClue)
              {
                case Clue_Music:
                    handler->string_value("Music");
                    break;
                case Clue_SoundTrack:
                    handler->string_value("SoundTrack");
                    break;
                case Clue_Singing:
                    handler->string_value("Singing");
                    break;
                case Clue_Humming:
                    handler->string_value("Humming");
                    break;
                case Clue_TV:
                    handler->string_value("TV");
                    break;
                case Clue_Movies:
                    handler->string_value("Movies");
                    break;
                case Clue_Ad:
                    handler->string_value("Ad");
                    break;
                case Clue_Other:
                    handler->string_value("Other");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLaunchSoundHoundAppResult)
          {
            handler->start_pair("LaunchSoundHoundAppResult");
            storeLaunchSoundHoundAppResult->write_as_json(handler);
          }
        if (flagHasSoundHoundNotInstalledResult)
          {
            handler->start_pair("SoundHoundNotInstalledResult");
            storeSoundHoundNotInstalledResult->write_as_json(handler);
          }
        if (flagHasStartSoundHoundSearchResult)
          {
            handler->start_pair("StartSoundHoundSearchResult");
            storeStartSoundHoundSearchResult->write_as_json(handler);
          }
        if (flagHasCancelSoundHoundSearchResult)
          {
            handler->start_pair("CancelSoundHoundSearchResult");
            storeCancelSoundHoundSearchResult->write_as_json(handler);
          }
        if (flagHasNoMatchResult)
          {
            handler->start_pair("NoMatchResult");
            storeNoMatchResult->write_as_json(handler);
          }
        if (flagHasSingleTrackResult)
          {
            handler->start_pair("SingleTrackResult");
            storeSingleTrackResult->write_as_json(handler);
          }
        if (flagHasSingleTrackWithArtistResult)
          {
            handler->start_pair("SingleTrackWithArtistResult");
            storeSingleTrackWithArtistResult->write_as_json(handler);
          }
        if (flagHasMultipleTracksHighConfidenceResult)
          {
            handler->start_pair("MultipleTracksHighConfidenceResult");
            storeMultipleTracksHighConfidenceResult->write_as_json(handler);
          }
        if (flagHasMultipleTracksWithArtistHighConfidenceResult)
          {
            handler->start_pair("MultipleTracksWithArtistHighConfidenceResult");
            storeMultipleTracksWithArtistHighConfidenceResult->write_as_json(handler);
          }
        if (flagHasMultipleTracksMediumConfidenceResult)
          {
            handler->start_pair("MultipleTracksMediumConfidenceResult");
            storeMultipleTracksMediumConfidenceResult->write_as_json(handler);
          }
        if (flagHasMultipleTracksLowConfidenceResult)
          {
            handler->start_pair("MultipleTracksLowConfidenceResult");
            storeMultipleTracksLowConfidenceResult->write_as_json(handler);
          }
        if (flagHasOutOfScopeResult)
          {
            handler->start_pair("OutOfScopeResult");
            storeOutOfScopeResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SoundHoundNowCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SoundHoundNowCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SoundHoundNowCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundNowCommandJSON>, SoundHoundNowCommandJSON *, bool> generator("Type SoundHoundNowCommand", ignore_extras);
            parse_json_value(text, "Text for SoundHoundNowCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SoundHoundNowCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SoundHoundNowCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundNowCommandJSON>, SoundHoundNowCommandJSON *, bool> generator("Type SoundHoundNowCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
    class FieldGeneratorClue : public JSONStringGenerator
          {
          protected:
            FieldGeneratorClue(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorClue(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToClue(result));
              }
            virtual void handle_result(TypeClue result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorClue, TypeClue, TypeClue > fieldGeneratorClue;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorLaunchSoundHoundAppResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSoundHoundNotInstalledResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorStartSoundHoundSearchResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorCancelSoundHoundSearchResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorNoMatchResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSingleTrackResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSingleTrackWithArtistResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorMultipleTracksHighConfidenceResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorMultipleTracksWithArtistHighConfidenceResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorMultipleTracksMediumConfidenceResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorMultipleTracksLowConfidenceResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorOutOfScopeResult;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "SoundHoundNowCommand") == 0))
                throw("The key field has a value other than `SoundHoundNowCommand'.");
            SoundHoundNowCommandJSON *result = new SoundHoundNowCommandJSON();
            assert(result != NULL);
            RCHandle<SoundHoundNowCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSoundHoundNowCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((SoundHoundNowCommandJSON *)new_result);
          }
        void finish(SoundHoundNowCommandJSON *result)
          {
            if (fieldGeneratorClue.have_value)
              {
                result->setClue(fieldGeneratorClue.value);
                fieldGeneratorClue.have_value = false;
              }
            if (fieldGeneratorLaunchSoundHoundAppResult.have_value)
              {
                result->setLaunchSoundHoundAppResult(fieldGeneratorLaunchSoundHoundAppResult.value.referenced());
                fieldGeneratorLaunchSoundHoundAppResult.have_value = false;
              }
            if (fieldGeneratorSoundHoundNotInstalledResult.have_value)
              {
                result->setSoundHoundNotInstalledResult(fieldGeneratorSoundHoundNotInstalledResult.value.referenced());
                fieldGeneratorSoundHoundNotInstalledResult.have_value = false;
              }
            if (fieldGeneratorStartSoundHoundSearchResult.have_value)
              {
                result->setStartSoundHoundSearchResult(fieldGeneratorStartSoundHoundSearchResult.value.referenced());
                fieldGeneratorStartSoundHoundSearchResult.have_value = false;
              }
            if (fieldGeneratorCancelSoundHoundSearchResult.have_value)
              {
                result->setCancelSoundHoundSearchResult(fieldGeneratorCancelSoundHoundSearchResult.value.referenced());
                fieldGeneratorCancelSoundHoundSearchResult.have_value = false;
              }
            if (fieldGeneratorNoMatchResult.have_value)
              {
                result->setNoMatchResult(fieldGeneratorNoMatchResult.value.referenced());
                fieldGeneratorNoMatchResult.have_value = false;
              }
            if (fieldGeneratorSingleTrackResult.have_value)
              {
                result->setSingleTrackResult(fieldGeneratorSingleTrackResult.value.referenced());
                fieldGeneratorSingleTrackResult.have_value = false;
              }
            if (fieldGeneratorSingleTrackWithArtistResult.have_value)
              {
                result->setSingleTrackWithArtistResult(fieldGeneratorSingleTrackWithArtistResult.value.referenced());
                fieldGeneratorSingleTrackWithArtistResult.have_value = false;
              }
            if (fieldGeneratorMultipleTracksHighConfidenceResult.have_value)
              {
                result->setMultipleTracksHighConfidenceResult(fieldGeneratorMultipleTracksHighConfidenceResult.value.referenced());
                fieldGeneratorMultipleTracksHighConfidenceResult.have_value = false;
              }
            if (fieldGeneratorMultipleTracksWithArtistHighConfidenceResult.have_value)
              {
                result->setMultipleTracksWithArtistHighConfidenceResult(fieldGeneratorMultipleTracksWithArtistHighConfidenceResult.value.referenced());
                fieldGeneratorMultipleTracksWithArtistHighConfidenceResult.have_value = false;
              }
            if (fieldGeneratorMultipleTracksMediumConfidenceResult.have_value)
              {
                result->setMultipleTracksMediumConfidenceResult(fieldGeneratorMultipleTracksMediumConfidenceResult.value.referenced());
                fieldGeneratorMultipleTracksMediumConfidenceResult.have_value = false;
              }
            if (fieldGeneratorMultipleTracksLowConfidenceResult.have_value)
              {
                result->setMultipleTracksLowConfidenceResult(fieldGeneratorMultipleTracksLowConfidenceResult.value.referenced());
                fieldGeneratorMultipleTracksLowConfidenceResult.have_value = false;
              }
            if (fieldGeneratorOutOfScopeResult.have_value)
              {
                result->setOutOfScopeResult(fieldGeneratorOutOfScopeResult.value.referenced());
                fieldGeneratorOutOfScopeResult.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(SoundHoundNowCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ncelSoundHoundSearchResult") == 0)
                                return &fieldGeneratorCancelSoundHoundSearchResult;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "ue") == 0)
                                return &fieldGeneratorClue;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "aunchSoundHoundAppResult") == 0)
                        return &fieldGeneratorLaunchSoundHoundAppResult;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "ultipleTracks", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 'H':
                                if (strcmp(&(field_name[15]), "ighConfidenceResult") == 0)
                                    return &fieldGeneratorMultipleTracksHighConfidenceResult;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[15]), "owConfidenceResult") == 0)
                                    return &fieldGeneratorMultipleTracksLowConfidenceResult;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[15]), "ediumConfidenceResult") == 0)
                                    return &fieldGeneratorMultipleTracksMediumConfidenceResult;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[15]), "ithArtistHighConfidenceResult") == 0)
                                    return &fieldGeneratorMultipleTracksWithArtistHighConfidenceResult;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "oMatchResult") == 0)
                        return &fieldGeneratorNoMatchResult;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utOfScopeResult") == 0)
                        return &fieldGeneratorOutOfScopeResult;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "ngleTrack", 9) == 0)
                              {
                                switch ((unsigned char)(field_name[11]))
                                  {
                                    case 'R':
                                        if (strcmp(&(field_name[12]), "esult") == 0)
                                            return &fieldGeneratorSingleTrackResult;
                                        break;
                                    case 'W':
                                        if (strcmp(&(field_name[12]), "ithArtistResult") == 0)
                                            return &fieldGeneratorSingleTrackWithArtistResult;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "undHoundNotInstalledResult") == 0)
                                return &fieldGeneratorSoundHoundNotInstalledResult;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "artSoundHoundSearchResult") == 0)
                                return &fieldGeneratorStartSoundHoundSearchResult;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorClue("field \"Clue\" of the SoundHoundNowCommand class"), fieldGeneratorLaunchSoundHoundAppResult("field \"LaunchSoundHoundAppResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorSoundHoundNotInstalledResult("field \"SoundHoundNotInstalledResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorStartSoundHoundSearchResult("field \"StartSoundHoundSearchResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorCancelSoundHoundSearchResult("field \"CancelSoundHoundSearchResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorNoMatchResult("field \"NoMatchResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorSingleTrackResult("field \"SingleTrackResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorSingleTrackWithArtistResult("field \"SingleTrackWithArtistResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorMultipleTracksHighConfidenceResult("field \"MultipleTracksHighConfidenceResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorMultipleTracksWithArtistHighConfidenceResult("field \"MultipleTracksWithArtistHighConfidenceResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorMultipleTracksMediumConfidenceResult("field \"MultipleTracksMediumConfidenceResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorMultipleTracksLowConfidenceResult("field \"MultipleTracksLowConfidenceResult\" of the SoundHoundNowCommand class", ignore_extras), fieldGeneratorOutOfScopeResult("field \"OutOfScopeResult\" of the SoundHoundNowCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SoundHoundNowCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorClue.reset();
            fieldGeneratorLaunchSoundHoundAppResult.reset();
            fieldGeneratorSoundHoundNotInstalledResult.reset();
            fieldGeneratorStartSoundHoundSearchResult.reset();
            fieldGeneratorCancelSoundHoundSearchResult.reset();
            fieldGeneratorNoMatchResult.reset();
            fieldGeneratorSingleTrackResult.reset();
            fieldGeneratorSingleTrackWithArtistResult.reset();
            fieldGeneratorMultipleTracksHighConfidenceResult.reset();
            fieldGeneratorMultipleTracksWithArtistHighConfidenceResult.reset();
            fieldGeneratorMultipleTracksMediumConfidenceResult.reset();
            fieldGeneratorMultipleTracksLowConfidenceResult.reset();
            fieldGeneratorOutOfScopeResult.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SOUNDHOUNDNOWCOMMANDJSON_H */
