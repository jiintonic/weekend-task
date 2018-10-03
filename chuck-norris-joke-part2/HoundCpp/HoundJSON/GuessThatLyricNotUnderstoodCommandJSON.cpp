/* file "GuessThatLyricNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessThatLyricNotUnderstoodCommandJSON.h"

#include "GuessThatLyricNotUnderstoodCommandJSON.h"


GuessThatLyricNotUnderstoodCommandJSON::GuessThatLyricNotUnderstoodCommandJSON(const GuessThatLyricNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

GuessThatLyricNotUnderstoodCommandJSON &GuessThatLyricNotUnderstoodCommandJSON::operator=(const GuessThatLyricNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraDecadeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Decade = new JSONIntegerValue(storeDecade.get_o_integer());
    return generated_integer_Decade;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraGuessedCorrectlyToJSON(void) const
  {
    JSONIntegerValue *generated_integer_GuessedCorrectly = new JSONIntegerValue(storeGuessedCorrectly.get_o_integer());
    return generated_integer_GuessedCorrectly;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraHintsRemainingToJSON(void) const
  {
    JSONIntegerValue *generated_integer_HintsRemaining = new JSONIntegerValue(storeHintsRemaining);
    return generated_integer_HintsRemaining;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraDifficultyToJSON(void) const
  {
    JSONStringValue *generated_string_Difficulty = new JSONStringValue(storeDifficulty.c_str());
    return generated_string_Difficulty;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraCorrectAnswerToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectAnswer = new JSONStringValue(storeCorrectAnswer.c_str());
    return generated_string_CorrectAnswer;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraQuestionToJSON(void) const
  {
    JSONStringValue *generated_string_Question = new JSONStringValue(storeQuestion.c_str());
    return generated_string_Question;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraSoundhoundLyricIDToJSON(void) const
  {
    JSONStringValue *generated_string_SoundhoundLyricID = new JSONStringValue(storeSoundhoundLyricID.c_str());
    return generated_string_SoundhoundLyricID;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraGTLSoundhoundTrackIDToJSON(void) const
  {
    JSONStringValue *generated_string_GTLSoundhoundTrackID = new JSONStringValue(storeGTLSoundhoundTrackID.c_str());
    return generated_string_GTLSoundhoundTrackID;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraCorrectTitleToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectTitle = new JSONStringValue(storeCorrectTitle.c_str());
    return generated_string_CorrectTitle;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraCorrectArtistToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectArtist = new JSONStringValue(storeCorrectArtist.c_str());
    return generated_string_CorrectArtist;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraPlayerLostToJSON(void) const
  {
    JSONValue *generated_boolean_PlayerLost = (storePlayerLost ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_PlayerLost;
  }

JSONValue *GuessThatLyricNotUnderstoodCommandJSON::extraGuessedTracksListToJSON(void) const
  {
    JSONArrayValue *generated_array_1_GuessedTracksList = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeGuessedTracksList.size(); ++num1)
      {
        JSONValueHandler handler_GuessedTracksList;
        storeGuessedTracksList[num1]->write_as_json(&handler_GuessedTracksList);
        handler_GuessedTracksList.result->add_reference();
        generated_array_1_GuessedTracksList->appendComponent(handler_GuessedTracksList.result);
        handler_GuessedTracksList.result->remove_reference();
      }
    return generated_array_1_GuessedTracksList;
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONDecade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decade of GuessThatLyricNotUnderstoodCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decade of GuessThatLyricNotUnderstoodCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecade(extracted_integer);
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONGuessedCorrectly(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricNotUnderstoodCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricNotUnderstoodCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessedCorrectly(extracted_integer);
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONHintsRemaining(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HintsRemaining of GuessThatLyricNotUnderstoodCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HintsRemaining of GuessThatLyricNotUnderstoodCommandJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHintsRemaining(extracted_integer);
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of GuessThatLyricNotUnderstoodCommandJSON is not a string.");
    setDifficulty(std::string(json_string->getData()));
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONCorrectAnswer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectAnswer of GuessThatLyricNotUnderstoodCommandJSON is not a string.");
    setCorrectAnswer(std::string(json_string->getData()));
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONQuestion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Question of GuessThatLyricNotUnderstoodCommandJSON is not a string.");
    setQuestion(std::string(json_string->getData()));
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundhoundLyricID of GuessThatLyricNotUnderstoodCommandJSON is not a string.");
    setSoundhoundLyricID(std::string(json_string->getData()));
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONGTLSoundhoundTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GTLSoundhoundTrackID of GuessThatLyricNotUnderstoodCommandJSON is not a string.");
    setGTLSoundhoundTrackID(std::string(json_string->getData()));
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONCorrectTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectTitle of GuessThatLyricNotUnderstoodCommandJSON is not a string.");
    setCorrectTitle(std::string(json_string->getData()));
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONCorrectArtist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectArtist of GuessThatLyricNotUnderstoodCommandJSON is not a string.");
    setCorrectArtist(std::string(json_string->getData()));
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONPlayerLost(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PlayerLost of GuessThatLyricNotUnderstoodCommandJSON is not true for false.");
          }
      }
    setPlayerLost(the_bool);
  }

void GuessThatLyricNotUnderstoodCommandJSON::fromJSONGuessedTracksList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GuessedTracksList of GuessThatLyricNotUnderstoodCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicTrackJSON * > vector_GuessedTracksList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicTrackJSON *convert_classy = MusicTrackJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_GuessedTracksList1[num1] = convert_classy;
      }
    initGuessedTracksList();
    for (size_t num2 = 0; num2 < vector_GuessedTracksList1.size(); ++num2)
        appendGuessedTracksList(vector_GuessedTracksList1[num2]);
    for (size_t num1 = 0; num1 < vector_GuessedTracksList1.size(); ++num1)
      {
        vector_GuessedTracksList1[num1]->remove_reference();
      }
  }

GuessThatLyricNotUnderstoodCommandJSON::GuessThatLyricNotUnderstoodCommandJSON(void) :
        flagHasDecade(false),
        flagHasGuessedCorrectly(false),
        flagHasHintsRemaining(false),
        flagHasDifficulty(false),
        flagHasCorrectAnswer(false),
        flagHasQuestion(false),
        flagHasSoundhoundLyricID(false),
        flagHasGTLSoundhoundTrackID(false),
        flagHasCorrectTitle(false),
        flagHasCorrectArtist(false),
        flagHasPlayerLost(false),
        flagHasGuessedTracksList(false)
  {
    extraIndex = create_string_index();
  }

GuessThatLyricNotUnderstoodCommandJSON::~GuessThatLyricNotUnderstoodCommandJSON(void)
  {
    if (flagHasGuessedTracksList)
      {
        for (size_t num4 = 0; num4 < storeGuessedTracksList.size(); ++num4)
          {
            storeGuessedTracksList[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GuessThatLyricNotUnderstoodCommandJSON::getGuessThatLyricCommandKind(void) const
  {
    return "GuessThatLyricNotUnderstoodCommand";
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasDecade(void) const
  {
    return flagHasDecade;
  }

OInteger GuessThatLyricNotUnderstoodCommandJSON::getDecade(void)
  {
    assert(flagHasDecade);
    return storeDecade;
  }

const OInteger GuessThatLyricNotUnderstoodCommandJSON::getDecade(void) const
  {
    assert(flagHasDecade);
    return storeDecade;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasGuessedCorrectly(void) const
  {
    return flagHasGuessedCorrectly;
  }

OInteger GuessThatLyricNotUnderstoodCommandJSON::getGuessedCorrectly(void)
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

const OInteger GuessThatLyricNotUnderstoodCommandJSON::getGuessedCorrectly(void) const
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasHintsRemaining(void) const
  {
    return flagHasHintsRemaining;
  }

uint8_t GuessThatLyricNotUnderstoodCommandJSON::getHintsRemaining(void)
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

const uint8_t GuessThatLyricNotUnderstoodCommandJSON::getHintsRemaining(void) const
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

std::string GuessThatLyricNotUnderstoodCommandJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const std::string GuessThatLyricNotUnderstoodCommandJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasCorrectAnswer(void) const
  {
    return flagHasCorrectAnswer;
  }

std::string GuessThatLyricNotUnderstoodCommandJSON::getCorrectAnswer(void)
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

const std::string GuessThatLyricNotUnderstoodCommandJSON::getCorrectAnswer(void) const
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasQuestion(void) const
  {
    return flagHasQuestion;
  }

std::string GuessThatLyricNotUnderstoodCommandJSON::getQuestion(void)
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

const std::string GuessThatLyricNotUnderstoodCommandJSON::getQuestion(void) const
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasSoundhoundLyricID(void) const
  {
    return flagHasSoundhoundLyricID;
  }

std::string GuessThatLyricNotUnderstoodCommandJSON::getSoundhoundLyricID(void)
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

const std::string GuessThatLyricNotUnderstoodCommandJSON::getSoundhoundLyricID(void) const
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasGTLSoundhoundTrackID(void) const
  {
    return flagHasGTLSoundhoundTrackID;
  }

std::string GuessThatLyricNotUnderstoodCommandJSON::getGTLSoundhoundTrackID(void)
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

const std::string GuessThatLyricNotUnderstoodCommandJSON::getGTLSoundhoundTrackID(void) const
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasCorrectTitle(void) const
  {
    return flagHasCorrectTitle;
  }

std::string GuessThatLyricNotUnderstoodCommandJSON::getCorrectTitle(void)
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

const std::string GuessThatLyricNotUnderstoodCommandJSON::getCorrectTitle(void) const
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasCorrectArtist(void) const
  {
    return flagHasCorrectArtist;
  }

std::string GuessThatLyricNotUnderstoodCommandJSON::getCorrectArtist(void)
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

const std::string GuessThatLyricNotUnderstoodCommandJSON::getCorrectArtist(void) const
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasPlayerLost(void) const
  {
    return flagHasPlayerLost;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::getPlayerLost(void)
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

const bool GuessThatLyricNotUnderstoodCommandJSON::getPlayerLost(void) const
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

bool GuessThatLyricNotUnderstoodCommandJSON::hasGuessedTracksList(void) const
  {
    return flagHasGuessedTracksList;
  }

size_t GuessThatLyricNotUnderstoodCommandJSON::countOfGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList.size();
  }

MusicTrackJSON * GuessThatLyricNotUnderstoodCommandJSON::elementOfGuessedTracksList(size_t element_num)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

const MusicTrackJSON * GuessThatLyricNotUnderstoodCommandJSON::elementOfGuessedTracksList(size_t element_num) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

std::vector< MusicTrackJSON * > GuessThatLyricNotUnderstoodCommandJSON::getGuessedTracksList(void)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

const std::vector< MusicTrackJSON * > GuessThatLyricNotUnderstoodCommandJSON::getGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

char GuessThatLyricNotUnderstoodCommandJSON::Generator::lowerBoundDecade[] = "0";
char GuessThatLyricNotUnderstoodCommandJSON::Generator::lowerBoundGuessedCorrectly[] = "0";
GuessThatLyricNotUnderstoodCommandJSON *GuessThatLyricNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessThatLyricNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricNotUnderstoodCommandJSON>, GuessThatLyricNotUnderstoodCommandJSON *, bool> generator("Type GuessThatLyricNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
