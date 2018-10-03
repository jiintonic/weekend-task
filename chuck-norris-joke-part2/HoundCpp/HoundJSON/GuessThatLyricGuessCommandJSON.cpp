/* file "GuessThatLyricGuessCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GuessThatLyricGuessCommandJSON.h"

#include "GuessThatLyricGuessCommandJSON.h"


GuessThatLyricGuessCommandJSON::GuessThatLyricGuessCommandJSON(const GuessThatLyricGuessCommandJSON &)
  {
    assert(false);
  }

GuessThatLyricGuessCommandJSON &GuessThatLyricGuessCommandJSON::operator=(const GuessThatLyricGuessCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraDecadeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Decade = new JSONIntegerValue(storeDecade.get_o_integer());
    return generated_integer_Decade;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraGuessedCorrectlyToJSON(void) const
  {
    JSONIntegerValue *generated_integer_GuessedCorrectly = new JSONIntegerValue(storeGuessedCorrectly.get_o_integer());
    return generated_integer_GuessedCorrectly;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraHintsRemainingToJSON(void) const
  {
    JSONIntegerValue *generated_integer_HintsRemaining = new JSONIntegerValue(storeHintsRemaining);
    return generated_integer_HintsRemaining;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraDifficultyToJSON(void) const
  {
    JSONStringValue *generated_string_Difficulty = new JSONStringValue(storeDifficulty.c_str());
    return generated_string_Difficulty;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraCorrectAnswerToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectAnswer = new JSONStringValue(storeCorrectAnswer.c_str());
    return generated_string_CorrectAnswer;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraQuestionToJSON(void) const
  {
    JSONStringValue *generated_string_Question = new JSONStringValue(storeQuestion.c_str());
    return generated_string_Question;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraSoundhoundLyricIDToJSON(void) const
  {
    JSONStringValue *generated_string_SoundhoundLyricID = new JSONStringValue(storeSoundhoundLyricID.c_str());
    return generated_string_SoundhoundLyricID;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraGTLSoundhoundTrackIDToJSON(void) const
  {
    JSONStringValue *generated_string_GTLSoundhoundTrackID = new JSONStringValue(storeGTLSoundhoundTrackID.c_str());
    return generated_string_GTLSoundhoundTrackID;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraCorrectTitleToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectTitle = new JSONStringValue(storeCorrectTitle.c_str());
    return generated_string_CorrectTitle;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraCorrectArtistToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectArtist = new JSONStringValue(storeCorrectArtist.c_str());
    return generated_string_CorrectArtist;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraPlayerLostToJSON(void) const
  {
    JSONValue *generated_boolean_PlayerLost = (storePlayerLost ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_PlayerLost;
  }

JSONValue *GuessThatLyricGuessCommandJSON::extraGuessedTracksListToJSON(void) const
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

void GuessThatLyricGuessCommandJSON::fromJSONDecade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decade of GuessThatLyricGuessCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decade of GuessThatLyricGuessCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecade(extracted_integer);
  }

void GuessThatLyricGuessCommandJSON::fromJSONGuessedCorrectly(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricGuessCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GuessedCorrectly of GuessThatLyricGuessCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGuessedCorrectly(extracted_integer);
  }

void GuessThatLyricGuessCommandJSON::fromJSONHintsRemaining(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HintsRemaining of GuessThatLyricGuessCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HintsRemaining of GuessThatLyricGuessCommandJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHintsRemaining(extracted_integer);
  }

void GuessThatLyricGuessCommandJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of GuessThatLyricGuessCommandJSON is not a string.");
    setDifficulty(std::string(json_string->getData()));
  }

void GuessThatLyricGuessCommandJSON::fromJSONCorrectAnswer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectAnswer of GuessThatLyricGuessCommandJSON is not a string.");
    setCorrectAnswer(std::string(json_string->getData()));
  }

void GuessThatLyricGuessCommandJSON::fromJSONQuestion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Question of GuessThatLyricGuessCommandJSON is not a string.");
    setQuestion(std::string(json_string->getData()));
  }

void GuessThatLyricGuessCommandJSON::fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundhoundLyricID of GuessThatLyricGuessCommandJSON is not a string.");
    setSoundhoundLyricID(std::string(json_string->getData()));
  }

void GuessThatLyricGuessCommandJSON::fromJSONGTLSoundhoundTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GTLSoundhoundTrackID of GuessThatLyricGuessCommandJSON is not a string.");
    setGTLSoundhoundTrackID(std::string(json_string->getData()));
  }

void GuessThatLyricGuessCommandJSON::fromJSONCorrectTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectTitle of GuessThatLyricGuessCommandJSON is not a string.");
    setCorrectTitle(std::string(json_string->getData()));
  }

void GuessThatLyricGuessCommandJSON::fromJSONCorrectArtist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectArtist of GuessThatLyricGuessCommandJSON is not a string.");
    setCorrectArtist(std::string(json_string->getData()));
  }

void GuessThatLyricGuessCommandJSON::fromJSONPlayerLost(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PlayerLost of GuessThatLyricGuessCommandJSON is not true for false.");
          }
      }
    setPlayerLost(the_bool);
  }

void GuessThatLyricGuessCommandJSON::fromJSONGuessedTracksList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GuessedTracksList of GuessThatLyricGuessCommandJSON is not an array.");
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

GuessThatLyricGuessCommandJSON::GuessThatLyricGuessCommandJSON(void) :
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

GuessThatLyricGuessCommandJSON::~GuessThatLyricGuessCommandJSON(void)
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

const char *GuessThatLyricGuessCommandJSON::getGuessThatLyricCommandKind(void) const
  {
    return "GuessThatLyricGuessCommand";
  }

bool GuessThatLyricGuessCommandJSON::hasDecade(void) const
  {
    return flagHasDecade;
  }

OInteger GuessThatLyricGuessCommandJSON::getDecade(void)
  {
    assert(flagHasDecade);
    return storeDecade;
  }

const OInteger GuessThatLyricGuessCommandJSON::getDecade(void) const
  {
    assert(flagHasDecade);
    return storeDecade;
  }

bool GuessThatLyricGuessCommandJSON::hasGuessedCorrectly(void) const
  {
    return flagHasGuessedCorrectly;
  }

OInteger GuessThatLyricGuessCommandJSON::getGuessedCorrectly(void)
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

const OInteger GuessThatLyricGuessCommandJSON::getGuessedCorrectly(void) const
  {
    assert(flagHasGuessedCorrectly);
    return storeGuessedCorrectly;
  }

bool GuessThatLyricGuessCommandJSON::hasHintsRemaining(void) const
  {
    return flagHasHintsRemaining;
  }

uint8_t GuessThatLyricGuessCommandJSON::getHintsRemaining(void)
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

const uint8_t GuessThatLyricGuessCommandJSON::getHintsRemaining(void) const
  {
    assert(flagHasHintsRemaining);
    return storeHintsRemaining;
  }

bool GuessThatLyricGuessCommandJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

std::string GuessThatLyricGuessCommandJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const std::string GuessThatLyricGuessCommandJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

bool GuessThatLyricGuessCommandJSON::hasCorrectAnswer(void) const
  {
    return flagHasCorrectAnswer;
  }

std::string GuessThatLyricGuessCommandJSON::getCorrectAnswer(void)
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

const std::string GuessThatLyricGuessCommandJSON::getCorrectAnswer(void) const
  {
    assert(flagHasCorrectAnswer);
    return storeCorrectAnswer;
  }

bool GuessThatLyricGuessCommandJSON::hasQuestion(void) const
  {
    return flagHasQuestion;
  }

std::string GuessThatLyricGuessCommandJSON::getQuestion(void)
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

const std::string GuessThatLyricGuessCommandJSON::getQuestion(void) const
  {
    assert(flagHasQuestion);
    return storeQuestion;
  }

bool GuessThatLyricGuessCommandJSON::hasSoundhoundLyricID(void) const
  {
    return flagHasSoundhoundLyricID;
  }

std::string GuessThatLyricGuessCommandJSON::getSoundhoundLyricID(void)
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

const std::string GuessThatLyricGuessCommandJSON::getSoundhoundLyricID(void) const
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

bool GuessThatLyricGuessCommandJSON::hasGTLSoundhoundTrackID(void) const
  {
    return flagHasGTLSoundhoundTrackID;
  }

std::string GuessThatLyricGuessCommandJSON::getGTLSoundhoundTrackID(void)
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

const std::string GuessThatLyricGuessCommandJSON::getGTLSoundhoundTrackID(void) const
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

bool GuessThatLyricGuessCommandJSON::hasCorrectTitle(void) const
  {
    return flagHasCorrectTitle;
  }

std::string GuessThatLyricGuessCommandJSON::getCorrectTitle(void)
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

const std::string GuessThatLyricGuessCommandJSON::getCorrectTitle(void) const
  {
    assert(flagHasCorrectTitle);
    return storeCorrectTitle;
  }

bool GuessThatLyricGuessCommandJSON::hasCorrectArtist(void) const
  {
    return flagHasCorrectArtist;
  }

std::string GuessThatLyricGuessCommandJSON::getCorrectArtist(void)
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

const std::string GuessThatLyricGuessCommandJSON::getCorrectArtist(void) const
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

bool GuessThatLyricGuessCommandJSON::hasPlayerLost(void) const
  {
    return flagHasPlayerLost;
  }

bool GuessThatLyricGuessCommandJSON::getPlayerLost(void)
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

const bool GuessThatLyricGuessCommandJSON::getPlayerLost(void) const
  {
    assert(flagHasPlayerLost);
    return storePlayerLost;
  }

bool GuessThatLyricGuessCommandJSON::hasGuessedTracksList(void) const
  {
    return flagHasGuessedTracksList;
  }

size_t GuessThatLyricGuessCommandJSON::countOfGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList.size();
  }

MusicTrackJSON * GuessThatLyricGuessCommandJSON::elementOfGuessedTracksList(size_t element_num)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

const MusicTrackJSON * GuessThatLyricGuessCommandJSON::elementOfGuessedTracksList(size_t element_num) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList[element_num];
  }

std::vector< MusicTrackJSON * > GuessThatLyricGuessCommandJSON::getGuessedTracksList(void)
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

const std::vector< MusicTrackJSON * > GuessThatLyricGuessCommandJSON::getGuessedTracksList(void) const
  {
    assert(flagHasGuessedTracksList);
    return storeGuessedTracksList;
  }

char GuessThatLyricGuessCommandJSON::Generator::lowerBoundDecade[] = "0";
char GuessThatLyricGuessCommandJSON::Generator::lowerBoundGuessedCorrectly[] = "0";
GuessThatLyricGuessCommandJSON *GuessThatLyricGuessCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GuessThatLyricGuessCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GuessThatLyricGuessCommandJSON>, GuessThatLyricGuessCommandJSON *, bool> generator("Type GuessThatLyricGuessCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
