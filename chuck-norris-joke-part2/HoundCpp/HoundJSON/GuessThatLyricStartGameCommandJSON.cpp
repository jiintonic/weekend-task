/* file "GuessThatLyricStartGameCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessThatLyricStartGameCommandJSON.h"

#include "GuessThatLyricStartGameCommandJSON.h"


GuessThatLyricStartGameCommandJSON::GuessThatLyricStartGameCommandJSON(const GuessThatLyricStartGameCommandJSON &)
  {
    assert(false);
  }

GuessThatLyricStartGameCommandJSON &GuessThatLyricStartGameCommandJSON::operator=(const GuessThatLyricStartGameCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraDecadeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Decade = new JSONIntegerValue(storeDecade.get_o_integer());
    return generated_integer_Decade;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraGuessedCorrectlyToJSON(void) const
  {
    JSONIntegerValue *generated_integer_GuessedCorrectly = new JSONIntegerValue(storeGuessedCorrectly.get_o_integer());
    return generated_integer_GuessedCorrectly;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraHintsRemainingToJSON(void) const
  {
    JSONIntegerValue *generated_integer_HintsRemaining = new JSONIntegerValue(storeHintsRemaining);
    return generated_integer_HintsRemaining;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraDifficultyToJSON(void) const
  {
    JSONStringValue *generated_string_Difficulty = new JSONStringValue(storeDifficulty.c_str());
    return generated_string_Difficulty;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraCorrectAnswerToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectAnswer = new JSONStringValue(storeCorrectAnswer.c_str());
    return generated_string_CorrectAnswer;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraQuestionToJSON(void) const
  {
    JSONStringValue *generated_string_Question = new JSONStringValue(storeQuestion.c_str());
    return generated_string_Question;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraSoundhoundLyricIDToJSON(void) const
  {
    JSONStringValue *generated_string_SoundhoundLyricID = new JSONStringValue(storeSoundhoundLyricID.c_str());
    return generated_string_SoundhoundLyricID;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraGTLSoundhoundTrackIDToJSON(void) const
  {
    JSONStringValue *generated_string_GTLSoundhoundTrackID = new JSONStringValue(storeGTLSoundhoundTrackID.c_str());
    return generated_string_GTLSoundhoundTrackID;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraCorrectTitleToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectTitle = new JSONStringValue(storeCorrectTitle.c_str());
    return generated_string_CorrectTitle;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraCorrectArtistToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectArtist = new JSONStringValue(storeCorrectArtist.c_str());
    return generated_string_CorrectArtist;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraPlayerLostToJSON(void) const
  {
    JSONValue *generated_boolean_PlayerLost = (storePlayerLost ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_PlayerLost;
  }

JSONValue *GuessThatLyricStartGameCommandJSON::extraGuessedTracksListToJSON(void) const
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

void GuessThatLyricStartGameCommandJSON::fromJSONDecade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decade of GuessThatLyricStartGameCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decade of GuessThatLyricStartGameCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecade(extracted_integer);
  }

void GuessThatLyricStartGameCommandJSON::fromJSONGuessedCorrectly(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricStartGameCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricStartGameCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessedCorrectly(extracted_integer);
  }

void GuessThatLyricStartGameCommandJSON::fromJSONHintsRemaining(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HintsRemaining of GuessThatLyricStartGameCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HintsRemaining of GuessThatLyricStartGameCommandJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHintsRemaining(extracted_integer);
  }

void GuessThatLyricStartGameCommandJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of GuessThatLyricStartGameCommandJSON is not a string.");
    setDifficulty(std::string(json_string->getData()));
  }

void GuessThatLyricStartGameCommandJSON::fromJSONCorrectAnswer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectAnswer of GuessThatLyricStartGameCommandJSON is not a string.");
    setCorrectAnswer(std::string(json_string->getData()));
  }

void GuessThatLyricStartGameCommandJSON::fromJSONQuestion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Question of GuessThatLyricStartGameCommandJSON is not a string.");
    setQuestion(std::string(json_string->getData()));
  }

void GuessThatLyricStartGameCommandJSON::fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundhoundLyricID of GuessThatLyricStartGameCommandJSON is not a string.");
    setSoundhoundLyricID(std::string(json_string->getData()));
  }

void GuessThatLyricStartGameCommandJSON::fromJSONGTLSoundhoundTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GTLSoundhoundTrackID of GuessThatLyricStartGameCommandJSON is not a string.");
    setGTLSoundhoundTrackID(std::string(json_string->getData()));
  }

void GuessThatLyricStartGameCommandJSON::fromJSONCorrectTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectTitle of GuessThatLyricStartGameCommandJSON is not a string.");
    setCorrectTitle(std::string(json_string->getData()));
  }

void GuessThatLyricStartGameCommandJSON::fromJSONCorrectArtist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectArtist of GuessThatLyricStartGameCommandJSON is not a string.");
    setCorrectArtist(std::string(json_string->getData()));
  }

void GuessThatLyricStartGameCommandJSON::fromJSONPlayerLost(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PlayerLost of GuessThatLyricStartGameCommandJSON is not true for false.");
          }
      }
    setPlayerLost(the_bool);
  }

void GuessThatLyricStartGameCommandJSON::fromJSONGuessedTracksList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GuessedTracksList of GuessThatLyricStartGameCommandJSON is not an array.");
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

GuessThatLyricStartGameCommandJSON::GuessThatLyricStartGameCommandJSON(void) :
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

GuessThatLyricStartGameCommandJSON::~GuessThatLyricStartGameCommandJSON(void)
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

const char *GuessThatLyricStartGameCommandJSON::getGuessThatLyricCommandKind(void) const
  {
    return "GuessThatLyricStartGameCommand";
  }

bool GuessThatLyricStartGameCommandJSON::hasDecade(void) const
  {
    return flagHasDecade;
  }

OInteger GuessThatLyricStartGameCommandJSON::getDecade(void)
  {
    assert(flagHasDecade);
    return storeDecade;
  }

const OInteger GuessThatLyricStartGameCommandJSON::getDecade(void) const
  {
    assert(flagHasDecade);
    return storeDecade;
  }

bool GuessThatLyricStartGameCommandJSON::hasGuessedCorrectly(void) const
  {
    return flagHasGuessedCorrectly;
  }

OInteger GuessThatLyricStartGameCommandJSON::getGuessedCorrectly(void)
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

const OInteger GuessThatLyricStartGameCommandJSON::getGuessedCorrectly(void) const
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

bool GuessThatLyricStartGameCommandJSON::hasHintsRemaining(void) const
  {
    return flagHasHintsRemaining;
  }

uint8_t GuessThatLyricStartGameCommandJSON::getHintsRemaining(void)
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

const uint8_t GuessThatLyricStartGameCommandJSON::getHintsRemaining(void) const
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

bool GuessThatLyricStartGameCommandJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

std::string GuessThatLyricStartGameCommandJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const std::string GuessThatLyricStartGameCommandJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

bool GuessThatLyricStartGameCommandJSON::hasCorrectAnswer(void) const
  {
    return flagHasCorrectAnswer;
  }

std::string GuessThatLyricStartGameCommandJSON::getCorrectAnswer(void)
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

const std::string GuessThatLyricStartGameCommandJSON::getCorrectAnswer(void) const
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

bool GuessThatLyricStartGameCommandJSON::hasQuestion(void) const
  {
    return flagHasQuestion;
  }

std::string GuessThatLyricStartGameCommandJSON::getQuestion(void)
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

const std::string GuessThatLyricStartGameCommandJSON::getQuestion(void) const
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

bool GuessThatLyricStartGameCommandJSON::hasSoundhoundLyricID(void) const
  {
    return flagHasSoundhoundLyricID;
  }

std::string GuessThatLyricStartGameCommandJSON::getSoundhoundLyricID(void)
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

const std::string GuessThatLyricStartGameCommandJSON::getSoundhoundLyricID(void) const
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

bool GuessThatLyricStartGameCommandJSON::hasGTLSoundhoundTrackID(void) const
  {
    return flagHasGTLSoundhoundTrackID;
  }

std::string GuessThatLyricStartGameCommandJSON::getGTLSoundhoundTrackID(void)
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

const std::string GuessThatLyricStartGameCommandJSON::getGTLSoundhoundTrackID(void) const
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

bool GuessThatLyricStartGameCommandJSON::hasCorrectTitle(void) const
  {
    return flagHasCorrectTitle;
  }

std::string GuessThatLyricStartGameCommandJSON::getCorrectTitle(void)
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

const std::string GuessThatLyricStartGameCommandJSON::getCorrectTitle(void) const
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

bool GuessThatLyricStartGameCommandJSON::hasCorrectArtist(void) const
  {
    return flagHasCorrectArtist;
  }

std::string GuessThatLyricStartGameCommandJSON::getCorrectArtist(void)
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

const std::string GuessThatLyricStartGameCommandJSON::getCorrectArtist(void) const
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

bool GuessThatLyricStartGameCommandJSON::hasPlayerLost(void) const
  {
    return flagHasPlayerLost;
  }

bool GuessThatLyricStartGameCommandJSON::getPlayerLost(void)
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

const bool GuessThatLyricStartGameCommandJSON::getPlayerLost(void) const
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

bool GuessThatLyricStartGameCommandJSON::hasGuessedTracksList(void) const
  {
    return flagHasGuessedTracksList;
  }

size_t GuessThatLyricStartGameCommandJSON::countOfGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList.size();
  }

MusicTrackJSON * GuessThatLyricStartGameCommandJSON::elementOfGuessedTracksList(size_t element_num)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

const MusicTrackJSON * GuessThatLyricStartGameCommandJSON::elementOfGuessedTracksList(size_t element_num) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

std::vector< MusicTrackJSON * > GuessThatLyricStartGameCommandJSON::getGuessedTracksList(void)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

const std::vector< MusicTrackJSON * > GuessThatLyricStartGameCommandJSON::getGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

char GuessThatLyricStartGameCommandJSON::Generator::lowerBoundDecade[] = "0";
char GuessThatLyricStartGameCommandJSON::Generator::lowerBoundGuessedCorrectly[] = "0";
GuessThatLyricStartGameCommandJSON *GuessThatLyricStartGameCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessThatLyricStartGameCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricStartGameCommandJSON>, GuessThatLyricStartGameCommandJSON *, bool> generator("Type GuessThatLyricStartGameCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
