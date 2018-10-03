/* file "GuessThatLyricDecadeMenuCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessThatLyricDecadeMenuCommandJSON.h"

#include "GuessThatLyricDecadeMenuCommandJSON.h"


GuessThatLyricDecadeMenuCommandJSON::GuessThatLyricDecadeMenuCommandJSON(const GuessThatLyricDecadeMenuCommandJSON &)
  {
    assert(false);
  }

GuessThatLyricDecadeMenuCommandJSON &GuessThatLyricDecadeMenuCommandJSON::operator=(const GuessThatLyricDecadeMenuCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraDecadeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Decade = new JSONIntegerValue(storeDecade.get_o_integer());
    return generated_integer_Decade;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraGuessedCorrectlyToJSON(void) const
  {
    JSONIntegerValue *generated_integer_GuessedCorrectly = new JSONIntegerValue(storeGuessedCorrectly.get_o_integer());
    return generated_integer_GuessedCorrectly;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraHintsRemainingToJSON(void) const
  {
    JSONIntegerValue *generated_integer_HintsRemaining = new JSONIntegerValue(storeHintsRemaining);
    return generated_integer_HintsRemaining;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraDifficultyToJSON(void) const
  {
    JSONStringValue *generated_string_Difficulty = new JSONStringValue(storeDifficulty.c_str());
    return generated_string_Difficulty;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraCorrectAnswerToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectAnswer = new JSONStringValue(storeCorrectAnswer.c_str());
    return generated_string_CorrectAnswer;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraQuestionToJSON(void) const
  {
    JSONStringValue *generated_string_Question = new JSONStringValue(storeQuestion.c_str());
    return generated_string_Question;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraSoundhoundLyricIDToJSON(void) const
  {
    JSONStringValue *generated_string_SoundhoundLyricID = new JSONStringValue(storeSoundhoundLyricID.c_str());
    return generated_string_SoundhoundLyricID;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraGTLSoundhoundTrackIDToJSON(void) const
  {
    JSONStringValue *generated_string_GTLSoundhoundTrackID = new JSONStringValue(storeGTLSoundhoundTrackID.c_str());
    return generated_string_GTLSoundhoundTrackID;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraCorrectTitleToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectTitle = new JSONStringValue(storeCorrectTitle.c_str());
    return generated_string_CorrectTitle;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraCorrectArtistToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectArtist = new JSONStringValue(storeCorrectArtist.c_str());
    return generated_string_CorrectArtist;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraPlayerLostToJSON(void) const
  {
    JSONValue *generated_boolean_PlayerLost = (storePlayerLost ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_PlayerLost;
  }

JSONValue *GuessThatLyricDecadeMenuCommandJSON::extraGuessedTracksListToJSON(void) const
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

void GuessThatLyricDecadeMenuCommandJSON::fromJSONDecade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decade of GuessThatLyricDecadeMenuCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decade of GuessThatLyricDecadeMenuCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecade(extracted_integer);
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONGuessedCorrectly(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricDecadeMenuCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricDecadeMenuCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessedCorrectly(extracted_integer);
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONHintsRemaining(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HintsRemaining of GuessThatLyricDecadeMenuCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HintsRemaining of GuessThatLyricDecadeMenuCommandJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHintsRemaining(extracted_integer);
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of GuessThatLyricDecadeMenuCommandJSON is not a string.");
    setDifficulty(std::string(json_string->getData()));
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONCorrectAnswer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectAnswer of GuessThatLyricDecadeMenuCommandJSON is not a string.");
    setCorrectAnswer(std::string(json_string->getData()));
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONQuestion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Question of GuessThatLyricDecadeMenuCommandJSON is not a string.");
    setQuestion(std::string(json_string->getData()));
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundhoundLyricID of GuessThatLyricDecadeMenuCommandJSON is not a string.");
    setSoundhoundLyricID(std::string(json_string->getData()));
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONGTLSoundhoundTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GTLSoundhoundTrackID of GuessThatLyricDecadeMenuCommandJSON is not a string.");
    setGTLSoundhoundTrackID(std::string(json_string->getData()));
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONCorrectTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectTitle of GuessThatLyricDecadeMenuCommandJSON is not a string.");
    setCorrectTitle(std::string(json_string->getData()));
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONCorrectArtist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectArtist of GuessThatLyricDecadeMenuCommandJSON is not a string.");
    setCorrectArtist(std::string(json_string->getData()));
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONPlayerLost(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PlayerLost of GuessThatLyricDecadeMenuCommandJSON is not true for false.");
          }
      }
    setPlayerLost(the_bool);
  }

void GuessThatLyricDecadeMenuCommandJSON::fromJSONGuessedTracksList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GuessedTracksList of GuessThatLyricDecadeMenuCommandJSON is not an array.");
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

GuessThatLyricDecadeMenuCommandJSON::GuessThatLyricDecadeMenuCommandJSON(void) :
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

GuessThatLyricDecadeMenuCommandJSON::~GuessThatLyricDecadeMenuCommandJSON(void)
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

const char *GuessThatLyricDecadeMenuCommandJSON::getCommandKind(void) const
  {
    return "GuessThatLyricDecadeMenuCommand";
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasDecade(void) const
  {
    return flagHasDecade;
  }

OInteger GuessThatLyricDecadeMenuCommandJSON::getDecade(void)
  {
    assert(flagHasDecade);
    return storeDecade;
  }

const OInteger GuessThatLyricDecadeMenuCommandJSON::getDecade(void) const
  {
    assert(flagHasDecade);
    return storeDecade;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasGuessedCorrectly(void) const
  {
    return flagHasGuessedCorrectly;
  }

OInteger GuessThatLyricDecadeMenuCommandJSON::getGuessedCorrectly(void)
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

const OInteger GuessThatLyricDecadeMenuCommandJSON::getGuessedCorrectly(void) const
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasHintsRemaining(void) const
  {
    return flagHasHintsRemaining;
  }

uint8_t GuessThatLyricDecadeMenuCommandJSON::getHintsRemaining(void)
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

const uint8_t GuessThatLyricDecadeMenuCommandJSON::getHintsRemaining(void) const
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

std::string GuessThatLyricDecadeMenuCommandJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const std::string GuessThatLyricDecadeMenuCommandJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasCorrectAnswer(void) const
  {
    return flagHasCorrectAnswer;
  }

std::string GuessThatLyricDecadeMenuCommandJSON::getCorrectAnswer(void)
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

const std::string GuessThatLyricDecadeMenuCommandJSON::getCorrectAnswer(void) const
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasQuestion(void) const
  {
    return flagHasQuestion;
  }

std::string GuessThatLyricDecadeMenuCommandJSON::getQuestion(void)
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

const std::string GuessThatLyricDecadeMenuCommandJSON::getQuestion(void) const
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasSoundhoundLyricID(void) const
  {
    return flagHasSoundhoundLyricID;
  }

std::string GuessThatLyricDecadeMenuCommandJSON::getSoundhoundLyricID(void)
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

const std::string GuessThatLyricDecadeMenuCommandJSON::getSoundhoundLyricID(void) const
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasGTLSoundhoundTrackID(void) const
  {
    return flagHasGTLSoundhoundTrackID;
  }

std::string GuessThatLyricDecadeMenuCommandJSON::getGTLSoundhoundTrackID(void)
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

const std::string GuessThatLyricDecadeMenuCommandJSON::getGTLSoundhoundTrackID(void) const
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasCorrectTitle(void) const
  {
    return flagHasCorrectTitle;
  }

std::string GuessThatLyricDecadeMenuCommandJSON::getCorrectTitle(void)
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

const std::string GuessThatLyricDecadeMenuCommandJSON::getCorrectTitle(void) const
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasCorrectArtist(void) const
  {
    return flagHasCorrectArtist;
  }

std::string GuessThatLyricDecadeMenuCommandJSON::getCorrectArtist(void)
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

const std::string GuessThatLyricDecadeMenuCommandJSON::getCorrectArtist(void) const
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasPlayerLost(void) const
  {
    return flagHasPlayerLost;
  }

bool GuessThatLyricDecadeMenuCommandJSON::getPlayerLost(void)
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

const bool GuessThatLyricDecadeMenuCommandJSON::getPlayerLost(void) const
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

bool GuessThatLyricDecadeMenuCommandJSON::hasGuessedTracksList(void) const
  {
    return flagHasGuessedTracksList;
  }

size_t GuessThatLyricDecadeMenuCommandJSON::countOfGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList.size();
  }

MusicTrackJSON * GuessThatLyricDecadeMenuCommandJSON::elementOfGuessedTracksList(size_t element_num)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

const MusicTrackJSON * GuessThatLyricDecadeMenuCommandJSON::elementOfGuessedTracksList(size_t element_num) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

std::vector< MusicTrackJSON * > GuessThatLyricDecadeMenuCommandJSON::getGuessedTracksList(void)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

const std::vector< MusicTrackJSON * > GuessThatLyricDecadeMenuCommandJSON::getGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

char GuessThatLyricDecadeMenuCommandJSON::Generator::lowerBoundDecade[] = "0";
char GuessThatLyricDecadeMenuCommandJSON::Generator::lowerBoundGuessedCorrectly[] = "0";
GuessThatLyricDecadeMenuCommandJSON *GuessThatLyricDecadeMenuCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessThatLyricDecadeMenuCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricDecadeMenuCommandJSON>, GuessThatLyricDecadeMenuCommandJSON *, bool> generator("Type GuessThatLyricDecadeMenuCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
