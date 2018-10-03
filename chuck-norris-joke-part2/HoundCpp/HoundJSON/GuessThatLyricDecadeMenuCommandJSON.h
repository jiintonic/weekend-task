/* file "GuessThatLyricDecadeMenuCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GUESSTHATLYRICDECADEMENUCOMMANDJSON_H
#define GUESSTHATLYRICDECADEMENUCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "OInteger.h"
#include "MusicTrackJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GuessThatLyricDecadeMenuCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasDecade;
    OInteger storeDecade;
    bool flagHasGuessedCorrectly;
    OInteger storeGuessedCorrectly;
    bool flagHasHintsRemaining;
    uint8_t storeHintsRemaining;
    bool flagHasDifficulty;
    std::string storeDifficulty;
    bool flagHasCorrectAnswer;
    std::string storeCorrectAnswer;
    bool flagHasQuestion;
    std::string storeQuestion;
    bool flagHasSoundhoundLyricID;
    std::string storeSoundhoundLyricID;
    bool flagHasGTLSoundhoundTrackID;
    std::string storeGTLSoundhoundTrackID;
    bool flagHasCorrectTitle;
    std::string storeCorrectTitle;
    bool flagHasCorrectArtist;
    std::string storeCorrectArtist;
    bool flagHasPlayerLost;
    bool storePlayerLost;
    bool flagHasGuessedTracksList;
    std::vector< MusicTrackJSON * > storeGuessedTracksList;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    GuessThatLyricDecadeMenuCommandJSON(const GuessThatLyricDecadeMenuCommandJSON &);
    GuessThatLyricDecadeMenuCommandJSON & operator=(const GuessThatLyricDecadeMenuCommandJSON &other);

    JSONValue * extraDecadeToJSON(void) const;
    JSONValue * extraGuessedCorrectlyToJSON(void) const;
    JSONValue * extraHintsRemainingToJSON(void) const;
    JSONValue * extraDifficultyToJSON(void) const;
    JSONValue * extraCorrectAnswerToJSON(void) const;
    JSONValue * extraQuestionToJSON(void) const;
    JSONValue * extraSoundhoundLyricIDToJSON(void) const;
    JSONValue * extraGTLSoundhoundTrackIDToJSON(void) const;
    JSONValue * extraCorrectTitleToJSON(void) const;
    JSONValue * extraCorrectArtistToJSON(void) const;
    JSONValue * extraPlayerLostToJSON(void) const;
    JSONValue * extraGuessedTracksListToJSON(void) const;

    void  fromJSONDecade(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGuessedCorrectly(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHintsRemaining(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDifficulty(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCorrectAnswer(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuestion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGTLSoundhoundTrackID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCorrectTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCorrectArtist(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlayerLost(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGuessedTracksList(JSONValue *json_value, bool ignore_extras = false);


  public:
    GuessThatLyricDecadeMenuCommandJSON(void);
    virtual ~GuessThatLyricDecadeMenuCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasDecade(void) const;
    OInteger  getDecade(void);
    const OInteger  getDecade(void) const;
    bool  hasGuessedCorrectly(void) const;
    OInteger  getGuessedCorrectly(void);
    const OInteger  getGuessedCorrectly(void) const;
    bool  hasHintsRemaining(void) const;
    uint8_t  getHintsRemaining(void);
    const uint8_t  getHintsRemaining(void) const;
    bool  hasDifficulty(void) const;
    std::string  getDifficulty(void);
    const std::string  getDifficulty(void) const;
    bool  hasCorrectAnswer(void) const;
    std::string  getCorrectAnswer(void);
    const std::string  getCorrectAnswer(void) const;
    bool  hasQuestion(void) const;
    std::string  getQuestion(void);
    const std::string  getQuestion(void) const;
    bool  hasSoundhoundLyricID(void) const;
    std::string  getSoundhoundLyricID(void);
    const std::string  getSoundhoundLyricID(void) const;
    bool  hasGTLSoundhoundTrackID(void) const;
    std::string  getGTLSoundhoundTrackID(void);
    const std::string  getGTLSoundhoundTrackID(void) const;
    bool  hasCorrectTitle(void) const;
    std::string  getCorrectTitle(void);
    const std::string  getCorrectTitle(void) const;
    bool  hasCorrectArtist(void) const;
    std::string  getCorrectArtist(void);
    const std::string  getCorrectArtist(void) const;
    bool  hasPlayerLost(void) const;
    bool  getPlayerLost(void);
    const bool  getPlayerLost(void) const;
    bool  hasGuessedTracksList(void) const;
    size_t  countOfGuessedTracksList(void) const;
    MusicTrackJSON *  elementOfGuessedTracksList(size_t element_num);
    const MusicTrackJSON *  elementOfGuessedTracksList(size_t element_num) const;
    std::vector< MusicTrackJSON * >  getGuessedTracksList(void);
    const std::vector< MusicTrackJSON * >  getGuessedTracksList(void) const;

    virtual size_t extraGuessThatLyricDecadeMenuCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraGuessThatLyricDecadeMenuCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraGuessThatLyricDecadeMenuCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraGuessThatLyricDecadeMenuCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraGuessThatLyricDecadeMenuCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraGuessThatLyricDecadeMenuCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDecade)
            ++result;
        if (flagHasGuessedCorrectly)
            ++result;
        if (flagHasHintsRemaining)
            ++result;
        if (flagHasDifficulty)
            ++result;
        if (flagHasCorrectAnswer)
            ++result;
        if (flagHasQuestion)
            ++result;
        if (flagHasSoundhoundLyricID)
            ++result;
        if (flagHasGTLSoundhoundTrackID)
            ++result;
        if (flagHasCorrectTitle)
            ++result;
        if (flagHasCorrectArtist)
            ++result;
        if (flagHasPlayerLost)
            ++result;
        if (flagHasGuessedTracksList)
            ++result;
        result += extraGuessThatLyricDecadeMenuCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDecade)
          {
            if (remainder == 0)
                return "Decade";
            --remainder;
          }
        if (flagHasGuessedCorrectly)
          {
            if (remainder == 0)
                return "GuessedCorrectly";
            --remainder;
          }
        if (flagHasHintsRemaining)
          {
            if (remainder == 0)
                return "HintsRemaining";
            --remainder;
          }
        if (flagHasDifficulty)
          {
            if (remainder == 0)
                return "Difficulty";
            --remainder;
          }
        if (flagHasCorrectAnswer)
          {
            if (remainder == 0)
                return "CorrectAnswer";
            --remainder;
          }
        if (flagHasQuestion)
          {
            if (remainder == 0)
                return "Question";
            --remainder;
          }
        if (flagHasSoundhoundLyricID)
          {
            if (remainder == 0)
                return "SoundhoundLyricID";
            --remainder;
          }
        if (flagHasGTLSoundhoundTrackID)
          {
            if (remainder == 0)
                return "GTLSoundhoundTrackID";
            --remainder;
          }
        if (flagHasCorrectTitle)
          {
            if (remainder == 0)
                return "CorrectTitle";
            --remainder;
          }
        if (flagHasCorrectArtist)
          {
            if (remainder == 0)
                return "CorrectArtist";
            --remainder;
          }
        if (flagHasPlayerLost)
          {
            if (remainder == 0)
                return "PlayerLost";
            --remainder;
          }
        if (flagHasGuessedTracksList)
          {
            if (remainder == 0)
                return "GuessedTracksList";
            --remainder;
          }
        return extraGuessThatLyricDecadeMenuCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDecade)
          {
            if (remainder == 0)
                return extraDecadeToJSON();
            --remainder;
          }
        if (flagHasGuessedCorrectly)
          {
            if (remainder == 0)
                return extraGuessedCorrectlyToJSON();
            --remainder;
          }
        if (flagHasHintsRemaining)
          {
            if (remainder == 0)
                return extraHintsRemainingToJSON();
            --remainder;
          }
        if (flagHasDifficulty)
          {
            if (remainder == 0)
                return extraDifficultyToJSON();
            --remainder;
          }
        if (flagHasCorrectAnswer)
          {
            if (remainder == 0)
                return extraCorrectAnswerToJSON();
            --remainder;
          }
        if (flagHasQuestion)
          {
            if (remainder == 0)
                return extraQuestionToJSON();
            --remainder;
          }
        if (flagHasSoundhoundLyricID)
          {
            if (remainder == 0)
                return extraSoundhoundLyricIDToJSON();
            --remainder;
          }
        if (flagHasGTLSoundhoundTrackID)
          {
            if (remainder == 0)
                return extraGTLSoundhoundTrackIDToJSON();
            --remainder;
          }
        if (flagHasCorrectTitle)
          {
            if (remainder == 0)
                return extraCorrectTitleToJSON();
            --remainder;
          }
        if (flagHasCorrectArtist)
          {
            if (remainder == 0)
                return extraCorrectArtistToJSON();
            --remainder;
          }
        if (flagHasPlayerLost)
          {
            if (remainder == 0)
                return extraPlayerLostToJSON();
            --remainder;
          }
        if (flagHasGuessedTracksList)
          {
            if (remainder == 0)
                return extraGuessedTracksListToJSON();
            --remainder;
          }
        return extraGuessThatLyricDecadeMenuCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDecade)
          {
            if (remainder == 0)
                return extraDecadeToJSON();
            --remainder;
          }
        if (flagHasGuessedCorrectly)
          {
            if (remainder == 0)
                return extraGuessedCorrectlyToJSON();
            --remainder;
          }
        if (flagHasHintsRemaining)
          {
            if (remainder == 0)
                return extraHintsRemainingToJSON();
            --remainder;
          }
        if (flagHasDifficulty)
          {
            if (remainder == 0)
                return extraDifficultyToJSON();
            --remainder;
          }
        if (flagHasCorrectAnswer)
          {
            if (remainder == 0)
                return extraCorrectAnswerToJSON();
            --remainder;
          }
        if (flagHasQuestion)
          {
            if (remainder == 0)
                return extraQuestionToJSON();
            --remainder;
          }
        if (flagHasSoundhoundLyricID)
          {
            if (remainder == 0)
                return extraSoundhoundLyricIDToJSON();
            --remainder;
          }
        if (flagHasGTLSoundhoundTrackID)
          {
            if (remainder == 0)
                return extraGTLSoundhoundTrackIDToJSON();
            --remainder;
          }
        if (flagHasCorrectTitle)
          {
            if (remainder == 0)
                return extraCorrectTitleToJSON();
            --remainder;
          }
        if (flagHasCorrectArtist)
          {
            if (remainder == 0)
                return extraCorrectArtistToJSON();
            --remainder;
          }
        if (flagHasPlayerLost)
          {
            if (remainder == 0)
                return extraPlayerLostToJSON();
            --remainder;
          }
        if (flagHasGuessedTracksList)
          {
            if (remainder == 0)
                return extraGuessedTracksListToJSON();
            --remainder;
          }
        return extraGuessThatLyricDecadeMenuCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "orrect", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 'n':
                                    if (strcmp(&(field_name[9]), "swer") == 0)
                                        return (flagHasCorrectAnswer ? extraCorrectAnswerToJSON() : NULL);
                                    break;
                                case 'r':
                                    if (strcmp(&(field_name[9]), "tist") == 0)
                                        return (flagHasCorrectArtist ? extraCorrectArtistToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "itle") == 0)
                                return (flagHasCorrectTitle ? extraCorrectTitleToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "cade") == 0)
                            return (flagHasDecade ? extraDecadeToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "fficulty") == 0)
                            return (flagHasDifficulty ? extraDifficultyToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'G':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'T':
                        if (strcmp(&(field_name[2]), "LSoundhoundTrackID") == 0)
                            return (flagHasGTLSoundhoundTrackID ? extraGTLSoundhoundTrackIDToJSON() : NULL);
                        break;
                    case 'u':
                        if (strncmp(&(field_name[2]), "essed", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'C':
                                    if (strcmp(&(field_name[8]), "orrectly") == 0)
                                        return (flagHasGuessedCorrectly ? extraGuessedCorrectlyToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[8]), "racksList") == 0)
                                        return (flagHasGuessedTracksList ? extraGuessedTracksListToJSON() : NULL);
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
                if (strcmp(&(field_name[1]), "intsRemaining") == 0)
                    return (flagHasHintsRemaining ? extraHintsRemainingToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "layerLost") == 0)
                    return (flagHasPlayerLost ? extraPlayerLostToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uestion") == 0)
                    return (flagHasQuestion ? extraQuestionToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "oundhoundLyricID") == 0)
                    return (flagHasSoundhoundLyricID ? extraSoundhoundLyricIDToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraGuessThatLyricDecadeMenuCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "orrect", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 'n':
                                    if (strcmp(&(field_name[9]), "swer") == 0)
                                        return (flagHasCorrectAnswer ? extraCorrectAnswerToJSON() : NULL);
                                    break;
                                case 'r':
                                    if (strcmp(&(field_name[9]), "tist") == 0)
                                        return (flagHasCorrectArtist ? extraCorrectArtistToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "itle") == 0)
                                return (flagHasCorrectTitle ? extraCorrectTitleToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "cade") == 0)
                            return (flagHasDecade ? extraDecadeToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "fficulty") == 0)
                            return (flagHasDifficulty ? extraDifficultyToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'G':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'T':
                        if (strcmp(&(field_name[2]), "LSoundhoundTrackID") == 0)
                            return (flagHasGTLSoundhoundTrackID ? extraGTLSoundhoundTrackIDToJSON() : NULL);
                        break;
                    case 'u':
                        if (strncmp(&(field_name[2]), "essed", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'C':
                                    if (strcmp(&(field_name[8]), "orrectly") == 0)
                                        return (flagHasGuessedCorrectly ? extraGuessedCorrectlyToJSON() : NULL);
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[8]), "racksList") == 0)
                                        return (flagHasGuessedTracksList ? extraGuessedTracksListToJSON() : NULL);
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
                if (strcmp(&(field_name[1]), "intsRemaining") == 0)
                    return (flagHasHintsRemaining ? extraHintsRemainingToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "layerLost") == 0)
                    return (flagHasPlayerLost ? extraPlayerLostToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uestion") == 0)
                    return (flagHasQuestion ? extraQuestionToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "oundhoundLyricID") == 0)
                    return (flagHasSoundhoundLyricID ? extraSoundhoundLyricIDToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraGuessThatLyricDecadeMenuCommandLookup(field_name);
      }

    void setDecade(OInteger new_value)
      {
        flagHasDecade = true;
        if (new_value < 0)
            throw("The value for field Decade of GuessThatLyricDecadeMenuCommandJSON is less than the lower bound (0) for that field.");
        storeDecade = new_value;
      }
    void unsetDecade(void)
      {
        flagHasDecade = false;
      }
    void setGuessedCorrectly(OInteger new_value)
      {
        flagHasGuessedCorrectly = true;
        if (new_value < 0)
            throw("The value for field GuessedCorrectly of GuessThatLyricDecadeMenuCommandJSON is less than the lower bound (0) for that field.");
        storeGuessedCorrectly = new_value;
      }
    void unsetGuessedCorrectly(void)
      {
        flagHasGuessedCorrectly = false;
      }
    void setHintsRemaining(uint8_t new_value)
      {
        flagHasHintsRemaining = true;
        if (new_value < 0)
            throw("The value for field HintsRemaining of GuessThatLyricDecadeMenuCommandJSON is less than the lower bound (0) for that field.");
        if (new_value > 4)
            throw("The value for field HintsRemaining of GuessThatLyricDecadeMenuCommandJSON is greater than the upper bound (4) for that field.");
        storeHintsRemaining = new_value;
      }
    void unsetHintsRemaining(void)
      {
        flagHasHintsRemaining = false;
      }
    void setDifficulty(std::string new_value)
      {
        flagHasDifficulty = true;
        storeDifficulty = new_value;
      }
    void unsetDifficulty(void)
      {
        flagHasDifficulty = false;
      }
    void setCorrectAnswer(std::string new_value)
      {
        flagHasCorrectAnswer = true;
        storeCorrectAnswer = new_value;
      }
    void unsetCorrectAnswer(void)
      {
        flagHasCorrectAnswer = false;
      }
    void setQuestion(std::string new_value)
      {
        flagHasQuestion = true;
        storeQuestion = new_value;
      }
    void unsetQuestion(void)
      {
        flagHasQuestion = false;
      }
    void setSoundhoundLyricID(std::string new_value)
      {
        flagHasSoundhoundLyricID = true;
        storeSoundhoundLyricID = new_value;
      }
    void unsetSoundhoundLyricID(void)
      {
        flagHasSoundhoundLyricID = false;
      }
    void setGTLSoundhoundTrackID(std::string new_value)
      {
        flagHasGTLSoundhoundTrackID = true;
        storeGTLSoundhoundTrackID = new_value;
      }
    void unsetGTLSoundhoundTrackID(void)
      {
        flagHasGTLSoundhoundTrackID = false;
      }
    void setCorrectTitle(std::string new_value)
      {
        flagHasCorrectTitle = true;
        storeCorrectTitle = new_value;
      }
    void unsetCorrectTitle(void)
      {
        flagHasCorrectTitle = false;
      }
    void setCorrectArtist(std::string new_value)
      {
        flagHasCorrectArtist = true;
        storeCorrectArtist = new_value;
      }
    void unsetCorrectArtist(void)
      {
        flagHasCorrectArtist = false;
      }
    void setPlayerLost(bool new_value)
      {
        flagHasPlayerLost = true;
        storePlayerLost = new_value;
      }
    void unsetPlayerLost(void)
      {
        flagHasPlayerLost = false;
      }
    void initGuessedTracksList(void)
      {
        if (flagHasGuessedTracksList)
          {
            for (size_t num2 = 0; num2 < storeGuessedTracksList.size(); ++num2)
              {
                storeGuessedTracksList[num2]->remove_reference();
              }
          }
        flagHasGuessedTracksList = true;
        storeGuessedTracksList.clear();
      }
    void appendGuessedTracksList(MusicTrackJSON * to_append)
      {
        if (!flagHasGuessedTracksList)
          {
            flagHasGuessedTracksList = true;
            storeGuessedTracksList.clear();
          }
        assert(flagHasGuessedTracksList);
        to_append->add_reference();
        storeGuessedTracksList.push_back(to_append);
      }
    void unsetGuessedTracksList(void)
      {
        if (flagHasGuessedTracksList)
          {
            for (size_t num3 = 0; num3 < storeGuessedTracksList.size(); ++num3)
              {
                storeGuessedTracksList[num3]->remove_reference();
              }
          }
        flagHasGuessedTracksList = false;
        storeGuessedTracksList.clear();
      }

    virtual void extraGuessThatLyricDecadeMenuCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraGuessThatLyricDecadeMenuCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraGuessThatLyricDecadeMenuCommandLookup(key);
        if (old_field == NULL)
          {
            extraGuessThatLyricDecadeMenuCommandAppendPair(key, new_component);
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
                if (strncmp(&(key[1]), "orrect", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            switch ((unsigned char)(key[8]))
                              {
                                case 'n':
                                    if (strcmp(&(key[9]), "swer") == 0)
                                        {
                                        fromJSONCorrectAnswer(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'r':
                                    if (strcmp(&(key[9]), "tist") == 0)
                                        {
                                        fromJSONCorrectArtist(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "itle") == 0)
                                {
                                fromJSONCorrectTitle(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "cade") == 0)
                            {
                            fromJSONDecade(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "fficulty") == 0)
                            {
                            fromJSONDifficulty(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'G':
                switch ((unsigned char)(key[1]))
                  {
                    case 'T':
                        if (strcmp(&(key[2]), "LSoundhoundTrackID") == 0)
                            {
                            fromJSONGTLSoundhoundTrackID(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strncmp(&(key[2]), "essed", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 'C':
                                    if (strcmp(&(key[8]), "orrectly") == 0)
                                        {
                                        fromJSONGuessedCorrectly(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[8]), "racksList") == 0)
                                        {
                                        fromJSONGuessedTracksList(new_component, false);
                                        return;
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
            case 'H':
                if (strcmp(&(key[1]), "intsRemaining") == 0)
                    {
                    fromJSONHintsRemaining(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "layerLost") == 0)
                    {
                    fromJSONPlayerLost(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uestion") == 0)
                    {
                    fromJSONQuestion(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "oundhoundLyricID") == 0)
                    {
                    fromJSONSoundhoundLyricID(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraGuessThatLyricDecadeMenuCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strncmp(&(key[1]), "orrect", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            switch ((unsigned char)(key[8]))
                              {
                                case 'n':
                                    if (strcmp(&(key[9]), "swer") == 0)
                                        {
                                        fromJSONCorrectAnswer(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'r':
                                    if (strcmp(&(key[9]), "tist") == 0)
                                        {
                                        fromJSONCorrectArtist(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "itle") == 0)
                                {
                                fromJSONCorrectTitle(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "cade") == 0)
                            {
                            fromJSONDecade(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "fficulty") == 0)
                            {
                            fromJSONDifficulty(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'G':
                switch ((unsigned char)(key[1]))
                  {
                    case 'T':
                        if (strcmp(&(key[2]), "LSoundhoundTrackID") == 0)
                            {
                            fromJSONGTLSoundhoundTrackID(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strncmp(&(key[2]), "essed", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 'C':
                                    if (strcmp(&(key[8]), "orrectly") == 0)
                                        {
                                        fromJSONGuessedCorrectly(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'T':
                                    if (strcmp(&(key[8]), "racksList") == 0)
                                        {
                                        fromJSONGuessedTracksList(new_component, false);
                                        return;
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
            case 'H':
                if (strcmp(&(key[1]), "intsRemaining") == 0)
                    {
                    fromJSONHintsRemaining(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "layerLost") == 0)
                    {
                    fromJSONPlayerLost(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uestion") == 0)
                    {
                    fromJSONQuestion(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "oundhoundLyricID") == 0)
                    {
                    fromJSONSoundhoundLyricID(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraGuessThatLyricDecadeMenuCommandSetField(key, new_component);
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
        assert(flagHasDecade);
        handler->start_pair("Decade");
        handler->number_value(storeDecade.get_o_integer());
        assert(flagHasGuessedCorrectly);
        handler->start_pair("GuessedCorrectly");
        handler->number_value(storeGuessedCorrectly.get_o_integer());
        assert(flagHasHintsRemaining);
        handler->start_pair("HintsRemaining");
        handler->number_value(storeHintsRemaining);
        assert(flagHasDifficulty);
        handler->start_pair("Difficulty");
        handler->string_value(storeDifficulty);
        assert(flagHasCorrectAnswer);
        handler->start_pair("CorrectAnswer");
        handler->string_value(storeCorrectAnswer);
        assert(flagHasQuestion);
        handler->start_pair("Question");
        handler->string_value(storeQuestion);
        assert(flagHasSoundhoundLyricID);
        handler->start_pair("SoundhoundLyricID");
        handler->string_value(storeSoundhoundLyricID);
        assert(flagHasGTLSoundhoundTrackID);
        handler->start_pair("GTLSoundhoundTrackID");
        handler->string_value(storeGTLSoundhoundTrackID);
        assert(flagHasCorrectTitle);
        handler->start_pair("CorrectTitle");
        handler->string_value(storeCorrectTitle);
        assert(flagHasCorrectArtist);
        handler->start_pair("CorrectArtist");
        handler->string_value(storeCorrectArtist);
        if (flagHasPlayerLost)
          {
            handler->start_pair("PlayerLost");
            handler->boolean_value(storePlayerLost);
          }
        if (flagHasGuessedTracksList)
          {
            handler->start_pair("GuessedTracksList");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeGuessedTracksList.size(); ++num1)
              {
                storeGuessedTracksList[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDecade()))
          {
            return "When parsing the object for %what%, the \"Decade\" field was missing.";
          }
        if (!(hasGuessedCorrectly()))
          {
            return "When parsing the object for %what%, the \"GuessedCorrectly\" field was missing.";
          }
        if (!(hasHintsRemaining()))
          {
            return "When parsing the object for %what%, the \"HintsRemaining\" field was missing.";
          }
        if (!(hasDifficulty()))
          {
            return "When parsing the object for %what%, the \"Difficulty\" field was missing.";
          }
        if (!(hasCorrectAnswer()))
          {
            return "When parsing the object for %what%, the \"CorrectAnswer\" field was missing.";
          }
        if (!(hasQuestion()))
          {
            return "When parsing the object for %what%, the \"Question\" field was missing.";
          }
        if (!(hasSoundhoundLyricID()))
          {
            return "When parsing the object for %what%, the \"SoundhoundLyricID\" field was missing.";
          }
        if (!(hasGTLSoundhoundTrackID()))
          {
            return "When parsing the object for %what%, the \"GTLSoundhoundTrackID\" field was missing.";
          }
        if (!(hasCorrectTitle()))
          {
            return "When parsing the object for %what%, the \"CorrectTitle\" field was missing.";
          }
        if (!(hasCorrectArtist()))
          {
            return "When parsing the object for %what%, the \"CorrectArtist\" field was missing.";
          }
        return NULL;
      }

    static GuessThatLyricDecadeMenuCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GuessThatLyricDecadeMenuCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GuessThatLyricDecadeMenuCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricDecadeMenuCommandJSON>, GuessThatLyricDecadeMenuCommandJSON *, bool> generator("Type GuessThatLyricDecadeMenuCommand", ignore_extras);
            parse_json_value(text, "Text for GuessThatLyricDecadeMenuCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GuessThatLyricDecadeMenuCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GuessThatLyricDecadeMenuCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricDecadeMenuCommandJSON>, GuessThatLyricDecadeMenuCommandJSON *, bool> generator("Type GuessThatLyricDecadeMenuCommand", ignore_extras);
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
        static char lowerBoundDecade[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundDecade>, OInteger, o_integer > fieldGeneratorDecade;
        static char lowerBoundGuessedCorrectly[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGuessedCorrectly>, OInteger, o_integer > fieldGeneratorGuessedCorrectly;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 4>, uint8_t, uint8_t > fieldGeneratorHintsRemaining;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDifficulty;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCorrectAnswer;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorQuestion;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSoundhoundLyricID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGTLSoundhoundTrackID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCorrectTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCorrectArtist;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPlayerLost;
        JSONHoldingArrayGenerator<MusicTrackJSON::Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool > fieldGeneratorGuessedTracksList;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "GuessThatLyricDecadeMenuCommand") == 0))
                throw("The key field has a value other than `GuessThatLyricDecadeMenuCommand'.");
            GuessThatLyricDecadeMenuCommandJSON *result = new GuessThatLyricDecadeMenuCommandJSON();
            assert(result != NULL);
            RCHandle<GuessThatLyricDecadeMenuCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraGuessThatLyricDecadeMenuCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((GuessThatLyricDecadeMenuCommandJSON *)new_result);
          }
        void finish(GuessThatLyricDecadeMenuCommandJSON *result)
          {
            if (fieldGeneratorDecade.have_value)
              {
                result->setDecade(fieldGeneratorDecade.value);
                fieldGeneratorDecade.have_value = false;
              }
            else if (!(result->hasDecade()))
              {
                error("When parsing the object for %what%, the \"Decade\" field was missing.");
              }
            if (fieldGeneratorGuessedCorrectly.have_value)
              {
                result->setGuessedCorrectly(fieldGeneratorGuessedCorrectly.value);
                fieldGeneratorGuessedCorrectly.have_value = false;
              }
            else if (!(result->hasGuessedCorrectly()))
              {
                error("When parsing the object for %what%, the \"GuessedCorrectly\" field was missing.");
              }
            if (fieldGeneratorHintsRemaining.have_value)
              {
                result->setHintsRemaining(fieldGeneratorHintsRemaining.value);
                fieldGeneratorHintsRemaining.have_value = false;
              }
            else if (!(result->hasHintsRemaining()))
              {
                error("When parsing the object for %what%, the \"HintsRemaining\" field was missing.");
              }
            if (fieldGeneratorDifficulty.have_value)
              {
                result->setDifficulty(fieldGeneratorDifficulty.value);
                fieldGeneratorDifficulty.have_value = false;
              }
            else if (!(result->hasDifficulty()))
              {
                error("When parsing the object for %what%, the \"Difficulty\" field was missing.");
              }
            if (fieldGeneratorCorrectAnswer.have_value)
              {
                result->setCorrectAnswer(fieldGeneratorCorrectAnswer.value);
                fieldGeneratorCorrectAnswer.have_value = false;
              }
            else if (!(result->hasCorrectAnswer()))
              {
                error("When parsing the object for %what%, the \"CorrectAnswer\" field was missing.");
              }
            if (fieldGeneratorQuestion.have_value)
              {
                result->setQuestion(fieldGeneratorQuestion.value);
                fieldGeneratorQuestion.have_value = false;
              }
            else if (!(result->hasQuestion()))
              {
                error("When parsing the object for %what%, the \"Question\" field was missing.");
              }
            if (fieldGeneratorSoundhoundLyricID.have_value)
              {
                result->setSoundhoundLyricID(fieldGeneratorSoundhoundLyricID.value);
                fieldGeneratorSoundhoundLyricID.have_value = false;
              }
            else if (!(result->hasSoundhoundLyricID()))
              {
                error("When parsing the object for %what%, the \"SoundhoundLyricID\" field was missing.");
              }
            if (fieldGeneratorGTLSoundhoundTrackID.have_value)
              {
                result->setGTLSoundhoundTrackID(fieldGeneratorGTLSoundhoundTrackID.value);
                fieldGeneratorGTLSoundhoundTrackID.have_value = false;
              }
            else if (!(result->hasGTLSoundhoundTrackID()))
              {
                error("When parsing the object for %what%, the \"GTLSoundhoundTrackID\" field was missing.");
              }
            if (fieldGeneratorCorrectTitle.have_value)
              {
                result->setCorrectTitle(fieldGeneratorCorrectTitle.value);
                fieldGeneratorCorrectTitle.have_value = false;
              }
            else if (!(result->hasCorrectTitle()))
              {
                error("When parsing the object for %what%, the \"CorrectTitle\" field was missing.");
              }
            if (fieldGeneratorCorrectArtist.have_value)
              {
                result->setCorrectArtist(fieldGeneratorCorrectArtist.value);
                fieldGeneratorCorrectArtist.have_value = false;
              }
            else if (!(result->hasCorrectArtist()))
              {
                error("When parsing the object for %what%, the \"CorrectArtist\" field was missing.");
              }
            if (fieldGeneratorPlayerLost.have_value)
              {
                result->setPlayerLost(fieldGeneratorPlayerLost.value);
                fieldGeneratorPlayerLost.have_value = false;
              }
            if (fieldGeneratorGuessedTracksList.have_value)
              {
                result->initGuessedTracksList();
                size_t count = fieldGeneratorGuessedTracksList.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGuessedTracksList(fieldGeneratorGuessedTracksList.value[num].referenced());
                  }
                fieldGeneratorGuessedTracksList.value.clear();
                fieldGeneratorGuessedTracksList.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(GuessThatLyricDecadeMenuCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "orrect", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'A':
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'n':
                                        if (strcmp(&(field_name[9]), "swer") == 0)
                                            return &fieldGeneratorCorrectAnswer;
                                        break;
                                    case 'r':
                                        if (strcmp(&(field_name[9]), "tist") == 0)
                                            return &fieldGeneratorCorrectArtist;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "itle") == 0)
                                    return &fieldGeneratorCorrectTitle;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "cade") == 0)
                                return &fieldGeneratorDecade;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "fficulty") == 0)
                                return &fieldGeneratorDifficulty;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'G':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'T':
                            if (strcmp(&(field_name[2]), "LSoundhoundTrackID") == 0)
                                return &fieldGeneratorGTLSoundhoundTrackID;
                            break;
                        case 'u':
                            if (strncmp(&(field_name[2]), "essed", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[8]), "orrectly") == 0)
                                            return &fieldGeneratorGuessedCorrectly;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[8]), "racksList") == 0)
                                            return &fieldGeneratorGuessedTracksList;
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
                    if (strcmp(&(field_name[1]), "intsRemaining") == 0)
                        return &fieldGeneratorHintsRemaining;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "layerLost") == 0)
                        return &fieldGeneratorPlayerLost;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "uestion") == 0)
                        return &fieldGeneratorQuestion;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "oundhoundLyricID") == 0)
                        return &fieldGeneratorSoundhoundLyricID;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorDecade("field \"Decade\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorGuessedCorrectly("field \"GuessedCorrectly\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorHintsRemaining("field \"HintsRemaining\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorDifficulty("field \"Difficulty\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorCorrectAnswer("field \"CorrectAnswer\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorQuestion("field \"Question\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorSoundhoundLyricID("field \"SoundhoundLyricID\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorGTLSoundhoundTrackID("field \"GTLSoundhoundTrackID\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorCorrectTitle("field \"CorrectTitle\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorCorrectArtist("field \"CorrectArtist\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorPlayerLost("field \"PlayerLost\" of the GuessThatLyricDecadeMenuCommand class"), fieldGeneratorGuessedTracksList("field \"GuessedTracksList\" of the GuessThatLyricDecadeMenuCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the GuessThatLyricDecadeMenuCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDecade.reset();
            fieldGeneratorGuessedCorrectly.reset();
            fieldGeneratorHintsRemaining.reset();
            fieldGeneratorDifficulty.reset();
            fieldGeneratorCorrectAnswer.reset();
            fieldGeneratorQuestion.reset();
            fieldGeneratorSoundhoundLyricID.reset();
            fieldGeneratorGTLSoundhoundTrackID.reset();
            fieldGeneratorCorrectTitle.reset();
            fieldGeneratorCorrectArtist.reset();
            fieldGeneratorPlayerLost.reset();
            fieldGeneratorGuessedTracksList.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* GUESSTHATLYRICDECADEMENUCOMMANDJSON_H */
